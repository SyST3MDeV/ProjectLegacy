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
	 * Enum GameplayTags.EGameplayTagQueryExprType
	 */
	enum class EGameplayTagQueryExprType : uint8_t
	{
		Undefined    = 0,
		AnyTagsMatch = 1,
		AllTagsMatch = 2,
		NoTagsMatch  = 3,
		AnyExprMatch = 4,
		AllExprMatch = 5,
		NoExprMatch  = 6,
		MAX          = 7
	};

	/**
	 * Enum GameplayTags.EGameplayContainerMatchType
	 */
	enum class EGameplayContainerMatchType : uint8_t
	{
		Any = 0,
		All = 1,
		MAX = 2
	};

	/**
	 * Enum GameplayTags.EGameplayTagMatchType
	 */
	enum class EGameplayTagMatchType : uint8_t
	{
		Explicit          = 0,
		IncludeParentTags = 1,
		MAX               = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
