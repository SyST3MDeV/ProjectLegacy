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
	 * 		Name   -> Function Team_Info_Widget_Spectator_Red.Team_Info_Widget_Spectator_Red_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTeam_Info_Widget_Spectator_Red_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Team_Info_Widget_Spectator_Red.Team_Info_Widget_Spectator_Red_C.Construct");
		
		UTeam_Info_Widget_Spectator_Red_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Team_Info_Widget_Spectator_Red.Team_Info_Widget_Spectator_Red_C.ExecuteUbergraph_Team_Info_Widget_Spectator_Red
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeam_Info_Widget_Spectator_Red_C::ExecuteUbergraph_Team_Info_Widget_Spectator_Red(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Team_Info_Widget_Spectator_Red.Team_Info_Widget_Spectator_Red_C.ExecuteUbergraph_Team_Info_Widget_Spectator_Red");
		
		UTeam_Info_Widget_Spectator_Red_C_ExecuteUbergraph_Team_Info_Widget_Spectator_Red_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeam_Info_Widget_Spectator_Red_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeam_Info_Widget_Spectator_Red_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Team_Info_Widget_Spectator_Red.Team_Info_Widget_Spectator_Red_C");
		return ptr;
	}

}


