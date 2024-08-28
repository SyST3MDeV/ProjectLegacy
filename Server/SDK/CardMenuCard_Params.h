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
	 * Function CardMenuCard.CardMenuCard_C.Construct
	 */
	struct UCardMenuCard_C_Construct_Params
	{	};

	/**
	 * Function CardMenuCard.CardMenuCard_C.OnStateChanged
	 */
	struct UCardMenuCard_C_OnStateChanged_Params
	{
	public:
		EOrionCardMenuCardState                                    NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EOrionCardMenuCardState                                    OldState;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenuCard.CardMenuCard_C.OnMouseLeave
	 */
	struct UCardMenuCard_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CardMenuCard.CardMenuCard_C.OnMouseEnter
	 */
	struct UCardMenuCard_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1VS9[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CardMenuCard.CardMenuCard_C.Reset Animations
	 */
	struct UCardMenuCard_C_ResetAnimations_Params
	{	};

	/**
	 * Function CardMenuCard.CardMenuCard_C.BP_ShowActionPompt
	 */
	struct UCardMenuCard_C_BP_ShowActionPompt_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenuCard.CardMenuCard_C.BP_ChangeRecentlyUnlocked
	 */
	struct UCardMenuCard_C_BP_ChangeRecentlyUnlocked_Params
	{
	public:
		bool                                                       bIsRecentlyUnlocked;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenuCard.CardMenuCard_C.BP_Reset
	 */
	struct UCardMenuCard_C_BP_Reset_Params
	{	};

	/**
	 * Function CardMenuCard.CardMenuCard_C.ExecuteUbergraph_CardMenuCard
	 */
	struct UCardMenuCard_C_ExecuteUbergraph_CardMenuCard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
