#pragma once

/**
 * Name: Paragon
 * Version: v34
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
	 * Enum OrionGame.EOrionProjectileMovementMode
	 */
	enum class EOrionProjectileMovementMode : uint8_t
	{
		Default = 0,
		Homing  = 1,
		MAX     = 2
	};

	/**
	 * Enum OrionGame.EOrionTeam
	 */
	enum class EOrionTeam : uint8_t
	{
		TeamRed       = 0,
		TeamBlue      = 1,
		TeamCreep     = 2,
		TeamSpectator = 3,
		NoTeam        = 4,
		TeamCount     = 5,
		MAX           = 6
	};

	/**
	 * Enum OrionGame.EOrionProjectileLaunchMode
	 */
	enum class EOrionProjectileLaunchMode : uint8_t
	{
		Default         = 0,
		ArcToTargetHigh = 1,
		ArcToTargetLow  = 2,
		ArcToMaxRange   = 3,
		COUNT           = 4,
		MAX             = 5
	};

	/**
	 * Enum OrionGame.EOrionProjectileSpeed
	 */
	enum class EOrionProjectileSpeed : uint8_t
	{
		VerySlow    = 0,
		Slow        = 1,
		Default     = 2,
		Fast        = 3,
		MaxSpeed    = 4,
		LMB_Slow    = 5,
		LMB_Default = 6,
		COUNT       = 7,
		MAX         = 8
	};

	/**
	 * Enum OrionGame.EOrionMuzzleSocket
	 */
	enum class EOrionMuzzleSocket : uint8_t
	{
		None      = 0,
		Muzzle_01 = 1,
		Muzzle_02 = 2,
		Muzzle_03 = 3,
		Muzzle_04 = 4,
		Muzzle_05 = 5,
		COUNT     = 6,
		MAX       = 7
	};

	/**
	 * Enum OrionGame.EOrionItemType
	 */
	enum class EOrionItemType : uint8_t
	{
		Banner           = 0,
		BannerAlteration = 1,
		Boost            = 2,
		Card             = 3,
		CardPack         = 4,
		ClashMob         = 5,
		Component        = 6,
		Currency         = 7,
		Deck             = 8,
		Emote            = 9,
		GiftBox          = 10,
		Glyph            = 11,
		Hero             = 12,
		Quest            = 13,
		Skin             = 14,
		Token            = 15,
		CodeToken        = 16,
		Simple           = 17,
		CuratedDeck      = 18,
		Profile          = 19,
		Objective        = 20,
		AIData           = 21,
		Max_None         = 22,
		MAX              = 23
	};

	/**
	 * Enum OrionGame.EOrionAbilityBinding
	 */
	enum class EOrionAbilityBinding : uint8_t
	{
		Ability1         = 0,
		Ability2         = 1,
		Ability3         = 2,
		Ability4         = 3,
		Ability5         = 4,
		Travel           = 5,
		Jump             = 6,
		Recall           = 7,
		Passive          = 8,
		ActivatableCard1 = 9,
		ActivatableCard2 = 10,
		ActivatableCard3 = 11,
		ActivatableCard4 = 12,
		PrimeHelix       = 13,
		Emote1           = 14,
		Emote2           = 15,
		Emote3           = 16,
		Emote4           = 17,
		CardShop         = 18,
		Sprint           = 19,
		MAX              = 20,
		MAX01            = 21
	};

	/**
	 * Enum OrionGame.EOrionRole
	 */
	enum class EOrionRole : uint8_t
	{
		Invalid  = 0,
		Any      = 1,
		Assassin = 2,
		Fighter  = 3,
		Caster   = 4,
		Ranger   = 5,
		Support  = 6,
		Tank     = 7,
		MAX      = 8,
		MAX01    = 9
	};

	/**
	 * Enum OrionGame.EOrionHeroRangeType
	 */
	enum class EOrionHeroRangeType : uint8_t
	{
		None   = 0,
		Melee  = 1,
		Ranged = 2,
		MAX    = 3
	};

	/**
	 * Enum OrionGame.EOrionHeroTier
	 */
	enum class EOrionHeroTier : uint8_t
	{
		None  = 0,
		Tier0 = 1,
		Tier1 = 2,
		Tier2 = 3,
		MAX   = 4,
		MAX01 = 5
	};

	/**
	 * Enum OrionGame.EOrionPartyMemberStateFlags
	 */
	enum class EOrionPartyMemberStateFlags : uint8_t
	{
		AccountLevel     = 0,
		LevelProgress    = 1,
		MatchmakingLevel = 2,
		bAfk             = 3,
		MAX              = 4
	};

	/**
	 * Enum OrionGame.EOrionTextColor
	 */
	enum class EOrionTextColor : uint8_t
	{
		Light    = 0,
		Dark     = 1,
		Emphasis = 2,
		Black    = 3,
		Custom   = 4,
		MAX      = 5,
		MAX01    = 6
	};

	/**
	 * Enum OrionGame.EOrionWidgetStyleSize
	 */
	enum class EOrionWidgetStyleSize : uint8_t
	{
		Small  = 0,
		Medium = 1,
		Large  = 2,
		MAX    = 3,
		MAX01  = 4
	};

	/**
	 * Enum OrionGame.EOrionTableViewSelectionMode
	 */
	enum class EOrionTableViewSelectionMode : uint8_t
	{
		None   = 0,
		Single = 1,
		MAX    = 2
	};

	/**
	 * Enum OrionGame.ENotificationButton
	 */
	enum class ENotificationButton : uint8_t
	{
		Left  = 0,
		Right = 1,
		MAX   = 2
	};

	/**
	 * Enum OrionGame.ENotificationType
	 */
	enum class ENotificationType : uint8_t
	{
		Static      = 0,
		Interactive = 1,
		Information = 2,
		Error       = 3,
		Invalid     = 4,
		MAX         = 5
	};

	/**
	 * Enum OrionGame.EOrionButtonState
	 */
	enum class EOrionButtonState : uint8_t
	{
		Normal = 0,
		Over   = 1,
		Down   = 2,
		MAX    = 3
	};

	/**
	 * Enum OrionGame.EOrionUIState
	 */
	enum class EOrionUIState : uint8_t
	{
		Invalid         = 0,
		InitialPreload  = 1,
		Title           = 2,
		Login           = 3,
		HotfixAndLoad   = 4,
		FrontEnd        = 5,
		Match           = 6,
		Replay          = 7,
		DraftLobby      = 8,
		Debug           = 9,
		Development_HUD = 10,
		RejoinMatch     = 11,
		MAX             = 12,
		MAX01           = 13
	};

	/**
	 * Enum OrionGame.EOrionUIAnalyticsTrackingLevel
	 */
	enum class EOrionUIAnalyticsTrackingLevel : uint8_t
	{
		None      = 0,
		Verbose   = 1,
		Normal    = 2,
		Important = 3,
		MAX       = 4
	};

	/**
	 * Enum OrionGame.EMinionLastHitVisualizationMode
	 */
	enum class EMinionLastHitVisualizationMode : uint8_t
	{
		Never        = 0,
		ByExperiment = 1,
		Always       = 2,
		MAX          = 3
	};

	/**
	 * Enum OrionGame.EHUDTutorialVisibilityState
	 */
	enum class EHUDTutorialVisibilityState : uint8_t
	{
		StartVisible = 0,
		StartHidden  = 1,
		MAX          = 2
	};

	/**
	 * Enum OrionGame.EOrionStatEvaluationType
	 */
	enum class EOrionStatEvaluationType : uint8_t
	{
		AccountPersistant = 0,
		Accumulated       = 1,
		Match             = 2,
		MAX               = 3
	};

	/**
	 * Enum OrionGame.EOrionStatTrackType
	 */
	enum class EOrionStatTrackType : uint8_t
	{
		TrackNone = 0,
		MatchStat = 1,
		LifeStat  = 2,
		MAX       = 3
	};

	/**
	 * Enum OrionGame.EPlayerRatingResult
	 */
	enum class EPlayerRatingResult : uint8_t
	{
		None          = 0,
		MoraleBooster = 1,
		TeamPlayer    = 2,
		Teacher       = 3,
		Strategist    = 4,
		Pro           = 5,
		CommsAbuser   = 6,
		Deserter      = 7,
		Saboteur      = 8,
		Cheater       = 9,
		Mismatched    = 10,
		MAX           = 11
	};

	/**
	 * Enum OrionGame.EOrionHeroAvailability
	 */
	enum class EOrionHeroAvailability : uint8_t
	{
		Available = 0,
		Banned    = 1,
		Locked    = 2,
		Taken     = 3,
		MAX       = 4,
		MAX01     = 5
	};

	/**
	 * Enum OrionGame.ETravelModeModes
	 */
	enum class ETravelModeModes : uint8_t
	{
		MoveWhileCast = 0,
		StopWhileCast = 1,
		MAX           = 2
	};

	/**
	 * Enum OrionGame.EOrionEmoteType
	 */
	enum class EOrionEmoteType : uint8_t
	{
		Flavor    = 0,
		Emote_MAX = 1,
		MAX       = 2
	};

	/**
	 * Enum OrionGame.EOrionBannerType
	 */
	enum class EOrionBannerType : uint8_t
	{
		Staff          = 0,
		Charm          = 1,
		VFX            = 2,
		ImpactVFX      = 3,
		DeactivationFX = 4,
		ActivationFX   = 5,
		MAX            = 6
	};

	/**
	 * Enum OrionGame.EOrionHeroAbilityType
	 */
	enum class EOrionHeroAbilityType : uint8_t
	{
		Primary  = 0,
		Normal   = 1,
		Passive  = 2,
		Ultimate = 3,
		MAX      = 4
	};

	/**
	 * Enum OrionGame.EOrionHeroStat
	 */
	enum class EOrionHeroStat : uint8_t
	{
		BasicAttack   = 0,
		AbilityAttack = 1,
		Durability    = 2,
		Mobility      = 3,
		Total         = 4,
		MAX           = 5
	};

	/**
	 * Enum OrionGame.EOrionAcceptMatchState
	 */
	enum class EOrionAcceptMatchState : uint8_t
	{
		Invalid = 0,
		Accept  = 1,
		Decline = 2,
		MAX     = 3,
		MAX01   = 4
	};

	/**
	 * Enum OrionGame.EOrionMatchmakingType
	 */
	enum class EOrionMatchmakingType : uint8_t
	{
		Invalid       = 0,
		Players       = 1,
		PlayersVsAI   = 2,
		PlayersWithAI = 3,
		Tutorial1v1   = 4,
		Players3v3    = 5,
		PerfTest      = 6,
		MAX           = 7,
		MAX01         = 8
	};

	/**
	 * Enum OrionGame.EOrionPlayerPlatform
	 */
	enum class EOrionPlayerPlatform : uint8_t
	{
		PC  = 0,
		PS4 = 1,
		MAX = 2
	};

	/**
	 * Enum OrionGame.EOrionStatTypes
	 */
	enum class EOrionStatTypes : uint8_t
	{
		PhysicalRating       = 0,
		EnergyRating         = 1,
		PhysicalArmorPierce  = 2,
		EnergyArmorPierce    = 3,
		ShieldPierce         = 4,
		AttackSpeed          = 5,
		CriticalStrikeChance = 6,
		CriticalStrikeDamage = 7,
		Cleave               = 8,
		MaxHealth            = 9,
		HealthRegen          = 10,
		PhysicalArmor        = 11,
		EnergyArmor          = 12,
		Lifesteal            = 13,
		Perserverance        = 14,
		MaxMana              = 15,
		ManaRegen            = 16,
		CooldownReduction    = 17,
		MovementSpeed        = 18,
		TravelSpeed          = 19,
		Max                  = 20,
		MAX                  = 21
	};

	/**
	 * Enum OrionGame.EOrionAimAssistStrength
	 */
	enum class EOrionAimAssistStrength : uint8_t
	{
		Heavy = 0,
		Light = 1,
		Off   = 2,
		COUNT = 3,
		MAX   = 4
	};

	/**
	 * Enum OrionGame.EOrionInputType
	 */
	enum class EOrionInputType : uint8_t
	{
		Mouse_Keyboard = 0,
		DualShock4     = 1,
		Xbox360        = 2,
		MAX            = 3,
		MAX01          = 4
	};

	/**
	 * Enum OrionGame.EOrionPosition
	 */
	enum class EOrionPosition : uint8_t
	{
		Invalid    = 0,
		Any        = 1,
		TopLane    = 2,
		MiddleLane = 3,
		BottomLane = 4,
		Jungle     = 5,
		MAX        = 6,
		MAX01      = 7
	};

	/**
	 * Enum OrionGame.EOrionChunkId
	 */
	enum class EOrionChunkId : uint8_t
	{
		DefaultChunk  = 0,
		GameplayChunk = 1,
		MAX           = 2
	};

	/**
	 * Enum OrionGame.ESpectatorCameraType
	 */
	enum class ESpectatorCameraType : uint8_t
	{
		DebugFree       = 0,
		Drone           = 1,
		Chase           = 2,
		Isometric       = 3,
		Arena           = 4,
		OverTheShoulder = 5,
		MAX             = 6,
		MAX01           = 7
	};

	/**
	 * Enum OrionGame.EOrionOutlineType
	 */
	enum class EOrionOutlineType : uint8_t
	{
		Teammate = 0,
		Enemy    = 1,
		Neutral  = 2,
		MAX      = 3
	};

	/**
	 * Enum OrionGame.EOrionPickUpSpeed
	 */
	enum class EOrionPickUpSpeed : uint8_t
	{
		VerySlow = 0,
		Slow     = 1,
		Default  = 2,
		Fast     = 3,
		MaxSpeed = 4,
		COUNT    = 5,
		MAX      = 6
	};

	/**
	 * Enum OrionGame.EOrionCardRarity
	 */
	enum class EOrionCardRarity : uint8_t
	{
		Starter  = 0,
		Common   = 1,
		Uncommon = 2,
		Rare     = 3,
		Epic     = 4,
		MAX      = 5,
		MAX01    = 6
	};

	/**
	 * Enum OrionGame.EOrionCardSlottypes
	 */
	enum class EOrionCardSlottypes : uint8_t
	{
		CST_Passive                   = 0,
		CST_Active                    = 1,
		CST_Upgrade                   = 2,
		CST_Prime                     = 3,
		CST_HandSlot_ActiveAndPassive = 4,
		CST_None                      = 5,
		CST_MAX                       = 6
	};

	/**
	 * Enum OrionGame.EOrionVisionType
	 */
	enum class EOrionVisionType : uint8_t
	{
		Hidden         = 0,
		VisibleWithLOS = 1,
		Visible        = 2,
		MAX            = 3
	};

	/**
	 * Enum OrionGame.EOrionTickInterval
	 */
	enum class EOrionTickInterval : uint8_t
	{
		VerySlow = 0,
		Slower   = 1,
		Slow     = 2,
		Default  = 3,
		Fast     = 4,
		VeryFast = 5,
		COUNT    = 6,
		MAX      = 7
	};

	/**
	 * Enum OrionGame.EOrionTeamCompare
	 */
	enum class EOrionTeamCompare : uint8_t
	{
		Any     = 0,
		Same    = 1,
		NotSame = 2,
		Ally    = 3,
		Enemy   = 4,
		Neutral = 5,
		MAX     = 6
	};

	/**
	 * Enum OrionGame.EMatchEndTeamPlacement
	 */
	enum class EMatchEndTeamPlacement : uint8_t
	{
		FirstPlace  = 0,
		SecondPlace = 1,
		ThirdPlace  = 2,
		FourthPlace = 3,
		FifthPlace  = 4,
		MAX         = 5,
		MAX01       = 6
	};

	/**
	 * Enum OrionGame.ETeamRelationship
	 */
	enum class ETeamRelationship : uint8_t
	{
		Allies  = 0,
		Neutral = 1,
		Enemies = 2,
		MAX     = 3
	};

	/**
	 * Enum OrionGame.EOrionTargetType
	 */
	enum class EOrionTargetType : uint8_t
	{
		OTT_Default    = 0,
		OTT_Player     = 1,
		OTT_Minion     = 2,
		OTT_Tower      = 3,
		OTT_Rigs       = 4,
		OTT_Wells      = 5,
		OTT_Damageable = 6,
		OTT_TypeMax    = 7,
		OTT_MAX        = 8
	};

	/**
	 * Enum OrionGame.ECharacterSelectionType
	 */
	enum class ECharacterSelectionType : uint8_t
	{
		CST_AllPick       = 0,
		CST_StandardDraft = 1,
		CST_AllRandom     = 2,
		CST_CaptainsMode  = 3,
		CST_Tutorial      = 4,
		CST_MAX           = 5
	};

	/**
	 * Enum OrionGame.EShadowplaneLocalVisiblity
	 */
	enum class EShadowplaneLocalVisiblity : uint8_t
	{
		NotInShadowplane        = 0,
		InShadowPlaneVisible    = 1,
		InShadowPlaneNotVisible = 2,
		MAX                     = 3
	};

	/**
	 * Enum OrionGame.EMiniMapDepth
	 */
	enum class EMiniMapDepth : uint8_t
	{
		LowestDepth        = 0,
		Objects            = 1,
		Turrets            = 2,
		SmallBots          = 3,
		TankBots           = 4,
		Player             = 5,
		Objective          = 6,
		LocalPlayer        = 7,
		TeamCommunications = 8,
		HighestDepth       = 9,
		MAX                = 10
	};

	/**
	 * Enum OrionGame.EMiniMapVisionChannel
	 */
	enum class EMiniMapVisionChannel : uint8_t
	{
		GameObjective  = 0,
		WorldObjective = 1,
		GameObjects    = 2,
		MAX            = 3
	};

	/**
	 * Enum OrionGame.EOrionTeamCommRadialLabel
	 */
	enum class EOrionTeamCommRadialLabel : uint8_t
	{
		Option_1_Left  = 0,
		Option_2_Up    = 1,
		Option_3_Right = 2,
		Option_4_Down  = 3,
		None           = 4,
		MAX            = 5
	};

	/**
	 * Enum OrionGame.EOrionTeamCommSelectionType
	 */
	enum class EOrionTeamCommSelectionType : uint8_t
	{
		Option_Back   = 0,
		Option        = 1,
		Option01      = 2,
		Option02      = 3,
		Option03      = 4,
		Option_Commit = 5,
		None          = 6,
		MAX           = 7
	};

	/**
	 * Enum OrionGame.EOrionItemEntryState
	 */
	enum class EOrionItemEntryState : uint8_t
	{
		NoneState = 0,
		MAX       = 1
	};

	/**
	 * Enum OrionGame.EOrionSimpleAchievementType
	 */
	enum class EOrionSimpleAchievementType : uint8_t
	{
		Unknown              = 0,
		OpenCardShop         = 1,
		LeftBaseNoCards      = 2,
		LeftBaseWith3CP      = 3,
		InBaseWith3CP        = 4,
		LevelAbility         = 5,
		PrimeGuardian        = 6,
		PickedUpOP           = 7,
		AllyHasOP            = 8,
		EnemyHasOP           = 9,
		NearEmptyWell        = 10,
		NearAllyWell         = 11,
		NearEnemyWell        = 12,
		CappingWellNoKey     = 13,
		CappingWellNoCharges = 14,
		LastHitting          = 15,
		TowerCallForHelp     = 16,
		NearJungleCampBlue   = 17,
		NearJungleCampBlack  = 18,
		NearJungleCampRed    = 19,
		MAX                  = 20,
		MAX01                = 21
	};

	/**
	 * Enum OrionGame.EOrionBoostType
	 */
	enum class EOrionBoostType : uint8_t
	{
		XP                   = 0,
		TimeCurrency         = 1,
		XPWinCount           = 2,
		TimeCurrencyWinCount = 3,
		CraftingSave         = 4,
		CraftingEnhance      = 5,
		Founders             = 6,
		MAX                  = 7
	};

	/**
	 * Enum OrionGame.EBannerCommandType
	 */
	enum class EBannerCommandType : uint8_t
	{
		AttachBanner    = 0,
		ApplyAlteration = 1,
		MAX             = 2
	};

	/**
	 * Enum OrionGame.EAffinityType
	 */
	enum class EAffinityType : uint8_t
	{
		Universal  = 0,
		Corruption = 1,
		Intellect  = 2,
		Order      = 3,
		Growth     = 4,
		Fury       = 5,
		MAX        = 6,
		MAX01      = 7
	};

	/**
	 * Enum OrionGame.EOrionDeckCategory
	 */
	enum class EOrionDeckCategory : uint8_t
	{
		Starter     = 0,
		Early       = 1,
		Mid         = 2,
		Situational = 3,
		Late        = 4,
		Other       = 5,
		MAX         = 6,
		MAX01       = 7
	};

	/**
	 * Enum OrionGame.EOrionCardGameplayEffectInitialStackCount
	 */
	enum class EOrionCardGameplayEffectInitialStackCount : uint8_t
	{
		GameplayEffectStackLimit = 0,
		ExplicitlySet            = 1,
		MAX                      = 2
	};

	/**
	 * Enum OrionGame.ECardAdjustmentValues
	 */
	enum class ECardAdjustmentValues : uint8_t
	{
		UnknownCardAdjustment     = 0,
		EnergyAttackRating        = 1,
		PhysicalAttackRating      = 2,
		UntypedAttackRating       = 3,
		AttackSpeedRating         = 4,
		LifeStealRating           = 5,
		CoolDownPercent           = 6,
		EnergyCostReduction       = 7,
		MaxMoveSpeed              = 8,
		MaxHealth                 = 9,
		MaxEnergy                 = 10,
		HealthRegenRate           = 11,
		EnergyRegenRate           = 12,
		PerseveranceRating        = 13,
		CleaveRating              = 14,
		DamageBonusSource         = 15,
		CriticalDamageChance      = 16,
		CriticalDamageBonus       = 17,
		HealingBonusSource        = 18,
		EnergyResistanceRating    = 19,
		PhysicalResistanceRating  = 20,
		EnergyPenetrationRating   = 21,
		PhysicalPenetrationRating = 22,
		WellRigPlacementTimer     = 23,
		NUM_ADJUSTMENT_VALUES     = 24,
		MAX                       = 25
	};

	/**
	 * Enum OrionGame.EOrionCardType
	 */
	enum class EOrionCardType : uint8_t
	{
		None       = 0,
		Offense    = 1,
		Defense    = 2,
		Utility    = 3,
		NumOfTypes = 4,
		MAX        = 5
	};

	/**
	 * Enum OrionGame.EDeckTooltipTypes
	 */
	enum class EDeckTooltipTypes : uint8_t
	{
		Automatic       = 0,
		OffenseNeutral  = 1,
		OffenseEnergy   = 2,
		OffensePhysical = 3,
		DefenseNeutral  = 4,
		DefenseEnergy   = 5,
		DefensePhysical = 6,
		UtilityNeutral  = 7,
		UtilityBuff     = 8,
		UtilityDebuff   = 9,
		NumOfTypes      = 10,
		MAX             = 11
	};

	/**
	 * Enum OrionGame.EOrionCardArrayType
	 */
	enum class EOrionCardArrayType : uint8_t
	{
		Deck       = 0,
		Hand       = 1,
		NumOfTypes = 2,
		MAX        = 3
	};

	/**
	 * Enum OrionGame.EAIMoveUrgency
	 */
	enum class EAIMoveUrgency : uint8_t
	{
		Low     = 0,
		Regular = 1,
		High    = 2,
		MAX     = 3,
		MAX01   = 4
	};

	/**
	 * Enum OrionGame.EBotObjectiveBehaviorResult
	 */
	enum class EBotObjectiveBehaviorResult : uint8_t
	{
		Done   = 0,
		Failed = 1,
		MAX    = 2,
		MAX01  = 3
	};

	/**
	 * Enum OrionGame.EOrionJungleTarget
	 */
	enum class EOrionJungleTarget : uint8_t
	{
		Tank                        = 0,
		RandomAttackerPreferNotTank = 1,
		RandomInRangePreferNotTank  = 2,
		RandomAttackerPreferRanged  = 3,
		RandomInRangePreferRanged   = 4,
		RandomAnyAttacker           = 5,
		RandomAnyInRange            = 6,
		FurthestAttacker            = 7,
		FurthestInRange             = 8,
		MAX                         = 9
	};

	/**
	 * Enum OrionGame.EOrionBotAbilityTargetType
	 */
	enum class EOrionBotAbilityTargetType : uint8_t
	{
		Anything      = 0,
		Enemy         = 1,
		HurtingFriend = 2,
		Tower         = 3,
		Self          = 4,
		Movement      = 5,
		MAX           = 6
	};

	/**
	 * Enum OrionGame.EOrionAIBotBehaviorContext
	 */
	enum class EOrionAIBotBehaviorContext : uint8_t
	{
		None           = 0,
		EnemyChase     = 1,
		Retreat        = 2,
		LaneGoalAttack = 3,
		Objective      = 4,
		MAX            = 5
	};

	/**
	 * Enum OrionGame.EOrionAIFocusPriority
	 */
	enum class EOrionAIFocusPriority : uint8_t
	{
		CurrentActionContext = 0,
		LaneGoal             = 1,
		MAX                  = 2
	};

	/**
	 * Enum OrionGame.EOrionAvoidanceFlag
	 */
	enum class EOrionAvoidanceFlag : uint8_t
	{
		Hero         = 0,
		LaneMelee    = 1,
		LaneRanged   = 2,
		LaneSiege    = 3,
		LaneSuper    = 4,
		JungleMelee  = 5,
		JungleRanged = 6,
		MAX          = 7
	};

	/**
	 * Enum OrionGame.EAIMinionType
	 */
	enum class EAIMinionType : uint8_t
	{
		None       = 0,
		LaneMelee  = 1,
		LaneRanged = 2,
		LaneSiege  = 3,
		LaneSuper  = 4,
		JungleWeak = 5,
		JungleBuff = 6,
		JungleBoss = 7,
		MAX        = 8
	};

	/**
	 * Enum OrionGame.EAIMessageFromSpawner
	 */
	enum class EAIMessageFromSpawner : uint8_t
	{
		RespawnStarted   = 0,
		RespawnFinished  = 1,
		HeroEnteredRange = 2,
		HeroLeftRange    = 3,
		MinionSpawned    = 4,
		MinionDied       = 5,
		MAX              = 6
	};

	/**
	 * Enum OrionGame.EAIActorClassification
	 */
	enum class EAIActorClassification : uint8_t
	{
		Other        = 0,
		Minion       = 1,
		Hero         = 2,
		AreaOfEffect = 3,
		MAX          = 4,
		MAX01        = 5
	};

	/**
	 * Enum OrionGame.EAIBotDifficulty
	 */
	enum class EAIBotDifficulty : uint8_t
	{
		Normal = 0,
		Dumb   = 1,
		Easy   = 2,
		Custom = 3,
		MAX    = 4,
		MAX01  = 5
	};

	/**
	 * Enum OrionGame.EAIBotLOD
	 */
	enum class EAIBotLOD : uint8_t
	{
		Full   = 0,
		Medium = 1,
		Low    = 2,
		MAX    = 3,
		MAX01  = 4
	};

	/**
	 * Enum OrionGame.EAIAbilityTag
	 */
	enum class EAIAbilityTag : uint8_t
	{
		Primary   = 0,
		Secondary = 1,
		Alternate = 2,
		Ultimate  = 3,
		MAX       = 4,
		MAX01     = 5
	};

	/**
	 * Enum OrionGame.EBotAbilityType
	 */
	enum class EBotAbilityType : uint8_t
	{
		Melee        = 0,
		Ranged       = 1,
		AreaOfEffect = 2,
		Other        = 3,
		MAX          = 4,
		MAX01        = 5
	};

	/**
	 * Enum OrionGame.EMinimapPingType
	 */
	enum class EMinimapPingType : uint8_t
	{
		Info        = 0,
		Attack      = 1,
		Defend      = 2,
		Danger      = 3,
		Ward        = 4,
		UnderAttack = 5,
		MAX         = 6,
		MAX01       = 7
	};

	/**
	 * Enum OrionGame.EMinimapLocation
	 */
	enum class EMinimapLocation : uint8_t
	{
		PushLeft       = 0,
		PushMiddle     = 1,
		PushRight      = 2,
		AttackOrbPrime = 3,
		DefendLeft     = 4,
		DefendMiddle   = 5,
		DefendRight    = 6,
		DefendCore     = 7,
		Explicit       = 8,
		MAX            = 9,
		MAX01          = 10
	};

	/**
	 * Enum OrionGame.EVisionManagerDebugMode
	 */
	enum class EVisionManagerDebugMode : uint8_t
	{
		Off       = 0,
		Continous = 1,
		Single    = 2,
		MAX       = 3,
		MAX01     = 4
	};

	/**
	 * Enum OrionGame.EVisionManagerDebugSingleFilter
	 */
	enum class EVisionManagerDebugSingleFilter : uint8_t
	{
		Actual   = 0,
		Complete = 1,
		MAX      = 2,
		MAX01    = 3
	};

	/**
	 * Enum OrionGame.EVisionManagerDebugFilter
	 */
	enum class EVisionManagerDebugFilter : uint8_t
	{
		NoFilter           = 0,
		FilterViewingTeam  = 1,
		FilterViewingActor = 2,
		FilterTargetActor  = 3,
		MAX                = 4,
		MAX01              = 5
	};

	/**
	 * Enum OrionGame.EVisionManagerDebug
	 */
	enum class EVisionManagerDebug : uint8_t
	{
		DistanceFail    = 0,
		FOVFail         = 1,
		LOSFail         = 2,
		ShadowplaneFail = 3,
		PassWithLOS     = 4,
		PassWithoutLOS  = 5,
		MAX             = 6
	};

	/**
	 * Enum OrionGame.EHeroToHeroVision
	 */
	enum class EHeroToHeroVision : uint8_t
	{
		EHasNoVision       = 0,
		EHasOccludedVision = 1,
		EHasDirectVision   = 2,
		MAX                = 3
	};

	/**
	 * Enum OrionGame.EOrionVisionIndividualRules
	 */
	enum class EOrionVisionIndividualRules : uint8_t
	{
		Default       = 0,
		VisibleToAll  = 1,
		VisibleToNone = 2,
		MAX           = 3
	};

	/**
	 * Enum OrionGame.EOrionVisionManagerIndexMapping
	 */
	enum class EOrionVisionManagerIndexMapping : uint8_t
	{
		RedHeroes                   = 0,
		RedMinion                   = 1,
		RedWards                    = 2,
		RedPlacedObject_WithHealth  = 3,
		RedPlacedObject_NoHealth    = 4,
		RedInhibitor                = 5,
		RedCore                     = 6,
		RedTowers                   = 7,
		RedWells                    = 8,
		RedPrimeHelixReturn         = 9,
		BlueHeroes                  = 10,
		BlueMinion                  = 11,
		BlueWards                   = 12,
		BluePlacedObject_WithHealth = 13,
		BluePlacedObject_NoHealth   = 14,
		BlueInhibitor               = 15,
		BlueCore                    = 16,
		BlueTowers                  = 17,
		BlueWells                   = 18,
		BluePrimeHelixReturn        = 19,
		JungleMinions               = 20,
		Wells                       = 21,
		JungleCamps                 = 22,
		PrimeHelixSpawn             = 23,
		PrimeHelixCarry             = 24,
		Spectator                   = 25,
		MAX                         = 26,
		MAX01                       = 27
	};

	/**
	 * Enum OrionGame.EOrionVisionDef
	 */
	enum class EOrionVisionDef : uint8_t
	{
		Hero                     = 0,
		Minion                   = 1,
		Tower                    = 2,
		Rig                      = 3,
		Inhibitor                = 4,
		Core                     = 5,
		Well                     = 6,
		Ward                     = 7,
		PlacedObject             = 8,
		PlacedObject_NoHealthBar = 9,
		JungleCamp               = 10,
		PrimeHelixSpawn          = 11,
		PrimeHelixReturn         = 12,
		PrimeHelixCarry          = 13,
		Spectator                = 14,
		MAX                      = 15,
		MAX01                    = 16
	};

	/**
	 * Enum OrionGame.EOrionSignificanceType
	 */
	enum class EOrionSignificanceType : uint8_t
	{
		Hero      = 0,
		Minion    = 1,
		Objective = 2,
		VFX       = 3,
		COUNT     = 4,
		MAX       = 5
	};

	/**
	 * Enum OrionGame.EOrionObjectiveRelation
	 */
	enum class EOrionObjectiveRelation : uint8_t
	{
		MustBeDown = 0,
		AnyDown    = 1,
		MAX        = 2
	};

	/**
	 * Enum OrionGame.EObjectiveGraphProximityMode
	 */
	enum class EObjectiveGraphProximityMode : uint8_t
	{
		Closest = 0,
		Second  = 1,
		Lane    = 2,
		MAX     = 3
	};

	/**
	 * Enum OrionGame.EObjectiveNodeTeam
	 */
	enum class EObjectiveNodeTeam : uint8_t
	{
		Red     = 0,
		Blue    = 1,
		Neutral = 2,
		MAX     = 3,
		MAX01   = 4
	};

	/**
	 * Enum OrionGame.EObjectiveNodeType
	 */
	enum class EObjectiveNodeType : uint8_t
	{
		None       = 0,
		Tower      = 1,
		Well       = 2,
		JungleCamp = 3,
		Character  = 4,
		MAX        = 5,
		MAX01      = 6
	};

	/**
	 * Enum OrionGame.EDeathCameraState
	 */
	enum class EDeathCameraState : uint8_t
	{
		DISABLED                       = 0,
		FOCUS_INITIAL_DIRECTION        = 1,
		FOCUS_PLAYER_ENTERED_GRAVESITE = 2,
		FOCUS_BANNER_RAISED            = 3,
		MAX                            = 4
	};

	/**
	 * Enum OrionGame.EBannerEntrance
	 */
	enum class EBannerEntrance : uint8_t
	{
		Invalid      = 0,
		Land         = 1,
		Land_NoScale = 2,
		Rise         = 3,
		PostRise     = 4,
		InAir        = 5,
		MAX          = 6
	};

	/**
	 * Enum OrionGame.EOrionLoadedDataType
	 */
	enum class EOrionLoadedDataType : uint8_t
	{
		Default             = 0,
		CardGameplayEffects = 1,
		UIManagerPlus       = 2,
		SharedGameplayCues  = 3,
		MAX                 = 4,
		MAX01               = 5
	};

	/**
	 * Enum OrionGame.EOrionLoadedDataState
	 */
	enum class EOrionLoadedDataState : uint8_t
	{
		Default  = 0,
		Unloaded = 1,
		Loading  = 2,
		Loaded   = 3,
		MAX      = 4
	};

	/**
	 * Enum OrionGame.EOrionLatencyPreset
	 */
	enum class EOrionLatencyPreset : uint8_t
	{
		None          = 0,
		Lan           = 1,
		RealWorld     = 2,
		Poor          = 3,
		ExtremelyPoor = 4,
		Custom        = 5,
		MAX           = 6,
		MAX01         = 7
	};

	/**
	 * Enum OrionGame.EOrionObjectLibrary
	 */
	enum class EOrionObjectLibrary : uint8_t
	{
		BannerData           = 0,
		BannerAlterationData = 1,
		BoostData            = 2,
		CardData             = 3,
		CardPackData         = 4,
		ClashMobData         = 5,
		ComponentData        = 6,
		DeckData             = 7,
		EmoteData            = 8,
		GiftBoxData          = 9,
		GlyphData            = 10,
		HeroData             = 11,
		QuestData            = 12,
		SkinData             = 13,
		TokenData            = 14,
		CodeTokenData        = 15,
		SimpleData           = 16,
		CuratedDeckData      = 17,
		AIData               = 18,
		Max_None             = 19,
		MAX                  = 20
	};

	/**
	 * Enum OrionGame.EGravesiteFade
	 */
	enum class EGravesiteFade : uint8_t
	{
		None                  = 0,
		In                    = 1,
		Out_FromTimeOut       = 2,
		MaxBrighten           = 3,
		Out_AfterBannerRaised = 4,
		Done                  = 5,
		MAX                   = 6
	};

	/**
	 * Enum OrionGame.EOrionActorPrioritizerDimensionPolicy
	 */
	enum class EOrionActorPrioritizerDimensionPolicy : uint8_t
	{
		Dimension2d = 0,
		Dimension3d = 1,
		MAX         = 2
	};

	/**
	 * Enum OrionGame.EOrionActorPrioritizerSortPolicy
	 */
	enum class EOrionActorPrioritizerSortPolicy : uint8_t
	{
		Angle    = 0,
		Distance = 1,
		MAX      = 2
	};

	/**
	 * Enum OrionGame.EOrionActorPrioritizerOriginPolicy
	 */
	enum class EOrionActorPrioritizerOriginPolicy : uint8_t
	{
		View  = 0,
		Owner = 1,
		Shape = 2,
		MAX   = 3
	};

	/**
	 * Enum OrionGame.EOrionCoinSize
	 */
	enum class EOrionCoinSize : uint8_t
	{
		Small  = 0,
		Medium = 1,
		Large  = 2,
		MAX    = 3,
		MAX01  = 4
	};

	/**
	 * Enum OrionGame.EEntranceInterpolation
	 */
	enum class EEntranceInterpolation : uint8_t
	{
		Linear                  = 0,
		Curve                   = 1,
		InverseCurve            = 2,
		HardCurve               = 3,
		InverseHardCurve        = 4,
		SevereCurve             = 5,
		InverseSevereCurve      = 6,
		S_Curve                 = 7,
		InverseS_Curve          = 8,
		Backward_S_Curve        = 9,
		InverseBackward_S_Curve = 10,
		MAX                     = 11
	};

	/**
	 * Enum OrionGame.EOrionHeroMovementProfile
	 */
	enum class EOrionHeroMovementProfile : uint8_t
	{
		None              = 0,
		Default_Light     = 1,
		Default_Medium    = 2,
		Default_Heavy     = 3,
		TravelMode_Light  = 4,
		TravelMode_Medium = 5,
		TravelMode_Heavy  = 6,
		MAX               = 7,
		MAX01             = 8
	};

	/**
	 * Enum OrionGame.EOrionQuestVerbType
	 */
	enum class EOrionQuestVerbType : uint8_t
	{
		EARN     = 0,
		COMPLETE = 1,
		MAX      = 2
	};

	/**
	 * Enum OrionGame.EOrionTeamMemberType
	 */
	enum class EOrionTeamMemberType : uint8_t
	{
		Invalid     = 0,
		LocalPlayer = 1,
		Friendly    = 2,
		Enemy       = 3,
		MAX         = 4,
		MAX01       = 5
	};

	/**
	 * Enum OrionGame.EOrionStoreFront
	 */
	enum class EOrionStoreFront : uint8_t
	{
		Invalid     = 0,
		CardPacks   = 1,
		Boosts      = 2,
		MtxCurrency = 3,
		Crafting    = 4,
		Decks       = 5,
		Skins       = 6,
		Bundles     = 7,
		Heroes      = 8,
		Banners     = 9,
		Emotes      = 10,
		MAX         = 11,
		MAX01       = 12
	};

	/**
	 * Enum OrionGame.EOrionHeroBadge
	 */
	enum class EOrionHeroBadge : uint8_t
	{
		Initiate   = 0,
		Challenger = 1,
		Master     = 2,
		MAX        = 3,
		MAX01      = 4
	};

	/**
	 * Enum OrionGame.EOrionStatusEffect
	 */
	enum class EOrionStatusEffect : uint8_t
	{
		Slow              = 0,
		Root              = 1,
		Silence           = 2,
		Stun              = 3,
		Bleed             = 4,
		Burn              = 5,
		Poison            = 6,
		KnockBack         = 7,
		CriticallyWounded = 8,
		MAX               = 9,
		MAX01             = 10
	};

	/**
	 * Enum OrionGame.EOrionAbilityValueType
	 */
	enum class EOrionAbilityValueType : uint8_t
	{
		EnergyDamage     = 0,
		PhysicalDamage   = 1,
		Heal             = 2,
		LifeSteal        = 3,
		EnergyCost       = 4,
		Shield           = 5,
		MoveSpeed        = 6,
		CoolDown         = 7,
		Duration         = 8,
		PhysicalArmor    = 9,
		EnergyArmor      = 10,
		MaxHealth        = 11,
		MaxHealthPercent = 12,
		MAX              = 13,
		MAX01            = 14
	};

	/**
	 * Enum OrionGame.EOrionAttributeSummand
	 */
	enum class EOrionAttributeSummand : uint8_t
	{
		Base     = 0,
		Upgrade  = 1,
		Unlocked = 2,
		None     = 3,
		MAX      = 4
	};

	/**
	 * Enum OrionGame.EOrionLevelTypes
	 */
	enum class EOrionLevelTypes : uint8_t
	{
		Account = 0,
		Hero    = 1,
		MAX     = 2,
		MAX01   = 3
	};

	/**
	 * Enum OrionGame.EOrionCurrencyType
	 */
	enum class EOrionCurrencyType : uint8_t
	{
		TimeCurrency = 0,
		MtxCurrency  = 1,
		RealMoney    = 2,
		MAX          = 3,
		MAX01        = 4
	};

	/**
	 * Enum OrionGame.EOrionDialogResult
	 */
	enum class EOrionDialogResult : uint8_t
	{
		ButtonOne = 0,
		ButtonTwo = 1,
		Killed    = 2,
		TimedOut  = 3,
		Unknown   = 4,
		MAX       = 5
	};

	/**
	 * Enum OrionGame.EOrionLoadingPhase
	 */
	enum class EOrionLoadingPhase : uint8_t
	{
		None              = 0,
		FrontEnd          = 1,
		FrontEnd_Selected = 2,
		Game_InUse        = 3,
		Game_NotInUse     = 4,
		MAX               = 5
	};

	/**
	 * Enum OrionGame.EOrionShapeDimensionType
	 */
	enum class EOrionShapeDimensionType : uint8_t
	{
		ScalableFloat           = 0,
		ProjectileRange         = 1,
		ProjectileBlockRadius   = 2,
		ProjectileOverlapRadius = 3,
		MAX                     = 4
	};

	/**
	 * Enum OrionGame.EOrionShapeFacetType
	 */
	enum class EOrionShapeFacetType : uint8_t
	{
		Beam      = 0,
		Box       = 1,
		Character = 2,
		Sector    = 3,
		Sphere    = 4,
		Cylinder  = 5,
		COUNT     = 6,
		MAX       = 7
	};

	/**
	 * Enum OrionGame.EOrionTargetingModeValidationFailPolicy
	 */
	enum class EOrionTargetingModeValidationFailPolicy : uint8_t
	{
		UseServerDataAndConfirm = 0,
		CancelTargeting         = 1,
		MAX                     = 2
	};

	/**
	 * Enum OrionGame.EOrionTargetingModePlacementPolicy
	 */
	enum class EOrionTargetingModePlacementPolicy : uint8_t
	{
		Character        = 0,
		AimFromCamera    = 1,
		Ground           = 2,
		AimFromCharacter = 3,
		MAX              = 4
	};

	/**
	 * Enum OrionGame.EPassiveActivation
	 */
	enum class EPassiveActivation : uint8_t
	{
		TryActivateContinuously = 0,
		TryActivateOnSpawnOnly  = 1,
		MAX                     = 2
	};

	/**
	 * Enum OrionGame.EReticleVisibility
	 */
	enum class EReticleVisibility : uint8_t
	{
		HideReticle        = 0,
		ShowReticle        = 1,
		DoNotAffectReticle = 2,
		MAX                = 3
	};

	/**
	 * Enum OrionGame.EOrionAbilitYToolTipLevelType
	 */
	enum class EOrionAbilitYToolTipLevelType : uint8_t
	{
		AbilityLevel = 0,
		HeroLevel    = 1,
		MAX          = 2
	};

	/**
	 * Enum OrionGame.EOrionAbilityTooltipFactors
	 */
	enum class EOrionAbilityTooltipFactors : uint8_t
	{
		BP                 = 0,
		ARC                = 1,
		AR                 = 2,
		BAT                = 3,
		ASR                = 4,
		BPH                = 5,
		HBS                = 6,
		LSR                = 7,
		CD                 = 8,
		EC                 = 9,
		SHIELD             = 10,
		MOVESPEED          = 11,
		DURATION           = 12,
		PHYS_ARMOR         = 13,
		EN_ARMOR           = 14,
		MAX_HEALTH         = 15,
		MAX_HEALTH_PERCENT = 16,
		MAX                = 17
	};

	/**
	 * Enum OrionGame.EHUDDisplayType
	 */
	enum class EHUDDisplayType : uint8_t
	{
		DisplayAsCooldown = 0,
		DisplayAsDuration = 1,
		MAX               = 2
	};

	/**
	 * Enum OrionGame.EPassiveHUDType
	 */
	enum class EPassiveHUDType : uint8_t
	{
		None       = 0,
		StackCount = 1,
		Duration   = 2,
		MAX        = 3
	};

	/**
	 * Enum OrionGame.EOrionAbilityBotFocusOverride
	 */
	enum class EOrionAbilityBotFocusOverride : uint8_t
	{
		None            = 0,
		MoveGoal        = 1,
		Enemy           = 2,
		CurrentHeading  = 3,
		FriendToSupport = 4,
		MAX             = 5,
		MAX01           = 6
	};

	/**
	 * Enum OrionGame.EOrionAbilityBotInputConfirmation
	 */
	enum class EOrionAbilityBotInputConfirmation : uint8_t
	{
		None        = 0,
		Instant     = 1,
		TargetClose = 2,
		NextTick    = 3,
		Delay       = 4,
		MAX         = 5
	};

	/**
	 * Enum OrionGame.EOrionAbilityActivationGroup
	 */
	enum class EOrionAbilityActivationGroup : uint8_t
	{
		Default                       = 0,
		Blocking                      = 1,
		Replaceable                   = 2,
		Custom_ReplacedByBlockingOnly = 3,
		MAX                           = 4,
		MAX01                         = 5
	};

	/**
	 * Enum OrionGame.EOrionSecondaryCooldownType
	 */
	enum class EOrionSecondaryCooldownType : uint8_t
	{
		Default  = 0,
		Explicit = 1,
		MAX      = 2
	};

	/**
	 * Enum OrionGame.EOrionCooldownType
	 */
	enum class EOrionCooldownType : uint8_t
	{
		Explicit         = 0,
		AttackSpeedBased = 1,
		NoCooldown       = 2,
		MAX              = 3
	};

	/**
	 * Enum OrionGame.EOrionCostType
	 */
	enum class EOrionCostType : uint8_t
	{
		Explicit         = 0,
		AttackSpeedBased = 1,
		NoCooldown       = 2,
		MAX              = 3
	};

	/**
	 * Enum OrionGame.EOrionStencilValueSource
	 */
	enum class EOrionStencilValueSource : uint8_t
	{
		Decals                    = 0,
		Occlusion                 = 1,
		AbilitySystemActiveTarget = 2,
		MAX                       = 3,
		MAX01                     = 4
	};

	/**
	 * Enum OrionGame.ECameraModeBlendFunction
	 */
	enum class ECameraModeBlendFunction : uint8_t
	{
		Linear    = 0,
		EaseIn    = 1,
		EaseOut   = 2,
		EaseInOut = 3,
		COUNT     = 4,
		MAX       = 5
	};

	/**
	 * Enum OrionGame.ECameraModeType
	 */
	enum class ECameraModeType : uint8_t
	{
		ThirdPerson = 0,
		FirstPerson = 1,
		Detached    = 2,
		COUNT       = 3,
		MAX         = 4
	};

	/**
	 * Enum OrionGame.EOrionQuestRegistration
	 */
	enum class EOrionQuestRegistration : uint8_t
	{
		ServerAndClient = 0,
		ServerOnly      = 1,
		ClientOnly      = 2,
		MAX             = 3
	};

	/**
	 * Enum OrionGame.EOrionPrereqOp
	 */
	enum class EOrionPrereqOp : uint8_t
	{
		GreaterThan        = 0,
		GreaterThanEqualTo = 1,
		LessThan           = 2,
		LessThanEqualTo    = 3,
		Equals             = 4,
		Max                = 5,
		MAX                = 6
	};

	/**
	 * Enum OrionGame.EOrionQuestType
	 */
	enum class EOrionQuestType : uint8_t
	{
		PROGRESSION = 0,
		HERO        = 1,
		DAILY       = 2,
		WEEKLY      = 3,
		STORY       = 4,
		BADGE       = 5,
		TIPS        = 6,
		TUTORIAL    = 7,
		MAX         = 8
	};

	/**
	 * Enum OrionGame.EOrionQuestState
	 */
	enum class EOrionQuestState : uint8_t
	{
		Inactive  = 0,
		Active    = 1,
		Completed = 2,
		Claimed   = 3,
		MAX       = 4
	};

	/**
	 * Enum OrionGame.EOrionBanReason
	 */
	enum class EOrionBanReason : uint8_t
	{
		Unknown        = 0,
		NotBanned      = 1,
		WristSlap      = 2,
		AbandonedMatch = 3,
		QueueDodge     = 4,
		CSInfraction   = 5,
		MAX            = 6,
		MAX01          = 7
	};

	/**
	 * Enum OrionGame.EOrionVeterancy
	 */
	enum class EOrionVeterancy : uint8_t
	{
		Unassigned  = 0,
		Novice      = 1,
		Beginner    = 2,
		Experienced = 3,
		Hardcore    = 4,
		MAX         = 5
	};

	/**
	 * Enum OrionGame.EOrionPlatformType
	 */
	enum class EOrionPlatformType : uint8_t
	{
		PC  = 0,
		PS4 = 1,
		MAX = 2
	};

	/**
	 * Enum OrionGame.EAttributeViewDisplayFormat
	 */
	enum class EAttributeViewDisplayFormat : uint8_t
	{
		Default    = 0,
		Percentage = 1,
		Seconds    = 2,
		MAX        = 3
	};

	/**
	 * Enum OrionGame.EAttributeViewCategory
	 */
	enum class EAttributeViewCategory : uint8_t
	{
		None      = 0,
		Offensive = 1,
		Defensive = 2,
		Utility   = 3,
		MAX       = 4,
		MAX01     = 5
	};

	/**
	 * Enum OrionGame.EOrionStatFilterRecommendation
	 */
	enum class EOrionStatFilterRecommendation : uint8_t
	{
		Neutral = 0,
		Good    = 1,
		Bad     = 2,
		MAX     = 3
	};

	/**
	 * Enum OrionGame.EOrionStatFilterState
	 */
	enum class EOrionStatFilterState : uint8_t
	{
		Include = 0,
		Ignore  = 1,
		Exclude = 2,
		MAX     = 3
	};

	/**
	 * Enum OrionGame.ECardCategory
	 */
	enum class ECardCategory : uint8_t
	{
		Unset      = 0,
		Prime      = 1,
		Consumable = 2,
		Equipment  = 3,
		Upgrade    = 4,
		MAX        = 5,
		MAX01      = 6
	};

	/**
	 * Enum OrionGame.EOrionCardSlotIndex
	 */
	enum class EOrionCardSlotIndex : uint8_t
	{
		Invalid    = 0,
		One        = 1,
		Two        = 2,
		Three      = 3,
		Four       = 4,
		PassiveOne = 5,
		PassiveTwo = 6,
		MAX        = 7,
		MAX01      = 8
	};

	/**
	 * Enum OrionGame.EOrionCardShopFilterType
	 */
	enum class EOrionCardShopFilterType : uint8_t
	{
		All         = 0,
		Equipment   = 1,
		Upgrades    = 2,
		Consumables = 3,
		Slot        = 4,
		MAX         = 5
	};

	/**
	 * Enum OrionGame.EBotObjectiveDebugDrawingMode
	 */
	enum class EBotObjectiveDebugDrawingMode : uint8_t
	{
		Structure = 0,
		Team      = 1,
		Influence = 2,
		MAX       = 3
	};

	/**
	 * Enum OrionGame.EAITeamCommEvent
	 */
	enum class EAITeamCommEvent : uint8_t
	{
		None          = 0,
		Attack_Left   = 1,
		Attack_Middle = 2,
		Attack_Right  = 3,
		Defend_Left   = 4,
		Defend_Middle = 5,
		Defend_Right  = 6,
		OMW_Left      = 7,
		OMW_Middle    = 8,
		OMW_Right     = 9,
		OMW_Generic   = 10,
		EnemyMissing  = 11,
		NeedHelp      = 12,
		UltimateReady = 13,
		GoodJob       = 14,
		Sorry         = 15,
		DontChase     = 16,
		MAX           = 17,
		MAX01         = 18
	};

	/**
	 * Enum OrionGame.EOrionHUDFadeState
	 */
	enum class EOrionHUDFadeState : uint8_t
	{
		FadedIn  = 0,
		FadedOut = 1,
		Fading   = 2,
		MAX      = 3
	};

	/**
	 * Enum OrionGame.EOrionHUDFadeRequest
	 */
	enum class EOrionHUDFadeRequest : uint8_t
	{
		FadeIn_Slow     = 0,
		FadeOut_Slow    = 1,
		FadeIn_Instant  = 2,
		FadeOut_Instant = 3,
		None            = 4,
		MAX             = 5
	};

	/**
	 * Enum OrionGame.EOrionCardSelectionDirections
	 */
	enum class EOrionCardSelectionDirections : uint8_t
	{
		Up    = 0,
		Right = 1,
		Down  = 2,
		Left  = 3,
		MAX   = 4,
		MAX01 = 5
	};

	/**
	 * Enum OrionGame.EOrionGameEventMessageType
	 */
	enum class EOrionGameEventMessageType : uint8_t
	{
		Team_Comm_Message   = 0,
		Level_Up            = 1,
		Player_Killed       = 2,
		Structure_Destroyed = 3,
		Prime_Helix_Killed  = 4,
		MAX                 = 5,
		MAX01               = 6
	};

	/**
	 * Enum OrionGame.EOrionGameEventMessagePrio
	 */
	enum class EOrionGameEventMessagePrio : uint8_t
	{
		Low                 = 0,
		Leveled_Up          = 1,
		Player_Killed       = 2,
		Turret_Destroyed    = 3,
		Inhibitor_Destroyed = 4,
		Prime_Helix_Killed  = 5,
		Core_Destroyed      = 6,
		High                = 7,
		MAX                 = 8
	};

	/**
	 * Enum OrionGame.EWellProgressState
	 */
	enum class EWellProgressState : uint8_t
	{
		Normal    = 0,
		Contested = 1,
		MAX       = 2
	};

	/**
	 * Enum OrionGame.ESafeZonePadding
	 */
	enum class ESafeZonePadding : uint8_t
	{
		X_And_Y = 0,
		X_Only  = 1,
		Y_Only  = 2,
		MAX     = 3
	};

	/**
	 * Enum OrionGame.EOrionCombatMessageState
	 */
	enum class EOrionCombatMessageState : uint8_t
	{
		None     = 0,
		Entering = 1,
		Idle     = 2,
		Exiting  = 3,
		MAX      = 4
	};

	/**
	 * Enum OrionGame.EOrionCombatMessageType
	 */
	enum class EOrionCombatMessageType : uint8_t
	{
		CannotUseAbility_NotReady   = 0,
		CannotUseAbility_OnCooldown = 1,
		CannotUseAbility_NoEnergy   = 2,
		CannotUseAbility_NoEmote    = 3,
		PrimeHelix                  = 4,
		PrimeHelix_OpBuff           = 5,
		BlackBuff                   = 6,
		BlueBuff                    = 7,
		RedBuff                     = 8,
		GoldBuff                    = 9,
		GreenBuff                   = 10,
		MidLaneBuff                 = 11,
		SpendCardPoints             = 12,
		WellIsEmpty                 = 13,
		WellIsInactive              = 14,
		WellIsContested             = 15,
		NeedRigCard                 = 16,
		MAX                         = 17,
		MAX01                       = 18
	};

	/**
	 * Enum OrionGame.EAbilityPipType
	 */
	enum class EAbilityPipType : uint8_t
	{
		Five_Pips  = 0,
		Three_Pips = 1,
		Four_Pips  = 2,
		Two_Pips   = 3,
		No_Pips    = 4,
		MAX        = 5
	};

	/**
	 * Enum OrionGame.EOrionAnalogStick
	 */
	enum class EOrionAnalogStick : uint8_t
	{
		Left  = 0,
		Right = 1,
		None  = 2,
		MAX   = 3
	};

	/**
	 * Enum OrionGame.EOrionGestureDirection
	 */
	enum class EOrionGestureDirection : uint8_t
	{
		Right = 0,
		Down  = 1,
		Left  = 2,
		Up    = 3,
		None  = 4,
		MAX   = 5
	};

	/**
	 * Enum OrionGame.ETeamCommsSpawnType
	 */
	enum class ETeamCommsSpawnType : uint8_t
	{
		PlayerLocation    = 0,
		SpecifiedLocation = 1,
		DefendLeftLane    = 2,
		DefendMiddleLane  = 3,
		DefendRightLane   = 4,
		DefendCore        = 5,
		AttackLeftLane    = 6,
		AttackMiddleLane  = 7,
		AttackRightLane   = 8,
		AttackOrbPrime    = 9,
		MAX               = 10
	};

	/**
	 * Enum OrionGame.EDailyRewardType
	 */
	enum class EDailyRewardType : uint8_t
	{
		Invalid = 0,
		Random  = 1,
		Normal  = 2,
		Major   = 3,
		MAX     = 4
	};

	/**
	 * Enum OrionGame.ERichPresenceStateChange
	 */
	enum class ERichPresenceStateChange : uint8_t
	{
		None       = 0,
		AutoUpdate = 1,
		Idle       = 2,
		Active     = 3,
		Busy       = 4,
		NotBusy    = 5,
		MAX        = 6
	};

	/**
	 * Enum OrionGame.ETeamBuilderRole
	 */
	enum class ETeamBuilderRole : uint8_t
	{
		None       = 0,
		Captain    = 1,
		TeamMember = 2,
		SoloRider  = 3,
		MAX        = 4
	};

	/**
	 * Enum OrionGame.EOrionTBMemberState
	 */
	enum class EOrionTBMemberState : uint8_t
	{
		Found    = 0,
		Invited  = 1,
		Accepted = 2,
		Joined   = 3,
		MAX_None = 4,
		MAX      = 5
	};

	/**
	 * Enum OrionGame.EOrionTBSoloRiderResult
	 */
	enum class EOrionTBSoloRiderResult : uint8_t
	{
		Error                 = 0,
		InvalidState          = 1,
		FailedToCreateSession = 2,
		FailedToJoinParty     = 3,
		Success               = 4,
		Cancelled             = 5,
		DeclinedInvite        = 6,
		MAX_None              = 7,
		MAX                   = 8
	};

	/**
	 * Enum OrionGame.EOrionBeaconLobbyState
	 */
	enum class EOrionBeaconLobbyState : uint8_t
	{
		PreReadyCheck  = 0,
		ReadyCheck     = 1,
		PostReadyCheck = 2,
		MAX            = 3
	};

	/**
	 * Enum OrionGame.EPartySetTeamInfoResult
	 */
	enum class EPartySetTeamInfoResult : uint8_t
	{
		Error           = 0,
		InvalidTeam     = 1,
		NoTeam          = 2,
		NotLeader       = 3,
		InvalidPlaylist = 4,
		Success         = 5,
		MAX             = 6
	};

	/**
	 * Enum OrionGame.ETeamBuilderPlayerFilterReason
	 */
	enum class ETeamBuilderPlayerFilterReason : uint8_t
	{
		None                    = 0,
		RejectedByCaptain       = 1,
		RejectedByPlayer        = 2,
		CaptainApprovalExpired  = 3,
		PlayerApprovalExpired   = 4,
		HeroTaken               = 5,
		BeingEvaluatedByCaptain = 6,
		ExitedTeamBuilder       = 7,
		MAX                     = 8
	};

	/**
	 * Enum OrionGame.EOrionTeamCompDebugSlotStatus
	 */
	enum class EOrionTeamCompDebugSlotStatus : uint8_t
	{
		Invalid   = 0,
		Searching = 1,
		Filled    = 2,
		Abandoned = 3,
		MAX       = 4
	};

	/**
	 * Enum OrionGame.ETBRoboCaptainState
	 */
	enum class ETBRoboCaptainState : uint8_t
	{
		NotStarted              = 0,
		DeterminingRole         = 1,
		FindingTeam             = 2,
		BecomingCaptain         = 3,
		JoiningTeam             = 4,
		WaitingForTeam          = 5,
		StartingTeam            = 6,
		WaitingForSocialMembers = 7,
		BuildingTeam            = 8,
		Matchmaking             = 9,
		TravelToSession         = 10,
		Finished                = 11,
		HandlingError           = 12,
		MAX                     = 13
	};

	/**
	 * Enum OrionGame.EOrionPartyGameStateFlags
	 */
	enum class EOrionPartyGameStateFlags : uint8_t
	{
		SessionId = 0,
		MAX       = 1
	};

	/**
	 * Enum OrionGame.EPlaylistType
	 */
	enum class EPlaylistType : uint8_t
	{
		Training       = 0,
		MOBAUnranked   = 1,
		MOBARanked     = 2,
		MOBARankedFast = 3,
		TeamBuilder    = 4,
		CoopVsAI       = 5,
		PracticeVsAI   = 6,
		None           = 7,
		MAX            = 8
	};

	/**
	 * Enum OrionGame.EMatchmakingFlags
	 */
	enum class EMatchmakingFlags : uint8_t
	{
		None          = 0,
		CreateNewOnly = 1,
		NoReservation = 2,
		Private       = 3,
		MAX           = 4
	};

	/**
	 * Enum OrionGame.EMatchmakingUpdateStatus
	 */
	enum class EMatchmakingUpdateStatus : uint8_t
	{
		NoStatus              = 0,
		Started               = 1,
		Searching             = 2,
		CreatingReservation   = 3,
		JoiningSession        = 4,
		ConnectionFailure     = 5,
		WaitingForPartyLeader = 6,
		Finished              = 7,
		Cancelling            = 8,
		MAX                   = 9
	};

	/**
	 * Enum OrionGame.EMatchmakingCompleteResult
	 */
	enum class EMatchmakingCompleteResult : uint8_t
	{
		NotStarted      = 0,
		NoResults       = 1,
		NoOnlineSession = 2,
		NoOnlineAccount = 3,
		Success         = 4,
		Cancelled       = 5,
		Failure         = 6,
		MAX             = 7
	};

	/**
	 * Enum OrionGame.EOrionLobbyBuilderResult
	 */
	enum class EOrionLobbyBuilderResult : uint8_t
	{
		None                          = 0,
		Success                       = 1,
		Cancelled_Explicit            = 2,
		Cancelled_ReadyCheckFailed    = 3,
		Cancelled_ReadyCheckTimeout   = 4,
		Cancelled_MemberPromoted      = 5,
		Cancelled_MemberQuit          = 6,
		AlreadyInProgress             = 7,
		AlreadyFinished               = 8,
		InvalidUser                   = 9,
		InvalidControllerId           = 10,
		InvalidPlaylist               = 11,
		NotInParty                    = 12,
		NotPartyLeader                = 13,
		InvalidCustomKeyPlaylist      = 14,
		InvalidCustomKeyParty         = 15,
		InvalidCancelState            = 16,
		MatchmakerInUse               = 17,
		InvalidSessionInterface       = 18,
		FindSessionsFailed            = 19,
		FailedBeaconReconnect         = 20,
		FailedToGetPartyMMR           = 21,
		UnexpectedMatchmakerState     = 22,
		RemovedFromParty              = 23,
		UnexpectedReservationResponse = 24,
		NotInGameSession              = 25,
		MAX                           = 26
	};

	/**
	 * Enum OrionGame.EOrionLobbyBuilderState
	 */
	enum class EOrionLobbyBuilderState : uint8_t
	{
		None              = 0,
		Starting          = 1,
		Searching         = 2,
		CancelSearchPass  = 3,
		PatchCheck        = 4,
		RetrySearch       = 5,
		ReconnectToBeacon = 6,
		LeavingLobby      = 7,
		WaitingForPlayers = 8,
		ReadyingUp        = 9,
		TravellingToMatch = 10,
		HandlingError     = 11,
		Finished          = 12,
		MAX               = 13
	};

	/**
	 * Enum OrionGame.EOrionPersistentPartyGameStateFlags
	 */
	enum class EOrionPersistentPartyGameStateFlags : uint8_t
	{
		SessionId              = 0,
		PartyProgression       = 1,
		MatchmakingType        = 2,
		AIDifficulty           = 3,
		MatchmakingCustomKey   = 4,
		MatchmakingState       = 5,
		NumPlayersNeeded       = 6,
		MatchmakingResult      = 7,
		AcceptMatchPlayers     = 8,
		LockInHeroResponses    = 9,
		MatchmakingEstWaitTime = 10,
		MAX                    = 11
	};

	/**
	 * Enum OrionGame.EOrionPartyMatchmakingState
	 */
	enum class EOrionPartyMatchmakingState : uint8_t
	{
		None              = 0,
		Searching         = 1,
		ConnectingToLobby = 2,
		WaitingForPlayers = 3,
		ReadyCheck        = 4,
		TravelToMatch     = 5,
		ProcessCancel     = 6,
		ProcessError      = 7,
		MAX               = 8
	};

	/**
	 * Enum OrionGame.EOrionPartyState
	 */
	enum class EOrionPartyState : uint8_t
	{
		Frontend                  = 0,
		Matchmaking               = 1,
		PostMatchmaking           = 2,
		TeamBuilder_ConvertToTeam = 3,
		PreGameLobby              = 4,
		InGame                    = 5,
		MAX                       = 6
	};

	/**
	 * Enum OrionGame.ENavFieldDistanceClass
	 */
	enum class ENavFieldDistanceClass : uint8_t
	{
		NoSample = 0,
		Lane     = 1,
		NearLane = 2,
		Jungle   = 3,
		MAX      = 4,
		MAX01    = 5
	};

	/**
	 * Enum OrionGame.EReturnToMainMenuReason
	 */
	enum class EReturnToMainMenuReason : uint8_t
	{
		None                     = 0,
		Unknown                  = 1,
		QuittingGame             = 2,
		LoggedOut                = 3,
		LeftMatch                = 4,
		LeftLobby                = 5,
		LeftPartyFromLobby       = 6,
		LeftPartyFromGame        = 7,
		LeftGameToJoinParty      = 8,
		QuittingReplay           = 9,
		Critical                 = 10,
		ServerError              = 11,
		LostConnectionToHost     = 12,
		WaitingForPlayersTimeout = 13,
		DraftLobbyLockInTimeout  = 14,
		DraftLobbyPlayerLeft     = 15,
		PlaybackError            = 16,
		InvalidPlayerStateHero   = 17,
		InvalidPlayerStateTeam   = 18,
		InvalidPlayerStateDeck   = 19,
		NotAllowedInMatch        = 20,
		MatchAbandoned           = 21,
		NoEnemyTeam              = 22,
		ServersOffline           = 23,
		PlayAccessEnded          = 24,
		PrivilegeWarning         = 25,
		PlayersFailedToJoin      = 26,
		FailedToSyncProfile      = 27,
		InvalidPlayerData        = 28,
		ClientNeedsPatch         = 29,
		ClientNeedsReload        = 30,
		ClientNeedsRelaunch      = 31,
		ClientFailedToUpdate     = 32,
		NetGuidMismatch          = 33,
		NetChecksumMismatch      = 34,
		MustBeLoggedInToUpdate   = 35,
		MAX                      = 36
	};

	/**
	 * Enum OrionGame.EOrionDamageNumberType
	 */
	enum class EOrionDamageNumberType : uint8_t
	{
		DebugStr            = 0,
		PhysicalDamage      = 1,
		EnergyDamage        = 2,
		ShieldedDamage      = 3,
		Healing             = 4,
		XP                  = 5,
		CardXP              = 6,
		TeamCardXP          = 7,
		TeamCardXP_Outgoing = 8,
		PhysicalDamage_Crit = 9,
		EnergyDamage_Crit   = 10,
		ShieldedDamage_Crit = 11,
		NumOfTypes          = 12,
		MAX                 = 13
	};

	/**
	 * Enum OrionGame.EOrionTowerTargetingType
	 */
	enum class EOrionTowerTargetingType : uint8_t
	{
		None        = 0,
		Minions     = 1,
		Teammate    = 2,
		LocalPlayer = 3,
		MAX         = 4
	};

	/**
	 * Enum OrionGame.EBotObjectiveType
	 */
	enum class EBotObjectiveType : uint8_t
	{
		Offensive = 0,
		Defensive = 1,
		Utility   = 2,
		MAX       = 3
	};

	/**
	 * Enum OrionGame.EBotObjectiveState
	 */
	enum class EBotObjectiveState : uint8_t
	{
		Invalid   = 0,
		Dormant   = 1,
		Available = 2,
		MAX       = 3
	};

	/**
	 * Enum OrionGame.EOrionWellReplicatedTimers
	 */
	enum class EOrionWellReplicatedTimers : uint8_t
	{
		RT_Collection   = 0,
		RT_RigPlacement = 1,
		RT_RigBuilding  = 2,
		MAX             = 3,
		MAX01           = 4
	};

	/**
	 * Enum OrionGame.EOrionWellState
	 */
	enum class EOrionWellState : uint8_t
	{
		InitalState = 0,
		DeadZone    = 1,
		Geyser      = 2,
		Active      = 3,
		RanDry      = 4,
		MAX         = 5
	};

	/**
	 * Enum OrionGame.ESurrenderVote
	 */
	enum class ESurrenderVote : uint8_t
	{
		CantVote = 0,
		NoVote   = 1,
		VotedYes = 2,
		VotedNo  = 3,
		MAX      = 4
	};

	/**
	 * Enum OrionGame.ETeamSurrenderStatus
	 */
	enum class ETeamSurrenderStatus : uint8_t
	{
		TooEarlyToSurrender = 0,
		VoteNotStarted      = 1,
		VoteStarted         = 2,
		VotePassed          = 3,
		VoteFailed          = 4,
		MAX                 = 5
	};

	/**
	 * Enum OrionGame.EOrionSurrenderVoteReason
	 */
	enum class EOrionSurrenderVoteReason : uint8_t
	{
		No                     = 0,
		YesSkipSurvey          = 1,
		UnfairMatchUp          = 2,
		ToxicTeammates         = 3,
		TeammatesPlayingPoorly = 4,
		NoChanceOfWinning      = 5,
		NotHavingFun           = 6,
		BadTiming              = 7,
		PeerPressure           = 8,
		TooConfusing           = 9,
		TeammateDisconnected   = 10,
		TeammateJoinedLate     = 11,
		Other                  = 12,
		COUNT                  = 13,
		MAX                    = 14
	};

	/**
	 * Enum OrionGame.EOrionXPAssisterTimeOut
	 */
	enum class EOrionXPAssisterTimeOut : uint8_t
	{
		VeryFast = 0,
		Fast     = 1,
		Normal   = 2,
		Slow     = 3,
		VerySlow = 4,
		COUNT    = 5,
		MAX      = 6
	};

	/**
	 * Enum OrionGame.EOrionXPAssistRange
	 */
	enum class EOrionXPAssistRange : uint8_t
	{
		VerySmall = 0,
		Small     = 1,
		Normal    = 2,
		Large     = 3,
		VeryLarge = 4,
		COUNT     = 5,
		MAX       = 6
	};

	/**
	 * Enum OrionGame.EOrionTrickleTeamXPAmount
	 */
	enum class EOrionTrickleTeamXPAmount : uint8_t
	{
		VeryLittle = 0,
		Little     = 1,
		Normal     = 2,
		Large      = 3,
		COUNT      = 4,
		MAX        = 5
	};

	/**
	 * Enum OrionGame.EOrionTrickleTeamXPRate
	 */
	enum class EOrionTrickleTeamXPRate : uint8_t
	{
		VerySlow = 0,
		Slow     = 1,
		Default  = 2,
		Fast     = 3,
		COUNT    = 4,
		MAX      = 5
	};

	/**
	 * Enum OrionGame.EOrionCharAISpawnerType
	 */
	enum class EOrionCharAISpawnerType : uint8_t
	{
		OCAIST_OnDemand           = 0,
		OCAIST_WaveSpawner        = 1,
		OCAIST_FormationReplenish = 2,
		OCAIST_WaveReplenish      = 3,
		OCAIST_DelayWaveReplenish = 4,
		OCAIST_None               = 5,
		OCAIST_MAX                = 6
	};

	/**
	 * Enum OrionGame.EPlayerSlotSearchState
	 */
	enum class EPlayerSlotSearchState : uint8_t
	{
		NotFound = 0,
		Found    = 1,
		MAX      = 2,
		MAX01    = 3
	};

	/**
	 * Enum OrionGame.EOrionDirectedMovementSpace
	 */
	enum class EOrionDirectedMovementSpace : uint8_t
	{
		WorldSpace          = 0,
		ActorLocRelative    = 1,
		ActorLocRotRelative = 2,
		CameraRelative      = 3,
		MAX                 = 4
	};

	/**
	 * Enum OrionGame.ECardinalDirection
	 */
	enum class ECardinalDirection : uint8_t
	{
		N   = 0,
		E   = 1,
		S   = 2,
		W   = 3,
		MAX = 4
	};

	/**
	 * Enum OrionGame.EBehaviorRequestState
	 */
	enum class EBehaviorRequestState : uint8_t
	{
		Reset    = 0,
		Play     = 1,
		PlayLoop = 2,
		Stop     = 3,
		Max      = 4,
		MAX      = 5
	};

	/**
	 * Enum OrionGame.EOrionMinionPrioritizedBehavior
	 */
	enum class EOrionMinionPrioritizedBehavior : uint8_t
	{
		Spawn                      = 0,
		Death                      = 1,
		KnockBack_ToFront          = 2,
		KnockBack_ToBack           = 3,
		KnockUp                    = 4,
		Stun                       = 5,
		Special_Attack             = 6,
		HitReaction_Additive_Front = 7,
		HitReaction_Additive_Back  = 8,
		HitReaction_Additive_Right = 9,
		HitReaction_Additive_Left  = 10,
		Ranged_Attack              = 11,
		Melee_Attack               = 12,
		Ranged_Attack_Additive     = 13,
		Max                        = 14,
		MAX                        = 15
	};

	/**
	 * Enum OrionGame.EOrionMinionAnimSlot
	 */
	enum class EOrionMinionAnimSlot : uint8_t
	{
		BaseAnimation     = 0,
		AdditiveAnimation = 1,
		FullBodyAnimation = 2,
		Max               = 3,
		MAX               = 4
	};

	/**
	 * Enum OrionGame.ECorePerceptionTypes
	 */
	enum class ECorePerceptionTypes : uint8_t
	{
		Sight      = 0,
		Hearing    = 1,
		Damage     = 2,
		Team       = 3,
		Prediction = 4,
		MAX        = 5,
		MAX01      = 6
	};

	/**
	 * Enum OrionGame.EJogAdditive
	 */
	enum class EJogAdditive : uint8_t
	{
		None              = 0,
		PrimaryJog        = 1,
		TravelPrepare     = 2,
		ConsecratedGround = 3,
		LifeLock          = 4,
		MAX               = 5
	};

	/**
	 * Enum OrionGame.EOrionServerMoveType
	 */
	enum class EOrionServerMoveType : uint8_t
	{
		NoType                         = 0,
		ServerMove                     = 1,
		ServerMoveDual                 = 2,
		ServerMoveDualHybridRootMotion = 3,
		ServerMoveOld                  = 4,
		MAX                            = 5
	};

	/**
	 * Enum OrionGame.EOrionMinionAttackState
	 */
	enum class EOrionMinionAttackState : uint8_t
	{
		NotAttacking = 0,
		AttackingA   = 1,
		AttackingB   = 2,
		MAX          = 3
	};

	/**
	 * Enum OrionGame.EOrionAnimMotionRecordMode
	 */
	enum class EOrionAnimMotionRecordMode : uint8_t
	{
		ERT_Jump  = 0,
		ERT_Start = 1,
		ERT_Stop  = 2,
		ERT_Pivot = 3,
		ERT_MAX   = 4
	};

	/**
	 * Enum OrionGame.EOrionCaptureResults
	 */
	enum class EOrionCaptureResults : uint8_t
	{
		ApplyGEToTeam_Players = 0,
		ApplyGEToTeam_All     = 1,
		ApplyGEToIndividual   = 2,
		ManuallyHandleCapture = 3,
		MAX                   = 4
	};

	/**
	 * Enum OrionGame.ECardModifyType
	 */
	enum class ECardModifyType : uint8_t
	{
		Invalid     = 0,
		Added       = 1,
		UndoAdd     = 2,
		Upgraded    = 3,
		Completed   = 4,
		UndoUpgrade = 5,
		Discarded   = 6,
		UndoDiscard = 7,
		Ignore      = 8,
		MAX         = 9
	};

	/**
	 * Enum OrionGame.ECardSuggestionActionType
	 */
	enum class ECardSuggestionActionType : uint8_t
	{
		Purchase = 0,
		Upgrade  = 1,
		Replace  = 2,
		None     = 3,
		MAX      = 4
	};

	/**
	 * Enum OrionGame.EDeathLogState
	 */
	enum class EDeathLogState : uint8_t
	{
		Closed        = 0,
		SummaryOpened = 1,
		MAX           = 2
	};

	/**
	 * Enum OrionGame.EOrionButtonSound
	 */
	enum class EOrionButtonSound : uint8_t
	{
		Hover   = 0,
		Pressed = 1,
		MAX     = 2
	};

	/**
	 * Enum OrionGame.EBackHandlerType
	 */
	enum class EBackHandlerType : uint8_t
	{
		None        = 0,
		ActiveStack = 1,
		Global      = 2,
		MAX         = 3
	};

	/**
	 * Enum OrionGame.EOrionDecalOrientation
	 */
	enum class EOrionDecalOrientation : uint8_t
	{
		CameraAligned     = 0,
		CharacterForward  = 1,
		CharacterVelocity = 2,
		MAX               = 3
	};

	/**
	 * Enum OrionGame.EOrionDecalTargetState
	 */
	enum class EOrionDecalTargetState : uint8_t
	{
		NewlyCreated = 0,
		Active       = 1,
		Inactive     = 2,
		NeedsRemoved = 3,
		MAX          = 4
	};

	/**
	 * Enum OrionGame.EOrionDecalState
	 */
	enum class EOrionDecalState : uint8_t
	{
		None           = 0,
		NeedsFadedIn   = 1,
		FadingIn       = 2,
		Active         = 3,
		NeedsFadedOut  = 4,
		FadingOut      = 5,
		Inactive       = 6,
		NeedsDestroyed = 7,
		MAX            = 8
	};

	/**
	 * Enum OrionGame.EOrionHUDWidgetType
	 */
	enum class EOrionHUDWidgetType : uint8_t
	{
		Reticle           = 0,
		GameEventMessages = 1,
		RespawnTimer      = 2,
		AbilityNotReady   = 3,
		MiniMap           = 4,
		RespawnBarTimer   = 5,
		DamageOverlay     = 6,
		MenuManager       = 7,
		IndicatorOverlay  = 8,
		WIP               = 9,
		AbilityWidgets    = 10,
		PlayerStatus      = 11,
		CardAbilities     = 12,
		MatchTime         = 13,
		CoreWidgets       = 14,
		BuffWidets        = 15,
		KDAWidget         = 16,
		DigitalFlame      = 17,
		CombatMessages    = 18,
		WellProgress      = 19,
		AlphaBuildBadge   = 20,
		ChatWidget        = 21,
		AbilityConfirm    = 22,
		QuestLog          = 23,
		MAX               = 24,
		MAX01             = 25
	};

	/**
	 * Enum OrionGame.EGCNotifySubsetState
	 */
	enum class EGCNotifySubsetState : uint8_t
	{
		Default  = 0,
		Unloaded = 1,
		Loading  = 2,
		Loaded   = 3,
		MAX      = 4
	};

	/**
	 * Enum OrionGame.EOrionGameplayCueTraceOrientation
	 */
	enum class EOrionGameplayCueTraceOrientation : uint8_t
	{
		OrientToImpactNormal = 0,
		OrientToTraceStart   = 1,
		MAX                  = 2
	};

	/**
	 * Enum OrionGame.EGCLevelRequirement
	 */
	enum class EGCLevelRequirement : uint8_t
	{
		AbilityLevel        = 0,
		GameplayEffectLevel = 1,
		MAX                 = 2
	};

	/**
	 * Enum OrionGame.EParticleTeamColorAdjustStyle
	 */
	enum class EParticleTeamColorAdjustStyle : uint8_t
	{
		NotAdjusted       = 0,
		AdjustedForSource = 1,
		AdjustedForTarget = 2,
		MAX               = 3
	};

	/**
	 * Enum OrionGame.EParticleCondition
	 */
	enum class EParticleCondition : uint8_t
	{
		NoCondition          = 0,
		LocalPlayerSource    = 1,
		NonLocalPlayerSource = 2,
		MAX                  = 3
	};

	/**
	 * Enum OrionGame.ETeamAdjustStyle
	 */
	enum class ETeamAdjustStyle : uint8_t
	{
		RelativeToTarget = 0,
		RelativeToSource = 1,
		NotAdjusted      = 2,
		MAX              = 3
	};

	/**
	 * Enum OrionGame.EShadowPlanePolicy
	 */
	enum class EShadowPlanePolicy : uint8_t
	{
		Default    = 0,
		AlwaysPlay = 1,
		MAX        = 2
	};

	/**
	 * Enum OrionGame.EOrionGameplayCueParticleAttachType
	 */
	enum class EOrionGameplayCueParticleAttachType : uint8_t
	{
		AttachToTarget = 0,
		DoNotAttach    = 1,
		MAX            = 2
	};

	/**
	 * Enum OrionGame.EDraftLobbyState
	 */
	enum class EDraftLobbyState : uint8_t
	{
		Invalid           = 0,
		WaitingForPlayers = 1,
		PhaseTransition   = 2,
		PlayerSelection   = 3,
		DraftAborting     = 4,
		DraftComplete     = 5,
		MAX               = 6
	};

	/**
	 * Enum OrionGame.ETeamChatRoomState
	 */
	enum class ETeamChatRoomState : uint8_t
	{
		NotCreated = 0,
		Creating   = 1,
		Created    = 2,
		Timeout    = 3,
		MAX        = 4
	};

	/**
	 * Enum OrionGame.EItemAlignment
	 */
	enum class EItemAlignment : uint8_t
	{
		EvenlyDistributed = 0,
		LeftAligned       = 1,
		RightAligned      = 2,
		CenterAligned     = 3,
		Fill              = 4,
		MAX               = 5
	};

	/**
	 * Enum OrionGame.EQuickChatMessageSubject
	 */
	enum class EQuickChatMessageSubject : uint8_t
	{
		None     = 0,
		Role     = 1,
		Position = 2,
		Hero     = 3,
		Player   = 4,
		MAX      = 5
	};

	/**
	 * Enum OrionGame.EOrionQuickChatMessageSlot
	 */
	enum class EOrionQuickChatMessageSlot : uint8_t
	{
		Up    = 0,
		Left  = 1,
		Down  = 2,
		Right = 3,
		MAX   = 4,
		MAX01 = 5
	};

	/**
	 * Enum OrionGame.EOrionQuickChatTopic
	 */
	enum class EOrionQuickChatTopic : uint8_t
	{
		Invalid               = 0,
		Generic               = 1,
		Role                  = 2,
		AnyRole               = 3,
		Position              = 4,
		AnyPosition           = 5,
		Hero_NotSelected      = 6,
		Hero_PlayerSelected   = 7,
		Hero_TeammateSelected = 8,
		Hero_EnemySelected    = 9,
		Player_LockedIn       = 10,
		Player_Preselected    = 11,
		Player_NoHero         = 12,
		Teammate_LockedIn     = 13,
		Teammate_Preselected  = 14,
		Teammate_NoHero       = 15,
		Enemy_LockedIn        = 16,
		Enemy_NoHero          = 17,
		MAX                   = 18,
		MAX01                 = 19
	};

	/**
	 * Enum OrionGame.EClashMobSocialType
	 */
	enum class EClashMobSocialType : uint8_t
	{
		SOLO      = 0,
		CLAN      = 1,
		COMMUNITY = 2,
		MAX       = 3
	};

	/**
	 * Enum OrionGame.EOrionDesiredAnalogCursorState
	 */
	enum class EOrionDesiredAnalogCursorState : uint8_t
	{
		GameOnly  = 0,
		GameAndUI = 1,
		UIOnly    = 2,
		None      = 3,
		MAX       = 4
	};

	/**
	 * Enum OrionGame.EOrionMenuSlotTypes
	 */
	enum class EOrionMenuSlotTypes : uint8_t
	{
		CardMenu                   = 0,
		TeamComms                  = 1,
		Character                  = 2,
		Scoreboard                 = 3,
		EscapeMenu                 = 4,
		DebugTeamSelect            = 5,
		EndGameScreen              = 6,
		AbilityUpgradePanel        = 7,
		AbilityUpgradePanelPullTab = 8,
		LargeMinimap               = 9,
		SurrenderReasonMenu        = 10,
		MAX                        = 11,
		None                       = 12,
		MAX01                      = 13
	};

	/**
	 * Enum OrionGame.EOrionTeamBuilderPartyGameStateFlags
	 */
	enum class EOrionTeamBuilderPartyGameStateFlags : uint8_t
	{
		SessionId        = 0,
		PartyProgression = 1,
		ReservedSlots    = 2,
		ChatRoomId       = 3,
		PendingMember0   = 4,
		PendingMember1   = 5,
		PendingMember2   = 6,
		PendingMember3   = 7,
		PendingMember4   = 8,
		MAX              = 9
	};

	/**
	 * Enum OrionGame.ETeamBuilderProgression
	 */
	enum class ETeamBuilderProgression : uint8_t
	{
		Idle            = 0,
		BuildingTeam    = 1,
		Matchmaking     = 2,
		PostMatchmaking = 3,
		MAX             = 4
	};

	/**
	 * Enum OrionGame.EOrionPersistentPartyMemberStateFlags
	 */
	enum class EOrionPersistentPartyMemberStateFlags : uint8_t
	{
		AccountLevel             = 0,
		LevelProgress            = 1,
		MatchmakingLevel         = 2,
		bAfk                     = 3,
		Location                 = 4,
		bReady                   = 5,
		AcceptMatchState         = 6,
		HeroName                 = 7,
		bLoaded                  = 8,
		MMR                      = 9,
		bMMRAdjustedForNewPlayer = 10,
		BanReason                = 11,
		MAX                      = 12
	};

	/**
	 * Enum OrionGame.EOrionPartyMemberLocation
	 */
	enum class EOrionPartyMemberLocation : uint8_t
	{
		PreLobby          = 0,
		ConnectingToLobby = 1,
		Lobby             = 2,
		PreGame           = 3,
		JoiningGame       = 4,
		InGame            = 5,
		Replay            = 6,
		Rejoin            = 7,
		MAX               = 8
	};

	/**
	 * Enum OrionGame.EOrionTeamBuilderPartyMemberStateFlags
	 */
	enum class EOrionTeamBuilderPartyMemberStateFlags : uint8_t
	{
		AccountLevel     = 0,
		LevelProgress    = 1,
		MatchmakingLevel = 2,
		bAfk             = 3,
		SlotIdx          = 4,
		HeroName         = 5,
		DeckId           = 6,
		Position         = 7,
		Role             = 8,
		Ready            = 9,
		BlockedPlayers   = 10,
		Platform         = 11,
		CosmeticString   = 12,
		MAX              = 13
	};

	/**
	 * Enum OrionGame.EOrionDraftAbortPenaltyReason
	 */
	enum class EOrionDraftAbortPenaltyReason : uint8_t
	{
		None                        = 0,
		LockInFailure               = 1,
		AssociatedWithLockInFailure = 2,
		Leaver                      = 3,
		AssociatedWithLeaver        = 4,
		MAX                         = 5
	};

	/**
	 * Enum OrionGame.EOrionDraftPickStatus
	 */
	enum class EOrionDraftPickStatus : uint8_t
	{
		WaitingForPlayers = 0,
		Waiting           = 1,
		UpNext            = 2,
		Picking           = 3,
		LockedIn          = 4,
		Complete          = 5,
		MAX               = 6
	};

	/**
	 * Enum OrionGame.EOrionDamageType
	 */
	enum class EOrionDamageType : uint8_t
	{
		Invalid  = 0,
		Physical = 1,
		Energy   = 2,
		MAX      = 3
	};

	/**
	 * Enum OrionGame.EPieceOfFlairType
	 */
	enum class EPieceOfFlairType : uint8_t
	{
		OneCardReward       = 0,
		MultipleCardReward  = 1,
		Coins               = 2,
		OneCardPack         = 3,
		MultipleCardPacks   = 4,
		HeroUnlocked        = 5,
		DeckBuilderUnlocked = 6,
		PvPUnlocked         = 7,
		SkinReward          = 8,
		EmoteReward         = 9,
		Reputation          = 10,
		StarterDeck         = 11,
		Boost               = 12,
		DeckSlot            = 13,
		Banner              = 14,
		BannerAlteration    = 15,
		MAX                 = 16,
		MAX01               = 17
	};

	/**
	 * Enum OrionGame.EEQSAIInfluenceQuery
	 */
	enum class EEQSAIInfluenceQuery : uint8_t
	{
		ContextsTeam              = 0,
		ContextsEnemies           = 1,
		TotalValueForContextsTeam = 2,
		TotalValueForEnemies      = 3,
		MAX                       = 4
	};

	/**
	 * Enum OrionGame.EAILaneProgressReference
	 */
	enum class EAILaneProgressReference : uint8_t
	{
		Absolute            = 0,
		RelativeToFrontLine = 1,
		MAX                 = 2
	};

	/**
	 * Enum OrionGame.EFocusMethod
	 */
	enum class EFocusMethod : uint8_t
	{
		NoFocus     = 0,
		AutoFocus   = 1,
		ManualFocus = 2,
		MAX         = 3
	};

	/**
	 * Enum OrionGame.EIsometricCamAngle
	 */
	enum class EIsometricCamAngle : uint8_t
	{
		Sideline    = 0,
		RedEndzone  = 1,
		BlueEndzone = 2,
		Diagonal    = 3,
		MAX         = 4
	};

	/**
	 * Enum OrionGame.EOrionNetworkReplayLiveType
	 */
	enum class EOrionNetworkReplayLiveType : uint8_t
	{
		Either        = 0,
		LiveOnly      = 1,
		CompletedOnly = 2,
		MAX           = 3
	};

	/**
	 * Enum OrionGame.EOrionNetworkReplayFilter
	 */
	enum class EOrionNetworkReplayFilter : uint8_t
	{
		Invalid     = 0,
		Personal    = 1,
		Friends     = 2,
		LiveAll     = 3,
		LiveFriends = 4,
		Recent      = 5,
		Featured    = 6,
		Search      = 7,
		MAX         = 8
	};

	/**
	 * Enum OrionGame.ERichTextInlineIconDisplayMode
	 */
	enum class ERichTextInlineIconDisplayMode : uint8_t
	{
		IconOnly    = 0,
		TextOnly    = 1,
		IconAndText = 2,
		MAX         = 3,
		MAX01       = 4
	};

	/**
	 * Enum OrionGame.ETBSearchFlags
	 */
	enum class ETBSearchFlags : uint8_t
	{
		None = 0,
		MAX  = 1
	};

	/**
	 * Enum OrionGame.ETBSearchState
	 */
	enum class ETBSearchState : uint8_t
	{
		NotSearching    = 0,
		CancelingSearch = 1,
		HandlingFailure = 2,
		Searching       = 3,
		NoResults       = 4,
		PlayerFound     = 5,
		InvitationSent  = 6,
		RejectedPlayer  = 7,
		TimerExpired    = 8,
		Success         = 9,
		MAX             = 10
	};

	/**
	 * Enum OrionGame.ETBSlotCompleteResult
	 */
	enum class ETBSlotCompleteResult : uint8_t
	{
		NotStarted   = 0,
		Cancelled    = 1,
		NoResults    = 2,
		Rejected     = 3,
		TimerExpired = 4,
		Failure      = 5,
		PlayerFound  = 6,
		MAX          = 7
	};

	/**
	 * Enum OrionGame.EOrionTBSoloRiderState
	 */
	enum class EOrionTBSoloRiderState : uint8_t
	{
		None            = 0,
		Finalizing      = 1,
		Cancelling      = 2,
		HandlingError   = 3,
		CreatingSession = 4,
		Advertising     = 5,
		InvitePending   = 6,
		JoiningParty    = 7,
		MAX             = 8
	};

	/**
	 * Enum OrionGame.ETeamBuilderState
	 */
	enum class ETeamBuilderState : uint8_t
	{
		None            = 0,
		FindingTeam     = 1,
		TeamBuilding    = 2,
		TeamMatchmaking = 3,
		MAX             = 4
	};

	/**
	 * Enum OrionGame.EDateType
	 */
	enum class EDateType : uint8_t
	{
		None   = 0,
		Coming = 1,
		Ending = 2,
		MAX    = 3
	};

	/**
	 * Enum OrionGame.ETileType
	 */
	enum class ETileType : uint8_t
	{
		Invalid        = 0,
		Default        = 1,
		Website        = 2,
		Video          = 3,
		Replay         = 4,
		Marketplace    = 5,
		Navigation     = 6,
		Custom         = 7,
		BoostExhausted = 8,
		MAX            = 9
	};

	/**
	 * Enum OrionGame.EOrionCardMenuCardState
	 */
	enum class EOrionCardMenuCardState : uint8_t
	{
		Default         = 0,
		Selected        = 1,
		NotSelected     = 2,
		StackEmpty      = 3,
		CannotAfford    = 4,
		UpgradeRollover = 5,
		AutoSlot        = 6,
		MAX_Invalid     = 7,
		MAX             = 8
	};

	/**
	 * Enum OrionGame.EOrionHandSlotState
	 */
	enum class EOrionHandSlotState : uint8_t
	{
		Default     = 0,
		Ideal       = 1,
		Replaceable = 2,
		Unavailable = 3,
		Pending     = 4,
		AutoSlot    = 5,
		Semi_Ideal  = 6,
		Upgrade     = 7,
		MAX         = 8
	};

	/**
	 * Enum OrionGame.EOrionCardShopState
	 */
	enum class EOrionCardShopState : uint8_t
	{
		Default     = 0,
		CardRefresh = 1,
		NoData      = 2,
		MAX         = 3
	};

	/**
	 * Enum OrionGame.ETransitionCurve
	 */
	enum class ETransitionCurve : uint8_t
	{
		Linear     = 0,
		QuadIn     = 1,
		QuadOut    = 2,
		QuadInOut  = 3,
		CubicIn    = 4,
		CubicOut   = 5,
		CubicInOut = 6,
		MAX        = 7
	};

	/**
	 * Enum OrionGame.EOrionSwitcherTransition
	 */
	enum class EOrionSwitcherTransition : uint8_t
	{
		FadeOnly   = 0,
		Horizontal = 1,
		Vertical   = 2,
		Zoom       = 3,
		MAX        = 4
	};

	/**
	 * Enum OrionGame.ESortPriority
	 */
	enum class ESortPriority : uint8_t
	{
		NewestFirst  = 0,
		OldestFirst  = 1,
		Alphabetical = 2,
		MAX          = 3
	};

	/**
	 * Enum OrionGame.EPipState
	 */
	enum class EPipState : uint8_t
	{
		Highlight = 0,
		Selected  = 1,
		MAX       = 2
	};

	/**
	 * Enum OrionGame.EXPType
	 */
	enum class EXPType : uint8_t
	{
		CardPoints = 0,
		XP         = 1,
		MAX        = 2
	};

	/**
	 * Enum OrionGame.EReplayDetailsState
	 */
	enum class EReplayDetailsState : uint8_t
	{
		Invalid   = 0,
		Requested = 1,
		Ready     = 2,
		MAX       = 3
	};

	/**
	 * Enum OrionGame.EOrionRewardChestState
	 */
	enum class EOrionRewardChestState : uint8_t
	{
		Empty   = 0,
		Filling = 1,
		Filled  = 2,
		MAX     = 3
	};

	/**
	 * Enum OrionGame.EOrionTabListType
	 */
	enum class EOrionTabListType : uint8_t
	{
		None      = 0,
		Primary   = 1,
		Secondary = 2,
		MAX       = 3
	};

	/**
	 * Enum OrionGame.ESpeedWarpingAxisMode
	 */
	enum class ESpeedWarpingAxisMode : uint8_t
	{
		IKFootRootLocalX          = 0,
		IKFootRootLocalY          = 1,
		IKFootRootLocalZ          = 2,
		WorldSpaceVectorInput     = 3,
		ComponentSpaceVectorInput = 4,
		ActorSpaceVectorInput     = 5,
		MAX                       = 6
	};

	/**
	 * Enum OrionGame.EDraftLobbyEndState
	 */
	enum class EDraftLobbyEndState : uint8_t
	{
		DraftLobbyEndState_Unknown                 = 0,
		DraftLobbyEndState_Success                 = 1,
		DraftLobbyEndState_Abort_WaitingForPlayers = 2,
		DraftLobbyEndState_Abort_PlayerLeft        = 3,
		DraftLobbyEndState_Abort_LockInFailure     = 4,
		DraftLobbyEndState_Abort_TravelFailure     = 5,
		DraftLobbyEndState_Abort_ServerError       = 6,
		DraftLobbyEndState_MAX                     = 7
	};

	/**
	 * Enum OrionGame.ECharacterPerfTestCommand
	 */
	enum class ECharacterPerfTestCommand : uint8_t
	{
		NoCommand         = 0,
		Move              = 1,
		Wait              = 2,
		Travel            = 3,
		UseAbility        = 4,
		ConfirmAbility    = 5,
		CancelAbility     = 6,
		Cheat             = 7,
		ResetLocation     = 8,
		Invincible        = 9,
		SetCameraRotation = 10,
		FireDelegate      = 11,
		MAX               = 12
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OrionGame.OrionAbilityBindInfo
	 * Size -> 0x0010
	 */
	struct FOrionAbilityBindInfo
	{
	public:
		EOrionAbilityBinding                                       KeyBinding;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionAbilityBinding                                       UnlocksWithKeyBinding;                                   // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C1RC[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Ability;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.MCPPlayerStats
	 * Size -> 0x0018
	 */
	struct FMCPPlayerStats
	{
	public:
		class FString                                              StatName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUSG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayStats
	 * Size -> 0x0068
	 */
	struct FGameplayStats
	{
	public:
		unsigned char                                              UnknownData_UBSE[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMCPPlayerStats>                             TrackedStats;                                            // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class AOrionPlayerState_Game*                              Owner;                                                   // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OrionGame.SimpleAchievementDescription
	 * Size -> 0x0020
	 */
	struct FSimpleAchievementDescription
	{
	public:
		EOrionSimpleAchievementType                                Key;                                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJWG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.CuratedCardGroup
	 * Size -> 0x0030
	 */
	struct FCuratedCardGroup
	{
	public:
		TAssetPtr<class UOrionCardData>                            CardPtr;                                                 // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2M3A[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<TAssetPtr<class UOrionCardData>>                    ChildCardPtrs;                                           // 0x0020(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCuratedDeckCategory
	 * Size -> 0x0010
	 */
	struct FOrionCuratedDeckCategory
	{
	public:
		TArray<struct FCuratedCardGroup>                           Cards;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionMcpCuratedDeck
	 * Size -> 0x0060
	 */
	struct FOrionMcpCuratedDeck
	{
	public:
		struct FOrionCuratedDeckCategory                           Categories[0x6];                                         // 0x0000(0x0060) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCardInstance
	 * Size -> 0x0038
	 */
	struct FOrionCardInstance
	{
	public:
		struct FGuid                                               CardGuid;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UOrionCardData*                                      Card;                                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AOrionCard*                                          Actor;                                                   // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ParentGuid;                                              // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EOrionDeckCategory                                         Category;                                                // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4NH6[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAffinityStruct
	 * Size -> 0x0004
	 */
	struct FOrionAffinityStruct
	{
	public:
		bool                                                       bGrowthAffinity : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bFuryAffinity : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bIntellectAffinity : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bOrderAffinity : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bCorruptionAffinity : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bUniversalAffinity : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4LEE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCardGameplayEffectData
	 * Size -> 0x0048
	 */
	struct FOrionCardGameplayEffectData
	{
	public:
		TAssetPtr<class UClass>                                    GameplayEffect;                                          // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LDCY[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_5T5L[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAffinityType                                              EffectAffinity;                                          // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6B0[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UpgradeUnlockNum;                                        // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOrionAffinityStruct                                UnlockAffinityTypes;                                     // 0x0030(0x0004) Edit, NativeAccessSpecifierPublic
		EDeckTooltipTypes                                          DeckTooltipType;                                         // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFWZ[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EOrionCardGameplayEffectInitialStackCount                  InitialStackCountType;                                   // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FP91[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ExplicitStackCount;                                      // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNGL[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.UserCardGroup
	 * Size -> 0x0020
	 */
	struct FUserCardGroup
	{
	public:
		class FString                                              CardId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      ChildCardIds;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.UserCreatedDeck
	 * Size -> 0x0010
	 */
	struct FUserCreatedDeck
	{
	public:
		TArray<struct FUserCardGroup>                              CardGroups;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.BannerSocketEntry
	 * Size -> 0x0030
	 */
	struct FBannerSocketEntry
	{
	public:
		class FName                                                SocketIdent;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionBannerType                                           SocketType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PRBO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UOrionMcpBannerItemDefinition>             DefaultSocketTemplate;                                   // 0x0010(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L2H3[0x4];                                   // 0x002C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct OrionGame.BannerMaterialDesc
	 * Size -> 0x00C0
	 */
	struct FBannerMaterialDesc
	{
	public:
		class UTexture*                                            DiffuseLoaded;                                           // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture*                                            TextureLoaded;                                           // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture*                                            NormalLoaded;                                            // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TAssetPtr<class UTexture>                                  Diffuse;                                                 // 0x0018(0x001C) ELEMENT_SIZE_MISMATCH Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2507[0x4];                                   // 0x0034(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UTexture>                                  Texture;                                                 // 0x0038(0x001C) ELEMENT_SIZE_MISMATCH Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XIGO[0x4];                                   // 0x0054(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UTexture>                                  Normal;                                                  // 0x0058(0x001C) ELEMENT_SIZE_MISMATCH Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZOO1[0x4];                                   // 0x0074(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FLinearColor                                        Color1;                                                  // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color2;                                                  // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Emissive;                                                // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Metallic1;                                               // 0x00A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Metallic2;                                               // 0x00AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roughness1;                                              // 0x00B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roughness2;                                              // 0x00B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tiling;                                                  // 0x00B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WO32[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.McpBannerEntry
	 * Size -> 0x0010
	 */
	struct FMcpBannerEntry
	{
	public:
		class FString                                              BannerPieceId;                                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.SkinSpawnOverrideItem
	 * Size -> 0x0040
	 */
	struct FSkinSpawnOverrideItem
	{
	public:
		TAssetPtr<class UClass>                                    OriginalActor;                                           // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8QH[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UClass>                                    NewActor;                                                // 0x0020(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1I9N[0x4];                                   // 0x003C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct OrionGame.SkinAnimOverride
	 * Size -> 0x0060
	 */
	struct FSkinAnimOverride
	{
	public:
		TAssetPtr<class USkeleton>                                 Skeleton;                                                // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JU0[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UAnimMontage>                              OriginalAnimation;                                       // 0x0020(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEN4[0x4];                                   // 0x003C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UAnimMontage>                              OverrideAnimation;                                       // 0x0040(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RBEO[0x4];                                   // 0x005C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct OrionGame.SkinAnimMontagePair
	 * Size -> 0x0040
	 */
	struct FSkinAnimMontagePair
	{
	public:
		TAssetPtr<class UOrionSkinItemDefinition>                  SkinDefinition;                                          // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZRF[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UAnimMontage>                              AnimMontage;                                             // 0x0020(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VXBU[0x4];                                   // 0x003C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct OrionGame.OrionReplicatedVisionData
	 * Size -> 0x0004
	 */
	struct FOrionReplicatedVisionData
	{
	public:
		uint16_t                                                   Index;                                                   // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4DCM[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionReplicatedVisibleToEnemy
	 * Size -> 0x0001
	 */
	struct FOrionReplicatedVisibleToEnemy
	{
	public:
		unsigned char                                              VisibleToEnemyBitMask;                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionObjectiveCues
	 * Size -> 0x0038
	 */
	struct FOrionObjectiveCues
	{
	public:
		struct FGameplayCueTag                                     Idle;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     TargetLocked;                                            // 0x0008(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     TargetAcquired;                                          // 0x0010(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     NoLongerHasTargets;                                      // 0x0018(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     Recharge;                                                // 0x0020(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     Destroyed;                                               // 0x0028(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     ReviveFinished;                                          // 0x0030(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.ObjectiveDependency
	 * Size -> 0x0020
	 */
	struct FObjectiveDependency
	{
	public:
		TWeakObjectPtr<class AOrionDamageableObjective_Base>       Objective;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		EOrionObjectiveRelation                                    Relationship;                                            // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q54W[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DeathGameplayEffect;                                     // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FActiveGameplayEffectHandle                         DeathGameplayEffectHandle;                               // 0x0018(0x0008) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.ObjectiveBuff
	 * Size -> 0x0010
	 */
	struct FObjectiveBuff
	{
	public:
		class UClass*                                              BuffGameplayEffect;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FActiveGameplayEffectHandle                         BuffHandle;                                              // 0x0008(0x0008) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionActorFilterTeam
	 * Size -> 0x0003
	 */
	struct FOrionActorFilterTeam
	{
	public:
		bool                                                       bAlly;                                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnemy;                                                  // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bNeutral;                                                // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionActorFilterType
	 * Size -> 0x0005
	 */
	struct FOrionActorFilterType
	{
	public:
		bool                                                       bHeroes;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCreeps;                                                 // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bStructures;                                             // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWells;                                                  // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDamageables;                                            // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionActorFilterOcclusion
	 * Size -> 0x0010
	 */
	struct FOrionActorFilterOcclusion
	{
	public:
		bool                                                       bRequiresLineOfSight;                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8B8B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCollisionProfileName                               Profile;                                                 // 0x0008(0x0008) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionActorFilter
	 * Size -> 0x0060
	 */
	struct FOrionActorFilter
	{
	public:
		bool                                                       bAllowSelf;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCheckIsTargetable;                                      // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCheckIsSelectable;                                      // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCheckShadowPlane;                                       // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bStealthedTargetsAreValid;                               // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FOrionActorFilterTeam                               Team;                                                    // 0x0005(0x0003) Edit, NativeAccessSpecifierPublic
		struct FOrionActorFilterType                               Type;                                                    // 0x0008(0x0005) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8RNF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionActorFilterOcclusion                          Occlusion;                                               // 0x0010(0x0010) Edit, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            Tags;                                                    // 0x0020(0x0040) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionEffectStack
	 * Size -> 0x0010
	 */
	struct FOrionEffectStack
	{
	public:
		class UClass*                                              GameplayEffect;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GMC1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionFilterEffectsMap
	 * Size -> 0x0090
	 */
	struct FOrionFilterEffectsMap
	{
	public:
		struct FOrionActorFilter                                   Filter;                                                  // 0x0000(0x0060) Edit, Protected, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      GameplayEffectsToApply;                                  // 0x0060(0x0010) Edit, ZeroConstructor, RepSkip, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<struct FOrionEffectStack>                           StackedGameplayEffectsToApply;                           // 0x0070(0x0010) Edit, ZeroConstructor, RepSkip, Protected, NativeAccessSpecifierProtected
		TArray<struct FGameplayEffectSpecHandle>                   GameplayEffectSpecsToApply;                              // 0x0080(0x0010) ZeroConstructor, RepSkip, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OrionGame.OrionFilterAndEffectsContainer
	 * Size -> 0x0020
	 */
	struct FOrionFilterAndEffectsContainer
	{
	public:
		TArray<struct FOrionFilterEffectsMap>                      FiltersToUse;                                            // 0x0000(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AActor>                               CachedSourceActor;                                       // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		EOrionTeam                                                 CachedSourceTeamNum;                                     // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bGeneratedEffectSpecs;                                   // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9SF0[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BotObjectiveGraphEdge
	 * Size -> 0x000C
	 */
	struct FBotObjectiveGraphEdge
	{
	public:
		int32_t                                                    EndNodeIndex;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPruned;                                                 // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VUF0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BotObjectiveGraphNode
	 * Size -> 0x0050
	 */
	struct FBotObjectiveGraphNode
	{
	public:
		class UBotObjective*                                       StaticBotObjectives[0x2];                                // 0x0000(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AOrionBaseActor*                                     ObjectiveActor;                                          // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EObjectiveNodeType                                         Type;                                                    // 0x0018(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJDE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBotObjectiveGraphEdge>                      Edges;                                                   // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CY8[0x4];                                   // 0x0030(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LaneID;                                                  // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34NX[0x4];                                   // 0x0038(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NodeLocation;                                            // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsTeleportLocation : 1;                                 // 0x0048(0x0001) BIT_FIELD NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JZBR[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BotObjectiveGraphForcedEdge
	 * Size -> 0x0008
	 */
	struct FBotObjectiveGraphForcedEdge
	{
	public:
		int32_t                                                    StartNodeIndex;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndNodeIndex;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.LanePath
	 * Size -> 0x0018
	 */
	struct FLanePath
	{
	public:
		TArray<int32_t>                                            Nodes;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              LaneID;                                                  // 0x0010(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KRI6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.HeroHealthRecord
	 * Size -> 0x0030
	 */
	struct FHeroHealthRecord
	{
	public:
		class AOrionCharHero*                                      HeroCharacter;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController*                                         PawnOwner;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UFSR[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TeamHeroHealthRecords
	 * Size -> 0x0010
	 */
	struct FTeamHeroHealthRecords
	{
	public:
		TArray<struct FHeroHealthRecord>                           Records;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.HeroHealthMonitor
	 * Size -> 0x0020
	 */
	struct FHeroHealthMonitor
	{
	public:
		struct FTeamHeroHealthRecords                              Teams[0x2];                                              // 0x0000(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.CharacterScoreEvaluator
	 * Size -> 0x0014
	 */
	struct FCharacterScoreEvaluator
	{
	public:
		unsigned char                                              UnknownData_49D0[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BotKnowledgeHub
	 * Size -> 0x0070
	 */
	struct FBotKnowledgeHub
	{
	public:
		class UOrionAISystem*                                      AISystem;                                                // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AOrionAIInfluenceMapManager*                         CachedInfluenceMapManager;                               // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FCharacterScoreEvaluator                            ScoreKeeper;                                             // 0x0010(0x0014) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9LD9[0x4C];                                  // 0x0024(0x004C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MinionWaveInfo
	 * Size -> 0x0028
	 */
	struct FMinionWaveInfo
	{
	public:
		TArray<class AOrionCharAI*>                                Minions;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7QI[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.LaneMinionWaves
	 * Size -> 0x0010
	 */
	struct FLaneMinionWaves
	{
	public:
		TArray<struct FMinionWaveInfo>                             Waves;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.LaneInfo
	 * Size -> 0x0058 (FullSize[0x0070] - InheritedSize[0x0018])
	 */
	struct FLaneInfo : public FLanePath
	{
	public:
		struct FLaneMinionWaves                                    LaneWaves[0x2];                                          // 0x0018(0x0020) NativeAccessSpecifierPublic
		struct FVector                                             ActiveTowerLocation[0x2];                                // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CAU0[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AILaneInfoManager
	 * Size -> 0x0170
	 */
	struct FAILaneInfoManager
	{
	public:
		class UOrionAISystem*                                      AISystem;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ABotObjectiveGraph*                                  ObjectiveGraph;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLaneInfo                                           Lanes[0x3];                                              // 0x0010(0x0150) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AC2Z[0x10];                                  // 0x0160(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GravesiteActivationData
	 * Size -> 0x001C
	 */
	struct FGravesiteActivationData
	{
	public:
		struct FVector                                             DestLocation;                                            // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TriggerPos;                                              // 0x000C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabledForFriends;                                      // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabledForEnemies;                                      // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EOrionTeam                                                 VictimTeam;                                              // 0x001A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 KillerTeam;                                              // 0x001B(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.BoundTagDelegate
	 * Size -> 0x0018
	 */
	struct FBoundTagDelegate
	{
	public:
		unsigned char                                              UnknownData_YQCP[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LockOnActor;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.PickupTicker
	 * Size -> 0x0010
	 */
	struct FPickupTicker
	{
	public:
		float                                                      StartTime;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpireTime;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AOrionPickup*                                        Pickup;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.PickupPoolData
	 * Size -> 0x0048
	 */
	struct FPickupPoolData
	{
	public:
		class UClass*                                              PickupActorClass;                                        // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AOrionPickup*>                                PickupActorPool;                                         // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPickupTicker>                               PickupsInUse_Heap;                                       // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPickupTicker>                               InterpolatingPickups_Heap;                               // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPickupTicker>                               NonInterpolatingPickups_Heap;                            // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.PickupSpawningData
	 * Size -> 0x00E0
	 */
	struct FPickupSpawningData
	{
	public:
		class UClass*                                              PickupToSpawn;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Owner;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController*                                         OwnerController;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ReturnPointActor;                                        // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AOrionPlayerState_Game*                              HomingPlayerState;                                       // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              HomingActor;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 OwnerTeam;                                               // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasReturnPoint : 1;                                     // 0x0031(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHoming : 1;                                             // 0x0031(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YPB0[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               SourceTags;                                              // 0x0038(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               SourceAssetTags;                                         // 0x0058(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               HomingCallbackTags;                                      // 0x0078(0x0020) NativeAccessSpecifierPublic
		int32_t                                                    NumToDrop;                                               // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SpawnLocation;                                           // 0x009C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     DropLocations;                                           // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     TestLocations;                                           // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              CoinXP;                                                  // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      PickupGELevel;                                           // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastSpawnTime;                                           // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.PickupSpawnInfo
	 * Size -> 0x00C8
	 */
	struct FPickupSpawnInfo
	{
	public:
		class UClass*                                              PickupToSpawn;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ReturnPointActor;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              HomingActor;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              CurrentHolder;                                           // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 OwnerTeam;                                               // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasReturnPoint : 1;                                     // 0x0021(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHoming : 1;                                             // 0x0021(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bJoinInProgress : 1;                                     // 0x0021(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCarried : 1;                                            // 0x0021(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBQQ[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               SourceTags;                                              // 0x0028(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               SourceAssetTags;                                         // 0x0048(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               HomingCallbackTags;                                      // 0x0068(0x0020) NativeAccessSpecifierPublic
		struct FVector                                             SpawnLocation;                                           // 0x0088(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             DropLocation;                                            // 0x0094(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TestLocation;                                            // 0x00A0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XCI[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   UniquePickupID;                                          // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpireTime;                                              // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoinXP;                                                  // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PickupGELevel;                                           // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.PickupLaunchInfo
	 * Size -> 0x0050
	 */
	struct FPickupLaunchInfo
	{
	public:
		class UClass*                                              PickupClass;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PickupClassIndex;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FY1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   UniquePickupID;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              HomingActor;                                             // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHoming : 1;                                             // 0x0020(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QWME[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LaunchLocation;                                          // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             DropLocation;                                            // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TestLocation;                                            // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      NewExpireTime;                                           // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LaunchTime;                                              // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.SingleBannerEntry
	 * Size -> 0x0050
	 */
	struct FSingleBannerEntry
	{
	public:
		class FString                                              EntryID;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBannerSocketEntry                                  SocketEntry;                                             // 0x0010(0x0030) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FString>                                      Alterations;                                             // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.SingleBannerEntryRoot
	 * Size -> 0x0060
	 */
	struct FSingleBannerEntryRoot
	{
	public:
		struct FSingleBannerEntry                                  RootSocket;                                              // 0x0000(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FSingleBannerEntry>                          Sockets;                                                 // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.BannerEntranceData
	 * Size -> 0x0048
	 */
	struct FBannerEntranceData
	{
	public:
		float                                                      EntranceTime;                                            // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetFromGround;                                        // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransInTimeProportion;                                   // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransInDelayProportion;                                  // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEntranceInterpolation                                     TransCurveType;                                          // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHVK[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScaleDest;                                               // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ScaleStart;                                              // 0x001C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ScaleInTimeProportion;                                   // 0x0028(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ScaleInDelayProportion;                                  // 0x0034(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EEntranceInterpolation                                     ScaleCurveType;                                          // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NGRB[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BannerFadeTime;                                          // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.BannerActivationData
	 * Size -> 0x0080
	 */
	struct FBannerActivationData
	{
	public:
		struct FSingleBannerEntryRoot                              BannerDef;                                               // 0x0000(0x0060) BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector                                             DestLocation;                                            // 0x0060(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            DestRotation;                                            // 0x006C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DestScale;                                               // 0x0078(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreatedLocallyByClient;                                 // 0x007C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBannerEntrance                                            BannerEntranceType;                                      // 0x007D(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MA5F[0x2];                                   // 0x007E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionPlayerInput_AxisMapping
	 * Size -> 0x0020
	 */
	struct FOrionPlayerInput_AxisMapping
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FName                                                Axis;                                                    // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionPlayerInput_ActionMapping
	 * Size -> 0x0048
	 */
	struct FOrionPlayerInput_ActionMapping
	{
	public:
		class FName                                                Action;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                Key;                                                     // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		struct FKey                                                ChordKey;                                                // 0x0020(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bRequiresModifier;                                       // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OIRL[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoldTime;                                                // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipAdvanced;                                           // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U4TX[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAimAssistSettings
	 * Size -> 0x0030
	 */
	struct FOrionAimAssistSettings
	{
	public:
		float                                                      StrengthScalars[0x3];                                    // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonHeroScalar;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PullStrength;                                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PullMaxRate;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowMinDistance;                                         // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowMinStrength;                                         // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowMaxDistance;                                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowMaxStrength;                                         // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowDecayTime;                                           // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreferredTargetTimeout;                                  // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroSettings
	 * Size -> 0x0002
	 */
	struct FOrionHeroSettings
	{
	public:
		bool                                                       bDebugDisplayShapeFacetBounds;                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDebugDisplayAimTargetPlacement;                         // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionEmoteAbilityMapping
	 * Size -> 0x0018
	 */
	struct FOrionEmoteAbilityMapping
	{
	public:
		EOrionEmoteType                                            EmoteType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CV87[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Ability;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionAbilityBinding                                       KeyBinding;                                              // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZL6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMovementProfileData
	 * Size -> 0x0018
	 */
	struct FOrionMovementProfileData
	{
	public:
		EOrionHeroMovementProfile                                  ProfileIndex;                                            // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMBT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxAcceleration;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakingDecelerationWalking;                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakingFrictionFactor;                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakingFriction;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroundFriction;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionPickupInfo
	 * Size -> 0x0010
	 */
	struct FOrionPickupInfo
	{
	public:
		class UClass*                                              DataRef;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InitialPoolSize;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1NN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAnalogCursorSettings
	 * Size -> 0x0038
	 */
	struct FOrionAnalogCursorSettings
	{
	public:
		class UCurveFloat*                                         InputCurve;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ScrollCurve;                                             // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultSpeed;                                            // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHoverWidgetSize;                                      // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHoverWidgetSize;                                      // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHoverSpeedScale;                                      // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHoverSpeedScale;                                      // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoverSpeedScaleDecayRate;                                // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeadZone;                                                // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyAxisScaling;                                       // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisplayDebug;                                           // 0x0031(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HNOD[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLoadedDataCache
	 * Size -> 0x0030
	 */
	struct FOrionLoadedDataCache
	{
	public:
		unsigned char                                              UnknownData_KMTA[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     LoadedObjects;                                           // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RBJ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ParticleSystemPoolElem
	 * Size -> 0x0020
	 */
	struct FParticleSystemPoolElem
	{
	public:
		TArray<class UParticleSystemComponent*>                    PSComponents;                                            // 0x0000(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYY3[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionWorldGlobals
	 * Size -> 0x0940
	 */
	struct FOrionWorldGlobals
	{
	public:
		unsigned char                                              UnknownData_XNPE[0x100];                                 // 0x0000(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AOrionArenaCamera*>                           ArenaCameras;                                            // 0x0100(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZT2R[0x700];                                 // 0x0110(0x0700) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOrionGameState_Base*                                AvailableGameState;                                      // 0x0810(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AOrionPlayerState_Game*                              AvailablePlayerState;                                    // 0x0818(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionAbilitySystemComponent*                        AvailableAbilitySystemComp;                              // 0x0820(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AOrionVisionManager2*                                VisionManager;                                           // 0x0828(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bGameReady;                                              // 0x0830(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bTeamInfoReady;                                          // 0x0831(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bFirstControlledPawn;                                    // 0x0832(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bFirstHeroData;                                          // 0x0833(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bAbilitySystemCompReady;                                 // 0x0834(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bMatchDataLoaded;                                        // 0x0835(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bReadyToStartMatch;                                      // 0x0836(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bHUDLoaded;                                              // 0x0837(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bPlayerControllerHasState;                               // 0x0838(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WQ43[0x5F];                                  // 0x0839(0x005F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UParticleSystem*, struct FParticleSystemPoolElem> InUseWorldParticleSystems;                               // 0x0898(0x0050) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7XGK[0x8];                                   // 0x08E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UParticleSystem*, struct FParticleSystemPoolElem> WorldParticleSystemPool;                                 // 0x08F0(0x0050) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OrionGame.OrionObjectLibraryEntry
	 * Size -> 0x0020
	 */
	struct FOrionObjectLibraryEntry
	{
	public:
		class UObjectLibrary*                                      Library;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionItemType                                             ItemType;                                                // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5QI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      LoadedPaths;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionDeveloperAttributeOverride
	 * Size -> 0x0030
	 */
	struct FOrionDeveloperAttributeOverride
	{
	public:
		class FName                                                CharacterDataName;                                       // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      NewValue;                                                // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHFS[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDeveloperMenuCommand
	 * Size -> 0x0020
	 */
	struct FOrionDeveloperMenuCommand
	{
	public:
		class FString                                              Category;                                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Commands;                                                // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.GravesiteData
	 * Size -> 0x0014
	 */
	struct FGravesiteData
	{
	public:
		bool                                                       bGravesitesEnabled;                                      // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADUI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SecondsWithinRadiusForBannerSpawn;                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifespanSeconds;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnDelaySeconds;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBannerEntrance                                            BannerEntrance;                                          // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WDE[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDeveloperUIToggles
	 * Size -> 0x0007
	 */
	struct FOrionDeveloperUIToggles
	{
	public:
		bool                                                       bDisableHUD;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisableIndicators;                                      // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisableHealthAndStatus;                                 // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisableAbilityWidgets;                                  // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisableTeamInfo;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisableEnemyInfo;                                       // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisableMiniMap;                                         // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionProjectileCues
	 * Size -> 0x0048
	 */
	struct FOrionProjectileCues
	{
	public:
		struct FGameplayCueTag                                     Spawn;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     Destroy;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     HitCharacter;                                            // 0x0010(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     HitCharacterShield;                                      // 0x0018(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     HitWorld;                                                // 0x0020(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bOrientHitGCsToProjectileVelocity;                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Q8A[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSurfaceNormalDeviationAngle;                          // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     Bounce;                                                  // 0x0030(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     Explosion;                                               // 0x0038(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     NoHit;                                                   // 0x0040(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeDimension
	 * Size -> 0x0038
	 */
	struct FOrionShapeDimension
	{
	public:
		EOrionShapeDimensionType                                   Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V52K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      ScalableFloatValue;                                      // 0x0008(0x0028) Edit, NativeAccessSpecifierPublic
		class UClass*                                              ProjectileValue;                                         // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTargetingModePlacement
	 * Size -> 0x0308
	 */
	struct FOrionTargetingModePlacement
	{
	public:
		EOrionTargetingModePlacementPolicy                         Policy;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2C9M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      AimSphereCastRange;                                      // 0x0008(0x0028) NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                AimSphereCastRangeDim;                                   // 0x0030(0x0038) Edit, NativeAccessSpecifierPublic
		struct FScalableFloat                                      AimSphereCastRadius;                                     // 0x0068(0x0028) NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                AimSphereCastBlockRadiusDim;                             // 0x0090(0x0038) Edit, NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                AimSphereCastOverlapRadiusDim;                           // 0x00C8(0x0038) Edit, NativeAccessSpecifierPublic
		struct FCollisionProfileName                               AimSphereCastProfile;                                    // 0x0100(0x0008) Edit, NativeAccessSpecifierPublic
		struct FOrionActorFilter                                   AimSphereCastFilter;                                     // 0x0108(0x0060) Edit, NativeAccessSpecifierPublic
		bool                                                       bLockPitchAndRoll;                                       // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLockViewToTarget;                                       // 0x0169(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AC8R[0x6];                                   // 0x016A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LockViewToTargetSocket;                                  // 0x0170(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckOwnerLOSToSweepStart;                              // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HT12[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      GroundPlacementRangeMin;                                 // 0x0180(0x0028) NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                GroundPlacementRangeMinDim;                              // 0x01A8(0x0038) Edit, NativeAccessSpecifierPublic
		struct FScalableFloat                                      GroundPlacementRangeMax;                                 // 0x01E0(0x0028) NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                GroundPlacementRangeMaxDim;                              // 0x0208(0x0038) Edit, NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                GroundTargetingHeightLimitMin;                           // 0x0240(0x0038) Edit, NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                GroundTargetingHeightLimitMax;                           // 0x0278(0x0038) Edit, NativeAccessSpecifierPublic
		struct FScalableFloat                                      GroundTargetingMinPitch;                                 // 0x02B0(0x0028) Edit, NativeAccessSpecifierPublic
		struct FScalableFloat                                      GroundTargetingMaxPitch;                                 // 0x02D8(0x0028) Edit, NativeAccessSpecifierPublic
		bool                                                       bGroundPlacementNormalToGround;                          // 0x0300(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GA93[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeFacetDefinition
	 * Size -> 0x0310
	 */
	struct FOrionShapeFacetDefinition
	{
	public:
		EOrionShapeFacetType                                       Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BM0X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      AngleHorizontalDegrees;                                  // 0x0008(0x0028) NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                AngleHorizontalDegreesDim;                               // 0x0030(0x0038) Edit, NativeAccessSpecifierPublic
		struct FScalableFloat                                      RadiusMin;                                               // 0x0068(0x0028) NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                RadiusMinDim;                                            // 0x0090(0x0038) Edit, NativeAccessSpecifierPublic
		struct FScalableFloat                                      RadiusMax;                                               // 0x00C8(0x0028) NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                RadiusMaxDim;                                            // 0x00F0(0x0038) Edit, NativeAccessSpecifierPublic
		struct FScalableFloat                                      Width;                                                   // 0x0128(0x0028) NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                WidthDim;                                                // 0x0150(0x0038) Edit, NativeAccessSpecifierPublic
		struct FScalableFloat                                      LengthMin;                                               // 0x0188(0x0028) NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                LengthMinDim;                                            // 0x01B0(0x0038) Edit, NativeAccessSpecifierPublic
		struct FScalableFloat                                      LengthMax;                                               // 0x01E8(0x0028) NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                LengthMaxDim;                                            // 0x0210(0x0038) Edit, NativeAccessSpecifierPublic
		struct FScalableFloat                                      HeightMin;                                               // 0x0248(0x0028) NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                HeightMinDim;                                            // 0x0270(0x0038) Edit, NativeAccessSpecifierPublic
		struct FScalableFloat                                      HeightMax;                                               // 0x02A8(0x0028) NativeAccessSpecifierPublic
		struct FOrionShapeDimension                                HeightMaxDim;                                            // 0x02D0(0x0038) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_62D1[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeDefinition
	 * Size -> 0x0010
	 */
	struct FOrionShapeDefinition
	{
	public:
		TArray<struct FOrionShapeFacetDefinition>                  Facets;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionActorPrioritizer
	 * Size -> 0x0008
	 */
	struct FOrionActorPrioritizer
	{
	public:
		EOrionActorPrioritizerOriginPolicy                         RelativeTo;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionActorPrioritizerSortPolicy                           SortOn;                                                  // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionActorPrioritizerDimensionPolicy                      Dimension;                                               // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2CD0[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxResults;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.PassiveHudRuntimeState
	 * Size -> 0x0020
	 */
	struct FPassiveHudRuntimeState
	{
	public:
		class UOrionAbility*                                       Ability;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCountMax;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndTime;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHUDDisplayType                                            DisplayType;                                             // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATOS[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.StackCountRefreshInfo
	 * Size -> 0x0008
	 */
	struct FStackCountRefreshInfo
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilitySpec;                                             // 0x0000(0x0004) NativeAccessSpecifierPublic
		float                                                      ServerExpectedRefreshTime;                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionGameplayCueBatch_Item
	 * Size -> 0x0028
	 */
	struct FOrionGameplayCueBatch_Item
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008) NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LH07[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0010(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionGameplayCueBatch
	 * Size -> 0x00C8
	 */
	struct FOrionGameplayCueBatch
	{
	public:
		TArray<struct FOrionGameplayCueBatch_Item>                 Items;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayCueParameters                              Parameters;                                              // 0x0010(0x00B8) ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.CameraModeView
	 * Size -> 0x0028
	 */
	struct FCameraModeView
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsFirstPerson;                                          // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMXI[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FieldOfView;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMin;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMax;                                                // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.CameraViewOffset
	 * Size -> 0x0040
	 */
	struct FCameraViewOffset
	{
	public:
		struct FVector                                             HighPitchOffset;                                         // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             MidPitchOffset;                                          // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LowPitchOffset;                                          // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VKF6[0x1C];                                  // 0x0024(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLoreData
	 * Size -> 0x0010
	 */
	struct FOrionLoreData
	{
	public:
		TArray<class FText>                                        BackgroundBullets;                                       // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroRoleEntry
	 * Size -> 0x0008
	 */
	struct FOrionHeroRoleEntry
	{
	public:
		EOrionRole                                                 Role;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58BO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroRoles
	 * Size -> 0x0018
	 */
	struct FOrionHeroRoles
	{
	public:
		EOrionHeroRangeType                                        RangeType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGYA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOrionHeroRoleEntry>                         PossibleRoles;                                           // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionAIBotCardEntry
	 * Size -> 0x0018
	 */
	struct FOrionAIBotCardEntry
	{
	public:
		TArray<TAssetPtr<class UOrionCardData>>                    CardData;                                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		int32_t                                                    RequiredActivationPoints;                                // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3JN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.HeroProgression
	 * Size -> 0x0010
	 */
	struct FHeroProgression
	{
	public:
		int32_t                                                    TotalXP;                                                 // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeroXP;                                                  // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeroRank;                                                // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XPToNextLevel;                                           // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCosmeticPlayerChoices
	 * Size -> 0x00C8
	 */
	struct FOrionCosmeticPlayerChoices
	{
	public:
		class FString                                              SkinName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UOrionMcpItemDefinition*>                     BannerItems;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FSingleBannerEntryRoot                              BannerDef;                                               // 0x0020(0x0060) BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              Emote0Name;                                              // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Emote1Name;                                              // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Emote2Name;                                              // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Emote3Name;                                              // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOwned;                                                  // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VX9Q[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HeroLevel;                                               // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionQuestPrerequisites
	 * Size -> 0x0018
	 */
	struct FOrionQuestPrerequisites
	{
	public:
		struct FDataTableRowHandle                                 ObjectiveStatHandle;                                     // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionPrereqOp                                             EvaluationOp;                                            // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELSW[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMcpQuestObjectiveInfo
	 * Size -> 0x0050
	 */
	struct FOrionMcpQuestObjectiveInfo
	{
	public:
		class FName                                                BackendName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ObjectiveCompletedEventName;                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionStatEvaluationType                                   ObjectiveEvaluationType;                                 // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionStatTrackType                                        ObjectiveTrackType;                                      // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4JY[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 ObjectiveStatHandle;                                     // 0x0018(0x0010) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Stage;                                                   // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHidden;                                                 // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MTN[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionItemQuantityPair
	 * Size -> 0x0028
	 */
	struct FOrionItemQuantityPair
	{
	public:
		TAssetPtr<class UOrionMcpItemDefinition>                   ItemDefinition;                                          // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7GIA[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    Quantity;                                                // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLLY[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionGameQuestReward
	 * Size -> 0x0028
	 */
	struct FOrionGameQuestReward
	{
	public:
		class UHUDAlertAsset*                                      HudNotification;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOrionMcpQuestItemDefinition*                        NextQuestReward;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 RewardStatHandle;                                        // 0x0010(0x0010) Edit, NativeAccessSpecifierPublic
		int32_t                                                    RewardStatCount;                                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KRM3[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ItemIdList
	 * Size -> 0x0010
	 */
	struct FItemIdList
	{
	public:
		TArray<class FString>                                      Values;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.SimpleAchievementStatus
	 * Size -> 0x0008
	 */
	struct FSimpleAchievementStatus
	{
	public:
		EOrionSimpleAchievementType                                Key;                                                     // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJMI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Count;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.SimpleAchievements
	 * Size -> 0x0010
	 */
	struct FSimpleAchievements
	{
	public:
		TArray<struct FSimpleAchievementStatus>                    Status;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TechnicRecipeIngredient
	 * Size -> 0x0018
	 */
	struct FTechnicRecipeIngredient
	{
	public:
		class FString                                              ComponentTemplateName;                                   // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotIndex;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TeamOwnershipXPBonusEntry
	 * Size -> 0x0020
	 */
	struct FTeamOwnershipXPBonusEntry
	{
	public:
		class FString                                              PlayerNetID;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeroLevel;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    bIsMe;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeamXPContrib;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8D1J[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TeamOwnershipXPBonus
	 * Size -> 0x0010
	 */
	struct FTeamOwnershipXPBonus
	{
	public:
		TArray<struct FTeamOwnershipXPBonusEntry>                  Contributions;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionPlayerEndMatchData
	 * Size -> 0x0058
	 */
	struct FOrionPlayerEndMatchData
	{
	public:
		class FString                                              MatchSessionId;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlaylistId;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGameConcludedViaSurrender;                              // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsCustomGame;                                           // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BRX7[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      GameTags;                                                // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              HeroSkin;                                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      TeamSkins;                                               // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      OpponentSkins;                                           // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.BannerBulkCommand
	 * Size -> 0x0030
	 */
	struct FBannerBulkCommand
	{
	public:
		EBannerCommandType                                         BannerCommandType;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUJM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              bannerId;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OtherId;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_II20[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BannerBulkCommandList
	 * Size -> 0x0010
	 */
	struct FBannerBulkCommandList
	{
	public:
		TArray<struct FBannerBulkCommand>                          Values;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionAttributeViewItem
	 * Size -> 0x00B8
	 */
	struct FOrionAttributeViewItem
	{
	public:
		class UTexture2D*                                          DisplayIcon;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MarkupAbbreviation;                                      // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                ToolTipText;                                             // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EAttributeViewCategory                                     Category;                                                // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKFH[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0050(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               SourceTags;                                              // 0x0070(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TargetTags;                                              // 0x0090(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EAttributeViewDisplayFormat                                DisplayFormat;                                           // 0x00B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStatVisibleInCardShop;                                  // 0x00B1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bStatVisibileInDeckBuilder;                              // 0x00B2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideSimpleStats;                                    // 0x00B3(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x00B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionStyleEntry
	 * Size -> 0x0028
	 */
	struct FOrionStyleEntry
	{
	public:
		class FName                                                AssetName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class USlateBrushAsset>                          Asset;                                                   // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PEZY[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct OrionGame.OrionAffinityDisplayInfo
	 * Size -> 0x0050
	 */
	struct FOrionAffinityDisplayInfo
	{
	public:
		class FText                                                AffinityName;                                            // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  AffinityMaterial;                                        // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        AffinityColor;                                           // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        AccentColor;                                             // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionRarityDisplayInfo
	 * Size -> 0x0030
	 */
	struct FOrionRarityDisplayInfo
	{
	public:
		class FText                                                RarityName;                                              // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UTexture2D*                                          RarityIcon;                                              // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        RarityColor;                                             // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCardUnlockEntry
	 * Size -> 0x0060
	 */
	struct FOrionCardUnlockEntry
	{
	public:
		class FName                                                Token;                                                   // 0x0000(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UOrionMcpTokenItemDefinition>              TokenPtr;                                                // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SAS2[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                TokenName;                                               // 0x0028(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                TokenDescription;                                        // 0x0040(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bClearAfterMatch;                                        // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TW5L[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ButtonLegendItem
	 * Size -> 0x0020
	 */
	struct FButtonLegendItem
	{
	public:
		class FName                                                Action;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ActionText;                                              // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionDeckBuilder_ConstantText
	 * Size -> 0x0020
	 */
	struct FOrionDeckBuilder_ConstantText
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Value;                                                   // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.AICardSelectionAction
	 * Size -> 0x0010
	 */
	struct FAICardSelectionAction
	{
	public:
		class UOrionCardData*                                      CardItem;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionCardSlotIndex                                        Slot;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9GQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TotalCostSoFar;                                          // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.AIRouteMarkup
	 * Size -> 0x0018
	 */
	struct FAIRouteMarkup
	{
	public:
		TArray<class AActor*>                                      Path;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    RouteID;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsCircular;                                             // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T18S[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AILaneMarkup
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FAILaneMarkup : public FAIRouteMarkup
	{
	public:
		class AOrionCharAISpawner*                                 Spawners[0x2];                                           // 0x0018(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OrionGame.ObjectiveGraphDebugNodeOverride
	 * Size -> 0x0001
	 */
	struct FObjectiveGraphDebugNodeOverride
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.AILaneWhitelist
	 * Size -> 0x0001
	 */
	struct FAILaneWhitelist
	{
	public:
		bool                                                       Left : 1;                                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       Middle : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       Right : 1;                                               // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OrionGame.FakeObjectiveGraphCharacter
	 * Size -> 0x0014
	 */
	struct FFakeObjectiveGraphCharacter
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTargetType                                           Type;                                                    // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamNum;                                                 // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L38T[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.FakeObjectiveGraphMinionWave
	 * Size -> 0x0028
	 */
	struct FFakeObjectiveGraphMinionWave
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GU2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     MinionLocations;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		uint32_t                                                   MinionsCount;                                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamNum;                                                 // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuperMinions;                                           // 0x0025(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T74E[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionPlaylistInfo
	 * Size -> 0x0080
	 */
	struct FOrionPlaylistInfo
	{
	public:
		int32_t                                                    PlaylistId;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxTeams;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamSize;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayers;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRanked;                                                 // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSupportsCustomMMKey;                                    // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAwardXP;                                                // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowRejoin;                                            // 0x0013(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowSurrender;                                         // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasFriendlyBots;                                        // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasEnemyBots;                                           // 0x0016(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowMirrorMatches;                                     // 0x0017(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RatingType;                                              // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyMap;                                                // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameMap;                                                 // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameModeClass;                                           // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyGameModeClass;                                      // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsDraftInReplays;                                 // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_70JL[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMatchBotConfig
	 * Size -> 0x0028
	 */
	struct FOrionMatchBotConfig
	{
	public:
		EAIBotDifficulty                                           FriendlyBotDifficulty;                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIBotDifficulty                                           EnemyBotDifficulty;                                      // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C7VT[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FriendlyBotHeroList;                                     // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EnemyBotHeroList;                                        // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionMatchConfig
	 * Size -> 0x0040
	 */
	struct FOrionMatchConfig
	{
	public:
		int32_t                                                    PlaylistId;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamElo;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomKey;                                               // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOrionMatchBotConfig                                BotConfig;                                               // 0x0018(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionAcceptMatchData
	 * Size -> 0x0020
	 */
	struct FOrionAcceptMatchData
	{
	public:
		struct FUniqueNetIdRepl                                    PlayerId;                                                // 0x0000(0x0018) NativeAccessSpecifierPublic
		EOrionAcceptMatchState                                     AcceptMatchState;                                        // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UBM2[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SkillRatingTimeRestriction
	 * Size -> 0x0008
	 */
	struct FSkillRatingTimeRestriction
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxRatingDelta;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TBPlayerFilterDuration
	 * Size -> 0x0008
	 */
	struct FTBPlayerFilterDuration
	{
	public:
		ETeamBuilderPlayerFilterReason                             Reason;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEEQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Duration;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTBPlayerChoices
	 * Size -> 0x00F0
	 */
	struct FOrionTBPlayerChoices
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOrionCosmeticPlayerChoices                         Cosmetic;                                                // 0x0010(0x00C8) NativeAccessSpecifierPublic
		class FString                                              DeckId;                                                  // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionPosition                                             Position;                                                // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionRole                                                 Role;                                                    // 0x00E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPPV[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBParams
	 * Size -> 0x0148
	 */
	struct FOrionTBParams
	{
	public:
		struct FUniqueNetIdRepl                                    UserId;                                                  // 0x0000(0x0018) NativeAccessSpecifierPublic
		int32_t                                                    ControllerId;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlaylistId;                                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomKey;                                               // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIBotDifficulty                                           FriendlyBotDifficulty;                                   // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIBotDifficulty                                           EnemyBotDifficulty;                                      // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQT2[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FriendlyBotHeroList;                                     // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EnemyBotHeroList;                                        // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOrionTBPlayerChoices                               PlayerChoices;                                           // 0x0058(0x00F0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TBFilteredPlayer
	 * Size -> 0x0020
	 */
	struct FTBFilteredPlayer
	{
	public:
		struct FUniqueNetIdRepl                                    PlayerId;                                                // 0x0000(0x0018) NativeAccessSpecifierPublic
		ETeamBuilderPlayerFilterReason                             Reason;                                                  // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DCAB[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TimeRemaining;                                           // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamComp
	 * Size -> 0x0018
	 */
	struct FOrionTeamComp
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQ3L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EOrionRole>                                         Roles;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamCompDebugSlot
	 * Size -> 0x0020
	 */
	struct FOrionTeamCompDebugSlot
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeamCompDebugSlotStatus                              Status;                                                  // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESG0[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HeroName;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionRole                                                 SelectedRole;                                            // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XBPY[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SelectedRoleWeight;                                      // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamCompDebugData
	 * Size -> 0x0018
	 */
	struct FOrionTeamCompDebugData
	{
	public:
		float                                                      TeamCompScore;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KW17[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOrionTeamCompDebugSlot>                     Members;                                                 // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.MatchmakingParams
	 * Size -> 0x0098
	 */
	struct FMatchmakingParams
	{
	public:
		int32_t                                                    ControllerId;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PartySize;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RegionId;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumAttempts;                                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CreateGameChance;                                        // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RerunSearchDelay;                                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RerunNoCreateDelay;                                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NextResultDelay;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchFailureDelay;                                      // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchmakingFlags                                          Flags;                                                   // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRBU[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionMatchConfig                                   MatchConfig;                                             // 0x0038(0x0040) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0PE[0x20];                                  // 0x0078(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMMRStep
	 * Size -> 0x000C
	 */
	struct FOrionMMRStep
	{
	public:
		int32_t                                                    DeltaBase;                                               // 0x0000(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxDelta;                                                // 0x0004(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxExpansionTime;                                        // 0x0008(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionMMRExpansion
	 * Size -> 0x0030
	 */
	struct FOrionMMRExpansion
	{
	public:
		int32_t                                                    PlaylistId;                                              // 0x0000(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QHI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOrionMMRStep>                               Steps;                                                   // 0x0008(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic
		float                                                      X1;                                                      // 0x0018(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      X2;                                                      // 0x001C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      X3;                                                      // 0x0020(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      X4;                                                      // 0x0024(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      X5;                                                      // 0x0028(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8TF[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLobbyBuilderParams
	 * Size -> 0x0058
	 */
	struct FOrionLobbyBuilderParams
	{
	public:
		struct FUniqueNetIdRepl                                    UserId;                                                  // 0x0000(0x0018) NativeAccessSpecifierPublic
		int32_t                                                    ControllerId;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlaylistId;                                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomKey;                                               // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOrionMatchBotConfig                                BotConfig;                                               // 0x0030(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.MMRWaitTime
	 * Size -> 0x0010
	 */
	struct FMMRWaitTime
	{
	public:
		int32_t                                                    MMR;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCY0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           WaitTime;                                                // 0x0008(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionPartyRepState
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FOrionPartyRepState : public FPartyState
	{
	public:
		class FString                                              SessionId;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionPersistentPartyRepState
	 * Size -> 0x0060 (FullSize[0x0080] - InheritedSize[0x0020])
	 */
	struct FOrionPersistentPartyRepState : public FOrionPartyRepState
	{
	public:
		EOrionPartyState                                           PartyProgression;                                        // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionMatchmakingType                                      MatchmakingType;                                         // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIBotDifficulty                                           AIDifficulty;                                            // 0x0022(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOVC[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MatchmakingCustomKey;                                    // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionPartyMatchmakingState                                MatchmakingState;                                        // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IODO[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumPlayersNeeded;                                        // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionLobbyBuilderResult                                   MatchmakingResult;                                       // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXOR[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOrionAcceptMatchData>                       AcceptMatchPlayers;                                      // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FUniqueNetIdRepl>                            PartyMembersSnapshot;                                    // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              LockInHeroResponses;                                     // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     MatchmakingEstWaitTime;                                  // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionLootNotification
	 * Size -> 0x0048
	 */
	struct FOrionLootNotification
	{
	public:
		class FString                                              LootSource;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LootSourceInstance;                                      // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMcpLootResult                                      LootGranted;                                             // 0x0020(0x0020) NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EN7[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MCPKeyValue
	 * Size -> 0x0018
	 */
	struct FMCPKeyValue
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D57V[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MatchCompleteNotification
	 * Size -> 0x0058
	 */
	struct FMatchCompleteNotification
	{
	public:
		class FString                                              MatchSessionId;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GameDurationInMinutes;                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_62T7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMCPKeyValue>                                XPSources;                                               // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FTeamOwnershipXPBonus                               TeamOwnershipXPBonus;                                    // 0x0028(0x0010) NativeAccessSpecifierPublic
		TArray<struct FMCPKeyValue>                                TimeCurrencySources;                                     // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    XPTotal;                                                 // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeCurrencyTotal;                                       // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Dampener;                                                // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDidAbandonMatch;                                        // 0x0054(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWasBannedForMatchAbandon;                               // 0x0055(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1VCA[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLevelInfo
	 * Size -> 0x0010
	 */
	struct FOrionLevelInfo
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentXP;                                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XPNeeded;                                                // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionLevelTypes                                           LevelType;                                               // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZP5[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionSurveyInfo
	 * Size -> 0x0020
	 */
	struct FOrionSurveyInfo
	{
	public:
		bool                                                       bAskSurvey;                                              // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WVY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                QuestionGroupToAsk;                                      // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchSessionId;                                          // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.HeroLevelUpNotification
	 * Size -> 0x0028
	 */
	struct FHeroLevelUpNotification
	{
	public:
		class FString                                              HeroId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroType;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OldLevel;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewLevel;                                                // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.AccountLevelUpNotification
	 * Size -> 0x0008
	 */
	struct FAccountLevelUpNotification
	{
	public:
		int32_t                                                    OldLevel;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewLevel;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.Orion2DReticleSourceData
	 * Size -> 0x0018
	 */
	struct FOrion2DReticleSourceData
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ScreenSize;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           ScreenOffset;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTagTranslate
	 * Size -> 0x0010
	 */
	struct FOrionTagTranslate
	{
	public:
		struct FGameplayTag                                        TagID;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TranslatedTagID;                                         // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCharReplicatedStatus
	 * Size -> 0x0008
	 */
	struct FOrionCharReplicatedStatus
	{
	public:
		unsigned char                                              Status;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SAVK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EndTime;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionLandingEffectEntry
	 * Size -> 0x0010
	 */
	struct FOrionLandingEffectEntry
	{
	public:
		float                                                      MinImpactSpeed;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZEE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayCueTag                                     GCToTrigger;                                             // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.Orion2DReticle
	 * Size -> 0x0018
	 */
	struct FOrion2DReticle
	{
	public:
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ScreenSize;                                              // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           ScreenOffset;                                            // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionAbilityTargetDataFilter
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FOrionAbilityTargetDataFilter : public FGameplayTargetDataFilter
	{
	public:
		EOrionTeam                                                 SelfTeam;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeamCompare                                          RequiredRelationshipType;                                // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGI8[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroDialogCueEntry
	 * Size -> 0x0030
	 */
	struct FOrionHeroDialogCueEntry
	{
	public:
		class FString                                              DialogEventID;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     TagIdent;                                                // 0x0010(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USoundBase*                                          SoundCue;                                                // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPlayFrequency;                                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayCueEvent                                          EventTriggerType;                                        // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTEI[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroDialogAudioControl
	 * Size -> 0x0080
	 */
	struct FOrionHeroDialogAudioControl
	{
	public:
		TArray<class FString>                                      DialogEventIDS;                                          // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EGameplayCueEvent                                          DefaultTriggerType;                                      // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTSY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOrionHeroDialogCueEntry>                    TagsToHandle;                                            // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XB0M[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCharDeathData
	 * Size -> 0x0018
	 */
	struct FOrionCharDeathData
	{
	public:
		class AActor*                                              KilledBy;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           DamageNormal;                                            // 0x0008(0x000C) NativeAccessSpecifierPublic
		float                                                      DamageMagnitude;                                         // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionReplicatedAcceleration
	 * Size -> 0x0002
	 */
	struct FOrionReplicatedAcceleration
	{
	public:
		unsigned char                                              AccelAngle;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AccelMagnitude;                                          // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.NavFieldDirectionTile
	 * Size -> 0x0018
	 */
	struct FNavFieldDirectionTile
	{
	public:
		int16_t                                                    TileX;                                                   // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    TileY;                                                   // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    RedLaneIdx;                                              // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    BlueLaneIdx;                                             // 0x0006(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           FieldData;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.NavFieldSingleDirectionTile
	 * Size -> 0x0018
	 */
	struct FNavFieldSingleDirectionTile
	{
	public:
		int16_t                                                    TileX;                                                   // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    TileY;                                                   // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UniqueRouteId;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint16_t>                                           FieldData;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.NavFieldHeightTile
	 * Size -> 0x0020
	 */
	struct FNavFieldHeightTile
	{
	public:
		int16_t                                                    TileX;                                                   // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    TileY;                                                   // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinZ;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxZ;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IDM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      HeightData;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.NavFieldLane
	 * Size -> 0x0020
	 */
	struct FNavFieldLane
	{
	public:
		TArray<struct FVector>                                     KeyLocations;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamNum;                                                 // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1VJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsCircular : 1;                                         // 0x0014(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N0GE[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LaneID;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UniqueRouteId;                                           // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionGameEventMessageData
	 * Size -> 0x0088
	 */
	struct FOrionGameEventMessageData
	{
	public:
		class UTexture2D*                                          Icon1;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon2;                                                   // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Text1;                                                   // 0x0010(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Text2;                                                   // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamNum1;                                                // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamNum2;                                                // 0x0041(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACTE[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MessageTypeIdentifier;                                   // 0x0048(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionGameEventMessagePrio                                 MessagePrio;                                             // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionGameEventMessageType                                 MessageType;                                             // 0x0051(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S8OL[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPCTeamCommunicationsData*                           TeamCommData;                                            // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveMessagesOfSameMessageType;                        // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bClearLowerPrioMessages;                                 // 0x0061(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFlushAllLowerPrioMessages;                              // 0x0062(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bStompCurrentMessage;                                    // 0x0063(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OGLZ[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           MessageSound;                                            // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AOrionPlayerState_Game*                              SendingPlayer;                                           // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1CT[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHUDLogMessageData
	 * Size -> 0x0028
	 */
	struct FOrionHUDLogMessageData
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon1;                                                   // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon2;                                                   // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon3;                                                   // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamNum1;                                                // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamNum2;                                                // 0x0021(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 MyTeam;                                                  // 0x0022(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 EnemyTeam;                                               // 0x0023(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQ40[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.UIUpdateHelperStruct
	 * Size -> 0x0001
	 */
	struct FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              UnknownData_63E6[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTowerTargetingInfo
	 * Size -> 0x004F (FullSize[0x0050] - InheritedSize[0x0001])
	 */
	struct FOrionTowerTargetingInfo : public FUIUpdateHelperStruct
	{
	public:
		EOrionTowerTargetingType                                   TargetingType;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YFYY[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberOfTargetedMinions;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                TargetedHeroName;                                        // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                TargetedPlayerName;                                      // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          TargetedHeroPortrait;                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TowerHealth;                                             // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TowerHealthPercent;                                      // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsNearTower;                                            // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EOrionTeam                                                 TowerTeamNum;                                            // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_699K[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RespawnTime;                                             // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCoreInfo
	 * Size -> 0x0027 (FullSize[0x0028] - InheritedSize[0x0001])
	 */
	struct FOrionCoreInfo : public FUIUpdateHelperStruct
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1IK[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Health;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthMax;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticallyWoundedThresholdPCT;                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCriticallyWounded;                                      // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAZW[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Shield;                                                  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShieldMax;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCurrentlyDead;                                          // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCurrentlyExposed;                                       // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEmptyStruct;                                            // 0x001E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R8S1[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AOrionDamageableObjective_Base>       CoreActor;                                               // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCardAbilityData
	 * Size -> 0x0047 (FullSize[0x0048] - InheritedSize[0x0001])
	 */
	struct FOrionCardAbilityData : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              UnknownData_SOC6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CooldownTimeRemaining;                                   // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownEndTime;                                         // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanActivate;                                            // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KO18[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          AbilityImage;                                            // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEmptyAbility;                                           // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J71G[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StackCount;                                              // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCountMax;                                           // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPassiveCard;                                          // 0x0024(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EOrionAbilityBinding                                       InputID;                                                 // 0x0025(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IXAV[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SlotIndex;                                               // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXZD[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionCardData*                                      CardData;                                                // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumOfUpgrades;                                           // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalCardLevel;                                          // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AOrionCard*                                          CardActor;                                               // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionAbilityUIData
	 * Size -> 0x00BF (FullSize[0x00C0] - InheritedSize[0x0001])
	 */
	struct FOrionAbilityUIData : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              UnknownData_EW64[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CooldownTimeRemaining;                                   // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanActivate;                                            // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsUnlocked;                                             // 0x0009(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDX4[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          AbilityImage;                                            // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeyString;                                               // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EmptyAbility;                                            // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VB5[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CachedHeroLevel;                                         // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AbilityLevel;                                            // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AbilityLevelMax;                                         // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanLevelUpAbility;                                      // 0x0038(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUDJ[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StacksRemaining;                                         // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StacksMax;                                               // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9IEX[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                AbilityDisplayName;                                      // 0x0048(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                AbilityDescription;                                      // 0x0060(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                AbilityShortDescription;                                 // 0x0078(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UOrionAbility*                                       Ability;                                                 // 0x0090(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOrionHeroData*                                      HeroData;                                                // 0x0098(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AbilityCost;                                             // 0x00A0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x00A4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCountMax;                                           // 0x00A8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasStacks;                                              // 0x00AC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C5J4[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DurationEndTime;                                         // 0x00B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationLength;                                          // 0x00B4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHUDDisplayType                                            DurationDisplayType;                                     // 0x00B8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCurrentlyEngaged;                                       // 0x00B9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSilenced;                                               // 0x00BA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bNeverActivated;                                         // 0x00BB(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    InputID;                                                 // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.BotObjectiveAgent
	 * Size -> 0x0010
	 */
	struct FBotObjectiveAgent
	{
	public:
		class AOrionAIBot*                                         BotController;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AOrionPlayerController_Game*                         PlayerController;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.BotObjectiveSlot
	 * Size -> 0x0028
	 */
	struct FBotObjectiveSlot
	{
	public:
		TArray<struct FBotObjectiveAgent>                          Agents;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F01I[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionWellCues
	 * Size -> 0x0038
	 */
	struct FOrionWellCues
	{
	public:
		struct FGameplayCueTag                                     Geyser;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     Active;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     DeadZone;                                                // 0x0010(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     RanDry;                                                  // 0x0018(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     RigPlaced;                                               // 0x0020(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     PlacingRig;                                              // 0x0028(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     CollectingFromRig;                                       // 0x0030(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionAILane
	 * Size -> 0x0048
	 */
	struct FOrionAILane
	{
	public:
		unsigned char                                              UnknownData_HRXX[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.WellAIInfo
	 * Size -> 0x0040
	 */
	struct FWellAIInfo
	{
	public:
		class AOrionWell_Base*                                     Well;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBotObjective_Well*                                  WellObjectives[0x2];                                     // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKC2[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BotObjectivesArray
	 * Size -> 0x0010
	 */
	struct FBotObjectivesArray
	{
	public:
		TArray<class UBotObjective*>                               Objectives;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.BotTeamObjectives
	 * Size -> 0x0020
	 */
	struct FBotTeamObjectives
	{
	public:
		struct FBotObjectivesArray                                 Teams[0x2];                                              // 0x0000(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.HeroDataCollection
	 * Size -> 0x0010
	 */
	struct FHeroDataCollection
	{
	public:
		TArray<class UOrionHeroData*>                              Collection;                                              // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.FrontEndCamera
	 * Size -> 0x0028
	 */
	struct FFrontEndCamera
	{
	public:
		class FName                                                SceneName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TLazyObjectPtr<class ACameraActor>                         SceneCamera;                                             // 0x0008(0x001C) Edit, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98W6[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AutomationPawnInfo
	 * Size -> 0x0018
	 */
	struct FAutomationPawnInfo
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SpawnLocation;                                           // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxHealth;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTBMemberInfo
	 * Size -> 0x0138
	 */
	struct FOrionTBMemberInfo
	{
	public:
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    SlotIdx;                                                 // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTBMemberState                                        State;                                                   // 0x001C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J65K[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionTBPlayerChoices                               PlayerData;                                              // 0x0020(0x00F0) BlueprintVisible, NativeAccessSpecifierPublic
		EAIBotDifficulty                                           BotDifficulty;                                           // 0x0110(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBot;                                                  // 0x0111(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUF9[0x6];                                   // 0x0112(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    PartyLeaderId;                                           // 0x0118(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bFromSocialParty;                                        // 0x0130(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bValidPlayer;                                            // 0x0131(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8ZD[0x6];                                   // 0x0132(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamChatRoomId
	 * Size -> 0x0018
	 */
	struct FOrionTeamChatRoomId
	{
	public:
		EOrionTeam                                                 TeamIndex;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_URU4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ChatRoomId;                                              // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTBTeamInfo
	 * Size -> 0x0168
	 */
	struct FOrionTBTeamInfo
	{
	public:
		int32_t                                                    SocialPartySize;                                         // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IPQT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionTBMemberInfo                                  Captain;                                                 // 0x0008(0x0138) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FOrionTBMemberInfo>                          Members;                                                 // 0x0140(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FOrionTeamChatRoomId                                ChatRoomId;                                              // 0x0150(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.SurrenderBallot
	 * Size -> 0x0020
	 */
	struct FSurrenderBallot
	{
	public:
		struct FUniqueNetIdRepl                                    NetID;                                                   // 0x0000(0x0018) NativeAccessSpecifierPublic
		ESurrenderVote                                             Vote;                                                    // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJE6[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionReplicatedCheatFlags
	 * Size -> 0x0003
	 */
	struct FOrionReplicatedCheatFlags
	{
	public:
		bool                                                       RemoveCosts;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       RemoveRespawnTime;                                       // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       RemoveCooldowns;                                         // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TeamSetupData
	 * Size -> 0x0020
	 */
	struct FTeamSetupData
	{
	public:
		EOrionTeam                                                 TeamIndex;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JGBU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TeamName;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerTeam;                                             // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z75H[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxPlayers;                                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DefaultTeamClass;                                        // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.VictoryPlayerTracker
	 * Size -> 0x0010
	 */
	struct FVictoryPlayerTracker
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn*                                               SpawnedVictoryChar;                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.VisionManagerRuntimeData
	 * Size -> 0x33770
	 */
	struct FVisionManagerRuntimeData
	{
	public:
		unsigned char                                              UnknownData_SGLX[0x33750];                               // 0x0000(0x33750) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    InstantiatedMIDs;                                        // 0x33750(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AI3F[0x10];                                  // 0x33760(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionVisionDefOverride
	 * Size -> 0x0010
	 */
	struct FOrionVisionDefOverride
	{
	public:
		class UOrionVisionDef*                                     Def;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Index;                                                   // 0x0008(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MNX2[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MinimapPingStyle
	 * Size -> 0x00A8
	 */
	struct FMinimapPingStyle
	{
	public:
		class UCurveLinearColor*                                   CenterImage_ColorOverTimeCurve;                          // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         CenterImage_ScaleOverTimeCurve;                          // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSlateBrush                                         CenterImage;                                             // 0x0010(0x0090) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class USoundCue*                                           PingSound;                                               // 0x00A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OrionGame.VisionManagerDebugItem
	 * Size -> 0x0040
	 */
	struct FVisionManagerDebugItem
	{
	public:
		EVisionManagerDebug                                        Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 Team;                                                    // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQWI[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize10                               TraceStart;                                              // 0x0004(0x000C) NativeAccessSpecifierPublic
		struct FVector_NetQuantize10                               TraceEnd;                                                // 0x0010(0x000C) NativeAccessSpecifierPublic
		struct FVector_NetQuantize10                               TraceHit;                                                // 0x001C(0x000C) NativeAccessSpecifierPublic
		class AActor*                                              TargetActor;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ViewerActor;                                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              HitActor;                                                // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.VisionManagerDebugInfoDump
	 * Size -> 0x0018
	 */
	struct FVisionManagerDebugInfoDump
	{
	public:
		TArray<struct FVisionManagerDebugItem>                     Items;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0SB[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BTRef
	 * Size -> 0x0018
	 */
	struct FBTRef
	{
	public:
		struct FStringAssetReference                               Ref;                                                     // 0x0000(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic
		class UBehaviorTree*                                       BT;                                                      // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.AIBotDifficultySettings
	 * Size -> 0x0060
	 */
	struct FAIBotDifficultySettings
	{
	public:
		float                                                      RecommendedAbilityRangeModifier;                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrimaryCooldownModifier;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownModifier;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvailableCardPointsModifier;                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalAngleDeviation;                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAbilityLevel;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdditionalTimeToSpendAtHomeBase;                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TST3[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBTRef                                              BTOverride;                                              // 0x0020(0x0018) Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic
		TAssetPtr<class UEnvQuery>                                 EnemySelectionOverride;                                  // 0x0038(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0P70[0x4];                                   // 0x0054(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_MYGJ[0x4];                                   // 0x0058(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCanUseUlt : 1;                                          // 0x005C(0x0001) BIT_FIELD Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanUseActiveCards : 1;                                  // 0x005C(0x0001) BIT_FIELD Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanPlaceAndUseRigs : 1;                                 // 0x005C(0x0001) BIT_FIELD Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowRecallingBack : 1;                                 // 0x005C(0x0001) BIT_FIELD Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAvoidBeingDamagedByTowers : 1;                          // 0x005C(0x0001) BIT_FIELD Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAvoidAoEAttacks : 1;                                    // 0x005C(0x0001) BIT_FIELD Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFH1[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLookAtTarget
	 * Size -> 0x0030
	 */
	struct FOrionLookAtTarget
	{
	public:
		class UObject*                                             Instigator;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshComponent*                                      TargetMesh;                                              // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJZU[0x18];                                  // 0x0018(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamCommMessage
	 * Size -> 0x0030
	 */
	struct FOrionTeamCommMessage
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EMinimapLocation                                           MinimapLocation;                                         // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R7WE[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    SenderID;                                                // 0x0010(0x0018) NativeAccessSpecifierPublic
		class UPCTeamCommunicationsData*                           TeamCommData;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.AIWaveBeingSpawned
	 * Size -> 0x0050
	 */
	struct FAIWaveBeingSpawned
	{
	public:
		class UOrionAIFormation*                                   FormationBeingSpawned;                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UOrionAIData*>                                AIWaitingToSpawn;                                        // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AOrionCharAI>                         LastSpawnedAI;                                           // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		int32_t                                                    AIIndexToSpawn;                                          // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSL8[0x2C];                                  // 0x0024(0x002C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTutorialPathItem
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FOrionTutorialPathItem : public FFastArraySerializerItem
	{
	public:
		struct FVector                                             Position;                                                // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTutorialPathArray
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	struct FOrionTutorialPathArray : public FFastArraySerializer
	{
	public:
		TArray<struct FOrionTutorialPathItem>                      Waypoints;                                               // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AOrionPlayerController_Tutorial>      ParentController;                                        // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OrionGame.SpecificHeroInfo
	 * Size -> 0x0020
	 */
	struct FSpecificHeroInfo
	{
	public:
		class UOrionHeroData*                                      HeroData;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<TAssetPtr<class UOrionAbilitySet>>                  OverrideAbilitiesWeakRef;                                // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamNum;                                                 // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4Q6[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ActionKeyOverride
	 * Size -> 0x0048
	 */
	struct FActionKeyOverride
	{
	public:
		class FName                                                BindingName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputChord                                         OldKey;                                                  // 0x0008(0x0020) NativeAccessSpecifierPublic
		struct FInputChord                                         NewKey;                                                  // 0x0028(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.AxisKeyOverride
	 * Size -> 0x0040
	 */
	struct FAxisKeyOverride
	{
	public:
		class FName                                                BindingName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IZ8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                OldKey;                                                  // 0x0010(0x0018) NativeAccessSpecifierPublic
		struct FKey                                                NewKey;                                                  // 0x0028(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroSaveSettings
	 * Size -> 0x0028
	 */
	struct FOrionHeroSaveSettings
	{
	public:
		class FString                                              HeroId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeckId;                                                  // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionRole                                                 Role;                                                    // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionPosition                                             Position;                                                // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7RJ[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GraphicsCardVendorEntry
	 * Size -> 0x0068
	 */
	struct FGraphicsCardVendorEntry
	{
	public:
		uint32_t                                                   VendorID;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SOX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VendorDisplayName;                                       // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A42E[0x50];                                  // 0x0018(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GraphicsCardEntry
	 * Size -> 0x0030
	 */
	struct FGraphicsCardEntry
	{
	public:
		uint32_t                                                   VendorID;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DeviceID;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BenchmarkMultiplier;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2EX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AdapterDisplayName;                                      // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RequiredSourceName;                                      // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.ActiveBannerStruct
	 * Size -> 0x0010
	 */
	struct FActiveBannerStruct
	{
	public:
		class FString                                              bannerId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionMcpInventoryView
	 * Size -> 0x0110
	 */
	struct FOrionMcpInventoryView
	{
	public:
		TArray<class UOrionMcpBannerItem*>                         Banners;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOrionMcpBannerAlterationItem*>               BannerAlterations;                                       // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOrionMcpCardItem*>                           Cards;                                                   // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOrionMcpCardPackItem*>                       CardPacks;                                               // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOrionMcpComponentItem*>                      Components;                                              // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOrionMcpDeckItem*>                           Decks;                                                   // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOrionMcpEmoteItem*>                          Emotes;                                                  // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOrionMcpGlyphItem*>                          Glyphs;                                                  // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOrionMcpHeroItem*>                           Heroes;                                                  // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOrionMcpQuestItem*>                          Quests;                                                  // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOrionMcpSkinItem*>                           Skins;                                                   // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CICM[0x50];                                  // 0x00B0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FActiveBannerStruct                                 ActiveBannerStruct;                                      // 0x0100(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.ReadyCheckDisplayData
	 * Size -> 0x0020
	 */
	struct FReadyCheckDisplayData
	{
	public:
		class UImage*                                              CheckImage;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSBK[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAuraHandle
	 * Size -> 0x0004
	 */
	struct FOrionAuraHandle
	{
	public:
		int32_t                                                    Handle;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OrionGame.ActiveAuraInfo
	 * Size -> 0x0078
	 */
	struct FActiveAuraInfo
	{
	public:
		class UOrionAbilitySystemComponent*                        Source;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOrionGameplayVolumeComponent*                       ProxyComponent;                                          // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOrionAbility*                                       OwningAbility;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RadiusSquared;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOrionAuraHandle                                    Handle;                                                  // 0x001C(0x0004) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JRJJ[0x58];                                  // 0x0020(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionSecondaryCooldownInfo
	 * Size -> 0x0050
	 */
	struct FOrionSecondaryCooldownInfo
	{
	public:
		struct FGameplayTagContainer                               AdditionalAbilityTags;                                   // 0x0000(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		EOrionCooldownType                                         CooldownType;                                            // 0x0020(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRWM[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      ExplicitValue;                                           // 0x0028(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCooldownInfo
	 * Size -> 0x0068
	 */
	struct FOrionCooldownInfo
	{
	public:
		EOrionCooldownType                                         CooldownType;                                            // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ZQE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               CooldownTags;                                            // 0x0008(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      ExplicitValue;                                           // 0x0028(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FOrionSecondaryCooldownInfo>                 SecondaryCooldowns;                                      // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UClass*                                              CooldownGameplayEffect;                                  // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionStackCostInfo
	 * Size -> 0x00D0
	 */
	struct FOrionStackCostInfo
	{
	public:
		class UClass*                                              GameplayEffect;                                          // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FScalableFloat                                      InitialStacks;                                           // 0x0008(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      StacksRequired;                                          // 0x0030(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      StacksConsumedOnCommit;                                  // 0x0058(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      StackRefreshTime;                                        // 0x0080(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      StacksGrantedOnAbilityLevelUp;                           // 0x00A8(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCostInfo
	 * Size -> 0x0100
	 */
	struct FOrionCostInfo
	{
	public:
		class UClass*                                              CostGameplayEffect;                                      // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FScalableFloat                                      ExplicitValue;                                           // 0x0008(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FOrionStackCostInfo                                 StackCost;                                               // 0x0030(0x00D0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.PassiveHUDInfo
	 * Size -> 0x0180
	 */
	struct FPassiveHUDInfo
	{
	public:
		EPassiveHUDType                                            Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHUDDisplayType                                            DurationStyle;                                           // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7CF1[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectQuery                                Query;                                                   // 0x0010(0x0170) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.UIDescriptionLookup
	 * Size -> 0x0020
	 */
	struct FUIDescriptionLookup
	{
	public:
		EOrionAbilityTooltipFactors                                Factor;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TH6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCurveTableRowHandle                                CurveRow;                                                // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EOrionAbilitYToolTipLevelType                              LevelType;                                               // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KT57[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.UICustomDescriptionLookup
	 * Size -> 0x0030
	 */
	struct FUICustomDescriptionLookup
	{
	public:
		class FString                                              Label;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCurveTableRowHandle                                CurveRow;                                                // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EOrionAbilitYToolTipLevelType                              LevelType;                                               // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72JM[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SpecificColumn;                                          // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Coefficient;                                             // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AbsoluteValue;                                           // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8WUT[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAbilityMontageContainer
	 * Size -> 0x0010
	 */
	struct FOrionAbilityMontageContainer
	{
	public:
		TArray<class UAnimMontage*>                                Montages;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionMeleeAttack
	 * Size -> 0x0030
	 */
	struct FOrionMeleeAttack
	{
	public:
		class FName                                                MeleeAttackName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MeleeAttackAnimation;                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              MeleeAttackGameplayEffect;                               // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnKeyRelease;                                           // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RE2W[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                OnKeyReleaseAnimSection;                                 // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IdealMeleeDistance;                                      // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseAttackTimeScale;                                     // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.BeamHitResult
	 * Size -> 0x0098
	 */
	struct FBeamHitResult
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            HitParticleComponent;                                    // 0x0088(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeStamp;                                               // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNSU[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BotEnemySelection
	 * Size -> 0x0020
	 */
	struct FBotEnemySelection
	{
	public:
		class UEnvQuery*                                           DefaultQuery;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEnvQuery*                                           OverrideQuery;                                           // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      AdditionalTargets;                                       // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.AIBotHandledTask
	 * Size -> 0x0028
	 */
	struct FAIBotHandledTask
	{
	public:
		class UOrionAbility*                                       Ability;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAbilityTask*                                        TaskToActUpon;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              RelatedActor;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXY0[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionBotTeamMember
	 * Size -> 0x0058
	 */
	struct FOrionBotTeamMember
	{
	public:
		class AOrionAIBot*                                         BotController;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AOrionPlayerController_Game*                         PlayerController;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AOrionPlayerState_Game*                              CachedOrionPlayerState;                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBotObjective*                                       CurrentObjective;                                        // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_11R7[0x38];                                  // 0x0020(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionBotTeam
	 * Size -> 0x0088
	 */
	struct FOrionBotTeam
	{
	public:
		TArray<struct FOrionBotTeamMember>                         Members;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UBotObjective*>                               AllObjectives;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UAITeamComm*                                         TeamComm;                                                // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74BT[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MinionSightData
	 * Size -> 0x0010
	 */
	struct FMinionSightData
	{
	public:
		class AOrionAIController_MinionBase*                       AI;                                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A4WW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MinionAuxAggroSet
	 * Size -> 0x0010
	 */
	struct FMinionAuxAggroSet
	{
	public:
		TArray<class AOrionDamageableActor*>                       Targets;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.MinionProjectileData
	 * Size -> 0x0048
	 */
	struct FMinionProjectileData
	{
	public:
		class UParticleSystemComponent*                            PSC;                                                     // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SCZ[0x38];                                  // 0x0010(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.DefaultEQSQueries
	 * Size -> 0x0110
	 */
	struct FDefaultEQSQueries
	{
	public:
		TAssetPtr<class UEnvQuery>                                 MeleePositioning;                                        // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4EX[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UEnvQuery>                                 RangedPositioning;                                       // 0x0020(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQN0[0x4];                                   // 0x003C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UEnvQuery>                                 TacticalFallbackQuery;                                   // 0x0040(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8HV4[0x4];                                   // 0x005C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UEnvQuery>                                 MeleeEnemySelection;                                     // 0x0060(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZX9[0x4];                                   // 0x007C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UEnvQuery>                                 RangedEnemySelection;                                    // 0x0080(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNH4[0x4];                                   // 0x009C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UEnvQuery>                                 BaseRecallQuery;                                         // 0x00A0(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7FQ[0x4];                                   // 0x00BC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UEnvQuery>                                 RunAwayQuery;                                            // 0x00C0(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9T6U[0x4];                                   // 0x00DC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UEnvQuery>                                 EnemySelectionInsideTurret;                              // 0x00E0(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VMW[0x4];                                   // 0x00FC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<TAssetPtr<class UEnvQuery>>                         AuxQueries;                                              // 0x0100(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.NamedHeroList
	 * Size -> 0x0020
	 */
	struct FNamedHeroList
	{
	public:
		class FString                                              HeroSetName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<TAssetPtr<class UOrionHeroData>>                    HeroList;                                                // 0x0010(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.MinionDifficultyAttributeModifier
	 * Size -> 0x000C
	 */
	struct FMinionDifficultyAttributeModifier
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveSpeed;                                               // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCoreBaseAnimInstanceProxy
	 * Size -> 0x0030 (FullSize[0x03E0] - InheritedSize[0x03B0])
	 */
	struct FOrionCoreBaseAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		float                                                      RotationRate0;                                           // 0x03B0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationRate1;                                           // 0x03B4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationRate2;                                           // 0x03B8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation0;                                               // 0x03BC(0x000C) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation1;                                               // 0x03C8(0x000C) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation2;                                               // 0x03D4(0x000C) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCachedStateData
	 * Size -> 0x0020
	 */
	struct FOrionCachedStateData
	{
	public:
		class FName                                                StateMachineName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StateName;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EX10[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCachedRelevantAnimData
	 * Size -> 0x0020
	 */
	struct FOrionCachedRelevantAnimData
	{
	public:
		class FName                                                StateMachineName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StateName;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HR9[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCachedTransitionData
	 * Size -> 0x0028
	 */
	struct FOrionCachedTransitionData
	{
	public:
		class FName                                                StateMachineName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FromStateName;                                           // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToStateName;                                             // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_88L4[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDirectionalAnimRef
	 * Size -> 0x0020
	 */
	struct FOrionDirectionalAnimRef
	{
	public:
		class UAnimSequenceBase*                                   North;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   South;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   East;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   West;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroSpeedWarpingSettings
	 * Size -> 0x0010
	 */
	struct FOrionHeroSpeedWarpingSettings
	{
	public:
		float                                                      MinAuthoredSpeed;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAuthoredSpeed;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedWarpingAmount;                                      // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampedSpeed;                                            // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCachedAssetPlayerData
	 * Size -> 0x0018
	 */
	struct FOrionCachedAssetPlayerData
	{
	public:
		class FName                                                StateMachineName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StateName;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TBJ[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCharNetworkSmoothingLod
	 * Size -> 0x0014
	 */
	struct FOrionCharNetworkSmoothingLod
	{
	public:
		float                                                      DelayBetweenUpdates;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceInMeters;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WGO[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSimulationEnabled : 1;                                  // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bForceRootMotionSimulationEnabled : 1;                   // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SOD[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ForceRootMotionSimulationMinVelocity;                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.MovementAbilitySyncKey
	 * Size -> 0x000C
	 */
	struct FMovementAbilitySyncKey
	{
	public:
		int16_t                                                    PredictionKey;                                           // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Index;                                                   // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJIN[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClientTimeStamp;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServerTimeStamp;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.ForceFullBodyMontageParams
	 * Size -> 0x0004
	 */
	struct FForceFullBodyMontageParams
	{
	public:
		bool                                                       bWhenMoving;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWhenTurning;                                            // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWhenJumping;                                            // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWhenLanding;                                            // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionVectorSpringInterpolator
	 * Size -> 0x0008
	 */
	struct FOrionVectorSpringInterpolator
	{
	public:
		float                                                      StiffnessConstant;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampeningRatio;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroCapsuleAnimData
	 * Size -> 0x0060
	 */
	struct FOrionHeroCapsuleAnimData
	{
	public:
		struct FTransform                                          LocalToWorld;                                            // 0x0000(0x0030) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0030(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             WorldVelocity;                                           // 0x003C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             WorldAccel;                                              // 0x0048(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ANW5[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroAnimData
	 * Size -> 0x00F0
	 */
	struct FOrionHeroAnimData
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJustTeleported;                                         // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsOnGround;                                             // 0x0005(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsMovementFalling;                                      // 0x0006(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasRootMotionSources;                                   // 0x0007(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsLocalPlayerController;                                // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S55M[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MeshLocalToWorld;                                        // 0x0010(0x0030) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LocalToWorld;                                            // 0x0040(0x0030) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0070(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             WorldAccel;                                              // 0x007C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LocalAccel;                                              // 0x0088(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxAccel;                                                // 0x0094(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccelMagnitude2D;                                        // 0x0098(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocalAccelYawAngle;                                      // 0x009C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAccelerating2D;                                       // 0x00A0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAJ6[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WorldVelocity;                                           // 0x00A4(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LocalVelocity;                                           // 0x00B0(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x00BC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed2D;                                                 // 0x00C0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedPercent;                                            // 0x00C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocalVelocityYawAngle;                                   // 0x00C8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMoving2D;                                             // 0x00CC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LBK[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnDeltaYaw;                                            // 0x00D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnDeltaSpeedAverage;                                   // 0x00D4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnDeltaSpeedAverageAbs;                                // 0x00D8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnDeltaSpeedAverageSign;                               // 0x00DC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTurning;                                              // 0x00E0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVGU[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GravityZ;                                                // 0x00E4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsJumpingUp;                                            // 0x00E8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsJumpingDown;                                          // 0x00E9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSyncGroupIsBetweenMarkers;                              // 0x00EA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsForcedFacingForward;                                  // 0x00EB(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFMM[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionFloatSpringInterpolator
	 * Size -> 0x0008
	 */
	struct FOrionFloatSpringInterpolator
	{
	public:
		float                                                      StiffnessConstant;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampeningRatio;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionDistanceCurve
	 * Size -> 0x0010
	 */
	struct FOrionDistanceCurve
	{
	public:
		class FName                                                CurveName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_402B[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroJumpAnimSet
	 * Size -> 0x0028
	 */
	struct FOrionHeroJumpAnimSet
	{
	public:
		class UAnimSequenceBase*                                   Start;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   Arc;                                                     // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   PreLand;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   PostLand;                                                // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   PostLandAdditive;                                        // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroAbilityFlags
	 * Size -> 0x0005
	 */
	struct FOrionHeroAbilityFlags
	{
	public:
		bool                                                       bIsLMB;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsRMB;                                                  // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsQ;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsE;                                                    // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsR;                                                    // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTurnTransition
	 * Size -> 0x0020
	 */
	struct FOrionTurnTransition
	{
	public:
		class UAnimSequenceBase*                                   Anim;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRightTurn;                                              // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6J6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayBeforeTrigger;                                      // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedSign;                                              // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedTurnAngle;                                         // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTravelModeTransition;                                 // 0x0018(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z579[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroSpinAnimSet
	 * Size -> 0x0020
	 */
	struct FOrionHeroSpinAnimSet
	{
	public:
		class UAnimSequenceBase*                                   SpinNorth2South_CW_Anim;                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   SpinNorth2South_CCW_Anim;                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   SpinSouth2North_CW_Anim;                                 // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   SpinSouth2North_CCW_Anim;                                // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroStatusFlags
	 * Size -> 0x0001
	 */
	struct FOrionHeroStatusFlags
	{
	public:
		bool                                                       bIsTravelMode;                                           // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroAllowedTransitions
	 * Size -> 0x0007
	 */
	struct FOrionHeroAllowedTransitions
	{
	public:
		bool                                                       bAllowStartTransition;                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowStopTransition;                                    // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowPivotTransition;                                   // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowSpinTransition;                                    // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowTurnInPlaceTransition;                             // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowJumpTransition;                                    // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDo180LookAround;                                        // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCachedStateArray
	 * Size -> 0x0018
	 */
	struct FOrionCachedStateArray
	{
	public:
		TArray<struct FOrionCachedStateData>                       States;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5TU9[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMinionAnimInstanceProxy
	 * Size -> 0x00D0 (FullSize[0x0480] - InheritedSize[0x03B0])
	 */
	struct FOrionMinionAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_X6S7[0xA8];                                  // 0x03B0(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovementAngle;                                           // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalSpeed;                                         // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActiveLocomotionIndex;                                   // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonFullBodyWeight;                                       // 0x0464(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoseTimeOffset;                                          // 0x0468(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LookAtTarget;                                            // 0x046C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    PoseIndex;                                               // 0x0478(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VNIG[0x4];                                   // 0x047C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionNotification
	 * Size -> 0x01A0
	 */
	struct FOrionNotification
	{
	public:
		class FText                                                TitleText;                                               // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                BodyText;                                                // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Icon;                                                    // 0x0030(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ENotificationType                                          Type;                                                    // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JCEI[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        ButtonText;                                              // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                Identifier;                                              // 0x00D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           Time;                                                    // 0x00E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SS05[0x68];                                  // 0x00E8(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               UniqueId;                                                // 0x0150(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W48B[0x40];                                  // 0x0160(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDialogDescription
	 * Size -> 0x00B0
	 */
	struct FOrionDialogDescription
	{
	public:
		class FText                                                MessageHeader;                                           // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                MessageBody;                                             // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ButtonOneText;                                           // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ButtonTwoText;                                           // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      DisplayTime;                                             // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCancel;                                              // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HMTB[0x4B];                                  // 0x0065(0x004B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BalanceTweakerItem
	 * Size -> 0x0038
	 */
	struct FBalanceTweakerItem
	{
	public:
		struct FCurveTableRowHandle                                Curve;                                                   // 0x0000(0x0010) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              Data;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SingleValue;                                             // 0x0024(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZ1Z[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCurveTableRowHandle                                CachedCurve;                                             // 0x0028(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.BalanceTweakerData
	 * Size -> 0x0010
	 */
	struct FBalanceTweakerData
	{
	public:
		TArray<struct FBalanceTweakerItem>                         Items;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.DataTableNameMappingPair
	 * Size -> 0x0020
	 */
	struct FDataTableNameMappingPair
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurveSetName;                                            // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.CurveTableSet
	 * Size -> 0x0070
	 */
	struct FCurveTableSet
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObjectLibrary*                                      ObjectLibrary;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UCurveTable*>                                 LoadedTables;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MT87[0x50];                                  // 0x0020(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ConstellationNodeConnections
	 * Size -> 0x0018
	 */
	struct FConstellationNodeConnections
	{
	public:
		int32_t                                                    SourceNodeIdx;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FXME[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ConnectedNodeIndices;                                    // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.ConstellationDrawPhase
	 * Size -> 0x0010
	 */
	struct FConstellationDrawPhase
	{
	public:
		TArray<struct FConstellationNodeConnections>               ConnectionsInPhase;                                      // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.ConstellationNodeWeight
	 * Size -> 0x0004
	 */
	struct FConstellationNodeWeight
	{
	public:
		int32_t                                                    Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.QueryTechnicNotification
	 * Size -> 0x0048
	 */
	struct FQueryTechnicNotification
	{
	public:
		bool                                                       bIsKnown;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RZL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TechnicTemplateName;                                     // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CardTemplateName;                                        // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTechnicRecipeIngredient>                    Ingredients;                                             // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FConstellationDrawPhase>                     DrawPhases;                                              // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionRigCues
	 * Size -> 0x0018
	 */
	struct FOrionRigCues
	{
	public:
		struct FGameplayCueTag                                     RigBuilding;                                             // 0x0000(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     RigWorking;                                              // 0x0008(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTag                                     RigCollected;                                            // 0x0010(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionDynamicWall_SegmentProperties
	 * Size -> 0x0038
	 */
	struct FOrionDynamicWall_SegmentProperties
	{
	public:
		class UClass*                                              WallClass;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseMinHeight;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseMaxHeight;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CapIndex;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              Location;                                                // 0x0014(0x000C) NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRotateCap;                                              // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AXA0[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AbilityLevel;                                            // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BVRU[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDynamicWall_BaseDefinition
	 * Size -> 0x0018
	 */
	struct FOrionDynamicWall_BaseDefinition
	{
	public:
		class UStaticMesh*                                         CollisionMesh;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         VisualMesh;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DAZW[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDynamicWall_CapDefinition
	 * Size -> 0x0018
	 */
	struct FOrionDynamicWall_CapDefinition
	{
	public:
		class UStaticMesh*                                         CollisionMesh;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         VisualMesh;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Slope;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6VCG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionObjectivesToCapture
	 * Size -> 0x0030
	 */
	struct FOrionObjectivesToCapture
	{
	public:
		class UClass*                                              ObjectiveToLookFor;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionCaptureResults                                       CapturedResponse;                                        // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5V4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      GameplayEffectsToApply;                                  // 0x0010(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		EOrionTeamCompare                                          CaptureTeamCompareType;                                  // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyToDeadPlayers;                                     // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZ5A[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumTimesCaptured;                                        // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCapStacksAllowed;                                     // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNZ9[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroDataSpec
	 * Size -> 0x0090
	 */
	struct FOrionHeroDataSpec
	{
	public:
		class UOrionHeroData*                                      HeroData;                                                // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOrionSkinItemDefinition*                            Skin;                                                    // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UOrionMcpItemDefinition*>                     BannerDefList;                                           // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FSingleBannerEntryRoot                              BannerDef;                                               // 0x0020(0x0060) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class UOrionEmoteItemDefinition*>                   Emotes;                                                  // 0x0080(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionLinkedCards
	 * Size -> 0x0050
	 */
	struct FOrionLinkedCards
	{
	public:
		struct FOrionCardInstance                                  RootCard;                                                // 0x0000(0x0038) NativeAccessSpecifierPrivate
		int32_t                                                    RootStackCount;                                          // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    RootTotalCount;                                          // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FOrionCardInstance>                          LinkedCards;                                             // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OrionGame.OrionLinkedCardsArray
	 * Size -> 0x0010
	 */
	struct FOrionLinkedCardsArray
	{
	public:
		TArray<struct FOrionLinkedCards>                           CardsInDeck;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OrionGame.OrionHandSlot
	 * Size -> 0x0050
	 */
	struct FOrionHandSlot
	{
	public:
		EOrionCardSlottypes                                        HandSlotType;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionAbilityBinding                                       SlotKeyBinding;                                          // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TD6S[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionCardInstance                                  RootCard;                                                // 0x0008(0x0038) NativeAccessSpecifierPublic
		TArray<struct FOrionCardInstance>                          EquippedUpgrades;                                        // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionPlayerHandArray
	 * Size -> 0x0240
	 */
	struct FOrionPlayerHandArray
	{
	public:
		TArray<struct FOrionHandSlot>                              HandSlots;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EE4V[0x230];                                 // 0x0010(0x0230) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.PlayerStat
	 * Size -> 0x0014 (FullSize[0x0020] - InheritedSize[0x000C])
	 */
	struct FPlayerStat : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_YR9P[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                StatName;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LifeValue;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.PlayerStatContainer
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	struct FPlayerStatContainer : public FFastArraySerializer
	{
	public:
		TArray<struct FPlayerStat>                                 PlayerStats;                                             // 0x00B0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class AOrionPlayerState_Game*                              Owner;                                                   // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OrionGame.HeroDamageLogEntry
	 * Size -> 0x0050
	 */
	struct FHeroDamageLogEntry
	{
	public:
		class UOrionMcpItemDefinition*                             InstigatorData;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AOrionPlayerState_Base*                              InstigatorPlayer;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GameplayEffect;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOrionAbility*                                       InstigatorAbility;                                       // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               SourceTags;                                              // 0x0020(0x0020) RepSkip, NativeAccessSpecifierPublic
		float                                                      DamageTime;                                              // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageAmount;                                            // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumDamageEvents;                                         // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PackedFlags;                                             // 0x004C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NM0K[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BuffStatusBarInfo
	 * Size -> 0x0020
	 */
	struct FBuffStatusBarInfo
	{
	public:
		struct FActiveGameplayEffectHandle                         TrackedEffectHandle;                                     // 0x0000(0x0008) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WHW0[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        TrackedTag;                                              // 0x0010(0x0008) NativeAccessSpecifierPublic
		int32_t                                                    TrackedStackCount;                                       // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrackedEndTime;                                          // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.BuffStatusBarTracker
	 * Size -> 0x0030
	 */
	struct FBuffStatusBarTracker
	{
	public:
		unsigned char                                              UnknownData_EBPF[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        TagUsed;                                                 // 0x0008(0x0008) NativeAccessSpecifierPublic
		TArray<struct FBuffStatusBarInfo>                          EffectsTracked;                                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BuffWidgetClass;                                         // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.SuggestAction
	 * Size -> 0x0048
	 */
	struct FSuggestAction
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULGU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionCardInstance                                  Card;                                                    // 0x0008(0x0038) NativeAccessSpecifierPublic
		ECardSuggestionActionType                                  Action;                                                  // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3HD[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCardMessage
	 * Size -> 0x0020
	 */
	struct FOrionCardMessage
	{
	public:
		ECardModifyType                                            ModType;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JGSE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionCardData*                                      Equipment;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UOrionCardData*>                              Upgrades;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCardMessageArray
	 * Size -> 0x0010
	 */
	struct FOrionCardMessageArray
	{
	public:
		TArray<struct FOrionCardMessage>                           Messages;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCardMessageSummary
	 * Size -> 0x0028
	 */
	struct FOrionCardMessageSummary
	{
	public:
		class FText                                                PlayerName;                                              // 0x0000(0x0018) NativeAccessSpecifierPublic
		TArray<struct FOrionCardMessageArray>                      Actions;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TutorialPathPoint
	 * Size -> 0x0018
	 */
	struct FTutorialPathPoint
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Tangent;                                                 // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionHUDInputInfo
	 * Size -> 0x0013 (FullSize[0x0014] - InheritedSize[0x0001])
	 */
	struct FOrionHUDInputInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              UnknownData_JVCD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           StickDirection;                                          // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsInSelectionMode;                                      // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsModiferHeldDown;                                      // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInTargetingMode;                                        // 0x000E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Direction_Selected_Up;                                   // 0x000F(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       Direction_Selected_Down;                                 // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       Direction_Selected_Left;                                 // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       Direction_Selected_Right;                                // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QA5P[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBSlotState
	 * Size -> 0x0150
	 */
	struct FOrionTBSlotState
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WCPV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionTBMemberInfo                                  MemberInfo;                                              // 0x0008(0x0138) BlueprintVisible, NativeAccessSpecifierPublic
		class UOrionTeamBuilderPartyMember*                        PartyMemberState;                                        // 0x0140(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsReserved;                                             // 0x0148(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsPending;                                              // 0x0149(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsCaptain;                                              // 0x014A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WSA[0x5];                                   // 0x014B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBState
	 * Size -> 0x0010
	 */
	struct FOrionTBState
	{
	public:
		TArray<struct FOrionTBSlotState>                           MemberSlots;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionDamageNumberStyleData
	 * Size -> 0x0188
	 */
	struct FOrionDamageNumberStyleData
	{
	public:
		EOrionDamageNumberType                                     DamageNumberType;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7HM3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFont*                                               DamageNumberFont;                                        // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         IsPlayingOutro;                                          // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveVector*                                        DistanceAlongPathOverTime;                               // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         ScaleOverTimeCurve;                                      // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         ScaleOverMagnitudeCurve;                                 // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveLinearColor*                                   ColorOverTimeCurve;                                      // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveLinearColor*                                   GlowColorOverTimeCurve;                                  // 0x0038(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           MotionVector;                                            // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FVector2D                                           MotionVectorRandMagnitude;                               // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FSlateBrush                                         PrefixImage;                                             // 0x0050(0x0090) Deprecated, NativeAccessSpecifierPrivate
		struct FSlateBrush                                         SuffixImage;                                             // 0x00E0(0x0090) Deprecated, NativeAccessSpecifierPrivate
		class UMaterial*                                           PortraitMaterial;                                        // 0x0170(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      GlowSize;                                                // 0x0178(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AggregationAgeSeconds;                                   // 0x017C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTetheredToActor;                                        // 0x0180(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H8S1[0x2];                                   // 0x0181(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDrawIfTarget;                                           // 0x0183(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bDrawIfInstigator;                                       // 0x0184(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bDrawIfOnSameTeam;                                       // 0x0185(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bAlwaysDraw;                                             // 0x0186(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_10UO[0x1];                                   // 0x0187(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDamageNumberInfo
	 * Size -> 0x0120
	 */
	struct FOrionDamageNumberInfo
	{
	public:
		TWeakObjectPtr<class AActor>                               DamagedActor;                                            // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Instigator;                                              // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               EffectCauser;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		struct FVector                                             DamageLocation;                                          // 0x0018(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           DesiredOffset;                                           // 0x0024(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DamageAmount;                                            // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionDamageNumberType                                     DamageNumberType;                                        // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCritical;                                               // 0x0031(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLocalPlayerIsInstigator;                                // 0x0032(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLocalPlayerIsTarget;                                    // 0x0033(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_08XP[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DebugString;                                             // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                CachedText;                                              // 0x0048(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsOnLocalTeam;                                          // 0x0060(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39PU[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            PortraitMID;                                             // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         PortraitBrush;                                           // 0x0070(0x0090) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AO8B[0xC];                                   // 0x0100(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeRemaining;                                           // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TotalDuration;                                           // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1YRF[0xC];                                   // 0x0114(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDecalLibraryEntry
	 * Size -> 0x0030
	 */
	struct FOrionDecalLibraryEntry
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInTime;                                              // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutTime;                                             // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HMMA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionDecalOrientation                                     Orientation;                                             // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AR9L[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SortOrder;                                               // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeScreenSize;                                          // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachToSkeletalMeshRootBone;                           // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DB6G[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDecal
	 * Size -> 0x0028
	 */
	struct FOrionDecal
	{
	public:
		unsigned char                                              UnknownData_1J6L[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDecalComponent*                                     DecalComponent;                                          // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q458[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDecalTarget
	 * Size -> 0x0028
	 */
	struct FOrionDecalTarget
	{
	public:
		unsigned char                                              UnknownData_0GE6[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TargetActor;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FOrionDecal>                                 Decals;                                                  // 0x0018(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionAutoRemovedDecal
	 * Size -> 0x0018
	 */
	struct FOrionAutoRemovedDecal
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DecalName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToRemove;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionUIDamageEventInfo
	 * Size -> 0x0030
	 */
	struct FOrionUIDamageEventInfo
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamagePCT;                                               // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InstigatorLocation;                                      // 0x0008(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B8B6[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Target;                                                  // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionDamageNumberType                                     DamageType;                                              // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2LLD[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHUDWidgetEntry
	 * Size -> 0x0010
	 */
	struct FOrionHUDWidgetEntry
	{
	public:
		TArray<class UWidget*>                                     Widgets;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.FloatingTextGlyphInfo
	 * Size -> 0x0004
	 */
	struct FFloatingTextGlyphInfo
	{
	public:
		float                                                      CharWidthBias;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTrackedQuests
	 * Size -> 0x0028
	 */
	struct FOrionTrackedQuests
	{
	public:
		struct FUniqueNetIdRepl                                    PlayerNetID;                                             // 0x0000(0x0018) NativeAccessSpecifierPublic
		TArray<class UOrionMcpQuestItem*>                          Quests;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueNotifySubset
	 * Size -> 0x00A0
	 */
	struct FGameplayCueNotifySubset
	{
	public:
		unsigned char                                              UnknownData_9DHQ[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      LoadedClasses;                                           // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UObjectLibrary*                                      GameplayCueNotifyActorObjectLibrary;                     // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObjectLibrary*                                      GameplayCueNotifyStaticObjectLibrary;                    // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZCB[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionGameplayCueSignificanceSettings
	 * Size -> 0x0001
	 */
	struct FOrionGameplayCueSignificanceSettings
	{
	public:
		bool                                                       bAlwaysSignificant;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionGameplayCueLevelRequirements
	 * Size -> 0x000C
	 */
	struct FOrionGameplayCueLevelRequirements
	{
	public:
		EGCLevelRequirement                                        ReqType;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBEF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinLevel;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLevel;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionGameplayCueConditionedParticles
	 * Size -> 0x0028
	 */
	struct FOrionGameplayCueConditionedParticles
	{
	public:
		EParticleCondition                                         Condition;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMQ4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOrionGameplayCueLevelRequirements>          LevelRequirements;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketNameOverride;                                      // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionGameplayCueAttachInfo
	 * Size -> 0x0010
	 */
	struct FOrionGameplayCueAttachInfo
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionGameplayCueParticleAttachType                        AttachType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0N49[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueParticleInfo
	 * Size -> 0x0040
	 */
	struct FGameplayCueParticleInfo
	{
	public:
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FOrionGameplayCueConditionedParticles>       AdditionalParticleSystems;                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FOrionGameplayCueAttachInfo                         AttachmentInfo;                                          // 0x0018(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EShadowPlanePolicy                                         ShadowplanePolicy;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EParticleTeamColorAdjustStyle                              TeamColorAdjust;                                         // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CastShadow;                                              // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYO6[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x002C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseAbsoluteScale;                                       // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XY4P[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueAudioInfo
	 * Size -> 0x0018
	 */
	struct FGameplayCueAudioInfo
	{
	public:
		class USoundBase*                                          SoundCue;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamAdjustStyle                                           TeamAdjustStyle;                                         // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EShadowPlanePolicy                                         ShadowplanePolicy;                                       // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZCE6[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChanceToPlay;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayBeforePlayInSeconds;                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFFH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueAOEInfo
	 * Size -> 0x0008
	 */
	struct FGameplayCueAOEInfo
	{
	public:
		float                                                      InnerRadius;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterRadius;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueCameraShakeInfo
	 * Size -> 0x0028
	 */
	struct FGameplayCueCameraShakeInfo
	{
	public:
		class UClass*                                              Shake;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECameraAnimPlaySpace                                       PlaySpace;                                               // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H2Q0[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            UserPlaySpaceRotation;                                   // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCalculateUserPlaySpaceRotationFromLocation;             // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCancelOnRemove;                                         // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56H1[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayCueAOEInfo                                 Falloff;                                                 // 0x0020(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueCameraLensEffectInfo
	 * Size -> 0x0018
	 */
	struct FGameplayCueCameraLensEffectInfo
	{
	public:
		class UClass*                                              CameraLensEffect;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayCueAOEInfo                                 Falloff;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bCancelOnRemove;                                         // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZ95[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueForceFeedbackInfo
	 * Size -> 0x0018
	 */
	struct FGameplayCueForceFeedbackInfo
	{
	public:
		class UForceFeedbackEffect*                                ForceFeedbackEffect;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PU8F[0xF];                                   // 0x0009(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueDecalInfo
	 * Size -> 0x0030
	 */
	struct FGameplayCueDecalInfo
	{
	public:
		class UClass*                                              Decal;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DecalScale;                                              // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseDecalRotationOverride;                               // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1E4[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            DecalRotationOverride;                                   // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseFadeOutValues;                                       // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OXXN[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeOutStartDelay;                                       // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDuration;                                         // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueStencilDecalInfo
	 * Size -> 0x0010
	 */
	struct FGameplayCueStencilDecalInfo
	{
	public:
		class FName                                                DecalName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z6SI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueTraceSpawnInfo
	 * Size -> 0x0028
	 */
	struct FGameplayCueTraceSpawnInfo
	{
	public:
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParticleSystemCastShadow;                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LS8H[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Decal;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DecalScale;                                              // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EOrionGameplayCueTraceOrientation                          SpawnOrientation;                                        // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWUC[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueTraceFailureSpawnInfo
	 * Size -> 0x0010
	 */
	struct FGameplayCueTraceFailureSpawnInfo
	{
	public:
		class FName                                                SpawnSocketName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSocketUpVectorForRotation;                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q9TJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueTraceInfo
	 * Size -> 0x00A0
	 */
	struct FGameplayCueTraceInfo
	{
	public:
		bool                                                       bEnableTrace;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8QSM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TraceStartSocketName;                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSocketRotation;                                      // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bTraceStartOffsetInLocalSpace;                           // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7WN[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TraceStartOffset;                                        // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseTargetActorRotation;                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Z4H[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            TraceRotation;                                           // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TraceDistance;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          TraceChannel;                                            // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceIgnoreHeroes;                                      // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bTraceIgnoreTargetActorOwner;                            // 0x0036(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EG75[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayCueTraceSpawnInfo                          TraceSuccess;                                            // 0x0038(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTraceFailureSpawnInfo                   TraceFailureSpawn;                                       // 0x0060(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueTraceSpawnInfo                          TraceFailure;                                            // 0x0070(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YI9[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueAudioInfo_Looping
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FGameplayCueAudioInfo_Looping : public FGameplayCueAudioInfo
	{
	public:
		float                                                      LoopingSoundFadeOutDuration;                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoopingSoundVolumeLevel;                                 // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueTrailInfo
	 * Size -> 0x0008
	 */
	struct FGameplayCueTrailInfo
	{
	public:
		class UOrionAnimNotifyState_TrailEffectTeamAdjusted*       TrailNotify;                                             // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionBurstEffectData
	 * Size -> 0x00F0
	 */
	struct FOrionBurstEffectData
	{
	public:
		struct FGameplayCueParticleInfo                            BurstParticleEffect;                                     // 0x0000(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueAudioInfo                               BurstSound;                                              // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueCameraShakeInfo                         BurstCameraShake;                                        // 0x0058(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueCameraLensEffectInfo                    BurstCameraLensEffect;                                   // 0x0080(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueForceFeedbackInfo                       BurstForceFeedbackEffect;                                // 0x0098(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueDecalInfo                               BurstDecal;                                              // 0x00B0(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayCueStencilDecalInfo                        BurstStencilDecal;                                       // 0x00E0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionScoreboardTeamEntryInfo
	 * Size -> 0x0033 (FullSize[0x0034] - InheritedSize[0x0001])
	 */
	struct FOrionScoreboardTeamEntryInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              UnknownData_1JN0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumOfPlayers;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamKills;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamDeaths;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamAssists;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamMinionKills;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TowerKills;                                              // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InhibitorKills;                                          // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlacedRigs;                                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DestroyedRigs;                                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamNum;                                                 // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLocalPlayersTeam;                                     // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06VY[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TotalTeamXP;                                             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEmpyStruct;                                           // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEU9[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.UniqueAIBotID
	 * Size -> 0x0008
	 */
	struct FUniqueAIBotID
	{
	public:
		class FName                                                UniqueId;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionPlayerStateUIID
	 * Size -> 0x0028
	 */
	struct FOrionPlayerStateUIID
	{
	public:
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0000(0x0018) NativeAccessSpecifierPublic
		struct FUniqueAIBotID                                      BotID;                                                   // 0x0018(0x0008) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJ4J[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionScoreboardCardInfo
	 * Size -> 0x0020
	 */
	struct FOrionScoreboardCardInfo
	{
	public:
		TWeakObjectPtr<class AOrionCard>                           CardActor;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		class UOrionCardData*                                      CoreCard;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UOrionCardData*>                              UpgradeCards;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionScoreboardPlayerEntryInfo
	 * Size -> 0x00C7 (FullSize[0x00C8] - InheritedSize[0x0001])
	 */
	struct FOrionScoreboardPlayerEntryInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              UnknownData_4NKM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionPlayerStateUIID                               PlayerStateUIID;                                         // 0x0008(0x0028) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FString                                              PlayerName;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionPlayerPlatform                                       PlayerPlatform;                                          // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionPlayerPlatform                                       LocalPlayerPlatform;                                     // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZBI[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HeroId;                                                  // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroName;                                                // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamNum;                                                 // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 LocalPlayerTeamNum;                                      // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXJW[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          HeroIcon;                                                // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentLevel;                                            // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCurrentlyDead;                                        // 0x007C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UA4U[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RespawnTime;                                             // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLocalPlayer;                                          // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsBot;                                                  // 0x0085(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisconnected;                                           // 0x0086(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bMuted;                                                  // 0x0087(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCurrentlyTalking;                                       // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bVisibleToLocalPlayer;                                   // 0x0089(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSII[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Kills;                                                   // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Assists;                                                 // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinionKills;                                             // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlacedRigs;                                              // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DestroyedRigs;                                           // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CardLevel;                                               // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeamXPGained;                                            // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CardPointsSpent;                                         // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CardPointsMax;                                           // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEmptyEntry;                                           // 0x00B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6J0[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOrionScoreboardCardInfo>                    EquippedCards;                                           // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionScoreboardUIInfo
	 * Size -> 0x0088
	 */
	struct FOrionScoreboardUIInfo
	{
	public:
		struct FOrionScoreboardTeamEntryInfo                       YourTeam;                                                // 0x0000(0x0034) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FOrionScoreboardTeamEntryInfo                       EnemyTeam;                                               // 0x0034(0x0034) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FOrionScoreboardPlayerEntryInfo>             Teammates;                                               // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FOrionScoreboardPlayerEntryInfo>             Enemies;                                                 // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.DraftLobbyPhase
	 * Size -> 0x0020
	 */
	struct FDraftLobbyPhase
	{
	public:
		int32_t                                                    PhaseIdx;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamIndex;                                               // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_79NI[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumBots;                                                 // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHQF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUniqueNetIdRepl>                            ChoosingPlayers;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionGestureEntry
	 * Size -> 0x0018
	 */
	struct FOrionGestureEntry
	{
	public:
		TArray<EOrionGestureDirection>                             GestureDirections;                                       // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UPCTeamCommunicationsData*                           TeamCommData;                                            // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionBasicDisplayInfo
	 * Size -> 0x0038
	 */
	struct FOrionBasicDisplayInfo
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.InputActionGamepadEquivalency
	 * Size -> 0x0010
	 */
	struct FInputActionGamepadEquivalency
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GamepadActionNameEquivalent;                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.GamepadButtonArt
	 * Size -> 0x0138
	 */
	struct FGamepadButtonArt
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		struct FSlateBrush                                         PS4Icon;                                                 // 0x0018(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         XBoxIcon;                                                // 0x00A8(0x0090) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.MouseButtonArt
	 * Size -> 0x00A8
	 */
	struct FMouseButtonArt
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ButtonIcon;                                              // 0x0018(0x0090) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.ActionBindingToReadableName
	 * Size -> 0x0020
	 */
	struct FActionBindingToReadableName
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ReadableName;                                            // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.AxisBindingsRedirectStruct
	 * Size -> 0x0018
	 */
	struct FAxisBindingsRedirectStruct
	{
	public:
		class FName                                                MetaAxisName;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AxisName;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AxisScale;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ABNG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AxisKeyRedirect
	 * Size -> 0x0038
	 */
	struct FAxisKeyRedirect
	{
	public:
		struct FKey                                                AxisKey;                                                 // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		float                                                      AxisScale;                                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EWS8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                DisplayKey;                                              // 0x0020(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroAvailabilityInfo
	 * Size -> 0x0038
	 */
	struct FOrionHeroAvailabilityInfo
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                MessageFormat;                                           // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		class UTexture2D*                                          AvailabilityIcon;                                        // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionQuickChatMessageInfo
	 * Size -> 0x0020
	 */
	struct FOrionQuickChatMessageInfo
	{
	public:
		class FText                                                MessageFormat;                                           // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		EQuickChatMessageSubject                                   SubjectType;                                             // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EI24[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionQuickChatTopic
	 * Size -> 0x0098
	 */
	struct FOrionQuickChatTopic
	{
	public:
		class FText                                                TopicTitle;                                              // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		struct FOrionQuickChatMessageInfo                          MessageFormats[0x4];                                     // 0x0018(0x0080) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.ClashMobThreshold
	 * Size -> 0x0020
	 */
	struct FClashMobThreshold
	{
	public:
		EClashMobSocialType                                        SocialType;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QI70[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Count;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FOrionItemQuantityPair>                      Rewards;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.MiniMapRotationEntry
	 * Size -> 0x0008
	 */
	struct FMiniMapRotationEntry
	{
	public:
		float                                                      Rotation;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamNum;                                                 // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DT4N[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamBuilderRepState
	 * Size -> 0x0070 (FullSize[0x0090] - InheritedSize[0x0020])
	 */
	struct FOrionTeamBuilderRepState : public FOrionPartyRepState
	{
	public:
		ETeamBuilderProgression                                    PartyProgression;                                        // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ICT[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ChatRoomId;                                              // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReservedSlots;                                           // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQAO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PendingMember0;                                          // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PendingMember1;                                          // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PendingMember2;                                          // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PendingMember3;                                          // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PendingMember4;                                          // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionPartyMemberRepState
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FOrionPartyMemberRepState : public FPartyMemberRepState
	{
	public:
		int32_t                                                    AccountLevel;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LevelProgress;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAfk;                                                    // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsConsole;                                              // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_175P[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionPersistentPartyMemberRepState
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FOrionPersistentPartyMemberRepState : public FOrionPartyMemberRepState
	{
	public:
		EOrionPartyMemberLocation                                  Location;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReady;                                                  // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EOrionAcceptMatchState                                     AcceptMatchState;                                        // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATW4[0x5];                                   // 0x001B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HeroName;                                                // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoaded;                                                 // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNFM[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MMR;                                                     // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMMRAdjustedForNewPlayer;                                // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EOrionBanReason                                            BanReason;                                               // 0x0039(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0STR[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamBuilderPartyMemberRepState
	 * Size -> 0x0058 (FullSize[0x0070] - InheritedSize[0x0018])
	 */
	struct FOrionTeamBuilderPartyMemberRepState : public FOrionPartyMemberRepState
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSQE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HeroName;                                                // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeckId;                                                  // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionPosition                                             Position;                                                // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionRole                                                 Role;                                                    // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Ready;                                                   // 0x0042(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVNJ[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BlockedPlayers;                                          // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionPlayerPlatform                                       Platform;                                                // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1X9W[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CosmeticString;                                          // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionDraftHeroSelectionInfo
	 * Size -> 0x0018
	 */
	struct FOrionDraftHeroSelectionInfo
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeroLevel;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOwned;                                                // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7MJ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDraftPlayerPreferences
	 * Size -> 0x0002
	 */
	struct FOrionDraftPlayerPreferences
	{
	public:
		EOrionRole                                                 Role;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionPosition                                             Position;                                                // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TeamSpecificDraftPlayerInfo
	 * Size -> 0x0020
	 */
	struct FTeamSpecificDraftPlayerInfo
	{
	public:
		EOrionTeam                                                 TeamIndex;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOrionDraftPlayerPreferences                        Preferences;                                             // 0x0001(0x0002) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0Y2P[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionDraftHeroSelectionInfo                        PreviewHeroSelection;                                    // 0x0008(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionIndividualPlayerRating
	 * Size -> 0x0048
	 */
	struct FOrionIndividualPlayerRating
	{
	public:
		class FText                                                RatingName;                                              // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                RatingId;                                                // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                RatingDesc;                                              // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UTexture2D*                                          DefaultIcon;                                             // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRatingResult                                        RatingValue;                                             // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1W60[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionFlairPopupRewards
	 * Size -> 0x0040
	 */
	struct FOrionFlairPopupRewards
	{
	public:
		class FText                                                RewardTitle;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                RewardDesc;                                              // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		EPieceOfFlairType                                          RewardType;                                              // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3UN7[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          RewardIcon;                                              // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.ProfanityData
	 * Size -> 0x0038
	 */
	struct FProfanityData
	{
	public:
		class FString                                              CountryCode;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProfanityList;                                           // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WhiteList;                                               // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoAdd;                                                // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LR83[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionRewardTypeInfo
	 * Size -> 0x0060
	 */
	struct FOrionRewardTypeInfo
	{
	public:
		class UTexture2D*                                          DisplayIcons[0x3];                                       // 0x0000(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                ShortDescription;                                        // 0x0030(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                FullDescription;                                         // 0x0048(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionBadgeRewardInfo
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	struct FOrionBadgeRewardInfo : public FOrionRewardTypeInfo
	{
	public:
		int32_t                                                    MinLevel;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFS6[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionRewardSourceInfo
	 * Size -> 0x0040
	 */
	struct FOrionRewardSourceInfo
	{
	public:
		class FName                                                SourceType;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bShowInChest;                                            // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6TD[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionItemRewardInfo
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	struct FOrionItemRewardInfo : public FOrionRewardTypeInfo
	{
	public:
		class UClass*                                              McpItemType;                                             // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionLootTierRewardInfo
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	struct FOrionLootTierRewardInfo : public FOrionRewardTypeInfo
	{
	public:
		class FString                                              LootTierGroupName;                                       // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                LootTypeName;                                            // 0x0070(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bIsRandomRoll;                                           // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13WN[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionKeywordIcon
	 * Size -> 0x0020
	 */
	struct FOrionKeywordIcon
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBEF[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionStatusEffectDisplayInfo
	 * Size -> 0x0058
	 */
	struct FOrionStatusEffectDisplayInfo
	{
	public:
		class UTexture2D*                                          DisplayIcon;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MarkupAbbreviation;                                      // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Explanation;                                             // 0x0028(0x0018) Edit, NativeAccessSpecifierPublic
		class UTexture2D*                                          BuffBarDisplayIcon;                                      // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        StatusTag;                                               // 0x0048(0x0008) Edit, NativeAccessSpecifierPublic
		class UClass*                                              BuffWidgetClass;                                         // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionStorefrontInfo
	 * Size -> 0x0038
	 */
	struct FOrionStorefrontInfo
	{
	public:
		class UTexture2D*                                          StorefrontIcon;                                          // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionQuestionGroupInfo
	 * Size -> 0x0030
	 */
	struct FOrionQuestionGroupInfo
	{
	public:
		class FName                                                SurveyId;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Message;                                                 // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FText>                                        Questions;                                               // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TBSearchParams
	 * Size -> 0x0048
	 */
	struct FTBSearchParams
	{
	public:
		int32_t                                                    ControllerId;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9JK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SessionName;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlaylistId;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MMR;                                                     // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomKey;                                               // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETBSearchFlags                                             Flags;                                                   // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QMGX[0x1F];                                  // 0x0029(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TBSearchPassState
	 * Size -> 0x000C
	 */
	struct FTBSearchPassState
	{
	public:
		bool                                                       bWasCanceled;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWasFailure;                                             // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWasRejected;                                            // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bTimerExpired;                                           // 0x0003(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ETBSearchState                                             SearchState;                                             // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZZF[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ApprovalTimeRemaining;                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionMessageAudio
	 * Size -> 0x0010
	 */
	struct FOrionMessageAudio
	{
	public:
		struct FGameplayCueTag                                     AudioTag;                                                // 0x0000(0x0008) Edit, NativeAccessSpecifierPublic
		bool                                                       bOnlyPlayFirstTime;                                      // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8WLN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTutorialStage
	 * Size -> 0x0068
	 */
	struct FOrionTutorialStage
	{
	public:
		class FName                                                TargetId;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Message;                                                 // 0x0020(0x0018) Edit, NativeAccessSpecifierPublic
		class UOrionMcpQuestItemDefinition*                        RequiredQuest;                                           // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowBlackBackground;                                    // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHideButtons;                                            // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0TY[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionMessageAudio                                  MessageAudio;                                            // 0x0048(0x0010) Edit, NativeAccessSpecifierPublic
		TArray<class FName>                                        OtherWidgetsToShow;                                      // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TileDefinition
	 * Size -> 0x0090
	 */
	struct FTileDefinition
	{
	public:
		ETileType                                                  Type;                                                    // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPR7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TypeString;                                              // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Subtitle;                                                // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Eyebrow;                                                 // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Link;                                                    // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupID;                                                 // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           Countdown;                                               // 0x0068(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		EDateType                                                  CountdownType;                                           // 0x0070(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJX7[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MediaUrl;                                                // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsVisible;                                               // 0x0088(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4C1R[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCardMenuCardParam
	 * Size -> 0x0018
	 */
	struct FOrionCardMenuCardParam
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        VectorParam;                                             // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionCardMenuCardState
	 * Size -> 0x0018
	 */
	struct FOrionCardMenuCardState
	{
	public:
		class UMaterial*                                           Material;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FOrionCardMenuCardParam>                     Params;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionStatFilterEntry
	 * Size -> 0x00E0
	 */
	struct FOrionStatFilterEntry
	{
	public:
		EOrionStatFilterState                                      State;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B4BC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionAttributeViewItem                             Details;                                                 // 0x0008(0x00B8) NativeAccessSpecifierPublic
		EOrionStatFilterRecommendation                             Recommendation;                                          // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CAXK[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                HeroName;                                                // 0x00C8(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionLootReward
	 * Size -> 0x0080
	 */
	struct FOrionLootReward
	{
	public:
		class UOrionMcpItemDefinition*                             ItemDefinition;                                          // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6DQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SourceName;                                              // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6CJ2[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LootGroupName;                                           // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMtxReward;                                            // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsTimeCurrencyReward;                                   // 0x0031(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsNegative;                                             // 0x0032(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGUH[0x4D];                                  // 0x0033(0x004D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMuteInfo
	 * Size -> 0x0040
	 */
	struct FOrionMuteInfo
	{
	public:
		class AOrionPlayerState_Game*                              PlayerState;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMuted;                                                // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E1EC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerName;                                              // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                HeroName;                                                // 0x0020(0x0018) NativeAccessSpecifierPublic
		class UTexture2D*                                          HeroIcon;                                                // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.CardBuildGuideInfo
	 * Size -> 0x0038
	 */
	struct FCardBuildGuideInfo
	{
	public:
		struct FGuid                                               CardGuid;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        PrimaryAffinity;                                         // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsLocked;                                               // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0PW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          CardTexture;                                             // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CardCost;                                                // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZOQ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SlotDescription
	 * Size -> 0x0018
	 */
	struct FSlotDescription
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColumnCount;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RowCount;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFeaturedTextStyle;                                   // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableAutoScroll;                                       // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNZQ[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHUDTeamStatusInfo
	 * Size -> 0x0067 (FullSize[0x0068] - InheritedSize[0x0001])
	 */
	struct FOrionHUDTeamStatusInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              UnknownData_IL13[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AOrionPlayerState_Game>               PlayerState;                                             // 0x0004(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KL03[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          PortraitTexture;                                         // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthPercent;                                           // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnergyPercent;                                           // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RespawnTime;                                             // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCurrentlyDead;                                          // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSelectedForHeal;                                        // 0x0029(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsEmptySlot;                                            // 0x002A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45QC[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Kills;                                                   // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUltimateReady;                                        // 0x0034(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bVisibleToLocalPlayer;                                   // 0x0035(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VWP[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionPlayerStateUIID                               PlayerStateUIID;                                         // 0x0038(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamNum;                                                 // 0x0060(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D6O5[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionJungleBuffInfo
	 * Size -> 0x01BF (FullSize[0x01C0] - InheritedSize[0x0001])
	 */
	struct FOrionJungleBuffInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              UnknownData_T94U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TotalDuration;                                           // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeRemaining;                                           // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BuffIndex;                                               // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        BuffAssetTag;                                            // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayTag                                        BuffGrantedTag;                                          // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsEmpty;                                                // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasCombatMessage;                                       // 0x0021(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EOrionCombatMessageType                                    AssociatedCombatMessage;                                 // 0x0022(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHHM[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               BuffGrantedTagContainer;                                 // 0x0028(0x0020) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1CX[0x178];                                 // 0x0048(0x0178) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionBuffStatusEffectInfo
	 * Size -> 0x0028
	 */
	struct FOrionBuffStatusEffectInfo
	{
	public:
		struct FActiveGameplayEffectHandle                         GameplayEffectHandle;                                    // 0x0000(0x0008) NativeAccessSpecifierPublic
		struct FGameplayTag                                        EffctStatusTag;                                          // 0x0008(0x0008) NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndTime;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BuffWidgetClass;                                         // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionStaticBuffInfo
	 * Size -> 0x0020
	 */
	struct FOrionStaticBuffInfo
	{
	public:
		struct FLinearColor                                        BuffColor;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UTexture2D*                                          BuffIcon;                                                // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        BuffTag;                                                 // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionQuestAlertInfo
	 * Size -> 0x0030
	 */
	struct FOrionQuestAlertInfo
	{
	public:
		class FName                                                QuestName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                QuestText;                                               // 0x0008(0x0018) NativeAccessSpecifierPublic
		int32_t                                                    StartCount;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewCount;                                                // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CountMax;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SDJX[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionQuestObjectiveData
	 * Size -> 0x0040
	 */
	struct FOrionQuestObjectiveData
	{
	public:
		class FName                                                ObjectiveName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ObjectiveText;                                           // 0x0008(0x0018) NativeAccessSpecifierPublic
		bool                                                       bIsCompleted;                                            // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_COJZ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Count;                                                   // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CountMax;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHidden;                                                 // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QRM7[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UOrionMcpQuestItem>                   QuestItem;                                               // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AOrionPlayerState_Game>               PlayerState;                                             // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TimeAgo
	 * Size -> 0x0038
	 */
	struct FTimeAgo
	{
	public:
		unsigned char                                              UnknownData_T50M[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionRespawnWidgetEntry
	 * Size -> 0x0018
	 */
	struct FOrionRespawnWidgetEntry
	{
	public:
		float                                                      TimeRemaining;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DUQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          HeroPortrait;                                            // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOrionRespawnTimerHeroIconWidget*                    HeroIconWidget;                                          // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionLevelUpData
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FOrionLevelUpData : public FTableRowBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BRC8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HeroName;                                                // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XP;                                                      // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UOrionMcpItemDefinition>                   SpecificItem;                                            // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42E9[0x4];                                   // 0x0044(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              LootTierGroup;                                           // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MasterQuantity;                                          // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RRFV[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UOrionMcpItemDefinition>                   MasterSpecificItem;                                      // 0x0060(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYQN[0x4];                                   // 0x007C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              MasterLootTierGroup;                                     // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionLevelUpRewardInfo
	 * Size -> 0x0098
	 */
	struct FOrionLevelUpRewardInfo
	{
	public:
		unsigned char                                              UnknownData_8BW2[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionLevelUpData                                   LevelUpRowData;                                          // 0x0008(0x0090) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.WatchedActorInfo
	 * Size -> 0x0040
	 */
	struct FWatchedActorInfo
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDC1[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionRegisteredTabInfo
	 * Size -> 0x0058
	 */
	struct FOrionRegisteredTabInfo
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8DIK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0008(0x0018) NativeAccessSpecifierPublic
		class UOrionBaseButton*                                    TabButton;                                               // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UClass>                                    ContentAssetID;                                          // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2849[0x4];                                   // 0x0044(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UWidget*                                             ContentInstance;                                         // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SceneName;                                               // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.LocaleToSound
	 * Size -> 0x0018
	 */
	struct FLocaleToSound
	{
	public:
		class FString                                              Locale;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaSource*                                        Sound;                                                   // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.WidgetDataEntry
	 * Size -> 0x0010
	 */
	struct FWidgetDataEntry
	{
	public:
		class FName                                                WidgetName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Widget;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.PlatformBitset
	 * Size -> 0x0004
	 */
	struct FPlatformBitset
	{
	public:
		bool                                                       Windows : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       PlayStation4 : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       XboxOne : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Mac : 1;                                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IOS : 1;                                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Android : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Linux : 1;                                               // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4J6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionQuickChatPayload
	 * Size -> 0x0018
	 */
	struct FOrionQuickChatPayload
	{
	public:
		EOrionQuickChatTopic                                       Topic;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EOrionQuickChatMessageSlot                                 MessageSlot;                                             // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y5OJ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RawSubjectString;                                        // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OrionGame.OrionBaseHUDPlayerInfo
	 * Size -> 0x006F (FullSize[0x0070] - InheritedSize[0x0001])
	 */
	struct FOrionBaseHUDPlayerInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              UnknownData_DU3Y[0xB];                                   // 0x0001(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Health;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthMax;                                               // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthRegen;                                             // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Shield;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShieldMax;                                               // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Energy;                                                  // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnergyMax;                                               // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnergyRegen;                                             // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Assists;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minions;                                                 // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CardLevel;                                               // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CardXP;                                                  // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CardMaxXP;                                               // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalXP;                                                 // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XPToNextLevel;                                           // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerLevel;                                             // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCurrentlyDead;                                        // 0x0054(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsCritiallyWounded;                                     // 0x0055(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8IVX[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RespawnTimer;                                            // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CardPointsSpent;                                         // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CardPointsMax;                                           // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 TeamNum;                                                 // 0x0064(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QXO[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionHeroData*                                      HeroData;                                                // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionLocalPlayerUIInfo
	 * Size -> 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
	 */
	struct FOrionLocalPlayerUIInfo : public FOrionBaseHUDPlayerInfo
	{
	public:
		class FText                                                PlayerName;                                              // 0x0070(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                HeroName;                                                // 0x0088(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EOrionTeam                                                 EnemyTeamNum;                                            // 0x00A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LQW[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CriticallyWoundedThresholdPCT;                           // 0x00A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInBase;                                               // 0x00A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanShop;                                                // 0x00A9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZIR[0x2];                                   // 0x00AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CharacterLocation;                                       // 0x00AC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CameraLocation;                                          // 0x00B8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CameraDirection;                                         // 0x00C4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInTravelMode;                                           // 0x00D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bMatchHasStarted;                                        // 0x00D1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInTargetingMode;                                        // 0x00D2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQ14[0x5];                                   // 0x00D3(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHUDInputActionNames
	 * Size -> 0x00F8
	 */
	struct FOrionHUDInputActionNames
	{
	public:
		class FName                                                ToggleMouseKeyName;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToggleCardMenuKeyName;                                   // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CloseCardMenuKeyName;                                    // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToggleScoreboardKeyName;                                 // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToggleLargeMinimapKeyName;                               // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToggleReplayScoreboardKeyName;                           // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OpenScoreboardKeyName;                                   // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CloseScoreboardKeyName;                                  // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToggleEscapeMenuKeyName;                                 // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                IgnoreToggleScoreboardKeyName;                           // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToggleTeamCommsMenuName;                                 // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CloseTeamCommsMenuName;                                  // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamComms_Option_2;                                      // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamComms_Option_3;                                      // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamComms_Option_4;                                      // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamComms_Option_5;                                      // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamComms_Option_Commit;                                 // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamComms_Option_Back;                                   // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamComms_Option_Emote_Toggle;                           // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TabLeft;                                                 // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TabRight;                                                // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CardTabLeft;                                             // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CardTabRight;                                            // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TrashItem;                                               // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SpectatorToggleControllerCursor;                         // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HUDCursorModePress;                                      // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HUDCursorModeRelease;                                    // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HUDCursorModeToggle;                                     // 0x00D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UpgradeButtonPress;                                      // 0x00E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UpgradeButtonRelease;                                    // 0x00E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ShowUpgradePanelPullTab;                                 // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionStatusEffectUIInfo
	 * Size -> 0x0037 (FullSize[0x0038] - InheritedSize[0x0001])
	 */
	struct FOrionStatusEffectUIInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              UnknownData_3V09[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               StatusEffectTags;                                        // 0x0008(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      TimeRemaining;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEmptyStruct;                                            // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1W0[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionSpectatorHUDPlayerInfo
	 * Size -> 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
	 */
	struct FOrionSpectatorHUDPlayerInfo : public FOrionBaseHUDPlayerInfo
	{
	public:
		TWeakObjectPtr<class AOrionPlayerState_Game>               PlayerState;                                             // 0x0070(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		class UTexture2D*                                          PortraitTexture;                                         // 0x0078(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEmptySlot;                                            // 0x0080(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsUltimateReady;                                        // 0x0081(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsBeingWatched;                                         // 0x0082(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HU3A[0x5];                                   // 0x0083(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionPlayerStateUIID                               PlayerStateUIID;                                         // 0x0088(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionDailyRewardInfo
	 * Size -> 0x0028
	 */
	struct FOrionDailyRewardInfo
	{
	public:
		int32_t                                                    DaysUntilAvailable;                                      // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDailyRewardType                                           RewardType;                                              // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VR22[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RewardName;                                              // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSCT[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionMcpItemDefinition*                             ItemDefinition;                                          // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.PlayerRatingObj
	 * Size -> 0x0050
	 */
	struct FPlayerRatingObj
	{
	public:
		unsigned char                                              UnknownData_PSGI[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionSurveyResponse
	 * Size -> 0x0028
	 */
	struct FOrionSurveyResponse
	{
	public:
		class FName                                                QuestionGroupAsked;                                      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchSessionId;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Responses;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionItemEntryStateValue
	 * Size -> 0x0018
	 */
	struct FOrionItemEntryStateValue
	{
	public:
		int32_t                                                    IntValue;                                                // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YNAH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NameValue;                                               // 0x0008(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EOrionItemEntryState                                       StateType;                                               // 0x0010(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U8MP[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.LoginRewardProgression
	 * Size -> 0x0010
	 */
	struct FLoginRewardProgression
	{
	public:
		struct FDateTime                                           NextLoginTime;                                           // 0x0000(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalDays;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.ActiveBoost
	 * Size -> 0x0018
	 */
	struct FActiveBoost
	{
	public:
		EOrionBoostType                                            BoostType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PQQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           ExpirationTime;                                          // 0x0008(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    UsesRemaining;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGTU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AccountProgression
	 * Size -> 0x0014
	 */
	struct FAccountProgression
	{
	public:
		int32_t                                                    ProfileXP;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalXP;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileRank;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ValorRank;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XPToNextLevel;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.QuestJournal
	 * Size -> 0x0050
	 */
	struct FQuestJournal
	{
	public:
		int32_t                                                    numRewardsClaimed;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XUM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      QuestIds;                                                // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      RewardTemplates;                                         // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           NextRerollTime;                                          // 0x0028(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      OnDeckQuestTemplateNames;                                // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      OnDeckQuestRewards;                                      // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.PlayerStatData
	 * Size -> 0x0100
	 */
	struct FPlayerStatData
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LifeValue;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FastReplicationArrayIndex;                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8LFZ[0xEC];                                  // 0x0014(0x00EC) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.HeroPlayCount
	 * Size -> 0x0018
	 */
	struct FHeroPlayCount
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayCount;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8YVU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TrackCardUpgradeAffinity
	 * Size -> 0x001C
	 */
	struct FTrackCardUpgradeAffinity
	{
	public:
		unsigned char                                              UnknownData_LC6K[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AIInfluence
	 * Size -> 0x0010
	 */
	struct FAIInfluence
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FullEffectRadius;                                        // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIActorClassification                                     SourceType;                                              // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9981[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AIBotPerfConfig
	 * Size -> 0x0034
	 */
	struct FAIBotPerfConfig
	{
	public:
		float                                                      CombatAbilitiesUpdateInterval;                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AbilityTasksUpdateInterval;                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentLaneInfoUpdateInterval;                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LaneLocationUpdateInterval;                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BuffingUpdateInterval;                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FriendSupportingUpdateInterval;                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusUpdateInterval;                                     // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TacticalAssessmentUpdateInterval;                        // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunAwayUpdateInterval;                                   // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnemyDistanceUpdateInterval;                             // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MobilityAbilityUpdateInterval;                           // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnemySelectionUpdateInterval;                            // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveUrgencyUpdateInterval;                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.AIAbilityTarget
	 * Size -> 0x0028
	 */
	struct FAIAbilityTarget
	{
	public:
		unsigned char                                              UnknownData_2L0L[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AsActor;                                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.CoinCXPValueScalar
	 * Size -> 0x0008
	 */
	struct FCoinCXPValueScalar
	{
	public:
		float                                                      CoinValue;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionCoinSize                                             CoinSize;                                                // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQDJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TrackedComponent
	 * Size -> 0x000C
	 */
	struct FTrackedComponent
	{
	public:
		unsigned char                                              UnknownData_6W6N[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AnalogCursorSettings
	 * Size -> 0x0038
	 */
	struct FAnalogCursorSettings
	{
	public:
		class UCurveFloat*                                         InputCurve;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ScrollCurve;                                             // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultSpeed;                                            // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHoverWidgetSize;                                      // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHoverWidgetSize;                                      // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHoverSpeedScale;                                      // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHoverSpeedScale;                                      // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoverSpeedScaleDecayRate;                                // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeadZone;                                                // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyAxisScaling;                                       // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisplayDebug;                                           // 0x0031(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33WY[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.LoginRewardData
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FLoginRewardData : public FTableRowBase
	{
	public:
		int32_t                                                    Quantity;                                                // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZKQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UOrionMcpItemDefinition>                   SpecificItem;                                            // 0x0010(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C40A[0x4];                                   // 0x002C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              LootTierGroup;                                           // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionLoginRewardInfo
	 * Size -> 0x0048
	 */
	struct FOrionLoginRewardInfo
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3OJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLoginRewardData                                    LoginRewardRowData;                                      // 0x0008(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.StatTranslationData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FStatTranslationData : public FTableRowBase
	{
	public:
		class FName                                                StatName;                                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionQuestVerbType                                        Verb;                                                    // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H362[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LegacyName;                                              // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAccountPVP;                                             // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAccountTotal;                                           // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHeroPVP;                                                // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHeroTotal;                                              // 0x002B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCommunity;                                              // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bClientLegal;                                            // 0x002D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8RIZ[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TeamXPBonus
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FTeamXPBonus : public FTableRowBase
	{
	public:
		float                                                      BonusForMe;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BonusForTeammate;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.RewardSourceLoc
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRewardSourceLoc : public FTableRowBase
	{
	public:
		class FText                                                Description;                                             // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.RewardToSource
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRewardToSource : public FTableRowBase
	{
	public:
		TAssetPtr<class UOrionMcpItemDefinition>                   PersistentName;                                          // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XUV1[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FDataTableRowHandle                                 RewardLocHandle;                                         // 0x0028(0x0010) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionMenuEntry
	 * Size -> 0x0048
	 */
	struct FOrionMenuEntry
	{
	public:
		class FName                                                MenuId;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                MenuName;                                                // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TAssetPtr<class UClass>                                    WidgetClass;                                             // 0x0020(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C32E[0x4];                                   // 0x003C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                SceneName;                                               // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionLoadedMCPItemManager
	 * Size -> 0x00A8
	 */
	struct FOrionLoadedMCPItemManager
	{
	public:
		unsigned char                                              UnknownData_12I7[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionMcpItemDefinition*                             NewItem;                                                 // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionLoadingMetaInfo
	 * Size -> 0x0010
	 */
	struct FOrionLoadingMetaInfo
	{
	public:
		class UProperty*                                           Property;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionLoadingPhase                                         LoadingPhase;                                            // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HC7S[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionProjectileSpeed
	 * Size -> 0x0008
	 */
	struct FOrionProjectileSpeed
	{
	public:
		float                                                      Coeffecient;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionProjectileSpeed                                      SpeedType;                                               // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNVB[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeFacet
	 * Size -> 0x0010
	 */
	struct FOrionShapeFacet
	{
	public:
		unsigned char                                              UnknownData_0RSE[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TrackedActorEntry
	 * Size -> 0x000C
	 */
	struct FTrackedActorEntry
	{
	public:
		unsigned char                                              UnknownData_F0WN[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAbilityActorInfo
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	struct FOrionAbilityActorInfo : public FGameplayAbilityActorInfo
	{
	public:
		class AOrionChar*                                          OrionChar;                                               // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionDesiredStencilValueEntry
	 * Size -> 0x0008
	 */
	struct FOrionDesiredStencilValueEntry
	{
	public:
		bool                                                       bShouldBeActive;                                         // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWDB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DesiredStencilValue;                                     // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionObjectiveItem
	 * Size -> 0x0020
	 */
	struct FOrionObjectiveItem
	{
	public:
		class FName                                                ObjectiveBackendName;                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StatName;                                                // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ObjectiveCompletedEventName;                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentValue;                                            // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompleted;                                              // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNO6[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionStatFilterGroup
	 * Size -> 0x0028
	 */
	struct FOrionStatFilterGroup
	{
	public:
		TArray<struct FOrionStatFilterEntry>                       Children;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                CategoryName;                                            // 0x0010(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.AIScriptedBehaviorInstanceWrapper
	 * Size -> 0x0008
	 */
	struct FAIScriptedBehaviorInstanceWrapper
	{
	public:
		class UAIScriptedBehavior*                                 ScriptedBehavior;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.SimpleAchievementEarnedNotification
	 * Size -> 0x0008
	 */
	struct FSimpleAchievementEarnedNotification
	{
	public:
		int32_t                                                    EarnedAchievementIndex;                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstTimeEarned;                                        // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0FXK[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.FutureDailyRewardDesc
	 * Size -> 0x0018
	 */
	struct FFutureDailyRewardDesc
	{
	public:
		int32_t                                                    Day;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2JWJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ItemDefinitionName;                                      // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.DailyRewardsRetrievedNotification
	 * Size -> 0x0028
	 */
	struct FDailyRewardsRetrievedNotification
	{
	public:
		TArray<struct FFutureDailyRewardDesc>                      ChronologicalRewards;                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FFutureDailyRewardDesc                              NextMajorReward;                                         // 0x0010(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.FriendCodeIssuedNotification
	 * Size -> 0x0020
	 */
	struct FFriendCodeIssuedNotification
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CodeType;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.SaveDeckNotification
	 * Size -> 0x0020
	 */
	struct FSaveDeckNotification
	{
	public:
		class FString                                              DeckId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeckName;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.CraftCompleteNotification
	 * Size -> 0x0018
	 */
	struct FCraftCompleteNotification
	{
	public:
		class FString                                              CreatedCardId;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumInstances;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJustDiscovered;                                         // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1EPM[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.DailyRewardsUpdateNotification
	 * Size -> 0x0010
	 */
	struct FDailyRewardsUpdateNotification
	{
	public:
		TArray<struct FOrionDailyRewardInfo>                       DailyRewards;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.AccountPrestigeNotification
	 * Size -> 0x0004
	 */
	struct FAccountPrestigeNotification
	{
	public:
		int32_t                                                    newValorRank;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTBTeamInvite
	 * Size -> 0x0270
	 */
	struct FOrionTBTeamInvite
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9NOZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SessionId;                                               // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOrionTBPlayerChoices                               RequestedChoices;                                        // 0x0018(0x00F0) NativeAccessSpecifierPublic
		struct FOrionTBTeamInfo                                    TeamInfo;                                                // 0x0108(0x0168) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionLockHeroConfirmation
	 * Size -> 0x0030
	 */
	struct FOrionLockHeroConfirmation
	{
	public:
		struct FUniqueNetIdRepl                                    MemberId;                                                // 0x0000(0x0018) NativeAccessSpecifierPublic
		class FString                                              HeroName;                                                // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuccess;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7GB1[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLockHeroConfirmationWrapper
	 * Size -> 0x0018
	 */
	struct FOrionLockHeroConfirmationWrapper
	{
	public:
		int32_t                                                    ResponseId;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TKVZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOrionLockHeroConfirmation>                  Confirmations;                                           // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionHUDTutorialWidgetNames
	 * Size -> 0x0100
	 */
	struct FOrionHUDTutorialWidgetNames
	{
	public:
		class FName                                                KDAWidget;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Core_Friendly;                                           // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Core_Enemy;                                              // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RespawnTimer;                                            // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MiniMap;                                                 // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ChatWidget;                                              // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CardWidgets;                                             // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PlayerStatus;                                            // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AbilityWidgets;                                          // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DigitalFlame;                                            // 0x0048(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MiscAbilityWidget;                                       // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SprintWidget;                                            // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                JungleBuffs;                                             // 0x0060(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BuffWidgets;                                             // 0x0068(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ReticleWidget;                                           // 0x0070(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CombatMessages;                                          // 0x0078(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TopLeft;                                                 // 0x0080(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TopCenter;                                               // 0x0088(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TopRight;                                                // 0x0090(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MiddleLeft;                                              // 0x0098(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MiddleCenter;                                            // 0x00A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MiddleRight;                                             // 0x00A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BottomLeft;                                              // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BottomCenter;                                            // 0x00B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BottomRight;                                             // 0x00C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Ability_Q;                                               // 0x00C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Ability_E;                                               // 0x00D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Ability_R;                                               // 0x00D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Ability_LMB;                                             // 0x00E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Ability_RMB;                                             // 0x00E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AbilityUpgradePrompt;                                    // 0x00F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                XPMeter;                                                 // 0x00F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TeamCommCommonData
	 * Size -> 0x0048
	 */
	struct FTeamCommCommonData
	{
	public:
		class FText                                                OptionLabel;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                ChatMessage;                                             // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		ETeamCommsSpawnType                                        SpawnType;                                               // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPVJ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GameEventWidgetClass;                                    // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GameEvenMessageType;                                     // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionSpectatorHUDTeamInfo
	 * Size -> 0x0001 (FullSize[0x0002] - InheritedSize[0x0001])
	 */
	struct FOrionSpectatorHUDTeamInfo : public FUIUpdateHelperStruct
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.FrameStatData
	 * Size -> 0x0040
	 */
	struct FFrameStatData
	{
	public:
		TArray<float>                                              FrameTimeStamps;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              FrameDurations;                                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              FrameGameTimes;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              FrameRenderTimes;                                        // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionXPAssisterData
	 * Size -> 0x000C
	 */
	struct FOrionXPAssisterData
	{
	public:
		unsigned char                                              UnknownData_YAKJ[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTutorialStatNames
	 * Size -> 0x00B8
	 */
	struct FOrionTutorialStatNames
	{
	public:
		class FName                                                Tutorial1v1FirstSpawn;                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1LearnCoreFriendly;                            // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1LearnInhibFriendly;                           // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1LearnTowerFriendly;                           // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1FirstCombat;                                  // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1FirstAbility;                                 // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1TowerAggroHero;                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1TowerAggroMinion;                             // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1TowerAggro;                                   // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1TowerDestroy;                                 // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1InhibAggroHero;                               // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1InhibAggroMinion;                             // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1InhibDestroy;                                 // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1CoreAggroHero;                                // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1CoreAggroMinion;                              // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1CoreDestroy;                                  // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1UltimateAbility;                              // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1KillEnemyHero;                                // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1InhibAggroHeroEnemyDamage;                    // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1MoveForwardPrompt;                            // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1FirstAbilityUsed;                             // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1UltimateAbilityUsed;                          // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tutorial1v1FirstAbilityUseReminder;                      // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.MOTDEntry
	 * Size -> 0x0040
	 */
	struct FMOTDEntry
	{
	public:
		class FString                                              Culture;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Body;                                                    // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Date;                                                    // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.ActiveAuraSpec
	 * Size -> 0x0048
	 */
	struct FActiveAuraSpec
	{
	public:
		struct FOrionFilterAndEffectsContainer                     FilterAndEffectsContainers;                              // 0x0000(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FOrionFilterAndEffectsContainer                     PeriodicFilterAndEffectsContainers;                      // 0x0020(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Period;                                                  // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.PendingNewAura
	 * Size -> 0x0060
	 */
	struct FPendingNewAura
	{
	public:
		struct FOrionAuraHandle                                    Handle;                                                  // 0x0000(0x0004) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMYS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionAbilitySystemComponent*                        Source;                                                  // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOrionAbility*                                       OwningAbility;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FActiveAuraSpec                                     AuraSpec;                                                // 0x0018(0x0048) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.SelectSingleTargetSorter
	 * Size -> 0x0010
	 */
	struct FSelectSingleTargetSorter
	{
	public:
		unsigned char                                              UnknownData_EN0Y[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAITeamConfigurableParams
	 * Size -> 0x0040
	 */
	struct FOrionAITeamConfigurableParams
	{
	public:
		float                                                      LocationScore;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdditionalOffset;                                        // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OwnInfluence;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnemyInfluence;                                          // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActiveObjectivePriorityBonus;                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerSupport;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentObjectiveAgentBonus;                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerTeamAggressiveness;                                // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HexGenome;                                               // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7KZI[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MinionAnimSource
	 * Size -> 0x0020
	 */
	struct FMinionAnimSource
	{
	public:
		EOrionMinionPrioritizedBehavior                            Behavior;                                                // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMM5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   AnimationSequence;                                       // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGCB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MinionBehaviorAnimation
	 * Size -> 0x0190
	 */
	struct FMinionBehaviorAnimation
	{
	public:
		TArray<struct FMinionAnimSource>                           AnimationSources;                                        // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y7TZ[0x180];                                 // 0x0010(0x0180) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AnalyticsDamageLogEntry
	 * Size -> 0x0040
	 */
	struct FAnalyticsDamageLogEntry
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InstigatorDisplayName;                                   // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InstigatorAbilityName;                                   // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumHits;                                                 // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageAmount;                                            // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DamageWasPhysical;                                       // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DamageWasEnergy;                                         // 0x0039(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DamageWasPure;                                           // 0x003A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DamageWasCritical;                                       // 0x003B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       PlayerHasRedBuff;                                        // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       PlayerHasPrimeHelix;                                     // 0x003D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6HJS[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.RecentMovementSyncKeysEntry
	 * Size -> 0x0014
	 */
	struct FRecentMovementSyncKeysEntry
	{
	public:
		struct FMovementAbilitySyncKey                             SyncKey;                                                 // 0x0000(0x000C) NativeAccessSpecifierPublic
		float                                                      ExpirationTime;                                          // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasServerMoveBeenProcessedWithMatchingKey;              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NG6[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTechnicData
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FOrionTechnicData : public FTableRowBase
	{
	public:
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKnown;                                                  // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OBSZ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UOrionTechnicConstellation>                Constellation;                                           // 0x0020(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_23E6[0x4];                                   // 0x003C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UOrionComponentItemDefinition>             PrimaryComponent;                                        // 0x0040(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GV1E[0x4];                                   // 0x005C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UOrionComponentItemDefinition>             SecondaryComponentOption0;                               // 0x0060(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHW7[0x4];                                   // 0x007C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UOrionComponentItemDefinition>             SecondaryComponentOption1;                               // 0x0080(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J50Q[0x4];                                   // 0x009C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UOrionComponentItemDefinition>             SecondaryComponentOption2;                               // 0x00A0(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EOEK[0x4];                                   // 0x00BC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct OrionGame.GameplayVolumeEffectsOverlapTracker
	 * Size -> 0x0030
	 */
	struct FGameplayVolumeEffectsOverlapTracker
	{
	public:
		int32_t                                                    OverlapCount;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2V3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActiveGameplayEffectHandle>                 EffectsApplied;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayAbilitySpecHandle                          GrantedAbilitySpecHandle;                                // 0x0018(0x0004) NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AOrionGameplayVolume>                 ParentVolume;                                            // 0x0024(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYIT[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BannerSpawnOnKillInfo
	 * Size -> 0x0010
	 */
	struct FBannerSpawnOnKillInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TrackedStackCount;                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrackedEndTime;                                          // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.MapPing
	 * Size -> 0x0018
	 */
	struct FMapPing
	{
	public:
		unsigned char                                              UnknownData_MSF7[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayVolumeComponentEffectsOverlapTracker
	 * Size -> 0x0030
	 */
	struct FGameplayVolumeComponentEffectsOverlapTracker
	{
	public:
		int32_t                                                    OverlapCount;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPassedPeriodEffectFilter;                               // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasAppliedPeriodicEffect;                               // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3L4H[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActiveGameplayEffectHandle>                 EffectsApplied;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayAbilitySpecHandle                          GrantedAbilitySpecHandle;                                // 0x0018(0x0004) NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UOrionGameplayVolumeComponent>        ParentVolume;                                            // 0x0024(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UAFF[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionSearchPassParams
	 * Size -> 0x0028
	 */
	struct FOrionSearchPassParams
	{
	public:
		int32_t                                                    ControllerId;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8OP4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SessionName;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RegionId;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchmakingFlags                                          Flags;                                                   // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6R36[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.IssuedFriendCode
	 * Size -> 0x0028
	 */
	struct FIssuedFriendCode
	{
	public:
		class FString                                              CodeId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CodeType;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           DateCreated;                                             // 0x0020(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.AccountMmr
	 * Size -> 0x0008
	 */
	struct FAccountMmr
	{
	public:
		int32_t                                                    Rating;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNewPlayerAdjusted;                                      // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_810L[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TeamElo
	 * Size -> 0x0008
	 */
	struct FTeamElo
	{
	public:
		int32_t                                                    Rating;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNewPlayerAdjusted;                                      // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VW0X[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.UpdateTeamBuilderPathStatsParams
	 * Size -> 0x0018
	 */
	struct FUpdateTeamBuilderPathStatsParams
	{
	public:
		class FString                                              BucketId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SocialPartySize;                                         // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.MatchInfo
	 * Size -> 0x0018
	 */
	struct FMatchInfo
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RedScore;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchLengthSeconds;                                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TeamMemberInfo
	 * Size -> 0x0030
	 */
	struct FTeamMemberInfo
	{
	public:
		struct FUniqueNetIdRepl                                    AccountId;                                               // 0x0000(0x0018) NativeAccessSpecifierPublic
		struct FUniqueNetIdRepl                                    PartyLeaderId;                                           // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TeamInfo
	 * Size -> 0x0018
	 */
	struct FTeamInfo
	{
	public:
		TArray<struct FTeamMemberInfo>                             Members;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    SocialPartySize;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4EZ7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MatchResult
	 * Size -> 0x0080
	 */
	struct FMatchResult
	{
	public:
		class FString                                              RegionId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlaylistId;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGEV[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlaylistName;                                            // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RatingType;                                              // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMatchInfo                                          MatchInfo;                                               // 0x0038(0x0018) NativeAccessSpecifierPublic
		struct FTeamInfo                                           RedTeam;                                                 // 0x0050(0x0018) NativeAccessSpecifierPublic
		struct FTeamInfo                                           BlueTeam;                                                // 0x0068(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.RoboSelectParams
	 * Size -> 0x0010
	 */
	struct FRoboSelectParams
	{
	public:
		class FString                                              BucketId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.ReportWaitTimesParams
	 * Size -> 0x0018
	 */
	struct FReportWaitTimesParams
	{
	public:
		class FString                                              BucketId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerMatchWaitSecs;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamMatchWaitSecs;                                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionAimAssist
	 * Size -> 0x00B0
	 */
	struct FOrionAimAssist
	{
	public:
		unsigned char                                              UnknownData_PINE[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAimAssistTarget
	 * Size -> 0x0030
	 */
	struct FOrionAimAssistTarget
	{
	public:
		unsigned char                                              UnknownData_XBZ6[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAimAssistOwnerInfo
	 * Size -> 0x0070
	 */
	struct FOrionAimAssistOwnerInfo
	{
	public:
		unsigned char                                              UnknownData_JSI2[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAimAssistResults
	 * Size -> 0x0010
	 */
	struct FOrionAimAssistResults
	{
	public:
		unsigned char                                              UnknownData_NZDS[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAimAssistParams
	 * Size -> 0x0028
	 */
	struct FOrionAimAssistParams
	{
	public:
		unsigned char                                              UnknownData_9MS4[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayShadowPadOverlapTracker
	 * Size -> 0x0018
	 */
	struct FGameplayShadowPadOverlapTracker
	{
	public:
		unsigned char                                              UnknownData_1GYU[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBWaitTimes
	 * Size -> 0x0030
	 */
	struct FOrionTBWaitTimes
	{
	public:
		struct FTimespan                                           StartSoloRiderTime;                                      // 0x0000(0x0008) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		double                                                     SoloRiderDuration;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimespan                                           StartTeammateSearchTime;                                 // 0x0010(0x0008) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		double                                                     TeammateSearchDuration;                                  // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimespan                                           StartEnemySearchTime;                                    // 0x0020(0x0008) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		double                                                     EnemySearchDuration;                                     // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTBSocialPartyMemberSummary
	 * Size -> 0x0038
	 */
	struct FOrionTBSocialPartyMemberSummary
	{
	public:
		bool                                                       IsPartyLeader;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WYNJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerId;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroName;                                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTBSoloRiderSummary
	 * Size -> 0x0118
	 */
	struct FOrionTBSoloRiderSummary
	{
	public:
		class FString                                              SoloRiderSessionId;                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerId;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           FoundTimeStampUtc;                                       // 0x0020(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
		struct FOrionTBPlayerChoices                               PlayerChoices;                                           // 0x0028(0x00F0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTBTeamInviteSummary
	 * Size -> 0x0040
	 */
	struct FOrionTBTeamInviteSummary
	{
	public:
		class FString                                              TeamBuilderPartyId;                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CaptainId;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TeamSessionId;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotIndex;                                               // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXG6[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           InviteTimeStampUtc;                                      // 0x0038(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionRoleSummary
	 * Size -> 0x0028
	 */
	struct FOrionRoleSummary
	{
	public:
		class FString                                              Role;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroName;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeroRoleWeight;                                          // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WEI[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBTeamCompSummary
	 * Size -> 0x0028
	 */
	struct FOrionTBTeamCompSummary
	{
	public:
		float                                                      TeamCompScore;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XKH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      TeamLayout;                                              // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FOrionRoleSummary>                           TeamComp;                                                // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionTBRunSummary
	 * Size -> 0x0270
	 */
	struct FOrionTBRunSummary
	{
	public:
		bool                                                       bStarted;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWasCanceled;                                            // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsError;                                                // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsCaptain;                                              // 0x0003(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZ6K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ErrorStr;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           StartTimeUtc;                                            // 0x0018(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           EndTimeUtc;                                              // 0x0020(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
		double                                                     Duration;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserId;                                                  // 0x0030(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamBuilderRole                                           InitialRole;                                             // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamBuilderRole                                           FinalRole;                                               // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMXG[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerMMR;                                               // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamElo;                                                 // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOOA[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlaylistId;                                              // 0x0050(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZ3T[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionTBParams                                      TeamBuilderParams;                                       // 0x0058(0x0148) NativeAccessSpecifierPublic
		class FString                                              MatchSessionId;                                          // 0x01A0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SoloSessionId;                                           // 0x01B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TeamPartyId;                                             // 0x01C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SocialPartyId;                                           // 0x01D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SocialPartyMemberCount;                                  // 0x01E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P4UX[0x4];                                   // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionTBWaitTimes                                   PlayerWaitTimes;                                         // 0x01E8(0x0030) NativeAccessSpecifierPublic
		TArray<struct FOrionTBSocialPartyMemberSummary>            SocialPartyMembers;                                      // 0x0218(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FOrionTBSoloRiderSummary>                    SoloRiders;                                              // 0x0228(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FOrionTBTeamInviteSummary>                   TeamInvites;                                             // 0x0238(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FOrionTBTeamCompSummary                             TeamCompSummary;                                         // 0x0248(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.TeamCommGameEventInfo
	 * Size -> 0x0020
	 */
	struct FTeamCommGameEventInfo
	{
	public:
		class FName                                                MessageTypeIdentifier;                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                EventText;                                               // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionDeckBuilder_FilterData
	 * Size -> 0x00D0
	 */
	struct FOrionDeckBuilder_FilterData
	{
	public:
		struct FOrionAttributeViewItem                             ViewData;                                                // 0x0000(0x00B8) NativeAccessSpecifierPublic
		class FText                                                CategoryText;                                            // 0x00B8(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.DefaultTextureDataEntry
	 * Size -> 0x0010
	 */
	struct FDefaultTextureDataEntry
	{
	public:
		class FName                                                DefaultTextureName;                                      // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DefaultTexture;                                          // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeFacetBeam
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FOrionShapeFacetBeam : public FOrionShapeFacet
	{
	public:
		unsigned char                                              UnknownData_2ILE[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeFacetBox
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FOrionShapeFacetBox : public FOrionShapeFacet
	{
	public:
		unsigned char                                              UnknownData_ZW0K[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeFacetSector
	 * Size -> 0x0028 (FullSize[0x0038] - InheritedSize[0x0010])
	 */
	struct FOrionShapeFacetSector : public FOrionShapeFacet
	{
	public:
		unsigned char                                              UnknownData_HZ93[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTargetData
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FOrionTargetData : public FGameplayAbilityTargetData
	{
	public:
		unsigned char                                              UnknownData_IU5P[0x88];                                  // 0x0008(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAnimNode_CardinalBlendByAngle
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	struct FOrionAnimNode_CardinalBlendByAngle : public FAnimNode_Base
	{
	public:
		TArray<struct FPoseLink>                                   InputPoses;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendProfile*                                       BlendProfile;                                            // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              PoseWeights;                                             // 0x0050(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		bool                                                       bHasValidPoseWeights;                                    // 0x0060(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DB9Y[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBlendSampleData>                            PerBoneSampleData;                                       // 0x0068(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OrionGame.OrionAnimNode_MinionBehavior
	 * Size -> 0x01B8 (FullSize[0x01E8] - InheritedSize[0x0030])
	 */
	struct FOrionAnimNode_MinionBehavior : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           DefaultPose;                                             // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMinionBehaviorAnimation                            MinionBehaviorHandler;                                   // 0x0048(0x0190) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W68C[0x10];                                  // 0x01D8(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrientationWarpingSpineBoneSettings
	 * Size -> 0x0010
	 */
	struct FOrientationWarpingSpineBoneSettings
	{
	public:
		struct FBoneReference                                      Bone;                                                    // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrientationWarpingSettings
	 * Size -> 0x0038
	 */
	struct FOrientationWarpingSettings
	{
	public:
		EAxis                                                      YawRotationAxis;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_24B7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BodyOrientationAlpha;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FOrientationWarpingSpineBoneSettings>        SpineBones;                                              // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      IKFootRootBone;                                          // 0x0018(0x0010) Edit, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              IKFootBones;                                             // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrientationWarpingSpineBoneData
	 * Size -> 0x0008
	 */
	struct FOrientationWarpingSpineBoneData
	{
	public:
		unsigned char                                              UnknownData_68UG[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAnimNode_OrientationWarping
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	struct FOrionAnimNode_OrientationWarping : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      LocomotionAngle;                                         // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBL3[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrientationWarpingSettings                         Settings;                                                // 0x0050(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FOrientationWarpingSpineBoneData>            SpineBoneDataArray;                                      // 0x0088(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KCDL[0x18];                                  // 0x0098(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBonesHaveBeenCached;                                    // 0x00B0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VEA[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SlopeWarpingFootDefinition
	 * Size -> 0x0040
	 */
	struct FSlopeWarpingFootDefinition
	{
	public:
		struct FBoneReference                                      IKFootBone;                                              // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		struct FBoneReference                                      FKFootBone;                                              // 0x0010(0x0010) Edit, NativeAccessSpecifierPublic
		int32_t                                                    NumBonesInLimb;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87NC[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ToeSocketName;                                           // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HeelSocketName;                                          // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootSize;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2LLW[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SlopeWarpingFootData
	 * Size -> 0x00E0
	 */
	struct FSlopeWarpingFootData
	{
	public:
		unsigned char                                              UnknownData_YFHZ[0xE0];                                  // 0x0000(0x00E0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAnimNode_SlopeWarping
	 * Size -> 0x0168 (FullSize[0x01D8] - InheritedSize[0x0070])
	 */
	struct FOrionAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_TG0E[0x18];                                  // 0x0070(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      IKFootRootBone;                                          // 0x0088(0x0010) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ID4Q[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      PelvisBone;                                              // 0x00A0(0x0010) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KSS[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSlopeWarpingFootDefinition>                 FeetDefinitions;                                         // 0x00B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSlopeWarpingFootData>                       FeetData;                                                // 0x00C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FOrionVectorSpringInterpolator                      PelvisOffsetInterpolator;                                // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JA7G[0x34];                                  // 0x00E0(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GravityDir;                                              // 0x0114(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CachedDeltaTime;                                         // 0x0120(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetFloorNormalWorldSpace;                             // 0x0124(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FOrionVectorSpringInterpolator                      FloorNormalInterpolator;                                 // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGJU[0x34];                                  // 0x0138(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetFloorOffsetLocalSpace;                             // 0x016C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FOrionVectorSpringInterpolator                      FloorOffsetInterpolator;                                 // 0x0178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQP9[0x34];                                  // 0x0180(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxStepHeight;                                           // 0x01B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCapsuleInfoInsteadOfFootTraces;                      // 0x01B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWasOnGround;                                            // 0x01B9(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowDebug;                                              // 0x01BA(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFloorSmoothingInitialized;                              // 0x01BB(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ActorLocation;                                           // 0x01BC(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             GravityDirCompSpace;                                     // 0x01C8(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_15OT[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SpeedWarpingFootDefinition
	 * Size -> 0x0028
	 */
	struct FSpeedWarpingFootDefinition
	{
	public:
		struct FBoneReference                                      IKFootBone;                                              // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		struct FBoneReference                                      FKFootBone;                                              // 0x0010(0x0010) Edit, NativeAccessSpecifierPublic
		int32_t                                                    NumBonesInLimb;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2V8J[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SpeedWarpingFootData
	 * Size -> 0x0040
	 */
	struct FSpeedWarpingFootData
	{
	public:
		unsigned char                                              UnknownData_9ZRF[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAnimNode_SpeedWarping
	 * Size -> 0x00C0 (FullSize[0x0130] - InheritedSize[0x0070])
	 */
	struct FOrionAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      IKFootRootBone;                                          // 0x0070(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FSpeedWarpingFootDefinition>                 FeetDefinitions;                                         // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSpeedWarpingFootData>                       FeetData;                                                // 0x0090(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FBoneReference                                      PelvisBone;                                              // 0x00A0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ESpeedWarpingAxisMode                                      SpeedWarpingAxisMode;                                    // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESpeedWarpingAxisMode                                      FloorNormalAxisMode;                                     // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESpeedWarpingAxisMode                                      GravityDirAxisMode;                                      // 0x00B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CW75[0x1];                                   // 0x00B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedScaling;                                            // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ManualSpeedWarpingDir;                                   // 0x00B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             ManualFloorNormalInput;                                  // 0x00C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             ManualGravityDirInput;                                   // 0x00D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      PelvisPostAdjustmentAlpha;                               // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PelvisAdjustmentMaxIter;                                 // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FOrionVectorSpringInterpolator                      PelvisAdjustmentInterp;                                  // 0x00E4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GROA[0x34];                                  // 0x00EC(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAdjustThighBonesRotation;                               // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bClampIKUsingFKLeg;                                      // 0x0121(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bOrientSpeedWarpingAxisBasedOnFloorNormal;               // 0x0122(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GJ2L[0x1];                                   // 0x0123(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CachedDeltaTime;                                         // 0x0124(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OZ9X[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.DraftStats_Phase
	 * Size -> 0x0030
	 */
	struct FDraftStats_Phase
	{
	public:
		int32_t                                                    PhaseIdx;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamIndex;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMXF[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PhaseDuration;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TEN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUniqueNetIdRepl>                            Players;                                                 // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.DraftStats_PenalizedPlayers
	 * Size -> 0x0020
	 */
	struct FDraftStats_PenalizedPlayers
	{
	public:
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0000(0x0018) NativeAccessSpecifierPublic
		EOrionDraftAbortPenaltyReason                              AbortReason;                                             // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LAAJ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.DraftStats_Team
	 * Size -> 0x0018
	 */
	struct FDraftStats_Team
	{
	public:
		int32_t                                                    TeamNum;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamMMR;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FUniqueNetIdRepl>                            Players;                                                 // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.DraftStats_Player
	 * Size -> 0x0070
	 */
	struct FDraftStats_Player
	{
	public:
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0000(0x0018) NativeAccessSpecifierPublic
		EOrionPlayerPlatform                                       Platform;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R5C9[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    PartyLeader;                                             // 0x0020(0x0018) NativeAccessSpecifierPublic
		int32_t                                                    TeamNum;                                                 // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PickOrder;                                               // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBot;                                                  // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZ0Y[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MMR;                                                     // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroChoice;                                              // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C5C3[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeroChoiceDuration;                                      // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHeroHardLock;                                           // 0x006C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_281H[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CharPerfTestEntry
	 * Size -> 0x0090
	 */
	struct FCharPerfTestEntry
	{
	public:
		bool                                                       bIsBurst;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N15U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CommandTime;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterPerfTestCommand                                  TestCommand;                                             // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZCU9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CommandVector;                                           // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CommandParam;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FXIZ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CommandString;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CommandState;                                            // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3SJ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CommandID;                                               // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9EK[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CharPerfTestSet
	 * Size -> 0x0038
	 */
	struct FCharPerfTestSet
	{
	public:
		bool                                                       bIsComplete;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5TT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TestSetName;                                             // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCharPerfTestEntry>                          TestData;                                                // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    TestInterations;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VRL[0xC];                                   // 0x002C(0x000C) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
