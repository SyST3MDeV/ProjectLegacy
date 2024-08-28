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
	 * Function BP_OrionCharAI_JungleCreep_Red_V2.BP_OrionCharAI_JungleCreep_Red_V2_C.UserConstructionScript
	 */
	struct ABP_OrionCharAI_JungleCreep_Red_V2_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OrionCharAI_JungleCreep_Red_V2.BP_OrionCharAI_JungleCreep_Red_V2_C.GameplayCue.Death
	 */
	struct ABP_OrionCharAI_JungleCreep_Red_V2_C_GameplayCue_Death_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D07Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_OrionCharAI_JungleCreep_Red_V2.BP_OrionCharAI_JungleCreep_Red_V2_C.ExecuteUbergraph_BP_OrionCharAI_JungleCreep_Red_V2
	 */
	struct ABP_OrionCharAI_JungleCreep_Red_V2_C_ExecuteUbergraph_BP_OrionCharAI_JungleCreep_Red_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
