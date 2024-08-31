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
	 * WidgetBlueprintGeneratedClass CardAbilityWidgetContainer_V4.CardAbilityWidgetContainer-V4_C
	 * Size -> 0x0070 (FullSize[0x0470] - InheritedSize[0x0400])
	 */
	class UCardAbilityWidgetContainerV4_C : public UOrionCardAbilityLayoutWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAutobuyHUDWidget_C*                                 AutobuyHUDWidget;                                        // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URetainerBox*                                        CardPointBox_111;                                        // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            CardPointOverlay;                                        // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardPointsWidgetV4_C*                               CardPointsWidgetV4;                                      // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardSelectionWidget_C*                              CardSelectionWidget;                                     // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardAbilityWidgetV4_C*                              CAW_3;                                                   // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardAbilityWidgetV4_C*                              CAW_4;                                                   // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            CAW_Overlay_1;                                           // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            CAW_Overlay_2;                                           // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            CKW_Overlay_1;                                           // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            CKW_Overlay_2;                                           // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardAbilityKeyWidgetV4_C*                           KeyWidget_Down;                                          // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardAbilityKeyWidgetV4_C*                           KeyWidget_Right;                                         // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void InitInHUD(class UOrionBaseHUDWidget* Widget);
		void Construct();
		void ExecuteUbergraph_CardAbilityWidgetContainerV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
