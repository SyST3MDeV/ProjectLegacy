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
	 * Function WeeklyPackInfo.WeeklyPackInfo_C.SetPackData
	 */
	struct UWeeklyPackInfo_C_SetPackData_Params
	{
	public:
		class UOrionMcpCardPackItemDefinition*                     CardPack;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeeklyPackInfo.WeeklyPackInfo_C.OnLoaded_9E0F18934046E07FEF6F4EAEE2D4D84F
	 */
	struct UWeeklyPackInfo_C_OnLoaded_9E0F18934046E07FEF6F4EAEE2D4D84F_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeeklyPackInfo.WeeklyPackInfo_C.OnOfferSet
	 */
	struct UWeeklyPackInfo_C_OnOfferSet_Params
	{
	public:
		struct FStoreOfferBP                                       InOffer;                                                 // 0x0000(0x0120)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeeklyPackInfo.WeeklyPackInfo_C.ExecuteUbergraph_WeeklyPackInfo
	 */
	struct UWeeklyPackInfo_C_ExecuteUbergraph_WeeklyPackInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RRTM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
