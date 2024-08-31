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
	 * WidgetBlueprintGeneratedClass Watermark.Watermark_C
	 * Size -> 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
	 */
	class UWatermark_C : public UOrionUserWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          BottomWatermarkText;                                     // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TopWatermarkText;                                        // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FLinearColor                                        WatermarkColor;                                          // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UpdateWatermark();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_Watermark(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
