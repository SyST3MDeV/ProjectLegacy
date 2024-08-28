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
	 * AnimBlueprintGeneratedClass Minion_Leader_AnimBP.Minion_Leader_AnimBP_C
	 * Size -> 0x0358 (FullSize[0x0D08] - InheritedSize[0x09B0])
	 */
	class UMinion_Leader_AnimBP_C : public UOrionMinionAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_810600424809D40448D1B4BC6A535349; // 0x09B8(0x0120)
		struct FOrionAnimNode_MinionBehavior                       OrionAnimGraphNode_MinionBehavior_6C09AAAD4BC46D8E047EFBB722AEF2CB; // 0x0AD8(0x01E8)
		struct FAnimNode_Root                                      AnimGraphNode_Root_0CE0B8464C32B904CBAEE6ABE66C885C;     // 0x0CC0(0x0048)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_Leader_AnimBP_AnimGraphNode_BlendSpacePlayer_810600424809D40448D1B4BC6A535349();
		void ExecuteUbergraph_Minion_Leader_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
