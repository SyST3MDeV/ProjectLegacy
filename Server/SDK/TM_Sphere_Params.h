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
	 * Function TM_Sphere.TM_Sphere_C.UserConstructionScript
	 */
	struct ATM_Sphere_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TM_Sphere.TM_Sphere_C.OnTargetingModeConfirm
	 */
	struct ATM_Sphere_C_OnTargetingModeConfirm_Params
	{	};

	/**
	 * Function TM_Sphere.TM_Sphere_C.OnTargetingModeCancel
	 */
	struct ATM_Sphere_C_OnTargetingModeCancel_Params
	{	};

	/**
	 * Function TM_Sphere.TM_Sphere_C.OnTargetingModeActivate
	 */
	struct ATM_Sphere_C_OnTargetingModeActivate_Params
	{	};

	/**
	 * Function TM_Sphere.TM_Sphere_C.OnFacetSphereBuilt
	 */
	struct ATM_Sphere_C_OnFacetSphereBuilt_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TM_Sphere.TM_Sphere_C.ReceiveTick
	 */
	struct ATM_Sphere_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TM_Sphere.TM_Sphere_C.ReceiveBeginPlay
	 */
	struct ATM_Sphere_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TM_Sphere.TM_Sphere_C.ExecuteUbergraph_TM_Sphere
	 */
	struct ATM_Sphere_C_ExecuteUbergraph_TM_Sphere_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V70E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
