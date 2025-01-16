#pragma once

/**
 * Name: Paragon
 * Version: v30
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
	 * WidgetBlueprintGeneratedClass AbilityFail_Energy.AbilityFail_Energy_C
	 * Size -> 0x0018 (FullSize[0x0378] - InheritedSize[0x0360])
	 */
	class UAbilityFail_Energy_C : public UOrionCombatMessageWidget
	{
	public:
		unsigned char                                              UnknownData_QTFG[0x18];                                  // 0x0360(0x0018) MISSED OFFSET (PADDING)

	public:
		void Construct();
		void ExecuteUbergraph_AbilityFail_Energy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
