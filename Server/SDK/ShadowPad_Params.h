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
	 * Function ShadowPad.ShadowPad_C.OnRep_bUpdateLocalEffects
	 */
	struct AShadowPad_C_OnRep_bUpdateLocalEffects_Params
	{	};

	/**
	 * Function ShadowPad.ShadowPad_C.UserConstructionScript
	 */
	struct AShadowPad_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ShadowPad.ShadowPad_C.Timeline_0__FinishedFunc
	 */
	struct AShadowPad_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function ShadowPad.ShadowPad_C.Timeline_0__UpdateFunc
	 */
	struct AShadowPad_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function ShadowPad.ShadowPad_C.UpdateLocalEffects
	 */
	struct AShadowPad_C_UpdateLocalEffects_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShadowPad.ShadowPad_C.VFXUpdate
	 */
	struct AShadowPad_C_VFXUpdate_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShadowPad.ShadowPad_C.ExecuteUbergraph_ShadowPad
	 */
	struct AShadowPad_C_ExecuteUbergraph_ShadowPad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
