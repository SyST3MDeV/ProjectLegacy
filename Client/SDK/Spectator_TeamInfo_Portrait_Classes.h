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
	 * WidgetBlueprintGeneratedClass Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C
	 * Size -> 0x0035 (FullSize[0x027D] - InheritedSize[0x0248])
	 */
	class USpectator_TeamInfo_Portrait_C : public UOrionUserWidget_HUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Background;                                              // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              DeathOverlay;                                            // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              IsBeingWatched;                                          // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Portrait;                                                // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          RespawnTimer;                                            // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		int32_t                                                    PlayerIndex;                                             // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EOrionTeam                                                 Team;                                                    // 0x027C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetPlayer(EOrionTeam Team, int32_t PlayerIndex);
		struct FEventReply On_Portrait_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
		void UpdateVisuals(const struct FOrionSpectatorHUDPlayerInfo& PlayerInfo);
		void Construct();
		void OnPlayerInfoUpdated(EOrionTeam TeamNum, int32_t PlayerIndex, const struct FOrionSpectatorHUDPlayerInfo& NewPlayerInfo);
		void ExecuteUbergraph_Spectator_TeamInfo_Portrait(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
