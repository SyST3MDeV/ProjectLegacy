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
	 * WidgetBlueprintGeneratedClass CardSelectionWidget.CardSelectionWidget_C
	 * Size -> 0x0018 (FullSize[0x0338] - InheritedSize[0x0320])
	 */
	class UCardSelectionWidget_C : public UOrionCardSelectionWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ScaleIn;                                                 // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            SizeBox_1;                                               // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Construct();
		void ExitSelectionMode();
		void EnterSelectionMode();
		void ExecuteUbergraph_CardSelectionWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
