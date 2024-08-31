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
	 * AnimBlueprintGeneratedClass CoreBase_AnimBP.CoreBase_AnimBP_C
	 * Size -> 0x02A8 (FullSize[0x0B48] - InheritedSize[0x08A0])
	 */
	class UCoreBase_AnimBP_C : public UOrionCoreBaseAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_761814E14BAD8F35F1AAFDA654AA1CA7;     // 0x08A8(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8E73121E42BB7B3EC149BFAD70C2A5AB; // 0x08F0(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_D762EA9D47C36FC36C38FFA9C99B2464; // 0x09A0(0x00B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_9AE62A9F4B160D41D6713BB1F4F32699; // 0x0A50(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_366E0B1A441964DBF2DDD79B30952D15; // 0x0A98(0x00B0)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CoreBase_AnimBP_AnimGraphNode_ModifyBone_8E73121E42BB7B3EC149BFAD70C2A5AB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CoreBase_AnimBP_AnimGraphNode_ModifyBone_D762EA9D47C36FC36C38FFA9C99B2464();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CoreBase_AnimBP_AnimGraphNode_ModifyBone_366E0B1A441964DBF2DDD79B30952D15();
		void ExecuteUbergraph_CoreBase_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
