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
	 * WidgetBlueprintGeneratedClass DeckImportExport.DeckImportExport_C
	 * Size -> 0x0010 (FullSize[0x0470] - InheritedSize[0x0460])
	 */
	class UDeckImportExport_C : public UOrionDeckBuilder_ImportExport
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    Button_Cancel;                                           // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_29_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void ExecuteUbergraph_DeckImportExport(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
