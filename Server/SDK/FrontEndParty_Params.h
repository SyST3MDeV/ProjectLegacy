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
	 * Function FrontEndParty.FrontEndParty_C.Update Party
	 */
	struct UFrontEndParty_C_UpdateParty_Params
	{	};

	/**
	 * Function FrontEndParty.FrontEndParty_C.Construct
	 */
	struct UFrontEndParty_C_Construct_Params
	{	};

	/**
	 * Function FrontEndParty.FrontEndParty_C.OnHeroChanged_Event_1
	 */
	struct UFrontEndParty_C_OnHeroChanged_Event_1_Params
	{
	public:
		class UOrionHeroData*                                      NewHero;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndParty.FrontEndParty_C.ExecuteUbergraph_FrontEndParty
	 */
	struct UFrontEndParty_C_ExecuteUbergraph_FrontEndParty_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HPD1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
