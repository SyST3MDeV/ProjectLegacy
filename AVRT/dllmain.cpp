// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <thread>
#include "powerbase.h"
#include <iostream>

#pragma comment(lib, "PowrProf.lib")

#include "MinHook/include/MinHook.h"

#pragma comment(lib, "MinHook/lib/libMinHook-x64-v141-mt.lib")

#define IS_SERVER true

extern "C" LONG __stdcall CallNtPowerInformationFake(POWER_INFORMATION_LEVEL InformationLevel, PVOID InputBuffer, ULONG InputBufferLength, PVOID OutputBuffer, ULONG OutputBufferLength) {
    return CallNtPowerInformation(InformationLevel, InputBuffer, InputBufferLength, OutputBuffer, OutputBufferLength);
}

void* origInitRHI = nullptr;
void InitRHIHook(__int64 a1) {
    reinterpret_cast<void(*)()>((uintptr_t)GetModuleHandleA("OrionClient-Win64-Shipping.exe") + 0x13B7EC0)();
}

void LoadLibraryThread() {
#if IS_SERVER
    MH_Initialize();

    void* initRHI = (void*)((uintptr_t)GetModuleHandleA("OrionClient-Win64-Shipping.exe") + 0x13BF510);

    MH_CreateHook(initRHI, reinterpret_cast<void*>(InitRHIHook), &origInitRHI);

    MH_EnableHook(initRHI);

    Sleep(120 * 1000);

    LoadLibraryA("Server.dll");
#else
    Sleep(60 * 1000);

    LoadLibraryA("Client.dll");
#endif
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        std::thread t(LoadLibraryThread);
        t.detach();
    }
    return TRUE;
}

