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
	 * Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.Construct
	 */
	struct URespawnTimerHeroIconWidget_C_Construct_Params
	{	};

	/**
	 * Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.SetHeroIcon
	 */
	struct URespawnTimerHeroIconWidget_C_SetHeroIcon_Params
	{
	public:
		class UTexture2D*                                          HeroIconTexture;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.SetIsFriendly
	 */
	struct URespawnTimerHeroIconWidget_C_SetIsFriendly_Params
	{
	public:
		bool                                                       bIsFriendly;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.StartRemoving
	 */
	struct URespawnTimerHeroIconWidget_C_StartRemoving_Params
	{	};

	/**
	 * Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.OnAnimationFinished_Event_1
	 */
	struct URespawnTimerHeroIconWidget_C_OnAnimationFinished_Event_1_Params
	{	};

	/**
	 * Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.ExecuteUbergraph_RespawnTimerHeroIconWidget
	 */
	struct URespawnTimerHeroIconWidget_C_ExecuteUbergraph_RespawnTimerHeroIconWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
