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
	 * Class Qos.QosBeaconClient
	 * Size -> 0x0068 (FullSize[0x0470] - InheritedSize[0x0408])
	 */
	class AQosBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_E84V[0x8];                                   // 0x0408(0x0008) Fix Super Size
		unsigned char                                              UnknownData_L7KS[0x60];                                  // 0x0410(0x0060) MISSED OFFSET (PADDING)

	public:
		void ServerQosRequest(const class FString& InSessionId);
		void ClientQosResponse(EQosResponseType Response);
		static UClass* StaticClass();
	};

	/**
	 * Class Qos.QosBeaconHost
	 * Size -> 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
	 */
	class AQosBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		unsigned char                                              UnknownData_G094[0x10];                                  // 0x03A8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Qos.QosRegionManager
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UQosRegionManager : public UObject
	{
	public:
		bool                                                       bUseOldQosServers;                                       // 0x0028(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EFU7[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumTestsPerRegion;                                       // 0x002C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PingTimeout;                                             // 0x0030(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J2B8[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FQosDatacenterInfo>                          Datacenters;                                             // 0x0038(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		struct FDateTime                                           LastCheckTimestamp;                                      // 0x0048(0x0008) ZeroConstructor, NativeAccessSpecifierPrivate
		class UQosEvaluator*                                       Evaluator;                                               // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EQosCompletionResult                                       QosEvalResult;                                           // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IRRS[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FQosRegionInfo>                              RegionOptions;                                           // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              ForceRegionId;                                           // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              SelectedRegionId;                                        // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GZRM[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Qos.QosEvaluator
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class UQosEvaluator : public UObject
	{
	public:
		struct FQosSearchPass                                      CurrentSearchPass;                                       // 0x0028(0x0008) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_58DJ[0xA8];                                  // 0x0030(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ControllerId;                                            // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bInProgress;                                             // 0x00DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bCancelOperation;                                        // 0x00DD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2B1N[0x2];                                   // 0x00DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FQosRegionInfo>                              Datacenters;                                             // 0x00E0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SO49[0x30];                                  // 0x00F0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
