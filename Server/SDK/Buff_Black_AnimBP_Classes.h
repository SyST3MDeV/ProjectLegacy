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
	 * AnimBlueprintGeneratedClass Buff_Black_AnimBP.Buff_Black_AnimBP_C
	 * Size -> 0x13E0 (FullSize[0x24F8] - InheritedSize[0x1118])
	 */
	class UBuff_Black_AnimBP_C : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_R9P5[0x8];                                   // 0x1118(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1120(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_DE00698843B0B84FD06841A5486077D3;     // 0x1128(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_79E169D842F36182DFEFA1BCE8E1F096;     // 0x1170(0x0060)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_00AF2B20463583093DAC5D996455AE00; // 0x11D0(0x0078)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone_3A1A966A472E493FA3EB04AFBDE3FE1F; // 0x1248(0x0060)
		unsigned char                                              UnknownData_YI5A[0x8];                                   // 0x12A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_399A7B6F4D5879460894B0A7A42BB027; // 0x18B0(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_216F0C0F4E6CB81CE3E12E988226D814; // 0x1920(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22D239114377396BFC4D2B8B8C335BA1; // 0x1968(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_5152ACBB4F2D993D2F9D41B6BAD9E2E8; // 0x19D8(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_C386B8FA414394714BD155A4B725FEED; // 0x1A20(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C30C348B4B75C3278E5445ADC7C8A3DD; // 0x1A90(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_EC4B3F3A44DB311D0BB79BB293977940; // 0x1AD8(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_AF59F8784DB0FD0B177E4581A8D4ADC8; // 0x1B48(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_66A47A0340C6BC0D58E3B9B64521B996; // 0x1B90(0x0120)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_56ABEE054FAD34A266BF5A9B7BF662D1; // 0x1CB0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9DC1F13042F0D18A69C491884EC1262F; // 0x1CF8(0x0070)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_69889BAE4F5E7DC78D5FA6A5424E3604; // 0x1D68(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_F3F8B6134B98181AC446F083D85030E8; // 0x1DB0(0x00D8)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_00F0030E49A0543B7691E4961F393B6C; // 0x1E88(0x0140)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2DB117B64D7F2ED5E6E314B971C975BE; // 0x1FC8(0x0070)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_D994A3C04CB36E96372932ADB6D10CB0;     // 0x2038(0x0060)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_08E9381843FE7BA9D1F2FD91B4A0789E; // 0x2098(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_A1A6FCEF4C0FBE885B2B19A657752354; // 0x2138(0x00D0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_CF1B31754DFD9EAB3393BBBF0B32C716;     // 0x2208(0x0060)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_182AA25C467843CF82F81585A996C50D; // 0x2268(0x00A8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_AF67366E4BD2EDA4E4775081B0797052; // 0x2310(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_897F61424086BFEDC65B9AB4A99D1A81; // 0x2360(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_1B84EB6F4D3389172BF9E6ACC0FB6073; // 0x23B0(0x0050)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_56A91786431B11E7C2BDDAA29C5C6C47; // 0x2400(0x00A8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2DDA29774E3E680AD757E9860586803C; // 0x24A8(0x0050)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_ApplyAdditive_00AF2B20463583093DAC5D996455AE00();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_RotateRootBone_3A1A966A472E493FA3EB04AFBDE3FE1F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_TransitionResult_E6E13FF84724C9C6583C1CB54525DA2F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_TransitionResult_314F5F5E4D65764A353765826FDDAEBE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_TransitionResult_DFEF7569467D4EB460CDB893697B7154();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_TransitionResult_B1DDC514452675C8A18EBE830BD13726();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_TransitionResult_06C0174B477DA8486A90D493E73AD676();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_TransitionResult_836B35EA4B75177D8B2355BBDE9EEB1D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_TransitionResult_B4F6A27D4E6A41A423139294B590EAB0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_TransitionResult_87D74D354E92E9B20FF647AA046A9F59();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_TransitionResult_8A09EC4F457B1D1E5947FCA4504C6039();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_TransitionResult_D587A99B4B8E3B24D2C0BB8620E9232A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_TransitionResult_6CBC68F94B0A2158E3023CA2478A0336();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_SequenceEvaluator_C386B8FA414394714BD155A4B725FEED();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_SequenceEvaluator_EC4B3F3A44DB311D0BB79BB293977940();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_BlendSpacePlayer_66A47A0340C6BC0D58E3B9B64521B996();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_00F0030E49A0543B7691E4961F393B6C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_SequenceEvaluator_2DB117B64D7F2ED5E6E314B971C975BE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Buff_Black_AnimBP_AnimGraphNode_BlendListByBool_A1A6FCEF4C0FBE885B2B19A657752354();
		void ExecuteUbergraph_Buff_Black_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
