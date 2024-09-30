#include <string>
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <chrono>
#include <fstream>

extern std::string Global_Map;
extern int Global_Port;


extern std::wstring Config;
extern std::wstring Logger;
extern std::wstring MainFolder;

extern std::wstring Convertion(const std::string& narrowStr);
extern std::string Revertion(const std::wstring& wideStr);

void Log(const std::string& msg);

void Tick(const int& T);

//extern std::string RetrieveTime();
void InitLog();
void DebugLog(std::string LogType, std::string Text);

//extern bool IsValidMap(const std::string& Name);
//extern bool IsValidNumber(const std::string& Number);

void ParseCFG();