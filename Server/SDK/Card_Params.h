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
	 * Function Card.Card_C.GetData
	 */
	struct UCard_C_GetData_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Card.Card_C.Initialize
	 */
	struct UCard_C_Initialize_Params
	{	};

	/**
	 * Function Card.Card_C.SetRowColumn
	 */
	struct UCard_C_SetRowColumn_Params
	{
	public:
		int32_t                                                    Row;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Column;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Card.Card_C.SetData
	 */
	struct UCard_C_SetData_Params
	{
	public:
		class UObject*                                             SourceData;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Card.Card_C.Reset
	 */
	struct UCard_C_Reset_Params
	{	};

	/**
	 * Function Card.Card_C.BP_OnClicked
	 */
	struct UCard_C_BP_OnClicked_Params
	{	};

	/**
	 * Function Card.Card_C.OnMouseEnter
	 */
	struct UCard_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TC5I[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Card.Card_C.OnMouseLeave
	 */
	struct UCard_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Card.Card_C.RegisterOnClicked
	 */
	struct UCard_C_RegisterOnClicked_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Card.Card_C.RegisterOnHover
	 */
	struct UCard_C_RegisterOnHover_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Card.Card_C.RegisterOnSelected
	 */
	struct UCard_C_RegisterOnSelected_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Card.Card_C.RegisterOnUnhover
	 */
	struct UCard_C_RegisterOnUnhover_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Card.Card_C.BP_OnSelected
	 */
	struct UCard_C_BP_OnSelected_Params
	{	};

	/**
	 * Function Card.Card_C.BP_OnDeselected
	 */
	struct UCard_C_BP_OnDeselected_Params
	{	};

	/**
	 * Function Card.Card_C.OnCardRefreshed
	 */
	struct UCard_C_OnCardRefreshed_Params
	{	};

	/**
	 * Function Card.Card_C.ExecuteUbergraph_Card
	 */
	struct UCard_C_ExecuteUbergraph_Card_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Card.Card_C.OnCardSelected__DelegateSignature
	 */
	struct UCard_C_OnCardSelected__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Card;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Card.Card_C.OnCardClicked__DelegateSignature
	 */
	struct UCard_C_OnCardClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Card;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Card.Card_C.OnEndHover__DelegateSignature
	 */
	struct UCard_C_OnEndHover__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Card;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Card.Card_C.OnBeginHover__DelegateSignature
	 */
	struct UCard_C_OnBeginHover__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Card;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
