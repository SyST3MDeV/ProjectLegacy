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
	 * AnimBlueprintGeneratedClass CoreRings_AnimBP_CPP.CoreRings_AnimBP_CPP_C
	 * Size -> 0x04D8 (FullSize[0x09B0] - InheritedSize[0x04D8])
	 */
	class UCoreRings_AnimBP_CPP_C : public UOrionCoreRingsAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_EF39E7C8440F7C0E9DE5EFA398C454E4;     // 0x04E0(0x0048)
		unsigned char                                              UnknownData_EF00[0x8];                                   // 0x0528(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B14BEB564961D04972B13897332D2724; // 0x0530(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_739BDF04404452A7D0415AB89442B5B8; // 0x05B0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10629A4B47C64B601779D48EA0AFC44B; // 0x0630(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_830E096E47E7A60BEB3755A186BA8B0A; // 0x06B0(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_331FAB094A411EB526DDD384EC40E63D; // 0x0720(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16AA85E04EA5CBE80702AB9825CB9C54; // 0x0768(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_0ACDA78242F3E2A4CC73D5A9A793CC77; // 0x07D8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_81596B5041EC91CEB50EAAB6A714405C; // 0x0820(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_FAABF89344A610FC7ACE4D88E809E38B; // 0x0890(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_F8C4DAA04E6C6F1FCDDACCABA881207F; // 0x08D8(0x00D8)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CoreRings_AnimBP_CPP_AnimGraphNode_TransitionResult_B14BEB564961D04972B13897332D2724();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CoreRings_AnimBP_CPP_AnimGraphNode_TransitionResult_739BDF04404452A7D0415AB89442B5B8();
		void ExecuteUbergraph_CoreRings_AnimBP_CPP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
