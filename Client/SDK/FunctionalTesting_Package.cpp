/**
 * Name: Paragon
 * Version: v34
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x02CE3E50
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.SetTimeLimit
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewTimeLimit                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFunctionalTestResult                              ResultWhenTimeRunsOut                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::SetTimeLimit(float NewTimeLimit, EFunctionalTestResult ResultWhenTimeRunsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.SetTimeLimit");
		
		AFunctionalTest_SetTimeLimit_Params params {};
		params.NewTimeLimit = NewTimeLimit;
		params.ResultWhenTimeRunsOut = ResultWhenTimeRunsOut;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A851B0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.RegisterAutoDestroyActor
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToAutoDestroy                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::RegisterAutoDestroyActor(class AActor* ActorToAutoDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.RegisterAutoDestroyActor");
		
		AFunctionalTest_RegisterAutoDestroyActor_Params params {};
		params.ActorToAutoDestroy = ActorToAutoDestroy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.ReceiveStartTest
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFunctionalTest::ReceiveStartTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.ReceiveStartTest");
		
		AFunctionalTest_ReceiveStartTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.ReceivePrepareTest
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFunctionalTest::ReceivePrepareTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.ReceivePrepareTest");
		
		AFunctionalTest_ReceivePrepareTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.OnWantsReRunCheck
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	bool AFunctionalTest::OnWantsReRunCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.OnWantsReRunCheck");
		
		AFunctionalTest_OnWantsReRunCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.OnAdditionalTestFinishedMessageRequest
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		EFunctionalTestResult                              TestResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString AFunctionalTest::OnAdditionalTestFinishedMessageRequest(EFunctionalTestResult TestResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.OnAdditionalTestFinishedMessageRequest");
		
		AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Params params {};
		params.TestResult = TestResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3B00
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.LogMessage
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::LogMessage(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.LogMessage");
		
		AFunctionalTest_LogMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3AD0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.IsRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AFunctionalTest::IsRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.IsRunning");
		
		AFunctionalTest_IsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3A70
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.IsReady
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	bool AFunctionalTest::IsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.IsReady");
		
		AFunctionalTest_IsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE39A0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AFunctionalTest::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.IsEnabled");
		
		AFunctionalTest_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE38D0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.GetCurrentRerunReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName AFunctionalTest::GetCurrentRerunReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.GetCurrentRerunReason");
		
		AFunctionalTest_GetCurrentRerunReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE37F0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.FinishTest
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EFunctionalTestResult                              TestResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::FinishTest(EFunctionalTestResult TestResult, const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.FinishTest");
		
		AFunctionalTest_FinishTest_Params params {};
		params.TestResult = TestResult;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.DebugGatherRelevantActors
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	TArray<class AActor*> AFunctionalTest::DebugGatherRelevantActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.DebugGatherRelevantActors");
		
		AFunctionalTest_DebugGatherRelevantActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE32D0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertValue_Int
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EComparisonMethod                                  ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertValue_Int(int32_t Actual, EComparisonMethod ShouldBe, int32_t Expected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertValue_Int");
		
		AFunctionalTest_AssertValue_Int_Params params {};
		params.Actual = Actual;
		params.ShouldBe = ShouldBe;
		params.Expected = Expected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3140
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertValue_Float
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EComparisonMethod                                  ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertValue_Float(float Actual, EComparisonMethod ShouldBe, float Expected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertValue_Float");
		
		AFunctionalTest_AssertValue_Float_Params params {};
		params.Actual = Actual;
		params.ShouldBe = ShouldBe;
		params.Expected = Expected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE2FA0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertValue_DateTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FDateTime                                   Actual                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EComparisonMethod                                  ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Expected                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertValue_DateTime(const struct FDateTime& Actual, EComparisonMethod ShouldBe, const struct FDateTime& Expected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertValue_DateTime");
		
		AFunctionalTest_AssertValue_DateTime_Params params {};
		params.Actual = Actual;
		params.ShouldBe = ShouldBe;
		params.Expected = Expected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE2E50
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertTrue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Condition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertTrue(bool Condition, const class FString& Message, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertTrue");
		
		AFunctionalTest_AssertTrue_Params params {};
		params.Condition = Condition;
		params.Message = Message;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE2CD0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertNotEqual_Vector
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NotExpected                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertNotEqual_Vector");
		
		AFunctionalTest_AssertNotEqual_Vector_Params params {};
		params.Actual = Actual;
		params.NotExpected = NotExpected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE2AC0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertNotEqual_Transform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  Actual                                                     (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  NotExpected                                                (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& NotExpected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertNotEqual_Transform");
		
		AFunctionalTest_AssertNotEqual_Transform_Params params {};
		params.Actual = Actual;
		params.NotExpected = NotExpected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE28C0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertNotEqual_String
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Actual                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NotExpected                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertNotEqual_String(const class FString& Actual, const class FString& NotExpected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertNotEqual_String");
		
		AFunctionalTest_AssertNotEqual_String_Params params {};
		params.Actual = Actual;
		params.NotExpected = NotExpected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE2740
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertNotEqual_Rotator
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NotExpected                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertNotEqual_Rotator");
		
		AFunctionalTest_AssertNotEqual_Rotator_Params params {};
		params.Actual = Actual;
		params.NotExpected = NotExpected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE25F0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertIsValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertIsValid(class UObject* Object, const class FString& Message, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertIsValid");
		
		AFunctionalTest_AssertIsValid_Params params {};
		params.Object = Object;
		params.Message = Message;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE24A0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertFalse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Condition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertFalse(bool Condition, const class FString& Message, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertFalse");
		
		AFunctionalTest_AssertFalse_Params params {};
		params.Condition = Condition;
		params.Message = Message;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE22F0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertEqual_Vector
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Expected                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Tolerance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_Vector");
		
		AFunctionalTest_AssertEqual_Vector_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.What = What;
		params.Tolerance = Tolerance;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE20E0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertEqual_Transform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  Actual                                                     (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Expected                                                   (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_Transform");
		
		AFunctionalTest_AssertEqual_Transform_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE1EE0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertEqual_String
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Actual                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Expected                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_String");
		
		AFunctionalTest_AssertEqual_String_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE1D60
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertEqual_Rotator
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Expected                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_Rotator");
		
		AFunctionalTest_AssertEqual_Rotator_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE1BD0
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AssertEqual_Float
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Expected                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Tolerance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AssertEqual_Float(float Actual, float Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_Float");
		
		AFunctionalTest_AssertEqual_Float_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.What = What;
		params.Tolerance = Tolerance;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE1B50
	 * 		Name   -> Function FunctionalTesting.FunctionalTest.AddRerun
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFunctionalTest::AddRerun(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AddRerun");
		
		AFunctionalTest_AddRerun_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFunctionalTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFunctionalTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FunctionalTesting.FunctionalTest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingComplete
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void APhasedAutomationActorBase::OnFunctionalTestingComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingComplete");
		
		APhasedAutomationActorBase_OnFunctionalTestingComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void APhasedAutomationActorBase::OnFunctionalTestingBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingBegin");
		
		APhasedAutomationActorBase_OnFunctionalTestingBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APhasedAutomationActorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APhasedAutomationActorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FunctionalTesting.PhasedAutomationActorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE4100
	 * 		Name   -> Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		class ACameraActor*                                Camera                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NameOverride                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntPoint                                   Resolution                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DelayBeforeScreenshotSeconds                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const class FString& NameOverride, const struct FIntPoint& Resolution, float DelayBeforeScreenshotSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera");
		
		UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Camera = Camera;
		params.NameOverride = NameOverride;
		params.Resolution = Resolution;
		params.DelayBeforeScreenshotSeconds = DelayBeforeScreenshotSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3F50
	 * 		Name   -> Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntPoint                                   Resolution                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DelayBeforeScreenshotSeconds                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const class FString& Name, const struct FIntPoint& Resolution, float DelayBeforeScreenshotSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot");
		
		UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Name = Name;
		params.Resolution = Resolution;
		params.DelayBeforeScreenshotSeconds = DelayBeforeScreenshotSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024EB5F0
	 * 		Name   -> Function FunctionalTesting.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_EndPerformanceCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.EndPerformanceCapture");
		
		UAutomationBlueprintFunctionLibrary_EndPerformanceCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024EB5F0
	 * 		Name   -> Function FunctionalTesting.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_BeginPerformanceCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture");
		
		UAutomationBlueprintFunctionLibrary_BeginPerformanceCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutomationBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutomationBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FunctionalTesting.AutomationBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE4390
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.WriteLogFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      CaptureDir                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CaptureExtension                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationPerformaceHelper::WriteLogFile(const class FString& CaptureDir, const class FString& CaptureExtension)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.WriteLogFile");
		
		UAutomationPerformaceHelper_WriteLogFile_Params params {};
		params.CaptureDir = CaptureDir;
		params.CaptureExtension = CaptureExtension;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE4370
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.TriggerGPUTraceIfRecordFallsBelowBudget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAutomationPerformaceHelper::TriggerGPUTraceIfRecordFallsBelowBudget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.TriggerGPUTraceIfRecordFallsBelowBudget");
		
		UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE42F0
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.Tick
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationPerformaceHelper::Tick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.Tick");
		
		UAutomationPerformaceHelper_Tick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3F30
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.StopCPUProfiling
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAutomationPerformaceHelper::StopCPUProfiling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.StopCPUProfiling");
		
		UAutomationPerformaceHelper_StopCPUProfiling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3F10
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.StartCPUProfiling
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAutomationPerformaceHelper::StartCPUProfiling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.StartCPUProfiling");
		
		UAutomationPerformaceHelper_StartCPUProfiling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3DD0
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.Sample
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationPerformaceHelper::Sample(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.Sample");
		
		UAutomationPerformaceHelper_Sample_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3BC0
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.OnBeginTests
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAutomationPerformaceHelper::OnBeginTests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.OnBeginTests");
		
		UAutomationPerformaceHelper_OnBeginTests_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3BA0
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.OnAllTestsComplete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAutomationPerformaceHelper::OnAllTestsComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.OnAllTestsComplete");
		
		UAutomationPerformaceHelper_OnAllTestsComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3AA0
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.IsRecording
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAutomationPerformaceHelper::IsRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.IsRecording");
		
		UAutomationPerformaceHelper_IsRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3970
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinRenderThreadBudget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAutomationPerformaceHelper::IsCurrentRecordWithinRenderThreadBudget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinRenderThreadBudget");
		
		UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3910
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGPUBudget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAutomationPerformaceHelper::IsCurrentRecordWithinGPUBudget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGPUBudget");
		
		UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3940
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGameThreadBudget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAutomationPerformaceHelper::IsCurrentRecordWithinGameThreadBudget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGameThreadBudget");
		
		UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE37D0
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.EndStatsFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAutomationPerformaceHelper::EndStatsFile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.EndStatsFile");
		
		UAutomationPerformaceHelper_EndStatsFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE37B0
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.EndRecordingBaseline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAutomationPerformaceHelper::EndRecordingBaseline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.EndRecordingBaseline");
		
		UAutomationPerformaceHelper_EndRecordingBaseline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3790
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.EndRecording
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAutomationPerformaceHelper::EndRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.EndRecording");
		
		UAutomationPerformaceHelper_EndRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE36F0
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.BeginStatsFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RecordName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationPerformaceHelper::BeginStatsFile(const class FString& RecordName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.BeginStatsFile");
		
		UAutomationPerformaceHelper_BeginStatsFile_Params params {};
		params.RecordName = RecordName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3600
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.BeginRecordingBaseline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RecordName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationPerformaceHelper::BeginRecordingBaseline(const class FString& RecordName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.BeginRecordingBaseline");
		
		UAutomationPerformaceHelper_BeginRecordingBaseline_Params params {};
		params.RecordName = RecordName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3460
	 * 		Name   -> Function FunctionalTesting.AutomationPerformaceHelper.BeginRecording
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RecordName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InGPUBudget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRenderThreadBudget                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InGameThreadBudget                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationPerformaceHelper::BeginRecording(const class FString& RecordName, float InGPUBudget, float InRenderThreadBudget, float InGameThreadBudget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.BeginRecording");
		
		UAutomationPerformaceHelper_BeginRecording_Params params {};
		params.RecordName = RecordName;
		params.InGPUBudget = InGPUBudget;
		params.InRenderThreadBudget = InRenderThreadBudget;
		params.InGameThreadBudget = InGameThreadBudget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutomationPerformaceHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutomationPerformaceHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FunctionalTesting.AutomationPerformaceHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFuncTestRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFuncTestRenderingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FunctionalTesting.FuncTestRenderingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE39D0
	 * 		Name   -> Function FunctionalTesting.FunctionalAITest.IsOneOfSpawnedPawns
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AFunctionalAITest::IsOneOfSpawnedPawns(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalAITest.IsOneOfSpawnedPawns");
		
		AFunctionalAITest_IsOneOfSpawnedPawns_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFunctionalAITest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFunctionalAITest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FunctionalTesting.FunctionalAITest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScreenshotFunctionalTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScreenshotFunctionalTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FunctionalTesting.ScreenshotFunctionalTest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFunctionalTestGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFunctionalTestGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FunctionalTesting.FunctionalTestGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02CE3BE0
	 * 		Name   -> Function FunctionalTesting.FunctionalTestingManager.RunAllFunctionalTests
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewLog                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bRunLooped                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWaitForNavigationBuildFinish                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      FailedTestsReproString                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFunctionalTestingManager::STATIC_RunAllFunctionalTests(class UObject* WorldContext, bool bNewLog, bool bRunLooped, bool bWaitForNavigationBuildFinish, const class FString& FailedTestsReproString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTestingManager.RunAllFunctionalTests");
		
		UFunctionalTestingManager_RunAllFunctionalTests_Params params {};
		params.WorldContext = WorldContext;
		params.bNewLog = bNewLog;
		params.bRunLooped = bRunLooped;
		params.bWaitForNavigationBuildFinish = bWaitForNavigationBuildFinish;
		params.FailedTestsReproString = FailedTestsReproString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFunctionalTestingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFunctionalTestingManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FunctionalTesting.FunctionalTestingManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFunctionalTestLevelScript.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFunctionalTestLevelScript::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FunctionalTesting.FunctionalTestLevelScript");
		return ptr;
	}

}


