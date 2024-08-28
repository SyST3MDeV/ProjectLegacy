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
	 * Function DeathLogEntry.DeathLogEntry_C.Construct
	 */
	struct UDeathLogEntry_C_Construct_Params
	{	};

	/**
	 * Function DeathLogEntry.DeathLogEntry_C.PreConstruct
	 */
	struct UDeathLogEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DeathLogEntry.DeathLogEntry_C.ExecuteUbergraph_DeathLogEntry
	 */
	struct UDeathLogEntry_C_ExecuteUbergraph_DeathLogEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
