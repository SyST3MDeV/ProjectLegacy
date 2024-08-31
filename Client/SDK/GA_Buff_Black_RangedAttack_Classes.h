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
	 * BlueprintGeneratedClass GA_Buff_Black_RangedAttack.GA_Buff_Black_RangedAttack_C
	 * Size -> 0x0030 (FullSize[0x0A80] - InheritedSize[0x0A50])
	 */
	class UGA_Buff_Black_RangedAttack_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAnimMontage*                                        Attack3;                                                 // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Attack2;                                                 // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Attack1;                                                 // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Attack4;                                                 // 0x0A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                NameDoDamage;                                            // 0x0A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnNotifyEnd_C60BC5314BC5A6C3B9BEBCBA653CB154(const class FName& NotifyName);
		void OnNotifyBegin_C60BC5314BC5A6C3B9BEBCBA653CB154(const class FName& NotifyName);
		void OnCancelled_C60BC5314BC5A6C3B9BEBCBA653CB154(const class FName& NotifyName);
		void OnInterrupted_C60BC5314BC5A6C3B9BEBCBA653CB154(const class FName& NotifyName);
		void OnBlendOut_C60BC5314BC5A6C3B9BEBCBA653CB154(const class FName& NotifyName);
		void OnCompleted_C60BC5314BC5A6C3B9BEBCBA653CB154(const class FName& NotifyName);
		void FailedToSpawn_6044C4CC4A54A0269E20AC836A2E0025(class AOrionProjectile* SpawnedProjectile);
		void NotAuthority_6044C4CC4A54A0269E20AC836A2E0025(class AOrionProjectile* SpawnedProjectile);
		void PreSpawned_6044C4CC4A54A0269E20AC836A2E0025(class AOrionProjectile* SpawnedProjectile);
		void Success_6044C4CC4A54A0269E20AC836A2E0025(class AOrionProjectile* SpawnedProjectile);
		void OnNotifyEnd_CF989AF248CC6899420915B31A7FD9E6(const class FName& NotifyName);
		void OnNotifyBegin_CF989AF248CC6899420915B31A7FD9E6(const class FName& NotifyName);
		void OnCancelled_CF989AF248CC6899420915B31A7FD9E6(const class FName& NotifyName);
		void OnInterrupted_CF989AF248CC6899420915B31A7FD9E6(const class FName& NotifyName);
		void OnBlendOut_CF989AF248CC6899420915B31A7FD9E6(const class FName& NotifyName);
		void OnCompleted_CF989AF248CC6899420915B31A7FD9E6(const class FName& NotifyName);
		void OnNotifyEnd_CE0FEF3F424A7D58DEEDFF8C88DBAB45(const class FName& NotifyName);
		void OnNotifyBegin_CE0FEF3F424A7D58DEEDFF8C88DBAB45(const class FName& NotifyName);
		void OnCancelled_CE0FEF3F424A7D58DEEDFF8C88DBAB45(const class FName& NotifyName);
		void OnInterrupted_CE0FEF3F424A7D58DEEDFF8C88DBAB45(const class FName& NotifyName);
		void OnBlendOut_CE0FEF3F424A7D58DEEDFF8C88DBAB45(const class FName& NotifyName);
		void OnCompleted_CE0FEF3F424A7D58DEEDFF8C88DBAB45(const class FName& NotifyName);
		void OnNotifyEnd_C076CDD34EE5F1796CB9F6BE88A1CA04(const class FName& NotifyName);
		void OnNotifyBegin_C076CDD34EE5F1796CB9F6BE88A1CA04(const class FName& NotifyName);
		void OnCancelled_C076CDD34EE5F1796CB9F6BE88A1CA04(const class FName& NotifyName);
		void OnInterrupted_C076CDD34EE5F1796CB9F6BE88A1CA04(const class FName& NotifyName);
		void OnBlendOut_C076CDD34EE5F1796CB9F6BE88A1CA04(const class FName& NotifyName);
		void OnCompleted_C076CDD34EE5F1796CB9F6BE88A1CA04(const class FName& NotifyName);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Buff_Black_RangedAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
