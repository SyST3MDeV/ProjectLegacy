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
	 * Function LegalCreditsWidget.LegalCreditsWidget_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_281_OrionBaseButtonClicked__DelegateSignature
	 */
	struct ULegalCreditsWidget_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_281_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LegalCreditsWidget.LegalCreditsWidget_C.Construct
	 */
	struct ULegalCreditsWidget_C_Construct_Params
	{	};

	/**
	 * Function LegalCreditsWidget.LegalCreditsWidget_C.OnSelectedButtonChanged_Event_1
	 */
	struct ULegalCreditsWidget_C_OnSelectedButtonChanged_Event_1_Params
	{
	public:
		class UOrionBaseButton*                                    SelectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ButtonIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LegalCreditsWidget.LegalCreditsWidget_C.ExecuteUbergraph_LegalCreditsWidget
	 */
	struct ULegalCreditsWidget_C_ExecuteUbergraph_LegalCreditsWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W8P9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
