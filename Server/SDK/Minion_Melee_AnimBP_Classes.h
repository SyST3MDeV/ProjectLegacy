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
	 * AnimBlueprintGeneratedClass Minion_Melee_AnimBP.Minion_Melee_AnimBP_C
	 * Size -> 0x0730 (FullSize[0x10E0] - InheritedSize[0x09B0])
	 */
	class UMinion_Melee_AnimBP_C : public UOrionMinionAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_46390D6A4CF241CB062823B15454E993; // 0x09B8(0x0120)
		unsigned char                                              UnknownData_Y48O[0x8];                                   // 0x0AD8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2BC68DEE4B3217774E924B9CF4484B82;   // 0x0AE0(0x0150)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_049646254B1E2FC68CA948BE59CC7423; // 0x0C30(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_C93D380D4015DA112366C281CFE64CEC; // 0x0C78(0x0048)
		struct FOrionAnimNode_MinionBehavior                       OrionAnimGraphNode_MinionBehavior_555F94974AE9839AAD2A058448B745C8; // 0x0CC0(0x01E8)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_1756166E4EA2AB51609A40953A82C128; // 0x0EA8(0x00D0)
		struct FAnimNode_Root                                      AnimGraphNode_Root_FC6004A2441104C869DE6B89D1C479E2;     // 0x0F78(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_B1B8C7F743B16697732DCA98CC911B83; // 0x0FC0(0x0120)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_Melee_AnimBP_AnimGraphNode_BlendSpacePlayer_46390D6A4CF241CB062823B15454E993();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_Melee_AnimBP_AnimGraphNode_LookAt_2BC68DEE4B3217774E924B9CF4484B82();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_Melee_AnimBP_AnimGraphNode_BlendListByInt_1756166E4EA2AB51609A40953A82C128();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_Melee_AnimBP_AnimGraphNode_BlendSpacePlayer_B1B8C7F743B16697732DCA98CC911B83();
		void ExecuteUbergraph_Minion_Melee_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
