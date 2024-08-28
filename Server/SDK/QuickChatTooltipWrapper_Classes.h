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
	 * WidgetBlueprintGeneratedClass QuickChatTooltipWrapper.QuickChatTooltipWrapper_C
	 * Size -> 0x0010 (FullSize[0x04A0] - InheritedSize[0x0490])
	 */
	class UQuickChatTooltipWrapper_C : public UOrionQuickChatWrapper
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            OverlayContent;                                          // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void OnToggleChatOptions(bool bShowChatOptions);
		void ExecuteUbergraph_QuickChatTooltipWrapper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
