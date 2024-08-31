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
	 * WidgetBlueprintGeneratedClass DraftTeam_Friendly.DraftTeam_Friendly_C
	 * Size -> 0x0030 (FullSize[0x0348] - InheritedSize[0x0318])
	 */
	class UDraftTeam_Friendly_C : public UOrionDraftTeamRoster
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDraftPlayer_Teammate_C*                             DraftPlayer;                                             // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDraftPlayer_Teammate_C*                             DraftPlayer_C_1;                                         // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDraftPlayer_Teammate_C*                             DraftPlayer_C_2;                                         // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDraftPlayer_Teammate_C*                             DraftPlayer_C_3;                                         // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDraftPlayer_Teammate_C*                             DraftPlayer_C_4;                                         // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Construct();
		void ExecuteUbergraph_DraftTeam_Friendly(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
