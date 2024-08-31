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
	 * Function BP_Coin.BP_Coin_C.UserConstructionScript
	 */
	struct ABP_Coin_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Coin.BP_Coin_C.OnCoinVisualScalar
	 */
	struct ABP_Coin_C_OnCoinVisualScalar_Params
	{
	public:
		EOrionCoinSize                                             Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P2I2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceDynamic*                            CoinMID;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Coin.BP_Coin_C.OnTeamChanged
	 */
	struct ABP_Coin_C_OnTeamChanged_Params
	{
	public:
		EOrionTeam                                                 NewTeamIdx;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Coin.BP_Coin_C.OnPickupActivated
	 */
	struct ABP_Coin_C_OnPickupActivated_Params
	{	};

	/**
	 * Function BP_Coin.BP_Coin_C.OnPickupDeactivated
	 */
	struct ABP_Coin_C_OnPickupDeactivated_Params
	{	};

	/**
	 * Function BP_Coin.BP_Coin_C.ExecuteUbergraph_BP_Coin
	 */
	struct ABP_Coin_C_ExecuteUbergraph_BP_Coin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
