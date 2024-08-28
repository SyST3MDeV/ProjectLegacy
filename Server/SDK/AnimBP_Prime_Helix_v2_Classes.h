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
	 * AnimBlueprintGeneratedClass AnimBP_Prime_Helix_v2.AnimBP_Prime_Helix_v2_C
	 * Size -> 0x10F8 (FullSize[0x2210] - InheritedSize[0x1118])
	 */
	class UAnimBP_Prime_Helix_v2_C : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_SBAQ[0x8];                                   // 0x1118(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1120(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_8057546D4BF20E2EC486F4898BCFF4A3;     // 0x1128(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_58660DD2496C9086489CF49438FF13B1;     // 0x1170(0x0060)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_021F3F8C41E4E26CD04E3EBBDC564A1B; // 0x11D0(0x0078)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_C7863FEF40DE9E3BAC81309C93631313; // 0x1248(0x0070)
		unsigned char                                              UnknownData_5FKS[0x8];                                   // 0x12B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15D0F984461B6FBCE0EF5B93A76275F6; // 0x12C0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4A08ABE645D8959C83F4F0940E2F1A93; // 0x1340(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_BE02005A4B4969A763D4D68D0ADA5E1A; // 0x13C0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_DFEF7569467D4EB460CDB893697B7154; // 0x1440(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E6830DD74203A90AAFE9AE89BB7DF39B; // 0x14C0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B1DDC514452675C8A18EBE830BD13726; // 0x1540(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_06C0174B477DA8486A90D493E73AD676; // 0x15C0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_836B35EA4B75177D8B2355BBDE9EEB1D; // 0x1640(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6CBC68F94B0A2158E3023CA2478A0336; // 0x16C0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29F1468B44CBBB84673FCB8427DFE6F2; // 0x1740(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_637344F84C8DE3C2FA8DAFA303827BAB; // 0x17C0(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D9325EB048A3FE8230B29883A3724D1C; // 0x1830(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E2090BC8477B4D319E7AB4B0FE2FD75C; // 0x1878(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D0F84EE149DF8C40623F32BF8012ED33; // 0x18E8(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_F3036B4245A7B2329250CB802853EDCD; // 0x1930(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C30C348B4B75C3278E5445ADC7C8A3DD; // 0x19A0(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_AFACDD1E41DFD84397D910BB20C095FA; // 0x19E8(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_AF59F8784DB0FD0B177E4581A8D4ADC8; // 0x1A58(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9B7783EC4A679F5EEE2CEDAF0DB0EE47; // 0x1AA0(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_69889BAE4F5E7DC78D5FA6A5424E3604; // 0x1B10(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_79DF9F794923F250400EFB8C11089213; // 0x1B58(0x00D8)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone_1EC265BB4640E9E896A5EE8A219D9A62; // 0x1C30(0x0060)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2C55C49E4C53738A2F2319BF13551A65; // 0x1C90(0x0140)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_B693B37D4C6A27D35E096795CCB0CA72;     // 0x1DD0(0x0060)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7F99B24C4BE1A022D223D889CFA2B8C9; // 0x1E30(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_D490F60C43F5C302BF17BFA9456613F3; // 0x1ED0(0x00A8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9D94D660410F4D42E49F6F8E5D43A33C; // 0x1F78(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_BC3A4ACB4C1D0FB3501E938BD74C2753; // 0x1FC8(0x0050)
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_049EC6CD4D3FB0BA3035D0859788B5E0; // 0x2018(0x0038)
		struct FAnimationNode_TwoWayBlend                          AnimGraphNode_TwoWayBlend_9841B8E44403090E54CCFF9E70E94BD6; // 0x2050(0x0078)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_A453A4A04E01F81E1D9933A8FBE72406; // 0x20C8(0x00B8)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_638BEC6C40C24A7354CA3CA3CA7D0E31; // 0x2180(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_18F7AC594C00A667CC8D83A72FBC08FE; // 0x21C8(0x0048)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_ApplyAdditive_021F3F8C41E4E26CD04E3EBBDC564A1B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_SequenceEvaluator_C7863FEF40DE9E3BAC81309C93631313();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_TransitionResult_15D0F984461B6FBCE0EF5B93A76275F6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_TransitionResult_4A08ABE645D8959C83F4F0940E2F1A93();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_TransitionResult_DFEF7569467D4EB460CDB893697B7154();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_TransitionResult_B1DDC514452675C8A18EBE830BD13726();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_TransitionResult_06C0174B477DA8486A90D493E73AD676();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_TransitionResult_836B35EA4B75177D8B2355BBDE9EEB1D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_TransitionResult_6CBC68F94B0A2158E3023CA2478A0336();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_TransitionResult_29F1468B44CBBB84673FCB8427DFE6F2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_SequenceEvaluator_F3036B4245A7B2329250CB802853EDCD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_SequenceEvaluator_AFACDD1E41DFD84397D910BB20C095FA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_RotateRootBone_1EC265BB4640E9E896A5EE8A219D9A62();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Prime_Helix_v2_AnimGraphNode_RotationOffsetBlendSpace_2C55C49E4C53738A2F2319BF13551A65();
		void ExecuteUbergraph_AnimBP_Prime_Helix_v2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
