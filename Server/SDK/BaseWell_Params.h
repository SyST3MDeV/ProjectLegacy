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
		struct FLinearColor                                        InLinearColor;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.GetTargetingLocation
	 */
	struct ABaseWell_C_GetTargetingLocation_Params
	{
	public:
		struct FVector                                             OutPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.GetAimTargetSensingLocation
	 */
	struct ABaseWell_C_GetAimTargetSensingLocation_Params
	{
	public:
		struct FVector                                             AimPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.GetNumberPopLocation
	 */
	struct ABaseWell_C_GetNumberPopLocation_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.GetRigAttachLocation
	 */
	struct ABaseWell_C_GetRigAttachLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.GetRigAttachRotaion
	 */
	struct ABaseWell_C_GetRigAttachRotaion_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
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
	{
	public:
		class AOrionRigs*                                          NewAttachedRig;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseWell.BaseWell_C.OnTeamChanged
	 */
	struct ABaseWell_C_OnTeamChanged_Params
	{
	public:
		EOrionTeam                                                 NewTeamIdx;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
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
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_18QT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BaseWell.BaseWell_C.GameplayCue.Wells.DeadZone
	 */
	struct ABaseWell_C_GameplayCue_Wells_DeadZone_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2IRK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
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
