#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EditorStyle

#include "Basic.hpp"


namespace SDK
{

// Enum EditorStyle.EAssetEditorOpenLocation
// NumValues: 0x0008
enum class EAssetEditorOpenLocation : uint8
{
	Default                                  = 0,
	NewWindow                                = 1,
	MainWindow                               = 2,
	ContentBrowser                           = 3,
	LastDockedWindowOrNewWindow              = 4,
	LastDockedWindowOrMainWindow             = 5,
	LastDockedWindowOrContentBrowser         = 6,
	EAssetEditorOpenLocation_MAX             = 7,
};

// Enum EditorStyle.EColorVisionDeficiency
// NumValues: 0x0009
enum class EColorVisionDeficiency : uint8
{
	CVD_NormalVision                         = 0,
	CVD_Deuteranomly                         = 1,
	CVD_Deuteranopia                         = 2,
	CVD_Protanomly                           = 3,
	CVD_Protanopia                           = 4,
	CVD_Tritanomaly                          = 5,
	CVD_Tritanopia                           = 6,
	CVD_Achromatopsia                        = 7,
	CVD_MAX                                  = 8,
};

}
