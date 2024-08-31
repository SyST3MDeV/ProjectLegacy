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
	 * 		Name   -> Function BP_TerminusGate.BP_TerminusGate_C.HandleLightTeamColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                TeamColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TerminusGate_C::HandleLightTeamColor(struct FLinearColor* TeamColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TerminusGate.BP_TerminusGate_C.HandleLightTeamColor");
		
		ABP_TerminusGate_C_HandleLightTeamColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamColor != nullptr)
			*TeamColor = params.TeamColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_TerminusGate.BP_TerminusGate_C.LightArrayMaker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TerminusGate_C::LightArrayMaker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TerminusGate.BP_TerminusGate_C.LightArrayMaker");
		
		ABP_TerminusGate_C_LightArrayMaker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_TerminusGate.BP_TerminusGate_C.HandleLightBrightness
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULightComponent*                             Light                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Fader                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TerminusGate_C::HandleLightBrightness(class ULightComponent* Light, float Fader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TerminusGate.BP_TerminusGate_C.HandleLightBrightness");
		
		ABP_TerminusGate_C_HandleLightBrightness_Params params {};
		params.Light = Light;
		params.Fader = Fader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_TerminusGate.BP_TerminusGate_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TerminusGate_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TerminusGate.BP_TerminusGate_C.UserConstructionScript");
		
		ABP_TerminusGate_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_TerminusGate.BP_TerminusGate_C.Timeline_0_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TerminusGate_C::Timeline_0_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TerminusGate.BP_TerminusGate_C.Timeline_0_0__FinishedFunc");
		
		ABP_TerminusGate_C_Timeline_0_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_TerminusGate.BP_TerminusGate_C.Timeline_0_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TerminusGate_C::Timeline_0_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TerminusGate.BP_TerminusGate_C.Timeline_0_0__UpdateFunc");
		
		ABP_TerminusGate_C_Timeline_0_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_TerminusGate.BP_TerminusGate_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_TerminusGate_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TerminusGate.BP_TerminusGate_C.ReceiveBeginPlay");
		
		ABP_TerminusGate_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_TerminusGate.BP_TerminusGate_C.OscillateBack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TerminusGate_C::OscillateBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TerminusGate.BP_TerminusGate_C.OscillateBack");
		
		ABP_TerminusGate_C_OscillateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_TerminusGate.BP_TerminusGate_C.HeroHasRecalled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         HeroTeam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TerminusGate_C::HeroHasRecalled(EOrionTeam HeroTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TerminusGate.BP_TerminusGate_C.HeroHasRecalled");
		
		ABP_TerminusGate_C_HeroHasRecalled_Params params {};
		params.HeroTeam = HeroTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_TerminusGate.BP_TerminusGate_C.FlareKeyhole
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TerminusGate_C::FlareKeyhole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TerminusGate.BP_TerminusGate_C.FlareKeyhole");
		
		ABP_TerminusGate_C_FlareKeyhole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_TerminusGate.BP_TerminusGate_C.WarmupUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TerminusGate_C::WarmupUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TerminusGate.BP_TerminusGate_C.WarmupUpdate");
		
		ABP_TerminusGate_C_WarmupUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_TerminusGate.BP_TerminusGate_C.HandleTeamColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TerminusGate_C::HandleTeamColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TerminusGate.BP_TerminusGate_C.HandleTeamColors");
		
		ABP_TerminusGate_C_HandleTeamColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_TerminusGate.BP_TerminusGate_C.ExecuteUbergraph_BP_TerminusGate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TerminusGate_C::ExecuteUbergraph_BP_TerminusGate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TerminusGate.BP_TerminusGate_C.ExecuteUbergraph_BP_TerminusGate");
		
		ABP_TerminusGate_C_ExecuteUbergraph_BP_TerminusGate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TerminusGate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TerminusGate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TerminusGate.BP_TerminusGate_C");
		return ptr;
	}

}


