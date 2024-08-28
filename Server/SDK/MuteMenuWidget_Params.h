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
	 * Function MuteMenuWidget.MuteMenuWidget_C.On Back Pressed
	 */
	struct UMuteMenuWidget_C_OnBackPressed_Params
	{	};

	/**
	 * Function MuteMenuWidget.MuteMenuWidget_C.OnActivated
	 */
	struct UMuteMenuWidget_C_OnActivated_Params
	{	};

	/**
	 * Function MuteMenuWidget.MuteMenuWidget_C.OnDeactivated
	 */
	struct UMuteMenuWidget_C_OnDeactivated_Params
	{	};

	/**
	 * Function MuteMenuWidget.MuteMenuWidget_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UMuteMenuWidget_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MuteMenuWidget.MuteMenuWidget_C.ExecuteUbergraph_MuteMenuWidget
	 */
	struct UMuteMenuWidget_C_ExecuteUbergraph_MuteMenuWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KRBO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MuteMenuWidget.MuteMenuWidget_C.OnClosed__DelegateSignature
	 */
	struct UMuteMenuWidget_C_OnClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
