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
	 * Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.RunBehavior
	 */
	struct UAIScriptedBehavior_FlowUntilEnemySeen_C_RunBehavior_Params
	{
	public:
		class AOrionAIController*                                  AIController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TZGO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.OnFinish_4016BB134EB9080C2EDA7CB625816B19
	 */
	struct UAIScriptedBehavior_FlowUntilEnemySeen_C_OnFinish_4016BB134EB9080C2EDA7CB625816B19_Params
	{	};

	/**
	 * Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.OnFinish_81B41A9F4A1860E88BB263A806ACABAE
	 */
	struct UAIScriptedBehavior_FlowUntilEnemySeen_C_OnFinish_81B41A9F4A1860E88BB263A806ACABAE_Params
	{	};

	/**
	 * Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.OnMoveFinished_623B680040E2A42E4DABDF8D1D61043E
	 */
	struct UAIScriptedBehavior_FlowUntilEnemySeen_C_OnMoveFinished_623B680040E2A42E4DABDF8D1D61043E_Params
	{
	public:
		EPathFollowingResult                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.OnRequestFailed_623B680040E2A42E4DABDF8D1D61043E
	 */
	struct UAIScriptedBehavior_FlowUntilEnemySeen_C_OnRequestFailed_623B680040E2A42E4DABDF8D1D61043E_Params
	{	};

	/**
	 * Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.BehaviorFinished
	 */
	struct UAIScriptedBehavior_FlowUntilEnemySeen_C_BehaviorFinished_Params
	{
	public:
		class AOrionAIController*                                  AIController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.FlowUntilEnemySeen
	 */
	struct UAIScriptedBehavior_FlowUntilEnemySeen_C_FlowUntilEnemySeen_Params
	{	};

	/**
	 * Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.ExecuteUbergraph_AIScriptedBehavior_FlowUntilEnemySeen
	 */
	struct UAIScriptedBehavior_FlowUntilEnemySeen_C_ExecuteUbergraph_AIScriptedBehavior_FlowUntilEnemySeen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JASW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
