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
	 * 		Name   -> Function TeamMemberInfo.TeamMemberInfo_C.Update Visuals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FOrionSpectatorHUDPlayerInfo                NewPlayerInfo                                              (Parm)
	 */
	void UTeamMemberInfo_C::UpdateVisuals(const struct FOrionSpectatorHUDPlayerInfo& NewPlayerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamMemberInfo.TeamMemberInfo_C.Update Visuals");
		
		UTeamMemberInfo_C_UpdateVisuals_Params params {};
		params.NewPlayerInfo = NewPlayerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamMemberInfo.TeamMemberInfo_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTeamMemberInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamMemberInfo.TeamMemberInfo_C.Construct");
		
		UTeamMemberInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamMemberInfo.TeamMemberInfo_C.OnUpdatePlayerInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FOrionSpectatorHUDPlayerInfo                NewPlayerInfo                                              (Parm)
	 */
	void UTeamMemberInfo_C::OnUpdatePlayerInfo(EOrionTeam TeamNum, int32_t PlayerIndex, const struct FOrionSpectatorHUDPlayerInfo& NewPlayerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamMemberInfo.TeamMemberInfo_C.OnUpdatePlayerInfo");
		
		UTeamMemberInfo_C_OnUpdatePlayerInfo_Params params {};
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
	 * 		Name   -> Function TeamMemberInfo.TeamMemberInfo_C.ExecuteUbergraph_TeamMemberInfo
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeamMemberInfo_C::ExecuteUbergraph_TeamMemberInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamMemberInfo.TeamMemberInfo_C.ExecuteUbergraph_TeamMemberInfo");
		
		UTeamMemberInfo_C_ExecuteUbergraph_TeamMemberInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeamMemberInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeamMemberInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TeamMemberInfo.TeamMemberInfo_C");
		return ptr;
	}

}


