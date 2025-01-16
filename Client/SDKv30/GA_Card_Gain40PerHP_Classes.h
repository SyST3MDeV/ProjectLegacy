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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C
	 * Size -> 0x0060 (FullSize[0x0A50] - InheritedSize[0x09F0])
	 */
	class UGA_Card_Gain40PerHP_C : public UOrionAbility
	{
	public:
		unsigned char                                              UnknownData_RDZ4[0x60];                                  // 0x09F0(0x0060) MISSED OFFSET (PADDING)

	public:
		void OnMinionKill_E8EFD428448A47D1F42967A33E267392(int32_t NewValue, class FKillingEffectContext* KilledActor);
		void OnMinionAssist_E8EFD428448A47D1F42967A33E267392(int32_t NewValue, class FKillingEffectContext* KilledActor);
		void OnPlayerKill_E8EFD428448A47D1F42967A33E267392(int32_t NewValue, class FKillingEffectContext* KilledActor);
		void OnPlayerAssist_E8EFD428448A47D1F42967A33E267392(int32_t NewValue, class FKillingEffectContext* KilledActor);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Gain40PerHP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
