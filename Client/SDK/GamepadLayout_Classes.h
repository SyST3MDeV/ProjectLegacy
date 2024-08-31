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
	 * WidgetBlueprintGeneratedClass GamepadLayout.GamepadLayout_C
	 * Size -> 0x00C0 (FullSize[0x0520] - InheritedSize[0x0460])
	 */
	class UGamepadLayout_C : public UOrionGamepadLayoutWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      AltimateContainer;                                       // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               CardShop;                                                // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               circle;                                                  // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               Down;                                                    // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               GamepadButtonLabel_C_1;                                  // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   GamepadConfigSettings;                                   // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Guide;                                                   // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               L1;                                                      // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               L1R1;                                                    // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               L2;                                                      // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               Left;                                                    // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               LeftStick;                                               // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               Options;                                                 // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              PadImage;                                                // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               R1;                                                      // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               R2;                                                      // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               Right;                                                   // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               RightStick;                                              // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               Scoreboard;                                              // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               Square;                                                  // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               Triangle;                                                // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               Up;                                                      // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadButtonLabel_C*                               X;                                                       // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void BndEvt__GamepadConfigSettings_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void OnConfigChange(int32_t Index);
		void OnActivated();
		void ExecuteUbergraph_GamepadLayout(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
