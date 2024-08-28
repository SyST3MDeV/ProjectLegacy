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
	 * GameplayAbilityBlueprintGeneratedClass GA_Prime_Helix_V2_SpecialAttack3.GA_Prime_Helix_V2_SpecialAttack3_C
	 * Size -> 0x0048 (FullSize[0x0A98] - InheritedSize[0x0A50])
	 */
	class UGA_Prime_Helix_V2_SpecialAttack3_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              SpawnedVolume;                                           // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AbilityDuration;                                         // 0x0A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SpecialAttackAnimationIndex;                             // 0x0A64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpecialAttackTime;                                       // 0x0A68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_51Y9[0x4];                                   // 0x0A6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      SegmentArray;                                            // 0x0A70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AOrionChar*                                          CurrentTarget;                                           // 0x0A80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                StartDamage_Name;                                        // 0x0A88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        PrimaryAttackMontage;                                    // 0x0A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void FailedToSpawn_12ADA30B4F7418D8007BC0813D01399D(class AActor* SpawnedActor);
		void NotAuthority_12ADA30B4F7418D8007BC0813D01399D(class AActor* SpawnedActor);
		void Success_12ADA30B4F7418D8007BC0813D01399D(class AActor* SpawnedActor);
		void OnStateInterrupted_31FE7FF24BF27170E9067B84998AC3EA();
		void OnStateEnded_31FE7FF24BF27170E9067B84998AC3EA();
		void Added_E398788244090DDE0A20B28281EFFFBB();
		void OnNotifyEnd_5B8A33B54104B5F4C30E57B678944BC1(const class FName& NotifyName);
		void OnNotifyBegin_5B8A33B54104B5F4C30E57B678944BC1(const class FName& NotifyName);
		void OnCancelled_5B8A33B54104B5F4C30E57B678944BC1(const class FName& NotifyName);
		void OnInterrupted_5B8A33B54104B5F4C30E57B678944BC1(const class FName& NotifyName);
		void OnBlendOut_5B8A33B54104B5F4C30E57B678944BC1(const class FName& NotifyName);
		void OnCompleted_5B8A33B54104B5F4C30E57B678944BC1(const class FName& NotifyName);
		void OnCompleted_E624BCA24B59CE9FB180938AB5DD012D();
		void OnStateInterrupted_BE123F9E423EC1498CF3719AF1C70C0A();
		void OnStateEnded_BE123F9E423EC1498CF3719AF1C70C0A();
		void OnStateInterrupted_8E347A4D4C00D2C0631600A12BBE38B7();
		void OnStateEnded_8E347A4D4C00D2C0631600A12BBE38B7();
		void K2_ActivateAbility();
		void K2_OnEndAbility();
		void ExecuteUbergraph_GA_Prime_Helix_V2_SpecialAttack3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
