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
	 * BlueprintGeneratedClass GA_Prime_Helix_PrimaryAttack.GA_Prime_Helix_PrimaryAttack_C
	 * Size -> 0x0020 (FullSize[0x0A70] - InheritedSize[0x0A50])
	 */
	class UGA_Prime_Helix_PrimaryAttack_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAnimMontage*                                        PrimaryFireMontage;                                      // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                DoDamageName;                                            // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AOrionChar*                                          CurrentTarget;                                           // 0x0A68(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnNotifyEnd_D9C1AA114193BD9693342FB0EFB53450(const class FName& NotifyName);
		void OnNotifyBegin_D9C1AA114193BD9693342FB0EFB53450(const class FName& NotifyName);
		void OnCancelled_D9C1AA114193BD9693342FB0EFB53450(const class FName& NotifyName);
		void OnInterrupted_D9C1AA114193BD9693342FB0EFB53450(const class FName& NotifyName);
		void OnBlendOut_D9C1AA114193BD9693342FB0EFB53450(const class FName& NotifyName);
		void OnCompleted_D9C1AA114193BD9693342FB0EFB53450(const class FName& NotifyName);
		void FailedToSpawn_872DC5B445DB407423B939A03225AC56(class AActor* SpawnedActor);
		void NotAuthority_872DC5B445DB407423B939A03225AC56(class AActor* SpawnedActor);
		void Success_872DC5B445DB407423B939A03225AC56(class AActor* SpawnedActor);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Prime_Helix_PrimaryAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
