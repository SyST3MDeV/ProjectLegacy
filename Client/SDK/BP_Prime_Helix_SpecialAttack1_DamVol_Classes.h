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
	 * BlueprintGeneratedClass BP_Prime_Helix_SpecialAttack1_DamVol.BP_Prime_Helix_SpecialAttack1_DamVol_C
	 * Size -> 0x004C (FullSize[0x041C] - InheritedSize[0x03D0])
	 */
	class ABP_Prime_Helix_SpecialAttack1_DamVol_C : public AOrionBaseActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    CollisionSphere;                                         // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		float                                                      DelayBeforeHit;                                          // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8OHA[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionFilterAndEffectsContainer                     SpecialAttack1Damage;                                    // 0x03F0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             ParticleInitLoc;                                         // 0x0410(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Prime_Helix_SpecialAttack1_DamVol(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
