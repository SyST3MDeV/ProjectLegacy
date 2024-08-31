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
	 * Function TM_Sector.TM_Sector_C.UserConstructionScript
	 */
	struct ATM_Sector_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TM_Sector.TM_Sector_C.OnFacetSectorBuilt
	 */
	struct ATM_Sector_C_OnFacetSectorBuilt_Params
	{
	public:
		float                                                      AngleHorizontal;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RadiusMin;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RadiusMax;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      HeightMin;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      HeightMax;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TM_Sector.TM_Sector_C.OnTargetingModeActivate
	 */
	struct ATM_Sector_C_OnTargetingModeActivate_Params
	{	};

	/**
	 * Function TM_Sector.TM_Sector_C.OnTargetingModeCancel
	 */
	struct ATM_Sector_C_OnTargetingModeCancel_Params
	{	};

	/**
	 * Function TM_Sector.TM_Sector_C.OnTargetingModeConfirm
	 */
	struct ATM_Sector_C_OnTargetingModeConfirm_Params
	{	};

	/**
	 * Function TM_Sector.TM_Sector_C.ExecuteUbergraph_TM_Sector
	 */
	struct ATM_Sector_C_ExecuteUbergraph_TM_Sector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
