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
	 * Enum OrionUI.EOrionLegacySlateWidgetType
	 */
	enum class EOrionLegacySlateWidgetType : uint8_t
	{
		None          = 0,
		Watermark     = 1,
		DeveloperMenu = 2,
		MAX           = 3,
		MAX01         = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
