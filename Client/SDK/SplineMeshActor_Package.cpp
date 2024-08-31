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
	 * 		Name   -> Function SplineMeshActor.SplineMeshActor_C.GetLocationAndTangentFromSpline
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASplineMeshActor_C*                          SplineMeshActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Location                                                   (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Tangent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  NewLocation                                                (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewTangent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASplineMeshActor_C::GetLocationAndTangentFromSpline(class ASplineMeshActor_C* SplineMeshActor, const struct FTransform& Location, const struct FVector& Tangent, struct FTransform* NewLocation, struct FVector* NewTangent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineMeshActor.SplineMeshActor_C.GetLocationAndTangentFromSpline");
		
		ASplineMeshActor_C_GetLocationAndTangentFromSpline_Params params {};
		params.SplineMeshActor = SplineMeshActor;
		params.Location = Location;
		params.Tangent = Tangent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewLocation != nullptr)
			*NewLocation = params.NewLocation;
		if (NewTangent != nullptr)
			*NewTangent = params.NewTangent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SplineMeshActor.SplineMeshActor_C.SetupSpline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASplineMeshActor_C::SetupSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineMeshActor.SplineMeshActor_C.SetupSpline");
		
		ASplineMeshActor_C_SetupSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SplineMeshActor.SplineMeshActor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASplineMeshActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineMeshActor.SplineMeshActor_C.UserConstructionScript");
		
		ASplineMeshActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SplineMeshActor.SplineMeshActor_C.ResetPivot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASplineMeshActor_C::ResetPivot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineMeshActor.SplineMeshActor_C.ResetPivot");
		
		ASplineMeshActor_C_ResetPivot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SplineMeshActor.SplineMeshActor_C.Reset_Tangents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASplineMeshActor_C::Reset_Tangents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineMeshActor.SplineMeshActor_C.Reset_Tangents");
		
		ASplineMeshActor_C_Reset_Tangents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SplineMeshActor.SplineMeshActor_C.ExecuteUbergraph_SplineMeshActor
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASplineMeshActor_C::ExecuteUbergraph_SplineMeshActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineMeshActor.SplineMeshActor_C.ExecuteUbergraph_SplineMeshActor");
		
		ASplineMeshActor_C_ExecuteUbergraph_SplineMeshActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASplineMeshActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASplineMeshActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SplineMeshActor.SplineMeshActor_C");
		return ptr;
	}

}


