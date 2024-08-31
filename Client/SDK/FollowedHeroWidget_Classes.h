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
	 * WidgetBlueprintGeneratedClass FollowedHeroWidget.FollowedHeroWidget_C
	 * Size -> 0x0040 (FullSize[0x0288] - InheritedSize[0x0248])
	 */
	class UFollowedHeroWidget_C : public UOrionUserWidget_HUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAbilityWidgetContainerV4_C*                         AbilityWidgetContainerV4_9;                              // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBP_XPWidgetWrapper_C*                               BP_XPWidgetWrapper_234;                                  // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardAbilityWidgetContainerV4_C*                     CardAbilityWidgetContainerV4_1;                          // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKDAWidgetV4_C*                                      KDAWidgetV4_128;                                         // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPlayerStatusAssembly_C*                             PlayerStatusAssembly_10;                                 // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URetainerBox*                                        RetainerBox_1;                                           // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		EOrionTeam                                                 FollowedHeroTeam;                                        // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I7B0[0x3];                                   // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FollowedHeroPlayerIndex;                                 // 0x0284(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void InitInHUD(class UOrionBaseHUDWidget* InHUDWidget);
		void Construct();
		void OnSpectatorWatchedHeroChange(EOrionTeam HeroTeam, int32_t HeroIndex);
		void ExecuteUbergraph_FollowedHeroWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
