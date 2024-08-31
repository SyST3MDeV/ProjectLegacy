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
	 * Function Player_Kill_Player_R.Player_Kill_Player_R_C.Setup Widget
	 */
	struct UPlayer_Kill_Player_R_C_SetupWidget_Params
	{
	public:
		class FText                                                NewPlayerName;                                           // 0x0000(0x0018)  (Parm)
		struct FLinearColor                                        NewOutlineColor;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          NewHeroIcon;                                             // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowRed;                                                 // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BNG0[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Player_Kill_Player_R.Player_Kill_Player_R_C.Construct
	 */
	struct UPlayer_Kill_Player_R_C_Construct_Params
	{	};

	/**
	 * Function Player_Kill_Player_R.Player_Kill_Player_R_C.ExecuteUbergraph_Player_Kill_Player_R
	 */
	struct UPlayer_Kill_Player_R_C_ExecuteUbergraph_Player_Kill_Player_R_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
