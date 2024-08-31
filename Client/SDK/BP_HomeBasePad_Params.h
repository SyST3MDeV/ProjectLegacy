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
	 * Function BP_HomeBasePad.BP_HomeBasePad_C.UserConstructionScript
	 */
	struct ABP_HomeBasePad_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_HomeBasePad.BP_HomeBasePad_C.OnGameplayEffectApplyCallback_Bind
	 */
	struct ABP_HomeBasePad_C_OnGameplayEffectApplyCallback_Bind_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HomeBasePad.BP_HomeBasePad_C.ReceiveBeginPlay
	 */
	struct ABP_HomeBasePad_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HomeBasePad.BP_HomeBasePad_C.ExecuteUbergraph_BP_HomeBasePad
	 */
	struct ABP_HomeBasePad_C_ExecuteUbergraph_BP_HomeBasePad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1P84[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
