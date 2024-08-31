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
	 * AnimBlueprintGeneratedClass CoreLift_AnimBP.CoreLift_AnimBP_C
	 * Size -> 0x0320 (FullSize[0x07D8] - InheritedSize[0x04B8])
	 */
	class UCoreLift_AnimBP_C : public UOrionAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_34398D904035A802DD4937970817523B;     // 0x04C0(0x0048)
		unsigned char                                              UnknownData_EBSG[0x8];                                   // 0x0508(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_BBE64AB746A9DDEBE7C6498C1C8F62D0; // 0x0510(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0D62D7074C6F2F8836AE48A50B62A208; // 0x0590(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_2A0A657A4454B2294AFF05A97D4BAB1C; // 0x0600(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6C11BCAF4070A868462CB1901C65E215; // 0x0648(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_244FF2064D83DC2DCF2850AEB3B7084C; // 0x06B8(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2E754B0449D226E717825A9831FC2C57; // 0x0700(0x00D8)

	public:
		void ExecuteUbergraph_CoreLift_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
