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
	 * WidgetBlueprintGeneratedClass PlayerToRate.PlayerToRate_C
	 * Size -> 0x0070 (FullSize[0x0340] - InheritedSize[0x02D0])
	 */
	class UPlayerToRate_C : public UOrionSinglePlayerRating
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMenuAnchor*                                         PopupAnchor;                                             // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                Name;                                                    // 0x02E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       MenuIsOpen;                                              // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YPVU[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URateMenu_C*                                         RateOptions;                                             // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FText                                                Clear;                                                   // 0x0308(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Rate;                                                    // 0x0320(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UPlayerRating_C*                                     PlayerRatingWidget;                                      // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class UWidget* OnGetPopupMenu();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__PopupAnchor_K2Node_ComponentBoundEvent_20_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
		void CloseChildMenu();
		void ExecuteUbergraph_PlayerToRate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
