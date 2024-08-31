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
	 * Function BTService_Bot_UpdateEnemy.BTService_Bot_UpdateEnemy_C.ReceiveTickAI
	 */
	struct UBTService_Bot_UpdateEnemy_C_ReceiveTickAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTService_Bot_UpdateEnemy.BTService_Bot_UpdateEnemy_C.QueryDone
	 */
	struct UBTService_Bot_UpdateEnemy_C_QueryDone_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTService_Bot_UpdateEnemy.BTService_Bot_UpdateEnemy_C.ExecuteUbergraph_BTService_Bot_UpdateEnemy
	 */
	struct UBTService_Bot_UpdateEnemy_C_ExecuteUbergraph_BTService_Bot_UpdateEnemy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0WB1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
