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
	 * WidgetBlueprintGeneratedClass Keybindings.Keybindings_C
	 * Size -> 0x0030 (FullSize[0x0468] - InheritedSize[0x0438])
	 */
	class UKeybindings_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_5KBV[0x8];                                   // 0x0438(0x0008) Fix Super Size
		class UControlBlock_C*                                     ControlBlock;                                            // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UControlBlock_C*                                     ControlBlock_186;                                        // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UControlBlock_C*                                     ControlBlock_C_84;                                       // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UControlBlock_C*                                     ControlBlock_C_85;                                       // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UControlBlock_C*                                     ControlBlock_C_208;                                      // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
