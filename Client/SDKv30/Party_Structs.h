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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
