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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass SplineMeshActor.SplineMeshActor_C
	 * Size -> 0x00D0 (FullSize[0x0450] - InheritedSize[0x0380])
	 */
	class ASplineMeshActor_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USplineComponent*                                    Spline;                                                  // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USplineMeshComponent*                                SplineMesh;                                              // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		unsigned char                                              UnknownData_HW0R[0x8];                                   // 0x0398(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Start;                                                   // 0x03A0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform                                          End;                                                     // 0x03D0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FVector                                             End_Tangent;                                             // 0x0400(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Start_Tangent;                                           // 0x040C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SmoothTangents;                                          // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DH44[0x3];                                   // 0x0419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Tension;                                                 // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SkewMesh;                                                // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESplineMeshAxis                                            ForwardAxis;                                             // 0x0421(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7NFG[0x2];                                   // 0x0422(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TempLocation;                                            // 0x0424(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ASplineMeshActor_C*                                  UseActorasStartPoint_FromEnd;                            // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class ASplineMeshActor_C*                                  UseActorasStartPoint_FromStart;                          // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class ASplineMeshActor_C*                                  UseActorasEndPoint_FromStart;                            // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class ASplineMeshActor_C*                                  UseActorasEndPoint_FromEnd;                              // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor

	public:
		void GetLocationAndTangentFromSpline(class ASplineMeshActor_C* SplineMeshActor, const struct FTransform& Location, const struct FVector& Tangent, struct FTransform* NewLocation, struct FVector* NewTangent);
		void SetupSpline();
		void UserConstructionScript();
		void ResetPivot();
		void Reset_Tangents();
		void ExecuteUbergraph_SplineMeshActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
