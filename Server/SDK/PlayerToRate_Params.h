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
	 * Function PlayerToRate.PlayerToRate_C.OnGetPopupMenu
	 */
	struct UPlayerToRate_C_OnGetPopupMenu_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerToRate.PlayerToRate_C.PreConstruct
	 */
	struct UPlayerToRate_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerToRate.PlayerToRate_C.BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UPlayerToRate_C_BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerToRate.PlayerToRate_C.BndEvt__PopupAnchor_K2Node_ComponentBoundEvent_20_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UPlayerToRate_C_BndEvt__PopupAnchor_K2Node_ComponentBoundEvent_20_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerToRate.PlayerToRate_C.CloseChildMenu
	 */
	struct UPlayerToRate_C_CloseChildMenu_Params
	{	};

	/**
	 * Function PlayerToRate.PlayerToRate_C.ExecuteUbergraph_PlayerToRate
	 */
	struct UPlayerToRate_C_ExecuteUbergraph_PlayerToRate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
