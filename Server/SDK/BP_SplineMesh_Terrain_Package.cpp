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
	 * 		Name   -> Function BP_SplineMesh_Terrain.BP_SplineMesh_Terrain_C.GetLocationAndTangentFromSpline
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASplineMeshActor_C*                          SplineMeshActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Location                                                   (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Tangent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  NewLocation                                                (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewTangent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SplineMesh_Terrain_C::GetLocationAndTangentFromSpline(class ASplineMeshActor_C* SplineMeshActor, const struct FTransform& Location, const struct FVector& Tangent, struct FTransform* NewLocation, struct FVector* NewTangent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplineMesh_Terrain.BP_SplineMesh_Terrain_C.GetLocationAndTangentFromSpline");
		
		ABP_SplineMesh_Terrain_C_GetLocationAndTangentFromSpline_Params params {};
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
	 * 		Name   -> Function BP_SplineMesh_Terrain.BP_SplineMesh_Terrain_C.SetupSpline
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SplineMesh_Terrain_C::SetupSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplineMesh_Terrain.BP_SplineMesh_Terrain_C.SetupSpline");
		
		ABP_SplineMesh_Terrain_C_SetupSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_SplineMesh_Terrain.BP_SplineMesh_Terrain_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SplineMesh_Terrain_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplineMesh_Terrain.BP_SplineMesh_Terrain_C.UserConstructionScript");
		
		ABP_SplineMesh_Terrain_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SplineMesh_Terrain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SplineMesh_Terrain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SplineMesh_Terrain.BP_SplineMesh_Terrain_C");
		return ptr;
	}

}


