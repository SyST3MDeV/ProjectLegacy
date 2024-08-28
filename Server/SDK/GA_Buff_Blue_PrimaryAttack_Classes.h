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
	 * BlueprintGeneratedClass GA_Buff_Blue_PrimaryAttack.GA_Buff_Blue_PrimaryAttack_C
	 * Size -> 0x0020 (FullSize[0x0A70] - InheritedSize[0x0A50])
	 */
	class UGA_Buff_Blue_PrimaryAttack_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAnimMontage*                                        Fire;                                                    // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        FireA;                                                   // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        FireB;                                                   // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnNotifyEnd_EE75F5AA4723D93C1B9E01B42B8EC2A1(const class FName& NotifyName);
		void OnNotifyBegin_EE75F5AA4723D93C1B9E01B42B8EC2A1(const class FName& NotifyName);
		void OnCancelled_EE75F5AA4723D93C1B9E01B42B8EC2A1(const class FName& NotifyName);
		void OnInterrupted_EE75F5AA4723D93C1B9E01B42B8EC2A1(const class FName& NotifyName);
		void OnBlendOut_EE75F5AA4723D93C1B9E01B42B8EC2A1(const class FName& NotifyName);
		void OnCompleted_EE75F5AA4723D93C1B9E01B42B8EC2A1(const class FName& NotifyName);
		void OnNotifyEnd_29ED4B38410B27C8CC2E3A8CF49C4FFB(const class FName& NotifyName);
		void OnNotifyBegin_29ED4B38410B27C8CC2E3A8CF49C4FFB(const class FName& NotifyName);
		void OnCancelled_29ED4B38410B27C8CC2E3A8CF49C4FFB(const class FName& NotifyName);
		void OnInterrupted_29ED4B38410B27C8CC2E3A8CF49C4FFB(const class FName& NotifyName);
		void OnBlendOut_29ED4B38410B27C8CC2E3A8CF49C4FFB(const class FName& NotifyName);
		void OnCompleted_29ED4B38410B27C8CC2E3A8CF49C4FFB(const class FName& NotifyName);
		void FailedToSpawn_CE1F20C5494D039F7419C888C89B9BE3(class AOrionProjectile* SpawnedProjectile);
		void NotAuthority_CE1F20C5494D039F7419C888C89B9BE3(class AOrionProjectile* SpawnedProjectile);
		void PreSpawned_CE1F20C5494D039F7419C888C89B9BE3(class AOrionProjectile* SpawnedProjectile);
		void Success_CE1F20C5494D039F7419C888C89B9BE3(class AOrionProjectile* SpawnedProjectile);
		void OnNotifyEnd_CEA65A7A483D5251D5519BA8B922DE3B(const class FName& NotifyName);
		void OnNotifyBegin_CEA65A7A483D5251D5519BA8B922DE3B(const class FName& NotifyName);
		void OnCancelled_CEA65A7A483D5251D5519BA8B922DE3B(const class FName& NotifyName);
		void OnInterrupted_CEA65A7A483D5251D5519BA8B922DE3B(const class FName& NotifyName);
		void OnBlendOut_CEA65A7A483D5251D5519BA8B922DE3B(const class FName& NotifyName);
		void OnCompleted_CEA65A7A483D5251D5519BA8B922DE3B(const class FName& NotifyName);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Buff_Blue_PrimaryAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
