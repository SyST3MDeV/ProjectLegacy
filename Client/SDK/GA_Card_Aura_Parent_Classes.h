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
	 * BlueprintGeneratedClass GA_Card_Aura_Parent.GA_Card_Aura_Parent_C
	 * Size -> 0x0038 (FullSize[0x0A88] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Aura_Parent_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FOrionFilterAndEffectsContainer                     Filter;                                                  // 0x0A58(0x0020) Edit, BlueprintVisible
		float                                                      Level;                                                   // 0x0A78(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Scale;                                                   // 0x0A7C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void DidNotSpawn_1615E2F2405AA68D1E2DE0A9A8F74551(class AActor* SpawnedActor);
		void Success_1615E2F2405AA68D1E2DE0A9A8F74551(class AActor* SpawnedActor);
		void OnStateInterrupted_CD3FCD9B42906F5B1C3BB096DD22D85B();
		void OnStateEnded_CD3FCD9B42906F5B1C3BB096DD22D85B();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Aura_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
