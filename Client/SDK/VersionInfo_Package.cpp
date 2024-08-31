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
	 * 		Name   -> Function VersionInfo.VersionInfo_C.SetStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowVersion                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowExtra                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVersionInfo_C::SetStyle(bool ShowVersion, bool ShowExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VersionInfo.VersionInfo_C.SetStyle");
		
		UVersionInfo_C_SetStyle_Params params {};
		params.ShowVersion = ShowVersion;
		params.ShowExtra = ShowExtra;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VersionInfo.VersionInfo_C.UpdateText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UVersionInfo_C::UpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VersionInfo.VersionInfo_C.UpdateText");
		
		UVersionInfo_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VersionInfo.VersionInfo_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UVersionInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VersionInfo.VersionInfo_C.Construct");
		
		UVersionInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VersionInfo.VersionInfo_C.ExecuteUbergraph_VersionInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVersionInfo_C::ExecuteUbergraph_VersionInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VersionInfo.VersionInfo_C.ExecuteUbergraph_VersionInfo");
		
		UVersionInfo_C_ExecuteUbergraph_VersionInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVersionInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVersionInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VersionInfo.VersionInfo_C");
		return ptr;
	}

}


