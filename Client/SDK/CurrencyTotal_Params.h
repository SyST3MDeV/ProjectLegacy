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
	 * Function CurrencyTotal.CurrencyTotal_C.HandleCurrencyChanged
	 */
	struct UCurrencyTotal_C_HandleCurrencyChanged_Params
	{	};

	/**
	 * Function CurrencyTotal.CurrencyTotal_C.Construct
	 */
	struct UCurrencyTotal_C_Construct_Params
	{	};

	/**
	 * Function CurrencyTotal.CurrencyTotal_C.PreConstruct
	 */
	struct UCurrencyTotal_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CurrencyTotal.CurrencyTotal_C.ExecuteUbergraph_CurrencyTotal
	 */
	struct UCurrencyTotal_C_ExecuteUbergraph_CurrencyTotal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JAOY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
