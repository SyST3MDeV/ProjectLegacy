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
	 * GameplayAbilityBlueprintGeneratedClass GA_OnSpawn.GA_OnSpawn_C
	 * Size -> 0x0060 (FullSize[0x0AB0] - InheritedSize[0x0A50])
	 */
	class UGA_OnSpawn_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTag                                        TravelModeActivateTag;                                   // 0x0A58(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_FirstSpawn;                                           // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              SpawnProtection;                                         // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FActiveGameplayEffectHandle                         SpawnProtectionHandle;                                   // 0x0A70(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_TravelMode_SkipCast;                                  // 0x0A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NoSpawnAnimDelay;                                        // 0x0A80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AnimLength;                                              // 0x0A84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_AnySpawn;                                             // 0x0A88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FGameplayTagContainer                               GameplayEffect_CanShopWhileDead;                         // 0x0A90(0x0020) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CheckSpawnPad(class ABP_Hero_C* Hero);
		void OnFinish_EF8C4CE74AFB6D93CD3C2C887D805B5F();
		void OnNotifyEnd_F95C91B146B2CB6F25417A93AB4A967F(const class FName& NotifyName);
		void OnNotifyBegin_F95C91B146B2CB6F25417A93AB4A967F(const class FName& NotifyName);
		void OnCancelled_F95C91B146B2CB6F25417A93AB4A967F(const class FName& NotifyName);
		void OnInterrupted_F95C91B146B2CB6F25417A93AB4A967F(const class FName& NotifyName);
		void OnBlendOut_F95C91B146B2CB6F25417A93AB4A967F(const class FName& NotifyName);
		void OnCompleted_F95C91B146B2CB6F25417A93AB4A967F(const class FName& NotifyName);
		void OnNotifyEnd_759325FE48659E7299F1899E3C4738AF(const class FName& NotifyName);
		void OnNotifyBegin_759325FE48659E7299F1899E3C4738AF(const class FName& NotifyName);
		void OnCancelled_759325FE48659E7299F1899E3C4738AF(const class FName& NotifyName);
		void OnInterrupted_759325FE48659E7299F1899E3C4738AF(const class FName& NotifyName);
		void OnBlendOut_759325FE48659E7299F1899E3C4738AF(const class FName& NotifyName);
		void OnCompleted_759325FE48659E7299F1899E3C4738AF(const class FName& NotifyName);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_OnSpawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
