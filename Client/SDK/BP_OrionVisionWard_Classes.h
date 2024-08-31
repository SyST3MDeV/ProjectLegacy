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
	 * BlueprintGeneratedClass BP_OrionVisionWard.BP_OrionVisionWard_C
	 * Size -> 0x00C8 (FullSize[0x05B8] - InheritedSize[0x04F0])
	 */
	class ABP_OrionVisionWard_C : public AOrionVisionWard
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Sphere;                                                  // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_Ward_Spotted;                                          // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USkeletalMeshComponent*                              WardMesh;                                                // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UArrowComponent*                                     Arrow;                                                   // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USphereComponent*                                    SightRange;                                              // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UCapsuleComponent*                                   Capsule;                                                 // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UMaterialInterface*                                  M_Range;                                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            DMI_Range;                                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            DMI_Ward;                                                // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                Damage_Number_Pops;                                      // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MinCoinsToSpawn;                                         // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        WardColor;                                               // 0x054C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_P456[0x4];                                   // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        ShadowPlaneTag;                                          // 0x0560(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SawInShadowPlane;                                        // 0x0568(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FX29[0x3];                                   // 0x0569(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShadowPlaneCoolDown;                                     // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FGameplayTagContainer                               ShadowPlaneTagContainer;                                 // 0x0570(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_Ward_Stealth;                                         // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  M_WardShimmer;                                           // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  M_Ward;                                                  // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                WardGlow;                                                // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                TeamColor;                                               // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FVector GetNumberPopLocation(const struct FVector& HitLocation);
		void GetTargetingLocation(struct FVector* OutPosition);
		void DropCoins();
		void GetAimTargetSensingLocation(struct FVector* AimPosition);
		void SetupColors(EOrionTeam TeamNum);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnTeamChanged(EOrionTeam NewTeamIdx);
		void OnDeath();
		void ApplyShadowPlaneMaterials();
		void RemoveShadowPlaneMaterials();
		void OnDamageTaken(float Damage, class AActor* DamageInstigator);
		void EnterShadowPlane();
		void ExecuteUbergraph_BP_OrionVisionWard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
