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
	 * Enum FunctionalTesting.EFunctionalTestResult
	 */
	enum class EFunctionalTestResult : uint8_t
	{
		Invalid   = 0,
		Error     = 1,
		Running   = 2,
		Failed    = 3,
		Succeeded = 4,
		MAX       = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
