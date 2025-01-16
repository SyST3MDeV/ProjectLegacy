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
	 * Enum OnlineSubsystemUtils.EBeaconConnectionState
	 */
	enum class EBeaconConnectionState : uint8_t
	{
		Invalid = 0,
		Closed  = 1,
		Pending = 2,
		Open    = 3,
		MAX     = 4
	};

	/**
	 * Enum OnlineSubsystemUtils.EPartyReservationResult
	 */
	enum class EPartyReservationResult : uint8_t
	{
		NoResult                   = 0,
		RequestPending             = 1,
		GeneralError               = 2,
		PartyLimitReached          = 3,
		IncorrectPlayerCount       = 4,
		RequestTimedOut            = 5,
		ReservationDuplicate       = 6,
		ReservationNotFound        = 7,
		ReservationAccepted        = 8,
		ReservationDenied          = 9,
		ReservationDenied_Banned   = 10,
		ReservationRequestCanceled = 11,
		ReservationInvalid         = 12,
		BadSessionId               = 13,
		MAX                        = 14
	};

	/**
	 * Enum OnlineSubsystemUtils.EClientRequestType
	 */
	enum class EClientRequestType : uint8_t
	{
		NonePending                = 0,
		ExistingSessionReservation = 1,
		ReservationUpdate          = 2,
		EmptyServerReservation     = 3,
		Reconnect                  = 4,
		MAX                        = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
