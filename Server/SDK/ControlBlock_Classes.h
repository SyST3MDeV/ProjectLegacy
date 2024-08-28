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
	 * WidgetBlueprintGeneratedClass ControlBlock.ControlBlock_C
	 * Size -> 0x0040 (FullSize[0x02E8] - InheritedSize[0x02A8])
	 */
	class UControlBlock_C : public UOrionUserWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        ControlRowBox;                                           // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Title;                                                   // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<struct FControlRowData>                             ControlRows;                                             // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FText                                                TitleText;                                               // 0x02D0(0x0018) Edit, BlueprintVisible

	public:
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_ControlBlock(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
