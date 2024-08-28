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
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.CheckSpawnPad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Hero_C*                                  Hero                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::CheckSpawnPad(class ABP_Hero_C* Hero)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.CheckSpawnPad");
		
		UGA_OnSpawn_C_CheckSpawnPad_Params params {};
		params.Hero = Hero;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.OnFinish_EF8C4CE74AFB6D93CD3C2C887D805B5F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_OnSpawn_C::OnFinish_EF8C4CE74AFB6D93CD3C2C887D805B5F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.OnFinish_EF8C4CE74AFB6D93CD3C2C887D805B5F");
		
		UGA_OnSpawn_C_OnFinish_EF8C4CE74AFB6D93CD3C2C887D805B5F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.OnNotifyEnd_F95C91B146B2CB6F25417A93AB4A967F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::OnNotifyEnd_F95C91B146B2CB6F25417A93AB4A967F(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.OnNotifyEnd_F95C91B146B2CB6F25417A93AB4A967F");
		
		UGA_OnSpawn_C_OnNotifyEnd_F95C91B146B2CB6F25417A93AB4A967F_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.OnNotifyBegin_F95C91B146B2CB6F25417A93AB4A967F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::OnNotifyBegin_F95C91B146B2CB6F25417A93AB4A967F(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.OnNotifyBegin_F95C91B146B2CB6F25417A93AB4A967F");
		
		UGA_OnSpawn_C_OnNotifyBegin_F95C91B146B2CB6F25417A93AB4A967F_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.OnCancelled_F95C91B146B2CB6F25417A93AB4A967F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::OnCancelled_F95C91B146B2CB6F25417A93AB4A967F(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.OnCancelled_F95C91B146B2CB6F25417A93AB4A967F");
		
		UGA_OnSpawn_C_OnCancelled_F95C91B146B2CB6F25417A93AB4A967F_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.OnInterrupted_F95C91B146B2CB6F25417A93AB4A967F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::OnInterrupted_F95C91B146B2CB6F25417A93AB4A967F(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.OnInterrupted_F95C91B146B2CB6F25417A93AB4A967F");
		
		UGA_OnSpawn_C_OnInterrupted_F95C91B146B2CB6F25417A93AB4A967F_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.OnBlendOut_F95C91B146B2CB6F25417A93AB4A967F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::OnBlendOut_F95C91B146B2CB6F25417A93AB4A967F(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.OnBlendOut_F95C91B146B2CB6F25417A93AB4A967F");
		
		UGA_OnSpawn_C_OnBlendOut_F95C91B146B2CB6F25417A93AB4A967F_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.OnCompleted_F95C91B146B2CB6F25417A93AB4A967F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::OnCompleted_F95C91B146B2CB6F25417A93AB4A967F(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.OnCompleted_F95C91B146B2CB6F25417A93AB4A967F");
		
		UGA_OnSpawn_C_OnCompleted_F95C91B146B2CB6F25417A93AB4A967F_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.OnNotifyEnd_759325FE48659E7299F1899E3C4738AF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::OnNotifyEnd_759325FE48659E7299F1899E3C4738AF(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.OnNotifyEnd_759325FE48659E7299F1899E3C4738AF");
		
		UGA_OnSpawn_C_OnNotifyEnd_759325FE48659E7299F1899E3C4738AF_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.OnNotifyBegin_759325FE48659E7299F1899E3C4738AF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::OnNotifyBegin_759325FE48659E7299F1899E3C4738AF(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.OnNotifyBegin_759325FE48659E7299F1899E3C4738AF");
		
		UGA_OnSpawn_C_OnNotifyBegin_759325FE48659E7299F1899E3C4738AF_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.OnCancelled_759325FE48659E7299F1899E3C4738AF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::OnCancelled_759325FE48659E7299F1899E3C4738AF(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.OnCancelled_759325FE48659E7299F1899E3C4738AF");
		
		UGA_OnSpawn_C_OnCancelled_759325FE48659E7299F1899E3C4738AF_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.OnInterrupted_759325FE48659E7299F1899E3C4738AF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::OnInterrupted_759325FE48659E7299F1899E3C4738AF(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.OnInterrupted_759325FE48659E7299F1899E3C4738AF");
		
		UGA_OnSpawn_C_OnInterrupted_759325FE48659E7299F1899E3C4738AF_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.OnBlendOut_759325FE48659E7299F1899E3C4738AF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::OnBlendOut_759325FE48659E7299F1899E3C4738AF(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.OnBlendOut_759325FE48659E7299F1899E3C4738AF");
		
		UGA_OnSpawn_C_OnBlendOut_759325FE48659E7299F1899E3C4738AF_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.OnCompleted_759325FE48659E7299F1899E3C4738AF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::OnCompleted_759325FE48659E7299F1899E3C4738AF(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.OnCompleted_759325FE48659E7299F1899E3C4738AF");
		
		UGA_OnSpawn_C_OnCompleted_759325FE48659E7299F1899E3C4738AF_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_OnSpawn_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.K2_ActivateAbility");
		
		UGA_OnSpawn_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OnSpawn.GA_OnSpawn_C.ExecuteUbergraph_GA_OnSpawn
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OnSpawn_C::ExecuteUbergraph_GA_OnSpawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OnSpawn.GA_OnSpawn_C.ExecuteUbergraph_GA_OnSpawn");
		
		UGA_OnSpawn_C_ExecuteUbergraph_GA_OnSpawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_OnSpawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_OnSpawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_OnSpawn.GA_OnSpawn_C");
		return ptr;
	}

}


