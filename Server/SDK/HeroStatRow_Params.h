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
	 * Function HeroStatRow.HeroStatRow_C.GetData
	 */
	struct UHeroStatRow_C_GetData_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HeroStatRow.HeroStatRow_C.UpdateStatValues
	 */
	struct UHeroStatRow_C_UpdateStatValues_Params
	{	};

	/**
	 * Function HeroStatRow.HeroStatRow_C.Initialize
	 */
	struct UHeroStatRow_C_Initialize_Params
	{	};

	/**
	 * Function HeroStatRow.HeroStatRow_C.RegisterOnClicked
	 */
	struct UHeroStatRow_C_RegisterOnClicked_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function HeroStatRow.HeroStatRow_C.RegisterOnHover
	 */
	struct UHeroStatRow_C_RegisterOnHover_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function HeroStatRow.HeroStatRow_C.RegisterOnSelected
	 */
	struct UHeroStatRow_C_RegisterOnSelected_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function HeroStatRow.HeroStatRow_C.RegisterOnUnhover
	 */
	struct UHeroStatRow_C_RegisterOnUnhover_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function HeroStatRow.HeroStatRow_C.Reset
	 */
	struct UHeroStatRow_C_Reset_Params
	{	};

	/**
	 * Function HeroStatRow.HeroStatRow_C.SetRowColumn
	 */
	struct UHeroStatRow_C_SetRowColumn_Params
	{
	public:
		int32_t                                                    Row;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Column;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HeroStatRow.HeroStatRow_C.SetData
	 */
	struct UHeroStatRow_C_SetData_Params
	{
	public:
		class UObject*                                             SourceData;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HeroStatRow.HeroStatRow_C.ExecuteUbergraph_HeroStatRow
	 */
	struct UHeroStatRow_C_ExecuteUbergraph_HeroStatRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MI0T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
