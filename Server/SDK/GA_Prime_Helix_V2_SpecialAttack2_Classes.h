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
	 * GameplayAbilityBlueprintGeneratedClass GA_Prime_Helix_V2_SpecialAttack2.GA_Prime_Helix_V2_SpecialAttack2_C
	 * Size -> 0x0038 (FullSize[0x0A88] - InheritedSize[0x0A50])
	 */
	class UGA_Prime_Helix_V2_SpecialAttack2_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              SpawnedVolume;                                           // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AbilityDuration;                                         // 0x0A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SpecialAttackAnimationIndex;                             // 0x0A64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpecialAttackTime;                                       // 0x0A68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_POP6[0x4];                                   // 0x0A6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SpawnBubble_Name;                                        // 0x0A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                End_Name;                                                // 0x0A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        SpecialAttack2montage;                                   // 0x0A80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Added_41DCAFDF4BCCDE873529E5B9336B25DD();
		void OnNotifyEnd_8F007D9E4263ED4823B4F78FE45DF1BC(const class FName& NotifyName);
		void OnNotifyBegin_8F007D9E4263ED4823B4F78FE45DF1BC(const class FName& NotifyName);
		void OnCancelled_8F007D9E4263ED4823B4F78FE45DF1BC(const class FName& NotifyName);
		void OnInterrupted_8F007D9E4263ED4823B4F78FE45DF1BC(const class FName& NotifyName);
		void OnBlendOut_8F007D9E4263ED4823B4F78FE45DF1BC(const class FName& NotifyName);
		void OnCompleted_8F007D9E4263ED4823B4F78FE45DF1BC(const class FName& NotifyName);
		void FailedToSpawn_C3A6E38340A52A5CC6B161AB94E9FCD0(class AActor* SpawnedActor);
		void NotAuthority_C3A6E38340A52A5CC6B161AB94E9FCD0(class AActor* SpawnedActor);
		void Success_C3A6E38340A52A5CC6B161AB94E9FCD0(class AActor* SpawnedActor);
		void OnStateInterrupted_11D006A3418CDF90AAAA3780CDC77DFE();
		void OnStateEnded_11D006A3418CDF90AAAA3780CDC77DFE();
		void OnStateInterrupted_52B7214340D1BD6C35DC7A8EE9F8E575();
		void OnStateEnded_52B7214340D1BD6C35DC7A8EE9F8E575();
		void K2_ActivateAbility();
		void K2_OnEndAbility();
		void ExecuteUbergraph_GA_Prime_Helix_V2_SpecialAttack2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
