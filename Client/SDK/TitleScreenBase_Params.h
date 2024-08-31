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
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YA9K[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function TitleScreenBase.TitleScreenBase_C.NavigateScreen
	 */
	struct UTitleScreenBase_C_NavigateScreen_Params
	{
	public:
		class UClass*                                              NextScreen;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
