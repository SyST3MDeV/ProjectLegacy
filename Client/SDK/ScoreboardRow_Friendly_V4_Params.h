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
	 * Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.Set Local Player colors
	 */
	struct UScoreboardRow_FriendlyV4_C_SetLocalPlayercolors_Params
	{	};

	/**
	 * Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.Construct
	 */
	struct UScoreboardRow_FriendlyV4_C_Construct_Params
	{	};

	/**
	 * Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.OnRespawned
	 */
	struct UScoreboardRow_FriendlyV4_C_OnRespawned_Params
	{	};

	/**
	 * Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.OnDeath
	 */
	struct UScoreboardRow_FriendlyV4_C_OnDeath_Params
	{	};

	/**
	 * Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.UpdateIsLocalPlayer
	 */
	struct UScoreboardRow_FriendlyV4_C_UpdateIsLocalPlayer_Params
	{
	public:
		bool                                                       bIsLocalPlayer;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.UpdateVisibleToLocalPlayer
	 */
	struct UScoreboardRow_FriendlyV4_C_UpdateVisibleToLocalPlayer_Params
	{
	public:
		bool                                                       bVisibleToLocalPlayer;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.OnDisconnectedChange
	 */
	struct UScoreboardRow_FriendlyV4_C_OnDisconnectedChange_Params
	{
	public:
		bool                                                       bIsDisconnected;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UScoreboardRow_FriendlyV4_C_BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.ExecuteUbergraph_ScoreboardRow_Friendly-V4
	 */
	struct UScoreboardRow_FriendlyV4_C_ExecuteUbergraph_ScoreboardRow_FriendlyV4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
