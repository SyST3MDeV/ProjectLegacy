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
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Glyph.Glyph_C.SetFrameNumber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            FrameNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGlyph_C::SetFrameNumber(int32_t FrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Glyph.Glyph_C.SetFrameNumber");
		
		AGlyph_C_SetFrameNumber_Params params {};
		params.FrameNumber = FrameNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Glyph.Glyph_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGlyph_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Glyph.Glyph_C.UserConstructionScript");
		
		AGlyph_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Glyph.Glyph_C.OnLerpComplete_C65F2D2D47A55E6FD9631593BF052676
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTimerHandle                                LerpTimerHandle                                            (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void AGlyph_C::OnLerpComplete_C65F2D2D47A55E6FD9631593BF052676(float Value, const struct FTimerHandle& LerpTimerHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Glyph.Glyph_C.OnLerpComplete_C65F2D2D47A55E6FD9631593BF052676");
		
		AGlyph_C_OnLerpComplete_C65F2D2D47A55E6FD9631593BF052676_Params params {};
		params.Value = Value;
		params.LerpTimerHandle = LerpTimerHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Glyph.Glyph_C.OnValueUpdated_C65F2D2D47A55E6FD9631593BF052676
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTimerHandle                                LerpTimerHandle                                            (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void AGlyph_C::OnValueUpdated_C65F2D2D47A55E6FD9631593BF052676(float Value, const struct FTimerHandle& LerpTimerHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Glyph.Glyph_C.OnValueUpdated_C65F2D2D47A55E6FD9631593BF052676");
		
		AGlyph_C_OnValueUpdated_C65F2D2D47A55E6FD9631593BF052676_Params params {};
		params.Value = Value;
		params.LerpTimerHandle = LerpTimerHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Glyph.Glyph_C.OnLerpComplete_1EA0F566445C17FA5F6F2C8BDF8FDF13
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTimerHandle                                LerpTimerHandle                                            (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void AGlyph_C::OnLerpComplete_1EA0F566445C17FA5F6F2C8BDF8FDF13(float Value, const struct FTimerHandle& LerpTimerHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Glyph.Glyph_C.OnLerpComplete_1EA0F566445C17FA5F6F2C8BDF8FDF13");
		
		AGlyph_C_OnLerpComplete_1EA0F566445C17FA5F6F2C8BDF8FDF13_Params params {};
		params.Value = Value;
		params.LerpTimerHandle = LerpTimerHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Glyph.Glyph_C.OnValueUpdated_1EA0F566445C17FA5F6F2C8BDF8FDF13
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTimerHandle                                LerpTimerHandle                                            (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void AGlyph_C::OnValueUpdated_1EA0F566445C17FA5F6F2C8BDF8FDF13(float Value, const struct FTimerHandle& LerpTimerHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Glyph.Glyph_C.OnValueUpdated_1EA0F566445C17FA5F6F2C8BDF8FDF13");
		
		AGlyph_C_OnValueUpdated_1EA0F566445C17FA5F6F2C8BDF8FDF13_Params params {};
		params.Value = Value;
		params.LerpTimerHandle = LerpTimerHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Glyph.Glyph_C.OnActivationChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActivated                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGlyph_C::OnActivationChanged(bool bActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Glyph.Glyph_C.OnActivationChanged");
		
		AGlyph_C_OnActivationChanged_Params params {};
		params.bActivated = bActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Glyph.Glyph_C.ExecuteUbergraph_Glyph
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGlyph_C::ExecuteUbergraph_Glyph(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Glyph.Glyph_C.ExecuteUbergraph_Glyph");
		
		AGlyph_C_ExecuteUbergraph_Glyph_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGlyph_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGlyph_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Glyph.Glyph_C");
		return ptr;
	}

}


