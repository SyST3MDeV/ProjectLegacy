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
	 * Class FunctionalTesting.FunctionalTest
	 * Size -> 0x0128 (FullSize[0x04A8] - InheritedSize[0x0380])
	 */
	class AFunctionalTest : public AActor
	{
	public:
		class UBillboardComponent*                                 SpriteComponent;                                         // 0x0380(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled : 1;                                          // 0x0388(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JNEJ[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0390(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              ObservationPoint;                                        // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRandomStream                                       RandomNumbersStream;                                     // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		EFunctionalTestResult                                      Result;                                                  // 0x03B0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYS7[0x3];                                   // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PreparationTimeLimit;                                    // 0x03B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeLimit;                                               // 0x03B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARDO[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TimesUpMessage;                                          // 0x03C0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EFunctionalTestResult                                      TimesUpResult;                                           // 0x03D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QW74[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTestStart;                                             // 0x03E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTestFinished;                                          // 0x03F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      AutoDestroyActors;                                       // 0x0400(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F67J[0x70];                                  // 0x0410(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsRunning;                                              // 0x0480(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QA9M[0x27];                                  // 0x0481(0x0027) Fix size for supers

	public:
		void SetTimeLimit(float NewTimeLimit, EFunctionalTestResult ResultWhenTimeRunsOut);
		void RegisterAutoDestroyActor(class AActor* ActorToAutoDestroy);
		void ReceiveStartTest();
		void ReceivePrepareTest();
		bool OnWantsReRunCheck();
		class FString OnAdditionalTestFinishedMessageRequest(EFunctionalTestResult TestResult);
		void LogMessage(const class FString& Message);
		bool IsRunning();
		bool IsReady();
		bool IsEnabled();
		class FName GetCurrentRerunReason();
		void FinishTest(EFunctionalTestResult TestResult, const class FString& Message);
		TArray<class AActor*> DebugGatherRelevantActors();
		void AssertValue_Int(int32_t Actual, EComparisonMethod ShouldBe, int32_t Expected, const class FString& What, class UObject* ContextObject);
		void AssertValue_Float(float Actual, EComparisonMethod ShouldBe, float Expected, const class FString& What, class UObject* ContextObject);
		void AssertValue_DateTime(const struct FDateTime& Actual, EComparisonMethod ShouldBe, const struct FDateTime& Expected, const class FString& What, class UObject* ContextObject);
		void AssertTrue(bool Condition, const class FString& Message, class UObject* ContextObject);
		void AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const class FString& What, class UObject* ContextObject);
		void AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& NotExpected, const class FString& What, class UObject* ContextObject);
		void AssertNotEqual_String(const class FString& Actual, const class FString& NotExpected, const class FString& What, class UObject* ContextObject);
		void AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const class FString& What, class UObject* ContextObject);
		void AssertIsValid(class UObject* Object, const class FString& Message, class UObject* ContextObject);
		void AssertFalse(bool Condition, const class FString& Message, class UObject* ContextObject);
		void AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
		void AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& What, class UObject* ContextObject);
		void AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& What, class UObject* ContextObject);
		void AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& What, class UObject* ContextObject);
		void AssertEqual_Float(float Actual, float Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
		void AddRerun(const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class FunctionalTesting.PhasedAutomationActorBase
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class APhasedAutomationActorBase : public AActor
	{
	public:
		void OnFunctionalTestingComplete();
		void OnFunctionalTestingBegin();
		static UClass* StaticClass();
	};

	/**
	 * Class FunctionalTesting.AutomationBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAutomationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const class FString& NameOverride, const struct FIntPoint& Resolution, float DelayBeforeScreenshotSeconds);
		void STATIC_TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const class FString& Name, const struct FIntPoint& Resolution, float DelayBeforeScreenshotSeconds);
		void STATIC_EndPerformanceCapture();
		void STATIC_BeginPerformanceCapture();
		static UClass* StaticClass();
	};

	/**
	 * Class FunctionalTesting.AutomationPerformaceHelper
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UAutomationPerformaceHelper : public UObject
	{
	public:
		unsigned char                                              UnknownData_JL88[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		void WriteLogFile(const class FString& CaptureDir, const class FString& CaptureExtension);
		void TriggerGPUTraceIfRecordFallsBelowBudget();
		void Tick(float DeltaSeconds);
		void StopCPUProfiling();
		void StartCPUProfiling();
		void Sample(float DeltaSeconds);
		void OnBeginTests();
		void OnAllTestsComplete();
		bool IsRecording();
		bool IsCurrentRecordWithinRenderThreadBudget();
		bool IsCurrentRecordWithinGPUBudget();
		bool IsCurrentRecordWithinGameThreadBudget();
		void EndStatsFile();
		void EndRecordingBaseline();
		void EndRecording();
		void BeginStatsFile(const class FString& RecordName);
		void BeginRecordingBaseline(const class FString& RecordName);
		void BeginRecording(const class FString& RecordName, float InGPUBudget, float InRenderThreadBudget, float InGameThreadBudget);
		static UClass* StaticClass();
	};

	/**
	 * Class FunctionalTesting.FuncTestRenderingComponent
	 * Size -> 0x0000 (FullSize[0x0630] - InheritedSize[0x0630])
	 */
	class UFuncTestRenderingComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FunctionalTesting.FunctionalAITest
	 * Size -> 0x0088 (FullSize[0x0530] - InheritedSize[0x04A8])
	 */
	class AFunctionalAITest : public AFunctionalTest
	{
	public:
		TArray<struct FAITestSpawnSet>                             SpawnSets;                                               // 0x04A8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      SpawnLocationRandomizationRange;                         // 0x04B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z3CU[0x4];                                   // 0x04BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APawn*>                                       SpawnedPawns;                                            // 0x04C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FPendingDelayedSpawn>                        PendingDelayedSpawns;                                    // 0x04D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_07FO[0x18];                                  // 0x04E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAISpawned;                                             // 0x04F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnAllAISPawned;                                          // 0x0508(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		bool                                                       bWaitForNavMesh : 1;                                     // 0x0518(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0E29[0x17];                                  // 0x0519(0x0017) MISSED OFFSET (PADDING)

	public:
		bool IsOneOfSpawnedPawns(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class FunctionalTesting.ScreenshotFunctionalTest
	 * Size -> 0x0028 (FullSize[0x04D0] - InheritedSize[0x04A8])
	 */
	class AScreenshotFunctionalTest : public AFunctionalTest
	{
	public:
		class UCameraComponent*                                    ScreenshotCamera;                                        // 0x04A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FIntPoint                                           Resolution;                                              // 0x04B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class FName                                                VisualizeBuffer;                                         // 0x04B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EComparisonTolerance                                       Tolerance;                                               // 0x04C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FComparisonToleranceAmount                          ToleranceAmount;                                         // 0x04C1(0x0006) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KVXX[0x1];                                   // 0x04C7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaximumAllowedError;                                     // 0x04C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreAntiAliasing;                                     // 0x04CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bIgnoreColors;                                           // 0x04CD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6GCC[0x2];                                   // 0x04CE(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FunctionalTesting.FunctionalTestGameMode
	 * Size -> 0x0000 (FullSize[0x0458] - InheritedSize[0x0458])
	 */
	class AFunctionalTestGameMode : public AGameMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FunctionalTesting.FunctionalTestingManager
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UFunctionalTestingManager : public UBlueprintFunctionLibrary
	{
	public:
		TArray<class AFunctionalTest*>                             TestsLeft;                                               // 0x0028(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class AFunctionalTest*>                             AllTests;                                                // 0x0038(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSetupTests;                                            // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTestsComplete;                                         // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTestsBegin;                                            // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B8SH[0x88];                                  // 0x0078(0x0088) MISSED OFFSET (PADDING)

	public:
		bool STATIC_RunAllFunctionalTests(class UObject* WorldContext, bool bNewLog, bool bRunLooped, bool bWaitForNavigationBuildFinish, const class FString& FailedTestsReproString);
		static UClass* StaticClass();
	};

	/**
	 * Class FunctionalTesting.FunctionalTestLevelScript
	 * Size -> 0x0000 (FullSize[0x0388] - InheritedSize[0x0388])
	 */
	class AFunctionalTestLevelScript : public ALevelScriptActor
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
