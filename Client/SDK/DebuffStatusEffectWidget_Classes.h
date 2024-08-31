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
	 * WidgetBlueprintGeneratedClass DebuffStatusEffectWidget.DebuffStatusEffectWidget_C
	 * Size -> 0x0028 (FullSize[0x03C8] - InheritedSize[0x03A0])
	 */
	class UDebuffStatusEffectWidget_C : public UOrionGameplayEffectsWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ArrowOverlay;                                            // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ArrowUnderlay;                                           // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              IconOverlay;                                             // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMaterialInstanceDynamic*                            Mid_1;                                                   // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void TimerStarted(float TimerLength);
		void ExecuteUbergraph_DebuffStatusEffectWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
