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
	 * AnimBlueprintGeneratedClass CoreRings_AnimBP.CoreRings_AnimBP_C
	 * Size -> 0x04D9 (FullSize[0x0991] - InheritedSize[0x04B8])
	 */
	class UCoreRings_AnimBP_C : public UOrionAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_D7F1E28843FB803ED7DB59B77A828684;     // 0x04C0(0x0048)
		unsigned char                                              UnknownData_3XRZ[0x8];                                   // 0x0508(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2F118F244C5729AEDD03D695BF25735A; // 0x0510(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_00032C89494BB9FD54939F9EA5AE36A9; // 0x0590(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5684AA0140F73C964300EB876E70727E; // 0x0610(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_010F28354177D8DD6063558C4B57C4BF; // 0x0690(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_9BCC24CC4E9405631594E1BCDB40C2F6; // 0x0700(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8E48094C4416F0924D0535B66C9AC7FB; // 0x0748(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_2707423F4D15D1757B3664A5F24B1FB1; // 0x07B8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A10246D64AA48760B4C35A936975EF13; // 0x0800(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_F9F28BE2444F6F746489BD915541F469; // 0x0870(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_17C291284CA48E99D4868094971337F0; // 0x08B8(0x00D8)
		bool                                                       CoreExposed;                                             // 0x0990(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CoreRings_AnimBP_AnimGraphNode_TransitionResult_2F118F244C5729AEDD03D695BF25735A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CoreRings_AnimBP_AnimGraphNode_TransitionResult_00032C89494BB9FD54939F9EA5AE36A9();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_CoreRings_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
