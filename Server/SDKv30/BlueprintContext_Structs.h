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
	 * Enum BlueprintContext.EPingQuality
	 */
	enum class EPingQuality : uint8_t
	{
		Invalid   = 0,
		Excellent = 1,
		Good      = 2,
		Mediocre  = 3,
		Bad       = 4,
		MAX       = 5
	};

	/**
	 * Enum BlueprintContext.ECardFilterType
	 */
	enum class ECardFilterType : uint8_t
	{
		All         = 0,
		Equipment   = 1,
		Upgrades    = 2,
		Consumables = 3,
		MAX         = 4
	};

	/**
	 * Enum BlueprintContext.EOrionFriendshipStatus
	 */
	enum class EOrionFriendshipStatus : uint8_t
	{
		None            = 0,
		Friends         = 1,
		RequestReceived = 2,
		RequestSent     = 3,
		MAX             = 4
	};

	/**
	 * Enum BlueprintContext.EMenuMoveDirection
	 */
	enum class EMenuMoveDirection : uint8_t
	{
		Left  = 0,
		Right = 1,
		Up    = 2,
		Down  = 3,
		MAX   = 4
	};

	/**
	 * Enum BlueprintContext.ENavigationResult
	 */
	enum class ENavigationResult : uint8_t
	{
		Unhandled = 0,
		Partial   = 1,
		Complete  = 2,
		MAX       = 3
	};

	/**
	 * Enum BlueprintContext.EKeyBindingType
	 */
	enum class EKeyBindingType : uint8_t
	{
		Action       = 0,
		PositiveAxis = 1,
		NegativeAxis = 2,
		MAX          = 3
	};

	/**
	 * Enum BlueprintContext.EUnlockableFeature
	 */
	enum class EUnlockableFeature : uint8_t
	{
		DeckBuilder             = 0,
		PvP                     = 1,
		TeamBuilderCaptain      = 2,
		TeamBuilderRoles        = 3,
		StopHeroRecommendations = 4,
		EasyHeroes              = 5,
		Tier0Heroes             = 6,
		Tier1Heroes             = 7,
		Tier2Heroes             = 8,
		MAX                     = 9
	};

	/**
	 * Enum BlueprintContext.ETeamBuilderStep
	 */
	enum class ETeamBuilderStep : uint8_t
	{
		Hero  = 0,
		Role  = 1,
		Deck  = 2,
		Lane  = 3,
		Queue = 4,
		MAX   = 5
	};

	/**
	 * Enum BlueprintContext.EPartyMemberState
	 */
	enum class EPartyMemberState : uint8_t
	{
		Solo    = 0,
		InParty = 1,
		MAX     = 2
	};

	/**
	 * Enum BlueprintContext.ETestResult
	 */
	enum class ETestResult : uint8_t
	{
		Unknown   = 0,
		Failed    = 1,
		Succeeded = 2,
		MAX       = 3
	};

	/**
	 * Enum BlueprintContext.EInstallStatus
	 */
	enum class EInstallStatus : uint8_t
	{
		NotInstalled = 0,
		Installing   = 1,
		OnDisc       = 2,
		OnHardDrive  = 3,
		MAX          = 4
	};

	/**
	 * Enum BlueprintContext.EInstallPriority
	 */
	enum class EInstallPriority : uint8_t
	{
		Immediate = 0,
		High      = 1,
		Low       = 2,
		MAX       = 3
	};

	/**
	 * Enum BlueprintContext.EInstallSpeed
	 */
	enum class EInstallSpeed : uint8_t
	{
		Paused = 0,
		Slow   = 1,
		Fast   = 2,
		MAX    = 3
	};

	/**
	 * Enum BlueprintContext.ECardFilter
	 */
	enum class ECardFilter : uint8_t
	{
		Invalid           = 0,
		StatFilter        = 1,
		NameFilter        = 2,
		CostFilter        = 3,
		SlotFilter        = 4,
		CardUpgradeFilter = 5,
		CardCoreFilter    = 6,
		MAX               = 7
	};

	/**
	 * Enum BlueprintContext.EOrionPartyTransition
	 */
	enum class EOrionPartyTransition : uint8_t
	{
		Idle    = 0,
		Joining = 1,
		Leaving = 2,
		Max     = 3,
		MAX     = 4
	};

	/**
	 * Enum BlueprintContext.EHeroPickStatus
	 */
	enum class EHeroPickStatus : uint8_t
	{
		Available = 0,
		OtherPick = 1,
		Banned    = 2,
		NotOwned  = 3,
		MAX       = 4
	};

	/**
	 * Enum BlueprintContext.EDeckTooltipColumns
	 */
	enum class EDeckTooltipColumns : uint8_t
	{
		Offense                = 0,
		Defense                = 1,
		Utility                = 2,
		MAX_DECK_TOOLTIP_TYPES = 3,
		MAX                    = 4
	};

	/**
	 * Enum BlueprintContext.ETBQuickMatchRole
	 */
	enum class ETBQuickMatchRole : uint8_t
	{
		Solo    = 0,
		Captain = 1,
		MAX     = 2
	};

	/**
	 * Enum BlueprintContext.ETeamBuilderFlow
	 */
	enum class ETeamBuilderFlow : uint8_t
	{
		QuickMatch = 0,
		SoloRider  = 1,
		Captain    = 2,
		MAX        = 3
	};

	/**
	 * Enum BlueprintContext.EFeedbackType
	 */
	enum class EFeedbackType : uint8_t
	{
		Bug    = 0,
		Player = 1,
		MAX    = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
