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
	 * BlueprintGeneratedClass GA_Card_Blink_For_Mana.GA_Card_Blink_For_Mana_C
	 * Size -> 0x0000 (FullSize[0x0A7C] - InheritedSize[0x0A7C])
	 */
	class UGA_Card_Blink_For_Mana_C : public UGA_Card_Blink_Targeting_Parent_C
	{
	public:
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
