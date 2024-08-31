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
	 * WidgetBlueprintGeneratedClass CardPointsWidget_V4.CardPointsWidget-V4_C
	 * Size -> 0x0018 (FullSize[0x02F8] - InheritedSize[0x02E0])
	 */
	class UCardPointsWidgetV4_C : public UOrionCardPointsWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          BP_PointsText;                                           // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            ParentBox;                                               // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Construct();
		void ShowWidget();
		void HideWidget();
		void ExecuteUbergraph_CardPointsWidgetV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
