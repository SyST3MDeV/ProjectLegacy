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
	 * Function BP_TerminusGate.BP_TerminusGate_C.HandleLightTeamColor
	 */
	struct ABP_TerminusGate_C_HandleLightTeamColor_Params
	{
	public:
		struct FLinearColor                                        TeamColor;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TerminusGate.BP_TerminusGate_C.LightArrayMaker
	 */
	struct ABP_TerminusGate_C_LightArrayMaker_Params
	{	};

	/**
	 * Function BP_TerminusGate.BP_TerminusGate_C.HandleLightBrightness
	 */
	struct ABP_TerminusGate_C_HandleLightBrightness_Params
	{
	public:
		class ULightComponent*                                     Light;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Fader;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TerminusGate.BP_TerminusGate_C.UserConstructionScript
	 */
	struct ABP_TerminusGate_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TerminusGate.BP_TerminusGate_C.Timeline_0_0__FinishedFunc
	 */
	struct ABP_TerminusGate_C_Timeline_0_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TerminusGate.BP_TerminusGate_C.Timeline_0_0__UpdateFunc
	 */
	struct ABP_TerminusGate_C_Timeline_0_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TerminusGate.BP_TerminusGate_C.ReceiveBeginPlay
	 */
	struct ABP_TerminusGate_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TerminusGate.BP_TerminusGate_C.OscillateBack
	 */
	struct ABP_TerminusGate_C_OscillateBack_Params
	{	};

	/**
	 * Function BP_TerminusGate.BP_TerminusGate_C.HeroHasRecalled
	 */
	struct ABP_TerminusGate_C_HeroHasRecalled_Params
	{
	public:
		EOrionTeam                                                 HeroTeam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TerminusGate.BP_TerminusGate_C.FlareKeyhole
	 */
	struct ABP_TerminusGate_C_FlareKeyhole_Params
	{	};

	/**
	 * Function BP_TerminusGate.BP_TerminusGate_C.WarmupUpdate
	 */
	struct ABP_TerminusGate_C_WarmupUpdate_Params
	{	};

	/**
	 * Function BP_TerminusGate.BP_TerminusGate_C.HandleTeamColors
	 */
	struct ABP_TerminusGate_C_HandleTeamColors_Params
	{	};

	/**
	 * Function BP_TerminusGate.BP_TerminusGate_C.ExecuteUbergraph_BP_TerminusGate
	 */
	struct ABP_TerminusGate_C_ExecuteUbergraph_BP_TerminusGate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
