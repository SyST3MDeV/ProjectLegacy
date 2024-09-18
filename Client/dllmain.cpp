#include "SDK.h"

#include <thread>
#include <iostream>
#include <format>

#include "MinHook/include/MinHook.h"

#pragma comment(lib, "MinHook/lib/libMinHook-x64-v141-mt.lib")

using namespace CG;

namespace SDKUtils {
    template <typename T>
    std::vector<T*> GetAllObjectsOfType() {
        return UObject::FindObjects<T>();
    }

    template <typename T>
    T* GetLastOfType() {
        return UObject::FindObjects<T>().back();
    }

    template <typename T>
    void ListAllObjectsOfType() {
        for (T* obj : GetAllObjectsOfType<T>()) {
            UObject* castObj = reinterpret_cast<UObject*>(obj);

            std::cout << castObj->GetFullName() << std::endl;
        }
    }
}

namespace Globals {
    uintptr_t ModuleBase = 0;

    UWorld* GetGWorld() {
        return *UWorld::GWorld;
    }

    UGameplayStatics* GetGameplayStatics() {
        static UGameplayStatics* gameplayStatics = nullptr;

        if (!gameplayStatics) {
            gameplayStatics = UObject::FindObject<UGameplayStatics>();
        }

        return gameplayStatics;
    }

    UKismetStringLibrary* GetKismetStringLibrary() {
        static UKismetStringLibrary* kismetStringLibrary = nullptr;

        if (!kismetStringLibrary) {
            kismetStringLibrary = UObject::FindObject<UKismetStringLibrary>();
        }

        return kismetStringLibrary;
    }

    UEngine* GetEngine() {
        static UEngine* engine = nullptr;

        if (!engine) {
            engine = SDKUtils::GetLastOfType<UEngine>();
        }

        return engine;
    }

    template <typename T>
    T* GetLocalPlayerController() {
        return reinterpret_cast<T*>(GetGWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController);
    }

    template <typename T>
    T* GetLocalPlayerState() {
        return reinterpret_cast<T*>(GetGWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController->PlayerState);
    }

    template <typename T>
    T* GetGameMode() {
        return reinterpret_cast<T*>(GetGWorld()->AuthorityGameMode);
    }

    template <typename T>
    T* GetGameState() {
        return reinterpret_cast<T*>(GetGWorld()->AuthorityGameMode->GameState);
    }
}

namespace EngineLogic {
    void EnableGameConsole() {
        CG::UKismetStringLibrary* stringLibrary = UObject::FindObjects<CG::UKismetStringLibrary>().back();
        CG::UEngine* engine = UObject::FindObjects<CG::UEngine>().back();
        CG::UInputSettings* inputSettings = UObject::FindObjects<CG::UInputSettings>().back();
        CG::UGameplayStatics* gameplayStatics = UObject::FindObjects<CG::UGameplayStatics>().back();

        inputSettings->ConsoleKeys[0].KeyName = stringLibrary->STATIC_Conv_StringToName(L"F2");

        CG::UObject* NewObject = gameplayStatics->STATIC_SpawnObject(engine->ConsoleClass, engine->GameViewport);

        engine->GameViewport->ViewportConsole = reinterpret_cast<CG::UConsole*>(NewObject);
    }

    void ExecuteConsoleCommand(const wchar_t* cmd) {
        static UKismetSystemLibrary* systemLibrary = nullptr;

        if (!systemLibrary) {
            systemLibrary = UObject::FindObject<UKismetSystemLibrary>();
        }

        systemLibrary->STATIC_ExecuteConsoleCommand(Globals::GetGWorld(), cmd, Globals::GetLocalPlayerController<APlayerController>());
    }

    void ConnectToMatch(const wchar_t* ip) {
        static UGameplayStatics* systemLibrary = nullptr;

        if (!systemLibrary) {
            systemLibrary = UObject::FindObject<UGameplayStatics>();
        }

        static UKismetStringLibrary* kismetStringLibrary = nullptr;

        if (!kismetStringLibrary) {
            kismetStringLibrary = UObject::FindObject<UKismetStringLibrary>();
        }

        systemLibrary->STATIC_OpenLevel(Globals::GetGWorld(), kismetStringLibrary->STATIC_Conv_StringToName(ip), true, FString());
    }

    void* Malloc(__int64 size, unsigned int alignment) {
        return reinterpret_cast<void* (__thiscall*)(__int64 size, unsigned int alignment)>(Globals::ModuleBase + 0xDFB9F0)(size, alignment);
    }
}

namespace GameLogic {
    void SetUIState(EOrionUIState state) {
        reinterpret_cast<void(__thiscall*)(UOrionUIManagerWidget*, EOrionUIState)>(Globals::ModuleBase + 0x7DDBC0)(reinterpret_cast<UOrionGameInstance*>(Globals::GetGWorld()->OwningGameInstance)->UIManager, state);
    }

    void HideLoadingScreen() {
        EngineLogic::ExecuteConsoleCommand(L"hideloadingscreen");
    }
}

namespace Hooking {
    bool procingCurrentFuncPtrs = false;

    std::vector<void*> FuncPtrsToProcInGameThread = std::vector<void*>();

    void ProcInGameThread(void* ptr) {
        FuncPtrsToProcInGameThread.push_back(ptr);
    }

    void* origProcessEvent = nullptr;

    void* ProcessEventHook(UObject* object, UFunction* function, void* params) {
        if (!procingCurrentFuncPtrs && FuncPtrsToProcInGameThread.size() > 0) {
            procingCurrentFuncPtrs = true;

            while (FuncPtrsToProcInGameThread.size() > 0) {
                void* funcPtr = FuncPtrsToProcInGameThread.back();

                reinterpret_cast<void(*)()>(funcPtr)();

                FuncPtrsToProcInGameThread.pop_back();
            }

            procingCurrentFuncPtrs = false;
        }

        return reinterpret_cast<void* (__thiscall*)(UObject*, UFunction*, void*)>(origProcessEvent)(object, function, params);
    }

    void* origInitializeMCPProfile = nullptr;

    bool initUI = false;

    bool InitializeMCPProfileHook(APlayerControllerCommon* playercontroller) {
        if (!initUI) {
            initUI = true;
            GameLogic::SetUIState(EOrionUIState::Match);
        }
        return true;
    }

    void* origReturnToMainMenu = nullptr;

    void ReturnToMainMenuHook() {
        return;
    }

    void InitHooking() {
        MH_Initialize();

        void* ProcessEventHookLocal = (void*)(Globals::ModuleBase + 0xFB3420);

        MH_CreateHook(ProcessEventHookLocal, reinterpret_cast<void*>(ProcessEventHook), &origProcessEvent);

        MH_EnableHook(ProcessEventHookLocal);

        void* initMCPProfile = (void*)(Globals::ModuleBase + 0x63F780);

        MH_CreateHook(initMCPProfile, reinterpret_cast<void*>(InitializeMCPProfileHook), &origInitializeMCPProfile);

        MH_EnableHook(initMCPProfile);

        void* returnToMainMenu = (void*)(Globals::ModuleBase + 0x6319C0);

        MH_CreateHook(returnToMainMenu, reinterpret_cast<void*>(ReturnToMainMenuHook), &origReturnToMainMenu);

        MH_EnableHook(returnToMainMenu);

        //
    }
}

void InitConsole() {
    AllocConsole();
    FILE* f = new FILE();
    freopen_s(&f, "CONOUT$", "w", stdout);
}

void OnGameInit() {
    std::cout << "Enabling game console..." << std::endl;
    EngineLogic::EnableGameConsole();
}

void TriggerOnPossessLogic() {
    SDKUtils::GetLastOfType<AOrionPlayerController_Game>()->MyOrionChar = (AOrionChar*)SDKUtils::GetLastOfType<AOrionPlayerController_Game>()->Pawn;
}

void MainLoop() {
    while (!GetAsyncKeyState(VK_F7)) {

    }

    Hooking::ProcInGameThread(TriggerOnPossessLogic);

    while (GetAsyncKeyState(VK_F7)) {

    }
}

void Main() {
    CG::InitSdk();

    InitConsole();

    Globals::ModuleBase = (uintptr_t)GetModuleHandleA("OrionClient-Win64-Shipping.exe");

    Hooking::InitHooking();

    OnGameInit();

    while (true) {
        MainLoop();
    }
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        std::thread t(Main);

        t.detach();
    }
}