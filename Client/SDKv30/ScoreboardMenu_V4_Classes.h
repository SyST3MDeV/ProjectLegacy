#pragma once

/**
 * Name: Paragon
 * Version: v30
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass ScoreboardMenu_V4.ScoreboardMenu-V4_C
	 * Size -> 0x0040 (FullSize[0x0278] - InheritedSize[0x0238])
	 */
	class UScoreboardMenuV4_C : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_2MZE[0x40];                                  // 0x0238(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnOpen();
		void OnClose();
		void ExecuteUbergraph_ScoreboardMenuV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
