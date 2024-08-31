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
	 * Function DamageOverlay.DamageOverlay_C.Setup Flash Timer
	 */
	struct UDamageOverlay_C_SetupFlashTimer_Params
	{	};

	/**
	 * Function DamageOverlay.DamageOverlay_C.Update Flash
	 */
	struct UDamageOverlay_C_UpdateFlash_Params
	{	};

	/**
	 * Function DamageOverlay.DamageOverlay_C.On Flash Finished
	 */
	struct UDamageOverlay_C_OnFlashFinished_Params
	{	};

	/**
	 * Function DamageOverlay.DamageOverlay_C.Set Damage Flash Opacity
	 */
	struct UDamageOverlay_C_SetDamageFlashOpacity_Params
	{
	public:
		float                                                      NewOpacity;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z24B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DamageOverlay.DamageOverlay_C.Set Opacity
	 */
	struct UDamageOverlay_C_SetOpacity_Params
	{
	public:
		float                                                      NewOpacity;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BSFW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DamageOverlay.DamageOverlay_C.Update Visuals
	 */
	struct UDamageOverlay_C_UpdateVisuals_Params
	{	};

	/**
	 * Function DamageOverlay.DamageOverlay_C.Construct
	 */
	struct UDamageOverlay_C_Construct_Params
	{	};

	/**
	 * Function DamageOverlay.DamageOverlay_C.OnDamageEvent_Event_1
	 */
	struct UDamageOverlay_C_OnDamageEvent_Event_1_Params
	{
	public:
		struct FOrionUIDamageEventInfo                             UIDamageEventInfo;                                       // 0x0000(0x0030)  (Parm)
	};

	/**
	 * Function DamageOverlay.DamageOverlay_C.ExecuteUbergraph_DamageOverlay
	 */
	struct UDamageOverlay_C_ExecuteUbergraph_DamageOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_43VG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
