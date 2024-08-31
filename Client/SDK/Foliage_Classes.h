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
	 * Class Foliage.FoliageInstancedStaticMeshComponent
	 * Size -> 0x0028 (FullSize[0x0950] - InheritedSize[0x0928])
	 */
	class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
	{
	public:
		class FScriptMulticastDelegate                             OnInstanceTakePointDamage;                               // 0x0928(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInstanceTakeRadialDamage;                              // 0x0938(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BSQ[0x8];                                   // 0x0948(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.FoliageStatistics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFoliageStatistics : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
		int32_t STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.FoliageType
	 * Size -> 0x0390 (FullSize[0x03B8] - InheritedSize[0x0028])
	 */
	class UFoliageType : public UObject
	{
	public:
		struct FGuid                                               UpdateGuid;                                              // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Density;                                                 // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DensityAdjustmentFactor;                                 // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFoliageScaling                                            Scaling;                                                 // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YX87[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatInterval                                      ScaleX;                                                  // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ScaleY;                                                  // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ScaleZ;                                                  // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FFoliageVertexColorChannelMask                      VertexColorMaskByChannel[0x4];                           // 0x0060(0x0030) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		EFoliageVertexColorMask                                    VertexColorMask;                                         // 0x0090(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7QO[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VertexColorMaskThreshold;                                // 0x0094(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VertexColorMaskInvert : 1;                               // 0x0098(0x0001) BIT_FIELD Deprecated, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1YWL[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatInterval                                      ZOffset;                                                 // 0x009C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       AlignToNormal : 1;                                       // 0x00A4(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXLM[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlignMaxAngle;                                           // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RandomYaw : 1;                                           // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHDN[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomPitchAngle;                                        // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      GroundSlopeAngle;                                        // 0x00B4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FFloatInterval                                      Height;                                                  // 0x00BC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5WN[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LandscapeLayers;                                         // 0x00C8(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		class FName                                                LandscapeLayer;                                          // 0x00D8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CollisionWithWorld : 1;                                  // 0x00E0(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0E6[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CollisionScale;                                          // 0x00E4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		float                                                      MinimumLayerWeight;                                      // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoxSphereBounds                                    MeshBounds;                                              // 0x00F4(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LowBoundOriginRadius;                                    // 0x0110(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EComponentMobility                                         Mobility;                                                // 0x011C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78R5[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInt32Interval                                      CullDistance;                                            // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableStaticLighting : 1;                               // 0x0128(0x0001) BIT_FIELD Deprecated, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       CastShadow : 1;                                          // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAffectDynamicIndirectLighting : 1;                      // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAffectDistanceFieldLighting : 1;                        // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCastDynamicShadow : 1;                                  // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCastStaticShadow : 1;                                   // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCastShadowAsTwoSided : 1;                               // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bReceivesDecals : 1;                                     // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bOverrideLightMapRes : 1;                                // 0x0129(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JK8B[0x2];                                   // 0x012A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OverriddenLightMapRes;                                   // 0x012C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAsOccluder : 1;                                      // 0x0130(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HC6[0xF];                                   // 0x0131(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBodyInstance                                       BodyInstance;                                            // 0x0140(0x01B0) Edit, NativeAccessSpecifierPublic
		EHasCustomNavigableGeometry                                CustomNavigableGeometry;                                 // 0x02F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightingChannels                                   LightingChannels;                                        // 0x02F1(0x0003) Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, NativeAccessSpecifierPublic
		float                                                      CollisionRadius;                                         // 0x02F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShadeRadius;                                             // 0x02F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSteps;                                                // 0x02FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialSeedDensity;                                      // 0x0300(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageSpreadDistance;                                   // 0x0304(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpreadVariance;                                          // 0x0308(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SeedsPerStep;                                            // 0x030C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DistributionSeed;                                        // 0x0310(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxInitialSeedOffset;                                    // 0x0314(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanGrowInShade;                                         // 0x0318(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSpawnsInShade;                                          // 0x0319(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DYO7[0x2];                                   // 0x031A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxInitialAge;                                           // 0x031C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAge;                                                  // 0x0320(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverlapPriority;                                         // 0x0324(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ProceduralScale;                                         // 0x0328(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  ScaleCurve;                                              // 0x0330(0x0080) Edit, NativeAccessSpecifierPublic
		int32_t                                                    ChangeCount;                                             // 0x03B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReapplyDensity : 1;                                      // 0x03B4(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyRadius : 1;                                       // 0x03B4(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyAlignToNormal : 1;                                // 0x03B4(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyRandomYaw : 1;                                    // 0x03B4(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyScaling : 1;                                      // 0x03B4(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyScaleX : 1;                                       // 0x03B4(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyScaleY : 1;                                       // 0x03B4(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyScaleZ : 1;                                       // 0x03B4(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyRandomPitchAngle : 1;                             // 0x03B5(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyGroundSlope : 1;                                  // 0x03B5(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyHeight : 1;                                       // 0x03B5(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyLandscapeLayers : 1;                              // 0x03B5(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyZOffset : 1;                                      // 0x03B5(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyCollisionWithWorld : 1;                           // 0x03B5(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ReapplyVertexColorMask : 1;                              // 0x03B5(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableDensityScaling : 1;                               // 0x03B5(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1QHG[0x2];                                   // 0x03B6(0x0002) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.FoliageType_InstancedStaticMesh
	 * Size -> 0x0028 (FullSize[0x03E0] - InheritedSize[0x03B8])
	 */
	class UFoliageType_InstancedStaticMesh : public UFoliageType
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x03B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          OverrideMaterials;                                       // 0x03C0(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		class UClass*                                              ComponentClass;                                          // 0x03D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3CJH[0x8];                                   // 0x03D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.InstancedFoliageActor
	 * Size -> 0x0050 (FullSize[0x03D0] - InheritedSize[0x0380])
	 */
	class AInstancedFoliageActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_C56R[0x50];                                  // 0x0380(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.InteractiveFoliageActor
	 * Size -> 0x0060 (FullSize[0x03F0] - InheritedSize[0x0390])
	 */
	class AInteractiveFoliageActor : public AStaticMeshActor
	{
	public:
		class UCapsuleComponent*                                   CapsuleComponent;                                        // 0x0390(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             TouchingActorEntryPosition;                              // 0x0398(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FVector                                             FoliageVelocity;                                         // 0x03A4(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FVector                                             FoliageForce;                                            // 0x03B0(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FVector                                             FoliagePosition;                                         // 0x03BC(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      FoliageDamageImpulseScale;                               // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoliageTouchImpulseScale;                                // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoliageStiffness;                                        // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoliageStiffnessQuadratic;                               // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoliageDamping;                                          // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDamageImpulse;                                        // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTouchImpulse;                                         // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxForce;                                                // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x03E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPGB[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (PADDING)

	public:
		void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.InteractiveFoliageComponent
	 * Size -> 0x0010 (FullSize[0x0780] - InheritedSize[0x0770])
	 */
	class UInteractiveFoliageComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_3KT0[0x10];                                  // 0x0770(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageBlockingVolume
	 * Size -> 0x0008 (FullSize[0x03C0] - InheritedSize[0x03B8])
	 */
	class AProceduralFoliageBlockingVolume : public AVolume
	{
	public:
		class AProceduralFoliageVolume*                            ProceduralFoliageVolume;                                 // 0x03B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageComponent
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UProceduralFoliageComponent : public UActorComponent
	{
	public:
		class UProceduralFoliageSpawner*                           FoliageSpawner;                                          // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileOverlap;                                             // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UPOB[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVolume*                                             SpawningVolume;                                          // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ProceduralGuid;                                          // 0x0100(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageSpawner
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UProceduralFoliageSpawner : public UObject
	{
	public:
		int32_t                                                    RandomSeed;                                              // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileSize;                                                // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumUniqueTiles;                                          // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumQuadTreeSize;                                     // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7G79[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFoliageTypeObject>                          FoliageTypes;                                            // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bNeedsSimulation;                                        // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VKXY[0x1F];                                  // 0x0051(0x001F) MISSED OFFSET (PADDING)

	public:
		void Simulate(int32_t NumSteps);
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageTile
	 * Size -> 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
	 */
	class UProceduralFoliageTile : public UObject
	{
	public:
		class UProceduralFoliageSpawner*                           FoliageSpawner;                                          // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RB6K[0xA0];                                  // 0x0030(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FProceduralFoliageInstance>                  InstancesArray;                                          // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M7BA[0x78];                                  // 0x00E0(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageVolume
	 * Size -> 0x0008 (FullSize[0x03C0] - InheritedSize[0x03B8])
	 */
	class AProceduralFoliageVolume : public AVolume
	{
	public:
		class UProceduralFoliageComponent*                         ProceduralComponent;                                     // 0x03B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
