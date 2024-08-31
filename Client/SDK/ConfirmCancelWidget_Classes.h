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
	 * WidgetBlueprintGeneratedClass ConfirmCancelWidget.ConfirmCancelWidget_C
	 * Size -> 0x0028 (FullSize[0x0370] - InheritedSize[0x0348])
	 */
	class UConfirmCancelWidget_C : public UOrionAbilityConfirmWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOrionTextBlock*                                     LeftText;                                                // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      MainBox;                                                 // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URetainerBox*                                        RetainerBox_1;                                           // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     RightText;                                               // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void ShowConfirmWidget();
		void HideConfirmWidget(bool bImmediate);
		void ExecuteUbergraph_ConfirmCancelWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
