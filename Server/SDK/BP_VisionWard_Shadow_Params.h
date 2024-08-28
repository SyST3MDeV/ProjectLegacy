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
	 * Function BP_VisionWard_Shadow.BP_VisionWard_Shadow_C.UserConstructionScript
	 */
	struct ABP_VisionWard_Shadow_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_VisionWard_Shadow.BP_VisionWard_Shadow_C.ReceiveBeginPlay
	 */
	struct ABP_VisionWard_Shadow_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_VisionWard_Shadow.BP_VisionWard_Shadow_C.GameplayCue.Damage
	 */
	struct ABP_VisionWard_Shadow_C_GameplayCue_Damage_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EJ5U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_VisionWard_Shadow.BP_VisionWard_Shadow_C.ExecuteUbergraph_BP_VisionWard_Shadow
	 */
	struct ABP_VisionWard_Shadow_C_ExecuteUbergraph_BP_VisionWard_Shadow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
