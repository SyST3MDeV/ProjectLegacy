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
	 * BlueprintGeneratedClass GA_RecallToBase.GA_RecallToBase_C
	 * Size -> 0x00A0 (FullSize[0x0AF0] - InheritedSize[0x0A50])
	 */
	class UGA_RecallToBase_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      RecallTime;                                              // 0x0A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M3LR[0x4];                                   // 0x0A5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GE_RecallingClass;                                       // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RecallTimeFailsafe;                                      // 0x0A68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CRNH[0x4];                                   // 0x0A6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CachedActorInfoController;                               // 0x0A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              CachedActorInfoAvatar;                                   // 0x0A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        CachedRecallFinishedAnim;                                // 0x0A80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              CachedRecallCamera;                                      // 0x0A88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        CachedRecallAnim;                                        // 0x0A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FGameplayTag                                        HomeBaseTag;                                             // 0x0A98(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        TravelModeActivationTag;                                 // 0x0AA0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_TravelMode_SkipCast;                                  // 0x0AA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FGameplayTag                                        TravelModeSkipCastTag;                                   // 0x0AB0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        RecallTeleportTag;                                       // 0x0AB8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        RecallActivateTag;                                       // 0x0AC0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        RecallTeleportFinishedTag;                               // 0x0AC8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        GameplayCue_Recall_Teleport;                             // 0x0AD0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_RecallTeleportFinishedFailSafe;                       // 0x0AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FGameplayTag                                        GamplayEffect_Recall_TeleportFinishedFailSafe;           // 0x0AE0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        GameplayCue_Recall_Casting;                              // 0x0AE8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CheckSpawnPad(class ABP_Hero_C* Hero);
		void OnCancel_D0CC5F7D4844EA2A2933EA9A527D0982();
		void OnCommit_5EEF253446F84E0FA5494F94F53D9286(class UGameplayAbility* ActivatedAbility);
		void OnActivate_2A4EA68C4181220F4060AABBBD719FCF(class UGameplayAbility* ActivatedAbility);
		void OnChange_9814157E4EF0D358204F7A8E307A103F();
		void OnApplied_5C4B53964788B11D6059578AF82BBE14(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void OnFinish_74613A40487B6BC937695C8DF76A6613();
		void OnStateInterrupted_BD1C04B74AF9D234BC64469B996D03EB();
		void OnStateEnded_BD1C04B74AF9D234BC64469B996D03EB();
		void OnSync_DC01A3C14E99D663C038EDB3AC0B12F0();
		void OnNotifyEnd_8475E7B24681B9D9989966A8024BBEB9(const class FName& NotifyName);
		void OnNotifyBegin_8475E7B24681B9D9989966A8024BBEB9(const class FName& NotifyName);
		void OnCancelled_8475E7B24681B9D9989966A8024BBEB9(const class FName& NotifyName);
		void OnInterrupted_8475E7B24681B9D9989966A8024BBEB9(const class FName& NotifyName);
		void OnBlendOut_8475E7B24681B9D9989966A8024BBEB9(const class FName& NotifyName);
		void OnCompleted_8475E7B24681B9D9989966A8024BBEB9(const class FName& NotifyName);
		void Added_23F8548244182ED7F8679EBE66E5741B();
		void OnNotifyEnd_78B6AFDF4F7E94DABBA7FCA6B56087CB(const class FName& NotifyName);
		void OnNotifyBegin_78B6AFDF4F7E94DABBA7FCA6B56087CB(const class FName& NotifyName);
		void OnCancelled_78B6AFDF4F7E94DABBA7FCA6B56087CB(const class FName& NotifyName);
		void OnInterrupted_78B6AFDF4F7E94DABBA7FCA6B56087CB(const class FName& NotifyName);
		void OnBlendOut_78B6AFDF4F7E94DABBA7FCA6B56087CB(const class FName& NotifyName);
		void OnCompleted_78B6AFDF4F7E94DABBA7FCA6B56087CB(const class FName& NotifyName);
		void Added_7EAA4B6547FF8BAA18AF9AA20249A076();
		void OnSync_76BDD5124D8E6EBD40027DB393DD9BA0();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_RecallToBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
