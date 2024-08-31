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
	 * 		Name   -> PredefinedFunction UMcpItemDefinitionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMcpItemDefinitionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class McpProfileSys.McpItemDefinitionBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function McpProfileSys.McpProfile.UnlockProfileForWrite
	 * 		Flags  -> (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
	 * Parameters:
	 * 		class FString                                      Code                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDedicatedServerUrlContext                  Context                                                    (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
	 */
	void UMcpProfile::UnlockProfileForWrite(const class FString& Code, struct FDedicatedServerUrlContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.UnlockProfileForWrite");
		
		UMcpProfile_UnlockProfileForWrite_Params params {};
		params.Code = Code;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function McpProfileSys.McpProfile.QueryProfile
	 * 		Flags  -> (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
	 * Parameters:
	 * 		struct FBaseUrlContext                             Context                                                    (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
	 */
	void UMcpProfile::QueryProfile(struct FBaseUrlContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.QueryProfile");
		
		UMcpProfile_QueryProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function McpProfileSys.McpProfile.LockProfileForWrite
	 * 		Flags  -> (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
	 * Parameters:
	 * 		class FString                                      Code                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDedicatedServerUrlContext                  Context                                                    (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
	 */
	void UMcpProfile::LockProfileForWrite(const class FString& Code, int32_t Timeout, struct FDedicatedServerUrlContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.LockProfileForWrite");
		
		UMcpProfile_LockProfileForWrite_Params params {};
		params.Code = Code;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function McpProfileSys.McpProfile.DeleteProfile
	 * 		Flags  -> (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
	 * Parameters:
	 * 		struct FClientUrlContext                           Context                                                    (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
	 */
	void UMcpProfile::DeleteProfile(struct FClientUrlContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.DeleteProfile");
		
		UMcpProfile_DeleteProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function McpProfileSys.McpProfile.DeleteAllProfiles
	 * 		Flags  -> (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
	 * Parameters:
	 * 		struct FClientUrlContext                           Context                                                    (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
	 */
	void UMcpProfile::DeleteAllProfiles(struct FClientUrlContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.DeleteAllProfiles");
		
		UMcpProfile_DeleteAllProfiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMcpProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMcpProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class McpProfileSys.McpProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMcpItemAware.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMcpItemAware::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class McpProfileSys.McpItemAware");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMcpProfileGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMcpProfileGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class McpProfileSys.McpProfileGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMcpProfileManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMcpProfileManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class McpProfileSys.McpProfileManager");
		return ptr;
	}

}


