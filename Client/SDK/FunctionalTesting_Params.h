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
	 * Function FunctionalTesting.FunctionalTest.SetTimeLimit
	 */
	struct AFunctionalTest_SetTimeLimit_Params
	{
	public:
		float                                                      NewTimeLimit;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFunctionalTestResult                                      ResultWhenTimeRunsOut;                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.RegisterAutoDestroyActor
	 */
	struct AFunctionalTest_RegisterAutoDestroyActor_Params
	{
	public:
		class AActor*                                              ActorToAutoDestroy;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.ReceiveStartTest
	 */
	struct AFunctionalTest_ReceiveStartTest_Params
	{	};

	/**
	 * Function FunctionalTesting.FunctionalTest.ReceivePrepareTest
	 */
	struct AFunctionalTest_ReceivePrepareTest_Params
	{	};

	/**
	 * Function FunctionalTesting.FunctionalTest.OnWantsReRunCheck
	 */
	struct AFunctionalTest_OnWantsReRunCheck_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.OnAdditionalTestFinishedMessageRequest
	 */
	struct AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Params
	{
	public:
		EFunctionalTestResult                                      TestResult;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R2JT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.LogMessage
	 */
	struct AFunctionalTest_LogMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.IsRunning
	 */
	struct AFunctionalTest_IsRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.IsReady
	 */
	struct AFunctionalTest_IsReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.IsEnabled
	 */
	struct AFunctionalTest_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.GetCurrentRerunReason
	 */
	struct AFunctionalTest_GetCurrentRerunReason_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.FinishTest
	 */
	struct AFunctionalTest_FinishTest_Params
	{
	public:
		EFunctionalTestResult                                      TestResult;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2K99[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Message;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.DebugGatherRelevantActors
	 */
	struct AFunctionalTest_DebugGatherRelevantActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertValue_Int
	 */
	struct AFunctionalTest_AssertValue_Int_Params
	{
	public:
		int32_t                                                    Actual;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EComparisonMethod                                          ShouldBe;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JS9X[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Expected;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D7AR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              What;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ContextObject;                                           // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertValue_Float
	 */
	struct AFunctionalTest_AssertValue_Float_Params
	{
	public:
		float                                                      Actual;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EComparisonMethod                                          ShouldBe;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KS7J[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Expected;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XFJ4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              What;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ContextObject;                                           // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertValue_DateTime
	 */
	struct AFunctionalTest_AssertValue_DateTime_Params
	{
	public:
		struct FDateTime                                           Actual;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EComparisonMethod                                          ShouldBe;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D571[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           Expected;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              What;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ContextObject;                                           // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertTrue
	 */
	struct AFunctionalTest_AssertTrue_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G2YY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Message;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ContextObject;                                           // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertNotEqual_Vector
	 */
	struct AFunctionalTest_AssertNotEqual_Vector_Params
	{
	public:
		struct FVector                                             Actual;                                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             NotExpected;                                             // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              What;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ContextObject;                                           // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertNotEqual_Transform
	 */
	struct AFunctionalTest_AssertNotEqual_Transform_Params
	{
	public:
		struct FTransform                                          Actual;                                                  // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          NotExpected;                                             // 0x0030(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              What;                                                    // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ContextObject;                                           // 0x0070(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertNotEqual_String
	 */
	struct AFunctionalTest_AssertNotEqual_String_Params
	{
	public:
		class FString                                              Actual;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NotExpected;                                             // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              What;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ContextObject;                                           // 0x0030(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertNotEqual_Rotator
	 */
	struct AFunctionalTest_AssertNotEqual_Rotator_Params
	{
	public:
		struct FRotator                                            Actual;                                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FRotator                                            NotExpected;                                             // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              What;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ContextObject;                                           // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertIsValid
	 */
	struct AFunctionalTest_AssertIsValid_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Message;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ContextObject;                                           // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertFalse
	 */
	struct AFunctionalTest_AssertFalse_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_758P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Message;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ContextObject;                                           // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertEqual_Vector
	 */
	struct AFunctionalTest_AssertEqual_Vector_Params
	{
	public:
		struct FVector                                             Actual;                                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Expected;                                                // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              What;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Tolerance;                                               // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DHB0[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ContextObject;                                           // 0x0030(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertEqual_Transform
	 */
	struct AFunctionalTest_AssertEqual_Transform_Params
	{
	public:
		struct FTransform                                          Actual;                                                  // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          Expected;                                                // 0x0030(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              What;                                                    // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ContextObject;                                           // 0x0070(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertEqual_String
	 */
	struct AFunctionalTest_AssertEqual_String_Params
	{
	public:
		class FString                                              Actual;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Expected;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              What;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ContextObject;                                           // 0x0030(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertEqual_Rotator
	 */
	struct AFunctionalTest_AssertEqual_Rotator_Params
	{
	public:
		struct FRotator                                            Actual;                                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FRotator                                            Expected;                                                // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              What;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ContextObject;                                           // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AssertEqual_Float
	 */
	struct AFunctionalTest_AssertEqual_Float_Params
	{
	public:
		float                                                      Actual;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Expected;                                                // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              What;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Tolerance;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2TKY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ContextObject;                                           // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTest.AddRerun
	 */
	struct AFunctionalTest_AddRerun_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingComplete
	 */
	struct APhasedAutomationActorBase_OnFunctionalTestingComplete_Params
	{	};

	/**
	 * Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingBegin
	 */
	struct APhasedAutomationActorBase_OnFunctionalTestingBegin_Params
	{	};

	/**
	 * Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
	 */
	struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class ACameraActor*                                        Camera;                                                  // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NameOverride;                                            // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntPoint                                           Resolution;                                              // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DelayBeforeScreenshotSeconds;                            // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
	 */
	struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntPoint                                           Resolution;                                              // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DelayBeforeScreenshotSeconds;                            // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
	 */
	struct UAutomationBlueprintFunctionLibrary_EndPerformanceCapture_Params
	{	};

	/**
	 * Function FunctionalTesting.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
	 */
	struct UAutomationBlueprintFunctionLibrary_BeginPerformanceCapture_Params
	{	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.WriteLogFile
	 */
	struct UAutomationPerformaceHelper_WriteLogFile_Params
	{
	public:
		class FString                                              CaptureDir;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CaptureExtension;                                        // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.TriggerGPUTraceIfRecordFallsBelowBudget
	 */
	struct UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Params
	{	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.Tick
	 */
	struct UAutomationPerformaceHelper_Tick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.StopCPUProfiling
	 */
	struct UAutomationPerformaceHelper_StopCPUProfiling_Params
	{	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.StartCPUProfiling
	 */
	struct UAutomationPerformaceHelper_StartCPUProfiling_Params
	{	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.Sample
	 */
	struct UAutomationPerformaceHelper_Sample_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.OnBeginTests
	 */
	struct UAutomationPerformaceHelper_OnBeginTests_Params
	{	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.OnAllTestsComplete
	 */
	struct UAutomationPerformaceHelper_OnAllTestsComplete_Params
	{	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.IsRecording
	 */
	struct UAutomationPerformaceHelper_IsRecording_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinRenderThreadBudget
	 */
	struct UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGPUBudget
	 */
	struct UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGameThreadBudget
	 */
	struct UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.EndStatsFile
	 */
	struct UAutomationPerformaceHelper_EndStatsFile_Params
	{	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.EndRecordingBaseline
	 */
	struct UAutomationPerformaceHelper_EndRecordingBaseline_Params
	{	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.EndRecording
	 */
	struct UAutomationPerformaceHelper_EndRecording_Params
	{	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.BeginStatsFile
	 */
	struct UAutomationPerformaceHelper_BeginStatsFile_Params
	{
	public:
		class FString                                              RecordName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.BeginRecordingBaseline
	 */
	struct UAutomationPerformaceHelper_BeginRecordingBaseline_Params
	{
	public:
		class FString                                              RecordName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.AutomationPerformaceHelper.BeginRecording
	 */
	struct UAutomationPerformaceHelper_BeginRecording_Params
	{
	public:
		class FString                                              RecordName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InGPUBudget;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InRenderThreadBudget;                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InGameThreadBudget;                                      // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalAITest.IsOneOfSpawnedPawns
	 */
	struct AFunctionalAITest_IsOneOfSpawnedPawns_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FunctionalTesting.FunctionalTestingManager.RunAllFunctionalTests
	 */
	struct UFunctionalTestingManager_RunAllFunctionalTests_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewLog;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bRunLooped;                                              // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWaitForNavigationBuildFinish;                           // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E0OV[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FailedTestsReproString;                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
