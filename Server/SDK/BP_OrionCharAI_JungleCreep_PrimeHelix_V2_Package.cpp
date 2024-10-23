/**
 * Name: Paragon
 * Version: v34
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.UserConstructionScript");
		
		ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.SpawnFall_Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C::SpawnFall_Timeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.SpawnFall_Timeline__FinishedFunc");
		
		ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_SpawnFall_Timeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.SpawnFall_Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C::SpawnFall_Timeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.SpawnFall_Timeline__UpdateFunc");
		
		ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_SpawnFall_Timeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.SpawnFall_Timeline__SonicBoom__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C::SpawnFall_Timeline__SonicBoom__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.SpawnFall_Timeline__SonicBoom__EventFunc");
		
		ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_SpawnFall_Timeline__SonicBoom__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.ReceiveBeginPlay");
		
		ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.OnDeath_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionChar*                                  DeadChar                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C::OnDeath_Event_1(class AOrionChar* DeadChar, class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.OnDeath_Event_1");
		
		ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_OnDeath_Event_1_Params params {};
		params.DeadChar = DeadChar;
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.GameplayCue.PrimeHelix.PrimaryAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C::GameplayCue_PrimeHelix_PrimaryAttack(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.GameplayCue.PrimeHelix.PrimaryAttack");
		
		ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_GameplayCue_PrimeHelix_PrimaryAttack_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.ExecuteUbergraph_BP_OrionCharAI_JungleCreep_PrimeHelix_V2
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C::ExecuteUbergraph_BP_OrionCharAI_JungleCreep_PrimeHelix_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.ExecuteUbergraph_BP_OrionCharAI_JungleCreep_PrimeHelix_V2");
		
		ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_ExecuteUbergraph_BP_OrionCharAI_JungleCreep_PrimeHelix_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C");
		return ptr;
	}

}


