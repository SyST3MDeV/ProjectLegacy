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
	 * AnimBlueprintGeneratedClass SuperMinion_AnimBP.SuperMinion_AnimBP_C
	 * Size -> 0x035C (FullSize[0x0D0C] - InheritedSize[0x09B0])
	 */
	class USuperMinion_AnimBP_C : public UOrionMinionAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FOrionAnimNode_MinionBehavior                       OrionAnimGraphNode_MinionBehavior_C57A82D4493F12AB0D77C3A8BCC78DF2; // 0x09B8(0x01E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_FD59DC6C4AB768279CEE4CACE8882E75; // 0x0BA0(0x0120)
		struct FAnimNode_Root                                      AnimGraphNode_Root_C72180864C38737F8BD70EA5A959596E;     // 0x0CC0(0x0048)
		int32_t                                                    Random_Pose;                                             // 0x0D08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SuperMinion_AnimBP_AnimGraphNode_BlendSpacePlayer_FD59DC6C4AB768279CEE4CACE8882E75();
		void ExecuteUbergraph_SuperMinion_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
