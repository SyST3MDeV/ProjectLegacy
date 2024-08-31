#pragma once

/**
 * Name: Paragon
 * Version: v34
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
	 * Size -> 0x0008 (FullSize[0x03A8] - InheritedSize[0x03A0])
	 */
	class UTeamCommsMenuV3_C : public UOrionGenericMarkingMenu_TeamComms
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnOpen();
		void OnClose();
		void ExecuteUbergraph_TeamCommsMenuV3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
