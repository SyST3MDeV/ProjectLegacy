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
	 * 		Name   -> Function Player_Kill_Player_R.Player_Kill_Player_R_C.Setup Widget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewPlayerName                                              (Parm)
	 * 		struct FLinearColor                                NewOutlineColor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  NewHeroIcon                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowRed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayer_Kill_Player_R_C::SetupWidget(const class FText& NewPlayerName, const struct FLinearColor& NewOutlineColor, class UTexture2D* NewHeroIcon, bool ShowRed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Player_Kill_Player_R.Player_Kill_Player_R_C.Setup Widget");
		
		UPlayer_Kill_Player_R_C_SetupWidget_Params params {};
		params.NewPlayerName = NewPlayerName;
		params.NewOutlineColor = NewOutlineColor;
		params.NewHeroIcon = NewHeroIcon;
		params.ShowRed = ShowRed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Player_Kill_Player_R.Player_Kill_Player_R_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPlayer_Kill_Player_R_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Player_Kill_Player_R.Player_Kill_Player_R_C.Construct");
		
		UPlayer_Kill_Player_R_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Player_Kill_Player_R.Player_Kill_Player_R_C.ExecuteUbergraph_Player_Kill_Player_R
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayer_Kill_Player_R_C::ExecuteUbergraph_Player_Kill_Player_R(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Player_Kill_Player_R.Player_Kill_Player_R_C.ExecuteUbergraph_Player_Kill_Player_R");
		
		UPlayer_Kill_Player_R_C_ExecuteUbergraph_Player_Kill_Player_R_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayer_Kill_Player_R_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayer_Kill_Player_R_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Player_Kill_Player_R.Player_Kill_Player_R_C");
		return ptr;
	}

}


