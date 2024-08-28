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
	 * WidgetBlueprintGeneratedClass RewardsTodayToolTip.RewardsTodayToolTip_C
	 * Size -> 0x0028 (FullSize[0x0340] - InheritedSize[0x0318])
	 */
	class URewardsTodayToolTip_C : public UOrionTooltipBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOrionTextBlock*                                     TipText;                                                 // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                Tip;                                                     // 0x0328(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void Construct();
		void ExecuteUbergraph_RewardsTodayToolTip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
