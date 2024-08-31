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
	 * WidgetBlueprintGeneratedClass KeyboardSettings.KeyboardSettings_C
	 * Size -> 0x00B0 (FullSize[0x04E8] - InheritedSize[0x0438])
	 */
	class UKeyboardSettings_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_YZC4[0x8];                                   // 0x0438(0x0008) Fix Super Size
		class UKeyboardBinding_C*                                  AbilityAlternateBinding;                                 // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  AbilityPrimaryBinding;                                   // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  AbilitySecondaryBinding;                                 // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  AbilityUltimateBinding;                                  // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  BasicAttackBinding;                                      // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  CancelAbilityBinding;                                    // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  CardSlot1Binding;                                        // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  CardSlot2Binding;                                        // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  CardSlot3Binding;                                        // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  CardSlot4Binding;                                        // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  ChatBinding;                                             // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  JumpBinding;                                             // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  ModifyAbilityBinding;                                    // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  MoveBackwarBinding;                                      // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  MoveForwardBinding;                                      // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  MoveLeftBinding;                                         // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  MoveRightBinding;                                        // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  OpenCardShopBinding;                                     // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  RecallToBaseBinding;                                     // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  ScoreboardBinding;                                       // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardBinding_C*                                  TeamCommBinding;                                         // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Reset();
		void Refresh();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
