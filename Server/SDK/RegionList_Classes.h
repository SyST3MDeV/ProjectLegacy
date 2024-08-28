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
	 * WidgetBlueprintGeneratedClass RegionList.RegionList_C
	 * Size -> 0x0019 (FullSize[0x0249] - InheritedSize[0x0230])
	 */
	class URegionList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    DefaultButton;                                           // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionListView*                                      RegionList;                                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       bSaveRegion;                                             // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void FillRegionList(class UMatchmakingContext* self2);
		void Construct();
		void BndEvt__RegionList_K2Node_ComponentBoundEvent_10_ListViewEvent__DelegateSignature(class UObject* Item);
		void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_31_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnRefreshPingComplete();
		void ExecuteUbergraph_RegionList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
