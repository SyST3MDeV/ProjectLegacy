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
	 * Function LevelUpControl.LevelUpControl_C.UpdateVisibleBinding
	 */
	struct ULevelUpControl_C_UpdateVisibleBinding_Params
	{
	public:
		bool                                                       IsUsingGamepad;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LevelUpControl.LevelUpControl_C.Construct
	 */
	struct ULevelUpControl_C_Construct_Params
	{	};

	/**
	 * Function LevelUpControl.LevelUpControl_C.PreConstruct
	 */
	struct ULevelUpControl_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LevelUpControl.LevelUpControl_C.ExecuteUbergraph_LevelUpControl
	 */
	struct ULevelUpControl_C_ExecuteUbergraph_LevelUpControl_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RH3G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
