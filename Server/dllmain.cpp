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

        engine->GameViewport->ViewportConsole = reinterpret_cast<CG::UConsole * >(NewObject);
    }

    void ExecuteConsoleCommand(const wchar_t* cmd) {
        static UKismetSystemLibrary* systemLibrary = nullptr;

        if (!systemLibrary) {
            systemLibrary = UObject::FindObject<UKismetSystemLibrary>();
        }

        systemLibrary->STATIC_ExecuteConsoleCommand(Globals::GetGWorld(), cmd, Globals::GetLocalPlayerController<APlayerController>());
    }

    void LoadMap(const wchar_t* map, const wchar_t* options) {
        static UGameplayStatics* systemLibrary = nullptr;

        if (!systemLibrary) {
            systemLibrary = UObject::FindObject<UGameplayStatics>();
        }

        static UKismetStringLibrary* kismetStringLibrary = nullptr;

        if (!kismetStringLibrary) {
            kismetStringLibrary = UObject::FindObject<UKismetStringLibrary>();
        }

        systemLibrary->STATIC_OpenLevel(Globals::GetGWorld(), kismetStringLibrary->STATIC_Conv_StringToName(map), true, options);
    }

    void* Malloc(__int64 size, unsigned int alignment) {
        return reinterpret_cast<void* (__thiscall*)(__int64 size, unsigned int alignment)>(Globals::ModuleBase + 0xDFB9F0)(size, alignment);
    }
}

namespace GameLogic {
    void SetupTeams() {
        AOrionGameState_MOBA* gameState = Globals::GetGameState<AOrionGameState_MOBA>();

        gameState->Teams._data = reinterpret_cast<AOrionTeamInfo**>(EngineLogic::Malloc(sizeof(AOrionTeamInfo*) * 3, 0));
        gameState->Teams._count = 4;
        gameState->Teams._max = 4;

        AOrionTeamInfo* redTeamInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->STATIC_BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));

        redTeamInfo->TeamIndex = EOrionTeam::TeamRed;
        redTeamInfo->bPlayerTeam = true;
        redTeamInfo->MaxPlayers = 5;
        redTeamInfo->TeamName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"RedTeam");

        redTeamInfo->TeamMembers._data = reinterpret_cast<AController**>(EngineLogic::Malloc(sizeof(AController*) * 5, 0));
        redTeamInfo->TeamMembers._count = 0;
        redTeamInfo->TeamMembers._max = 5;

        AOrionTeamInfo* blueTeamInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->STATIC_BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));

        blueTeamInfo->TeamIndex = EOrionTeam::TeamBlue;
        blueTeamInfo->bPlayerTeam = true;
        blueTeamInfo->MaxPlayers = 5;
        blueTeamInfo->TeamName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"BlueTeam");

        blueTeamInfo->TeamMembers._data = reinterpret_cast<AController**>(EngineLogic::Malloc(sizeof(AController*) * 5, 0));
        blueTeamInfo->TeamMembers._count = 0;
        blueTeamInfo->TeamMembers._max = 5;

        AOrionTeamInfo* teamCreepInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->STATIC_BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));

        teamCreepInfo->TeamIndex = EOrionTeam::TeamCreep;
        teamCreepInfo->bPlayerTeam = true;
        teamCreepInfo->MaxPlayers = 0;
        teamCreepInfo->TeamName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"RedTeam");

        gameState->Teams[0] = redTeamInfo;
        gameState->Teams[1] = blueTeamInfo;
        gameState->Teams[3] = teamCreepInfo;
    }

    bool AddControllerToTeam(AOrionPlayerController_Game* controller, EOrionTeam team) {
        AOrionGameState_MOBA* gameState = Globals::GetGameState<AOrionGameState_MOBA>();

        for (int i = 0; i < gameState->Teams.Count(); i++) {
            AOrionTeamInfo* teamInfo = gameState->Teams[i];

            if (teamInfo->TeamIndex == team) {
                if (teamInfo->TeamMembers.Count() < 5) {
                    teamInfo->TeamMembers[teamInfo->TeamMembers.Count()] = controller;
                    teamInfo->TeamMembers._count = teamInfo->TeamMembers._count + 1;
                    controller->ServerChangeTeam(team);
                    return true;
                }
            }
        }

        return false;
    }

    void StartMatch() {
        Globals::GetLocalPlayerController<AOrionPlayerController_Game>()->ServerForceStartGame();
    }

    void SetControllerHeroData(AOrionPlayerController_Game* controller, UOrionHeroData* heroData, UOrionSkinItemDefinition* skin) {
        FOrionHeroDataSpec spec = FOrionHeroDataSpec();

        spec.HeroData = heroData;
        spec.Skin = skin;

        reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->ServerSetPlayerHeroDataSpec(spec);

        controller->HeroData = heroData;
        controller->HeroName = L"Kwang";
    }

    void SetUIState(EOrionUIState state) {
        reinterpret_cast<void(__thiscall*)(UOrionUIManagerWidget*, EOrionUIState)>(Globals::ModuleBase + 0x7DDBC0)(reinterpret_cast<UOrionGameInstance*>(Globals::GetGWorld()->OwningGameInstance)->UIManager, state);
    }
}

void InitConsole() {
    AllocConsole();
    FILE* f = new FILE();
    freopen_s(&f, "CONOUT$", "w", stdout);
}

static bool procInGameThread = false;

void OnGameInit() {
    std::cout << "Enabling game console..." << std::endl;
    EngineLogic::EnableGameConsole();

    std::cout << "Loading map..." << std::endl;
    EngineLogic::LoadMap(L"Agora_P", L"");

    Sleep(20 * 1000);

    procInGameThread = true;
}

void MainLoop() {

}

namespace Hooking {
    void* origProcessEvent = nullptr;

    void* ProcessEventHook(UObject* object, UFunction* function, void* params) {
        if (procInGameThread) {
            procInGameThread = false;

            std::cout << "Setting UI state..." << std::endl;
            GameLogic::SetUIState(EOrionUIState::Match);

            std::cout << "Setting up teams..." << std::endl;
            GameLogic::SetupTeams();

            std::cout << "Adding local player to team blue..." << std::endl;
            GameLogic::AddControllerToTeam(Globals::GetLocalPlayerController<AOrionPlayerController_Game>(), EOrionTeam::TeamBlue);

            std::cout << "Setting local player hero data..." << std::endl;
            GameLogic::SetControllerHeroData(Globals::GetLocalPlayerController<AOrionPlayerController_Game>(), UObject::FindObject<UOrionHeroData>("OrionHeroData HeroData_ArcBlade.HeroData_ArcBlade"), UObject::FindObject<UOrionSkinItemDefinition>("OrionSkinItemDefinition MasterSkin_Arcblade.MasterSkin_Arcblade"));

            std::cout << "Starting the match..." << std::endl;
            GameLogic::StartMatch();
        }

        return reinterpret_cast<void* (__thiscall*)(UObject*, UFunction*, void*)>(origProcessEvent)(object, function, params);
    }

    void InitHooking() {
        MH_Initialize();

        void* ProcessEventHookLocal = (void*)(Globals::ModuleBase + 0xFB3420);

        MH_CreateHook(ProcessEventHookLocal, reinterpret_cast<void*>(ProcessEventHook), &origProcessEvent);

        MH_EnableHook(ProcessEventHookLocal);
    }
}

void Main() {
    CG::InitSdk();

    InitConsole();

    Globals::ModuleBase = (uintptr_t)GetModuleHandleA("OrionClient-Win64-Shipping.exe");

    Hooking::InitHooking();

    Sleep(25 * 1000);

    OnGameInit();

    while (true) {
        MainLoop();
    }
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        std::thread t(Main);

        t.detach();
    }
}