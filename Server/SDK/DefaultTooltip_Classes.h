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
	 * WidgetBlueprintGeneratedClass DefaultTooltip.DefaultTooltip_C
	 * Size -> 0x0018 (FullSize[0x0330] - InheritedSize[0x0318])
	 */
	class UDefaultTooltip_C : public UOrionBasicTooltipWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOrionTextBlock*                                     OrionTextBody;                                           // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextTitle;                                          // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void UpdateTooltipText(const class FText& NewTooltipText);
		void UpdateTitleText(const class FText& NewTitleText);
		void ExecuteUbergraph_DefaultTooltip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
