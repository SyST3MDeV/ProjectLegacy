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
	 * WidgetBlueprintGeneratedClass AbilityUpgradeRow_Passive_V4.AbilityUpgradeRow_Passive-V4_C
	 * Size -> 0x0028 (FullSize[0x0428] - InheritedSize[0x0400])
	 */
	class UAbilityUpgradeRow_PassiveV4_C : public UOrionAbilityUpgradeRowWidget
	{
	public:
		unsigned char                                              UnknownData_4665[0x28];                                  // 0x0400(0x0028) MISSED OFFSET (PADDING)

	public:
		void Construct();
		void ExecuteUbergraph_AbilityUpgradeRow_PassiveV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
