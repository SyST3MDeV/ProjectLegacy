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
	 * Function SplineMeshActor.SplineMeshActor_C.GetLocationAndTangentFromSpline
	 */
	struct ASplineMeshActor_C_GetLocationAndTangentFromSpline_Params
	{
	public:
		class ASplineMeshActor_C*                                  SplineMeshActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WPD0[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Location;                                                // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		struct FVector                                             Tangent;                                                 // 0x0040(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8Z14[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          NewLocation;                                             // 0x0050(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		struct FVector                                             NewTangent;                                              // 0x0080(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SplineMeshActor.SplineMeshActor_C.SetupSpline
	 */
	struct ASplineMeshActor_C_SetupSpline_Params
	{	};

	/**
	 * Function SplineMeshActor.SplineMeshActor_C.UserConstructionScript
	 */
	struct ASplineMeshActor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SplineMeshActor.SplineMeshActor_C.ResetPivot
	 */
	struct ASplineMeshActor_C_ResetPivot_Params
	{	};

	/**
	 * Function SplineMeshActor.SplineMeshActor_C.Reset_Tangents
	 */
	struct ASplineMeshActor_C_Reset_Tangents_Params
	{	};

	/**
	 * Function SplineMeshActor.SplineMeshActor_C.ExecuteUbergraph_SplineMeshActor
	 */
	struct ASplineMeshActor_C_ExecuteUbergraph_SplineMeshActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
