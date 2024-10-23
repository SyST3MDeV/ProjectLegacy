#pragma once

void OnGameInit();

void OnMatchInit();

namespace Hooking {
	void ProcInGameThread(void* ptr);
}