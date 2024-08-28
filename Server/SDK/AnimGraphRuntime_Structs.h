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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AnimGraphRuntime.ERefPoseType
	 */
	enum class ERefPoseType : uint8_t
	{
		EIT_LocalSpace = 0,
		EIT_Additive   = 1,
		EIT_MAX        = 2
	};

	/**
	 * Enum AnimGraphRuntime.ESequenceEvalReinit
	 */
	enum class ESequenceEvalReinit : uint8_t
	{
		NoReset       = 0,
		StartPosition = 1,
		ExplicitTime  = 2,
		MAX           = 3
	};

	/**
	 * Enum AnimGraphRuntime.ESphericalLimitType
	 */
	enum class ESphericalLimitType : uint8_t
	{
		Inner = 0,
		Outer = 1,
		MAX   = 2
	};

	/**
	 * Enum AnimGraphRuntime.AnimPhysSimSpaceType
	 */
	enum class EAnimPhysSimSpaceType : uint8_t
	{
		AnimPhysSimSpaceTypeComponent                = 0,
		AnimPhysSimSpaceTypeActor                    = 1,
		AnimPhysSimSpaceTypeWorld                    = 2,
		AnimPhysSimSpaceTypeRootRelative             = 3,
		AnimPhysSimSpaceTypeBoneRelative             = 4,
		AnimPhysSimSpaceTypeAnimPhysSimSpaceType_MAX = 5
	};

	/**
	 * Enum AnimGraphRuntime.AnimPhysLinearConstraintType
	 */
	enum class EAnimPhysLinearConstraintType : uint8_t
	{
		AnimPhysLinearConstraintTypeFree                             = 0,
		AnimPhysLinearConstraintTypeLimited                          = 1,
		AnimPhysLinearConstraintTypeAnimPhysLinearConstraintType_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.AnimPhysAngularConstraintType
	 */
	enum class EAnimPhysAngularConstraintType : uint8_t
	{
		AnimPhysAngularConstraintTypeAngular                           = 0,
		AnimPhysAngularConstraintTypeCone                              = 1,
		AnimPhysAngularConstraintTypeAnimPhysAngularConstraintType_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.EDrivenDestinationMode
	 */
	enum class EDrivenDestinationMode : uint8_t
	{
		Bone              = 0,
		MorphTarget       = 1,
		MaterialParameter = 2,
		MAX               = 3
	};

	/**
	 * Enum AnimGraphRuntime.EDrivenBoneModificationMode
	 */
	enum class EDrivenBoneModificationMode : uint8_t
	{
		AddToInput       = 0,
		ReplaceComponent = 1,
		AddToRefPose     = 2,
		MAX              = 3
	};

	/**
	 * Enum AnimGraphRuntime.EComponentType
	 */
	enum class EComponentType : uint8_t
	{
		None         = 0,
		TranslationX = 1,
		TranslationY = 2,
		TranslationZ = 3,
		RotationX    = 4,
		RotationY    = 5,
		RotationZ    = 6,
		Scale        = 7,
		ScaleX       = 8,
		ScaleY       = 9,
		ScaleZ       = 10,
		MAX          = 11
	};

	/**
	 * Enum AnimGraphRuntime.CopyBoneDeltaMode
	 */
	enum class ECopyBoneDeltaMode : uint8_t
	{
		CopyBoneDeltaModeAccumulate            = 0,
		CopyBoneDeltaModeCopy                  = 1,
		CopyBoneDeltaModeCopyBoneDeltaMode_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.EInterpolationBlend
	 */
	enum class EInterpolationBlend : uint8_t
	{
		Linear             = 0,
		Cubic              = 1,
		Sinusoidal         = 2,
		EaseInOutExponent2 = 3,
		EaseInOutExponent3 = 4,
		EaseInOutExponent4 = 5,
		EaseInOutExponent5 = 6,
		MAX                = 7,
		MAX01              = 8
	};

	/**
	 * Enum AnimGraphRuntime.EAxisOption
	 */
	enum class EAxisOption : uint8_t
	{
		X     = 0,
		Y     = 1,
		Z     = 2,
		X_Neg = 3,
		Y_Neg = 4,
		Z_Neg = 5,
		MAX   = 6
	};

	/**
	 * Enum AnimGraphRuntime.EBoneModificationMode
	 */
	enum class EBoneModificationMode : uint8_t
	{
		BMM_Ignore   = 0,
		BMM_Replace  = 1,
		BMM_Additive = 2,
		BMM_MAX      = 3
	};

	/**
	 * Enum AnimGraphRuntime.EPoseDriverType
	 */
	enum class EPoseDriverType : uint8_t
	{
		SwingAndTwist = 0,
		SwingOnly     = 1,
		MAX           = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             ComponentPose;                                           // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x004C(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActualAlpha;                                             // 0x0058(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_47TJ[0x14];                                  // 0x005C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
	 * Size -> 0x00C8 (FullSize[0x0120] - InheritedSize[0x0058])
	 */
	struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
	{
	public:
		float                                                      X;                                                       // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoop;                                                   // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7X0D[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartPosition;                                           // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpaceBase*                                     BlendSpace;                                              // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBlendFilter                                        BlendFilter;                                             // 0x0078(0x0090) Protected, NativeAccessSpecifierProtected
		TArray<struct FBlendSampleData>                            BlendSampleDataCache;                                    // 0x0108(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UBlendSpaceBase*                                     PreviousBlendSpace;                                      // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
	 * Size -> 0x0040 (FullSize[0x0160] - InheritedSize[0x0120])
	 */
	struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0120(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLODEnabled;                                           // 0x013C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QDEH[0x3];                                   // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LookAtLocation;                                          // 0x0140(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2I7[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SourceSocketName;                                        // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJ3H[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	struct FAnimNode_ApplyAdditive : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Base;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPoseLink                                           Additive;                                                // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0064(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActualAlpha;                                             // 0x0070(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_995W[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
	 * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
	 */
	struct FAnimNode_BlendListBase : public FAnimNode_Base
	{
	public:
		TArray<struct FPoseLink>                                   BlendPose;                                               // 0x0030(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BlendTime;                                               // 0x0040(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		EAlphaBlendOption                                          BlendType;                                               // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6V2L[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CustomBlendCurve;                                        // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendProfile*                                       BlendProfile;                                            // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAlphaBlend>                                 Blends;                                                  // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BlendWeights;                                            // 0x0078(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              RemainingBlendTimes;                                     // 0x0088(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    LastActiveChildIndex;                                    // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MM1I[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBlendSampleData>                            PerBoneSampleData;                                       // 0x00A0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YFXY[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bResetChildOnActivation;                                 // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2UXI[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
	{
	public:
		bool                                                       bActiveValue;                                            // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O69F[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
	{
	public:
		TArray<int32_t>                                            EnumToPoseIndex;                                         // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              ActiveEnumValue;                                         // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJ4Y[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
	{
	public:
		int32_t                                                    ActiveChildIndex;                                        // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4R2[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
	 * Size -> 0x0008 (FullSize[0x0128] - InheritedSize[0x0120])
	 */
	struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
	{
	public:
		float                                                      NormalizedTime;                                          // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84HL[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
	{
	public:
		class USkeletalMeshComponent*                              SourceMeshComponent;                                     // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZEU[0x58];                                  // 0x0038(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FPoseLink>                                   BlendPoses;                                              // 0x0048(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FInputBlendPose>                             LayerSetup;                                              // 0x0058(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BlendWeights;                                            // 0x0068(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bMeshSpaceRotationBlend;                                 // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ECurveBlendOption                                          CurveBlendOption;                                        // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendRootMotionBasedOnRootBone;                         // 0x007A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasRelevantPoses;                                       // 0x007B(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRC3[0x24];                                  // 0x007C(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
	 * Size -> 0x0048 (FullSize[0x00A0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
	{
	public:
		class UPoseAsset*                                          PoseAsset;                                               // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTZ5[0x40];                                  // 0x0060(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
	 * Size -> 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
	 */
	struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x00A0(0x0018) Edit, BlueprintVisible, EditFixedSize, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
	 * Size -> 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
	 */
	struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
	{
	public:
		class FName                                                PoseName;                                                // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoseWeight;                                              // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6IV[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
	 * Size -> 0x0058
	 */
	struct FRandomPlayerSequenceEntry
	{
	public:
		class UAnimSequence*                                       Sequence;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceToPlay;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinLoopCount;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLoopCount;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPlayRate;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPlayRate;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00VG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAlphaBlend                                         BlendIn;                                                 // 0x0020(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	struct FAnimNode_RandomPlayer : public FAnimNode_Base
	{
	public:
		bool                                                       bShuffleMode;                                            // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1M4D[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRandomPlayerSequenceEntry>                  Entries;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YS5R[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RefPose
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAnimNode_RefPose : public FAnimNode_Base
	{
	public:
		ERefPoseType                                               RefPoseType;                                             // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4M9Y[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Root
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FAnimNode_Root : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Result;                                                  // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	struct FAnimNode_RotateRootBone : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Yaw;                                                     // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            MeshToComponent;                                         // 0x0050(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8XHG[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
	 * Size -> 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
	 */
	struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0120(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLODEnabled;                                           // 0x013C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ORDF[0x3];                                   // 0x013D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
	{
	public:
		class UAnimSequenceBase*                                   Sequence;                                                // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplicitTime;                                            // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldLoopWhenInSyncGroup;                              // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bTeleportToExplicitTime;                                 // 0x0065(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45J9[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartPosition;                                           // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESequenceEvalReinit                                        ReinitializationBehavior;                                // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReinitialized;                                          // 0x006D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TFB[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Slot
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	struct FAnimNode_Slot : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                SlotName;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POT9[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimationNode_TwoWayBlend
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	struct FAnimationNode_TwoWayBlend : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           A;                                                       // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPoseLink                                           B;                                                       // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0064(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      InternalBlendAlpha;                                      // 0x006C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAIsRelevant;                                            // 0x0070(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bBIsRelevant;                                            // 0x0071(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bResetChildOnActivation;                                 // 0x0072(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A7WD[0x5];                                   // 0x0073(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
	 * Size -> 0x005C
	 */
	struct FAnimPhysConstraintSetup
	{
	public:
		EAnimPhysLinearConstraintType                              LinearXLimitType;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysLinearConstraintType                              LinearYLimitType;                                        // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysLinearConstraintType                              LinearZLimitType;                                        // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XS8L[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LinearAxesMin;                                           // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LinearAxesMax;                                           // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EAnimPhysAngularConstraintType                             AngularConstraintType;                                   // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysTwistAxis                                         TwistAxis;                                               // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GMAQ[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConeAngle;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularXAngle;                                           // 0x0024(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularYAngle;                                           // 0x0028(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularZAngle;                                           // 0x002C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularLimitsMin;                                        // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             AngularLimitsMax;                                        // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EAnimPhysTwistAxis                                         AngularTargetAxis;                                       // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6DW[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AngularTarget;                                           // 0x004C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLinearFullyLocked;                                      // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNCU[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
	 * Size -> 0x0040
	 */
	struct FAnimPhysPlanarLimit
	{
	public:
		struct FBoneReference                                      DrivingBone;                                             // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		struct FTransform                                          PlaneTransform;                                          // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
	 * Size -> 0x0028
	 */
	struct FAnimPhysSphericalLimit
	{
	public:
		struct FBoneReference                                      DrivingBone;                                             // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		struct FVector                                             SphereLocalOffset;                                       // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LimitRadius;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESphericalLimitType                                        LimitType;                                               // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VSQK[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
	 * Size -> 0x01F8 (FullSize[0x0268] - InheritedSize[0x0070])
	 */
	struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
	{
	public:
		EAnimPhysSimSpaceType                                      SimulationSpace;                                         // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSE2[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      RelativeSpaceBone;                                       // 0x0078(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bChain;                                                  // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRFF[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      BoundBone;                                               // 0x0090(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBoneReference                                      ChainEnd;                                                // 0x00A0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector                                             BoxExtents;                                              // 0x00B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LocalJointOffset;                                        // 0x00BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLinearSpring;                                           // 0x00CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAngularSpring;                                          // 0x00CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EASN[0x2];                                   // 0x00CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearSpringConstant;                                    // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularSpringConstant;                                   // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWind;                                             // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWindWasEnabled;                                         // 0x00D9(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMGT[0x2];                                   // 0x00DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WindScale;                                               // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideLinearDamping;                                  // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VWVK[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearDampingOverride;                                   // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAngularDamping;                                 // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9B9H[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularDampingOverride;                                  // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAngularBias;                                    // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_605J[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularBiasOverride;                                     // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoUpdate;                                               // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bDoEval;                                                 // 0x00F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YKHF[0x2];                                   // 0x00FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumSolverIterationsPreUpdate;                            // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSolverIterationsPostUpdate;                           // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimPhysConstraintSetup                            ConstraintSetup;                                         // 0x0104(0x005C) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bUsePlanarLimit;                                         // 0x0160(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P405[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimPhysPlanarLimit>                        PlanarLimits;                                            // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseSphericalLimits;                                     // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKWW[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimPhysSphericalLimit>                     SphericalLimits;                                         // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAnimPhysCollisionType                                     CollisionType;                                           // 0x0190(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZEK[0x3];                                   // 0x0191(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SphereCollisionRadius;                                   // 0x0194(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalForce;                                           // 0x0198(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M313[0xC4];                                  // 0x01A4(0x00C4) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
	 * Size -> 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
	 */
	struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x0070(0x0010) Edit, NativeAccessSpecifierPublic
		EComponentType                                             SourceComponent;                                         // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SLF[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DrivingCurve;                                            // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRange;                                               // 0x0094(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T6ZK[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RangeMin;                                                // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeMax;                                                // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMin;                                             // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMax;                                             // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDrivenDestinationMode                                     DestinationMode;                                         // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3M0[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParameterName;                                           // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x00B8(0x0010) Edit, NativeAccessSpecifierPublic
		EComponentType                                             TargetComponent;                                         // 0x00C8(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZHMJ[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAffectTargetTranslationX : 1;                           // 0x00CC(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetTranslationY : 1;                           // 0x00CC(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetTranslationZ : 1;                           // 0x00CC(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetRotationX : 1;                              // 0x00CC(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetRotationY : 1;                              // 0x00CC(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetRotationZ : 1;                              // 0x00CC(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetScaleX : 1;                                 // 0x00CC(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetScaleY : 1;                                 // 0x00CC(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetScaleZ : 1;                                 // 0x00CD(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PV55[0x2];                                   // 0x00CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDrivenBoneModificationMode                                ModificationMode;                                        // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33QR[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x0070(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x0080(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bCopyTranslation;                                        // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCopyRotation;                                           // 0x0091(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCopyScale;                                              // 0x0092(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneControlSpace                                          ControlSpace;                                            // 0x0093(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MF2A[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
	 * Size -> 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
	 */
	struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x0070(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x0080(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bCopyTranslation;                                        // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCopyRotation;                                           // 0x0091(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCopyScale;                                              // 0x0092(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ECopyBoneDeltaMode                                         CopyMode;                                                // 0x0093(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslationMultiplier;                                   // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMultiplier;                                      // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleMultiplier;                                         // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
	 * Size -> 0x0080 (FullSize[0x00F0] - InheritedSize[0x0070])
	 */
	struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FTransform                                          EffectorTransform;                                       // 0x0070(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneControlSpace                                          EffectorTransformSpace;                                  // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9GAM[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      EffectorTransformBone;                                   // 0x00A8(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EBoneRotationSource                                        EffectorRotationSource;                                  // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7QK[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      TipBone;                                                 // 0x00C0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBoneReference                                      RootBone;                                                // 0x00D0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebugDraw;                                        // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YRD[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
	 * Size -> 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
	 */
	struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      RightHandFK;                                             // 0x0070(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBoneReference                                      LeftHandFK;                                              // 0x0080(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBoneReference                                      RightHandIK;                                             // 0x0090(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBoneReference                                      LeftHandIK;                                              // 0x00A0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              IKBonesToMove;                                           // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      HandFKWeight;                                            // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6DEW[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_LookAt
	 * Size -> 0x00E0 (FullSize[0x0150] - InheritedSize[0x0070])
	 */
	struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x0070(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBoneReference                                      LookAtBone;                                              // 0x0080(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                LookAtSocket;                                            // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LookAtLocation;                                          // 0x0098(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EAxisOption                                                LookAtAxis;                                              // 0x00A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLookUpAxis;                                          // 0x00A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EAxisOption                                                LookUpAxis;                                              // 0x00A6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4YE[0x1];                                   // 0x00A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookAtClamp;                                             // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpolationBlend                                        InterpolationType;                                       // 0x00AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7T3E[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpolationTime;                                       // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationTriggerThreashold;                          // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebug;                                            // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5SX[0x97];                                  // 0x00B9(0x0097) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
	 * Size -> 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
	 */
	struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x0070(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x0080(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x008C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0098(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneModificationMode                                      TranslationMode;                                         // 0x00A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      RotationMode;                                            // 0x00A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      ScaleMode;                                               // 0x00A6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          TranslationSpace;                                        // 0x00A7(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          RotationSpace;                                           // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          ScaleSpace;                                              // 0x00A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G6EF[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
	 * Size -> 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
	 */
	struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToObserve;                                           // 0x0070(0x0010) Edit, NativeAccessSpecifierPublic
		EBoneControlSpace                                          DisplaySpace;                                            // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRelativeToRefPose;                                      // 0x0081(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_15PV[0x2];                                   // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Translation;                                             // 0x0084(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0090(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x009C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
	 * Size -> 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
	 */
	struct FAnimNode_PoseDriver : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x0070(0x0010) Edit, NativeAccessSpecifierPublic
		float                                                      RadialScaling;                                           // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZHK[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPoseAsset*                                          PoseSource;                                              // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeRefPoseAsNeutralPose;                            // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EPoseDriverType                                            Type;                                                    // 0x0091(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneAxis                                                  TwistAxis;                                               // 0x0092(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YROJ[0x2D];                                  // 0x0093(0x002D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      TargetBone;                                              // 0x0070(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBoneReference                                      SourceBone;                                              // 0x0080(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneAxis                                                  RotationAxisToRefer;                                     // 0x0094(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAdditive;                                             // 0x0095(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0MQC[0x2];                                   // 0x0096(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
	 * Size -> 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
	 */
	struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SpringBone;                                              // 0x0070(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bLimitDisplacement;                                      // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GSH6[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDisplacement;                                         // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpringStiffness;                                         // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpringDamping;                                           // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ErrorResetThresh;                                        // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoZSpring;                                              // 0x0094(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bTranslateX;                                             // 0x0095(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bTranslateY;                                             // 0x0096(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bTranslateZ;                                             // 0x0097(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRotateX;                                                // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRotateY;                                                // 0x0099(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRotateZ;                                                // 0x009A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O27L[0x2D];                                  // 0x009B(0x002D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Trail
	 * Size -> 0x0130 (FullSize[0x01A0] - InheritedSize[0x0070])
	 */
	struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      TrailBone;                                               // 0x0070(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    ChainLength;                                             // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      ChainBoneAxis;                                           // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertChainBoneAxis;                                    // 0x0085(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CT65[0x2];                                   // 0x0086(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TrailRelaxation;                                         // 0x0088(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UKQ7[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  TrailRelaxationSpeed;                                    // 0x0090(0x0080) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bLimitStretch;                                           // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0VJ[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchLimit;                                            // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FakeVelocity;                                            // 0x0118(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bActorSpaceFakeVel;                                      // 0x0124(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39TM[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      BaseJoint;                                               // 0x0128(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QO0Y[0x68];                                  // 0x0138(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.Axis
	 * Size -> 0x0010
	 */
	struct FAxis
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInLocalSpace;                                           // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OY6V[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
	 * Size -> 0x0020
	 */
	struct FReferenceBoneFrame
	{
	public:
		struct FBoneReference                                      Bone;                                                    // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		struct FAxis                                               Axis;                                                    // 0x0010(0x0010) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
	 * Size -> 0x0078 (FullSize[0x00E8] - InheritedSize[0x0070])
	 */
	struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FReferenceBoneFrame                                 BaseFrame;                                               // 0x0070(0x0020) Edit, NativeAccessSpecifierPublic
		struct FReferenceBoneFrame                                 TwistFrame;                                              // 0x0090(0x0020) Edit, NativeAccessSpecifierPublic
		struct FAxis                                               TwistPlaneNormalAxis;                                    // 0x00B0(0x0010) Edit, NativeAccessSpecifierPublic
		float                                                      RangeMax;                                                // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMin;                                             // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMax;                                             // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRSC[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimCurveParam                                     Curve;                                                   // 0x00D0(0x0010) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C7MM[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
	 * Size -> 0x0048 (FullSize[0x00B8] - InheritedSize[0x0070])
	 */
	struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      IKBone;                                                  // 0x0070(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector                                             EffectorLocation;                                        // 0x0080(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             JointTargetLocation;                                     // 0x008C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           StretchLimits;                                           // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                EffectorSpaceBoneName;                                   // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTakeRotationFromEffectorSpace : 1;                      // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bMaintainEffectorRelRot : 1;                             // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowStretching : 1;                                    // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V93R[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EBoneControlSpace                                          EffectorLocationSpace;                                   // 0x00AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          JointTargetLocationSpace;                                // 0x00AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R95M[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                JointTargetSpaceBoneName;                                // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_WheelHandler
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_BCRO[0x18];                                  // 0x0070(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
	 * Size -> 0x0030
	 */
	struct FAnimLegIKDefinition
	{
	public:
		struct FBoneReference                                      IKFootBone;                                              // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		struct FBoneReference                                      FKFootBone;                                              // 0x0010(0x0010) Edit, NativeAccessSpecifierPublic
		int32_t                                                    NumBonesInLimb;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      FootBoneForwardAxis;                                     // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRotationLimit;                                    // 0x0025(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCSS[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinRotationAngle;                                        // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableKneeTwistCorrection;                              // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A1RR[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimLegIKData
	 * Size -> 0x0070
	 */
	struct FAnimLegIKData
	{
	public:
		unsigned char                                              UnknownData_N51I[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_LegIK
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                      ReachPrecision;                                          // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAnimLegIKDefinition>                        LegsDefinition;                                          // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAnimLegIKData>                              LegsData;                                                // 0x0088(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.IKChain
	 * Size -> 0x0030
	 */
	struct FIKChain
	{
	public:
		unsigned char                                              UnknownData_M047[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.IKChainLink
	 * Size -> 0x001C
	 */
	struct FIKChainLink
	{
	public:
		unsigned char                                              UnknownData_TSWW[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
