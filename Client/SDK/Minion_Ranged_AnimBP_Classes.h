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
	 * AnimBlueprintGeneratedClass Minion_Ranged_AnimBP.Minion_Ranged_AnimBP_C
	 * Size -> 0x0728 (FullSize[0x10D8] - InheritedSize[0x09B0])
	 */
	class UMinion_Ranged_AnimBP_C : public UOrionMinionAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_395D9E174AA80B6395A6E1B8ED04DB02; // 0x09B8(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6F817D004C336D8F71606794D799C4B4; // 0x0A00(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_22A53C3B47C9857EBD8E2F95E0997477; // 0x0A48(0x0120)
		struct FOrionAnimNode_MinionBehavior                       OrionAnimGraphNode_MinionBehavior_5CD562694D2ED8BFDF2BDB9E9C22F4FB; // 0x0B68(0x01E8)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_889C96AF44AC1E04D5ECAF9AA63E1A47;   // 0x0D50(0x0150)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_D03904604F493370647C6B9E9CF3787D; // 0x0EA0(0x00D0)
		struct FAnimNode_Root                                      AnimGraphNode_Root_606D972247045313743D2897D56435F8;     // 0x0F70(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_243C0F564E2B18BD5BC0E28F9F85E92A; // 0x0FB8(0x0120)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_Ranged_AnimBP_AnimGraphNode_BlendSpacePlayer_22A53C3B47C9857EBD8E2F95E0997477();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_Ranged_AnimBP_AnimGraphNode_LookAt_889C96AF44AC1E04D5ECAF9AA63E1A47();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_Ranged_AnimBP_AnimGraphNode_BlendSpacePlayer_243C0F564E2B18BD5BC0E28F9F85E92A();
		void ExecuteUbergraph_Minion_Ranged_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
