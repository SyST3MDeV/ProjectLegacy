﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass HUDIndicatorOverlayWidget.HUDIndicatorOverlayWidget_C
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class UHUDIndicatorOverlayWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOrionWidget_HUDIndicatorOverlay*                    HUDIndicatorOverlay;                                     // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Construct();
		void ExecuteUbergraph_HUDIndicatorOverlayWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif