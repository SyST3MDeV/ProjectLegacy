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
	 * WidgetBlueprintGeneratedClass DeckBuilderRoot.DeckBuilderRoot_C
	 * Size -> 0x0040 (FullSize[0x0790] - InheritedSize[0x0750])
	 */
	class UDeckBuilderRoot_C : public UOrionDeckBuilder
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0750(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCircularThrobber*                                   CircularThrobber_1;                                      // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_2;                                                 // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_4;                                                 // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_5;                                                 // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_6;                                                 // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UThrobber*                                           Throbber_187;                                            // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Construct();
		void BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_11_OnBackClicked__DelegateSignature();
		void ExecuteUbergraph_DeckBuilderRoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
