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
	 * WidgetBlueprintGeneratedClass HeroDetails_Path.HeroDetails_Path_C
	 * Size -> 0x0020 (FullSize[0x05B0] - InheritedSize[0x0590])
	 */
	class UHeroDetails_Path_C : public UOrionHeroDetails_Path
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0590(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_LockContent;                                      // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            Overlay_Lock;                                            // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     Text_HeroLockMessage;                                    // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void OnHeroSet(class UOrionMcpHeroItem* Hero);
		void ExecuteUbergraph_HeroDetails_Path(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
