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
	 * Function HeroAttributesDisplay.HeroAttributesDisplay_C.Update
	 */
	struct UHeroAttributesDisplay_C_Update_Params
	{	};

	/**
	 * Function HeroAttributesDisplay.HeroAttributesDisplay_C.Construct
	 */
	struct UHeroAttributesDisplay_C_Construct_Params
	{	};

	/**
	 * Function HeroAttributesDisplay.HeroAttributesDisplay_C.Refresh
	 */
	struct UHeroAttributesDisplay_C_Refresh_Params
	{	};

	/**
	 * Function HeroAttributesDisplay.HeroAttributesDisplay_C.Clear
	 */
	struct UHeroAttributesDisplay_C_Clear_Params
	{	};

	/**
	 * Function HeroAttributesDisplay.HeroAttributesDisplay_C.ExecuteUbergraph_HeroAttributesDisplay
	 */
	struct UHeroAttributesDisplay_C_ExecuteUbergraph_HeroAttributesDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4GMA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
