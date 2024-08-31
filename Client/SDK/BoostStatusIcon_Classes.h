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
	 * WidgetBlueprintGeneratedClass BoostStatusIcon.BoostStatusIcon_C
	 * Size -> 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
	 */
	class UBoostStatusIcon_C : public UOrionUserWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ImageBoostIcon;                                          // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionWidgetSwitcher*                                SwitchBoostStatusSwitch;                                 // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     TextBoostActive;                                         // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void UpdateIcon();
		void Construct();
		void ExecuteUbergraph_BoostStatusIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
