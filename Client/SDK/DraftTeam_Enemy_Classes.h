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
	 * WidgetBlueprintGeneratedClass DraftTeam_Enemy.DraftTeam_Enemy_C
	 * Size -> 0x0030 (FullSize[0x0348] - InheritedSize[0x0318])
	 */
	class UDraftTeam_Enemy_C : public UOrionDraftTeamRoster
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDraftPlayer_Enemy_C*                                DraftPlayer_Enemy;                                       // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDraftPlayer_Enemy_C*                                DraftPlayer_Enemy_C_1;                                   // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDraftPlayer_Enemy_C*                                DraftPlayer_Enemy_C_2;                                   // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDraftPlayer_Enemy_C*                                DraftPlayer_Enemy_C_3;                                   // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDraftPlayer_Enemy_C*                                DraftPlayer_Enemy_C_4;                                   // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Construct();
		void ExecuteUbergraph_DraftTeam_Enemy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
