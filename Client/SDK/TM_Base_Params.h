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
	 * Function TM_Base.TM_Base_C.UserConstructionScript
	 */
	struct ATM_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TM_Base.TM_Base_C.OnTargetingModeConfirm
	 */
	struct ATM_Base_C_OnTargetingModeConfirm_Params
	{	};

	/**
	 * Function TM_Base.TM_Base_C.OnTargetingModeCancel
	 */
	struct ATM_Base_C_OnTargetingModeCancel_Params
	{	};

	/**
	 * Function TM_Base.TM_Base_C.OnTargetingModeActivate
	 */
	struct ATM_Base_C_OnTargetingModeActivate_Params
	{	};

	/**
	 * Function TM_Base.TM_Base_C.ReceiveBeginPlay
	 */
	struct ATM_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TM_Base.TM_Base_C.ExecuteUbergraph_TM_Base
	 */
	struct ATM_Base_C_ExecuteUbergraph_TM_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
