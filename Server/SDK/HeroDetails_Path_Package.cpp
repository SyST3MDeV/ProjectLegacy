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
	 * 		Name   -> Function HeroDetails_Path.HeroDetails_Path_C.OnHeroSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionMcpHeroItem*                           Hero                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroDetails_Path_C::OnHeroSet(class UOrionMcpHeroItem* Hero)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroDetails_Path.HeroDetails_Path_C.OnHeroSet");
		
		UHeroDetails_Path_C_OnHeroSet_Params params {};
		params.Hero = Hero;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroDetails_Path.HeroDetails_Path_C.ExecuteUbergraph_HeroDetails_Path
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroDetails_Path_C::ExecuteUbergraph_HeroDetails_Path(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroDetails_Path.HeroDetails_Path_C.ExecuteUbergraph_HeroDetails_Path");
		
		UHeroDetails_Path_C_ExecuteUbergraph_HeroDetails_Path_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeroDetails_Path_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroDetails_Path_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroDetails_Path.HeroDetails_Path_C");
		return ptr;
	}

}


