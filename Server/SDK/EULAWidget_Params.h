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
	 * Function EULAWidget.EULAWidget_C.SetEulaText
	 */
	struct UEULAWidget_C_SetEulaText_Params
	{
	public:
		class FText                                                EulaText;                                                // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function EULAWidget.EULAWidget_C.OnHandleBackAction
	 */
	struct UEULAWidget_C_OnHandleBackAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EULAWidget.EULAWidget_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_193_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UEULAWidget_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_193_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EULAWidget.EULAWidget_C.OnActivated
	 */
	struct UEULAWidget_C_OnActivated_Params
	{	};

	/**
	 * Function EULAWidget.EULAWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_161_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UEULAWidget_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_161_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EULAWidget.EULAWidget_C.OnDeactivated
	 */
	struct UEULAWidget_C_OnDeactivated_Params
	{	};

	/**
	 * Function EULAWidget.EULAWidget_C.ExecuteUbergraph_EULAWidget
	 */
	struct UEULAWidget_C_ExecuteUbergraph_EULAWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2VBL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EULAWidget.EULAWidget_C.OnEulaDecline__DelegateSignature
	 */
	struct UEULAWidget_C_OnEulaDecline__DelegateSignature_Params
	{	};

	/**
	 * Function EULAWidget.EULAWidget_C.OnEulaAccept__DelegateSignature
	 */
	struct UEULAWidget_C_OnEulaAccept__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
