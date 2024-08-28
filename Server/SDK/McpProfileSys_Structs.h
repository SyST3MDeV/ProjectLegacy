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
	 * ScriptStruct McpProfileSys.BaseUrlContext
	 * Size -> 0x0060
	 */
	struct FBaseUrlContext
	{
	public:
		unsigned char                                              UnknownData_XMZG[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct McpProfileSys.DedicatedServerUrlContext
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	struct FDedicatedServerUrlContext : public FBaseUrlContext
	{	};

	/**
	 * ScriptStruct McpProfileSys.ClientUrlContext
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	struct FClientUrlContext : public FBaseUrlContext
	{	};

	/**
	 * ScriptStruct McpProfileSys.ProfileEntry
	 * Size -> 0x0018
	 */
	struct FProfileEntry
	{
	public:
		class FString                                              ProfileId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMcpProfile*                                         ProfileObject;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct McpProfileSys.ProfilePendingHttpRequest
	 * Size -> 0x0070
	 */
	struct FProfilePendingHttpRequest
	{
	public:
		class UMcpProfile*                                         SourceProfile;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EICC[0x68];                                  // 0x0008(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct McpProfileSys.ProfileGroupEntry
	 * Size -> 0x0020
	 */
	struct FProfileGroupEntry
	{
	public:
		unsigned char                                              UnknownData_IF8G[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMcpProfileGroup*                                    ProfileGroup;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct McpProfileSys.McpLootEntry
	 * Size -> 0x0048
	 */
	struct FMcpLootEntry
	{
	public:
		class FString                                              ItemType;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemGuid;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJZP[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FJsonObjectWrapper                                  Attributes;                                              // 0x0028(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct McpProfileSys.McpLootResult
	 * Size -> 0x0020
	 */
	struct FMcpLootResult
	{
	public:
		class FString                                              TierGroupName;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMcpLootEntry>                               Items;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct McpProfileSys.McpItemIdAndQuantity
	 * Size -> 0x0018
	 */
	struct FMcpItemIdAndQuantity
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P96M[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct McpProfileSys.PublicUrlContext
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	struct FPublicUrlContext : public FBaseUrlContext
	{	};

	/**
	 * ScriptStruct McpProfileSys.McpAddItemRequest
	 * Size -> 0x0048
	 */
	struct FMcpAddItemRequest
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TemplateId;                                              // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FEC7[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FJsonObjectWrapper                                  Attributes;                                              // 0x0028(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct McpProfileSys.McpRemoveItemRequest
	 * Size -> 0x0010
	 */
	struct FMcpRemoveItemRequest
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct McpProfileSys.McpChangeQuantityRequest
	 * Size -> 0x0018
	 */
	struct FMcpChangeQuantityRequest
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeltaQuantity;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3W09[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct McpProfileSys.McpChangeAttributesRequest
	 * Size -> 0x0030
	 */
	struct FMcpChangeAttributesRequest
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FJsonObjectWrapper                                  Attributes;                                              // 0x0010(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct McpProfileSys.McpProfileChangeRequest
	 * Size -> 0x0058
	 */
	struct FMcpProfileChangeRequest
	{
	public:
		int32_t                                                    BaseProfileRevision;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RY6X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMcpAddItemRequest>                          AddRequests;                                             // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMcpRemoveItemRequest>                       RemoveRequests;                                          // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMcpChangeQuantityRequest>                   ChangeQuantityRequests;                                  // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMcpChangeAttributesRequest>                 ChangeAttributesRequests;                                // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FJsonObjectWrapper>                          ChangeStatRequests;                                      // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
