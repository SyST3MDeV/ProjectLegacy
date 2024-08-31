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
	 * Function TM_Beam.TM_Beam_C.UserConstructionScript
	 */
	struct ATM_Beam_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TM_Beam.TM_Beam_C.OnFacetBeamBuilt
	 */
	struct ATM_Beam_C_OnFacetBeamBuilt_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TM_Beam.TM_Beam_C.OnTargetingModeActivate
	 */
	struct ATM_Beam_C_OnTargetingModeActivate_Params
	{	};

	/**
	 * Function TM_Beam.TM_Beam_C.OnTargetingModeCancel
	 */
	struct ATM_Beam_C_OnTargetingModeCancel_Params
	{	};

	/**
	 * Function TM_Beam.TM_Beam_C.OnTargetingModeConfirm
	 */
	struct ATM_Beam_C_OnTargetingModeConfirm_Params
	{	};

	/**
	 * Function TM_Beam.TM_Beam_C.ReceiveBeginPlay
	 */
	struct ATM_Beam_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TM_Beam.TM_Beam_C.Value Changed
	 */
	struct ATM_Beam_C_ValueChanged_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TM_Beam.TM_Beam_C.ExecuteUbergraph_TM_Beam
	 */
	struct ATM_Beam_C_ExecuteUbergraph_TM_Beam_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HEP8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
