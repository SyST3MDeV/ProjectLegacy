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
	 * Function XP_Fill.XP_Fill_C.PreConstruct
	 */
	struct UXP_Fill_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function XP_Fill.XP_Fill_C.OnShowLevelUp
	 */
	struct UXP_Fill_C_OnShowLevelUp_Params
	{
	public:
		bool                                                       bAtMaxLevel;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function XP_Fill.XP_Fill_C.OnOwningHeroSet
	 */
	struct UXP_Fill_C_OnOwningHeroSet_Params
	{
	public:
		class UOrionHeroData*                                      HeroData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function XP_Fill.XP_Fill_C.ExecuteUbergraph_XP_Fill
	 */
	struct UXP_Fill_C_ExecuteUbergraph_XP_Fill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EIJ3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
