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
	 * 		Name   -> PredefinedFunction UPartyGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.PartyGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatroom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatroom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.Chatroom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.Party");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032E0AC0
	 * 		Name   -> Function Party.PartyMemberState.IsPartyLeader
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPartyMemberState::IsPartyLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Party.PartyMemberState.IsPartyLeader");
		
		UPartyMemberState_IsPartyLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032E0A90
	 * 		Name   -> Function Party.PartyMemberState.IsLocalPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPartyMemberState::IsLocalPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Party.PartyMemberState.IsLocalPlayer");
		
		UPartyMemberState_IsLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyMemberState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyMemberState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.PartyMemberState");
		return ptr;
	}

}


