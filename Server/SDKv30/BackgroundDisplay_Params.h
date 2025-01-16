#pragma once

/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BackgroundDisplay.BackgroundDisplay_C.SetHero
	 */
	struct UBackgroundDisplay_C_SetHero_Params
	{
	public:
		class FTemp_int_Array_Index_Variable*                      HeroData;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
