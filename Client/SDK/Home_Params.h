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
	 * Function Home.Home_C.OnHandleBackAction
	 */
	struct UHome_C_OnHandleBackAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Home.Home_C.OnTimedOut_9B73DB17499BD4294FA6BCA78A58FA18
	 */
	struct UHome_C_OnTimedOut_9B73DB17499BD4294FA6BCA78A58FA18_Params
	{	};

	/**
	 * Function Home.Home_C.OnKilled_9B73DB17499BD4294FA6BCA78A58FA18
	 */
	struct UHome_C_OnKilled_9B73DB17499BD4294FA6BCA78A58FA18_Params
	{	};

	/**
	 * Function Home.Home_C.OnDeclined_9B73DB17499BD4294FA6BCA78A58FA18
	 */
	struct UHome_C_OnDeclined_9B73DB17499BD4294FA6BCA78A58FA18_Params
	{	};

	/**
	 * Function Home.Home_C.OnConfirmed_9B73DB17499BD4294FA6BCA78A58FA18
	 */
	struct UHome_C_OnConfirmed_9B73DB17499BD4294FA6BCA78A58FA18_Params
	{	};

	/**
	 * Function Home.Home_C.Construct
	 */
	struct UHome_C_Construct_Params
	{	};

	/**
	 * Function Home.Home_C.OnActivated
	 */
	struct UHome_C_OnActivated_Params
	{	};

	/**
	 * Function Home.Home_C.BndEvt__HomePlayButton_122_K2Node_ComponentBoundEvent_64_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UHome_C_BndEvt__HomePlayButton_122_K2Node_ComponentBoundEvent_64_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Home.Home_C.OnDeactivated
	 */
	struct UHome_C_OnDeactivated_Params
	{	};

	/**
	 * Function Home.Home_C.BndEvt__CraftIterationButton_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UHome_C_BndEvt__CraftIterationButton_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Home.Home_C.PreConstruct
	 */
	struct UHome_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Home.Home_C.ExecuteUbergraph_Home
	 */
	struct UHome_C_ExecuteUbergraph_Home_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WKF9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
