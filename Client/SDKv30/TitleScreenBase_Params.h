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
	 * Function TitleScreenBase.TitleScreenBase_C.NavigateBack
	 */
	struct UTitleScreenBase_C_NavigateBack_Params
	{	};

	/**
	 * Function TitleScreenBase.TitleScreenBase_C.OnKeyDown
	 */
	struct UTitleScreenBase_C_OnKeyDown_Params
	{
	public:
		struct FInKeyEvent                                         MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		struct FReturnValue                                        InKeyEvent;                                              // 0x0000(0x0040)  (Parm)
		struct FCallFunc_GetKey_ReturnValue                        ReturnValue;                                             // 0x0000(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function TitleScreenBase.TitleScreenBase_C.NavigateScreen
	 */
	struct UTitleScreenBase_C_NavigateScreen_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
