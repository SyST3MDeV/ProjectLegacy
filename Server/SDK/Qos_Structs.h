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
	 * Enum Qos.EQosResponseType
	 */
	enum class EQosResponseType : uint8_t
	{
		NoResponse = 0,
		Success    = 1,
		Failure    = 2,
		MAX        = 3
	};

	/**
	 * Enum Qos.EQosCompletionResult
	 */
	enum class EQosCompletionResult : uint8_t
	{
		Invalid  = 0,
		Success  = 1,
		Failure  = 2,
		Canceled = 3,
		MAX      = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Qos.QosPingServerInfo
	 * Size -> 0x0018
	 */
	struct FQosPingServerInfo
	{
	public:
		class FString                                              Address;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1CZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Qos.QosDatacenterInfo
	 * Size -> 0x0040
	 */
	struct FQosDatacenterInfo
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) NativeAccessSpecifierPublic
		class FString                                              RegionId;                                                // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bVisible;                                                // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bBeta;                                                   // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZG4[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FQosPingServerInfo>                          Servers;                                                 // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Qos.QosRegionInfo
	 * Size -> 0x0070
	 */
	struct FQosRegionInfo
	{
	public:
		struct FQosDatacenterInfo                                  Region;                                                  // 0x0000(0x0040) Transient, NativeAccessSpecifierPublic
		EQosCompletionResult                                       Result;                                                  // 0x0040(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LSPV[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AvgPingMs;                                               // 0x0044(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WBB4[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            PingResults;                                             // 0x0058(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FDateTime                                           LastCheckTimestamp;                                      // 0x0068(0x0008) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Qos.QosSearchPass
	 * Size -> 0x0008
	 */
	struct FQosSearchPass
	{
	public:
		int32_t                                                    RegionIdx;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentSessionIdx;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
