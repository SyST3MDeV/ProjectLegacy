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
	 * WidgetBlueprintGeneratedClass CardAbilityKeyWidget_V4.CardAbilityKeyWidget-V4_C
	 * Size -> 0x0011 (FullSize[0x0241] - InheritedSize[0x0230])
	 */
	class UCardAbilityKeyWidgetV4_C : public UOrionCardButton
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOrionInputVisualizer*                               InputVisualizerAbilityKey;                               // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		EOrionAbilityBinding                                       AbilityBind;                                             // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void Construct();
		void Refresh();
		void ExecuteUbergraph_CardAbilityKeyWidgetV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
