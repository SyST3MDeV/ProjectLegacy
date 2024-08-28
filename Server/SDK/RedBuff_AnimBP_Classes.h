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
	 * AnimBlueprintGeneratedClass RedBuff_AnimBP.RedBuff_AnimBP_C
	 * Size -> 0x1524 (FullSize[0x263C] - InheritedSize[0x1118])
	 */
	class URedBuff_AnimBP_C : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_7EE0[0x8];                                   // 0x1118(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1120(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_2529AF5A48351E61E2FADE9D1C6A7BFE;     // 0x1128(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_ADA469C84451E27A49FF5CA347EE6A1C;     // 0x1170(0x0060)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_61D18E794C909A031C030E823DEACDFD; // 0x11D0(0x0078)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone_C0D7CBDA4A670BCA8BA453AC4395B1D3; // 0x1248(0x0060)
		unsigned char                                              UnknownData_YU56[0x8];                                   // 0x12A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E6E13FF84724C9C6583C1CB54525DA2F; // 0x12B0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_314F5F5E4D65764A353765826FDDAEBE; // 0x1330(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_DFEF7569467D4EB460CDB893697B7154; // 0x13B0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E6830DD74203A90AAFE9AE89BB7DF39B; // 0x1430(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B1DDC514452675C8A18EBE830BD13726; // 0x14B0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_06C0174B477DA8486A90D493E73AD676; // 0x1530(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_836B35EA4B75177D8B2355BBDE9EEB1D; // 0x15B0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B4F6A27D4E6A41A423139294B590EAB0; // 0x1630(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_87D74D354E92E9B20FF647AA046A9F59; // 0x16B0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8A09EC4F457B1D1E5947FCA4504C6039; // 0x1730(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_D587A99B4B8E3B24D2C0BB8620E9232A; // 0x17B0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6CBC68F94B0A2158E3023CA2478A0336; // 0x1830(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_96478E21475B0CF515D9CBACB5346A22; // 0x18B0(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5CE44C3745E7ECDAFD1693BE44F6BF76; // 0x1980(0x0070)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_CB9EB05D4BD8BE509E27E4B21D7C20A2; // 0x19F0(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_216F0C0F4E6CB81CE3E12E988226D814; // 0x1A60(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_042FDBB044AD1A2B8F2DC79E6FBA66F6; // 0x1AA8(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_5152ACBB4F2D993D2F9D41B6BAD9E2E8; // 0x1B18(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_19BB54B84B01DB6C050A7F885FB76514; // 0x1B60(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C30C348B4B75C3278E5445ADC7C8A3DD; // 0x1BD0(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_B98A85CA47ACA890C046E0963B76483C; // 0x1C18(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_AF59F8784DB0FD0B177E4581A8D4ADC8; // 0x1C88(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_F3FF2AA7429249084CAF0EA932993BEE; // 0x1CD0(0x0120)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_56ABEE054FAD34A266BF5A9B7BF662D1; // 0x1DF0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FB0E650F4A6A69EDAB642DA5781C7AC7; // 0x1E38(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_69889BAE4F5E7DC78D5FA6A5424E3604; // 0x1EA8(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_E42600BC40EBB3E4D550689C224FC6E6; // 0x1EF0(0x00D8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2CA6D29A45A7CB66E561EDA823AAE0DB;     // 0x1FC8(0x0060)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_63EA73624628DF6A361005B1CB182518; // 0x2028(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3034089E45AA6987B76FFCBF0B605C2E; // 0x20C8(0x00D0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_B5E33E724A73AA88E5E18097611D80A2;     // 0x2198(0x0060)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_F5D90E1548543ED0EAC8928C340699EE; // 0x21F8(0x00A8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_1333815642341211796DCFBD24BC8CE5; // 0x22A0(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_F29CD8A44F00719B60C7129BA9A2CFCF; // 0x22F0(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_29F10D194BFA845EFED324A5D96213DC; // 0x2340(0x0050)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_66A50D7C4472DAE47D221580B3D5156A; // 0x2390(0x00A8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_948B88FE4F8A590CB0F32EA0D455B70D; // 0x2438(0x0050)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_CE47478941ADF43B5A541583D537553A; // 0x2488(0x0140)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_697248094789EC453E088782F2364EBC; // 0x25C8(0x0070)
		float                                                      Pitch;                                                   // 0x2638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_ApplyAdditive_61D18E794C909A031C030E823DEACDFD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_RotateRootBone_C0D7CBDA4A670BCA8BA453AC4395B1D3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_TransitionResult_E6E13FF84724C9C6583C1CB54525DA2F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_TransitionResult_314F5F5E4D65764A353765826FDDAEBE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_TransitionResult_DFEF7569467D4EB460CDB893697B7154();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_TransitionResult_B1DDC514452675C8A18EBE830BD13726();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_TransitionResult_06C0174B477DA8486A90D493E73AD676();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_TransitionResult_836B35EA4B75177D8B2355BBDE9EEB1D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_TransitionResult_B4F6A27D4E6A41A423139294B590EAB0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_TransitionResult_87D74D354E92E9B20FF647AA046A9F59();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_TransitionResult_8A09EC4F457B1D1E5947FCA4504C6039();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_TransitionResult_D587A99B4B8E3B24D2C0BB8620E9232A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_TransitionResult_6CBC68F94B0A2158E3023CA2478A0336();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_BlendListByBool_96478E21475B0CF515D9CBACB5346A22();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_SequenceEvaluator_19BB54B84B01DB6C050A7F885FB76514();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_SequenceEvaluator_B98A85CA47ACA890C046E0963B76483C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_BlendSpacePlayer_F3FF2AA7429249084CAF0EA932993BEE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_BlendListByBool_3034089E45AA6987B76FFCBF0B605C2E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_CE47478941ADF43B5A541583D537553A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RedBuff_AnimBP_AnimGraphNode_SequenceEvaluator_697248094789EC453E088782F2364EBC();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_RedBuff_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
