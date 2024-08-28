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
	 * BlueprintGeneratedClass GA_Card_StasisGem.GA_Card_StasisGem_C
	 * Size -> 0x0010 (FullSize[0x0A60] - InheritedSize[0x0A50])
	 */
	class UGA_Card_StasisGem_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                RootMotionName;                                          // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void InvalidHandle_E685B61D4E5E1BEC6DF56DA715CBB2C7();
		void OnRemoved_E685B61D4E5E1BEC6DF56DA715CBB2C7();
		void OnStateInterrupted_9E990F5341D3A757D61B27B49060927B();
		void OnStateEnded_9E990F5341D3A757D61B27B49060927B();
		void OnTimedOutAndDestinationReached_508593584B14406EEFC1759511599CAD();
		void OnTimedOut_508593584B14406EEFC1759511599CAD();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_StasisGem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
