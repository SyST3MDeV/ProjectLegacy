﻿#pragma once

/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BaseWell.BaseWell_C.OnRep_RigAttached
	 */
	struct ABaseWell_C_OnRep_RigAttached_Params
	{	};

	/**
	 * Function BaseWell.BaseWell_C.DoColorChanges
	 */
	struct ABaseWell_C_DoColorChanges_Params
	{
	public:
		struct FCallFunc_Multiply_LinearColorFloat_ReturnValue     InLinearColor;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.GetTargetingLocation
	 */
	struct ABaseWell_C_GetTargetingLocation_Params
	{
	public:
		struct FCallFunc_K2_GetComponentLocation_ReturnValue       OutPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.GetAimTargetSensingLocation
	 */
	struct ABaseWell_C_GetAimTargetSensingLocation_Params
	{
	public:
		struct FCallFunc_K2_GetComponentLocation_ReturnValue       AimPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.GetNumberPopLocation
	 */
	struct ABaseWell_C_GetNumberPopLocation_Params
	{
	public:
		struct FReturnValue                                        HitLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FTemp_bool_Variable                                 ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.GetRigAttachLocation
	 */
	struct ABaseWell_C_GetRigAttachLocation_Params
	{
	public:
		struct FCallFunc_GetSocketLocation_ReturnValue             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.GetRigAttachRotaion
	 */
	struct ABaseWell_C_GetRigAttachRotaion_Params
	{
	public:
		struct FCallFunc_K2_GetActorRotation_ReturnValue           ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.UserConstructionScript
	 */
	struct ABaseWell_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BaseWell.BaseWell_C.RigPlacedAnim__FinishedFunc
	 */
	struct ABaseWell_C_RigPlacedAnim__FinishedFunc_Params
	{	};

	/**
	 * Function BaseWell.BaseWell_C.RigPlacedAnim__UpdateFunc
	 */
	struct ABaseWell_C_RigPlacedAnim__UpdateFunc_Params
	{	};

	/**
	 * Function BaseWell.BaseWell_C.RigActiveAnim__FinishedFunc
	 */
	struct ABaseWell_C_RigActiveAnim__FinishedFunc_Params
	{	};

	/**
	 * Function BaseWell.BaseWell_C.RigActiveAnim__UpdateFunc
	 */
	struct ABaseWell_C_RigActiveAnim__UpdateFunc_Params
	{	};

	/**
	 * Function BaseWell.BaseWell_C.RigActiveAnim__Dust__EventFunc
	 */
	struct ABaseWell_C_RigActiveAnim__Dust__EventFunc_Params
	{	};

	/**
	 * Function BaseWell.BaseWell_C.ReceiveBeginPlay
	 */
	struct ABaseWell_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseWell.BaseWell_C.OnAttachRig
	 */
	struct ABaseWell_C_OnAttachRig_Params
	{	};

	/**
	 * Function BaseWell.BaseWell_C.OnTeamChanged
	 */
	struct ABaseWell_C_OnTeamChanged_Params
	{
	public:
		unsigned char                                              NewTeamIdx;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.RigFinishedBuilding
	 */
	struct ABaseWell_C_RigFinishedBuilding_Params
	{	};

	/**
	 * Function BaseWell.BaseWell_C.RigPlaced
	 */
	struct ABaseWell_C_RigPlaced_Params
	{	};

	/**
	 * Function BaseWell.BaseWell_C.GameplayCue.Wells.Geyser
	 */
	struct ABaseWell_C_GameplayCue_Wells_Geyser_Params
	{
	public:
		EParameters                                                EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.GameplayCue.Wells.DeadZone
	 */
	struct ABaseWell_C_GameplayCue_Wells_DeadZone_Params
	{
	public:
		EParameters                                                EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.RigRemoved
	 */
	struct ABaseWell_C_RigRemoved_Params
	{	};

	/**
	 * Function BaseWell.BaseWell_C.ExecuteUbergraph_BaseWell
	 */
	struct ABaseWell_C_ExecuteUbergraph_BaseWell_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
