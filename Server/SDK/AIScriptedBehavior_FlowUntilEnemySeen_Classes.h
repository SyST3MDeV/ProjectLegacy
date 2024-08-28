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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UAIScriptedBehavior_FlowUntilEnemySeen_C : public UAIScriptedBehavior_BehaviorTree
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0048(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AOrionAIBot*                                         AIController;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              MoveGoalActor;                                           // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UOrionAITask_FlowFieldMove*                          MoveTask;                                                // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool RunBehavior(class AOrionAIController* AIController);
		void OnFinish_4016BB134EB9080C2EDA7CB625816B19();
		void OnFinish_81B41A9F4A1860E88BB263A806ACABAE();
		void OnMoveFinished_623B680040E2A42E4DABDF8D1D61043E(EPathFollowingResult Result);
		void OnRequestFailed_623B680040E2A42E4DABDF8D1D61043E();
		void BehaviorFinished(class AOrionAIController* AIController);
		void FlowUntilEnemySeen();
		void ExecuteUbergraph_AIScriptedBehavior_FlowUntilEnemySeen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
