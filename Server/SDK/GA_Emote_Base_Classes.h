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
	 * BlueprintGeneratedClass GA_Emote_Base.GA_Emote_Base_C
	 * Size -> 0x0020 (FullSize[0x0A70] - InheritedSize[0x0A50])
	 */
	class UGA_Emote_Base_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAnimMontage*                                        EmoteAnim;                                               // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UnblockMovementDelay;                                    // 0x0A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5QY6[0x4];                                   // 0x0A64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              EmoteCameraMode;                                         // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnChange_089A8CA14C8FB7A21B3B3CB58875951F();
		void OnApplied_469E76E14A18DA440CC1ABB3348B6E48(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void OnCancel_E7260F4B4071ECDFE789828C3D4ABBDE();
		void OnActivate_2CE5DB8941866BBCC3CC6F97907D63F1(class UGameplayAbility* ActivatedAbility);
		void OnNotifyEnd_25F51C8A425E753C13138E92FB4B3BC1(const class FName& NotifyName);
		void OnNotifyBegin_25F51C8A425E753C13138E92FB4B3BC1(const class FName& NotifyName);
		void OnCancelled_25F51C8A425E753C13138E92FB4B3BC1(const class FName& NotifyName);
		void OnInterrupted_25F51C8A425E753C13138E92FB4B3BC1(const class FName& NotifyName);
		void OnBlendOut_25F51C8A425E753C13138E92FB4B3BC1(const class FName& NotifyName);
		void OnCompleted_25F51C8A425E753C13138E92FB4B3BC1(const class FName& NotifyName);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Emote_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
