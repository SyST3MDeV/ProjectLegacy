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
	 * Class McpProfileSys.McpItemDefinitionBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMcpItemDefinitionBase : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class McpProfileSys.McpProfile
	 * Size -> 0x0298 (FullSize[0x02C0] - InheritedSize[0x0028])
	 */
	class UMcpProfile : public UObject
	{
	public:
		unsigned char                                              UnknownData_1SKE[0xA0];                                  // 0x0028(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DebugName;                                               // 0x00C8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0Z5H[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMcpProfileGroup*                                    ProfileGroup;                                            // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ProfileId;                                               // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int64_t                                                    ProfileRevision;                                         // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    FullProfileQueryQueued;                                  // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldCreateInstances;                                  // 0x0104(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bProfileLockOperationPending;                            // 0x0105(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bProfileWriteLocked;                                     // 0x0106(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NQO6[0x1];                                   // 0x0107(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           ProfileWriteLockExpireTime;                              // 0x0108(0x0008) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bProfileUnlockOperationPending;                          // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8N3K[0x1AF];                                 // 0x0111(0x01AF) MISSED OFFSET (PADDING)

	public:
		void UnlockProfileForWrite(const class FString& Code, struct FDedicatedServerUrlContext* Context);
		void QueryProfile(struct FBaseUrlContext* Context);
		void LockProfileForWrite(const class FString& Code, int32_t Timeout, struct FDedicatedServerUrlContext* Context);
		void DeleteProfile(struct FClientUrlContext* Context);
		void DeleteAllProfiles(struct FClientUrlContext* Context);
		static UClass* StaticClass();
	};

	/**
	 * Class McpProfileSys.McpItemAware
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMcpItemAware : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class McpProfileSys.McpProfileGroup
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class UMcpProfileGroup : public UObject
	{
	public:
		unsigned char                                              UnknownData_ATYN[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DelayMcpResults;                                         // 0x0078(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7IND[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FProfileEntry>                               ProfileList;                                             // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bIsInitialized;                                          // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X2SA[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerName;                                              // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsServer;                                               // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2RF7[0x37];                                  // 0x00A9(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LastMcpVersion;                                          // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTimespan                                           LocalTimeOffset;                                         // 0x00F0(0x0008) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FProfilePendingHttpRequest>                  PendingRequests;                                         // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bIsProcessingRequestGenerator;                           // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C2LB[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LockCode;                                                // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMcpProfile*>                                 LockedProfiles;                                          // 0x0120(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              LockedProfilesString;                                    // 0x0130(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ProfileWriteLockTimeoutSecs;                             // 0x0140(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HK8J[0xC];                                   // 0x0144(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class McpProfileSys.McpProfileManager
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UMcpProfileManager : public UObject
	{
	public:
		TArray<struct FProfileGroupEntry>                          ServerProfileGroups;                                     // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FProfileGroupEntry>                          ClientProfileGroups;                                     // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
