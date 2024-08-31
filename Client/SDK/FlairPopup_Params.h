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
	 * Function FlairPopup.FlairPopup_C.GetBrush_1
	 */
	struct UFlairPopup_C_GetBrush_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0090)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function FlairPopup.FlairPopup_C.AnimateIn
	 */
	struct UFlairPopup_C_AnimateIn_Params
	{	};

	/**
	 * Function FlairPopup.FlairPopup_C.AnimateRandomChestOpen
	 */
	struct UFlairPopup_C_AnimateRandomChestOpen_Params
	{	};

	/**
	 * Function FlairPopup.FlairPopup_C.AnimateDailyChestOpen
	 */
	struct UFlairPopup_C_AnimateDailyChestOpen_Params
	{	};

	/**
	 * Function FlairPopup.FlairPopup_C.BndEvt__Daily Chest_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UFlairPopup_C_BndEvt__DailyChest_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function FlairPopup.FlairPopup_C.ExecuteUbergraph_FlairPopup
	 */
	struct UFlairPopup_C_ExecuteUbergraph_FlairPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WXRW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
