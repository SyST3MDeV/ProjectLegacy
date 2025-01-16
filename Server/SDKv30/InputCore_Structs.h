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
	 * Enum InputCore.ETouchIndex
	 */
	enum class ETouchIndex : uint8_t
	{
		Touch1  = 0,
		Touch2  = 1,
		Touch3  = 2,
		Touch4  = 3,
		Touch5  = 4,
		Touch6  = 5,
		Touch7  = 6,
		Touch8  = 7,
		Touch9  = 8,
		Touch10 = 9,
		MAX     = 10
	};

	/**
	 * Enum InputCore.ETouchType
	 */
	enum class ETouchType : uint8_t
	{
		Began      = 0,
		Moved      = 1,
		Stationary = 2,
		Ended      = 3,
		NumTypes   = 4,
		MAX        = 5
	};

	/**
	 * Enum InputCore.EConsoleForGamepadLabels
	 */
	enum class EConsoleForGamepadLabels : uint8_t
	{
		None    = 0,
		XBoxOne = 1,
		PS4     = 2,
		MAX     = 3
	};

	/**
	 * Enum InputCore.EControllerHand
	 */
	enum class EControllerHand : uint8_t
	{
		Left  = 0,
		Right = 1,
		Pad   = 2,
		MAX   = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
