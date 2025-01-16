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
	 * WidgetBlueprintGeneratedClass TeamCommsMenu_V3.TeamCommsMenu-V3_C
	 * Size -> 0x0008 (FullSize[0x0380] - InheritedSize[0x0378])
	 */
	class UTeamCommsMenuV3_C : public UOrionGenericMarkingMenu_TeamComms
	{
	public:
		unsigned char                                              UnknownData_L4DQ[0x8];                                   // 0x0378(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnOpen();
		void OnClose();
		void OnToggleEmotes();
		void ExecuteUbergraph_TeamCommsMenuV3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
