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
	 * WidgetBlueprintGeneratedClass BannerEditorRoot.BannerEditorRoot_C
	 * Size -> 0x00CB (FullSize[0x093B] - InheritedSize[0x0870])
	 */
	class UBannerEditorRoot_C : public UOrionBannerEditor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0870(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    SaveButton;                                              // 0x0878(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Outro_Anim;                                              // 0x0880(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Effects_Leave;                                           // 0x0888(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Charms_Leave;                                            // 0x0890(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Effects_Deselection;                                     // 0x0898(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Charms_Deselection;                                      // 0x08A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Effects_Select;                                          // 0x08A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Charms_Select;                                           // 0x08B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Outro_Anim_itempicker;                                   // 0x08B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Intro_Anim;                                              // 0x08C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Rename;                                                  // 0x08C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    EffectsHover;                                            // 0x08D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    CharmsHover;                                             // 0x08D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UEventWidget*                                        Charm_Events;                                            // 0x08E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UEventWidget*                                        Effects_Events;                                          // 0x08E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UExclusiveModeMenu_C*                                ExclusiveModeMenu;                                       // 0x08F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_Charms_BG;                                         // 0x08F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_CharmsSidebar;                                     // 0x0900(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_CharmUnderline;                                    // 0x0908(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_Effects_BG;                                        // 0x0910(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_EffectsSidebar;                                    // 0x0918(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_EffectsUnderline;                                  // 0x0920(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_HighlightRename;                                   // 0x0928(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            SaveButtonBox;                                           // 0x0930(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       bIsExiting;                                              // 0x0938(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlotGroup                                                 LastHoveredGroup;                                        // 0x0939(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isSelected;                                              // 0x093A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Construct();
		void BP_OnBannerNameChanged(const class FText& bannerName);
		void BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_23_OnBackClicked__DelegateSignature();
		void BndEvt__EventWidget_0_K2Node_ComponentBoundEvent_7_OnMouseEvent__DelegateSignature();
		void BndEvt__EventWidget_0_K2Node_ComponentBoundEvent_16_OnMouseEvent__DelegateSignature();
		void BndEvt__Effects_Events_K2Node_ComponentBoundEvent_65_OnMouseEvent__DelegateSignature();
		void BndEvt__Effects_Events_K2Node_ComponentBoundEvent_76_OnMouseEvent__DelegateSignature();
		void BndEvt__Intro_Anim_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__Intro_Anim_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void OnActivated();
		void OnDeactivated();
		void BP_OnHighlightGroup(ESlotGroup GroupToHighlight);
		void BP_OnCommandsChanged(int32_t CommandCount);
		void ExecuteUbergraph_BannerEditorRoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
