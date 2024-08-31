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
	 * BlueprintGeneratedClass BP_FogSheet.BP_FogSheet_C
	 * Size -> 0x00A0 (FullSize[0x0420] - InheritedSize[0x0380])
	 */
	class ABP_FogSheet_C : public AActor
	{
	public:
		class UBillboardComponent*                                 FogSheet;                                                // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		bool                                                       Additive;                                                // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_92VY[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceConstant*                           FogSheetMasterMaterial;                                  // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            FogSheetMID;                                             // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture*                                            NoiseTexture;                                            // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        Color_1;                                                 // 0x03A8(0x0010) Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      Brightness;                                              // 0x03B8(0x0004) Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		unsigned char                                              UnknownData_V1R2[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             Size;                                                    // 0x03C8(0x000C) Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      Opacity;                                                 // 0x03D4(0x0004) Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      DepthFadeDistance;                                       // 0x03D8(0x0004) Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      NoiseSize;                                               // 0x03DC(0x0004) Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PanningSpeed;                                            // 0x03E0(0x0004) Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraFadeBias;                                          // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraFadeScale;                                         // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraFalloff;                                           // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseTessellatedMesh;                                      // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Animated;                                                // 0x03F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IKEZ[0x6];                                   // 0x03F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceConstant*                           FogSheetMasterMaterial_Additive;                         // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Cine;                                                    // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseSeperateTranslucency;                                 // 0x0409(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N7R6[0x6];                                   // 0x040A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceConstant*                           FogSheetMasterMaterial_SepOFF;                           // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceConstant*                           FogSheetMasterMaterial_Additive_SepOFF;                  // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
