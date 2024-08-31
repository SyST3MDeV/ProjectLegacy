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
	 * Function BP_OrionCharAI_BipedBot.BP_OrionCharAI_BipedBot_C.UserConstructionScript
	 */
	struct ABP_OrionCharAI_BipedBot_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OrionCharAI_BipedBot.BP_OrionCharAI_BipedBot_C.GameplayCue.Damage
	 */
	struct ABP_OrionCharAI_BipedBot_C_GameplayCue_Damage_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YWMO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_OrionCharAI_BipedBot.BP_OrionCharAI_BipedBot_C.ExecuteUbergraph_BP_OrionCharAI_BipedBot
	 */
	struct ABP_OrionCharAI_BipedBot_C_ExecuteUbergraph_BP_OrionCharAI_BipedBot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
