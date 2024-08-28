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
	 * Enum FunctionalTesting.EFunctionalTestResult
	 */
	enum class EFunctionalTestResult : uint8_t
	{
		Default   = 0,
		Invalid   = 1,
		Error     = 2,
		Running   = 3,
		Failed    = 4,
		Succeeded = 5,
		MAX       = 6
	};

	/**
	 * Enum FunctionalTesting.EComparisonMethod
	 */
	enum class EComparisonMethod : uint8_t
	{
		Equal_To                 = 0,
		Not_Equal_To             = 1,
		Greater_Than_Or_Equal_To = 2,
		Less_Than_Or_Equal_To    = 3,
		Greater_Than             = 4,
		Less_Than                = 5,
		MAX                      = 6
	};

	/**
	 * Enum FunctionalTesting.EComparisonTolerance
	 */
	enum class EComparisonTolerance : uint8_t
	{
		Zero   = 0,
		Low    = 1,
		High   = 2,
		Custom = 3,
		MAX    = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct FunctionalTesting.AITestSpawnInfo
	 * Size -> 0x0040
	 */
	struct FAITestSpawnInfo
	{
	public:
		class UClass*                                              PawnClass;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ControllerClass;                                         // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGenericTeamId                                      TeamID;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DPR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTree*                                       BehaviorTree;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              SpawnLocation;                                           // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberToSpawn;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnDelay;                                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreSpawnDelay;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6CQQ[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FunctionalTesting.AITestSpawnSet
	 * Size -> 0x0028
	 */
	struct FAITestSpawnSet
	{
	public:
		TArray<struct FAITestSpawnInfo>                            SpawnInfoContainer;                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled : 1;                                            // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKYE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              FallbackSpawnLocation;                                   // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FunctionalTesting.PendingDelayedSpawn
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	struct FPendingDelayedSpawn : public FAITestSpawnInfo
	{
	public:
		unsigned char                                              UnknownData_MYIF[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FunctionalTesting.ComparisonToleranceAmount
	 * Size -> 0x0006
	 */
	struct FComparisonToleranceAmount
	{
	public:
		unsigned char                                              Red;                                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Green;                                                   // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Blue;                                                    // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Alpha;                                                   // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MinBrightness;                                           // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxBrightness;                                           // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
