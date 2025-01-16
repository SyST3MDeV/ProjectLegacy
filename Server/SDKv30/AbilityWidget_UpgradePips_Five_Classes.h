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
	 * WidgetBlueprintGeneratedClass AbilityWidget_UpgradePips_Five.AbilityWidget_UpgradePips_Five_C
	 * Size -> 0x0090 (FullSize[0x0390] - InheritedSize[0x0300])
	 */
	class UAbilityWidget_UpgradePips_Five_C : public UOrionAbilityPipsWidget
	{
	public:
		unsigned char                                              UnknownData_USB1[0x90];                                  // 0x0300(0x0090) MISSED OFFSET (PADDING)

	public:
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void SetNumOfPips(unsigned char _NumOfPips);
		void ExecuteUbergraph_AbilityWidget_UpgradePips_Five(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
