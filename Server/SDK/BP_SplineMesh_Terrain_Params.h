#pragma once

/**
 * Name: Paragon
 * Version: v34
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_SplineMesh_Terrain.BP_SplineMesh_Terrain_C.GetLocationAndTangentFromSpline
	 */
	struct ABP_SplineMesh_Terrain_C_GetLocationAndTangentFromSpline_Params
	{
	public:
		class ASplineMeshActor_C*                                  SplineMeshActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F2T2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Location;                                                // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		struct FVector                                             Tangent;                                                 // 0x0040(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BUAN[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          NewLocation;                                             // 0x0050(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		struct FVector                                             NewTangent;                                              // 0x0080(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SplineMesh_Terrain.BP_SplineMesh_Terrain_C.SetupSpline
	 */
	struct ABP_SplineMesh_Terrain_C_SetupSpline_Params
	{	};

	/**
	 * Function BP_SplineMesh_Terrain.BP_SplineMesh_Terrain_C.UserConstructionScript
	 */
	struct ABP_SplineMesh_Terrain_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
