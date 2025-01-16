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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
