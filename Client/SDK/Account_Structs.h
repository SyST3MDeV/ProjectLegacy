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
	 * Enum Account.ECreateAccountResult
	 */
	enum class ECreateAccountResult : uint8_t
	{
		NotStarted                       = 0,
		Pending                          = 1,
		Success                          = 2,
		Console_LoginFailed              = 3,
		Console_DuplicateAuthAssociation = 4,
		DuplicateAccount                 = 5,
		GenericError                     = 6,
		MAX                              = 7
	};

	/**
	 * Enum Account.ELoginResult
	 */
	enum class ELoginResult : uint8_t
	{
		NotStarted                       = 0,
		Pending                          = 1,
		Success                          = 2,
		Console_LoginFailed              = 3,
		Console_AuthFailed               = 4,
		Console_MissingAuthAssociation   = 5,
		Console_DuplicateAuthAssociation = 6,
		AuthFailed                       = 7,
		NotEntitled                      = 8,
		EULACheckFailed                  = 9,
		ServiceUnavailable               = 10,
		GenericError                     = 11,
		RejoinCheckFailure               = 12,
		ConnectionFailed                 = 13,
		MAX                              = 14
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Account.GiftMessage
	 * Size -> 0x0030
	 */
	struct FGiftMessage
	{
	public:
		class FString                                              GiftCode;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SenderName;                                              // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3BPF[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Account.ExchangeAccessParams
	 * Size -> 0x0020
	 */
	struct FExchangeAccessParams
	{
	public:
		class FString                                              EntitlementId;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VendorReceipt;                                           // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
