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
	 * WidgetBlueprintGeneratedClass ExclusiveModeMenu.ExclusiveModeMenu_C
	 * Size -> 0x0079 (FullSize[0x0321] - InheritedSize[0x02A8])
	 */
	class UExclusiveModeMenu_C : public UOrionUserWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    DefaultButtonBack;                                       // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextContext;                                        // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextTitle;                                          // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UNamedSlot*                                          Slot_MenuContent;                                        // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SubMenuBackground;                                       // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTabList_C*                                          TabList_ContentTabs;                                     // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                MenuTitle;                                               // 0x02E0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnBackClicked;                                           // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                MenuContext;                                             // 0x0308(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       EnableBackButton;                                        // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void SetSubMenuVisibility(bool Visibile);
		void SetEnableBackButton(bool IsEnabled);
		void SetContext(const class FText& ContextName);
		void SetTitle(const class FText& Title);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_529_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void ExecuteUbergraph_ExclusiveModeMenu(int32_t EntryPoint);
		void OnBackClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
