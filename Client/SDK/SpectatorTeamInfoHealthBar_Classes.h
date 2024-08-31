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
	 * WidgetBlueprintGeneratedClass SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C
	 * Size -> 0x002E (FullSize[0x0276] - InheritedSize[0x0248])
	 */
	class USpectatorTeamInfoHealthBar_C : public UOrionUserWidget_HUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Background;                                              // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UProgressBar*                                        EnergyBar;                                               // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UProgressBar*                                        HealthBar;                                               // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          LevelText;                                               // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		int32_t                                                    PlayerIndex;                                             // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EOrionTeam                                                 PlayerTeam;                                              // 0x0274(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EOrionTeam                                                 NewVar_1;                                                // 0x0275(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetPlayer(EOrionTeam Team, int32_t PlayerIndex);
		void UpdateHeroHealthandEnergy();
		void InternalGetTeamUIInfo(struct FOrionSpectatorHUDPlayerInfo* ReturnInfo);
		void UpdateHeroLevel();
		void Construct();
		void ExecuteUbergraph_SpectatorTeamInfoHealthBar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
