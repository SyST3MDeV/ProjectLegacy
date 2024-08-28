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
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnRep_CampLevel
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_OnRep_CampLevel_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.SetNextSpawnStartingLevel
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_SetNextSpawnStartingLevel_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.RefreshJungleCampRespawnTimer
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_RefreshJungleCampRespawnTimer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EWY8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.StopJungleCampRespawnTimer
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_StopJungleCampRespawnTimer_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.StartJungleCampRespawnTimer
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_StartJungleCampRespawnTimer_Params
	{
	public:
		float                                                      InTimer;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InitialSpawn;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1FJ0[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.InitJungleCamp
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_InitJungleCamp_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.UserConstructionScript
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.ReceiveBeginPlay
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.BroadcastJungleCampRespawnTimer
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_BroadcastJungleCampRespawnTimer_Params
	{
	public:
		float                                                      InReplenishTimer;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InitialSpawn;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnHandleMatchStart
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_OnHandleMatchStart_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnReplenishWaveTimerStart
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_OnReplenishWaveTimerStart_Params
	{
	public:
		float                                                      InReplenishDelayTimer;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GYO7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         Killer;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnStartSpawningAIFormation
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_OnStartSpawningAIFormation_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnAIFormationSpawned
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_OnAIFormationSpawned_Params
	{
	public:
		class UOrionAIFormation*                                   NewFormation;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnActorBeginOverlap_Event_1
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_OnActorBeginOverlap_Event_1_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnActorEndOverlap_Event_1
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_OnActorEndOverlap_Event_1_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.JungleCampRespawnTimerTick
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_JungleCampRespawnTimerTick_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.CheckRespawnOrLevel
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_CheckRespawnOrLevel_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.InitialSpawn
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_InitialSpawn_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnPostSpawnedAI
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_OnPostSpawnedAI_Params
	{
	public:
		class AOrionCharAI*                                        SpawnedAI;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.BroadcastStartTick
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_BroadcastStartTick_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.ExecuteUbergraph_BP_OrionCharAISpawner_Jungle
	 */
	struct ABP_OrionCharAISpawner_Jungle_C_ExecuteUbergraph_BP_OrionCharAISpawner_Jungle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YCUS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
