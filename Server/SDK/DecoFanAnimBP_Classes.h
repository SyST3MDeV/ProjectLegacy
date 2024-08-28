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
	 * AnimBlueprintGeneratedClass DecoFanAnimBP.DecoFanAnimBP_C
	 * Size -> 0x0611 (FullSize[0x0A99] - InheritedSize[0x0488])
	 */
	class UDecoFanAnimBP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0488(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_35701C2347E772BA6E71F4B7CC6CD578;     // 0x0490(0x0048)
		unsigned char                                              UnknownData_FPX2[0x8];                                   // 0x04D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_1CE521294B2FA22B737A68975931F878; // 0x04E0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_57A16CFC4BF5872AC0722AA1826F5A22; // 0x0560(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_70DD1AC44C76A22596BA28BCA2D2E72A; // 0x05E0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_05CAE0084C98E75E1561988F5D98B409; // 0x0660(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_1DDF637646A55257C2FC01A76120AC0C; // 0x06E0(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_994748A54981DD556596D1B7E5143052; // 0x0750(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B8B853F1465920F12F10779642FD4854; // 0x0798(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_DEA2211E4E4F9B7186D0E380400B6E2D; // 0x0808(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8AF5CA924D6606A231B8A7AA434E478B; // 0x0850(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_CDB5AD184A0D2703DBCC1FB75335FB87; // 0x08C0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5E94F8DF4C2564799A7782A5D77666C6; // 0x0908(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_F90EF2F349819B9C9FF6E9AD2DAB8E19; // 0x0978(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_0915D41B4AD43D59EAA041962C010E84; // 0x09C0(0x00D8)
		bool                                                       IsDead;                                                  // 0x0A98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DecoFanAnimBP_AnimGraphNode_TransitionResult_1CE521294B2FA22B737A68975931F878();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DecoFanAnimBP_AnimGraphNode_TransitionResult_70DD1AC44C76A22596BA28BCA2D2E72A();
		void ExecuteUbergraph_DecoFanAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
