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
	 * 		Name   -> Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.SetPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorTeamInfoHealthBar_C::SetPlayer(EOrionTeam Team, int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.SetPlayer");
		
		USpectatorTeamInfoHealthBar_C_SetPlayer_Params params {};
		params.Team = Team;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.Update Hero Health and Energy
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorTeamInfoHealthBar_C::UpdateHeroHealthandEnergy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.Update Hero Health and Energy");
		
		USpectatorTeamInfoHealthBar_C_UpdateHeroHealthandEnergy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.Internal Get Team UI Info
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FOrionSpectatorHUDPlayerInfo                ReturnInfo                                                 (Parm, OutParm)
	 */
	void USpectatorTeamInfoHealthBar_C::InternalGetTeamUIInfo(struct FOrionSpectatorHUDPlayerInfo* ReturnInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.Internal Get Team UI Info");
		
		USpectatorTeamInfoHealthBar_C_InternalGetTeamUIInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnInfo != nullptr)
			*ReturnInfo = params.ReturnInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.Update Hero Level
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorTeamInfoHealthBar_C::UpdateHeroLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.Update Hero Level");
		
		USpectatorTeamInfoHealthBar_C_UpdateHeroLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USpectatorTeamInfoHealthBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.Construct");
		
		USpectatorTeamInfoHealthBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.ExecuteUbergraph_SpectatorTeamInfoHealthBar
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorTeamInfoHealthBar_C::ExecuteUbergraph_SpectatorTeamInfoHealthBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.ExecuteUbergraph_SpectatorTeamInfoHealthBar");
		
		USpectatorTeamInfoHealthBar_C_ExecuteUbergraph_SpectatorTeamInfoHealthBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpectatorTeamInfoHealthBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectatorTeamInfoHealthBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C");
		return ptr;
	}

}


