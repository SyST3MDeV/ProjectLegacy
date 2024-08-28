#include "SDK.h"

#include <thread>
#include <iostream>

#include "safetyhook/safetyhook.hpp"

void MainLoop() {

}

void InitHooking() {
    
}

void Main() {
    InitHooking();

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