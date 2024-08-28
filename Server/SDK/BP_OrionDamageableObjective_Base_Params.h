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
	 * Function BP_OrionDamageableObjective_Base.BP_OrionDamageableObjective_Base_C.ReturnValidOverlapActor
	 */
	struct ABP_OrionDamageableObjective_Base_C_ReturnValidOverlapActor_Params
	{
	public:
		class AActor*                                              OverlapActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              ReturnActor;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0ESF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OrionDamageableObjective_Base.BP_OrionDamageableObjective_Base_C.HandleLootDrop
	 */
	struct ABP_OrionDamageableObjective_Base_C_HandleLootDrop_Params
	{
	public:
		int32_t                                                    NumDrops;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1C8N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Killer;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionDamageableObjective_Base.BP_OrionDamageableObjective_Base_C.UserConstructionScript
	 */
	struct ABP_OrionDamageableObjective_Base_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
