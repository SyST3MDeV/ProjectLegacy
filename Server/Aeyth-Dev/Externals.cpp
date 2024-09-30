#include "Externals.h"

std::string Global_Map;
int Global_Port;

std::wstring Config;
std::wstring Logger;
std::wstring MainFolder;
std::vector<std::string> Maps = {"Origin", "Agora_P"};


// Converts a normal string into a wide string
std::wstring Convertion(const std::string& normalStr) {
    std::wstring String;
    String.assign(normalStr.begin(), normalStr.end());
    return String;
}

// Converts a wide string into a normal string
std::string Revertion(const std::wstring& wideStr) {
    std::string WideString;
    WideString.assign(wideStr.begin(), wideStr.end());
    return WideString;
}

// Easier to type 'Log' than to format std::cout every single time
void Log(const std::string& msg) {
    std::cout << msg << std::endl;
}

// Same principle applies
void Tick(const int& T) {
    Sleep(T * 1000);
}

std::string RetrieveTime() { 
	auto now = std::chrono::system_clock::now();
	std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
	std::tm now_tm;
	localtime_s(&now_tm, &now_time_t);
	std::stringstream Timestamp;

	Timestamp << std::put_time(&now_tm, "%m/%d/%Y %H:%M:%S %p");

	return Timestamp.str();
	
}

void InitLog() {
	std::ofstream Log(Logger);
	Log << "[" + RetrieveTime() + "] " << "[INITIALIZED] - ProjectLegacy has been successfully attached.\n";
	Log.close();
}

void DebugLog(std::string LogType, std::string Text) {
	std::string Category = "[" + LogType + "] - ";
	std::ofstream Log(Logger, std::ios::app);
	Log << "[" + RetrieveTime() + "] " << Category << Text + "\n";
}

/*bool IsValidMap(const std::string& Name) {
	return (Name == "Origin" || Name == "Agora_P");
	DebugLog("IsValidMap", Name + " is not a valid map, please take a look at the list of valid maps. (PS: It's case-sensitive)");
	return false;
}*/

bool IsValidNumber(const std::string& Number) {
	int Test;
	try {
		Test = std::stoi(Number);
	}
	catch (const std::exception& e) {
		DebugLog("IsValidNumber", Number + " is not a valid number, please remove any special characters if applicable.");
		return false;
	}
	return true;
}

void ParseCFG() {
	std::ifstream CFG(Config);
	if (!CFG.good()) {
		std::ofstream CFG(Config);
		CFG << "[Game]\nMap=Agora_P\nPort=8570\n\n" << std::endl;
		CFG.close();
		std::wstring FailureMSG = L"Failed to locate 'Config.ini' within:\n\n" + MainFolder + L"\nA new one has been constructed within this directory.";
		const int Reload = MessageBox(NULL, FailureMSG.c_str(), L"! Failed To Find Config !", MB_OK | MB_SYSTEMMODAL);
		switch (Reload) 
		{
		case IDOK:
			abort();
			break;
		}
	}
	else {
		std::string line;
		std::string section;

		while (std::getline(CFG, line)) {

			line.erase(line.find_last_not_of(" \t") + 1);
			line.erase(0, line.find_first_not_of(" \t"));

			if (line.empty() || line[0] == ';') {
				continue;
			}

			if (line[0] == '[' && line.back() == ']') {
				section = line.substr(1, line.size() - 2);
				continue;
			}

			auto pos = line.find('=');
			if (pos == std::string::npos) {
				continue; 
			}

			std::string key = line.substr(0, pos);
			std::string value = line.substr(pos + 1);

			if (section == "Game") {
				//Global_Map = (key == "Map" && IsValidMap(value) ? value : "Origin"); I'm tired of this not working when it logically should, I'm also physically tired so 
				if (key == "Map") {
					Global_Map = value;
				}
				Global_Port = (key == "Port" && IsValidNumber(value) ? std::stoi(value) : 8570);
			}
		}
		DebugLog("INFO", "Map : " + Global_Map + " | Port : " + std::to_string(Global_Port));
	}
}