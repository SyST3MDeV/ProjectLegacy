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
	 * Function FollowedHeroWidget.FollowedHeroWidget_C.InitInHUD
	 */
	struct UFollowedHeroWidget_C_InitInHUD_Params
	{
	public:
		class UOrionBaseHUDWidget*                                 InHUDWidget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FollowedHeroWidget.FollowedHeroWidget_C.Construct
	 */
	struct UFollowedHeroWidget_C_Construct_Params
	{	};

	/**
	 * Function FollowedHeroWidget.FollowedHeroWidget_C.OnSpectatorWatchedHeroChange
	 */
	struct UFollowedHeroWidget_C_OnSpectatorWatchedHeroChange_Params
	{
	public:
		EOrionTeam                                                 HeroTeam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HBPP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    HeroIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FollowedHeroWidget.FollowedHeroWidget_C.ExecuteUbergraph_FollowedHeroWidget
	 */
	struct UFollowedHeroWidget_C_ExecuteUbergraph_FollowedHeroWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9L75[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
