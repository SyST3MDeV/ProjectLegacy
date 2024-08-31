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
	 * BlueprintGeneratedClass GA_JungleBuff_Spawn.GA_JungleBuff_Spawn_C
	 * Size -> 0x0010 (FullSize[0x0A60] - InheritedSize[0x0A50])
	 */
	class UGA_JungleBuff_Spawn_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAnimMontage*                                        SpawnAnim;                                               // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnNotifyEnd_0BE4C0FC4CCC7578BADAEC9977A07F54(const class FName& NotifyName);
		void OnNotifyBegin_0BE4C0FC4CCC7578BADAEC9977A07F54(const class FName& NotifyName);
		void OnCancelled_0BE4C0FC4CCC7578BADAEC9977A07F54(const class FName& NotifyName);
		void OnInterrupted_0BE4C0FC4CCC7578BADAEC9977A07F54(const class FName& NotifyName);
		void OnBlendOut_0BE4C0FC4CCC7578BADAEC9977A07F54(const class FName& NotifyName);
		void OnCompleted_0BE4C0FC4CCC7578BADAEC9977A07F54(const class FName& NotifyName);
		void OnMoveFinished_2F7A4269458C8A6D89B9DA864896061E(EPathFollowingResult Result);
		void OnRequestFailed_2F7A4269458C8A6D89B9DA864896061E();
		void Added_4BDC7B19421FA58FBC04CDB13E98D0B4();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_JungleBuff_Spawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
