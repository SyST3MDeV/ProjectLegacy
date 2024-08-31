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
	 * AnimBlueprintGeneratedClass CoreCore_AnimBP.CoreCore_AnimBP_C
	 * Size -> 0x0320 (FullSize[0x07D8] - InheritedSize[0x04B8])
	 */
	class UCoreCore_AnimBP_C : public UOrionAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_BAAF8D55453940895753DC93AEA467AA;     // 0x04C0(0x0048)
		unsigned char                                              UnknownData_VN16[0x8];                                   // 0x0508(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9554A3BA4251EEE6E3A44C9DE1FBFAAB; // 0x0510(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E65DC27D418A3B0D827777A0F837A612; // 0x0590(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_0A9843F049D93AF530CE20BBF9CCC0C9; // 0x0600(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_40513EA94D21A07D8D2A50BC36D73AC4; // 0x0648(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_BC5FBF90438C86C3B6F909A1F1C052D3; // 0x06B8(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3E799B1647A273490287D7B983A7C7F3; // 0x0700(0x00D8)

	public:
		void ExecuteUbergraph_CoreCore_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
