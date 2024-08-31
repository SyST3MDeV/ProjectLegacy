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
	 * Enum Party.EPartyType
	 */
	enum class EPartyType : uint8_t
	{
		Public      = 0,
		FriendsOnly = 1,
		Private     = 2,
		MAX         = 3
	};

	/**
	 * Enum Party.EJoinPartyDenialReason
	 */
	enum class EJoinPartyDenialReason : uint8_t
	{
		NoReason       = 0,
		Busy           = 1,
		PartyFull      = 2,
		GameFull       = 3,
		NotPartyLeader = 4,
		PartyPrivate   = 5,
		NeedsTutorial  = 6,
		MAX            = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Party.PartyState
	 * Size -> 0x0010
	 */
	struct FPartyState
	{
	public:
		unsigned char                                              UnknownData_39WI[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPartyType                                                 PartyType;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLeaderFriendsOnly;                                      // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLeaderInvitesOnly;                                      // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInvitesDisabled;                                        // 0x000B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3CK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Party.PartyMemberRepState
	 * Size -> 0x0008
	 */
	struct FPartyMemberRepState
	{
	public:
		unsigned char                                              UnknownData_4HSX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
