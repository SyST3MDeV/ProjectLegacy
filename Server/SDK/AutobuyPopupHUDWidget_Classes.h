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
	 * WidgetBlueprintGeneratedClass AutobuyPopupHUDWidget.AutobuyPopupHUDWidget_C
	 * Size -> 0x0034 (FullSize[0x04C4] - InheritedSize[0x0490])
	 */
	class UAutobuyPopupHUDWidget_C : public UOrionAutobuyHUDPopupWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Cards_FlyIn;                                             // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Whole_ZoomOut;                                           // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Cards_ZoomIn;                                            // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Cards_FlyOut;                                            // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Whole_ZoomIn;                                            // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		int32_t                                                    NumOfSetsLooped;                                         // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Construct();
		void OnWholeZoomInFinished();
		void OnCardZoomOutFinished();
		void OnCardsZoomInFinished();
		void OnActivated();
		void OnDeactivated();
		void OnCardZoomOutFinalFinished();
		void ExecuteUbergraph_AutobuyPopupHUDWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
