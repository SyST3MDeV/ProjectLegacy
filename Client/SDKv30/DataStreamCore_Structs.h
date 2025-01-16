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
	 * Enum DataStreamCore.EResult
	 */
	enum class EResult : uint8_t
	{
		ESuccess = 0,
		EError   = 1,
		MAX      = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
