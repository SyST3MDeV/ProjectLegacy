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
	 * Function BundleScreen.BundleScreen_C.BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_0_OnBackClicked__DelegateSignature
	 */
	struct UBundleScreen_C_BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_0_OnBackClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BundleScreen.BundleScreen_C.OnActivated
	 */
	struct UBundleScreen_C_OnActivated_Params
	{	};

	/**
	 * Function BundleScreen.BundleScreen_C.SetBundleScreenTitle
	 */
	struct UBundleScreen_C_SetBundleScreenTitle_Params
	{
	public:
		class FText                                                BundleTitle;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BundleScreen.BundleScreen_C.ExecuteUbergraph_BundleScreen
	 */
	struct UBundleScreen_C_ExecuteUbergraph_BundleScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_42DM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
