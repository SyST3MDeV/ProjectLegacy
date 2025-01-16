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
	 * Enum OnlineSubsystem.EInAppPurchaseState
	 */
	enum class EInAppPurchaseState : uint8_t
	{
		Success    = 0,
		Failed     = 1,
		Cancelled  = 2,
		Invalid    = 3,
		NotAllowed = 4,
		Restored   = 5,
		Unknown    = 6,
		MAX        = 7
	};

	/**
	 * Enum OnlineSubsystem.EMPMatchOutcome
	 */
	enum class EMPMatchOutcome : uint8_t
	{
		None        = 0,
		Quit        = 1,
		Won         = 2,
		Lost        = 3,
		Tied        = 4,
		TimeExpired = 5,
		First       = 6,
		Second      = 7,
		Third       = 8,
		Fourth      = 9,
		MAX         = 10
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
