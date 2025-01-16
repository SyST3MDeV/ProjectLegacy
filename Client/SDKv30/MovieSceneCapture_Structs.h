#pragma once

/**
 * Name: Paragon
 * Version: v30
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
	 * Enum MovieSceneCapture.EHDRCaptureGamut
	 */
	enum class EHDRCaptureGamut : uint8_t
	{
		HCGM_Rec709  = 0,
		HCGM_P3DCI   = 1,
		HCGM_Rec2020 = 2,
		HCGM_ACES    = 3,
		HCGM_ACEScg  = 4,
		HCGM_MAX     = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
	 * Size -> 0x0048
	 */
	struct FMovieSceneCaptureSettings
	{
	public:
		unsigned char                                              OutputDirectory[0x10];                                   // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty MovieSceneCapture.MovieSceneCaptureSettings.OutputDirectory
		bool                                                       bCreateTemporaryCopiesOfLevels : 1;                      // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              GameModeOverride[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty MovieSceneCapture.MovieSceneCaptureSettings.GameModeOverride
		class FString                                              OutputFormat;                                            // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverwriteExisting : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bUseRelativeFrameNumbers : 1;                            // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              ZeroPadFrameNumbers;                                     // 0x0000(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameRate;                                               // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Resolution[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty MovieSceneCapture.MovieSceneCaptureSettings.Resolution
		bool                                                       bEnableTextureStreaming : 1;                             // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bCinematicMode : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowMovement : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bAllowTurning : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bShowPlayer : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bShowHUD : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3LN[0x47];                                  // 0x0001(0x0047) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneCapture.CaptureResolution
	 * Size -> 0x0008
	 */
	struct FCaptureResolution
	{
	public:
		uint32_t                                                   ResX;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ResY;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FNP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneCapture.CaptureProtocolID
	 * Size -> 0x0008
	 */
	struct FCaptureProtocolID
	{
	public:
		class FName                                                Identifier;                                              // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
	 * Size -> 0x0010
	 */
	struct FCompositionGraphCapturePasses
	{
	public:
		unsigned char                                              Value[0x10];                                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty MovieSceneCapture.CompositionGraphCapturePasses.Value
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
