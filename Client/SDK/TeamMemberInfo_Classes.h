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
	 * WidgetBlueprintGeneratedClass TeamMemberInfo.TeamMemberInfo_C
	 * Size -> 0x0035 (FullSize[0x027D] - InheritedSize[0x0248])
	 */
	class UTeamMemberInfo_C : public UOrionUserWidget_HUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              DeathSkull;                                              // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     PlayerName;                                              // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USpectator_TeamInfo_Portrait_C*                      Spectator_TeamInfo_Portrait;                             // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USpectatorTeamInfoHealthBar_C*                       SpectatorTeamInfoHealthBar;                              // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              UltimateIcon;                                            // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		int32_t                                                    PlayerIndex;                                             // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EOrionTeam                                                 Team;                                                    // 0x027C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UpdateVisuals(const struct FOrionSpectatorHUDPlayerInfo& NewPlayerInfo);
		void Construct();
		void OnUpdatePlayerInfo(EOrionTeam TeamNum, int32_t PlayerIndex, const struct FOrionSpectatorHUDPlayerInfo& NewPlayerInfo);
		void ExecuteUbergraph_TeamMemberInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
