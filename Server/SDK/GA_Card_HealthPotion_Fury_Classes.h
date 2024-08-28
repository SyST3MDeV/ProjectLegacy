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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_HealthPotion_Fury.GA_Card_HealthPotion_Fury_C
	 * Size -> 0x0000 (FullSize[0x0A78] - InheritedSize[0x0A78])
	 */
	class UGA_Card_HealthPotion_Fury_C : public UGA_Card_OneShotBuff_Parent_C
	{
	public:
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
