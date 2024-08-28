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
	 * 		Name   -> Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.Set Local Player colors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UScoreboardRow_FriendlyV4_C::SetLocalPlayercolors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.Set Local Player colors");
		
		UScoreboardRow_FriendlyV4_C_SetLocalPlayercolors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UScoreboardRow_FriendlyV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.Construct");
		
		UScoreboardRow_FriendlyV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.OnRespawned
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UScoreboardRow_FriendlyV4_C::OnRespawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.OnRespawned");
		
		UScoreboardRow_FriendlyV4_C_OnRespawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.OnDeath
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UScoreboardRow_FriendlyV4_C::OnDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.OnDeath");
		
		UScoreboardRow_FriendlyV4_C_OnDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.UpdateIsLocalPlayer
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsLocalPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScoreboardRow_FriendlyV4_C::UpdateIsLocalPlayer(bool bIsLocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.UpdateIsLocalPlayer");
		
		UScoreboardRow_FriendlyV4_C_UpdateIsLocalPlayer_Params params {};
		params.bIsLocalPlayer = bIsLocalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.UpdateVisibleToLocalPlayer
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisibleToLocalPlayer                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScoreboardRow_FriendlyV4_C::UpdateVisibleToLocalPlayer(bool bVisibleToLocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.UpdateVisibleToLocalPlayer");
		
		UScoreboardRow_FriendlyV4_C_UpdateVisibleToLocalPlayer_Params params {};
		params.bVisibleToLocalPlayer = bVisibleToLocalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.OnDisconnectedChange
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsDisconnected                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScoreboardRow_FriendlyV4_C::OnDisconnectedChange(bool bIsDisconnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.OnDisconnectedChange");
		
		UScoreboardRow_FriendlyV4_C_OnDisconnectedChange_Params params {};
		params.bIsDisconnected = bIsDisconnected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UScoreboardRow_FriendlyV4_C::BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UScoreboardRow_FriendlyV4_C_BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.ExecuteUbergraph_ScoreboardRow_Friendly-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScoreboardRow_FriendlyV4_C::ExecuteUbergraph_ScoreboardRow_FriendlyV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardRow_Friendly-V4.ScoreboardRow_Friendly-V4_C.ExecuteUbergraph_ScoreboardRow_Friendly-V4");
		
		UScoreboardRow_FriendlyV4_C_ExecuteUbergraph_ScoreboardRow_FriendlyV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoreboardRow_FriendlyV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreboardRow_FriendlyV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoreboardRow_Friendly_V4.ScoreboardRow_Friendly-V4_C");
		return ptr;
	}

}


