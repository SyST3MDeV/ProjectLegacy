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
	 * BlueprintGeneratedClass BP_OrionDamageableObjective_Base.BP_OrionDamageableObjective_Base_C
	 * Size -> 0x0074 (FullSize[0x0954] - InheritedSize[0x08E0])
	 */
	class ABP_OrionDamageableObjective_Base_C : public AOrionDamageableObjective_Base
	{
	public:
		class UAIInfluenceSourceComponent*                         AIInfluenceSource;                                       // 0x08E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		bool                                                       CanDropLoot;                                             // 0x08E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V9RP[0x3];                                   // 0x08E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LootDrops;                                               // 0x08EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RangeHidden;                                             // 0x08F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OZU8[0x7];                                   // 0x08F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     PS_Explode;                                              // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FOrionFilterAndEffectsContainer                     LootFilterandEffectsContainer;                           // 0x0900(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             LootSpawnLocationOffset;                                 // 0x0920(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    SmallDenominationThreshold;                              // 0x092C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGameplayTagContainer                               ObjectiveCoinTags;                                       // 0x0930(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    MinCoinsToSpawn;                                         // 0x0950(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReturnValidOverlapActor(class AActor* OverlapActor, class AActor** ReturnActor, bool* IsValid);
		void HandleLootDrop(int32_t* NumDrops, class AActor* Killer);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
