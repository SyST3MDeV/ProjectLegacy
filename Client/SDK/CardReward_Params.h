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
	 * Function CardReward.CardReward_C.SetCard
	 */
	struct UCardReward_C_SetCard_Params
	{
	public:
		class UOrionCardData*                                      CardData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardReward.CardReward_C.Reset
	 */
	struct UCardReward_C_Reset_Params
	{	};

	/**
	 * Function CardReward.CardReward_C.Construct
	 */
	struct UCardReward_C_Construct_Params
	{	};

	/**
	 * Function CardReward.CardReward_C.OnMouseEnter
	 */
	struct UCardReward_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8I8A[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CardReward.CardReward_C.OnMouseLeave
	 */
	struct UCardReward_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CardReward.CardReward_C.BP_OnSelected
	 */
	struct UCardReward_C_BP_OnSelected_Params
	{	};

	/**
	 * Function CardReward.CardReward_C.BndEvt__Reveal_K2Node_ComponentBoundEvent_1323_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UCardReward_C_BndEvt__Reveal_K2Node_ComponentBoundEvent_1323_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function CardReward.CardReward_C.ExecuteUbergraph_CardReward
	 */
	struct UCardReward_C_ExecuteUbergraph_CardReward_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
