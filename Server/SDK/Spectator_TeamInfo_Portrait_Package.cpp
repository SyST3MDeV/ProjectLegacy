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
	 * 		Name   -> Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.SetPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectator_TeamInfo_Portrait_C::SetPlayer(EOrionTeam Team, int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.SetPlayer");
		
		USpectator_TeamInfo_Portrait_C_SetPlayer_Params params {};
		params.Team = Team;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.On_Portrait_MouseButtonDown_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply USpectator_TeamInfo_Portrait_C::On_Portrait_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.On_Portrait_MouseButtonDown_1");
		
		USpectator_TeamInfo_Portrait_C_On_Portrait_MouseButtonDown_1_Params params {};
		params.MyGeometry = MyGeometry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MouseEvent != nullptr)
			*MouseEvent = params.MouseEvent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.Update Visuals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FOrionSpectatorHUDPlayerInfo                PlayerInfo                                                 (Parm)
	 */
	void USpectator_TeamInfo_Portrait_C::UpdateVisuals(const struct FOrionSpectatorHUDPlayerInfo& PlayerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.Update Visuals");
		
		USpectator_TeamInfo_Portrait_C_UpdateVisuals_Params params {};
		params.PlayerInfo = PlayerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USpectator_TeamInfo_Portrait_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.Construct");
		
		USpectator_TeamInfo_Portrait_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.OnPlayerInfoUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FOrionSpectatorHUDPlayerInfo                NewPlayerInfo                                              (Parm)
	 */
	void USpectator_TeamInfo_Portrait_C::OnPlayerInfoUpdated(EOrionTeam TeamNum, int32_t PlayerIndex, const struct FOrionSpectatorHUDPlayerInfo& NewPlayerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.OnPlayerInfoUpdated");
		
		USpectator_TeamInfo_Portrait_C_OnPlayerInfoUpdated_Params params {};
		params.TeamNum = TeamNum;
		params.PlayerIndex = PlayerIndex;
		params.NewPlayerInfo = NewPlayerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.ExecuteUbergraph_Spectator_TeamInfo_Portrait
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectator_TeamInfo_Portrait_C::ExecuteUbergraph_Spectator_TeamInfo_Portrait(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.ExecuteUbergraph_Spectator_TeamInfo_Portrait");
		
		USpectator_TeamInfo_Portrait_C_ExecuteUbergraph_Spectator_TeamInfo_Portrait_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpectator_TeamInfo_Portrait_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectator_TeamInfo_Portrait_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C");
		return ptr;
	}

}


