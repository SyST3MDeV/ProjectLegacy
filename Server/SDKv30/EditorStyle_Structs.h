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
	 * Enum EditorStyle.EAssetEditorOpenLocation
	 */
	enum class EAssetEditorOpenLocation : uint8_t
	{
		Default                          = 0,
		NewWindow                        = 1,
		MainWindow                       = 2,
		ContentBrowser                   = 3,
		LastDockedWindowOrNewWindow      = 4,
		LastDockedWindowOrMainWindow     = 5,
		LastDockedWindowOrContentBrowser = 6,
		MAX                              = 7
	};

	/**
	 * Enum EditorStyle.EColorVisionDeficiency
	 */
	enum class EColorVisionDeficiency : uint8_t
	{
		CVD_NormalVision  = 0,
		CVD_Deuteranomly  = 1,
		CVD_Deuteranopia  = 2,
		CVD_Protanomly    = 3,
		CVD_Protanopia    = 4,
		CVD_Tritanomaly   = 5,
		CVD_Tritanopia    = 6,
		CVD_Achromatopsia = 7,
		CVD_MAX           = 8
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
