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
	 * Function McpProfileSys.McpProfile.UnlockProfileForWrite
	 */
	struct UMcpProfile_UnlockProfileForWrite_Params
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDedicatedServerUrlContext                          Context;                                                 // 0x0010(0x0060)  (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
	};

	/**
	 * Function McpProfileSys.McpProfile.QueryProfile
	 */
	struct UMcpProfile_QueryProfile_Params
	{
	public:
		struct FBaseUrlContext                                     Context;                                                 // 0x0000(0x0060)  (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
	};

	/**
	 * Function McpProfileSys.McpProfile.LockProfileForWrite
	 */
	struct UMcpProfile_LockProfileForWrite_Params
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Timeout;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_58ON[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDedicatedServerUrlContext                          Context;                                                 // 0x0020(0x0060)  (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
	};

	/**
	 * Function McpProfileSys.McpProfile.DeleteProfile
	 */
	struct UMcpProfile_DeleteProfile_Params
	{
	public:
		struct FClientUrlContext                                   Context;                                                 // 0x0000(0x0060)  (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
	};

	/**
	 * Function McpProfileSys.McpProfile.DeleteAllProfiles
	 */
	struct UMcpProfile_DeleteAllProfiles_Params
	{
	public:
		struct FClientUrlContext                                   Context;                                                 // 0x0000(0x0060)  (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
