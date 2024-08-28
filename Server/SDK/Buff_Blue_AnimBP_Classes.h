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
	 * AnimBlueprintGeneratedClass Buff_Blue_AnimBP.Buff_Blue_AnimBP_C
	 * Size -> 0x069C (FullSize[0x104C] - InheritedSize[0x09B0])
	 */
	class UBuff_Blue_AnimBP_C : public UOrionMinionAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_3F222F3C483FD18F4DAB5783AA6E2D37;     // 0x09B8(0x0048)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_70F02DBB43E89840A0B8BDB9436A0748; // 0x0A00(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8A46E8D84293C9A838666B9DC9407BA0; // 0x0AD0(0x0070)
		struct FOrionAnimNode_MinionBehavior                       OrionAnimGraphNode_MinionBehavior_F3A1ACF845544609489E9F83535BD10D; // 0x0B40(0x01E8)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_C579A3A14A7796EA445C009648A95366; // 0x0D28(0x00D0)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_8A8AA3FD4E9E447DE878EBA4B4CDA81B; // 0x0DF8(0x00D0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_BB244E324A6E32213A9576AC568373A6; // 0x0EC8(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_495DE6954003FEF9725CC18B101EE753;     // 0x0FE8(0x0060)
		int32_t                                                    RandomPose;                                              // 0x1048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Blue_AnimBP_AnimGraphNode_BlendListByInt_70F02DBB43E89840A0B8BDB9436A0748();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Blue_AnimBP_AnimGraphNode_BlendListByInt_C579A3A14A7796EA445C009648A95366();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Blue_AnimBP_AnimGraphNode_BlendListByInt_8A8AA3FD4E9E447DE878EBA4B4CDA81B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Blue_AnimBP_AnimGraphNode_BlendSpacePlayer_BB244E324A6E32213A9576AC568373A6();
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_Buff_Blue_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
