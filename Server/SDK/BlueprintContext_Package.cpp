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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlueprintContextBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlueprintContextBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.BlueprintContextBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57360
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.SetNormalizedPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   NewRelativePosition                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAnalogCursorContext::SetNormalizedPosition(const struct FVector2D& NewRelativePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.SetNormalizedPosition");
		
		UAnalogCursorContext_SetNormalizedPosition_Params params {};
		params.NewRelativePosition = NewRelativePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56E10
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.SetIsListeningForGestures
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewlyListening                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAnalogCursorContext::SetIsListeningForGestures(bool bNewlyListening)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.SetIsListeningForGestures");
		
		UAnalogCursorContext_SetIsListeningForGestures_Params params {};
		params.bNewlyListening = bNewlyListening;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C561D0
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.SetControllingAnalogStick
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOrionAnalogStick                                  NewAnalogStick                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalogCursorContext::SetControllingAnalogStick(EOrionAnalogStick NewAnalogStick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.SetControllingAnalogStick");
		
		UAnalogCursorContext_SetControllingAnalogStick_Params params {};
		params.NewAnalogStick = NewAnalogStick;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.AnalogCursorContext.OnFaceButtonClick__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UAnalogCursorContext::OnFaceButtonClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.AnalogCursorContext.OnFaceButtonClick__DelegateSignature");
		
		UAnalogCursorContext_OnFaceButtonClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.AnalogCursorContext.OnAnalogCursorToggle__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               UsingAnalog                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAnalogCursorContext::OnAnalogCursorToggle__DelegateSignature(bool UsingAnalog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.AnalogCursorContext.OnAnalogCursorToggle__DelegateSignature");
		
		UAnalogCursorContext_OnAnalogCursorToggle__DelegateSignature_Params params {};
		params.UsingAnalog = UsingAnalog;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.AnalogCursorContext.OnAnalogCursorHovered__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bIsHovering                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAnalogCursorContext::OnAnalogCursorHovered__DelegateSignature(bool bIsHovering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.AnalogCursorContext.OnAnalogCursorHovered__DelegateSignature");
		
		UAnalogCursorContext_OnAnalogCursorHovered__DelegateSignature_Params params {};
		params.bIsHovering = bIsHovering;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.AnalogCursorContext.OnAnalogCursorEnabledToggle__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAnalogCursorContext::OnAnalogCursorEnabledToggle__DelegateSignature(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.AnalogCursorContext.OnAnalogCursorEnabledToggle__DelegateSignature");
		
		UAnalogCursorContext_OnAnalogCursorEnabledToggle__DelegateSignature_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C537B0
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.IsUsingAnalogCursor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAnalogCursorContext::IsUsingAnalogCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.IsUsingAnalogCursor");
		
		UAnalogCursorContext_IsUsingAnalogCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53340
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.IsHovering
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAnalogCursorContext::IsHovering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.IsHovering");
		
		UAnalogCursorContext_IsHovering_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C530D0
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.IsDelegateToggleBound
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAnalogCursorContext::IsDelegateToggleBound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.IsDelegateToggleBound");
		
		UAnalogCursorContext_IsDelegateToggleBound_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C525E0
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.GetVelocity
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UAnalogCursorContext::GetVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.GetVelocity");
		
		UAnalogCursorContext_GetVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C510E0
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.GetRightTriggerValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UAnalogCursorContext::GetRightTriggerValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.GetRightTriggerValue");
		
		UAnalogCursorContext_GetRightTriggerValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50ED0
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.GetRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UAnalogCursorContext::GetRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.GetRadius");
		
		UAnalogCursorContext_GetRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F6E0
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.GetNormalizedPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UAnalogCursorContext::GetNormalizedPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.GetNormalizedPosition");
		
		UAnalogCursorContext_GetNormalizedPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EBE0
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.GetLastCursorDirection
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UAnalogCursorContext::GetLastCursorDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.GetLastCursorDirection");
		
		UAnalogCursorContext_GetLastCursorDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A93FA0
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.GetIsUsingGamePad
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAnalogCursorContext::GetIsUsingGamePad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.GetIsUsingGamePad");
		
		UAnalogCursorContext_GetIsUsingGamePad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EAF0
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.GetIsInFastMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAnalogCursorContext::GetIsInFastMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.GetIsInFastMode");
		
		UAnalogCursorContext_GetIsInFastMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EA50
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.GetHoveredWidgetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UAnalogCursorContext::GetHoveredWidgetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.GetHoveredWidgetName");
		
		UAnalogCursorContext_GetHoveredWidgetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4DE30
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.GetGestureInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionGestureDirection                             Direction0                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionGestureDirection                             Direction1                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalogCursorContext::GetGestureInfo(EOrionGestureDirection* Direction0, EOrionGestureDirection* Direction1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.GetGestureInfo");
		
		UAnalogCursorContext_GetGestureInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction0 != nullptr)
			*Direction0 = params.Direction0;
		if (Direction1 != nullptr)
			*Direction1 = params.Direction1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4CED0
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.GetDirectionFromVector
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector2D                                   Vector                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOrionGestureDirection UAnalogCursorContext::GetDirectionFromVector(const struct FVector2D& Vector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.GetDirectionFromVector");
		
		UAnalogCursorContext_GetDirectionFromVector_Params params {};
		params.Vector = Vector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C410
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.GetCurrentPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UAnalogCursorContext::GetCurrentPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.GetCurrentPosition");
		
		UAnalogCursorContext_GetCurrentPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4AAE0
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.GetAnalogStickValues
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UAnalogCursorContext::GetAnalogStickValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.GetAnalogStickValues");
		
		UAnalogCursorContext_GetAnalogStickValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49420
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.EnableAnalogCursor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnableParallax                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAnalogCursorContext::EnableAnalogCursor(bool bEnableParallax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.EnableAnalogCursor");
		
		UAnalogCursorContext_EnableAnalogCursor_Params params {};
		params.bEnableParallax = bEnableParallax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49310
	 * 		Name   -> Function BlueprintContext.AnalogCursorContext.DisableAnalogCursor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAnalogCursorContext::DisableAnalogCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AnalogCursorContext.DisableAnalogCursor");
		
		UAnalogCursorContext_DisableAnalogCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnalogCursorContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnalogCursorContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.AnalogCursorContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C486C0
	 * 		Name   -> Function BlueprintContext.AutomationContext.ViewTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToFace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationContext::ViewTarget(class AActor* ActorToFace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AutomationContext.ViewTarget");
		
		UAutomationContext_ViewTarget_Params params {};
		params.ActorToFace = ActorToFace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C568C0
	 * 		Name   -> Function BlueprintContext.AutomationContext.SetHealth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AOrionChar*                                  InChar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InPercent                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationContext::SetHealth(class AOrionChar* InChar, float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AutomationContext.SetHealth");
		
		UAutomationContext_SetHealth_Params params {};
		params.InChar = InChar;
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55A40
	 * 		Name   -> Function BlueprintContext.AutomationContext.ScriptAIBehavior
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AOrionChar*                                  InChar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIScriptedBehavior*                         ScriptedBehavior                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationContext::ScriptAIBehavior(class AOrionChar* InChar, class UAIScriptedBehavior* ScriptedBehavior)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AutomationContext.ScriptAIBehavior");
		
		UAutomationContext_ScriptAIBehavior_Params params {};
		params.InChar = InChar;
		params.ScriptedBehavior = ScriptedBehavior;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7DA40
	 * 		Name   -> Function BlueprintContext.AutomationContext.ResetAFKTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAutomationContext::ResetAFKTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AutomationContext.ResetAFKTime");
		
		UAutomationContext_ResetAFKTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55040
	 * 		Name   -> Function BlueprintContext.AutomationContext.RegisterForActorSpawnCallbacks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAutomationContext::RegisterForActorSpawnCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AutomationContext.RegisterForActorSpawnCallbacks");
		
		UAutomationContext_RegisterForActorSpawnCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.AutomationContext.OnOrionCharSpawned__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class AOrionChar*                                  NewOrionChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationContext::OnOrionCharSpawned__DelegateSignature(class AOrionChar* NewOrionChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.AutomationContext.OnOrionCharSpawned__DelegateSignature");
		
		UAutomationContext_OnOrionCharSpawned__DelegateSignature_Params params {};
		params.NewOrionChar = NewOrionChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50F00
	 * 		Name   -> Function BlueprintContext.AutomationContext.GetRemainingCooldownForAbility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionAbilitySystemComponent*                AbilitySystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionAbilityBinding                               InputID                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAutomationContext::GetRemainingCooldownForAbility(class UOrionAbilitySystemComponent* AbilitySystem, EOrionAbilityBinding InputID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AutomationContext.GetRemainingCooldownForAbility");
		
		UAutomationContext_GetRemainingCooldownForAbility_Params params {};
		params.AbilitySystem = AbilitySystem;
		params.InputID = InputID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C486C0
	 * 		Name   -> Function BlueprintContext.AutomationContext.ConfirmAbilityForPawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AOrionChar*                                  InChar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationContext::ConfirmAbilityForPawn(class AOrionChar* InChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AutomationContext.ConfirmAbilityForPawn");
		
		UAutomationContext_ConfirmAbilityForPawn_Params params {};
		params.InChar = InChar;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C486C0
	 * 		Name   -> Function BlueprintContext.AutomationContext.CancelAllAbilities
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AOrionChar*                                  InChar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationContext::CancelAllAbilities(class AOrionChar* InChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AutomationContext.CancelAllAbilities");
		
		UAutomationContext_CancelAllAbilities_Params params {};
		params.InChar = InChar;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C486C0
	 * 		Name   -> Function BlueprintContext.AutomationContext.CancelAbilityForPawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AOrionChar*                                  InChar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationContext::CancelAbilityForPawn(class AOrionChar* InChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AutomationContext.CancelAbilityForPawn");
		
		UAutomationContext_CancelAbilityForPawn_Params params {};
		params.InChar = InChar;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47100
	 * 		Name   -> Function BlueprintContext.AutomationContext.ActivateAIAbility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AOrionChar*                                  InChar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionAbilityBinding                               InputID                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationContext::ActivateAIAbility(class AOrionChar* InChar, EOrionAbilityBinding InputID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AutomationContext.ActivateAIAbility");
		
		UAutomationContext_ActivateAIAbility_Params params {};
		params.InChar = InChar;
		params.InputID = InputID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C471C0
	 * 		Name   -> Function BlueprintContext.AutomationContext.ActivateAbilityForPawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AOrionChar*                                  InChar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionAbilityBinding                               InputID                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPressed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAutomationContext::ActivateAbilityForPawn(class AOrionChar* InChar, EOrionAbilityBinding InputID, bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.AutomationContext.ActivateAbilityForPawn");
		
		UAutomationContext_ActivateAbilityForPawn_Params params {};
		params.InChar = InChar;
		params.InputID = InputID;
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutomationContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutomationContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.AutomationContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58130
	 * 		Name   -> Function BlueprintContext.BannerContext.SetupPrototypeFromDef
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionMcpBannerItemDefinition*               BannerDef                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBannerContext::SetupPrototypeFromDef(class UOrionMcpBannerItemDefinition* BannerDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.SetupPrototypeFromDef");
		
		UBannerContext_SetupPrototypeFromDef_Params params {};
		params.BannerDef = BannerDef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57F70
	 * 		Name   -> Function BlueprintContext.BannerContext.SetupBannerSocketFromIdent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSingleBannerEntry                          Socket                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      BannerIdent                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRetainSocketID                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UBannerContext::SetupBannerSocketFromIdent(struct FSingleBannerEntry* Socket, const class FString& BannerIdent, bool bRetainSocketID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.SetupBannerSocketFromIdent");
		
		UBannerContext_SetupBannerSocketFromIdent_Params params {};
		params.BannerIdent = BannerIdent;
		params.bRetainSocketID = bRetainSocketID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Socket != nullptr)
			*Socket = params.Socket;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C579A0
	 * 		Name   -> Function BlueprintContext.BannerContext.SetPrototypeStaffFromIdent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      BannerIdent                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRetainSocketID                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBannerContext::SetPrototypeStaffFromIdent(const class FString& BannerIdent, bool bRetainSocketID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.SetPrototypeStaffFromIdent");
		
		UBannerContext_SetPrototypeStaffFromIdent_Params params {};
		params.BannerIdent = BannerIdent;
		params.bRetainSocketID = bRetainSocketID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C577F0
	 * 		Name   -> Function BlueprintContext.BannerContext.SetPrototypeSocketIdentFromArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              SocketIdentArray                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EOrionBannerType                                   SocketType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBannerContext::SetPrototypeSocketIdentFromArray(TArray<class FString> SocketIdentArray, EOrionBannerType SocketType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.SetPrototypeSocketIdentFromArray");
		
		UBannerContext_SetPrototypeSocketIdentFromArray_Params params {};
		params.SocketIdentArray = SocketIdentArray;
		params.SocketType = SocketType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C576D0
	 * 		Name   -> Function BlueprintContext.BannerContext.SetPrototypeSocketIdent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            socketIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ident                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionBannerType                                   SocketType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBannerContext::SetPrototypeSocketIdent(int32_t socketIndex, const class FString& Ident, EOrionBannerType SocketType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.SetPrototypeSocketIdent");
		
		UBannerContext_SetPrototypeSocketIdent_Params params {};
		params.socketIndex = socketIndex;
		params.Ident = Ident;
		params.SocketType = SocketType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57570
	 * 		Name   -> Function BlueprintContext.BannerContext.SetPrototypeSocketAlteration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            socketIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AlterationIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ident                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionBannerType                                   SocketType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBannerContext::SetPrototypeSocketAlteration(int32_t socketIndex, int32_t AlterationIndex, const class FString& Ident, EOrionBannerType SocketType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.SetPrototypeSocketAlteration");
		
		UBannerContext_SetPrototypeSocketAlteration_Params params {};
		params.socketIndex = socketIndex;
		params.AlterationIndex = AlterationIndex;
		params.Ident = Ident;
		params.SocketType = SocketType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53810
	 * 		Name   -> Function BlueprintContext.BannerContext.IsValidAlteration
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      alterationId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBannerContext::STATIC_IsValidAlteration(const class FString& alterationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.IsValidAlteration");
		
		UBannerContext_IsValidAlteration_Params params {};
		params.alterationId = alterationId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50940
	 * 		Name   -> Function BlueprintContext.BannerContext.GetProtoypeBanner
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSingleBannerEntryRoot                      BannerDef                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UBannerContext::GetProtoypeBanner(struct FSingleBannerEntryRoot* BannerDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetProtoypeBanner");
		
		UBannerContext_GetProtoypeBanner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BannerDef != nullptr)
			*BannerDef = params.BannerDef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50820
	 * 		Name   -> Function BlueprintContext.BannerContext.GetPrototypeSocketIdentArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class FString>                              SocketIdentArray                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EOrionBannerType                                   SocketType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBannerContext::GetPrototypeSocketIdentArray(TArray<class FString>* SocketIdentArray, EOrionBannerType SocketType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetPrototypeSocketIdentArray");
		
		UBannerContext_GetPrototypeSocketIdentArray_Params params {};
		params.SocketType = SocketType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SocketIdentArray != nullptr)
			*SocketIdentArray = params.SocketIdentArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C506E0
	 * 		Name   -> Function BlueprintContext.BannerContext.GetPrototypeSocketIdent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            socketIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SocketIdent                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionBannerType                                   SocketType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBannerContext::GetPrototypeSocketIdent(int32_t socketIndex, class FString* SocketIdent, EOrionBannerType SocketType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetPrototypeSocketIdent");
		
		UBannerContext_GetPrototypeSocketIdent_Params params {};
		params.socketIndex = socketIndex;
		params.SocketType = SocketType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SocketIdent != nullptr)
			*SocketIdent = params.SocketIdent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50560
	 * 		Name   -> Function BlueprintContext.BannerContext.GetPrototypeSocketAlteration
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            socketIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AlterationIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SocketIdent                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionBannerType                                   SocketType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBannerContext::GetPrototypeSocketAlteration(int32_t socketIndex, int32_t AlterationIndex, class FString* SocketIdent, EOrionBannerType SocketType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetPrototypeSocketAlteration");
		
		UBannerContext_GetPrototypeSocketAlteration_Params params {};
		params.socketIndex = socketIndex;
		params.AlterationIndex = AlterationIndex;
		params.SocketType = SocketType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SocketIdent != nullptr)
			*SocketIdent = params.SocketIdent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50410
	 * 		Name   -> Function BlueprintContext.BannerContext.GetPrototypeAlterationIdentArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class FString>                              AlterationIdentArray                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            socketIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionBannerType                                   SocketType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBannerContext::GetPrototypeAlterationIdentArray(TArray<class FString>* AlterationIdentArray, int32_t socketIndex, EOrionBannerType SocketType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetPrototypeAlterationIdentArray");
		
		UBannerContext_GetPrototypeAlterationIdentArray_Params params {};
		params.socketIndex = socketIndex;
		params.SocketType = SocketType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AlterationIdentArray != nullptr)
			*AlterationIdentArray = params.AlterationIdentArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4FE20
	 * 		Name   -> Function BlueprintContext.BannerContext.GetOwnedIDBannerItem
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class UOrionMcpBannerItem*>                 Banners                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      InItemIdent                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBannerItemIdent                            OutItemID                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	/*
	int32_t UBannerContext::GetOwnedIDBannerItem(TArray<class UOrionMcpBannerItem*> Banners, const class FString& InItemIdent, struct FBannerItemIdent* OutItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetOwnedIDBannerItem");
		
		UBannerContext_GetOwnedIDBannerItem_Params params {};
		params.Banners = Banners;
		params.InItemIdent = InItemIdent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItemID != nullptr)
			*OutItemID = params.OutItemID;
		
		return params.ReturnValue;
	}
	*/

	/**
	 * Function:
	 * 		RVA    -> 0x02C4FBD0
	 * 		Name   -> Function BlueprintContext.BannerContext.GetNumSocketsOfType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSingleBannerEntryRoot                      BannerEntry                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		EOrionBannerType                                   ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UBannerContext::GetNumSocketsOfType(const struct FSingleBannerEntryRoot& BannerEntry, EOrionBannerType ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetNumSocketsOfType");
		
		UBannerContext_GetNumSocketsOfType_Params params {};
		params.BannerEntry = BannerEntry;
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4FA90
	 * 		Name   -> Function BlueprintContext.BannerContext.GetNumSockets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSingleBannerEntryRoot                      BannerEntry                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UBannerContext::GetNumSockets(const struct FSingleBannerEntryRoot& BannerEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetNumSockets");
		
		UBannerContext_GetNumSockets_Params params {};
		params.BannerEntry = BannerEntry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F720
	 * 		Name   -> Function BlueprintContext.BannerContext.GetNumAlterationsOnPrototypeSocket
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            socketIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionBannerType                                   SocketType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UBannerContext::GetNumAlterationsOnPrototypeSocket(int32_t socketIndex, EOrionBannerType SocketType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetNumAlterationsOnPrototypeSocket");
		
		UBannerContext_GetNumAlterationsOnPrototypeSocket_Params params {};
		params.socketIndex = socketIndex;
		params.SocketType = SocketType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F5A0
	 * 		Name   -> Function BlueprintContext.BannerContext.GetNameFromDisplayName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionBannerType                                   ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ident                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UBannerContext::GetNameFromDisplayName(EOrionBannerType ItemType, const class FString& Ident)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetNameFromDisplayName");
		
		UBannerContext_GetNameFromDisplayName_Params params {};
		params.ItemType = ItemType;
		params.Ident = Ident;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F0D0
	 * 		Name   -> Function BlueprintContext.BannerContext.GetMaxAlterations
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UBannerContext::STATIC_GetMaxAlterations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetMaxAlterations");
		
		UBannerContext_GetMaxAlterations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4CF70
	 * 		Name   -> Function BlueprintContext.BannerContext.GetDisplayNameFromName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionBannerType                                   ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ident                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UBannerContext::GetDisplayNameFromName(EOrionBannerType ItemType, const class FString& Ident)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetDisplayNameFromName");
		
		UBannerContext_GetDisplayNameFromName_Params params {};
		params.ItemType = ItemType;
		params.Ident = Ident;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4B230
	 * 		Name   -> Function BlueprintContext.BannerContext.GetBannerItemStringsOfType
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionBannerType                                   ItemTypes                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutArray                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bMustOwn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UBannerContext::GetBannerItemStringsOfType(EOrionBannerType ItemTypes, TArray<class FString>* OutArray, bool bMustOwn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetBannerItemStringsOfType");
		
		UBannerContext_GetBannerItemStringsOfType_Params params {};
		params.ItemTypes = ItemTypes;
		params.bMustOwn = bMustOwn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutArray != nullptr)
			*OutArray = params.OutArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4B390
	 * 		Name   -> Function BlueprintContext.BannerContext.GetBannerItemsOfType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionBannerType                                   ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UOrionMcpBannerItemDefinition*> UBannerContext::GetBannerItemsOfType(EOrionBannerType ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetBannerItemsOfType");
		
		UBannerContext_GetBannerItemsOfType_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4B120
	 * 		Name   -> Function BlueprintContext.BannerContext.GetBannerItemNameFromDisplayName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionBannerType                                   ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ident                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UBannerContext::GetBannerItemNameFromDisplayName(EOrionBannerType ItemType, const class FString& Ident)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetBannerItemNameFromDisplayName");
		
		UBannerContext_GetBannerItemNameFromDisplayName_Params params {};
		params.ItemType = ItemType;
		params.Ident = Ident;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4B010
	 * 		Name   -> Function BlueprintContext.BannerContext.GetBannerItemDisplayNameFromName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionBannerType                                   ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ident                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UBannerContext::GetBannerItemDisplayNameFromName(EOrionBannerType ItemType, const class FString& Ident)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetBannerItemDisplayNameFromName");
		
		UBannerContext_GetBannerItemDisplayNameFromName_Params params {};
		params.ItemType = ItemType;
		params.Ident = Ident;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4AE40
	 * 		Name   -> Function BlueprintContext.BannerContext.GetBannerAlterationStrings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class FString>                              OutArray                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bMustOwn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBannerContext::GetBannerAlterationStrings(TArray<class FString>* OutArray, bool bMustOwn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetBannerAlterationStrings");
		
		UBannerContext_GetBannerAlterationStrings_Params params {};
		params.bMustOwn = bMustOwn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutArray != nullptr)
			*OutArray = params.OutArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4AD70
	 * 		Name   -> Function BlueprintContext.BannerContext.GetBannerAlterationNameFromDisplayName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      Ident                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UBannerContext::GetBannerAlterationNameFromDisplayName(const class FString& Ident)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetBannerAlterationNameFromDisplayName");
		
		UBannerContext_GetBannerAlterationNameFromDisplayName_Params params {};
		params.Ident = Ident;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4ACA0
	 * 		Name   -> Function BlueprintContext.BannerContext.GetBannerAlterationDisplayNameFromName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      Ident                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UBannerContext::GetBannerAlterationDisplayNameFromName(const class FString& Ident)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GetBannerAlterationDisplayNameFromName");
		
		UBannerContext_GetBannerAlterationDisplayNameFromName_Params params {};
		params.Ident = Ident;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A040
	 * 		Name   -> Function BlueprintContext.BannerContext.GeneratePrototypeBannerItemIDs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AOrionPlayerController_Game*                 PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBannerItemIdent>                    ItemIdents                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UBannerContext::GeneratePrototypeBannerItemIDs(class AOrionPlayerController_Game* PlayerController, TArray<struct FBannerItemIdent> ItemIdents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GeneratePrototypeBannerItemIDs");
		
		UBannerContext_GeneratePrototypeBannerItemIDs_Params params {};
		params.PlayerController = PlayerController;
		params.ItemIdents = ItemIdents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49D10
	 * 		Name   -> Function BlueprintContext.BannerContext.GenerateBannerItemIDs
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AOrionPlayerController_Game*                 PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBannerItemIdent>                    ItemIdents                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FSingleBannerEntryRoot                      BannerEntry                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UBannerContext::GenerateBannerItemIDs(class AOrionPlayerController_Game* PlayerController, TArray<struct FBannerItemIdent> ItemIdents, struct FSingleBannerEntryRoot* BannerEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.GenerateBannerItemIDs");
		
		UBannerContext_GenerateBannerItemIDs_Params params {};
		params.PlayerController = PlayerController;
		params.ItemIdents = ItemIdents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BannerEntry != nullptr)
			*BannerEntry = params.BannerEntry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C499C0
	 * 		Name   -> Function BlueprintContext.BannerContext.FindActiveBanner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionMcpProfileAccount*                     McpProfile                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOrionMcpBannerItem* UBannerContext::FindActiveBanner(class UOrionMcpProfileAccount* McpProfile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.FindActiveBanner");
		
		UBannerContext_FindActiveBanner_Params params {};
		params.McpProfile = McpProfile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49150
	 * 		Name   -> Function BlueprintContext.BannerContext.CreateRandomBannerDef
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSingleBannerEntryRoot                      RandomBanner                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UBannerContext::STATIC_CreateRandomBannerDef(struct FSingleBannerEntryRoot* RandomBanner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.CreateRandomBannerDef");
		
		UBannerContext_CreateRandomBannerDef_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomBanner != nullptr)
			*RandomBanner = params.RandomBanner;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48F40
	 * 		Name   -> Function BlueprintContext.BannerContext.CreateDefaultBannerDef
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSingleBannerEntryRoot                      DefaultBanner                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UBannerContext::STATIC_CreateDefaultBannerDef(struct FSingleBannerEntryRoot* DefaultBanner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.CreateDefaultBannerDef");
		
		UBannerContext_CreateDefaultBannerDef_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DefaultBanner != nullptr)
			*DefaultBanner = params.DefaultBanner;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48E70
	 * 		Name   -> Function BlueprintContext.BannerContext.CountValidAlterations
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Alterations                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UBannerContext::STATIC_CountValidAlterations(TArray<class FString> Alterations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.CountValidAlterations");
		
		UBannerContext_CountValidAlterations_Params params {};
		params.Alterations = Alterations;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48D30
	 * 		Name   -> Function BlueprintContext.BannerContext.CountOverlapAlterations
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FBannerItemIdent                            BannerItem                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	/*
	int32_t UBannerContext::STATIC_CountOverlapAlterations(const struct FBannerItemIdent& BannerItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.CountOverlapAlterations");
		
		UBannerContext_CountOverlapAlterations_Params params {};
		params.BannerItem = BannerItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}
	*/

	/**
	 * Function:
	 * 		RVA    -> 0x02C47EA0
	 * 		Name   -> Function BlueprintContext.BannerContext.BuildListOfExistingItemAllocations
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionMcpProfileAccount*                     McpProfile                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBannerItemIdent>                    AllocatedBannerIdents                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBannerItemIdent>                    OwnedBannerItems                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UBannerContext::BuildListOfExistingItemAllocations(class UOrionMcpProfileAccount* McpProfile, TArray<struct FBannerItemIdent>* AllocatedBannerIdents, TArray<struct FBannerItemIdent>* OwnedBannerItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.BuildListOfExistingItemAllocations");
		
		UBannerContext_BuildListOfExistingItemAllocations_Params params {};
		params.McpProfile = McpProfile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllocatedBannerIdents != nullptr)
			*AllocatedBannerIdents = params.AllocatedBannerIdents;
		if (OwnedBannerItems != nullptr)
			*OwnedBannerItems = params.OwnedBannerItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47670
	 * 		Name   -> Function BlueprintContext.BannerContext.AddRandomItemToSocketSlot
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSingleBannerEntry                          Socket                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UBannerContext::STATIC_AddRandomItemToSocketSlot(struct FSingleBannerEntry* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.AddRandomItemToSocketSlot");
		
		UBannerContext_AddRandomItemToSocketSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Socket != nullptr)
			*Socket = params.Socket;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47510
	 * 		Name   -> Function BlueprintContext.BannerContext.AddRandomAlterationsToSocket
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSingleBannerEntry                          Socket                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumRandomAlterations                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBannerContext::STATIC_AddRandomAlterationsToSocket(struct FSingleBannerEntry* Socket, int32_t NumRandomAlterations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BannerContext.AddRandomAlterationsToSocket");
		
		UBannerContext_AddRandomAlterationsToSocket_Params params {};
		params.NumRandomAlterations = NumRandomAlterations;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Socket != nullptr)
			*Socket = params.Socket;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBannerContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBannerContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.BannerContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C549A0
	 * 		Name   -> Function BlueprintContext.BaseHUDContext.QueueHUDAlert
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UHUDAlertAsset*                              AlertAsset                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseHUDContext::QueueHUDAlert(class UHUDAlertAsset* AlertAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BaseHUDContext.QueueHUDAlert");
		
		UBaseHUDContext_QueueHUDAlert_Params params {};
		params.AlertAsset = AlertAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.BaseHUDContext.OnUltimateReady__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseHUDContext::OnUltimateReady__DelegateSignature(int32_t InputID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.BaseHUDContext.OnUltimateReady__DelegateSignature");
		
		UBaseHUDContext_OnUltimateReady__DelegateSignature_Params params {};
		params.InputID = InputID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.BaseHUDContext.OnPlayerXPUpdate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            XP                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxXP                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseHUDContext::OnPlayerXPUpdate__DelegateSignature(int32_t XP, int32_t MaxXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.BaseHUDContext.OnPlayerXPUpdate__DelegateSignature");
		
		UBaseHUDContext_OnPlayerXPUpdate__DelegateSignature_Params params {};
		params.XP = XP;
		params.MaxXP = MaxXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.BaseHUDContext.OnLevelUp__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            NewLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseHUDContext::OnLevelUp__DelegateSignature(int32_t NewLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.BaseHUDContext.OnLevelUp__DelegateSignature");
		
		UBaseHUDContext_OnLevelUp__DelegateSignature_Params params {};
		params.NewLevel = NewLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.BaseHUDContext.OnKDAUpdate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            Kills                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Deaths                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Assists                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minions                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseHUDContext::OnKDAUpdate__DelegateSignature(int32_t Kills, int32_t Deaths, int32_t Assists, int32_t Minions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.BaseHUDContext.OnKDAUpdate__DelegateSignature");
		
		UBaseHUDContext_OnKDAUpdate__DelegateSignature_Params params {};
		params.Kills = Kills;
		params.Deaths = Deaths;
		params.Assists = Assists;
		params.Minions = Minions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.BaseHUDContext.OnHeroDeathOrSpawnEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FOrionHUDTeamStatusInfo                     NewTeamInfo                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void UBaseHUDContext::OnHeroDeathOrSpawnEvent__DelegateSignature(const struct FOrionHUDTeamStatusInfo& NewTeamInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.BaseHUDContext.OnHeroDeathOrSpawnEvent__DelegateSignature");
		
		UBaseHUDContext_OnHeroDeathOrSpawnEvent__DelegateSignature_Params params {};
		params.NewTeamInfo = NewTeamInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.BaseHUDContext.OnCardXPUpdate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		float                                              NewXP                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewXPMax                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseHUDContext::OnCardXPUpdate__DelegateSignature(float NewXP, float NewXPMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.BaseHUDContext.OnCardXPUpdate__DelegateSignature");
		
		UBaseHUDContext_OnCardXPUpdate__DelegateSignature_Params params {};
		params.NewXP = NewXP;
		params.NewXPMax = NewXPMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.BaseHUDContext.OnCardPointsUpdated__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            NewCardActivationPointsSpent                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewCardActivationPointsMax                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseHUDContext::OnCardPointsUpdated__DelegateSignature(int32_t NewCardActivationPointsSpent, int32_t NewCardActivationPointsMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.BaseHUDContext.OnCardPointsUpdated__DelegateSignature");
		
		UBaseHUDContext_OnCardPointsUpdated__DelegateSignature_Params params {};
		params.NewCardActivationPointsSpent = NewCardActivationPointsSpent;
		params.NewCardActivationPointsMax = NewCardActivationPointsMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.BaseHUDContext.OnCardLevelUp__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		float                                              NewLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseHUDContext::OnCardLevelUp__DelegateSignature(float NewLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.BaseHUDContext.OnCardLevelUp__DelegateSignature");
		
		UBaseHUDContext_OnCardLevelUp__DelegateSignature_Params params {};
		params.NewLevel = NewLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.BaseHUDContext.OnCannotActivateAbility__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		int32_t                                            InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       RelevantTags                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBaseHUDContext::OnCannotActivateAbility__DelegateSignature(int32_t InputID, const struct FGameplayTagContainer& RelevantTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.BaseHUDContext.OnCannotActivateAbility__DelegateSignature");
		
		UBaseHUDContext_OnCannotActivateAbility__DelegateSignature_Params params {};
		params.InputID = InputID;
		params.RelevantTags = RelevantTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.BaseHUDContext.OnAbilityUpdate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EOrionAbilityBinding                               InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FOrionAbilityUIData                         AbilityData                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void UBaseHUDContext::OnAbilityUpdate__DelegateSignature(EOrionAbilityBinding InputID, const struct FOrionAbilityUIData& AbilityData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.BaseHUDContext.OnAbilityUpdate__DelegateSignature");
		
		UBaseHUDContext_OnAbilityUpdate__DelegateSignature_Params params {};
		params.InputID = InputID;
		params.AbilityData = AbilityData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53750
	 * 		Name   -> Function BlueprintContext.BaseHUDContext.IsUltimateReady
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBaseHUDContext::IsUltimateReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BaseHUDContext.IsUltimateReady");
		
		UBaseHUDContext_IsUltimateReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52270
	 * 		Name   -> Function BlueprintContext.BaseHUDContext.GetTopOpenMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UWidget* UBaseHUDContext::GetTopOpenMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BaseHUDContext.GetTopOpenMenu");
		
		UBaseHUDContext_GetTopOpenMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F4C0
	 * 		Name   -> Function BlueprintContext.BaseHUDContext.GetMyTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionTeam UBaseHUDContext::GetMyTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BaseHUDContext.GetMyTeam");
		
		UBaseHUDContext_GetMyTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EB20
	 * 		Name   -> Function BlueprintContext.BaseHUDContext.GetIsMenuVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionMenuSlotTypes                                MenuType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBaseHUDContext::GetIsMenuVisible(EOrionMenuSlotTypes MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BaseHUDContext.GetIsMenuVisible");
		
		UBaseHUDContext_GetIsMenuVisible_Params params {};
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E060
	 * 		Name   -> Function BlueprintContext.BaseHUDContext.GetHUDPlayerInfo
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionBaseHUDPlayerInfo UBaseHUDContext::GetHUDPlayerInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BaseHUDContext.GetHUDPlayerInfo");
		
		UBaseHUDContext_GetHUDPlayerInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D4A0
	 * 		Name   -> Function BlueprintContext.BaseHUDContext.GetEnemyTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionTeam UBaseHUDContext::GetEnemyTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BaseHUDContext.GetEnemyTeam");
		
		UBaseHUDContext_GetEnemyTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4CEA0
	 * 		Name   -> Function BlueprintContext.BaseHUDContext.GetDesiredAnalogCursorState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionDesiredAnalogCursorState UBaseHUDContext::GetDesiredAnalogCursorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BaseHUDContext.GetDesiredAnalogCursorState");
		
		UBaseHUDContext_GetDesiredAnalogCursorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C380
	 * 		Name   -> Function BlueprintContext.BaseHUDContext.GetCurrentMenu
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionMenuSlotTypes                                ActiveMenu                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseHUDContext::GetCurrentMenu(EOrionMenuSlotTypes* ActiveMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BaseHUDContext.GetCurrentMenu");
		
		UBaseHUDContext_GetCurrentMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveMenu != nullptr)
			*ActiveMenu = params.ActiveMenu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C340
	 * 		Name   -> Function BlueprintContext.BaseHUDContext.GetCurrentMatchTime
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	float UBaseHUDContext::GetCurrentMatchTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BaseHUDContext.GetCurrentMatchTime");
		
		UBaseHUDContext_GetCurrentMatchTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A270
	 * 		Name   -> Function BlueprintContext.BaseHUDContext.GetAbilityData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionAbilityBinding                               InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FOrionAbilityUIData UBaseHUDContext::GetAbilityData(EOrionAbilityBinding InputID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BaseHUDContext.GetAbilityData");
		
		UBaseHUDContext_GetAbilityData_Params params {};
		params.InputID = InputID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48A10
	 * 		Name   -> Function BlueprintContext.BaseHUDContext.ChangeMenuOpenState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOrionMenuSlotTypes                                MenuSlot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewlyOpen                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBaseHUDContext::ChangeMenuOpenState(EOrionMenuSlotTypes MenuSlot, bool bNewlyOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BaseHUDContext.ChangeMenuOpenState");
		
		UBaseHUDContext_ChangeMenuOpenState_Params params {};
		params.MenuSlot = MenuSlot;
		params.bNewlyOpen = bNewlyOpen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseHUDContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseHUDContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.BaseHUDContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.PlayerAwareContext.OnMcpError__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FText                                        ErrorMessage                                               (Parm, NativeAccessSpecifierPublic)
	 */
	void UPlayerAwareContext::OnMcpError__DelegateSignature(const class FText& ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PlayerAwareContext.OnMcpError__DelegateSignature");
		
		UPlayerAwareContext_OnMcpError__DelegateSignature_Params params {};
		params.ErrorMessage = ErrorMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EF70
	 * 		Name   -> Function BlueprintContext.PlayerAwareContext.GetMCPTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FDateTime UPlayerAwareContext::GetMCPTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerAwareContext.GetMCPTime");
		
		UPlayerAwareContext_GetMCPTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerAwareContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerAwareContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.PlayerAwareContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52EF0
	 * 		Name   -> Function BlueprintContext.BoostContext.IsBoostActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionBoostType                                    BoostType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBoostContext::IsBoostActive(EOrionBoostType BoostType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BoostContext.IsBoostActive");
		
		UBoostContext_IsBoostActive_Params params {};
		params.BoostType = BoostType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52EC0
	 * 		Name   -> Function BlueprintContext.BoostContext.IsAnyBoostActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBoostContext::IsAnyBoostActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BoostContext.IsAnyBoostActive");
		
		UBoostContext_IsAnyBoostActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52520
	 * 		Name   -> Function BlueprintContext.BoostContext.GetUsesRemaining
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionBoostType                                    BoostType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UBoostContext::GetUsesRemaining(EOrionBoostType BoostType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BoostContext.GetUsesRemaining");
		
		UBoostContext_GetUsesRemaining_Params params {};
		params.BoostType = BoostType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4B790
	 * 		Name   -> Function BlueprintContext.BoostContext.GetBoosts
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOrionMcpBoostItem*>                  Boosts                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBoostContext::GetBoosts(TArray<class UOrionMcpBoostItem*>* Boosts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BoostContext.GetBoosts");
		
		UBoostContext_GetBoosts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Boosts != nullptr)
			*Boosts = params.Boosts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4B5E0
	 * 		Name   -> Function BlueprintContext.BoostContext.GetBoostExpirationTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EOrionBoostType                                    BoostType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime UBoostContext::GetBoostExpirationTime(EOrionBoostType BoostType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BoostContext.GetBoostExpirationTime");
		
		UBoostContext_GetBoostExpirationTime_Params params {};
		params.BoostType = BoostType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoostContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoostContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.BoostContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56BF0
	 * 		Name   -> Function BlueprintContext.CardShopContext.SetHighlightedSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewHighlightedSlot                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCardShopContext::SetHighlightedSlot(int32_t NewHighlightedSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.SetHighlightedSlot");
		
		UCardShopContext_SetHighlightedSlot_Params params {};
		params.NewHighlightedSlot = NewHighlightedSlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C554A0
	 * 		Name   -> Function BlueprintContext.CardShopContext.RemoveCardFromHandAtIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            HandIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCardShopContext::RemoveCardFromHandAtIndex(int32_t HandIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.RemoveCardFromHandAtIndex");
		
		UCardShopContext_RemoveCardFromHandAtIndex_Params params {};
		params.HandIndex = HandIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55420
	 * 		Name   -> Function BlueprintContext.CardShopContext.RemoveCardDataFromDeck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionCardData*                              CardData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCardShopContext::RemoveCardDataFromDeck(class UOrionCardData* CardData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.RemoveCardDataFromDeck");
		
		UCardShopContext_RemoveCardDataFromDeck_Params params {};
		params.CardData = CardData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.CardShopContext.OnHighlightChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            NewSlotIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OldSlotIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCardShopContext::OnHighlightChange__DelegateSignature(int32_t NewSlotIndex, int32_t OldSlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.CardShopContext.OnHighlightChange__DelegateSignature");
		
		UCardShopContext_OnHighlightChange__DelegateSignature_Params params {};
		params.NewSlotIndex = NewSlotIndex;
		params.OldSlotIndex = OldSlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.CardShopContext.OnDeckCardsFilered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		TArray<class UOrionCardData*>                      FilteredCards                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCardShopContext::OnDeckCardsFilered__DelegateSignature(TArray<class UOrionCardData*> FilteredCards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.CardShopContext.OnDeckCardsFilered__DelegateSignature");
		
		UCardShopContext_OnDeckCardsFilered__DelegateSignature_Params params {};
		params.FilteredCards = FilteredCards;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4FA60
	 * 		Name   -> Function BlueprintContext.CardShopContext.GetNumOfCardsInDeck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCardShopContext::GetNumOfCardsInDeck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.GetNumOfCardsInDeck");
		
		UCardShopContext_GetNumOfCardsInDeck_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F810
	 * 		Name   -> Function BlueprintContext.CardShopContext.GetNumCardActivationPointsSpent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCardShopContext::GetNumCardActivationPointsSpent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.GetNumCardActivationPointsSpent");
		
		UCardShopContext_GetNumCardActivationPointsSpent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F7E0
	 * 		Name   -> Function BlueprintContext.CardShopContext.GetNumCardActivationPoints
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCardShopContext::GetNumCardActivationPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.GetNumCardActivationPoints");
		
		UCardShopContext_GetNumCardActivationPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F130
	 * 		Name   -> Function BlueprintContext.CardShopContext.GetMaxNumCardActivationPoints
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCardShopContext::GetMaxNumCardActivationPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.GetMaxNumCardActivationPoints");
		
		UCardShopContext_GetMaxNumCardActivationPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EA20
	 * 		Name   -> Function BlueprintContext.CardShopContext.GetHighlightedSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCardShopContext::GetHighlightedSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.GetHighlightedSlot");
		
		UCardShopContext_GetHighlightedSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E130
	 * 		Name   -> Function BlueprintContext.CardShopContext.GetHandCardSlotType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            HandIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOrionCardSlottypes UCardShopContext::GetHandCardSlotType(int32_t HandIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.GetHandCardSlotType");
		
		UCardShopContext_GetHandCardSlotType_Params params {};
		params.HandIndex = HandIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C8A0
	 * 		Name   -> Function BlueprintContext.CardShopContext.GetDeckMessage
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UOrionCardData*>                      DeckCards                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UCardShopContext::GetDeckMessage(int32_t SlotIndex, TArray<class UOrionCardData*> DeckCards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.GetDeckMessage");
		
		UCardShopContext_GetDeckMessage_Params params {};
		params.SlotIndex = SlotIndex;
		params.DeckCards = DeckCards;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C680
	 * 		Name   -> Function BlueprintContext.CardShopContext.GetDeckCategoryText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UOrionCardData*>                      DeckCards                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UCardShopContext::GetDeckCategoryText(int32_t SlotIndex, TArray<class UOrionCardData*> DeckCards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.GetDeckCategoryText");
		
		UCardShopContext_GetDeckCategoryText_Params params {};
		params.SlotIndex = SlotIndex;
		params.DeckCards = DeckCards;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4BE40
	 * 		Name   -> Function BlueprintContext.CardShopContext.GetCardsByType
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		ECardFilterType                                    Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UOrionCardData*>                      Cards                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCardShopContext::GetCardsByType(ECardFilterType Filter, TArray<class UOrionCardData*>* Cards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.GetCardsByType");
		
		UCardShopContext_GetCardsByType_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Cards != nullptr)
			*Cards = params.Cards;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4BAA0
	 * 		Name   -> Function BlueprintContext.CardShopContext.GetCardActorFromHandAtIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            HandIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AOrionCard* UCardShopContext::GetCardActorFromHandAtIndex(int32_t HandIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.GetCardActorFromHandAtIndex");
		
		UCardShopContext_GetCardActorFromHandAtIndex_Params params {};
		params.HandIndex = HandIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C498D0
	 * 		Name   -> Function BlueprintContext.CardShopContext.FilterCardsWithSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCardShopContext::FilterCardsWithSlot(int32_t SlotIndex, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.FilterCardsWithSlot");
		
		UCardShopContext_FilterCardsWithSlot_Params params {};
		params.SlotIndex = SlotIndex;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.CardShopContext.DeckCardArraySizeChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UCardShopContext::DeckCardArraySizeChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.CardShopContext.DeckCardArraySizeChanged__DelegateSignature");
		
		UCardShopContext_DeckCardArraySizeChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48630
	 * 		Name   -> Function BlueprintContext.CardShopContext.CanAffordCard
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionCardData*                              TestCard                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCardShopContext::CanAffordCard(class UOrionCardData* TestCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.CanAffordCard");
		
		UCardShopContext_CanAffordCard_Params params {};
		params.TestCard = TestCard;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48350
	 * 		Name   -> Function BlueprintContext.CardShopContext.CanAddCardDataToHandAtIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            HandIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOrionCardData*                              CardData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCardShopContext::CanAddCardDataToHandAtIndex(int32_t HandIndex, class UOrionCardData* CardData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.CanAddCardDataToHandAtIndex");
		
		UCardShopContext_CanAddCardDataToHandAtIndex_Params params {};
		params.HandIndex = HandIndex;
		params.CardData = CardData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C472D0
	 * 		Name   -> Function BlueprintContext.CardShopContext.AddCardDataToHandAtIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            HandIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOrionCardData*                              CardData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCardShopContext::AddCardDataToHandAtIndex(int32_t HandIndex, class UOrionCardData* CardData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.CardShopContext.AddCardDataToHandAtIndex");
		
		UCardShopContext_AddCardDataToHandAtIndex_Params params {};
		params.HandIndex = HandIndex;
		params.CardData = CardData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardShopContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardShopContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.CardShopContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56C70
	 * 		Name   -> Function BlueprintContext.ChunkInstallContext.SetInstallSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EInstallSpeed                                      NewSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChunkInstallContext::SetInstallSpeed(EInstallSpeed NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ChunkInstallContext.SetInstallSpeed");
		
		UChunkInstallContext_SetInstallSpeed_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54780
	 * 		Name   -> Function BlueprintContext.ChunkInstallContext.Prioritize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOrionChunkId                                      InChunk                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInstallPriority                                   InPriority                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChunkInstallContext::Prioritize(EOrionChunkId InChunk, EInstallPriority InPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ChunkInstallContext.Prioritize");
		
		UChunkInstallContext_Prioritize_Params params {};
		params.InChunk = InChunk;
		params.InPriority = InPriority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C521A0
	 * 		Name   -> Function BlueprintContext.ChunkInstallContext.GetTimeRemaining
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionChunkId                                      InChunk                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTimespan UChunkInstallContext::GetTimeRemaining(EOrionChunkId InChunk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ChunkInstallContext.GetTimeRemaining");
		
		UChunkInstallContext_GetTimeRemaining_Params params {};
		params.InChunk = InChunk;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51D40
	 * 		Name   -> Function BlueprintContext.ChunkInstallContext.GetStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionChunkId                                      InChunk                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EInstallStatus UChunkInstallContext::GetStatus(EOrionChunkId InChunk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ChunkInstallContext.GetStatus");
		
		UChunkInstallContext_GetStatus_Params params {};
		params.InChunk = InChunk;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50380
	 * 		Name   -> Function BlueprintContext.ChunkInstallContext.GetProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionChunkId                                      InChunk                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UChunkInstallContext::GetProgress(EOrionChunkId InChunk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ChunkInstallContext.GetProgress");
		
		UChunkInstallContext_GetProgress_Params params {};
		params.InChunk = InChunk;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EA90
	 * 		Name   -> Function BlueprintContext.ChunkInstallContext.GetInstallSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EInstallSpeed UChunkInstallContext::GetInstallSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ChunkInstallContext.GetInstallSpeed");
		
		UChunkInstallContext_GetInstallSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChunkInstallContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChunkInstallContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.ChunkInstallContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.DeckBuilderContext.OnMcpResult__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FText                                        ErrorMessage                                               (Parm, NativeAccessSpecifierPublic)
	 */
	void UDeckBuilderContext::OnMcpResult__DelegateSignature(bool bSuccess, const class FText& ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.DeckBuilderContext.OnMcpResult__DelegateSignature");
		
		UDeckBuilderContext_OnMcpResult__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.ErrorMessage = ErrorMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F100
	 * 		Name   -> Function BlueprintContext.DeckBuilderContext.GetMaxDeckNameLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UDeckBuilderContext::GetMaxDeckNameLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.DeckBuilderContext.GetMaxDeckNameLength");
		
		UDeckBuilderContext_GetMaxDeckNameLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49ED0
	 * 		Name   -> Function BlueprintContext.DeckBuilderContext.GenerateDeckName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UEditableText*                               InTextField                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOrionHeroData*                              InHeroData                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeckBuilderContext::GenerateDeckName(class UEditableText* InTextField, class UOrionHeroData* InHeroData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.DeckBuilderContext.GenerateDeckName");
		
		UDeckBuilderContext_GenerateDeckName_Params params {};
		params.InTextField = InTextField;
		params.InHeroData = InHeroData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49B10
	 * 		Name   -> Function BlueprintContext.DeckBuilderContext.FormatDeck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionMcpDeckItem*                           Deck                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        NewDeckName                                                (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      HeroTemplateName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOrionMcpDeckItem*                           Template                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDeckBuilderContext::FormatDeck(class UOrionMcpDeckItem* Deck, const class FText& NewDeckName, const class FString& HeroTemplateName, class UOrionMcpDeckItem* Template, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.DeckBuilderContext.FormatDeck");
		
		UDeckBuilderContext_FormatDeck_Params params {};
		params.Deck = Deck;
		params.NewDeckName = NewDeckName;
		params.HeroTemplateName = HeroTemplateName;
		params.Template = Template;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeckBuilderContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeckBuilderContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.DeckBuilderContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55E20
	 * 		Name   -> Function BlueprintContext.FriendsContext.SendFriendRequest
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            PlayerNetID                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFriendsContext::SendFriendRequest(const struct FUniqueNetIdRepl& PlayerNetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.FriendsContext.SendFriendRequest");
		
		UFriendsContext_SendFriendRequest_Params params {};
		params.PlayerNetID = PlayerNetID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55320
	 * 		Name   -> Function BlueprintContext.FriendsContext.RejectFriendRequest
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            PlayerNetID                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFriendsContext::RejectFriendRequest(const struct FUniqueNetIdRepl& PlayerNetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.FriendsContext.RejectFriendRequest");
		
		UFriendsContext_RejectFriendRequest_Params params {};
		params.PlayerNetID = PlayerNetID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.FriendsContext.OnFriendsListChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		TArray<class UOrionFriendItem*>                    Friends                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFriendsContext::OnFriendsListChanged__DelegateSignature(TArray<class UOrionFriendItem*> Friends)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.FriendsContext.OnFriendsListChanged__DelegateSignature");
		
		UFriendsContext_OnFriendsListChanged__DelegateSignature_Params params {};
		params.Friends = Friends;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52D90
	 * 		Name   -> Function BlueprintContext.FriendsContext.InitiateWhisperToFriend
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            FriendNetID                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFriendsContext::InitiateWhisperToFriend(const struct FUniqueNetIdRepl& FriendNetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.FriendsContext.InitiateWhisperToFriend");
		
		UFriendsContext_InitiateWhisperToFriend_Params params {};
		params.FriendNetID = FriendNetID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C529C0
	 * 		Name   -> Function BlueprintContext.FriendsContext.HandleFriendsChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFriendsContext::HandleFriendsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.FriendsContext.HandleFriendsChanged");
		
		UFriendsContext_HandleFriendsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50E20
	 * 		Name   -> Function BlueprintContext.FriendsContext.GetQuickInviteList
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOrionFriendItem*>                    QuickInviteFriends                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UFriendsContext::GetQuickInviteList(TArray<class UOrionFriendItem*>* QuickInviteFriends)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.FriendsContext.GetQuickInviteList");
		
		UFriendsContext_GetQuickInviteList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuickInviteFriends != nullptr)
			*QuickInviteFriends = params.QuickInviteFriends;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4DA00
	 * 		Name   -> Function BlueprintContext.FriendsContext.GetFriendshipStatus
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            PlayerNetID                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EOrionFriendshipStatus UFriendsContext::GetFriendshipStatus(const struct FUniqueNetIdRepl& PlayerNetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.FriendsContext.GetFriendshipStatus");
		
		UFriendsContext_GetFriendshipStatus_Params params {};
		params.PlayerNetID = PlayerNetID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48780
	 * 		Name   -> Function BlueprintContext.FriendsContext.CancelFriendRequest
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            PlayerNetID                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFriendsContext::CancelFriendRequest(const struct FUniqueNetIdRepl& PlayerNetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.FriendsContext.CancelFriendRequest");
		
		UFriendsContext_CancelFriendRequest_Params params {};
		params.PlayerNetID = PlayerNetID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C46C90
	 * 		Name   -> Function BlueprintContext.FriendsContext.AcceptFriendRequest
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            PlayerNetID                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFriendsContext::AcceptFriendRequest(const struct FUniqueNetIdRepl& PlayerNetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.FriendsContext.AcceptFriendRequest");
		
		UFriendsContext_AcceptFriendRequest_Params params {};
		params.PlayerNetID = PlayerNetID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFriendsContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFriendsContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.FriendsContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58F70
	 * 		Name   -> Function BlueprintContext.HeroAttributesContext.UpdateBaseAttributes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHeroAttributesContext::UpdateBaseAttributes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroAttributesContext.UpdateBaseAttributes");
		
		UHeroAttributesContext_UpdateBaseAttributes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58E80
	 * 		Name   -> Function BlueprintContext.HeroAttributesContext.UpdateAttributesWithPotentialCard
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            CardSlotIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FOrionCardInstance                          PotentialCard                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHeroAttributesContext::UpdateAttributesWithPotentialCard(int32_t CardSlotIndex, const struct FOrionCardInstance& PotentialCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroAttributesContext.UpdateAttributesWithPotentialCard");
		
		UHeroAttributesContext_UpdateAttributesWithPotentialCard_Params params {};
		params.CardSlotIndex = CardSlotIndex;
		params.PotentialCard = PotentialCard;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49F90
	 * 		Name   -> Function BlueprintContext.HeroAttributesContext.GenerateHeroAttributesEntries
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UHeroAttributeListEntry*>             OutAttributeEntries                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UHeroAttributesContext::GenerateHeroAttributesEntries(TArray<class UHeroAttributeListEntry*>* OutAttributeEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroAttributesContext.GenerateHeroAttributesEntries");
		
		UHeroAttributesContext_GenerateHeroAttributesEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAttributeEntries != nullptr)
			*OutAttributeEntries = params.OutAttributeEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeroAttributesContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroAttributesContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.HeroAttributesContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57B00
	 * 		Name   -> Function BlueprintContext.HeroContext.SetSelectedSkin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionSkinItemDefinition*                    Skin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHeroContext::SetSelectedSkin(class UOrionSkinItemDefinition* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.SetSelectedSkin");
		
		UHeroContext_SetSelectedSkin_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56A20
	 * 		Name   -> Function BlueprintContext.HeroContext.SetHeroSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionHeroData*                              Hero                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOrionMcpDeckItem*                           Deck                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionRole                                         Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionPosition                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHeroContext::SetHeroSettings(class UOrionHeroData* Hero, class UOrionMcpDeckItem* Deck, EOrionRole Role, EOrionPosition Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.SetHeroSettings");
		
		UHeroContext_SetHeroSettings_Params params {};
		params.Hero = Hero;
		params.Deck = Deck;
		params.Role = Role;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56250
	 * 		Name   -> Function BlueprintContext.HeroContext.SetDeckForPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionMcpDeckItem*                           NewDeck                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHeroContext::SetDeckForPlayer(class UOrionMcpDeckItem* NewDeck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.SetDeckForPlayer");
		
		UHeroContext_SetDeckForPlayer_Params params {};
		params.NewDeck = NewDeck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HeroContext.OnSelectedSkinChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UOrionSkinItemDefinition*                    Skin                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHeroContext::OnSelectedSkinChanged__DelegateSignature(class UOrionSkinItemDefinition* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HeroContext.OnSelectedSkinChanged__DelegateSignature");
		
		UHeroContext_OnSelectedSkinChanged__DelegateSignature_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C540E0
	 * 		Name   -> Function BlueprintContext.HeroContext.NotifyPreviewSkinChanged
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionSkinItemDefinition*                    Skin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHeroContext::NotifyPreviewSkinChanged(class UOrionSkinItemDefinition* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.NotifyPreviewSkinChanged");
		
		UHeroContext_NotifyPreviewSkinChanged_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54060
	 * 		Name   -> Function BlueprintContext.HeroContext.NotifyPreviewHeroChanged
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionHeroData*                              NewHero                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHeroContext::NotifyPreviewHeroChanged(class UOrionHeroData* NewHero)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.NotifyPreviewHeroChanged");
		
		UHeroContext_NotifyPreviewHeroChanged_Params params {};
		params.NewHero = NewHero;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C519A0
	 * 		Name   -> Function BlueprintContext.HeroContext.GetSelectedSkinForHero
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionHeroData*                              HeroData                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOrionSkinItemDefinition* UHeroContext::GetSelectedSkinForHero(class UOrionHeroData* HeroData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.GetSelectedSkinForHero");
		
		UHeroContext_GetSelectedSkinForHero_Params params {};
		params.HeroData = HeroData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C518A0
	 * 		Name   -> Function BlueprintContext.HeroContext.GetSelectedHeroDataSpec
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionHeroDataSpec UHeroContext::GetSelectedHeroDataSpec()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.GetSelectedHeroDataSpec");
		
		UHeroContext_GetSelectedHeroDataSpec_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51870
	 * 		Name   -> Function BlueprintContext.HeroContext.GetSelectedHero
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UOrionHeroData* UHeroContext::GetSelectedHero()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.GetSelectedHero");
		
		UHeroContext_GetSelectedHero_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C517B0
	 * 		Name   -> Function BlueprintContext.HeroContext.GetSelectedCosmeticOptions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionCosmeticPlayerChoices UHeroContext::GetSelectedCosmeticOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.GetSelectedCosmeticOptions");
		
		UHeroContext_GetSelectedCosmeticOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50CA0
	 * 		Name   -> Function BlueprintContext.HeroContext.GetQueueTimeFor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionHeroData*                              InHero                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCoopVsAI                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutNumSamples                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UHeroContext::GetQueueTimeFor(class UOrionHeroData* InHero, bool bCoopVsAI, int32_t* OutNumSamples)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.GetQueueTimeFor");
		
		UHeroContext_GetQueueTimeFor_Params params {};
		params.InHero = InHero;
		params.bCoopVsAI = bCoopVsAI;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNumSamples != nullptr)
			*OutNumSamples = params.OutNumSamples;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E7A0
	 * 		Name   -> Function BlueprintContext.HeroContext.GetHeroSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionHeroData*                              Hero                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOrionMcpDeckItem*                           Deck                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionRole                                         Role                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionPosition                                     Position                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHeroContext::GetHeroSettings(class UOrionHeroData* Hero, class UOrionMcpDeckItem** Deck, EOrionRole* Role, EOrionPosition* Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.GetHeroSettings");
		
		UHeroContext_GetHeroSettings_Params params {};
		params.Hero = Hero;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Deck != nullptr)
			*Deck = params.Deck;
		if (Role != nullptr)
			*Role = params.Role;
		if (Position != nullptr)
			*Position = params.Position;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E1F0
	 * 		Name   -> Function BlueprintContext.HeroContext.GetHeroByString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      HeroName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOrionHeroData* UHeroContext::GetHeroByString(const class FString& HeroName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.GetHeroByString");
		
		UHeroContext_GetHeroByString_Params params {};
		params.HeroName = HeroName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4AA30
	 * 		Name   -> Function BlueprintContext.HeroContext.GetAllAvailableHeroes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UOrionHeroData*> UHeroContext::GetAllAvailableHeroes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.GetAllAvailableHeroes");
		
		UHeroContext_GetAllAvailableHeroes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A1A0
	 * 		Name   -> Function BlueprintContext.HeroContext.GetAbility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionHeroData*                              Hero                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionAbilityBinding                               Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOrionAbility* UHeroContext::GetAbility(class UOrionHeroData* Hero, EOrionAbilityBinding Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.GetAbility");
		
		UHeroContext_GetAbility_Params params {};
		params.Hero = Hero;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C497B0
	 * 		Name   -> Function BlueprintContext.HeroContext.FilterAvailableHeroes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FText                                        SearchText                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<class UOrionHeroData*> UHeroContext::FilterAvailableHeroes(const class FText& SearchText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HeroContext.FilterAvailableHeroes");
		
		UHeroContext_FilterAvailableHeroes_Params params {};
		params.SearchText = SearchText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeroContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.HeroContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57D80
	 * 		Name   -> Function BlueprintContext.HUDContext.SetSprintCastingEndTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              EndTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::SetSprintCastingEndTime(float EndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.SetSprintCastingEndTime");
		
		UHUDContext_SetSprintCastingEndTime_Params params {};
		params.EndTime = EndTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56FE0
	 * 		Name   -> Function BlueprintContext.HUDContext.SetMatchInfoTextVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsNewlyVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::SetMatchInfoTextVisibility(bool bIsNewlyVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.SetMatchInfoTextVisibility");
		
		UHUDContext_SetMatchInfoTextVisibility_Params params {};
		params.bIsNewlyVisible = bIsNewlyVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56F20
	 * 		Name   -> Function BlueprintContext.HUDContext.SetMatchInfoText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        NewMatchInfoText                                           (Parm, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::SetMatchInfoText(const class FText& NewMatchInfoText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.SetMatchInfoText");
		
		UHUDContext_SetMatchInfoText_Params params {};
		params.NewMatchInfoText = NewMatchInfoText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56D80
	 * 		Name   -> Function BlueprintContext.HUDContext.SetIsHUDHitTestable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewIsHitTestable                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::SetIsHUDHitTestable(bool bNewIsHitTestable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.SetIsHUDHitTestable");
		
		UHUDContext_SetIsHUDHitTestable_Params params {};
		params.bNewIsHitTestable = bNewIsHitTestable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C567C0
	 * 		Name   -> Function BlueprintContext.HUDContext.SetHUDColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                NewHUDColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::SetHUDColor(const struct FLinearColor& NewHUDColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.SetHUDColor");
		
		UHUDContext_SetHUDColor_Params params {};
		params.NewHUDColor = NewHUDColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56B70
	 * 		Name   -> Function BlueprintContext.HUDContext.SetHeroSpecificHUDElementIcon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  NewIcon                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::SetHeroSpecificHUDElementIcon(class UTexture2D* NewIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.SetHeroSpecificHUDElementIcon");
		
		UHUDContext_SetHeroSpecificHUDElementIcon_Params params {};
		params.NewIcon = NewIcon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56020
	 * 		Name   -> Function BlueprintContext.HUDContext.SetAutoConfirmEndTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              EndTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::SetAutoConfirmEndTime(float EndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.SetAutoConfirmEndTime");
		
		UHUDContext_SetAutoConfirmEndTime_Params params {};
		params.EndTime = EndTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnTowerInfoUpdate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FOrionTowerTargetingInfo                    NewTowerInfo                                               (Parm, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnTowerInfoUpdate__DelegateSignature(const struct FOrionTowerTargetingInfo& NewTowerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnTowerInfoUpdate__DelegateSignature");
		
		UHUDContext_OnTowerInfoUpdate__DelegateSignature_Params params {};
		params.NewTowerInfo = NewTowerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnTeamNumChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EOrionTeam                                         NewTeamNum                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnTeamNumChange__DelegateSignature(EOrionTeam NewTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnTeamNumChange__DelegateSignature");
		
		UHUDContext_OnTeamNumChange__DelegateSignature_Params params {};
		params.NewTeamNum = NewTeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnTeamInfoUpdateDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FOrionHUDTeamStatusInfo                     NewTeamInfo                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnTeamInfoUpdateDelegate__DelegateSignature(EOrionTeam TeamNum, int32_t PlayerIndex, const struct FOrionHUDTeamStatusInfo& NewTeamInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnTeamInfoUpdateDelegate__DelegateSignature");
		
		UHUDContext_OnTeamInfoUpdateDelegate__DelegateSignature_Params params {};
		params.TeamNum = TeamNum;
		params.PlayerIndex = PlayerIndex;
		params.NewTeamInfo = NewTeamInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnTeamInfoUpdate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FOrionHUDTeamStatusInfo                     NewTeamInfo                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnTeamInfoUpdate__DelegateSignature(EOrionTeam TeamNum, int32_t PlayerIndex, const struct FOrionHUDTeamStatusInfo& NewTeamInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnTeamInfoUpdate__DelegateSignature");
		
		UHUDContext_OnTeamInfoUpdate__DelegateSignature_Params params {};
		params.TeamNum = TeamNum;
		params.PlayerIndex = PlayerIndex;
		params.NewTeamInfo = NewTeamInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnTargeted__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bShowTargetingPopup                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnTargeted__DelegateSignature(bool bShowTargetingPopup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnTargeted__DelegateSignature");
		
		UHUDContext_OnTargeted__DelegateSignature_Params params {};
		params.bShowTargetingPopup = bShowTargetingPopup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnStatusEffectUpdate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FOrionStatusEffectUIInfo                    NewStatusEffectInfo                                        (Parm, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnStatusEffectUpdate__DelegateSignature(const struct FOrionStatusEffectUIInfo& NewStatusEffectInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnStatusEffectUpdate__DelegateSignature");
		
		UHUDContext_OnStatusEffectUpdate__DelegateSignature_Params params {};
		params.NewStatusEffectInfo = NewStatusEffectInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnSpectatorToggleControllerCursor__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UHUDContext::OnSpectatorToggleControllerCursor__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnSpectatorToggleControllerCursor__DelegateSignature");
		
		UHUDContext_OnSpectatorToggleControllerCursor__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnSpectatorFollowedHeroChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EOrionTeam                                         HeroTeam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HeroIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnSpectatorFollowedHeroChange__DelegateSignature(EOrionTeam HeroTeam, int32_t HeroIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnSpectatorFollowedHeroChange__DelegateSignature");
		
		UHUDContext_OnSpectatorFollowedHeroChange__DelegateSignature_Params params {};
		params.HeroTeam = HeroTeam;
		params.HeroIndex = HeroIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnSpectatorCameraModeChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		ESpectatorCameraType                               NewCameraMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnSpectatorCameraModeChange__DelegateSignature(ESpectatorCameraType NewCameraMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnSpectatorCameraModeChange__DelegateSignature");
		
		UHUDContext_OnSpectatorCameraModeChange__DelegateSignature_Params params {};
		params.NewCameraMode = NewCameraMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnPlayerHeroSet__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UOrionHeroData*                              NewHeroData                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnPlayerHeroSet__DelegateSignature(class UOrionHeroData* NewHeroData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnPlayerHeroSet__DelegateSignature");
		
		UHUDContext_OnPlayerHeroSet__DelegateSignature_Params params {};
		params.NewHeroData = NewHeroData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnNewGameEventMessage__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FOrionGameEventMessageData                  MessageData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnNewGameEventMessage__DelegateSignature(const struct FOrionGameEventMessageData& MessageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnNewGameEventMessage__DelegateSignature");
		
		UHUDContext_OnNewGameEventMessage__DelegateSignature_Params params {};
		params.MessageData = MessageData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnMiniMapModeChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bIsLarge                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnMiniMapModeChanged__DelegateSignature(bool bIsLarge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnMiniMapModeChanged__DelegateSignature");
		
		UHUDContext_OnMiniMapModeChanged__DelegateSignature_Params params {};
		params.bIsLarge = bIsLarge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnMatchStart__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UHUDContext::OnMatchStart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnMatchStart__DelegateSignature");
		
		UHUDContext_OnMatchStart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnMatchInfoTextVisibilityChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bIsNewlyVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnMatchInfoTextVisibilityChange__DelegateSignature(bool bIsNewlyVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnMatchInfoTextVisibilityChange__DelegateSignature");
		
		UHUDContext_OnMatchInfoTextVisibilityChange__DelegateSignature_Params params {};
		params.bIsNewlyVisible = bIsNewlyVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnMatchInfoTextChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FText                                        NewMatchInfoText                                           (Parm, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnMatchInfoTextChange__DelegateSignature(const class FText& NewMatchInfoText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnMatchInfoTextChange__DelegateSignature");
		
		UHUDContext_OnMatchInfoTextChange__DelegateSignature_Params params {};
		params.NewMatchInfoText = NewMatchInfoText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnHUDColorChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasDefaults)
	 * Parameters:
	 * 		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnHUDColorChange__DelegateSignature(const struct FLinearColor& NewColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnHUDColorChange__DelegateSignature");
		
		UHUDContext_OnHUDColorChange__DelegateSignature_Params params {};
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnHeroSpecificHUDElementChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UTexture2D*                                  NewIcon                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnHeroSpecificHUDElementChange__DelegateSignature(class UTexture2D* NewIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnHeroSpecificHUDElementChange__DelegateSignature");
		
		UHUDContext_OnHeroSpecificHUDElementChange__DelegateSignature_Params params {};
		params.NewIcon = NewIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnDamageEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FOrionUIDamageEventInfo                     UIDamageEventInfo                                          (Parm, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnDamageEvent__DelegateSignature(const struct FOrionUIDamageEventInfo& UIDamageEventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnDamageEvent__DelegateSignature");
		
		UHUDContext_OnDamageEvent__DelegateSignature_Params params {};
		params.UIDamageEventInfo = UIDamageEventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HUDContext.OnConsoleOpenStateChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bConsoleNewlyOpen                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::OnConsoleOpenStateChange__DelegateSignature(bool bConsoleNewlyOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HUDContext.OnConsoleOpenStateChange__DelegateSignature");
		
		UHUDContext_OnConsoleOpenStateChange__DelegateSignature_Params params {};
		params.bConsoleNewlyOpen = bConsoleNewlyOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C536D0
	 * 		Name   -> Function BlueprintContext.HUDContext.IsSurrenderEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHUDContext::IsSurrenderEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.IsSurrenderEnabled");
		
		UHUDContext_IsSurrenderEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53400
	 * 		Name   -> Function BlueprintContext.HUDContext.IsLocalHeroDead
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UHUDContext::IsLocalHeroDead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.IsLocalHeroDead");
		
		UHUDContext_IsLocalHeroDead_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52E70
	 * 		Name   -> Function BlueprintContext.HUDContext.InvalidateHUDCache
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHUDContext::InvalidateHUDCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.InvalidateHUDCache");
		
		UHUDContext_InvalidateHUDCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52940
	 * 		Name   -> Function BlueprintContext.HUDContext.HUDAnimationStarting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        RequestingName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::HUDAnimationStarting(const class FName& RequestingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.HUDAnimationStarting");
		
		UHUDContext_HUDAnimationStarting_Params params {};
		params.RequestingName = RequestingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C528C0
	 * 		Name   -> Function BlueprintContext.HUDContext.HUDAnimationEnding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        RequestingName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::HUDAnimationEnding(const class FName& RequestingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.HUDAnimationEnding");
		
		UHUDContext_HUDAnimationEnding_Params params {};
		params.RequestingName = RequestingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52D40
	 * 		Name   -> Function BlueprintContext.HUDContext.HideVictoryScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHUDContext::HideVictoryScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.HideVictoryScreen");
		
		UHUDContext_HideVictoryScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C529E0
	 * 		Name   -> Function BlueprintContext.HUDContext.HandleInput_Blueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ActionBindingName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::HandleInput_Blueprint(const class FName& ActionBindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.HandleInput_Blueprint");
		
		UHUDContext_HandleInput_Blueprint_Params params {};
		params.ActionBindingName = ActionBindingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C522A0
	 * 		Name   -> Function BlueprintContext.HUDContext.GetTowerTargetingInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionTowerTargetingInfo UHUDContext::GetTowerTargetingInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.GetTowerTargetingInfo");
		
		UHUDContext_GetTowerTargetingInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52000
	 * 		Name   -> Function BlueprintContext.HUDContext.GetTeamUIInfo
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FOrionHUDTeamStatusInfo UHUDContext::GetTeamUIInfo(int32_t Index, EOrionTeam TeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.GetTeamUIInfo");
		
		UHUDContext_GetTeamUIInfo_Params params {};
		params.Index = Index;
		params.TeamNum = TeamNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51110
	 * 		Name   -> Function BlueprintContext.HUDContext.GetSafeZonePadding
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		ESafeZonePadding                                   PaddingType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UHUDContext::STATIC_GetSafeZonePadding(ESafeZonePadding PaddingType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.GetSafeZonePadding");
		
		UHUDContext_GetSafeZonePadding_Params params {};
		params.PaddingType = PaddingType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F4C0
	 * 		Name   -> Function BlueprintContext.HUDContext.GetMyTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionTeam UHUDContext::GetMyTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.GetMyTeam");
		
		UHUDContext_GetMyTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4DFA0
	 * 		Name   -> Function BlueprintContext.HUDContext.GetHUDInputActionNames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionHUDInputActionNames UHUDContext::GetHUDInputActionNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.GetHUDInputActionNames");
		
		UHUDContext_GetHUDInputActionNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D4A0
	 * 		Name   -> Function BlueprintContext.HUDContext.GetEnemyTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionTeam UHUDContext::GetEnemyTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.GetEnemyTeam");
		
		UHUDContext_GetEnemyTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C580
	 * 		Name   -> Function BlueprintContext.HUDContext.GetDamageIndicatorRotation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     PlayerLocation                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InstigatorLocation                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UHUDContext::GetDamageIndicatorRotation(const struct FVector& PlayerLocation, const struct FVector& InstigatorLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.GetDamageIndicatorRotation");
		
		UHUDContext_GetDamageIndicatorRotation_Params params {};
		params.PlayerLocation = PlayerLocation;
		params.InstigatorLocation = InstigatorLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C0D0
	 * 		Name   -> Function BlueprintContext.HUDContext.GetCoreInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FOrionCoreInfo UHUDContext::GetCoreInfo(EOrionTeam TeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.GetCoreInfo");
		
		UHUDContext_GetCoreInfo_Params params {};
		params.TeamNum = TeamNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4BB30
	 * 		Name   -> Function BlueprintContext.HUDContext.GetCardDataInPlayerHand
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UOrionCardData*> UHUDContext::GetCardDataInPlayerHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.GetCardDataInPlayerHand");
		
		UHUDContext_GetCardDataInPlayerHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4AAB0
	 * 		Name   -> Function BlueprintContext.HUDContext.GetAllowCardMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHUDContext::GetAllowCardMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.GetAllowCardMenu");
		
		UHUDContext_GetAllowCardMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49A70
	 * 		Name   -> Function BlueprintContext.HUDContext.FlushPressedActionBindingKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ActionBindingName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::FlushPressedActionBindingKeys(const class FName& ActionBindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.FlushPressedActionBindingKeys");
		
		UHUDContext_FlushPressedActionBindingKeys_Params params {};
		params.ActionBindingName = ActionBindingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49680
	 * 		Name   -> Function BlueprintContext.HUDContext.FadeHUDOut
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              FadeInTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::FadeHUDOut(float FadeInTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.FadeHUDOut");
		
		UHUDContext_FadeHUDOut_Params params {};
		params.FadeInTime = FadeInTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49660
	 * 		Name   -> Function BlueprintContext.HUDContext.FadeHUDIn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHUDContext::FadeHUDIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.FadeHUDIn");
		
		UHUDContext_FadeHUDIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48740
	 * 		Name   -> Function BlueprintContext.HUDContext.CancelAllAbilities
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHUDContext::CancelAllAbilities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.CancelAllAbilities");
		
		UHUDContext_CancelAllAbilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47A20
	 * 		Name   -> Function BlueprintContext.HUDContext.BP_GetLocalPlayerInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionLocalPlayerUIInfo UHUDContext::BP_GetLocalPlayerInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.BP_GetLocalPlayerInfo");
		
		UHUDContext_BP_GetLocalPlayerInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47890
	 * 		Name   -> Function BlueprintContext.HUDContext.AddStatusEffectEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHUDContext::AddStatusEffectEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.AddStatusEffectEvent");
		
		UHUDContext_AddStatusEffectEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47440
	 * 		Name   -> Function BlueprintContext.HUDContext.AddDamageEvent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FOrionUIDamageEventInfo                     DamageEventInfo                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHUDContext::AddDamageEvent(const struct FOrionUIDamageEventInfo& DamageEventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.HUDContext.AddDamageEvent");
		
		UHUDContext_AddDamageEvent_Params params {};
		params.DamageEventInfo = DamageEventInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.HUDContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C562D0
	 * 		Name   -> Function BlueprintContext.InventoryContext.SetDeckName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      DeckName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DeckId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::SetDeckName(const class FString& DeckName, const class FString& DeckId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.SetDeckName");
		
		UInventoryContext_SetDeckName_Params params {};
		params.DeckName = DeckName;
		params.DeckId = DeckId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C560A0
	 * 		Name   -> Function BlueprintContext.InventoryContext.SetCardsForDeck
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              CardIdList                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      DeckId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::SetCardsForDeck(TArray<class FString> CardIdList, const class FString& DeckId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.SetCardsForDeck");
		
		UInventoryContext_SetCardsForDeck_Params params {};
		params.CardIdList = CardIdList;
		params.DeckId = DeckId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.InventoryContext.OnMcpCardsFiltered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		TArray<class UOrionMcpCardItem*>                   FilteredCards                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::OnMcpCardsFiltered__DelegateSignature(TArray<class UOrionMcpCardItem*> FilteredCards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.InventoryContext.OnMcpCardsFiltered__DelegateSignature");
		
		UInventoryContext_OnMcpCardsFiltered__DelegateSignature_Params params {};
		params.FilteredCards = FilteredCards;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.InventoryContext.OnDecomposeCard__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UInventoryContext::OnDecomposeCard__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.InventoryContext.OnDecomposeCard__DelegateSignature");
		
		UInventoryContext_OnDecomposeCard__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.InventoryContext.OnDecksFiltered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		TArray<class UOrionMcpDeckItem*>                   FilteredDecks                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::OnDecksFiltered__DelegateSignature(TArray<class UOrionMcpDeckItem*> FilteredDecks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.InventoryContext.OnDecksFiltered__DelegateSignature");
		
		UInventoryContext_OnDecksFiltered__DelegateSignature_Params params {};
		params.FilteredDecks = FilteredDecks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.InventoryContext.OnCardsFiltered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		TArray<class UOrionCardData*>                      FilteredCards                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::OnCardsFiltered__DelegateSignature(TArray<class UOrionCardData*> FilteredCards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.InventoryContext.OnCardsFiltered__DelegateSignature");
		
		UInventoryContext_OnCardsFiltered__DelegateSignature_Params params {};
		params.FilteredCards = FilteredCards;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.InventoryContext.OnCardPacksChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UInventoryContext::OnCardPacksChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.InventoryContext.OnCardPacksChanged__DelegateSignature");
		
		UInventoryContext_OnCardPacksChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52470
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetUnusedDeck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UOrionMcpDeckItem* UInventoryContext::GetUnusedDeck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetUnusedDeck");
		
		UInventoryContext_GetUnusedDeck_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F870
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetNumCardsForDeck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionMcpDeckItem*                           DeckItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCountActive                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCountPassive                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCountPrimeHelix                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCountUpgrade                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UInventoryContext::GetNumCardsForDeck(class UOrionMcpDeckItem* DeckItem, bool bCountActive, bool bCountPassive, bool bCountPrimeHelix, bool bCountUpgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetNumCardsForDeck");
		
		UInventoryContext_GetNumCardsForDeck_Params params {};
		params.DeckItem = DeckItem;
		params.bCountActive = bCountActive;
		params.bCountPassive = bCountPassive;
		params.bCountPrimeHelix = bCountPrimeHelix;
		params.bCountUpgrade = bCountUpgrade;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F840
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetNumCardPacks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UInventoryContext::GetNumCardPacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetNumCardPacks");
		
		UInventoryContext_GetNumCardPacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F6B0
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetNextCardPack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UOrionMcpCardPackItem* UInventoryContext::GetNextCardPack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetNextCardPack");
		
		UInventoryContext_GetNextCardPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E3C0
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetHeroFromData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionHeroData*                              HeroData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOrionMcpHeroItem* UInventoryContext::GetHeroFromData(class UOrionHeroData* HeroData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetHeroFromData");
		
		UInventoryContext_GetHeroFromData_Params params {};
		params.HeroData = HeroData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E940
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetHeroes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOrionMcpHeroItem*>                   Heroes                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::GetHeroes(TArray<class UOrionMcpHeroItem*>* Heroes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetHeroes");
		
		UInventoryContext_GetHeroes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Heroes != nullptr)
			*Heroes = params.Heroes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4DF10
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetGlyphForHero
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionHeroData*                              HeroData                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOrionMcpGlyphItem* UInventoryContext::GetGlyphForHero(class UOrionHeroData* HeroData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetGlyphForHero");
		
		UInventoryContext_GetGlyphForHero_Params params {};
		params.HeroData = HeroData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4CD70
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetDecksForHero
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOrionMcpDeckItem*>                   Decks                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UOrionHeroData*                              HeroData                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowLockedDecks                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::GetDecksForHero(TArray<class UOrionMcpDeckItem*>* Decks, class UOrionHeroData* HeroData, bool bAllowLockedDecks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetDecksForHero");
		
		UInventoryContext_GetDecksForHero_Params params {};
		params.HeroData = HeroData;
		params.bAllowLockedDecks = bAllowLockedDecks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Decks != nullptr)
			*Decks = params.Decks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4CBB0
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetDecksByText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        SearchText                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowLockedDecks                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeUninitialized                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::GetDecksByText(const class FText& SearchText, bool bAllowLockedDecks, bool bIncludeUninitialized, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetDecksByText");
		
		UInventoryContext_GetDecksByText_Params params {};
		params.SearchText = SearchText;
		params.bAllowLockedDecks = bAllowLockedDecks;
		params.bIncludeUninitialized = bIncludeUninitialized;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4CB00
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetDecks
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOrionMcpDeckItem*>                   Decks                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::GetDecks(TArray<class UOrionMcpDeckItem*>* Decks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetDecks");
		
		UInventoryContext_GetDecks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Decks != nullptr)
			*Decks = params.Decks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4BF30
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetCardsForDeck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionMcpDeckItem*                           DeckItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UOrionMcpCardItem*> UInventoryContext::GetCardsForDeck(class UOrionMcpDeckItem* DeckItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetCardsForDeck");
		
		UInventoryContext_GetCardsForDeck_Params params {};
		params.DeckItem = DeckItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4BC70
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetCardPacks
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOrionMcpCardPackItem*>               CardPacks                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::GetCardPacks(TArray<class UOrionMcpCardPackItem*>* CardPacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetCardPacks");
		
		UInventoryContext_GetCardPacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CardPacks != nullptr)
			*CardPacks = params.CardPacks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4B530
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetBanners
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOrionMcpBannerItem*>                 Banners                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::GetBanners(TArray<class UOrionMcpBannerItem*>* Banners)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetBanners");
		
		UInventoryContext_GetBanners_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Banners != nullptr)
			*Banners = params.Banners;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4AF60
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetBannerAlterations
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOrionMcpBannerAlterationItem*>       BannerAlterations                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::GetBannerAlterations(TArray<class UOrionMcpBannerAlterationItem*>* BannerAlterations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetBannerAlterations");
		
		UInventoryContext_GetBannerAlterations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BannerAlterations != nullptr)
			*BannerAlterations = params.BannerAlterations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A9A0
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetAffinitiesForDeck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionMcpDeckItem*                           DeckItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FOrionAffinityStruct UInventoryContext::GetAffinitiesForDeck(class UOrionMcpDeckItem* DeckItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetAffinitiesForDeck");
		
		UInventoryContext_GetAffinitiesForDeck_Params params {};
		params.DeckItem = DeckItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A910
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetActiveSkinForHero
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionHeroData*                              HeroData                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOrionSkinItemDefinition* UInventoryContext::GetActiveSkinForHero(class UOrionHeroData* HeroData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetActiveSkinForHero");
		
		UInventoryContext_GetActiveSkinForHero_Params params {};
		params.HeroData = HeroData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A7D0
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetActiveDecks
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOrionMcpDeckItem*>                   Decks                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowLockedDecks                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeUninitialized                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::GetActiveDecks(TArray<class UOrionMcpDeckItem*>* Decks, bool bAllowLockedDecks, bool bIncludeUninitialized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetActiveDecks");
		
		UInventoryContext_GetActiveDecks_Params params {};
		params.bAllowLockedDecks = bAllowLockedDecks;
		params.bIncludeUninitialized = bIncludeUninitialized;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Decks != nullptr)
			*Decks = params.Decks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A720
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetActiveBannerID
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      ActiveID                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::GetActiveBannerID(class FString* ActiveID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetActiveBannerID");
		
		UInventoryContext_GetActiveBannerID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveID != nullptr)
			*ActiveID = params.ActiveID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A670
	 * 		Name   -> Function BlueprintContext.InventoryContext.GetActiveBanner
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FActiveBannerStruct                         ActiveBanner                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::GetActiveBanner(struct FActiveBannerStruct* ActiveBanner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.GetActiveBanner");
		
		UInventoryContext_GetActiveBanner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveBanner != nullptr)
			*ActiveBanner = params.ActiveBanner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49290
	 * 		Name   -> Function BlueprintContext.InventoryContext.DecomposeCard
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionMcpCardItem*                           CardItem                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::DecomposeCard(class UOrionMcpCardItem* CardItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.DecomposeCard");
		
		UInventoryContext_DecomposeCard_Params params {};
		params.CardItem = CardItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48410
	 * 		Name   -> Function BlueprintContext.InventoryContext.CanAddCardToDeck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UOrionMcpDeckItem*                           DeckItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CardId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryContext::CanAddCardToDeck(class UOrionMcpDeckItem* DeckItem, const class FString& CardId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.CanAddCardToDeck");
		
		UInventoryContext_CanAddCardToDeck_Params params {};
		params.DeckItem = DeckItem;
		params.CardId = CardId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47390
	 * 		Name   -> Function BlueprintContext.InventoryContext.AddCreateDeckEntry
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOrionMcpDeckItem*>                   Decks                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryContext::AddCreateDeckEntry(TArray<class UOrionMcpDeckItem*>* Decks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.InventoryContext.AddCreateDeckEntry");
		
		UInventoryContext_AddCreateDeckEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Decks != nullptr)
			*Decks = params.Decks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.InventoryContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58700
	 * 		Name   -> Function BlueprintContext.MatchmakingContext.StartRejoin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              InCompletionDelegate                                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMatchmakingContext::StartRejoin(const class FScriptDelegate& InCompletionDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchmakingContext.StartRejoin");
		
		UMatchmakingContext_StartRejoin_Params params {};
		params.InCompletionDelegate = InCompletionDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55B00
	 * 		Name   -> Function BlueprintContext.MatchmakingContext.SelectRegion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RegionId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSaveRegion                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMatchmakingContext::SelectRegion(const class FString& RegionId, bool bSaveRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchmakingContext.SelectRegion");
		
		UMatchmakingContext_SelectRegion_Params params {};
		params.RegionId = RegionId;
		params.bSaveRegion = bSaveRegion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54F80
	 * 		Name   -> Function BlueprintContext.MatchmakingContext.RefreshRegionPings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              InCompletionDelgate                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMatchmakingContext::RefreshRegionPings(const class FScriptDelegate& InCompletionDelgate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchmakingContext.RefreshRegionPings");
		
		UMatchmakingContext_RefreshRegionPings_Params params {};
		params.InCompletionDelgate = InCompletionDelgate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MatchmakingContext.OnRejoinAttemptComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMatchmakingContext::OnRejoinAttemptComplete__DelegateSignature(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MatchmakingContext.OnRejoinAttemptComplete__DelegateSignature");
		
		UMatchmakingContext_OnRejoinAttemptComplete__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MatchmakingContext.OnRefreshRegionPingComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UMatchmakingContext::OnRefreshRegionPingComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MatchmakingContext.OnRefreshRegionPingComplete__DelegateSignature");
		
		UMatchmakingContext_OnRefreshRegionPingComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53010
	 * 		Name   -> Function BlueprintContext.MatchmakingContext.IsCurrentMatchOfType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionMatchmakingType                              MatchmakingType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmakingContext::IsCurrentMatchOfType(EOrionMatchmakingType MatchmakingType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchmakingContext.IsCurrentMatchOfType");
		
		UMatchmakingContext_IsCurrentMatchOfType_Params params {};
		params.MatchmakingType = MatchmakingType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52BE0
	 * 		Name   -> Function BlueprintContext.MatchmakingContext.HasValidOnlinePresence
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FText                                        ErrorString                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UMatchmakingContext::HasValidOnlinePresence(class FText* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchmakingContext.HasValidOnlinePresence");
		
		UMatchmakingContext_HasValidOnlinePresence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51920
	 * 		Name   -> Function BlueprintContext.MatchmakingContext.GetSelectedRegionId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UMatchmakingContext::GetSelectedRegionId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchmakingContext.GetSelectedRegionId");
		
		UMatchmakingContext_GetSelectedRegionId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50280
	 * 		Name   -> Function BlueprintContext.MatchmakingContext.GetPingQuality
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UMatchmakingRegion*                          Region                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EPingQuality UMatchmakingContext::GetPingQuality(class UMatchmakingRegion* Region)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchmakingContext.GetPingQuality");
		
		UMatchmakingContext_GetPingQuality_Params params {};
		params.Region = Region;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C240
	 * 		Name   -> Function BlueprintContext.MatchmakingContext.GetCurrentBanInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTimespan                                   TimeLeft                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	EOrionBanReason UMatchmakingContext::GetCurrentBanInfo(struct FTimespan* TimeLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchmakingContext.GetCurrentBanInfo");
		
		UMatchmakingContext_GetCurrentBanInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeLeft != nullptr)
			*TimeLeft = params.TimeLeft;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4ABA0
	 * 		Name   -> Function BlueprintContext.MatchmakingContext.GetAvailableRegions
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UMatchmakingRegion*>                  OutRegionOptions                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutSelectedRegion                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmakingContext::GetAvailableRegions(TArray<class UMatchmakingRegion*>* OutRegionOptions, int32_t* OutSelectedRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchmakingContext.GetAvailableRegions");
		
		UMatchmakingContext_GetAvailableRegions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRegionOptions != nullptr)
			*OutRegionOptions = params.OutRegionOptions;
		if (OutSelectedRegion != nullptr)
			*OutSelectedRegion = params.OutSelectedRegion;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C474F0
	 * 		Name   -> Function BlueprintContext.MatchmakingContext.AddMatchmakingCustomKeyToSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMatchmakingContext::AddMatchmakingCustomKeyToSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchmakingContext.AddMatchmakingCustomKeyToSession");
		
		UMatchmakingContext_AddMatchmakingCustomKeyToSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatchmakingContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchmakingContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.MatchmakingContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58B40
	 * 		Name   -> Function BlueprintContext.MatchTutorialContext.StartTutorial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      TutorialClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchTutorialContext::StartTutorial(class UClass* TutorialClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchTutorialContext.StartTutorial");
		
		UMatchTutorialContext_StartTutorial_Params params {};
		params.TutorialClass = TutorialClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C556B0
	 * 		Name   -> Function BlueprintContext.MatchTutorialContext.RequestPathToPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMatchTutorialContext::RequestPathToPosition(const struct FVector& TargetPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchTutorialContext.RequestPathToPosition");
		
		UMatchTutorialContext_RequestPathToPosition_Params params {};
		params.TargetPosition = TargetPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55630
	 * 		Name   -> Function BlueprintContext.MatchTutorialContext.RequestPathToActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchTutorialContext::RequestPathToActor(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchTutorialContext.RequestPathToActor");
		
		UMatchTutorialContext_RequestPathToActor_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55570
	 * 		Name   -> Function BlueprintContext.MatchTutorialContext.RequestFade
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TutorialID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionHUDFadeRequest                               FadeType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchTutorialContext::RequestFade(const class FName& TutorialID, EOrionHUDFadeRequest FadeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchTutorialContext.RequestFade");
		
		UMatchTutorialContext_RequestFade_Params params {};
		params.TutorialID = TutorialID;
		params.FadeType = FadeType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52D60
	 * 		Name   -> Function BlueprintContext.MatchTutorialContext.InTutorialMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMatchTutorialContext::InTutorialMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchTutorialContext.InTutorialMode");
		
		UMatchTutorialContext_InTutorialMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E0A0
	 * 		Name   -> Function BlueprintContext.MatchTutorialContext.GetHUDTutorialWidgetNames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionHUDTutorialWidgetNames UMatchTutorialContext::GetHUDTutorialWidgetNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchTutorialContext.GetHUDTutorialWidgetNames");
		
		UMatchTutorialContext_GetHUDTutorialWidgetNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C494B0
	 * 		Name   -> Function BlueprintContext.MatchTutorialContext.EndTutorial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      TutorialClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchTutorialContext::EndTutorial(class UClass* TutorialClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchTutorialContext.EndTutorial");
		
		UMatchTutorialContext_EndTutorial_Params params {};
		params.TutorialClass = TutorialClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49210
	 * 		Name   -> Function BlueprintContext.MatchTutorialContext.CurrentlyPlayingTutorial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMatchTutorialContext::CurrentlyPlayingTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MatchTutorialContext.CurrentlyPlayingTutorial");
		
		UMatchTutorialContext_CurrentlyPlayingTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatchTutorialContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchTutorialContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.MatchTutorialContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C59270
	 * 		Name   -> Function BlueprintContext.McpContext.WebUpgradeEpicAccount
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Email                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCompleteDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::WebUpgradeEpicAccount(const class FText& Email, const class FScriptDelegate& OnCompleteDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.WebUpgradeEpicAccount");
		
		UMcpContext_WebUpgradeEpicAccount_Params params {};
		params.Email = Email;
		params.OnCompleteDelegate = OnCompleteDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C59250
	 * 		Name   -> Function BlueprintContext.McpContext.WebManageEpicAccount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMcpContext::WebManageEpicAccount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.WebManageEpicAccount");
		
		UMcpContext_WebManageEpicAccount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C59100
	 * 		Name   -> Function BlueprintContext.McpContext.WebForgotPasswordEpicAccount
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Email                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCompleteDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::WebForgotPasswordEpicAccount(const class FText& Email, const class FScriptDelegate& OnCompleteDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.WebForgotPasswordEpicAccount");
		
		UMcpContext_WebForgotPasswordEpicAccount_Params params {};
		params.Email = Email;
		params.OnCompleteDelegate = OnCompleteDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58FB0
	 * 		Name   -> Function BlueprintContext.McpContext.WebCreateEpicAccount
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Email                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCompleteDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::WebCreateEpicAccount(const class FText& Email, const class FScriptDelegate& OnCompleteDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.WebCreateEpicAccount");
		
		UMcpContext_WebCreateEpicAccount_Params params {};
		params.Email = Email;
		params.OnCompleteDelegate = OnCompleteDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58D40
	 * 		Name   -> Function BlueprintContext.McpContext.UnLinkConsoleAccount
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnCompleteDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::UnLinkConsoleAccount(const class FScriptDelegate& OnCompleteDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.UnLinkConsoleAccount");
		
		UMcpContext_UnLinkConsoleAccount_Params params {};
		params.OnCompleteDelegate = OnCompleteDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58240
	 * 		Name   -> Function BlueprintContext.McpContext.ShouldShowWatermark
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMcpContext::ShouldShowWatermark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.ShouldShowWatermark");
		
		UMcpContext_ShouldShowWatermark_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55CE0
	 * 		Name   -> Function BlueprintContext.McpContext.SendFriendCodePlatformMessage
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FFriendCode                                 FriendCode                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCompleteDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::SendFriendCodePlatformMessage(const struct FFriendCode& FriendCode, const class FScriptDelegate& OnCompleteDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.SendFriendCodePlatformMessage");
		
		UMcpContext_SendFriendCodePlatformMessage_Params params {};
		params.FriendCode = FriendCode;
		params.OnCompleteDelegate = OnCompleteDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C548E0
	 * 		Name   -> Function BlueprintContext.McpContext.QueryUnredeemedFriendCodes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnCompleteDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::QueryUnredeemedFriendCodes(const class FScriptDelegate& OnCompleteDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.QueryUnredeemedFriendCodes");
		
		UMcpContext_QueryUnredeemedFriendCodes_Params params {};
		params.OnCompleteDelegate = OnCompleteDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.McpContext.OnWebUpgradeEpicAccountRequestComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::OnWebUpgradeEpicAccountRequestComplete__DelegateSignature(bool bSuccess, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.McpContext.OnWebUpgradeEpicAccountRequestComplete__DelegateSignature");
		
		UMcpContext_OnWebUpgradeEpicAccountRequestComplete__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.McpContext.OnWebForgotPasswordRequestComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::OnWebForgotPasswordRequestComplete__DelegateSignature(bool bSuccess, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.McpContext.OnWebForgotPasswordRequestComplete__DelegateSignature");
		
		UMcpContext_OnWebForgotPasswordRequestComplete__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.McpContext.OnWebCreateEpicAccountRequestComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      AuthCode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::OnWebCreateEpicAccountRequestComplete__DelegateSignature(bool bSuccess, const class FText& Message, const class FString& AuthCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.McpContext.OnWebCreateEpicAccountRequestComplete__DelegateSignature");
		
		UMcpContext_OnWebCreateEpicAccountRequestComplete__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.Message = Message;
		params.AuthCode = AuthCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.McpContext.OnUnlinkAccountRequestComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::OnUnlinkAccountRequestComplete__DelegateSignature(bool bSuccess, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.McpContext.OnUnlinkAccountRequestComplete__DelegateSignature");
		
		UMcpContext_OnUnlinkAccountRequestComplete__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.McpContext.OnSendFriendCodePlatformMessageComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		bool                                               bMessageSent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::OnSendFriendCodePlatformMessageComplete__DelegateSignature(bool bMessageSent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.McpContext.OnSendFriendCodePlatformMessageComplete__DelegateSignature");
		
		UMcpContext_OnSendFriendCodePlatformMessageComplete__DelegateSignature_Params params {};
		params.bMessageSent = bMessageSent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.McpContext.OnQueryUnredeemedFriendCodesComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FFriendCode>                         FriendCodes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::OnQueryUnredeemedFriendCodesComplete__DelegateSignature(bool bSuccess, TArray<struct FFriendCode> FriendCodes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.McpContext.OnQueryUnredeemedFriendCodesComplete__DelegateSignature");
		
		UMcpContext_OnQueryUnredeemedFriendCodesComplete__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.FriendCodes = FriendCodes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.McpContext.OnLoginRequestComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		ELoginResult                                       Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::OnLoginRequestComplete__DelegateSignature(ELoginResult Result, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.McpContext.OnLoginRequestComplete__DelegateSignature");
		
		UMcpContext_OnLoginRequestComplete__DelegateSignature_Params params {};
		params.Result = Result;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.McpContext.OnLinkedConsoleAccount__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		class FText                                        DisplayName                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        ConsoleDisplayName                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::OnLinkedConsoleAccount__DelegateSignature(const class FText& DisplayName, const class FText& ConsoleDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.McpContext.OnLinkedConsoleAccount__DelegateSignature");
		
		UMcpContext_OnLinkedConsoleAccount__DelegateSignature_Params params {};
		params.DisplayName = DisplayName;
		params.ConsoleDisplayName = ConsoleDisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.McpContext.OnIssueFriendCodeComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FFriendCode                                 FriendCode                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::OnIssueFriendCodeComplete__DelegateSignature(bool bSuccess, const struct FFriendCode& FriendCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.McpContext.OnIssueFriendCodeComplete__DelegateSignature");
		
		UMcpContext_OnIssueFriendCodeComplete__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.FriendCode = FriendCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.McpContext.OnEulaAvailable__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		class FText                                        EulaText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::OnEulaAvailable__DelegateSignature(const class FText& EulaText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.McpContext.OnEulaAvailable__DelegateSignature");
		
		UMcpContext_OnEulaAvailable__DelegateSignature_Params params {};
		params.EulaText = EulaText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.McpContext.OnCreateAccountRequestComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		ECreateAccountResult                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::OnCreateAccountRequestComplete__DelegateSignature(ECreateAccountResult Result, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.McpContext.OnCreateAccountRequestComplete__DelegateSignature");
		
		UMcpContext_OnCreateAccountRequestComplete__DelegateSignature_Params params {};
		params.Result = Result;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.McpContext.OnCheckPurchaseRequiredForAccess__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		bool                                               bPurchaseRequired                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::OnCheckPurchaseRequiredForAccess__DelegateSignature(bool bPurchaseRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.McpContext.OnCheckPurchaseRequiredForAccess__DelegateSignature");
		
		UMcpContext_OnCheckPurchaseRequiredForAccess__DelegateSignature_Params params {};
		params.bPurchaseRequired = bPurchaseRequired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.McpContext.OnCheckHasRedeemForAccess__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		bool                                               bHasInvite                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasPurchase                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::OnCheckHasRedeemForAccess__DelegateSignature(bool bHasInvite, bool bHasPurchase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.McpContext.OnCheckHasRedeemForAccess__DelegateSignature");
		
		UMcpContext_OnCheckHasRedeemForAccess__DelegateSignature_Params params {};
		params.bHasInvite = bHasInvite;
		params.bHasPurchase = bHasPurchase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53E20
	 * 		Name   -> Function BlueprintContext.McpContext.Logout
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMcpContext::Logout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.Logout");
		
		UMcpContext_Logout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53D10
	 * 		Name   -> Function BlueprintContext.McpContext.LoginAuthCode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      AuthCode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCompleteDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::LoginAuthCode(const class FString& AuthCode, const class FScriptDelegate& OnCompleteDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.LoginAuthCode");
		
		UMcpContext_LoginAuthCode_Params params {};
		params.AuthCode = AuthCode;
		params.OnCompleteDelegate = OnCompleteDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53AF0
	 * 		Name   -> Function BlueprintContext.McpContext.Login
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Username                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        Password                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bRememberMe                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCompleteDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::Login(const class FText& Username, const class FText& Password, bool bRememberMe, const class FScriptDelegate& OnCompleteDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.Login");
		
		UMcpContext_Login_Params params {};
		params.Username = Username;
		params.Password = Password;
		params.bRememberMe = bRememberMe;
		params.OnCompleteDelegate = OnCompleteDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C538B0
	 * 		Name   -> Function BlueprintContext.McpContext.IsValidEmail
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FText                                        InEmail                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UMcpContext::IsValidEmail(const class FText& InEmail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.IsValidEmail");
		
		UMcpContext_IsValidEmail_Params params {};
		params.InEmail = InEmail;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53780
	 * 		Name   -> Function BlueprintContext.McpContext.IsUnlinkConsoleAccountAllowed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMcpContext::IsUnlinkConsoleAccountAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.IsUnlinkConsoleAccountAllowed");
		
		UMcpContext_IsUnlinkConsoleAccountAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53990
	 * 		Name   -> Function BlueprintContext.McpContext.IssueFriendCode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnCompleteDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::IssueFriendCode(const class FScriptDelegate& OnCompleteDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.IssueFriendCode");
		
		UMcpContext_IssueFriendCode_Params params {};
		params.OnCompleteDelegate = OnCompleteDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53610
	 * 		Name   -> Function BlueprintContext.McpContext.IsRememberMeChecked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMcpContext::IsRememberMeChecked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.IsRememberMeChecked");
		
		UMcpContext_IsRememberMeChecked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C535E0
	 * 		Name   -> Function BlueprintContext.McpContext.IsRememberMeAllowed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMcpContext::IsRememberMeAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.IsRememberMeAllowed");
		
		UMcpContext_IsRememberMeAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53430
	 * 		Name   -> Function BlueprintContext.McpContext.IsLoggedIn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMcpContext::IsLoggedIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.IsLoggedIn");
		
		UMcpContext_IsLoggedIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C531F0
	 * 		Name   -> Function BlueprintContext.McpContext.IsHeadlessAccountAllowed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMcpContext::IsHeadlessAccountAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.IsHeadlessAccountAllowed");
		
		UMcpContext_IsHeadlessAccountAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C531C0
	 * 		Name   -> Function BlueprintContext.McpContext.IsHeadlessAccount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMcpContext::IsHeadlessAccount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.IsHeadlessAccount");
		
		UMcpContext_IsHeadlessAccount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52F80
	 * 		Name   -> Function BlueprintContext.McpContext.IsBusy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMcpContext::IsBusy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.IsBusy");
		
		UMcpContext_IsBusy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52AF0
	 * 		Name   -> Function BlueprintContext.McpContext.HasPlaystationPlus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMcpContext::HasPlaystationPlus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.HasPlaystationPlus");
		
		UMcpContext_HasPlaystationPlus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A81DF0
	 * 		Name   -> Function BlueprintContext.McpContext.HACK_SetDisplayName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      DisplayName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::HACK_SetDisplayName(const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.HACK_SetDisplayName");
		
		UMcpContext_HACK_SetDisplayName_Params params {};
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C524A0
	 * 		Name   -> Function BlueprintContext.McpContext.GetUsername
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UMcpContext::GetUsername()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.GetUsername");
		
		UMcpContext_GetUsername_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4FA30
	 * 		Name   -> Function BlueprintContext.McpContext.GetNumFriendCodesToIssue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMcpContext::GetNumFriendCodesToIssue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.GetNumFriendCodesToIssue");
		
		UMcpContext_GetNumFriendCodesToIssue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EEF0
	 * 		Name   -> Function BlueprintContext.McpContext.GetLoginStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UMcpContext::GetLoginStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.GetLoginStatus");
		
		UMcpContext_GetLoginStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4DAF0
	 * 		Name   -> Function BlueprintContext.McpContext.GetGameSessionWatermarkText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UMcpContext::GetGameSessionWatermarkText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.GetGameSessionWatermarkText");
		
		UMcpContext_GetGameSessionWatermarkText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D8F0
	 * 		Name   -> Function BlueprintContext.McpContext.GetFriendCodeDisplayName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFriendCode                                 FriendCode                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UMcpContext::GetFriendCodeDisplayName(const struct FFriendCode& FriendCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.GetFriendCodeDisplayName");
		
		UMcpContext_GetFriendCodeDisplayName_Params params {};
		params.FriendCode = FriendCode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D7E0
	 * 		Name   -> Function BlueprintContext.McpContext.GetFriendCodeDescription
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFriendCode                                 FriendCode                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UMcpContext::GetFriendCodeDescription(const struct FFriendCode& FriendCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.GetFriendCodeDescription");
		
		UMcpContext_GetFriendCodeDescription_Params params {};
		params.FriendCode = FriendCode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D080
	 * 		Name   -> Function BlueprintContext.McpContext.GetEULAText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FText UMcpContext::GetEULAText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.GetEULAText");
		
		UMcpContext_GetEULAText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4AB20
	 * 		Name   -> Function BlueprintContext.McpContext.GetAppName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UMcpContext::GetAppName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.GetAppName");
		
		UMcpContext_GetAppName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49240
	 * 		Name   -> Function BlueprintContext.McpContext.DeclineEula
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMcpContext::DeclineEula()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.DeclineEula");
		
		UMcpContext_DeclineEula_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49000
	 * 		Name   -> Function BlueprintContext.McpContext.CreateHeadlessAccount
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        DisplayName                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCompleteDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::CreateHeadlessAccount(const class FText& DisplayName, const class FScriptDelegate& OnCompleteDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.CreateHeadlessAccount");
		
		UMcpContext_CreateHeadlessAccount_Params params {};
		params.DisplayName = DisplayName;
		params.OnCompleteDelegate = OnCompleteDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48C50
	 * 		Name   -> Function BlueprintContext.McpContext.CheckPurchaseRequiredForAccess
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnCompleteDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::CheckPurchaseRequiredForAccess(const class FScriptDelegate& OnCompleteDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.CheckPurchaseRequiredForAccess");
		
		UMcpContext_CheckPurchaseRequiredForAccess_Params params {};
		params.OnCompleteDelegate = OnCompleteDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48B90
	 * 		Name   -> Function BlueprintContext.McpContext.CheckHasRedeemForAccess
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnCompleteDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::CheckHasRedeemForAccess(const class FScriptDelegate& OnCompleteDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.CheckHasRedeemForAccess");
		
		UMcpContext_CheckHasRedeemForAccess_Params params {};
		params.OnCompleteDelegate = OnCompleteDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47960
	 * 		Name   -> Function BlueprintContext.McpContext.AutoLogin
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnCompleteDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMcpContext::AutoLogin(const class FScriptDelegate& OnCompleteDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.AutoLogin");
		
		UMcpContext_AutoLogin_Params params {};
		params.OnCompleteDelegate = OnCompleteDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C46C70
	 * 		Name   -> Function BlueprintContext.McpContext.AcceptEula
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMcpContext::AcceptEula()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.McpContext.AcceptEula");
		
		UMcpContext_AcceptEula_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMcpContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMcpContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.McpContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58E00
	 * 		Name   -> Function BlueprintContext.MenuContext.UnregisterTabListWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionTabListWidget*                         TabListWidget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::UnregisterTabListWidget(class UOrionTabListWidget* TabListWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.UnregisterTabListWidget");
		
		UMenuContext_UnregisterTabListWidget_Params params {};
		params.TabListWidget = TabListWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C582F0
	 * 		Name   -> Function BlueprintContext.MenuContext.ShowFrontEndStartupContent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMenuContext::ShowFrontEndStartupContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.ShowFrontEndStartupContent");
		
		UMenuContext_ShowFrontEndStartupContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58270
	 * 		Name   -> Function BlueprintContext.MenuContext.ShowCardCrafting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionCardData*                              CardToCraft                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::ShowCardCrafting(class UOrionCardData* CardToCraft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.ShowCardCrafting");
		
		UMenuContext_ShowCardCrafting_Params params {};
		params.CardToCraft = CardToCraft;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C581B0
	 * 		Name   -> Function BlueprintContext.MenuContext.ShouldDisplayWUIUI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMenuContext::ShouldDisplayWUIUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.ShouldDisplayWUIUI");
		
		UMenuContext_ShouldDisplayWUIUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55810
	 * 		Name   -> Function BlueprintContext.MenuContext.ReturnToTitleDueToRequiredUpdate
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EReturnToMainMenuReason                            Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnDialogClosed                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMenuContext::ReturnToTitleDueToRequiredUpdate(EReturnToMainMenuReason Reason, const class FScriptDelegate& OnDialogClosed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.ReturnToTitleDueToRequiredUpdate");
		
		UMenuContext_ReturnToTitleDueToRequiredUpdate_Params params {};
		params.Reason = Reason;
		params.OnDialogClosed = OnDialogClosed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C552A0
	 * 		Name   -> Function BlueprintContext.MenuContext.RegisterTabListWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionTabListWidget*                         TabListWidget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::RegisterTabListWidget(class UOrionTabListWidget* TabListWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.RegisterTabListWidget");
		
		UMenuContext_RegisterTabListWidget_Params params {};
		params.TabListWidget = TabListWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55220
	 * 		Name   -> Function BlueprintContext.MenuContext.RegisterPurchaseConfirmation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionPurchaseConfirmationWidget*            PurchaseConfirmationWidget                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::RegisterPurchaseConfirmation(class UOrionPurchaseConfirmationWidget* PurchaseConfirmationWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.RegisterPurchaseConfirmation");
		
		UMenuContext_RegisterPurchaseConfirmation_Params params {};
		params.PurchaseConfirmationWidget = PurchaseConfirmationWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C551A0
	 * 		Name   -> Function BlueprintContext.MenuContext.RegisterMTXConfirmation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionPurchaseConfirmationWidget*            MTXConfirmationWidget                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::RegisterMTXConfirmation(class UOrionPurchaseConfirmationWidget* MTXConfirmationWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.RegisterMTXConfirmation");
		
		UMenuContext_RegisterMTXConfirmation_Params params {};
		params.MTXConfirmationWidget = MTXConfirmationWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnShowPostGameSummary__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UMenuContext::OnShowPostGameSummary__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnShowPostGameSummary__DelegateSignature");
		
		UMenuContext_OnShowPostGameSummary__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnShowPackOpenScreen__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UOrionMcpCardPackItem*                       CardPack                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::OnShowPackOpenScreen__DelegateSignature(class UOrionMcpCardPackItem* CardPack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnShowPackOpenScreen__DelegateSignature");
		
		UMenuContext_OnShowPackOpenScreen__DelegateSignature_Params params {};
		params.CardPack = CardPack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnShowHeroDetails__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UOrionHeroData*                              HeroData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOrionSkinItemDefinition*                    SkinToShow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::OnShowHeroDetails__DelegateSignature(class UOrionHeroData* HeroData, class UOrionSkinItemDefinition* SkinToShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnShowHeroDetails__DelegateSignature");
		
		UMenuContext_OnShowHeroDetails__DelegateSignature_Params params {};
		params.HeroData = HeroData;
		params.SkinToShow = SkinToShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnShowFrontEndContent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UMenuContext::OnShowFrontEndContent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnShowFrontEndContent__DelegateSignature");
		
		UMenuContext_OnShowFrontEndContent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnShowDeckBuilder__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UOrionMcpDeckItem*                           Deck                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::OnShowDeckBuilder__DelegateSignature(class UOrionMcpDeckItem* Deck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnShowDeckBuilder__DelegateSignature");
		
		UMenuContext_OnShowDeckBuilder__DelegateSignature_Params params {};
		params.Deck = Deck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnShowCraftingScreen__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UOrionCardData*                              CardToCraft                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::OnShowCraftingScreen__DelegateSignature(class UOrionCardData* CardToCraft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnShowCraftingScreen__DelegateSignature");
		
		UMenuContext_OnShowCraftingScreen__DelegateSignature_Params params {};
		params.CardToCraft = CardToCraft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnShowBundlePurchaseScreen__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      OfferId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::OnShowBundlePurchaseScreen__DelegateSignature(const class FString& OfferId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnShowBundlePurchaseScreen__DelegateSignature");
		
		UMenuContext_OnShowBundlePurchaseScreen__DelegateSignature_Params params {};
		params.OfferId = OfferId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnShowBannerEditor__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UOrionMcpBannerItem*                         BannerToEdit                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::OnShowBannerEditor__DelegateSignature(class UOrionMcpBannerItem* BannerToEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnShowBannerEditor__DelegateSignature");
		
		UMenuContext_OnShowBannerEditor__DelegateSignature_Params params {};
		params.BannerToEdit = BannerToEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnReturnToTitleScreenReasonClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UMenuContext::OnReturnToTitleScreenReasonClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnReturnToTitleScreenReasonClosed__DelegateSignature");
		
		UMenuContext_OnReturnToTitleScreenReasonClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnNavigationAttempt__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class FString                                      NavigationPath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ENavigationResult UMenuContext::OnNavigationAttempt__DelegateSignature(const class FString& NavigationPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnNavigationAttempt__DelegateSignature");
		
		UMenuContext_OnNavigationAttempt__DelegateSignature_Params params {};
		params.NavigationPath = NavigationPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnNavigateToTab__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UMenuContext::OnNavigateToTab__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnNavigateToTab__DelegateSignature");
		
		UMenuContext_OnNavigateToTab__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnNavigateToStoreItem__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      OfferId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::OnNavigateToStoreItem__DelegateSignature(const class FString& OfferId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnNavigateToStoreItem__DelegateSignature");
		
		UMenuContext_OnNavigateToStoreItem__DelegateSignature_Params params {};
		params.OfferId = OfferId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnMenuSceneChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FName                                        NewScene                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::OnMenuSceneChanged__DelegateSignature(const class FName& NewScene)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnMenuSceneChanged__DelegateSignature");
		
		UMenuContext_OnMenuSceneChanged__DelegateSignature_Params params {};
		params.NewScene = NewScene;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnMenuCategoryPushed__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        MenuCategory                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::OnMenuCategoryPushed__DelegateSignature(class UUserWidget* Widget, const class FName& MenuCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnMenuCategoryPushed__DelegateSignature");
		
		UMenuContext_OnMenuCategoryPushed__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.MenuCategory = MenuCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.MenuContext.OnFrontEndTabActivated__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FName                                        TabId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::OnFrontEndTabActivated__DelegateSignature(const class FName& TabId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.MenuContext.OnFrontEndTabActivated__DelegateSignature");
		
		UMenuContext_OnFrontEndTabActivated__DelegateSignature_Params params {};
		params.TabId = TabId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53F50
	 * 		Name   -> Function BlueprintContext.MenuContext.NavigationRequest
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      NavigationPath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::NavigationRequest(const class FString& NavigationPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.NavigationRequest");
		
		UMenuContext_NavigationRequest_Params params {};
		params.NavigationPath = NavigationPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53EB0
	 * 		Name   -> Function BlueprintContext.MenuContext.NavigateToStoreOffer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      OfferId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::NavigateToStoreOffer(const class FString& OfferId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.NavigateToStoreOffer");
		
		UMenuContext_NavigateToStoreOffer_Params params {};
		params.OfferId = OfferId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53E90
	 * 		Name   -> Function BlueprintContext.MenuContext.NavigateToPlayScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMenuContext::NavigateToPlayScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.NavigateToPlayScreen");
		
		UMenuContext_NavigateToPlayScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53E70
	 * 		Name   -> Function BlueprintContext.MenuContext.NavigateToHomeScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMenuContext::NavigateToHomeScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.NavigateToHomeScreen");
		
		UMenuContext_NavigateToHomeScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C450
	 * 		Name   -> Function BlueprintContext.MenuContext.GetCurrentSceneName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UMenuContext::GetCurrentSceneName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.GetCurrentSceneName");
		
		UMenuContext_GetCurrentSceneName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49350
	 * 		Name   -> Function BlueprintContext.MenuContext.DisplayReturnToTitleScreenReason
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnDialogClosed                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMenuContext::DisplayReturnToTitleScreenReason(const class FScriptDelegate& OnDialogClosed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.DisplayReturnToTitleScreenReason");
		
		UMenuContext_DisplayReturnToTitleScreenReason_Params params {};
		params.OnDialogClosed = OnDialogClosed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49330
	 * 		Name   -> Function BlueprintContext.MenuContext.DisplayReturnToMainMenuReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMenuContext::DisplayReturnToMainMenuReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.DisplayReturnToMainMenuReason");
		
		UMenuContext_DisplayReturnToMainMenuReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47D30
	 * 		Name   -> Function BlueprintContext.MenuContext.BroadcastSceneChange
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        SceneName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::BroadcastSceneChange(const class FName& SceneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.BroadcastSceneChange");
		
		UMenuContext_BroadcastSceneChange_Params params {};
		params.SceneName = SceneName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47CA0
	 * 		Name   -> Function BlueprintContext.MenuContext.BroadcastFrontEndTabActivated
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TabId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuContext::BroadcastFrontEndTabActivated(const class FName& TabId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.MenuContext.BroadcastFrontEndTabActivated");
		
		UMenuContext_BroadcastFrontEndTabActivated_Params params {};
		params.TabId = TabId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.MenuContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.NotificationContext.OnNotificationEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FOrionNotification                          Notification                                               (Parm, NativeAccessSpecifierPublic)
	 */
	void UNotificationContext::OnNotificationEvent__DelegateSignature(const struct FOrionNotification& Notification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.NotificationContext.OnNotificationEvent__DelegateSignature");
		
		UNotificationContext_OnNotificationEvent__DelegateSignature_Params params {};
		params.Notification = Notification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotificationContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotificationContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.NotificationContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55F80
	 * 		Name   -> Function BlueprintContext.OrionGameContext.SetActiveDeck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      DeckId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionGameContext::SetActiveDeck(const class FString& DeckId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.OrionGameContext.SetActiveDeck");
		
		UOrionGameContext_SetActiveDeck_Params params {};
		params.DeckId = DeckId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C510A0
	 * 		Name   -> Function BlueprintContext.OrionGameContext.GetRightAnalogStickValues
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UOrionGameContext::GetRightAnalogStickValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.OrionGameContext.GetRightAnalogStickValues");
		
		UOrionGameContext_GetRightAnalogStickValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4ECA0
	 * 		Name   -> Function BlueprintContext.OrionGameContext.GetLeftAnalogStickValues
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UOrionGameContext::GetLeftAnalogStickValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.OrionGameContext.GetLeftAnalogStickValues");
		
		UOrionGameContext_GetLeftAnalogStickValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EBB0
	 * 		Name   -> Function BlueprintContext.OrionGameContext.GetIsUsingGamePad
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOrionGameContext::GetIsUsingGamePad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.OrionGameContext.GetIsUsingGamePad");
		
		UOrionGameContext_GetIsUsingGamePad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E2A0
	 * 		Name   -> Function BlueprintContext.OrionGameContext.GetHeroData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UOrionHeroData* UOrionGameContext::GetHeroData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.OrionGameContext.GetHeroData");
		
		UOrionGameContext_GetHeroData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionGameContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionGameContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.OrionGameContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57460
	 * 		Name   -> Function BlueprintContext.PartyContext.SetPartyPrivacySetting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EPartyType                                         PartyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLeaderFriendsOnly                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bLeaderInvitesOnly                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::SetPartyPrivacySetting(EPartyType PartyType, bool bLeaderFriendsOnly, bool bLeaderInvitesOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.SetPartyPrivacySetting");
		
		UPartyContext_SetPartyPrivacySetting_Params params {};
		params.PartyType = PartyType;
		params.bLeaderFriendsOnly = bLeaderFriendsOnly;
		params.bLeaderInvitesOnly = bLeaderInvitesOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57110
	 * 		Name   -> Function BlueprintContext.PartyContext.SetMatchmakingType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOrionMatchmakingType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::SetMatchmakingType(EOrionMatchmakingType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.SetMatchmakingType");
		
		UPartyContext_SetMatchmakingType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57070
	 * 		Name   -> Function BlueprintContext.PartyContext.SetMatchmakingCustomKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      CustomKey                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::SetMatchmakingCustomKey(const class FString& CustomKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.SetMatchmakingCustomKey");
		
		UPartyContext_SetMatchmakingCustomKey_Params params {};
		params.CustomKey = CustomKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55F00
	 * 		Name   -> Function BlueprintContext.PartyContext.SendPartyInvite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionFriendItem*                            FriendItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::SendPartyInvite(class UOrionFriendItem* FriendItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.SendPartyInvite");
		
		UPartyContext_SendPartyInvite_Params params {};
		params.FriendItem = FriendItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55BF0
	 * 		Name   -> Function BlueprintContext.PartyContext.SendConsoleFriendInvite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPartyContext::SendConsoleFriendInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.SendConsoleFriendInvite");
		
		UPartyContext_SendConsoleFriendInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54860
	 * 		Name   -> Function BlueprintContext.PartyContext.PromoteToPartyLeader
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionPartyMemberState*                      PartyMember                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::PromoteToPartyLeader(class UOrionPartyMemberState* PartyMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.PromoteToPartyLeader");
		
		UPartyContext_PromoteToPartyLeader_Params params {};
		params.PartyMember = PartyMember;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.PartyContext.OnPartyTypeChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EPartyType                                         PartyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::OnPartyTypeChanged__DelegateSignature(EPartyType PartyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PartyContext.OnPartyTypeChanged__DelegateSignature");
		
		UPartyContext_OnPartyTypeChanged__DelegateSignature_Params params {};
		params.PartyType = PartyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.PartyContext.OnPartyDataChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FPartyState                                 PartyData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::OnPartyDataChanged__DelegateSignature(const struct FPartyState& PartyData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PartyContext.OnPartyDataChanged__DelegateSignature");
		
		UPartyContext_OnPartyDataChanged__DelegateSignature_Params params {};
		params.PartyData = PartyData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.PartyContext.OnPartyChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UPartyContext::OnPartyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PartyContext.OnPartyChanged__DelegateSignature");
		
		UPartyContext_OnPartyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.PartyContext.OnMMRUpdated__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bIsValid                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::OnMMRUpdated__DelegateSignature(bool bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PartyContext.OnMMRUpdated__DelegateSignature");
		
		UPartyContext_OnMMRUpdated__DelegateSignature_Params params {};
		params.bIsValid = bIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.PartyContext.OnMatchmakingTypeChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EOrionMatchmakingType                              NewType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::OnMatchmakingTypeChanged__DelegateSignature(EOrionMatchmakingType NewType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PartyContext.OnMatchmakingTypeChanged__DelegateSignature");
		
		UPartyContext_OnMatchmakingTypeChanged__DelegateSignature_Params params {};
		params.NewType = NewType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.PartyContext.OnMatchmakingCustomKeyChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      CustomKey                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::OnMatchmakingCustomKeyChanged__DelegateSignature(const class FString& CustomKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PartyContext.OnMatchmakingCustomKeyChanged__DelegateSignature");
		
		UPartyContext_OnMatchmakingCustomKeyChanged__DelegateSignature_Params params {};
		params.CustomKey = CustomKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.PartyContext.OnLeaderInvitesOnlyChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bLeaderInviteOnly                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::OnLeaderInvitesOnlyChanged__DelegateSignature(bool bLeaderInviteOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PartyContext.OnLeaderInvitesOnlyChanged__DelegateSignature");
		
		UPartyContext_OnLeaderInvitesOnlyChanged__DelegateSignature_Params params {};
		params.bLeaderInviteOnly = bLeaderInviteOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.PartyContext.OnLeaderFriendsOnlyChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bLeaderFriendsOnly                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::OnLeaderFriendsOnlyChanged__DelegateSignature(bool bLeaderFriendsOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PartyContext.OnLeaderFriendsOnlyChanged__DelegateSignature");
		
		UPartyContext_OnLeaderFriendsOnlyChanged__DelegateSignature_Params params {};
		params.bLeaderFriendsOnly = bLeaderFriendsOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54160
	 * 		Name   -> Function BlueprintContext.PartyContext.NumPartyMembers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPartyContext::NumPartyMembers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.NumPartyMembers");
		
		UPartyContext_NumPartyMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53E40
	 * 		Name   -> Function BlueprintContext.PartyContext.MaxPartyMembers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPartyContext::MaxPartyMembers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.MaxPartyMembers");
		
		UPartyContext_MaxPartyMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53AD0
	 * 		Name   -> Function BlueprintContext.PartyContext.LeaveParty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPartyContext::LeaveParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.LeaveParty");
		
		UPartyContext_LeaveParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53A50
	 * 		Name   -> Function BlueprintContext.PartyContext.KickFromParty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionPartyMemberState*                      PartyMember                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::KickFromParty(class UOrionPartyMemberState* PartyMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.KickFromParty");
		
		UPartyContext_KickFromParty_Params params {};
		params.PartyMember = PartyMember;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53490
	 * 		Name   -> Function BlueprintContext.PartyContext.IsPartyLeader
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionPartyMemberState*                      PartyMember                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPartyContext::IsPartyLeader(class UOrionPartyMemberState* PartyMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.IsPartyLeader");
		
		UPartyContext_IsPartyLeader_Params params {};
		params.PartyMember = PartyMember;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53460
	 * 		Name   -> Function BlueprintContext.PartyContext.IsMatchmakingCustomKeyActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPartyContext::IsMatchmakingCustomKeyActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.IsMatchmakingCustomKeyActive");
		
		UPartyContext_IsMatchmakingCustomKeyActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53220
	 * 		Name   -> Function BlueprintContext.PartyContext.IsHeroPickedByOtherPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionHeroData*                              InHero                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPartyContext::IsHeroPickedByOtherPlayer(class UOrionHeroData* InHero)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.IsHeroPickedByOtherPlayer");
		
		UPartyContext_IsHeroPickedByOtherPlayer_Params params {};
		params.InHero = InHero;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52360
	 * 		Name   -> Function BlueprintContext.PartyContext.GetUniqueNetId
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UOrionPartyMemberState*                      PartyMember                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUniqueNetIdRepl                            UniqueNetId                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::STATIC_GetUniqueNetId(class UOrionPartyMemberState* PartyMember, struct FUniqueNetIdRepl* UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.GetUniqueNetId");
		
		UPartyContext_GetUniqueNetId_Params params {};
		params.PartyMember = PartyMember;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueNetId != nullptr)
			*UniqueNetId = params.UniqueNetId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50140
	 * 		Name   -> Function BlueprintContext.PartyContext.GetPartyPrivacySetting
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EPartyType                                         OutPartyType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OutLeaderFriendsOnly                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               OutLeaderInvitesOnly                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UPartyContext::GetPartyPrivacySetting(EPartyType* OutPartyType, bool* OutLeaderFriendsOnly, bool* OutLeaderInvitesOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.GetPartyPrivacySetting");
		
		UPartyContext_GetPartyPrivacySetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPartyType != nullptr)
			*OutPartyType = params.OutPartyType;
		if (OutLeaderFriendsOnly != nullptr)
			*OutLeaderFriendsOnly = params.OutLeaderFriendsOnly;
		if (OutLeaderInvitesOnly != nullptr)
			*OutLeaderInvitesOnly = params.OutLeaderInvitesOnly;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50090
	 * 		Name   -> Function BlueprintContext.PartyContext.GetPartyMembers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<class UOrionPersistentPartyMember*>         PartyMembers                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UPartyContext::GetPartyMembers(TArray<class UOrionPersistentPartyMember*>* PartyMembers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.GetPartyMembers");
		
		UPartyContext_GetPartyMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyMembers != nullptr)
			*PartyMembers = params.PartyMembers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F430
	 * 		Name   -> Function BlueprintContext.PartyContext.GetMyPersistentPartyEntry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UOrionPersistentPartyMember* UPartyContext::GetMyPersistentPartyEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.GetMyPersistentPartyEntry");
		
		UPartyContext_GetMyPersistentPartyEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F0A0
	 * 		Name   -> Function BlueprintContext.PartyContext.GetMatchmakingType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionMatchmakingType UPartyContext::GetMatchmakingType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.GetMatchmakingType");
		
		UPartyContext_GetMatchmakingType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F020
	 * 		Name   -> Function BlueprintContext.PartyContext.GetMatchmakingCustomKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UPartyContext::GetMatchmakingCustomKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.GetMatchmakingCustomKey");
		
		UPartyContext_GetMatchmakingCustomKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C478B0
	 * 		Name   -> Function BlueprintContext.PartyContext.AmIPartyLeader
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPartyContext::AmIPartyLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.AmIPartyLeader");
		
		UPartyContext_AmIPartyLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.PartyContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57EF0
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetVoiceGameVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetVoiceGameVolume(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetVoiceGameVolume");
		
		UPlayerContext_SetVoiceGameVolume_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57E00
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetVeterancy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOrionVeterancy                                    Veterancy                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetVeterancy(EOrionVeterancy Veterancy, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetVeterancy");
		
		UPlayerContext_SetVeterancy_Params params {};
		params.Veterancy = Veterancy;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57D00
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetShowXPPerMinOnHUD
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetShowXPPerMinOnHUD(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetShowXPPerMinOnHUD");
		
		UPlayerContext_SetShowXPPerMinOnHUD_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57C80
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetShowPingAndFPSOnHUD
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetShowPingAndFPSOnHUD(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetShowPingAndFPSOnHUD");
		
		UPlayerContext_SetShowPingAndFPSOnHUD_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57C00
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetShowBasicAttackRangeIndicator
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetShowBasicAttackRangeIndicator(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetShowBasicAttackRangeIndicator");
		
		UPlayerContext_SetShowBasicAttackRangeIndicator_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57B80
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetShowAbilityConfirmWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetShowAbilityConfirmWidget(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetShowAbilityConfirmWidget");
		
		UPlayerContext_SetShowAbilityConfirmWidget_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C573E0
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetOtherGameVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetOtherGameVolume(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetOtherGameVolume");
		
		UPlayerContext_SetOtherGameVolume_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57290
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Name                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetName");
		
		UPlayerContext_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57210
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetMusicGameVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetMusicGameVolume(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetMusicGameVolume");
		
		UPlayerContext_SetMusicGameVolume_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57190
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetMouseLookSensitivity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetMouseLookSensitivity(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetMouseLookSensitivity");
		
		UPlayerContext_SetMouseLookSensitivity_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56EA0
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetMasterGameVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetMasterGameVolume(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetMasterGameVolume");
		
		UPlayerContext_SetMasterGameVolume_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56CF0
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetInvertedMouse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bOn                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetInvertedMouse(bool bOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetInvertedMouse");
		
		UPlayerContext_SetInvertedMouse_Params params {};
		params.bOn = bOn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56990
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetHealthBarOverhead
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bOn                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetHealthBarOverhead(bool bOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetHealthBarOverhead");
		
		UPlayerContext_SetHealthBarOverhead_Params params {};
		params.bOn = bOn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56840
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetHasAchieved
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOrionSimpleAchievementType                        InAchievementType                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetHasAchieved(EOrionSimpleAchievementType InAchievementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetHasAchieved");
		
		UPlayerContext_SetHasAchieved_Params params {};
		params.InAchievementType = InAchievementType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56740
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetGamepadYawSensitivity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetGamepadYawSensitivity(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetGamepadYawSensitivity");
		
		UPlayerContext_SetGamepadYawSensitivity_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C566C0
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetGamepadRadialSelectEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetGamepadRadialSelectEnabled(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetGamepadRadialSelectEnabled");
		
		UPlayerContext_SetGamepadRadialSelectEnabled_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56640
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetGamepadPitchSensitivity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetGamepadPitchSensitivity(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetGamepadPitchSensitivity");
		
		UPlayerContext_SetGamepadPitchSensitivity_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C565C0
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetGamepadInvertYaw
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetGamepadInvertYaw(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetGamepadInvertYaw");
		
		UPlayerContext_SetGamepadInvertYaw_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56540
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetGamepadInvertPitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetGamepadInvertPitch(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetGamepadInvertPitch");
		
		UPlayerContext_SetGamepadInvertPitch_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C564C0
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetGamepadConfigIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetGamepadConfigIndex(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetGamepadConfigIndex");
		
		UPlayerContext_SetGamepadConfigIndex_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C56440
	 * 		Name   -> Function BlueprintContext.PlayerContext.SetEnableDeathcam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::SetEnableDeathcam(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SetEnableDeathcam");
		
		UPlayerContext_SetEnableDeathcam_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55A20
	 * 		Name   -> Function BlueprintContext.PlayerContext.SaveClientSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPlayerContext::SaveClientSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.SaveClientSettings");
		
		UPlayerContext_SaveClientSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55940
	 * 		Name   -> Function BlueprintContext.PlayerContext.RevertToCurrentClientGameplaySettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPlayerContext::RevertToCurrentClientGameplaySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.RevertToCurrentClientGameplaySettings");
		
		UPlayerContext_RevertToCurrentClientGameplaySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55920
	 * 		Name   -> Function BlueprintContext.PlayerContext.RevertToCurrentClientAudioSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPlayerContext::RevertToCurrentClientAudioSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.RevertToCurrentClientAudioSettings");
		
		UPlayerContext_RevertToCurrentClientAudioSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55760
	 * 		Name   -> Function BlueprintContext.PlayerContext.ResetClientGameplaySettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPlayerContext::ResetClientGameplaySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.ResetClientGameplaySettings");
		
		UPlayerContext_ResetClientGameplaySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55740
	 * 		Name   -> Function BlueprintContext.PlayerContext.ResetClientAudioSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPlayerContext::ResetClientAudioSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.ResetClientAudioSettings");
		
		UPlayerContext_ResetClientAudioSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54840
	 * 		Name   -> Function BlueprintContext.PlayerContext.ProcessAcknowledgedItems
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPlayerContext::ProcessAcknowledgedItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.ProcessAcknowledgedItems");
		
		UPlayerContext_ProcessAcknowledgedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54760
	 * 		Name   -> Function BlueprintContext.PlayerContext.PrestigeAccount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPlayerContext::PrestigeAccount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.PrestigeAccount");
		
		UPlayerContext_PrestigeAccount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54490
	 * 		Name   -> Function BlueprintContext.PlayerContext.OverrideBoundKeyByNameAndType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        BindingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EKeyBindingType                                    BindingType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputChord                                 PreviousKey                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FInputChord                                 NewKey                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::OverrideBoundKeyByNameAndType(const class FName& BindingName, EKeyBindingType BindingType, const struct FInputChord& PreviousKey, const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.OverrideBoundKeyByNameAndType");
		
		UPlayerContext_OverrideBoundKeyByNameAndType_Params params {};
		params.BindingName = BindingName;
		params.BindingType = BindingType;
		params.PreviousKey = PreviousKey;
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.PlayerContext.OnPrestigeAccountComplete__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UPlayerContext::OnPrestigeAccountComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PlayerContext.OnPrestigeAccountComplete__DelegateSignature");
		
		UPlayerContext_OnPrestigeAccountComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.PlayerContext.OnMcpResult__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FText                                        ErrorMessage                                               (Parm, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::OnMcpResult__DelegateSignature(bool bSuccess, const class FText& ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PlayerContext.OnMcpResult__DelegateSignature");
		
		UPlayerContext_OnMcpResult__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.ErrorMessage = ErrorMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53670
	 * 		Name   -> Function BlueprintContext.PlayerContext.IsSoloVsAIProgressionDisabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPlayerContext::IsSoloVsAIProgressionDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.IsSoloVsAIProgressionDisabled");
		
		UPlayerContext_IsSoloVsAIProgressionDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C535B0
	 * 		Name   -> Function BlueprintContext.PlayerContext.IsRecentlyAbandoned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPlayerContext::IsRecentlyAbandoned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.IsRecentlyAbandoned");
		
		UPlayerContext_IsRecentlyAbandoned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53370
	 * 		Name   -> Function BlueprintContext.PlayerContext.IsItemAcknowledgementNeeded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionMcpItem*                               Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPlayerContext::IsItemAcknowledgementNeeded(class UOrionMcpItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.IsItemAcknowledgementNeeded");
		
		UPlayerContext_IsItemAcknowledgementNeeded_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C532B0
	 * 		Name   -> Function BlueprintContext.PlayerContext.IsHeroTierUnlocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionHeroTier                                     Tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPlayerContext::IsHeroTierUnlocked(EOrionHeroTier Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.IsHeroTierUnlocked");
		
		UPlayerContext_IsHeroTierUnlocked_Params params {};
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53100
	 * 		Name   -> Function BlueprintContext.PlayerContext.IsFeatureUnlocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EUnlockableFeature                                 Feature                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPlayerContext::IsFeatureUnlocked(EUnlockableFeature Feature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.IsFeatureUnlocked");
		
		UPlayerContext_IsFeatureUnlocked_Params params {};
		params.Feature = Feature;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C530A0
	 * 		Name   -> Function BlueprintContext.PlayerContext.IsDailyRewardAvailable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPlayerContext::IsDailyRewardAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.IsDailyRewardAvailable");
		
		UPlayerContext_IsDailyRewardAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52B20
	 * 		Name   -> Function BlueprintContext.PlayerContext.HasSpecifiedVeterancy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPlayerContext::HasSpecifiedVeterancy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.HasSpecifiedVeterancy");
		
		UPlayerContext_HasSpecifiedVeterancy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52A60
	 * 		Name   -> Function BlueprintContext.PlayerContext.HasAccomplishedSimpleAchievement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionSimpleAchievementType                        InAchievementType                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPlayerContext::HasAccomplishedSimpleAchievement(EOrionSimpleAchievementType InAchievementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.HasAccomplishedSimpleAchievement");
		
		UPlayerContext_HasAccomplishedSimpleAchievement_Params params {};
		params.InAchievementType = InAchievementType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52620
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetVoiceGameVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPlayerContext::GetVoiceGameVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetVoiceGameVolume");
		
		UPlayerContext_GetVoiceGameVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C525B0
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetValorLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetValorLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetValorLevel");
		
		UPlayerContext_GetValorLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52230
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetTimeUntilNextDailyReward
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimespan UPlayerContext::GetTimeUntilNextDailyReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetTimeUntilNextDailyReward");
		
		UPlayerContext_GetTimeUntilNextDailyReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51EB0
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionTeam UPlayerContext::GetTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetTeam");
		
		UPlayerContext_GetTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51AC0
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetShowXPPerMinOnHUD
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetShowXPPerMinOnHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetShowXPPerMinOnHUD");
		
		UPlayerContext_GetShowXPPerMinOnHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51A90
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetShowPingAndFPSOnHUD
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetShowPingAndFPSOnHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetShowPingAndFPSOnHUD");
		
		UPlayerContext_GetShowPingAndFPSOnHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51A60
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetShowBasicAttackRangeIndicator
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetShowBasicAttackRangeIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetShowBasicAttackRangeIndicator");
		
		UPlayerContext_GetShowBasicAttackRangeIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51A30
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetShowAbilityConfirmWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetShowAbilityConfirmWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetShowAbilityConfirmWidget");
		
		UPlayerContext_GetShowAbilityConfirmWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50310
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetPlatform
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionPlayerPlatform UPlayerContext::GetPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetPlatform");
		
		UPlayerContext_GetPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4FDF0
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetOtherGameVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPlayerContext::GetOtherGameVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetOtherGameVolume");
		
		UPlayerContext_GetOtherGameVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F520
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UPlayerContext::GetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetName");
		
		UPlayerContext_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F400
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetMusicGameVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPlayerContext::GetMusicGameVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetMusicGameVolume");
		
		UPlayerContext_GetMusicGameVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F280
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetMouseLookSensitivity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPlayerContext::GetMouseLookSensitivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetMouseLookSensitivity");
		
		UPlayerContext_GetMouseLookSensitivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EFB0
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetMasterGameVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPlayerContext::GetMasterGameVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetMasterGameVolume");
		
		UPlayerContext_GetMasterGameVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EC20
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetLastHeroPlayed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UPlayerContext::GetLastHeroPlayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetLastHeroPlayed");
		
		UPlayerContext_GetLastHeroPlayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EAC0
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetInvertedMouse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPlayerContext::GetInvertedMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetInvertedMouse");
		
		UPlayerContext_GetInvertedMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E1C0
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetHealthBarOverhead
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPlayerContext::GetHealthBarOverhead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetHealthBarOverhead");
		
		UPlayerContext_GetHealthBarOverhead_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4DC90
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetGameplayStats
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FGameplayStats                              GameplayStats                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bPvpOnly                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::GetGameplayStats(struct FGameplayStats* GameplayStats, bool bPvpOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetGameplayStats");
		
		UPlayerContext_GetGameplayStats_Params params {};
		params.bPvpOnly = bPvpOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameplayStats != nullptr)
			*GameplayStats = params.GameplayStats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4DC60
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetGamepadYawSensitivity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetGamepadYawSensitivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetGamepadYawSensitivity");
		
		UPlayerContext_GetGamepadYawSensitivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4DC30
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetGamepadRadialSelectEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetGamepadRadialSelectEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetGamepadRadialSelectEnabled");
		
		UPlayerContext_GetGamepadRadialSelectEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4DC00
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetGamepadPitchSensitivity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetGamepadPitchSensitivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetGamepadPitchSensitivity");
		
		UPlayerContext_GetGamepadPitchSensitivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4DBD0
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetGamepadInvertYaw
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetGamepadInvertYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetGamepadInvertYaw");
		
		UPlayerContext_GetGamepadInvertYaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4DBA0
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetGamepadInvertPitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetGamepadInvertPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetGamepadInvertPitch");
		
		UPlayerContext_GetGamepadInvertPitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4DB70
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetGamepadConfigIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetGamepadConfigIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetGamepadConfigIndex");
		
		UPlayerContext_GetGamepadConfigIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D530
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetFeatureLockedMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EUnlockableFeature                                 Feature                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UPlayerContext::GetFeatureLockedMessage(EUnlockableFeature Feature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetFeatureLockedMessage");
		
		UPlayerContext_GetFeatureLockedMessage_Params params {};
		params.Feature = Feature;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D470
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetEnableDeathcam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetEnableDeathcam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetEnableDeathcam");
		
		UPlayerContext_GetEnableDeathcam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C470
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetDailyRewardChestTokenCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetDailyRewardChestTokenCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetDailyRewardChestTokenCount");
		
		UPlayerContext_GetDailyRewardChestTokenCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4B840
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetBoundKeysByNameAndType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        BindingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EKeyBindingType                                    BindingType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBoundKeys UPlayerContext::GetBoundKeysByNameAndType(const class FName& BindingName, EKeyBindingType BindingType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetBoundKeysByNameAndType");
		
		UPlayerContext_GetBoundKeysByNameAndType_Params params {};
		params.BindingName = BindingName;
		params.BindingType = BindingType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A590
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetAchievementDescription
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOrionSimpleAchievementType                        InAchievementType                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSimpleAchievementDescription UPlayerContext::GetAchievementDescription(EOrionSimpleAchievementType InAchievementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetAchievementDescription");
		
		UPlayerContext_GetAchievementDescription_Params params {};
		params.InAchievementType = InAchievementType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A3E0
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetAccountLevelInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOrionLevelInfo                             AccountLevelInfo                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::GetAccountLevelInfo(struct FOrionLevelInfo* AccountLevelInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetAccountLevelInfo");
		
		UPlayerContext_GetAccountLevelInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccountLevelInfo != nullptr)
			*AccountLevelInfo = params.AccountLevelInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A3B0
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetAccountLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetAccountLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetAccountLevel");
		
		UPlayerContext_GetAccountLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A380
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetAccountExperienceMax
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPlayerContext::GetAccountExperienceMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetAccountExperienceMax");
		
		UPlayerContext_GetAccountExperienceMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A350
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetAccountExperience
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPlayerContext::GetAccountExperience()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetAccountExperience");
		
		UPlayerContext_GetAccountExperience_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A320
	 * 		Name   -> Function BlueprintContext.PlayerContext.GetAccountCurrency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerContext::GetAccountCurrency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.GetAccountCurrency");
		
		UPlayerContext_GetAccountCurrency_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48930
	 * 		Name   -> Function BlueprintContext.PlayerContext.ChangeLanguage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      LanguageCode                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSave                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::ChangeLanguage(const class FString& LanguageCode, bool bSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.ChangeLanguage");
		
		UPlayerContext_ChangeLanguage_Params params {};
		params.LanguageCode = LanguageCode;
		params.bSave = bSave;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47940
	 * 		Name   -> Function BlueprintContext.PlayerContext.ApplyClientPartySettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPlayerContext::ApplyClientPartySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.ApplyClientPartySettings");
		
		UPlayerContext_ApplyClientPartySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47920
	 * 		Name   -> Function BlueprintContext.PlayerContext.ApplyClientGameplaySettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPlayerContext::ApplyClientGameplaySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.ApplyClientGameplaySettings");
		
		UPlayerContext_ApplyClientGameplaySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47900
	 * 		Name   -> Function BlueprintContext.PlayerContext.ApplyClientAudioSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPlayerContext::ApplyClientAudioSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.ApplyClientAudioSettings");
		
		UPlayerContext_ApplyClientAudioSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C478E0
	 * 		Name   -> Function BlueprintContext.PlayerContext.ApplyAllClientSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPlayerContext::ApplyAllClientSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.ApplyAllClientSettings");
		
		UPlayerContext_ApplyAllClientSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47080
	 * 		Name   -> Function BlueprintContext.PlayerContext.AcknowledgeItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionMcpItem*                               Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerContext::AcknowledgeItem(class UOrionMcpItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PlayerContext.AcknowledgeItem");
		
		UPlayerContext_AcknowledgeItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.PlayerContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58F90
	 * 		Name   -> Function BlueprintContext.PostGameContext.UpdateScoreboardInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPostGameContext::UpdateScoreboardInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.UpdateScoreboardInfo");
		
		UPostGameContext_UpdateScoreboardInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58210
	 * 		Name   -> Function BlueprintContext.PostGameContext.ShouldShowSurvey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPostGameContext::ShouldShowSurvey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.ShouldShowSurvey");
		
		UPostGameContext_ShouldShowSurvey_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C581E0
	 * 		Name   -> Function BlueprintContext.PostGameContext.ShouldShowPostGameScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPostGameContext::ShouldShowPostGameScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.ShouldShowPostGameScreen");
		
		UPostGameContext_ShouldShowPostGameScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.PostGameContext.OnWinningTeamReceived__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EOrionTeam                                         WinningTeam                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPostGameContext::OnWinningTeamReceived__DelegateSignature(EOrionTeam WinningTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PostGameContext.OnWinningTeamReceived__DelegateSignature");
		
		UPostGameContext_OnWinningTeamReceived__DelegateSignature_Params params {};
		params.WinningTeam = WinningTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.PostGameContext.OnShowReward__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FOrionLootReward                            LootReward                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPostGameContext::OnShowReward__DelegateSignature(const struct FOrionLootReward& LootReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PostGameContext.OnShowReward__DelegateSignature");
		
		UPostGameContext_OnShowReward__DelegateSignature_Params params {};
		params.LootReward = LootReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C541C0
	 * 		Name   -> Function BlueprintContext.PostGameContext.OnContinueButtonPressed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPostGameContext::OnContinueButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.OnContinueButtonPressed");
		
		UPostGameContext_OnContinueButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54040
	 * 		Name   -> Function BlueprintContext.PostGameContext.NotifyPostGameScreenDismissed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPostGameContext::NotifyPostGameScreenDismissed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.NotifyPostGameScreenDismissed");
		
		UPostGameContext_NotifyPostGameScreenDismissed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52890
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetWonLastCompletedMatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UPostGameContext::GetWonLastCompletedMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetWonLastCompletedMatch");
		
		UPostGameContext_GetWonLastCompletedMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51E10
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetSurveyQuestionGroupQuestionCount
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        QuestionId                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPostGameContext::GetSurveyQuestionGroupQuestionCount(const class FName& QuestionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetSurveyQuestionGroupQuestionCount");
		
		UPostGameContext_GetSurveyQuestionGroupQuestionCount_Params params {};
		params.QuestionId = QuestionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51DD0
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetSurveyQuestionGroupId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UPostGameContext::GetSurveyQuestionGroupId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetSurveyQuestionGroupId");
		
		UPostGameContext_GetSurveyQuestionGroupId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C515D0
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetScoreboardTeamEntry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FOrionScoreboardTeamEntryInfo UPostGameContext::GetScoreboardTeamEntry(EOrionTeam TeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetScoreboardTeamEntry");
		
		UPostGameContext_GetScoreboardTeamEntry_Params params {};
		params.TeamNum = TeamNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51390
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetScoreboardPlayerEntryFromUIID
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOrionPlayerStateUIID                       PlayerStateUIID                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FOrionScoreboardPlayerEntryInfo UPostGameContext::GetScoreboardPlayerEntryFromUIID(const struct FOrionPlayerStateUIID& PlayerStateUIID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetScoreboardPlayerEntryFromUIID");
		
		UPostGameContext_GetScoreboardPlayerEntryFromUIID_Params params {};
		params.PlayerStateUIID = PlayerStateUIID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51190
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetScoreboardPlayerEntry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FOrionScoreboardPlayerEntryInfo UPostGameContext::GetScoreboardPlayerEntry(EOrionTeam TeamNum, int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetScoreboardPlayerEntry");
		
		UPostGameContext_GetScoreboardPlayerEntry_Params params {};
		params.TeamNum = TeamNum;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50B80
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetQuestionForQuestionGroup
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        QuestionId                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UPostGameContext::GetQuestionForQuestionGroup(const class FName& QuestionId, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetQuestionForQuestionGroup");
		
		UPostGameContext_GetQuestionForQuestionGroup_Params params {};
		params.QuestionId = QuestionId;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4FD60
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetNumberOfPlayers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPostGameContext::GetNumberOfPlayers(EOrionTeam TeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetNumberOfPlayers");
		
		UPostGameContext_GetNumberOfPlayers_Params params {};
		params.TeamNum = TeamNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F460
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetMyTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionTeam UPostGameContext::GetMyTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetMyTeam");
		
		UPostGameContext_GetMyTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F190
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetMessageForQuestionGroup
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        QuestionId                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UPostGameContext::GetMessageForQuestionGroup(const class FName& QuestionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetMessageForQuestionGroup");
		
		UPostGameContext_GetMessageForQuestionGroup_Params params {};
		params.QuestionId = QuestionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EFE0
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetMatchSessionId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UPostGameContext::GetMatchSessionId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetMatchSessionId");
		
		UPostGameContext_GetMatchSessionId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EDD0
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetLocalPlayerUIID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionPlayerStateUIID UPostGameContext::GetLocalPlayerUIID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetLocalPlayerUIID");
		
		UPostGameContext_GetLocalPlayerUIID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4ED30
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetLocalPlayerScoreboardEntry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionScoreboardPlayerEntryInfo UPostGameContext::GetLocalPlayerScoreboardEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetLocalPlayerScoreboardEntry");
		
		UPostGameContext_GetLocalPlayerScoreboardEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4ECE0
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetLocalPlayerInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionPostGameLocalPlayerInfo UPostGameContext::GetLocalPlayerInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetLocalPlayerInfo");
		
		UPostGameContext_GetLocalPlayerInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E450
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetHeroLevelSummary
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOrionPostGameLevelUpInfo                   Info                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UPostGameContext::GetHeroLevelSummary(struct FOrionPostGameLevelUpInfo* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetHeroLevelSummary");
		
		UPostGameContext_GetHeroLevelSummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D4D0
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetEnemyTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionTeam UPostGameContext::GetEnemyTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetEnemyTeam");
		
		UPostGameContext_GetEnemyTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D270
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetEarnedXP
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOrionEarnedXPInfo                          Info                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UPostGameContext::GetEarnedXP(struct FOrionEarnedXPInfo* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetEarnedXP");
		
		UPostGameContext_GetEarnedXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D1A0
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetEarnedTimeCurrency
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOrionEarnedTimeCurrencyInfo                Info                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UPostGameContext::GetEarnedTimeCurrency(struct FOrionEarnedTimeCurrencyInfo* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetEarnedTimeCurrency");
		
		UPostGameContext_GetEarnedTimeCurrency_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D100
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetEarnedMatchRewards
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<struct FOrionLootReward>                    MatchRewards                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UPostGameContext::GetEarnedMatchRewards(TArray<struct FOrionLootReward>* MatchRewards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetEarnedMatchRewards");
		
		UPostGameContext_GetEarnedMatchRewards_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MatchRewards != nullptr)
			*MatchRewards = params.MatchRewards;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C2E0
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetCurrentMatchTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPostGameContext::GetCurrentMatchTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetCurrentMatchTime");
		
		UPostGameContext_GetCurrentMatchTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4A480
	 * 		Name   -> Function BlueprintContext.PostGameContext.GetAccountLevelSummary
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOrionPostGameLevelUpInfo                   Info                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UPostGameContext::GetAccountLevelSummary(struct FOrionPostGameLevelUpInfo* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.PostGameContext.GetAccountLevelSummary");
		
		UPostGameContext_GetAccountLevelSummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPostGameContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPostGameContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.PostGameContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.QuestContext.OnSelectedSkinChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UOrionSkinItemDefinition*                    Skin                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestContext::OnSelectedSkinChanged__DelegateSignature(class UOrionSkinItemDefinition* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.QuestContext.OnSelectedSkinChanged__DelegateSignature");
		
		UQuestContext_OnSelectedSkinChanged__DelegateSignature_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53520
	 * 		Name   -> Function BlueprintContext.QuestContext.IsQuestComplete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionMcpQuestItemDefinition*                QuestDef                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuestContext::IsQuestComplete(class UOrionMcpQuestItemDefinition* QuestDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.QuestContext.IsQuestComplete");
		
		UQuestContext_IsQuestComplete_Params params {};
		params.QuestDef = QuestDef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C527B0
	 * 		Name   -> Function BlueprintContext.QuestContext.GetWeeklyQuests
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bOnDeck                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	TArray<class UOrionMcpQuestItem*> UQuestContext::GetWeeklyQuests(bool bOnDeck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.QuestContext.GetWeeklyQuests");
		
		UQuestContext_GetWeeklyQuests_Params params {};
		params.bOnDeck = bOnDeck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52770
	 * 		Name   -> Function BlueprintContext.QuestContext.GetWeeklyQuestRolloverTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FDateTime UQuestContext::GetWeeklyQuestRolloverTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.QuestContext.GetWeeklyQuestRolloverTime");
		
		UQuestContext_GetWeeklyQuestRolloverTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C526B0
	 * 		Name   -> Function BlueprintContext.QuestContext.GetWeeklyQuestReward
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            NumCompleted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnDeck                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UOrionMcpCardPackItemDefinition* UQuestContext::GetWeeklyQuestReward(int32_t NumCompleted, bool bOnDeck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.QuestContext.GetWeeklyQuestReward");
		
		UQuestContext_GetWeeklyQuestReward_Params params {};
		params.NumCompleted = NumCompleted;
		params.bOnDeck = bOnDeck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52680
	 * 		Name   -> Function BlueprintContext.QuestContext.GetWeeklyQuestNumRewardsClaimed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UQuestContext::GetWeeklyQuestNumRewardsClaimed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.QuestContext.GetWeeklyQuestNumRewardsClaimed");
		
		UQuestContext_GetWeeklyQuestNumRewardsClaimed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52650
	 * 		Name   -> Function BlueprintContext.QuestContext.GetWeeklyQuestNumRewards
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UQuestContext::GetWeeklyQuestNumRewards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.QuestContext.GetWeeklyQuestNumRewards");
		
		UQuestContext_GetWeeklyQuestNumRewards_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.QuestContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58420
	 * 		Name   -> Function BlueprintContext.ReticleContext.ShowReticle
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionAbility*                               Ability                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UReticleContext::ShowReticle(class UOrionAbility* Ability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ReticleContext.ShowReticle");
		
		UReticleContext_ShowReticle_Params params {};
		params.Ability = Ability;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C563C0
	 * 		Name   -> Function BlueprintContext.ReticleContext.SetDefaultReticle
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionUserWidget_Reticle*                    NewDefaultReticle                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UReticleContext::SetDefaultReticle(class UOrionUserWidget_Reticle* NewDefaultReticle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ReticleContext.SetDefaultReticle");
		
		UReticleContext_SetDefaultReticle_Params params {};
		params.NewDefaultReticle = NewDefaultReticle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.ReticleContext.OnSuccessfulHit__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UReticleContext::OnSuccessfulHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.ReticleContext.OnSuccessfulHit__DelegateSignature");
		
		UReticleContext_OnSuccessfulHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54270
	 * 		Name   -> Function BlueprintContext.ReticleContext.OnSuccessfulHit
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Instigator                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UReticleContext::OnSuccessfulHit(class AActor* TargetActor, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ReticleContext.OnSuccessfulHit");
		
		UReticleContext_OnSuccessfulHit_Params params {};
		params.TargetActor = TargetActor;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.ReticleContext.OnActivelyTargeting__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               CurrentlyTargeting                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UReticleContext::OnActivelyTargeting__DelegateSignature(bool CurrentlyTargeting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.ReticleContext.OnActivelyTargeting__DelegateSignature");
		
		UReticleContext_OnActivelyTargeting__DelegateSignature_Params params {};
		params.CurrentlyTargeting = CurrentlyTargeting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C537E0
	 * 		Name   -> Function BlueprintContext.ReticleContext.IsUsingUMGReticle
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UReticleContext::IsUsingUMGReticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ReticleContext.IsUsingUMGReticle");
		
		UReticleContext_IsUsingUMGReticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53640
	 * 		Name   -> Function BlueprintContext.ReticleContext.IsReticleHidden
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UReticleContext::IsReticleHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ReticleContext.IsReticleHidden");
		
		UReticleContext_IsReticleHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52E90
	 * 		Name   -> Function BlueprintContext.ReticleContext.IsActivelyTargetingAnyActor
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UReticleContext::IsActivelyTargetingAnyActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ReticleContext.IsActivelyTargetingAnyActor");
		
		UReticleContext_IsActivelyTargetingAnyActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52CC0
	 * 		Name   -> Function BlueprintContext.ReticleContext.HideReticle
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionAbility*                               Ability                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UReticleContext::HideReticle(class UOrionAbility* Ability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ReticleContext.HideReticle");
		
		UReticleContext_HideReticle_Params params {};
		params.Ability = Ability;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51010
	 * 		Name   -> Function BlueprintContext.ReticleContext.GetReticleWidget
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOrionAbility*                               Ability                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOrionUserWidget_Reticle* UReticleContext::GetReticleWidget(class UOrionAbility* Ability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ReticleContext.GetReticleWidget");
		
		UReticleContext_GetReticleWidget_Params params {};
		params.Ability = Ability;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50FD0
	 * 		Name   -> Function BlueprintContext.ReticleContext.GetReticleClass
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UClass* UReticleContext::GetReticleClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ReticleContext.GetReticleClass");
		
		UReticleContext_GetReticleClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E9F0
	 * 		Name   -> Function BlueprintContext.ReticleContext.GetHideCount
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UReticleContext::GetHideCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ReticleContext.GetHideCount");
		
		UReticleContext_GetHideCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47790
	 * 		Name   -> Function BlueprintContext.ReticleContext.AddReticle
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionAbilitySystemComponent*                AbilityComp                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOrionAbility*                               Ability                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      OptionalReticleClass                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UReticleContext::AddReticle(class UOrionAbilitySystemComponent* AbilityComp, class UOrionAbility* Ability, class UClass* OptionalReticleClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ReticleContext.AddReticle");
		
		UReticleContext_AddReticle_Params params {};
		params.AbilityComp = AbilityComp;
		params.Ability = Ability;
		params.OptionalReticleClass = OptionalReticleClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReticleContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReticleContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.ReticleContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C536A0
	 * 		Name   -> Function BlueprintContext.ScoreboardContext.IsSpectatorScoreboard
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UScoreboardContext::IsSpectatorScoreboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ScoreboardContext.IsSpectatorScoreboard");
		
		UScoreboardContext_IsSpectatorScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C516C0
	 * 		Name   -> Function BlueprintContext.ScoreboardContext.GetScoreboardTeamEntry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FOrionScoreboardTeamEntryInfo UScoreboardContext::GetScoreboardTeamEntry(EOrionTeam TeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ScoreboardContext.GetScoreboardTeamEntry");
		
		UScoreboardContext_GetScoreboardTeamEntry_Params params {};
		params.TeamNum = TeamNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C514B0
	 * 		Name   -> Function BlueprintContext.ScoreboardContext.GetScoreboardPlayerEntryFromUIID
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOrionPlayerStateUIID                       PlayerStateUIID                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FOrionScoreboardPlayerEntryInfo UScoreboardContext::GetScoreboardPlayerEntryFromUIID(const struct FOrionPlayerStateUIID& PlayerStateUIID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ScoreboardContext.GetScoreboardPlayerEntryFromUIID");
		
		UScoreboardContext_GetScoreboardPlayerEntryFromUIID_Params params {};
		params.PlayerStateUIID = PlayerStateUIID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51290
	 * 		Name   -> Function BlueprintContext.ScoreboardContext.GetScoreboardPlayerEntry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FOrionScoreboardPlayerEntryInfo UScoreboardContext::GetScoreboardPlayerEntry(EOrionTeam TeamNum, int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ScoreboardContext.GetScoreboardPlayerEntry");
		
		UScoreboardContext_GetScoreboardPlayerEntry_Params params {};
		params.TeamNum = TeamNum;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F490
	 * 		Name   -> Function BlueprintContext.ScoreboardContext.GetMyTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionTeam UScoreboardContext::GetMyTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ScoreboardContext.GetMyTeam");
		
		UScoreboardContext_GetMyTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4EE60
	 * 		Name   -> Function BlueprintContext.ScoreboardContext.GetLocalPlayerUIID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionPlayerStateUIID UScoreboardContext::GetLocalPlayerUIID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ScoreboardContext.GetLocalPlayerUIID");
		
		UScoreboardContext_GetLocalPlayerUIID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4ED80
	 * 		Name   -> Function BlueprintContext.ScoreboardContext.GetLocalPlayerScoreboardEntry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionScoreboardPlayerEntryInfo UScoreboardContext::GetLocalPlayerScoreboardEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ScoreboardContext.GetLocalPlayerScoreboardEntry");
		
		UScoreboardContext_GetLocalPlayerScoreboardEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D500
	 * 		Name   -> Function BlueprintContext.ScoreboardContext.GetEnemyTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionTeam UScoreboardContext::GetEnemyTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ScoreboardContext.GetEnemyTeam");
		
		UScoreboardContext_GetEnemyTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C310
	 * 		Name   -> Function BlueprintContext.ScoreboardContext.GetCurrentMatchTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UScoreboardContext::GetCurrentMatchTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ScoreboardContext.GetCurrentMatchTime");
		
		UScoreboardContext_GetCurrentMatchTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7DA40
	 * 		Name   -> Function BlueprintContext.ScoreboardContext.ForceUpdateAllEntries
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UScoreboardContext::ForceUpdateAllEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.ScoreboardContext.ForceUpdateAllEntries");
		
		UScoreboardContext_ForceUpdateAllEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoreboardContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreboardContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.ScoreboardContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.SpectatorHUDContext.OnSpectatorWatchedHeroChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EOrionTeam                                         HeroTeam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HeroIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpectatorHUDContext::OnSpectatorWatchedHeroChange__DelegateSignature(EOrionTeam HeroTeam, int32_t HeroIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.SpectatorHUDContext.OnSpectatorWatchedHeroChange__DelegateSignature");
		
		USpectatorHUDContext_OnSpectatorWatchedHeroChange__DelegateSignature_Params params {};
		params.HeroTeam = HeroTeam;
		params.HeroIndex = HeroIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.SpectatorHUDContext.OnSpectatorToggleControllerCursor__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void USpectatorHUDContext::OnSpectatorToggleControllerCursor__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.SpectatorHUDContext.OnSpectatorToggleControllerCursor__DelegateSignature");
		
		USpectatorHUDContext_OnSpectatorToggleControllerCursor__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.SpectatorHUDContext.OnSpectatorCameraModeChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		ESpectatorCameraType                               NewCameraMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpectatorHUDContext::OnSpectatorCameraModeChange__DelegateSignature(ESpectatorCameraType NewCameraMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.SpectatorHUDContext.OnSpectatorCameraModeChange__DelegateSignature");
		
		USpectatorHUDContext_OnSpectatorCameraModeChange__DelegateSignature_Params params {};
		params.NewCameraMode = NewCameraMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.SpectatorHUDContext.OnSetHudVisibility__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bMainVisible                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIndicatorsVisible                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USpectatorHUDContext::OnSetHudVisibility__DelegateSignature(bool bMainVisible, bool bIndicatorsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.SpectatorHUDContext.OnSetHudVisibility__DelegateSignature");
		
		USpectatorHUDContext_OnSetHudVisibility__DelegateSignature_Params params {};
		params.bMainVisible = bMainVisible;
		params.bIndicatorsVisible = bIndicatorsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.SpectatorHUDContext.OnPlayerInfoUpdateDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FOrionSpectatorHUDPlayerInfo                NewPlayerInfo                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void USpectatorHUDContext::OnPlayerInfoUpdateDelegate__DelegateSignature(EOrionTeam TeamNum, int32_t PlayerIndex, const struct FOrionSpectatorHUDPlayerInfo& NewPlayerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.SpectatorHUDContext.OnPlayerInfoUpdateDelegate__DelegateSignature");
		
		USpectatorHUDContext_OnPlayerInfoUpdateDelegate__DelegateSignature_Params params {};
		params.TeamNum = TeamNum;
		params.PlayerIndex = PlayerIndex;
		params.NewPlayerInfo = NewPlayerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51C10
	 * 		Name   -> Function BlueprintContext.SpectatorHUDContext.GetSpectatorHUDPlayerInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionTeam                                         Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FOrionSpectatorHUDPlayerInfo USpectatorHUDContext::GetSpectatorHUDPlayerInfo(EOrionTeam Team, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.SpectatorHUDContext.GetSpectatorHUDPlayerInfo");
		
		USpectatorHUDContext_GetSpectatorHUDPlayerInfo_Params params {};
		params.Team = Team;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F4C0
	 * 		Name   -> Function BlueprintContext.SpectatorHUDContext.GetMyTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionTeam USpectatorHUDContext::GetMyTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.SpectatorHUDContext.GetMyTeam");
		
		USpectatorHUDContext_GetMyTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E060
	 * 		Name   -> Function BlueprintContext.SpectatorHUDContext.GetHUDPlayerInfo
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionBaseHUDPlayerInfo USpectatorHUDContext::GetHUDPlayerInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.SpectatorHUDContext.GetHUDPlayerInfo");
		
		USpectatorHUDContext_GetHUDPlayerInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D4A0
	 * 		Name   -> Function BlueprintContext.SpectatorHUDContext.GetEnemyTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOrionTeam USpectatorHUDContext::GetEnemyTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.SpectatorHUDContext.GetEnemyTeam");
		
		USpectatorHUDContext_GetEnemyTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C340
	 * 		Name   -> Function BlueprintContext.SpectatorHUDContext.GetCurrentMatchTime
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	float USpectatorHUDContext::GetCurrentMatchTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.SpectatorHUDContext.GetCurrentMatchTime");
		
		USpectatorHUDContext_GetCurrentMatchTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpectatorHUDContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectatorHUDContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.SpectatorHUDContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58310
	 * 		Name   -> Function BlueprintContext.StoreContext.ShowPlatformStore
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Category                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnClosedDelegate                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::ShowPlatformStore(const class FString& Category, const class FScriptDelegate& OnClosedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.ShowPlatformStore");
		
		UStoreContext_ShowPlatformStore_Params params {};
		params.Category = Category;
		params.OnClosedDelegate = OnClosedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55540
	 * 		Name   -> Function BlueprintContext.StoreContext.ReportNoOffersAvailable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UStoreContext::ReportNoOffersAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.ReportNoOffersAvailable");
		
		UStoreContext_ReportNoOffersAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55520
	 * 		Name   -> Function BlueprintContext.StoreContext.ReportExitRealMoneyStore
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UStoreContext::ReportExitRealMoneyStore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.ReportExitRealMoneyStore");
		
		UStoreContext_ReportExitRealMoneyStore_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55520
	 * 		Name   -> Function BlueprintContext.StoreContext.ReportEnterRealMoneyStore
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UStoreContext::ReportEnterRealMoneyStore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.ReportEnterRealMoneyStore");
		
		UStoreContext_ReportEnterRealMoneyStore_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55060
	 * 		Name   -> Function BlueprintContext.StoreContext.RegisterForEpicPurchasingDisplay
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              DisplayCallback                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              DismissCallback                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::RegisterForEpicPurchasingDisplay(const class FScriptDelegate& DisplayCallback, const class FScriptDelegate& DismissCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.RegisterForEpicPurchasingDisplay");
		
		UStoreContext_RegisterForEpicPurchasingDisplay_Params params {};
		params.DisplayCallback = DisplayCallback;
		params.DismissCallback = DismissCallback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C543F0
	 * 		Name   -> Function BlueprintContext.StoreContext.OpenGiftBox
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GiftBoxID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::OpenGiftBox(const class FString& GiftBoxID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.OpenGiftBox");
		
		UStoreContext_OpenGiftBox_Params params {};
		params.GiftBoxID = GiftBoxID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.StoreContext.OnPlatformStoreClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		bool                                               bPurchased                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::OnPlatformStoreClosed__DelegateSignature(bool bPurchased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.StoreContext.OnPlatformStoreClosed__DelegateSignature");
		
		UStoreContext_OnPlatformStoreClosed__DelegateSignature_Params params {};
		params.bPurchased = bPurchased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.StoreContext.OnOrionCatalogChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UStoreContext::OnOrionCatalogChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.StoreContext.OnOrionCatalogChanged__DelegateSignature");
		
		UStoreContext_OnOrionCatalogChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.StoreContext.OnGiftBoxOpened__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FOrionLootNotification                      LootNotification                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bOpenNext                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::OnGiftBoxOpened__DelegateSignature(const struct FOrionLootNotification& LootNotification, bool bOpenNext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.StoreContext.OnGiftBoxOpened__DelegateSignature");
		
		UStoreContext_OnGiftBoxOpened__DelegateSignature_Params params {};
		params.LootNotification = LootNotification;
		params.bOpenNext = bOpenNext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.StoreContext.OnEpicPurchasingWidgetDisplay__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class UWidget*                                     WebWidget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OfferId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::OnEpicPurchasingWidgetDisplay__DelegateSignature(class UWidget* WebWidget, const class FString& OfferId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.StoreContext.OnEpicPurchasingWidgetDisplay__DelegateSignature");
		
		UStoreContext_OnEpicPurchasingWidgetDisplay__DelegateSignature_Params params {};
		params.WebWidget = WebWidget;
		params.OfferId = OfferId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.StoreContext.OnEpicPurchasingWidgetDismissed__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UStoreContext::OnEpicPurchasingWidgetDismissed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.StoreContext.OnEpicPurchasingWidgetDismissed__DelegateSignature");
		
		UStoreContext_OnEpicPurchasingWidgetDismissed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C530A0
	 * 		Name   -> Function BlueprintContext.StoreContext.IsDailyRewardAvailable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UStoreContext::IsDailyRewardAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.IsDailyRewardAvailable");
		
		UStoreContext_IsDailyRewardAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52FE0
	 * 		Name   -> Function BlueprintContext.StoreContext.IsCatalogDownloadInProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UStoreContext::IsCatalogDownloadInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.IsCatalogDownloadInProgress");
		
		UStoreContext_IsCatalogDownloadInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52230
	 * 		Name   -> Function BlueprintContext.StoreContext.GetTimeUntilNextDailyReward
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimespan UStoreContext::GetTimeUntilNextDailyReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetTimeUntilNextDailyReward");
		
		UStoreContext_GetTimeUntilNextDailyReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52170
	 * 		Name   -> Function BlueprintContext.StoreContext.GetTimeCurrency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UStoreContext::GetTimeCurrency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetTimeCurrency");
		
		UStoreContext_GetTimeCurrency_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51AF0
	 * 		Name   -> Function BlueprintContext.StoreContext.GetSkinOffers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<struct FStoreOfferBP>                       SkinOffers                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowIneligibleOffers                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::GetSkinOffers(TArray<struct FStoreOfferBP>* SkinOffers, bool bShowIneligibleOffers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetSkinOffers");
		
		UStoreContext_GetSkinOffers_Params params {};
		params.bShowIneligibleOffers = bShowIneligibleOffers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkinOffers != nullptr)
			*SkinOffers = params.SkinOffers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50A00
	 * 		Name   -> Function BlueprintContext.StoreContext.GetPurchaseFollowUpAction
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FStorePurchase>                      Purchases                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        FollowUpAction                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UStoreContext::GetPurchaseFollowUpAction(TArray<struct FStorePurchase> Purchases, class FText* FollowUpAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetPurchaseFollowUpAction");
		
		UStoreContext_GetPurchaseFollowUpAction_Params params {};
		params.Purchases = Purchases;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FollowUpAction != nullptr)
			*FollowUpAction = params.FollowUpAction;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F2E0
	 * 		Name   -> Function BlueprintContext.StoreContext.GetMtxOffers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<struct FStoreOfferBP>                       MtxOffers                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowIneligibleOffers                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::GetMtxOffers(TArray<struct FStoreOfferBP>* MtxOffers, bool bShowIneligibleOffers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetMtxOffers");
		
		UStoreContext_GetMtxOffers_Params params {};
		params.bShowIneligibleOffers = bShowIneligibleOffers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MtxOffers != nullptr)
			*MtxOffers = params.MtxOffers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F2B0
	 * 		Name   -> Function BlueprintContext.StoreContext.GetMtxCurrency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UStoreContext::GetMtxCurrency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetMtxCurrency");
		
		UStoreContext_GetMtxCurrency_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E680
	 * 		Name   -> Function BlueprintContext.StoreContext.GetHeroOffers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<struct FStoreOfferBP>                       HeroOffers                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowIneligibleOffers                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::GetHeroOffers(TArray<struct FStoreOfferBP>* HeroOffers, bool bShowIneligibleOffers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetHeroOffers");
		
		UStoreContext_GetHeroOffers_Params params {};
		params.bShowIneligibleOffers = bShowIneligibleOffers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeroOffers != nullptr)
			*HeroOffers = params.HeroOffers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E560
	 * 		Name   -> Function BlueprintContext.StoreContext.GetHeroOffer
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		class FString                                      HeroPersistentName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStoreOfferBP                               HeroOffer                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UStoreContext::GetHeroOffer(const class FString& HeroPersistentName, struct FStoreOfferBP* HeroOffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetHeroOffer");
		
		UStoreContext_GetHeroOffer_Params params {};
		params.HeroPersistentName = HeroPersistentName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeroOffer != nullptr)
			*HeroOffer = params.HeroOffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D710
	 * 		Name   -> Function BlueprintContext.StoreContext.GetFounderOffers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<struct FStoreOfferBP>                       FounderOffers                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::GetFounderOffers(TArray<struct FStoreOfferBP>* FounderOffers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetFounderOffers");
		
		UStoreContext_GetFounderOffers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FounderOffers != nullptr)
			*FounderOffers = params.FounderOffers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D350
	 * 		Name   -> Function BlueprintContext.StoreContext.GetEmoteOffers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<struct FStoreOfferBP>                       EmoteOffers                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowIneligibleOffers                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::GetEmoteOffers(TArray<struct FStoreOfferBP>* EmoteOffers, bool bShowIneligibleOffers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetEmoteOffers");
		
		UStoreContext_GetEmoteOffers_Params params {};
		params.bShowIneligibleOffers = bShowIneligibleOffers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EmoteOffers != nullptr)
			*EmoteOffers = params.EmoteOffers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C9E0
	 * 		Name   -> Function BlueprintContext.StoreContext.GetDeckOffers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<struct FStoreOfferBP>                       DeckOffers                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowIneligibleOffers                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::GetDeckOffers(TArray<struct FStoreOfferBP>* DeckOffers, bool bShowIneligibleOffers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetDeckOffers");
		
		UStoreContext_GetDeckOffers_Params params {};
		params.bShowIneligibleOffers = bShowIneligibleOffers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeckOffers != nullptr)
			*DeckOffers = params.DeckOffers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C4A0
	 * 		Name   -> Function BlueprintContext.StoreContext.GetDailyRewardInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<struct FOrionDailyRewardInfo>               UpcomingRewards                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UStoreContext::GetDailyRewardInfo(TArray<struct FOrionDailyRewardInfo>* UpcomingRewards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetDailyRewardInfo");
		
		UStoreContext_GetDailyRewardInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpcomingRewards != nullptr)
			*UpcomingRewards = params.UpcomingRewards;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C1B0
	 * 		Name   -> Function BlueprintContext.StoreContext.GetCurrencyBalance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionCurrencyType                                 Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UStoreContext::GetCurrencyBalance(EOrionCurrencyType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetCurrencyBalance");
		
		UStoreContext_GetCurrencyBalance_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4BD20
	 * 		Name   -> Function BlueprintContext.StoreContext.GetCardpackOffers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<struct FStoreOfferBP>                       CardpackOffers                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowIneligibleOffers                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::GetCardpackOffers(TArray<struct FStoreOfferBP>* CardpackOffers, bool bShowIneligibleOffers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetCardpackOffers");
		
		UStoreContext_GetCardpackOffers_Params params {};
		params.bShowIneligibleOffers = bShowIneligibleOffers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CardpackOffers != nullptr)
			*CardpackOffers = params.CardpackOffers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4B980
	 * 		Name   -> Function BlueprintContext.StoreContext.GetBundleOffers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<struct FStoreOfferBP>                       BundleOffers                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowIneligibleOffers                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::GetBundleOffers(TArray<struct FStoreOfferBP>* BundleOffers, bool bShowIneligibleOffers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetBundleOffers");
		
		UStoreContext_GetBundleOffers_Params params {};
		params.bShowIneligibleOffers = bShowIneligibleOffers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BundleOffers != nullptr)
			*BundleOffers = params.BundleOffers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4B670
	 * 		Name   -> Function BlueprintContext.StoreContext.GetBoostOffers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<struct FStoreOfferBP>                       BoostOffers                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowIneligibleOffers                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::GetBoostOffers(TArray<struct FStoreOfferBP>* BoostOffers, bool bShowIneligibleOffers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetBoostOffers");
		
		UStoreContext_GetBoostOffers_Params params {};
		params.bShowIneligibleOffers = bShowIneligibleOffers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BoostOffers != nullptr)
			*BoostOffers = params.BoostOffers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4B460
	 * 		Name   -> Function BlueprintContext.StoreContext.GetBannerOffers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<struct FStoreOfferBP>                       BannerOffers                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::GetBannerOffers(TArray<struct FStoreOfferBP>* BannerOffers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.GetBannerOffers");
		
		UStoreContext_GetBannerOffers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BannerOffers != nullptr)
			*BannerOffers = params.BannerOffers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49AF0
	 * 		Name   -> Function BlueprintContext.StoreContext.FlushStoreCatalogCache
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UStoreContext::FlushStoreCatalogCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.FlushStoreCatalogCache");
		
		UStoreContext_FlushStoreCatalogCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49530
	 * 		Name   -> Function BlueprintContext.StoreContext.ExecutePurchaseFollowUpAction
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FStorePurchase>                      Purchases                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::ExecutePurchaseFollowUpAction(TArray<struct FStorePurchase> Purchases)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.ExecutePurchaseFollowUpAction");
		
		UStoreContext_ExecutePurchaseFollowUpAction_Params params {};
		params.Purchases = Purchases;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48B00
	 * 		Name   -> Function BlueprintContext.StoreContext.CheckGiftBoxes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStoreContext::CheckGiftBoxes(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.CheckGiftBoxes");
		
		UStoreContext_CheckGiftBoxes_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48AE0
	 * 		Name   -> Function BlueprintContext.StoreContext.CheckForStuff
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UStoreContext::CheckForStuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.CheckForStuff");
		
		UStoreContext_CheckForStuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48760
	 * 		Name   -> Function BlueprintContext.StoreContext.CancelEpicPurchasingDisplay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UStoreContext::CancelEpicPurchasingDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.CancelEpicPurchasingDisplay");
		
		UStoreContext_CancelEpicPurchasingDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48500
	 * 		Name   -> Function BlueprintContext.StoreContext.CanAfford
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOrionStorePrice                            Price                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UStoreContext::CanAfford(const struct FOrionStorePrice& Price, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.CanAfford");
		
		UStoreContext_CanAfford_Params params {};
		params.Price = Price;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47AE0
	 * 		Name   -> Function BlueprintContext.StoreContext.BP_GetSkinOffer
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UOrionSkinItemDefinition*                    Skin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStoreOfferBP                               SkinOffer                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UStoreContext::BP_GetSkinOffer(class UOrionSkinItemDefinition* Skin, struct FStoreOfferBP* SkinOffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.StoreContext.BP_GetSkinOffer");
		
		UStoreContext_BP_GetSkinOffer_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkinOffer != nullptr)
			*SkinOffer = params.SkinOffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoreContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoreContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.StoreContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58C60
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.ToggleTeamChatTab
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ChatRoomId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::ToggleTeamChatTab(const class FString& ChatRoomId, bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.ToggleTeamChatTab");
		
		UTeamBuilderContext_ToggleTeamChatTab_Params params {};
		params.ChatRoomId = ChatRoomId;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58BC0
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.StopLookingForFight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTeamBuilderContext::StopLookingForFight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.StopLookingForFight");
		
		UTeamBuilderContext_StopLookingForFight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C589B0
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.StartTeam
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EOrionMatchmakingType                              MatchmakingType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FOrionTBPlayerChoices                       LeaderChoices                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCreateTeamComplete                                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::StartTeam(EOrionMatchmakingType MatchmakingType, struct FOrionTBPlayerChoices* LeaderChoices, const class FScriptDelegate& OnCreateTeamComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.StartTeam");
		
		UTeamBuilderContext_StartTeam_Params params {};
		params.MatchmakingType = MatchmakingType;
		params.OnCreateTeamComplete = OnCreateTeamComplete;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeaderChoices != nullptr)
			*LeaderChoices = params.LeaderChoices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C587B0
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.StartSlotSearch
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SlotIdx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FOrionTBPlayerChoices                       InChoices                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnPlayerFound                                              (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::StartSlotSearch(int32_t SlotIdx, struct FOrionTBPlayerChoices* InChoices, const class FScriptDelegate& OnPlayerFound, const class FScriptDelegate& OnFailure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.StartSlotSearch");
		
		UTeamBuilderContext_StartSlotSearch_Params params {};
		params.SlotIdx = SlotIdx;
		params.OnPlayerFound = OnPlayerFound;
		params.OnFailure = OnFailure;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InChoices != nullptr)
			*InChoices = params.InChoices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C584A0
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.SimpleQuickMatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      HeroName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionMatchmakingType                              GameType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnResult                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnRoleDetermined                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnInvite                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnTeamJoined                                               (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::SimpleQuickMatch(const class FString& HeroName, EOrionMatchmakingType GameType, const class FScriptDelegate& OnResult, const class FScriptDelegate& OnRoleDetermined, const class FScriptDelegate& OnInvite, const class FScriptDelegate& OnTeamJoined)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.SimpleQuickMatch");
		
		UTeamBuilderContext_SimpleQuickMatch_Params params {};
		params.HeroName = HeroName;
		params.GameType = GameType;
		params.OnResult = OnResult;
		params.OnRoleDetermined = OnRoleDetermined;
		params.OnInvite = OnInvite;
		params.OnTeamJoined = OnTeamJoined;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C57A80
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.SetSelectedDeck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionMcpDeckItem*                           Deck                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::SetSelectedDeck(class UOrionMcpDeckItem* Deck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.SetSelectedDeck");
		
		UTeamBuilderContext_SetSelectedDeck_Params params {};
		params.Deck = Deck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55780
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.RespondToQuickMatchInvite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAccept                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::RespondToQuickMatchInvite(bool bAccept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.RespondToQuickMatchInvite");
		
		UTeamBuilderContext_RespondToQuickMatchInvite_Params params {};
		params.bAccept = bAccept;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55400
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.RejectSocialPartyTeamInvite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTeamBuilderContext::RejectSocialPartyTeamInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.RejectSocialPartyTeamInvite");
		
		UTeamBuilderContext_RejectSocialPartyTeamInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54C30
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.QuickMatch
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FOrionTBPlayerChoices                       Choices                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EOrionMatchmakingType                              MatchmakingType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnResult                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnRoleDetermined                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnInvite                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnTeamJoined                                               (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::QuickMatch(struct FOrionTBPlayerChoices* Choices, EOrionMatchmakingType MatchmakingType, const class FScriptDelegate& OnResult, const class FScriptDelegate& OnRoleDetermined, const class FScriptDelegate& OnInvite, const class FScriptDelegate& OnTeamJoined)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.QuickMatch");
		
		UTeamBuilderContext_QuickMatch_Params params {};
		params.MatchmakingType = MatchmakingType;
		params.OnResult = OnResult;
		params.OnRoleDetermined = OnRoleDetermined;
		params.OnInvite = OnInvite;
		params.OnTeamJoined = OnTeamJoined;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Choices != nullptr)
			*Choices = params.Choices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54A20
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.QueueSolo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EOrionMatchmakingType                              MatchmakingType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FOrionTBPlayerChoices                       InChoices                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnInvite                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTeamBuilderContext::QueueSolo(EOrionMatchmakingType MatchmakingType, struct FOrionTBPlayerChoices* InChoices, const class FScriptDelegate& Callback, const class FScriptDelegate& OnInvite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.QueueSolo");
		
		UTeamBuilderContext_QueueSolo_Params params {};
		params.MatchmakingType = MatchmakingType;
		params.Callback = Callback;
		params.OnInvite = OnInvite;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InChoices != nullptr)
			*InChoices = params.InChoices;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamPartyLeft__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UTeamBuilderContext::OnTeamPartyLeft__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamPartyLeft__DelegateSignature");
		
		UTeamBuilderContext_OnTeamPartyLeft__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamMemberUpdated__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FOrionTBMemberInfo                          NewMemberInfo                                              (Parm, NativeAccessSpecifierPublic)
	 * 		class UOrionTeamBuilderPartyMember*                NewPartyMemberData                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnTeamMemberUpdated__DelegateSignature(const struct FOrionTBMemberInfo& NewMemberInfo, class UOrionTeamBuilderPartyMember* NewPartyMemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamMemberUpdated__DelegateSignature");
		
		UTeamBuilderContext_OnTeamMemberUpdated__DelegateSignature_Params params {};
		params.NewMemberInfo = NewMemberInfo;
		params.NewPartyMemberData = NewPartyMemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamMemberLeft__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            SlotIdx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnTeamMemberLeft__DelegateSignature(int32_t SlotIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamMemberLeft__DelegateSignature");
		
		UTeamBuilderContext_OnTeamMemberLeft__DelegateSignature_Params params {};
		params.SlotIdx = SlotIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamMemberJoined__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FOrionTBMemberInfo                          MemberInfo                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		class UOrionTeamBuilderPartyMember*                PartyMemberData                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnTeamMemberJoined__DelegateSignature(const struct FOrionTBMemberInfo& MemberInfo, class UOrionTeamBuilderPartyMember* PartyMemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamMemberJoined__DelegateSignature");
		
		UTeamBuilderContext_OnTeamMemberJoined__DelegateSignature_Params params {};
		params.MemberInfo = MemberInfo;
		params.PartyMemberData = PartyMemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamBuilderProgressChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		ETeamBuilderProgression                            NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnTeamBuilderProgressChanged__DelegateSignature(ETeamBuilderProgression NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamBuilderProgressChanged__DelegateSignature");
		
		UTeamBuilderContext_OnTeamBuilderProgressChanged__DelegateSignature_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C541E0
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.OnSocialJoinTeamCallback
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnSocialJoinTeamCallback(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.OnSocialJoinTeamCallback");
		
		UTeamBuilderContext_OnSocialJoinTeamCallback_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnSlotUnreserved__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            SlotIdx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnSlotUnreserved__DelegateSignature(int32_t SlotIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnSlotUnreserved__DelegateSignature");
		
		UTeamBuilderContext_OnSlotUnreserved__DelegateSignature_Params params {};
		params.SlotIdx = SlotIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnSlotSearchResultExpired__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UTeamBuilderContext::OnSlotSearchResultExpired__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnSlotSearchResultExpired__DelegateSignature");
		
		UTeamBuilderContext_OnSlotSearchResultExpired__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnSlotSearchFailure__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		ETBSlotCompleteResult                              Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnSlotSearchFailure__DelegateSignature(ETBSlotCompleteResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnSlotSearchFailure__DelegateSignature");
		
		UTeamBuilderContext_OnSlotSearchFailure__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnSlotReserved__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            SlotIdx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnSlotReserved__DelegateSignature(int32_t SlotIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnSlotReserved__DelegateSignature");
		
		UTeamBuilderContext_OnSlotReserved__DelegateSignature_Params params {};
		params.SlotIdx = SlotIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnReceivedInviteAsSocialPartyMember__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UTeamBuilderContext::OnReceivedInviteAsSocialPartyMember__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnReceivedInviteAsSocialPartyMember__DelegateSignature");
		
		UTeamBuilderContext_OnReceivedInviteAsSocialPartyMember__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnPreGameReadyChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            NumReady                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnPreGameReadyChanged__DelegateSignature(int32_t NumReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnPreGameReadyChanged__DelegateSignature");
		
		UTeamBuilderContext_OnPreGameReadyChanged__DelegateSignature_Params params {};
		params.NumReady = NumReady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnPlayerInviteFailure__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class FText                                        Message                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnPlayerInviteFailure__DelegateSignature(const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnPlayerInviteFailure__DelegateSignature");
		
		UTeamBuilderContext_OnPlayerInviteFailure__DelegateSignature_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnPlayerInviteExpired__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UTeamBuilderContext::OnPlayerInviteExpired__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnPlayerInviteExpired__DelegateSignature");
		
		UTeamBuilderContext_OnPlayerInviteExpired__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnPlayerFound__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		struct FOrionTBMemberInfo                          MemberInfo                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnPlayerFound__DelegateSignature(const struct FOrionTBMemberInfo& MemberInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnPlayerFound__DelegateSignature");
		
		UTeamBuilderContext_OnPlayerFound__DelegateSignature_Params params {};
		params.MemberInfo = MemberInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnPendingMemberUpdated__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FOrionTBMemberInfo                          PendingMember                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnPendingMemberUpdated__DelegateSignature(const struct FOrionTBMemberInfo& PendingMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnPendingMemberUpdated__DelegateSignature");
		
		UTeamBuilderContext_OnPendingMemberUpdated__DelegateSignature_Params params {};
		params.PendingMember = PendingMember;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnPendingMemberLeft__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            SlotIdx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnPendingMemberLeft__DelegateSignature(int32_t SlotIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnPendingMemberLeft__DelegateSignature");
		
		UTeamBuilderContext_OnPendingMemberLeft__DelegateSignature_Params params {};
		params.SlotIdx = SlotIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnPendingMemberJoined__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FOrionTBMemberInfo                          PendingMember                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnPendingMemberJoined__DelegateSignature(const struct FOrionTBMemberInfo& PendingMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnPendingMemberJoined__DelegateSignature");
		
		UTeamBuilderContext_OnPendingMemberJoined__DelegateSignature_Params params {};
		params.PendingMember = PendingMember;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnLobbyReadyChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               IsReady                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnLobbyReadyChanged__DelegateSignature(bool IsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnLobbyReadyChanged__DelegateSignature");
		
		UTeamBuilderContext_OnLobbyReadyChanged__DelegateSignature_Params params {};
		params.IsReady = IsReady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnLobbyPlayerFound__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FOrionTBMemberInfo                          Player                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnLobbyPlayerFound__DelegateSignature(const struct FOrionTBMemberInfo& Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnLobbyPlayerFound__DelegateSignature");
		
		UTeamBuilderContext_OnLobbyPlayerFound__DelegateSignature_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnLobbyPlayerFailed__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnLobbyPlayerFailed__DelegateSignature(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnLobbyPlayerFailed__DelegateSignature");
		
		UTeamBuilderContext_OnLobbyPlayerFailed__DelegateSignature_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnJoinSocialPartyTeamComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnJoinSocialPartyTeamComplete__DelegateSignature(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnJoinSocialPartyTeamComplete__DelegateSignature");
		
		UTeamBuilderContext_OnJoinSocialPartyTeamComplete__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnInviteExpired__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UTeamBuilderContext::OnInviteExpired__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnInviteExpired__DelegateSignature");
		
		UTeamBuilderContext_OnInviteExpired__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnFindEnemyTeamResult__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FText                                        Message                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnFindEnemyTeamResult__DelegateSignature(bool bResult, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnFindEnemyTeamResult__DelegateSignature");
		
		UTeamBuilderContext_OnFindEnemyTeamResult__DelegateSignature_Params params {};
		params.bResult = bResult;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnCreateTeamComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::OnCreateTeamComplete__DelegateSignature(bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnCreateTeamComplete__DelegateSignature");
		
		UTeamBuilderContext_OnCreateTeamComplete__DelegateSignature_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.TeamBuilderContext.OnBecameQuitter__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UTeamBuilderContext::OnBecameQuitter__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.TeamBuilderContext.OnBecameQuitter__DelegateSignature");
		
		UTeamBuilderContext_OnBecameQuitter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54190
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.NumTeamMembers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UTeamBuilderContext::NumTeamMembers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.NumTeamMembers");
		
		UTeamBuilderContext_NumTeamMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53730
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.IsTeamReady
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTeamBuilderContext::IsTeamReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.IsTeamReady");
		
		UTeamBuilderContext_IsTeamReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53700
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.IsTeamLeader
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTeamBuilderContext::IsTeamLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.IsTeamLeader");
		
		UTeamBuilderContext_IsTeamLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52FB0
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.IsCaptain
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTeamBuilderContext::IsCaptain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.IsCaptain");
		
		UTeamBuilderContext_IsCaptain_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52B50
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.HasTeamMember
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTeamBuilderContext::HasTeamMember(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.HasTeamMember");
		
		UTeamBuilderContext_HasTeamMember_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C52130
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.GetTeamWaitTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimespan UTeamBuilderContext::GetTeamWaitTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.GetTeamWaitTime");
		
		UTeamBuilderContext_GetTeamWaitTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C51EF0
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.GetTeamMember
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FOrionTBMemberInfo                          Info                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UOrionTeamBuilderPartyMember* UTeamBuilderContext::GetTeamMember(struct FOrionTBMemberInfo* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.GetTeamMember");
		
		UTeamBuilderContext_GetTeamMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50340
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.GetPlayerWaitTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimespan UTeamBuilderContext::GetPlayerWaitTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.GetPlayerWaitTime");
		
		UTeamBuilderContext_GetPlayerWaitTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F4F0
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.GetMyTeamState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UOrionTeamBuilderPartyMember* UTeamBuilderContext::GetMyTeamState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.GetMyTeamState");
		
		UTeamBuilderContext_GetMyTeamState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4F160
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.GetMaxTeamSize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UTeamBuilderContext::GetMaxTeamSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.GetMaxTeamSize");
		
		UTeamBuilderContext_GetMaxTeamSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49700
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.FightAnotherTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::FightAnotherTeam(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.FightAnotherTeam");
		
		UTeamBuilderContext_FightAnotherTeam_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49260
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.DeclineInvite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTeamBuilderContext::DeclineInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.DeclineInvite");
		
		UTeamBuilderContext_DeclineInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48D10
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.ClearAllDelegates
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTeamBuilderContext::ClearAllDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.ClearAllDelegates");
		
		UTeamBuilderContext_ClearAllDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C488B0
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.CancelSlotSearch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SlotIdx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::CancelSlotSearch(int32_t SlotIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.CancelSlotSearch");
		
		UTeamBuilderContext_CancelSlotSearch_Params params {};
		params.SlotIdx = SlotIdx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48890
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.CancelQuickMatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTeamBuilderContext::CancelQuickMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.CancelQuickMatch");
		
		UTeamBuilderContext_CancelQuickMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48860
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.CancelQueue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTeamBuilderContext::CancelQueue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.CancelQueue");
		
		UTeamBuilderContext_CancelQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47DC0
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.BuildCurrentTeamState
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FOrionTBState                               CurrentState                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::BuildCurrentTeamState(struct FOrionTBState* CurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.BuildCurrentTeamState");
		
		UTeamBuilderContext_BuildCurrentTeamState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentState != nullptr)
			*CurrentState = params.CurrentState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47BF0
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.BecomeQuitter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::BecomeQuitter(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.BecomeQuitter");
		
		UTeamBuilderContext_BecomeQuitter_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C46F20
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.AcceptSocialPartyTeamInvite
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FOrionTBPlayerChoices                       InChoices                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::AcceptSocialPartyTeamInvite(struct FOrionTBPlayerChoices* InChoices, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.AcceptSocialPartyTeamInvite");
		
		UTeamBuilderContext_AcceptSocialPartyTeamInvite_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InChoices != nullptr)
			*InChoices = params.InChoices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C46DA0
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.AcceptSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SlotIdx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAccept                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnInviteExpired                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTeamBuilderContext::AcceptSlot(int32_t SlotIdx, bool bAccept, const class FScriptDelegate& OnInviteExpired, const class FScriptDelegate& OnFailure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.AcceptSlot");
		
		UTeamBuilderContext_AcceptSlot_Params params {};
		params.SlotIdx = SlotIdx;
		params.bAccept = bAccept;
		params.OnInviteExpired = OnInviteExpired;
		params.OnFailure = OnFailure;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C46D70
	 * 		Name   -> Function BlueprintContext.TeamBuilderContext.AcceptInvite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTeamBuilderContext::AcceptInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderContext.AcceptInvite");
		
		UTeamBuilderContext_AcceptInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeamBuilderContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeamBuilderContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.TeamBuilderContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C495E0
	 * 		Name   -> Function BlueprintContext.TeamCommsContext.ExecuteTeamCommData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPCTeamCommunicationsData*                   TeamCommData                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeamCommsContext::ExecuteTeamCommData(class UPCTeamCommunicationsData* TeamCommData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamCommsContext.ExecuteTeamCommData");
		
		UTeamCommsContext_ExecuteTeamCommData_Params params {};
		params.TeamCommData = TeamCommData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeamCommsContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeamCommsContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.TeamCommsContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4D600
	 * 		Name   -> Function BlueprintContext.TooltipContext.GetField
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        InFieldName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        FieldText                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UTooltipContext::GetField(const class FName& InFieldName, class FText* FieldText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TooltipContext.GetField");
		
		UTooltipContext_GetField_Params params {};
		params.InFieldName = InFieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FieldText != nullptr)
			*FieldText = params.FieldText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C7C0
	 * 		Name   -> Function BlueprintContext.TooltipContext.GetDeckDescription
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EDeckTooltipColumns                                InType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeckCategoryDesc                           Description                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UTooltipContext::GetDeckDescription(EDeckTooltipColumns InType, struct FDeckCategoryDesc* Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TooltipContext.GetDeckDescription");
		
		UTooltipContext_GetDeckDescription_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Description != nullptr)
			*Description = params.Description;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4BBB0
	 * 		Name   -> Function BlueprintContext.TooltipContext.GetCardEffectSummary
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionCardEffectSummary UTooltipContext::GetCardEffectSummary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TooltipContext.GetCardEffectSummary");
		
		UTooltipContext_GetCardEffectSummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C481E0
	 * 		Name   -> Function BlueprintContext.TooltipContext.CalculateHeroTooltip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionHeroData*                              InHeroData                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrionAbilityBinding                               InAbilityKeyBind                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InAbilityLevel                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UOrionCardData*>                      InCardsInHand                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTooltipContext::CalculateHeroTooltip(class UOrionHeroData* InHeroData, EOrionAbilityBinding InAbilityKeyBind, int32_t InAbilityLevel, TArray<class UOrionCardData*> InCardsInHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TooltipContext.CalculateHeroTooltip");
		
		UTooltipContext_CalculateHeroTooltip_Params params {};
		params.InHeroData = InHeroData;
		params.InAbilityKeyBind = InAbilityKeyBind;
		params.InAbilityLevel = InAbilityLevel;
		params.InCardsInHand = InCardsInHand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48160
	 * 		Name   -> Function BlueprintContext.TooltipContext.CalculateDeckTooltip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionMcpDeckItem*                           InDeckItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTooltipContext::CalculateDeckTooltip(class UOrionMcpDeckItem* InDeckItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TooltipContext.CalculateDeckTooltip");
		
		UTooltipContext_CalculateDeckTooltip_Params params {};
		params.InDeckItem = InDeckItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C48040
	 * 		Name   -> Function BlueprintContext.TooltipContext.CalculateCardTooltip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionCardData*                              Card                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UOrionCardData*>                      UpgradeCards                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UTooltipContext::CalculateCardTooltip(class UOrionCardData* Card, TArray<class UOrionCardData*> UpgradeCards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TooltipContext.CalculateCardTooltip");
		
		UTooltipContext_CalculateCardTooltip_Params params {};
		params.Card = Card;
		params.UpgradeCards = UpgradeCards;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTooltipContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTooltipContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.TooltipContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C58BE0
	 * 		Name   -> Function BlueprintContext.UserFeedbackContext.TakeScreenshotAndInitializeFeedback
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EFeedbackType                                      FeedbackType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserFeedbackContext::TakeScreenshotAndInitializeFeedback(EFeedbackType FeedbackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.UserFeedbackContext.TakeScreenshotAndInitializeFeedback");
		
		UUserFeedbackContext_TakeScreenshotAndInitializeFeedback_Params params {};
		params.FeedbackType = FeedbackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55C10
	 * 		Name   -> Function BlueprintContext.UserFeedbackContext.SendFeedback
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Body                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUserFeedbackContext::SendFeedback(const class FText& Body)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.UserFeedbackContext.SendFeedback");
		
		UUserFeedbackContext_SendFeedback_Params params {};
		params.Body = Body;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C49A50
	 * 		Name   -> Function BlueprintContext.UserFeedbackContext.FinishTakeScreenshotAndInitializeFeedback
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUserFeedbackContext::FinishTakeScreenshotAndInitializeFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.UserFeedbackContext.FinishTakeScreenshotAndInitializeFeedback");
		
		UUserFeedbackContext_FinishTakeScreenshotAndInitializeFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUserFeedbackContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserFeedbackContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.UserFeedbackContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C53190
	 * 		Name   -> Function BlueprintContext.VideoContext.IsFullscreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UVideoContext::IsFullscreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.VideoContext.IsFullscreen");
		
		UVideoContext_IsFullscreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVideoContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVideoContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.VideoContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction BlueprintContext.HeroAttributeListEntry.OnUpdateAttributeVisuals__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UHeroAttributeListEntry::OnUpdateAttributeVisuals__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.HeroAttributeListEntry.OnUpdateAttributeVisuals__DelegateSignature");
		
		UHeroAttributeListEntry_OnUpdateAttributeVisuals__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeroAttributeListEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroAttributeListEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.HeroAttributeListEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatchmakingRegion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchmakingRegion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.MatchmakingRegion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C50B50
	 * 		Name   -> Function BlueprintContext.OrionCardDeckEntry.GetQuantity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UOrionCardDeckEntry::GetQuantity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.OrionCardDeckEntry.GetQuantity");
		
		UOrionCardDeckEntry_GetQuantity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4BC40
	 * 		Name   -> Function BlueprintContext.OrionCardDeckEntry.GetCardItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UOrionMcpCardItem* UOrionCardDeckEntry::GetCardItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.OrionCardDeckEntry.GetCardItem");
		
		UOrionCardDeckEntry_GetCardItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionCardDeckEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionCardDeckEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.OrionCardDeckEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C55960
	 * 		Name   -> Function BlueprintContext.TeamBuilderFNLib.RoleToText
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EOrionRole                                         InRole                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UTeamBuilderFNLib::STATIC_RoleToText(EOrionRole InRole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderFNLib.RoleToText");
		
		UTeamBuilderFNLib_RoleToText_Params params {};
		params.InRole = InRole;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C546A0
	 * 		Name   -> Function BlueprintContext.TeamBuilderFNLib.PositionToText
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EOrionPosition                                     InPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UTeamBuilderFNLib::STATIC_PositionToText(EOrionPosition InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderFNLib.PositionToText");
		
		UTeamBuilderFNLib_PositionToText_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4E2D0
	 * 		Name   -> Function BlueprintContext.TeamBuilderFNLib.GetHeroDataFromHeroName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      HeroName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOrionHeroData* UTeamBuilderFNLib::STATIC_GetHeroDataFromHeroName(const class FString& HeroName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.TeamBuilderFNLib.GetHeroDataFromHeroName");
		
		UTeamBuilderFNLib_GetHeroDataFromHeroName_Params params {};
		params.HeroName = HeroName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeamBuilderFNLib.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeamBuilderFNLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.TeamBuilderFNLib");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C4C010
	 * 		Name   -> Function BlueprintContext.BlueprintContextLibrary.GetContext
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBlueprintContextBase* UBlueprintContextLibrary::STATIC_GetContext(class UObject* ContextObject, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.BlueprintContextLibrary.GetContext");
		
		UBlueprintContextLibrary_GetContext_Params params {};
		params.ContextObject = ContextObject;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlueprintContextLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlueprintContextLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.BlueprintContextLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54330
	 * 		Name   -> Function BlueprintContext.OrionAsyncAction_OpenCardPack.OpenCardPack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInventoryContext*                           LibraryContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOrionMcpCardPackItem*                       CardPackToOpen                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOrionAsyncAction_OpenCardPack* UOrionAsyncAction_OpenCardPack::STATIC_OpenCardPack(class UInventoryContext* LibraryContext, class UOrionMcpCardPackItem* CardPackToOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.OrionAsyncAction_OpenCardPack.OpenCardPack");
		
		UOrionAsyncAction_OpenCardPack_OpenCardPack_Params params {};
		params.LibraryContext = LibraryContext;
		params.CardPackToOpen = CardPackToOpen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionAsyncAction_OpenCardPack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionAsyncAction_OpenCardPack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.OrionAsyncAction_OpenCardPack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C54F00
	 * 		Name   -> Function BlueprintContext.OrionAsyncAction_RefreshCatalog.RefreshCatalog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UStoreContext*                               InStoreContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOrionAsyncAction_RefreshCatalog* UOrionAsyncAction_RefreshCatalog::STATIC_RefreshCatalog(class UStoreContext* InStoreContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintContext.OrionAsyncAction_RefreshCatalog.RefreshCatalog");
		
		UOrionAsyncAction_RefreshCatalog_RefreshCatalog_Params params {};
		params.InStoreContext = InStoreContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionAsyncAction_RefreshCatalog.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionAsyncAction_RefreshCatalog::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintContext.OrionAsyncAction_RefreshCatalog");
		return ptr;
	}

}


