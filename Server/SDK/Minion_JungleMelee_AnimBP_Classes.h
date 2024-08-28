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
	 * AnimBlueprintGeneratedClass Minion_JungleMelee_AnimBP.Minion_JungleMelee_AnimBP_C
	 * Size -> 0x0730 (FullSize[0x10E0] - InheritedSize[0x09B0])
	 */
	class UMinion_JungleMelee_AnimBP_C : public UOrionMinionAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_9E43F6C34EF975AB7A09448D89FB1229; // 0x09B8(0x0120)
		unsigned char                                              UnknownData_8PFY[0x8];                                   // 0x0AD8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_D47D07E349FC836BFDF3CB8C11F4C8C6;   // 0x0AE0(0x0150)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_B03AD189471F3E6732A864908D764BD8; // 0x0C30(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_48CD69EA4F757D742A987DA7D428395C; // 0x0C78(0x0048)
		struct FOrionAnimNode_MinionBehavior                       OrionAnimGraphNode_MinionBehavior_4E03BA7742A80A1643ED1A9E97A26300; // 0x0CC0(0x01E8)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_154270D847E87BE1C1C1E989AC71A3B5; // 0x0EA8(0x00D0)
		struct FAnimNode_Root                                      AnimGraphNode_Root_7B3F85E14EA9627A8B62DEB8500A9E08;     // 0x0F78(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6C75C5E14BC2020D621C0393BCE4FB82; // 0x0FC0(0x0120)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_JungleMelee_AnimBP_AnimGraphNode_BlendSpacePlayer_9E43F6C34EF975AB7A09448D89FB1229();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_JungleMelee_AnimBP_AnimGraphNode_LookAt_D47D07E349FC836BFDF3CB8C11F4C8C6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_JungleMelee_AnimBP_AnimGraphNode_BlendListByInt_154270D847E87BE1C1C1E989AC71A3B5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_JungleMelee_AnimBP_AnimGraphNode_BlendSpacePlayer_6C75C5E14BC2020D621C0393BCE4FB82();
		void ExecuteUbergraph_Minion_JungleMelee_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
