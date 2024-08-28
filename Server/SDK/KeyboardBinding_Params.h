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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function KeyboardBinding.KeyboardBinding_C.Refresh
	 */
	struct UKeyboardBinding_C_Refresh_Params
	{	};

	/**
	 * Function KeyboardBinding.KeyboardBinding_C.Construct
	 */
	struct UKeyboardBinding_C_Construct_Params
	{	};

	/**
	 * Function KeyboardBinding.KeyboardBinding_C.PreConstruct
	 */
	struct UKeyboardBinding_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyboardBinding.KeyboardBinding_C.BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_876_OnKeySelected__DelegateSignature
	 */
	struct UKeyboardBinding_C_BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_876_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (Parm)
	};

	/**
	 * Function KeyboardBinding.KeyboardBinding_C.BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_9_OnKeySelected__DelegateSignature
	 */
	struct UKeyboardBinding_C_BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_9_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (Parm)
	};

	/**
	 * Function KeyboardBinding.KeyboardBinding_C.BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_15_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UKeyboardBinding_C_BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_15_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function KeyboardBinding.KeyboardBinding_C.BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UKeyboardBinding_C_BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function KeyboardBinding.KeyboardBinding_C.ExecuteUbergraph_KeyboardBinding
	 */
	struct UKeyboardBinding_C_ExecuteUbergraph_KeyboardBinding_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
