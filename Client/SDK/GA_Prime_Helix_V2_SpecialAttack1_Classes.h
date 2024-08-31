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
	 * GameplayAbilityBlueprintGeneratedClass GA_Prime_Helix_V2_SpecialAttack1.GA_Prime_Helix_V2_SpecialAttack1_C
	 * Size -> 0x00D0 (FullSize[0x0B20] - InheritedSize[0x0A50])
	 */
	class UGA_Prime_Helix_V2_SpecialAttack1_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              SpawnedVolume1;                                          // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              SpawnedVolume2;                                          // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              SpawnedVolume3;                                          // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SpecialAttackAnimationIndex;                             // 0x0A70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AbilityDuration;                                         // 0x0A74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FVector>                                     AttackLocations;                                         // 0x0A78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      SpecialAttackTime;                                       // 0x0A88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_16WQ[0x4];                                   // 0x0A8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              MarkedVol;                                               // 0x0A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N51K[0x8];                                   // 0x0A98(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MarkedVolTrans;                                          // 0x0AA0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxPlayerCount;                                          // 0x0AD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FullRoot;                                                // 0x0AD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              DamageVol;                                               // 0x0AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FName>                                        DamageDataName;                                          // 0x0AE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AOrionChar*                                          PrimaryTarget;                                           // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FName>                                        RootDataName;                                            // 0x0AF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      ProjectileTime;                                          // 0x0B08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YTZ6[0x4];                                   // 0x0B0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FireProjName;                                            // 0x0B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        SpecialAttack1Montage;                                   // 0x0B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnStateInterrupted_827E6C8D4020C529F9924292404BDA0B();
		void OnStateEnded_827E6C8D4020C529F9924292404BDA0B();
		void Added_437209444A3494440AB02690770F3A81();
		void FailedToSpawn_89FBB6B5485117CC1B64CDB9472C2D8C(class AActor* SpawnedActor);
		void NotAuthority_89FBB6B5485117CC1B64CDB9472C2D8C(class AActor* SpawnedActor);
		void Success_89FBB6B5485117CC1B64CDB9472C2D8C(class AActor* SpawnedActor);
		void OnNotifyEnd_EF10DCCE49481E384FA2718E3574A37D(const class FName& NotifyName);
		void OnNotifyBegin_EF10DCCE49481E384FA2718E3574A37D(const class FName& NotifyName);
		void OnCancelled_EF10DCCE49481E384FA2718E3574A37D(const class FName& NotifyName);
		void OnInterrupted_EF10DCCE49481E384FA2718E3574A37D(const class FName& NotifyName);
		void OnBlendOut_EF10DCCE49481E384FA2718E3574A37D(const class FName& NotifyName);
		void OnCompleted_EF10DCCE49481E384FA2718E3574A37D(const class FName& NotifyName);
		void FailedToSpawn_31528DBC4AC4C33B615B349F398FC47A(class AActor* SpawnedActor);
		void NotAuthority_31528DBC4AC4C33B615B349F398FC47A(class AActor* SpawnedActor);
		void Success_31528DBC4AC4C33B615B349F398FC47A(class AActor* SpawnedActor);
		void FailedToSpawn_804E00404BFB7741FE84C48C921823F0(class AActor* SpawnedActor);
		void NotAuthority_804E00404BFB7741FE84C48C921823F0(class AActor* SpawnedActor);
		void Success_804E00404BFB7741FE84C48C921823F0(class AActor* SpawnedActor);
		void OnStateInterrupted_5BCE85AD49648E255A64249B171DDB2D();
		void OnStateEnded_5BCE85AD49648E255A64249B171DDB2D();
		void OnStateInterrupted_7CDE69334646254937451B925A3A2D02();
		void OnStateEnded_7CDE69334646254937451B925A3A2D02();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Prime_Helix_V2_SpecialAttack1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
