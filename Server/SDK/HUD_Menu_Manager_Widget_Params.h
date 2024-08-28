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
	 * Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.OnMouseButtonDown
	 */
	struct UHUD_Menu_Manager_Widget_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_47R0[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.Update Analog Cursor State
	 */
	struct UHUD_Menu_Manager_Widget_C_UpdateAnalogCursorState_Params
	{	};

	/**
	 * Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.Handle Change In Open State
	 */
	struct UHUD_Menu_Manager_Widget_C_HandleChangeInOpenState_Params
	{
	public:
		EOrionMenuSlotTypes                                        MenuSlotType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsNewlyVisible;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PCIU[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.Construct
	 */
	struct UHUD_Menu_Manager_Widget_C_Construct_Params
	{	};

	/**
	 * Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.ExecuteUbergraph_HUD_Menu_Manager_Widget
	 */
	struct UHUD_Menu_Manager_Widget_C_ExecuteUbergraph_HUD_Menu_Manager_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8RU7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
