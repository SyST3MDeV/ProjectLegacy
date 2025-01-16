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
		CraftInProgress  = 7,
		Currency         = 8,
		Deck             = 9,
		Emote            = 10,
		GiftBox          = 11,
		Glyph            = 12,
		Hero             = 13,
		Quest            = 14,
		Skin             = 15,
		Token            = 16,
		CodeToken        = 17,
		Simple           = 18,
		CuratedDeck      = 19,
		Profile          = 20,
		Objective        = 21,
		Max_None         = 22,
		MAX              = 23
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
	 * Enum OrionGame.EAIBotDifficulty
	 */
	enum class EAIBotDifficulty : uint8_t
	{
		Normal = 0,
		Dumb   = 1,
		Easy   = 2,
		MAX    = 3,
		MAX01  = 4
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
	 * Enum OrionGame.EChatMessageId
	 */
	enum class EChatMessageId : uint8_t
	{
		CMI_TopMessage    = 0,
		CMI_LeftMessage   = 1,
		CMI_RightMessage  = 2,
		CMI_BottomMessage = 3,
		CMI_MAX           = 4
	};

	/**
	 * Enum OrionGame.EChatTooltipMode
	 */
	enum class EChatTooltipMode : uint8_t
	{
		CTM_Default                 = 0,
		CTM_HeroNotSelected         = 1,
		CTM_HeroPlayerSelected      = 2,
		CTM_HeroTeammateSelected    = 3,
		CTM_HeroEnemySelected       = 4,
		CTM_HeroBothSidesSelected   = 5,
		CTM_TeammateSlotSelected    = 6,
		CTM_TeammateSlotPreselected = 7,
		CTM_TeammateSlotNotSelected = 8,
		CTM_PlayerSlotSelected      = 9,
		CTM_PlayerSlotPreselected   = 10,
		CTM_PlayerSlotNotSelected   = 11,
		CTM_EnemySlotSelected       = 12,
		CTM_EnemySlotNotSelected    = 13,
		CTM_Role                    = 14,
		CTM_Lane                    = 15,
		CTM_MAX                     = 16
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
		PRR_NoFeedback             = 0,
		PRR_MoraleBooster          = 1,
		PRR_TeamPlayer             = 2,
		PRR_Teacher                = 3,
		PRR_Strategist             = 4,
		PRR_Pro                    = 5,
		PRR_AbusedCommunications   = 6,
		PRR_AbandonedTeam          = 7,
		PRR_IntentionallySabotaged = 8,
		PRR_Cheated                = 9,
		PRR_Mismatched             = 10,
		PRR_MAX                    = 11
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
		Taunt     = 0,
		Taunt_MAX = 1
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
		MAX           = 4,
		MAX01         = 5
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
		CST_MAX           = 4
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
	 * Enum OrionGame.EOrionServiceType
	 */
	enum class EOrionServiceType : uint8_t
	{
		CraftService     = 0,
		MAX_SERVICE_TYPE = 1,
		MAX              = 2
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
		RedHeroes            = 0,
		RedMinion            = 1,
		RedWards             = 2,
		RedPlacedObject      = 3,
		RedInhibitor         = 4,
		RedCore              = 5,
		RedTowers            = 6,
		RedWells             = 7,
		RedPrimeHelixReturn  = 8,
		BlueHeroes           = 9,
		BlueMinion           = 10,
		BlueWards            = 11,
		BluePlacedObject     = 12,
		BlueInhibitor        = 13,
		BlueCore             = 14,
		BlueTowers           = 15,
		BlueWells            = 16,
		BluePrimeHelixReturn = 17,
		JungleMinions        = 18,
		Wells                = 19,
		JungleCamps          = 20,
		PrimeHelixSpawn      = 21,
		PrimeHelixCarry      = 22,
		Spectator            = 23,
		MAX                  = 24,
		MAX01                = 25
	};

	/**
	 * Enum OrionGame.EOrionVisionDef
	 */
	enum class EOrionVisionDef : uint8_t
	{
		Hero             = 0,
		Minion           = 1,
		Tower            = 2,
		Rig              = 3,
		Inhibitor        = 4,
		Core             = 5,
		Well             = 6,
		Ward             = 7,
		PlacedObject     = 8,
		JungleCamp       = 9,
		PrimeHelixSpawn  = 10,
		PrimeHelixReturn = 11,
		PrimeHelixCarry  = 12,
		Spectator        = 13,
		MAX              = 14,
		MAX01            = 15
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
		MAX     = 2
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
	 * Enum OrionGame.ECoinSizes
	 */
	enum class ECoinSizes : uint8_t
	{
		Large  = 0,
		Medium = 1,
		Small  = 2,
		COUNT  = 3,
		MAX    = 4
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
		Founders    = 9,
		MAX         = 10,
		MAX01       = 11
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
	 * Enum OrionGame.EOrionLootRewardSource
	 */
	enum class EOrionLootRewardSource : uint8_t
	{
		Unknown        = 0,
		AccountLevelUp = 1,
		HeroLevelUp    = 2,
		DailyReward    = 3,
		SpecialEvent   = 4,
		MatchComplete  = 5,
		Boost          = 6,
		Victory        = 7,
		MAX            = 8,
		MAX01          = 9
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
	 * Enum OrionGame.EOrionLoadedDataType
	 */
	enum class EOrionLoadedDataType : uint8_t
	{
		Default             = 0,
		MapObject           = 1,
		CardGameplayEffects = 2,
		MAX                 = 3,
		MAX01               = 4
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
	 * Enum OrionGame.EOrionRejoinStatus
	 */
	enum class EOrionRejoinStatus : uint8_t
	{
		NoMatchToRejoin = 0,
		RejoinAvailable = 1,
		UpdatingStatus  = 2,
		NeedsRecheck    = 3,
		MAX             = 4
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
		Max_None             = 18,
		MAX                  = 19
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
		RetrySearch       = 4,
		ReconnectToBeacon = 5,
		LeavingLobby      = 6,
		WaitingForPlayers = 7,
		ReadyingUp        = 8,
		TravellingToMatch = 9,
		HandlingError     = 10,
		Finished          = 11,
		MAX               = 12
	};

	/**
	 * Enum OrionGame.EOrionPersistentPartyGameStateFlags
	 */
	enum class EOrionPersistentPartyGameStateFlags : uint8_t
	{
		SessionId              = 0,
		PartyProgression       = 1,
		MatchmakingType        = 2,
		MatchmakingCustomKey   = 3,
		MatchmakingState       = 4,
		NumPlayersNeeded       = 5,
		MatchmakingResult      = 6,
		AcceptMatchPlayers     = 7,
		LockInHeroResponses    = 8,
		MatchmakingEstWaitTime = 9,
		MAX                    = 10
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
	 * Enum OrionGame.ECreateAccountResult
	 */
	enum class ECreateAccountResult : uint8_t
	{
		NotStarted                       = 0,
		Pending                          = 1,
		Success                          = 2,
		Console_LoginFailed              = 3,
		Console_DuplicateAuthAssociation = 4,
		DuplicateAccount                 = 5,
		GenericError                     = 6,
		MAX                              = 7
	};

	/**
	 * Enum OrionGame.ELoginResult
	 */
	enum class ELoginResult : uint8_t
	{
		NotStarted                       = 0,
		Pending                          = 1,
		Success                          = 2,
		Console_LoginFailed              = 3,
		Console_AuthFailed               = 4,
		Console_MissingAuthAssociation   = 5,
		Console_DuplicateAuthAssociation = 6,
		AuthFailed                       = 7,
		NotEntitled                      = 8,
		EULACheckFailed                  = 9,
		ServiceUnavailable               = 10,
		GenericError                     = 11,
		RejoinCheckFailure               = 12,
		ConnectionFailed                 = 13,
		MAX                              = 14
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
		MAX               = 23,
		MAX01             = 24
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
		MAX                        = 10,
		None                       = 11,
		MAX01                      = 12
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
		MAX                 = 14,
		MAX01               = 15
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
	 * Enum OrionGame.EOrionTypeOfFlair
	 */
	enum class EOrionTypeOfFlair : uint8_t
	{
		Reward = 0,
		AFK    = 1,
		Ban    = 2,
		MAX    = 3,
		MAX01  = 4
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
	 * Enum OrionGame.EPipState
	 */
	enum class EPipState : uint8_t
	{
		Highlight = 0,
		Selected  = 1,
		MAX       = 2
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
	 * Enum OrionGame.EXPType
	 */
	enum class EXPType : uint8_t
	{
		CardPoints = 0,
		XP         = 1,
		MAX        = 2
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
	 * ScriptStruct OrionGame.OrionFloatSpringInterpolator
	 * Size -> 0x0008
	 */
	struct FOrionFloatSpringInterpolator
	{
	public:
		float                                                      StiffnessConstant;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampeningRatio;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0HU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionVectorSpringInterpolator
	 * Size -> 0x0008
	 */
	struct FOrionVectorSpringInterpolator
	{
	public:
		float                                                      StiffnessConstant;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampeningRatio;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JECD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionFilterAndEffectsContainer
	 * Size -> 0x0020
	 */
	struct FOrionFilterAndEffectsContainer
	{
	public:
		unsigned char                                              FiltersToUse[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionFilterAndEffectsContainer.FiltersToUse
		unsigned char                                              CachedSourceActor[0x8];                                  // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.OrionFilterAndEffectsContainer.CachedSourceActor
		unsigned char                                              CachedSourceTeamNum;                                     // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bGeneratedEffectSpecs : 1;                               // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_68HZ[0x1F];                                  // 0x0001(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionFilterEffectsMap
	 * Size -> 0x0090
	 */
	struct FOrionFilterEffectsMap
	{
	public:
		unsigned char                                              Filter[0x60];                                            // 0x0000(0x0060) UNKNOWN PROPERTY: StructProperty OrionGame.OrionFilterEffectsMap.Filter
		unsigned char                                              GameplayEffectsToApply[0x10];                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionFilterEffectsMap.GameplayEffectsToApply
		unsigned char                                              StackedGameplayEffectsToApply[0x10];                     // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionFilterEffectsMap.StackedGameplayEffectsToApply
		unsigned char                                              GameplayEffectSpecsToApply[0x10];                        // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionFilterEffectsMap.GameplayEffectSpecsToApply
		unsigned char                                              UnknownData_2V3G[0x80];                                  // 0x0010(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionEffectStack
	 * Size -> 0x0010
	 */
	struct FOrionEffectStack
	{
	public:
		unsigned char                                              GameplayEffect[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.OrionEffectStack.GameplayEffect
		int32_t                                                    StackCount;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KIFG[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionActorFilter
	 * Size -> 0x0060
	 */
	struct FOrionActorFilter
	{
	public:
		bool                                                       bAllowSelf : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCheckIsTargetable : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCheckIsSelectable : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCheckShadowPlane : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bStealthedTargetsAreValid : 1;                           // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              Team[0x3];                                               // 0x0000(0x0003) UNKNOWN PROPERTY: StructProperty OrionGame.OrionActorFilter.Team
		unsigned char                                              Type[0x5];                                               // 0x0000(0x0005) UNKNOWN PROPERTY: StructProperty OrionGame.OrionActorFilter.Type
		unsigned char                                              Occlusion[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionActorFilter.Occlusion
		unsigned char                                              Tags[0x40];                                              // 0x0000(0x0040) UNKNOWN PROPERTY: StructProperty OrionGame.OrionActorFilter.Tags
		unsigned char                                              UnknownData_XSI9[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionActorFilterOcclusion
	 * Size -> 0x0010
	 */
	struct FOrionActorFilterOcclusion
	{
	public:
		bool                                                       bRequiresLineOfSight : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              Profile[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionActorFilterOcclusion.Profile
		unsigned char                                              UnknownData_AUOW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionActorFilterType
	 * Size -> 0x0005
	 */
	struct FOrionActorFilterType
	{
	public:
		bool                                                       bHeroes : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCreeps : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bStructures : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWells : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDamageables : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86P1[0x4];                                   // 0x0001(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionActorFilterTeam
	 * Size -> 0x0003
	 */
	struct FOrionActorFilterTeam
	{
	public:
		bool                                                       bAlly : 1;                                               // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnemy : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bNeutral : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2H5[0x2];                                   // 0x0001(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionProjectileCues
	 * Size -> 0x0048
	 */
	struct FOrionProjectileCues
	{
	public:
		unsigned char                                              Spawn[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionProjectileCues.Spawn
		unsigned char                                              Destroy[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionProjectileCues.Destroy
		unsigned char                                              HitCharacter[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionProjectileCues.HitCharacter
		unsigned char                                              HitCharacterShield[0x8];                                 // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionProjectileCues.HitCharacterShield
		unsigned char                                              HitWorld[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionProjectileCues.HitWorld
		bool                                                       bOrientHitGCsToProjectileVelocity : 1;                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxSurfaceNormalDeviationAngle;                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Bounce[0x8];                                             // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionProjectileCues.Bounce
		unsigned char                                              Explosion[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionProjectileCues.Explosion
		unsigned char                                              NoHit[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionProjectileCues.NoHit
		unsigned char                                              UnknownData_JS79[0x40];                                  // 0x0008(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAIBotCardEntry
	 * Size -> 0x0018
	 */
	struct FOrionAIBotCardEntry
	{
	public:
		unsigned char                                              CardData[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionAIBotCardEntry.CardData
		int32_t                                                    RequiredActivationPoints;                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMF7[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_IK9O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroRoles
	 * Size -> 0x0018
	 */
	struct FOrionHeroRoles
	{
	public:
		unsigned char                                              RangeType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PossibleRoles[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionHeroRoles.PossibleRoles
		unsigned char                                              UnknownData_LMUJ[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroRoleEntry
	 * Size -> 0x0008
	 */
	struct FOrionHeroRoleEntry
	{
	public:
		unsigned char                                              Role;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APYP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLoreData
	 * Size -> 0x0010
	 */
	struct FOrionLoreData
	{
	public:
		unsigned char                                              BackgroundBullets[0x10];                                 // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionLoreData.BackgroundBullets
	};

	/**
	 * ScriptStruct OrionGame.OrionHUDLogMessageData
	 * Size -> 0x0028
	 */
	struct FOrionHUDLogMessageData
	{
	public:
		unsigned char                                              WidgetClass[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.OrionHUDLogMessageData.WidgetClass
		unsigned char                                              Icon1[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHUDLogMessageData.Icon1
		unsigned char                                              Icon2[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHUDLogMessageData.Icon2
		unsigned char                                              Icon3[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHUDLogMessageData.Icon3
		unsigned char                                              TeamNum1;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamNum2;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MyTeam;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EnemyTeam;                                               // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVBB[0x27];                                  // 0x0001(0x0027) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionNotification
	 * Size -> 0x01A0
	 */
	struct FOrionNotification
	{
	public:
		class FText                                                TitleText;                                               // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                BodyText;                                                // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x90];                                              // 0x0000(0x0090) UNKNOWN PROPERTY: StructProperty OrionGame.OrionNotification.Icon
		unsigned char                                              Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ButtonText[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionNotification.ButtonText
		class FName                                                Identifier;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Time[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionNotification.Time
		unsigned char                                              UniqueId[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionNotification.UniqueId
		unsigned char                                              UnknownData_ZHIG[0x190];                                 // 0x0010(0x0190) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDialogDescription
	 * Size -> 0x00B0
	 */
	struct FOrionDialogDescription
	{
	public:
		class FText                                                MessageHeader;                                           // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                MessageBody;                                             // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ButtonOneText;                                           // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ButtonTwoText;                                           // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      DisplayTime;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCancel : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BVY8[0xAF];                                  // 0x0001(0x00AF) MISSED OFFSET (PADDING)
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
	 * ScriptStruct OrionGame.UIUpdateHelperStruct
	 * Size -> 0x0000
	 */
	struct FUIUpdateHelperStruct
	{	};

	/**
	 * ScriptStruct OrionGame.OrionAbilityUIData
	 * Size -> 0x00C0
	 */
	struct FOrionAbilityUIData : public FUIUpdateHelperStruct
	{
	public:
		float                                                      CooldownTimeRemaining;                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanActivate : 1;                                        // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsUnlocked : 1;                                         // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              AbilityImage[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionAbilityUIData.AbilityImage
		class FString                                              KeyString;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EmptyAbility : 1;                                        // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CachedHeroLevel;                                         // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AbilityLevel;                                            // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AbilityLevelMax;                                         // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanLevelUpAbility : 1;                                  // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    StacksRemaining;                                         // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StacksMax;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                AbilityDisplayName;                                      // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                AbilityDescription;                                      // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                AbilityShortDescription;                                 // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              Ability[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionAbilityUIData.Ability
		unsigned char                                              HeroData[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionAbilityUIData.HeroData
		float                                                      AbilityCost;                                             // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCountMax;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasStacks : 1;                                          // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DurationEndTime;                                         // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationLength;                                          // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DurationDisplayType;                                     // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCurrentlyEngaged : 1;                                   // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSilenced : 1;                                           // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bNeverActivated : 1;                                     // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    InputID;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VIB[0xBC];                                  // 0x0004(0x00BC) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionBaseHUDPlayerInfo
	 * Size -> 0x0000
	 */
	struct FOrionBaseHUDPlayerInfo : public FUIUpdateHelperStruct
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthMax;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthRegen;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Shield;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShieldMax;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Energy;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnergyMax;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnergyRegen;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Assists;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minions;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CardLevel;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CardXP;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CardMaxXP;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalXP;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XPToNextLevel;                                           // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerLevel;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCurrentlyDead : 1;                                    // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsCritiallyWounded : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RespawnTimer;                                            // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CardPointsSpent;                                         // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CardPointsMax;                                           // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HeroData[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionBaseHUDPlayerInfo.HeroData
		unsigned char                                              UnknownData_SIPH[0xFFFFFFF8];                            // 0x0008(0xFFFFFFF8) Fix size for supers
	};

	/**
	 * ScriptStruct OrionGame.OrionHUDTeamStatusInfo
	 * Size -> 0x0068
	 */
	struct FOrionHUDTeamStatusInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              PlayerState[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.OrionHUDTeamStatusInfo.PlayerState
		unsigned char                                              PortraitTexture[0x8];                                    // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHUDTeamStatusInfo.PortraitTexture
		float                                                      HealthPercent;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnergyPercent;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RespawnTime;                                             // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCurrentlyDead : 1;                                      // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSelectedForHeal : 1;                                    // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsEmptySlot : 1;                                        // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUltimateReady : 1;                                    // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bVisibleToLocalPlayer : 1;                               // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              PlayerStateUIID[0x28];                                   // 0x0000(0x0028) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHUDTeamStatusInfo.PlayerStateUIID
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFCI[0x67];                                  // 0x0001(0x0067) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionPlayerStateUIID
	 * Size -> 0x0028
	 */
	struct FOrionPlayerStateUIID
	{
	public:
		unsigned char                                              UniqueId[0x18];                                          // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionPlayerStateUIID.UniqueId
		unsigned char                                              BotID[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionPlayerStateUIID.BotID
		unsigned char                                              UnknownData_7S1W[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
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
	 * ScriptStruct OrionGame.OrionAttributeViewItem
	 * Size -> 0x00B8
	 */
	struct FOrionAttributeViewItem
	{
	public:
		unsigned char                                              DisplayIcon[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionAttributeViewItem.DisplayIcon
		class FString                                              MarkupAbbreviation;                                      // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                ToolTipText;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              Category;                                                // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Attribute[0x20];                                         // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAttributeViewItem.Attribute
		unsigned char                                              SourceTags[0x20];                                        // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAttributeViewItem.SourceTags
		unsigned char                                              TargetTags[0x20];                                        // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAttributeViewItem.TargetTags
		unsigned char                                              DisplayFormat;                                           // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStatVisibleInCardShop : 1;                              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bStatVisibileInDeckBuilder : 1;                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideSimpleStats : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6M5K[0xB4];                                  // 0x0004(0x00B4) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCosmeticPlayerChoices
	 * Size -> 0x0028
	 */
	struct FOrionCosmeticPlayerChoices
	{
	public:
		class FString                                              SkinName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Taunt1Name;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOwned : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    HeroLevel;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KM3Y[0x24];                                  // 0x0004(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroDataSpec
	 * Size -> 0x0020
	 */
	struct FOrionHeroDataSpec
	{
	public:
		unsigned char                                              HeroData[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHeroDataSpec.HeroData
		unsigned char                                              Skin[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHeroDataSpec.Skin
		unsigned char                                              Emotes[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionHeroDataSpec.Emotes
		unsigned char                                              UnknownData_NJOG[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCardAbilityData
	 * Size -> 0x0048
	 */
	struct FOrionCardAbilityData : public FUIUpdateHelperStruct
	{
	public:
		float                                                      CooldownTimeRemaining;                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownEndTime;                                         // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanActivate : 1;                                        // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              AbilityImage[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionCardAbilityData.AbilityImage
		bool                                                       bEmptyAbility : 1;                                       // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCountMax;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPassiveCard : 1;                                      // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              InputID;                                                 // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CardData[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionCardAbilityData.CardData
		int32_t                                                    NumOfUpgrades;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalCardLevel;                                          // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CardActor[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionCardAbilityData.CardActor
		unsigned char                                              UnknownData_5HJ5[0x40];                                  // 0x0008(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionJungleBuffInfo
	 * Size -> 0x01C0
	 */
	struct FOrionJungleBuffInfo : public FUIUpdateHelperStruct
	{
	public:
		float                                                      TotalDuration;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeRemaining;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BuffAssetTag[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionJungleBuffInfo.BuffAssetTag
		unsigned char                                              BuffGrantedTag[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionJungleBuffInfo.BuffGrantedTag
		bool                                                       bIsEmpty : 1;                                            // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasCombatMessage : 1;                                   // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              AssociatedCombatMessage;                                 // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BuffGrantedTagContainer[0x20];                           // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionJungleBuffInfo.BuffGrantedTagContainer
		unsigned char                                              UnknownData_FYMH[0x1A0];                                 // 0x0020(0x01A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionUIDamageEventInfo
	 * Size -> 0x0030
	 */
	struct FOrionUIDamageEventInfo
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamagePCT;                                               // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              InstigatorLocation[0xC];                                 // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionUIDamageEventInfo.InstigatorLocation
		unsigned char                                              Target[0x8];                                             // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionUIDamageEventInfo.Target
		unsigned char                                              Instigator[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionUIDamageEventInfo.Instigator
		unsigned char                                              DamageType;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2I92[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLocalPlayerUIInfo
	 * Size -> 0x00D8
	 */
	struct FOrionLocalPlayerUIInfo : public FOrionBaseHUDPlayerInfo
	{
	public:
		class FText                                                PlayerName;                                              // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                HeroName;                                                // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              EnemyTeamNum;                                            // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticallyWoundedThresholdPCT;                           // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInBase : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanShop : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              CharacterLocation[0xC];                                  // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionLocalPlayerUIInfo.CharacterLocation
		unsigned char                                              CameraLocation[0xC];                                     // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionLocalPlayerUIInfo.CameraLocation
		unsigned char                                              CameraDirection[0xC];                                    // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionLocalPlayerUIInfo.CameraDirection
		bool                                                       bInTravelMode : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bMatchHasStarted : 1;                                    // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInTargetingMode : 1;                                    // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9S7P[0xD7];                                  // 0x0001(0x00D7) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCoreInfo
	 * Size -> 0x0028
	 */
	struct FOrionCoreInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthMax;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticallyWoundedThresholdPCT;                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCriticallyWounded : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Shield;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShieldMax;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCurrentlyDead : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCurrentlyExposed : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEmptyStruct : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              CoreActor[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.OrionCoreInfo.CoreActor
		unsigned char                                              UnknownData_WV91[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHUDInputActionNames
	 * Size -> 0x00F0
	 */
	struct FOrionHUDInputActionNames
	{
	public:
		class FName                                                ToggleMouseKeyName;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToggleCardMenuKeyName;                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CloseCardMenuKeyName;                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToggleScoreboardKeyName;                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToggleLargeMinimapKeyName;                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToggleReplayScoreboardKeyName;                           // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OpenScoreboardKeyName;                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CloseScoreboardKeyName;                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToggleEscapeMenuKeyName;                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                IgnoreToggleScoreboardKeyName;                           // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToggleTeamCommsMenuName;                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CloseTeamCommsMenuName;                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamComms_Option_2;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamComms_Option_3;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamComms_Option_4;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamComms_Option_5;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamComms_Option_Commit;                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamComms_Option_Back;                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TabLeft;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TabRight;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CardTabLeft;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CardTabRight;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TrashItem;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SpectatorToggleControllerCursor;                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HUDCursorModePress;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HUDCursorModeRelease;                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HUDCursorModeToggle;                                     // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UpgradeButtonPress;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UpgradeButtonRelease;                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ShowUpgradePanelPullTab;                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUWV[0xE8];                                  // 0x0008(0x00E8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTowerTargetingInfo
	 * Size -> 0x0050
	 */
	struct FOrionTowerTargetingInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              TargetingType;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfTargetedMinions;                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                TargetedHeroName;                                        // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                TargetedPlayerName;                                      // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              TargetedHeroPortrait[0x8];                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionTowerTargetingInfo.TargetedHeroPortrait
		float                                                      TowerHealth;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TowerHealthPercent;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsNearTower : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              TowerTeamNum;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RespawnTime;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FMUB[0x4C];                                  // 0x0004(0x004C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionGameEventMessageData
	 * Size -> 0x0088
	 */
	struct FOrionGameEventMessageData
	{
	public:
		unsigned char                                              Icon1[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionGameEventMessageData.Icon1
		unsigned char                                              Icon2[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionGameEventMessageData.Icon2
		class FText                                                Text1;                                                   // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Text2;                                                   // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              TeamNum1;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamNum2;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MessageTypeIdentifier;                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MessagePrio;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MessageType;                                             // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamCommData[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionGameEventMessageData.TeamCommData
		bool                                                       bRemoveMessagesOfSameMessageType : 1;                    // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bClearLowerPrioMessages : 1;                             // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFlushAllLowerPrioMessages : 1;                          // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bStompCurrentMessage : 1;                                // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              MessageSound[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionGameEventMessageData.MessageSound
		unsigned char                                              SendingPlayer[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionGameEventMessageData.SendingPlayer
		unsigned char                                              UnknownData_3N8A[0x80];                                  // 0x0008(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionStatusEffectUIInfo
	 * Size -> 0x0038
	 */
	struct FOrionStatusEffectUIInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              StatusEffectTags[0x20];                                  // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionStatusEffectUIInfo.StatusEffectTags
		float                                                      TimeRemaining;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEmptyStruct : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6UP[0x37];                                  // 0x0001(0x0037) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHUDInputInfo
	 * Size -> 0x0014
	 */
	struct FOrionHUDInputInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              StickDirection[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHUDInputInfo.StickDirection
		bool                                                       bIsInSelectionMode : 1;                                  // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsModiferHeldDown : 1;                                  // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInTargetingMode : 1;                                    // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Direction_Selected_Up : 1;                               // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       Direction_Selected_Down : 1;                             // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       Direction_Selected_Left : 1;                             // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       Direction_Selected_Right : 1;                            // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FU2J[0x13];                                  // 0x0001(0x0013) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionBuffStatusEffectInfo
	 * Size -> 0x0028
	 */
	struct FOrionBuffStatusEffectInfo
	{
	public:
		unsigned char                                              GameplayEffectHandle[0x8];                               // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionBuffStatusEffectInfo.GameplayEffectHandle
		unsigned char                                              EffctStatusTag[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionBuffStatusEffectInfo.EffctStatusTag
		unsigned char                                              Icon[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionBuffStatusEffectInfo.Icon
		float                                                      EndTime;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BuffWidgetClass[0x8];                                    // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.OrionBuffStatusEffectInfo.BuffWidgetClass
		unsigned char                                              UnknownData_613X[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLevelInfo
	 * Size -> 0x0010
	 */
	struct FOrionLevelInfo
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentXP;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XPNeeded;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LevelType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IKP[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SimpleAchievementDescription
	 * Size -> 0x0020
	 */
	struct FSimpleAchievementDescription
	{
	public:
		unsigned char                                              Key;                                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5UW[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayStats
	 * Size -> 0x0068
	 */
	struct FGameplayStats
	{
	public:
		unsigned char                                              TrackedStats[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.GameplayStats.TrackedStats
		unsigned char                                              Owner[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.GameplayStats.Owner
		unsigned char                                              UnknownData_O6S1[0x60];                                  // 0x0008(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MCPPlayerStats
	 * Size -> 0x0018
	 */
	struct FMCPPlayerStats
	{
	public:
		class FString                                              StatName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6RW[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLootReward
	 * Size -> 0x0030
	 */
	struct FOrionLootReward
	{
	public:
		unsigned char                                              ItemDefinition[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionLootReward.ItemDefinition
		int32_t                                                    Quantity;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Source;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LootGroupName;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMtxReward : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKWD[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionScoreboardPlayerEntryInfo
	 * Size -> 0x00C8
	 */
	struct FOrionScoreboardPlayerEntryInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              PlayerStateUIID[0x28];                                   // 0x0000(0x0028) UNKNOWN PROPERTY: StructProperty OrionGame.OrionScoreboardPlayerEntryInfo.PlayerStateUIID
		class FString                                              PlayerName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PlayerPlatform;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LocalPlayerPlatform;                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroId;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LocalPlayerTeamNum;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HeroIcon[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionScoreboardPlayerEntryInfo.HeroIcon
		int32_t                                                    CurrentLevel;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCurrentlyDead : 1;                                    // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RespawnTime;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLocalPlayer : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsBot : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisconnected : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bMuted : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCurrentlyTalking : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bVisibleToLocalPlayer : 1;                               // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Assists;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinionKills;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlacedRigs;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DestroyedRigs;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CardLevel;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeamXPGained;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CardPointsSpent;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CardPointsMax;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEmptyEntry : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              EquippedCards[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionScoreboardPlayerEntryInfo.EquippedCards
		unsigned char                                              UnknownData_MVAQ[0xB8];                                  // 0x0010(0x00B8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionScoreboardCardInfo
	 * Size -> 0x0020
	 */
	struct FOrionScoreboardCardInfo
	{
	public:
		unsigned char                                              CardActor[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.OrionScoreboardCardInfo.CardActor
		unsigned char                                              CoreCard[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionScoreboardCardInfo.CoreCard
		unsigned char                                              UpgradeCards[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionScoreboardCardInfo.UpgradeCards
		unsigned char                                              UnknownData_GXLM[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionScoreboardTeamEntryInfo
	 * Size -> 0x0034
	 */
	struct FOrionScoreboardTeamEntryInfo : public FUIUpdateHelperStruct
	{
	public:
		int32_t                                                    NumOfPlayers;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamKills;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamDeaths;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamAssists;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamMinionKills;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TowerKills;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InhibitorKills;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlacedRigs;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DestroyedRigs;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLocalPlayersTeam : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TotalTeamXP;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEmpyStruct : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OXUN[0x33];                                  // 0x0001(0x0033) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionSurveyInfo
	 * Size -> 0x0020
	 */
	struct FOrionSurveyInfo
	{
	public:
		bool                                                       bAskSurvey : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                QuestionGroupToAsk;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchSessionId;                                          // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNPR[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionScoreboardUIInfo
	 * Size -> 0x0088
	 */
	struct FOrionScoreboardUIInfo
	{
	public:
		unsigned char                                              YourTeam[0x34];                                          // 0x0000(0x0034) UNKNOWN PROPERTY: StructProperty OrionGame.OrionScoreboardUIInfo.YourTeam
		unsigned char                                              EnemyTeam[0x34];                                         // 0x0000(0x0034) UNKNOWN PROPERTY: StructProperty OrionGame.OrionScoreboardUIInfo.EnemyTeam
		unsigned char                                              Teammates[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionScoreboardUIInfo.Teammates
		unsigned char                                              Enemies[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionScoreboardUIInfo.Enemies
		unsigned char                                              UnknownData_4HJE[0x78];                                  // 0x0010(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionSpectatorHUDPlayerInfo
	 * Size -> 0x00B0
	 */
	struct FOrionSpectatorHUDPlayerInfo : public FOrionBaseHUDPlayerInfo
	{
	public:
		unsigned char                                              PlayerState[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.OrionSpectatorHUDPlayerInfo.PlayerState
		unsigned char                                              PortraitTexture[0x8];                                    // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionSpectatorHUDPlayerInfo.PortraitTexture
		bool                                                       bIsEmptySlot : 1;                                        // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsUltimateReady : 1;                                    // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsBeingWatched : 1;                                     // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              PlayerStateUIID[0x28];                                   // 0x0000(0x0028) UNKNOWN PROPERTY: StructProperty OrionGame.OrionSpectatorHUDPlayerInfo.PlayerStateUIID
		unsigned char                                              UnknownData_UHA4[0x88];                                  // 0x0028(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDailyRewardInfo
	 * Size -> 0x0028
	 */
	struct FOrionDailyRewardInfo
	{
	public:
		int32_t                                                    DaysUntilAvailable;                                      // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RewardType;                                              // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RewardName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ItemDefinition[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDailyRewardInfo.ItemDefinition
		unsigned char                                              UnknownData_MSF4[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBTeamInfo
	 * Size -> 0x00A8
	 */
	struct FOrionTBTeamInfo
	{
	public:
		int32_t                                                    SocialPartySize;                                         // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Captain[0x78];                                           // 0x0000(0x0078) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBTeamInfo.Captain
		unsigned char                                              Members[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionTBTeamInfo.Members
		unsigned char                                              ChatRoomId[0x18];                                        // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBTeamInfo.ChatRoomId
		unsigned char                                              UnknownData_TIDI[0x90];                                  // 0x0018(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamChatRoomId
	 * Size -> 0x0018
	 */
	struct FOrionTeamChatRoomId
	{
	public:
		unsigned char                                              TeamIndex;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChatRoomId;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJZI[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBMemberInfo
	 * Size -> 0x0078
	 */
	struct FOrionTBMemberInfo
	{
	public:
		unsigned char                                              UniqueId[0x18];                                          // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBMemberInfo.UniqueId
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              State;                                                   // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PlayerData[0x50];                                        // 0x0000(0x0050) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBMemberInfo.PlayerData
		unsigned char                                              BotDifficulty;                                           // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBot : 1;                                              // 0x0000(0x0001) BIT_FIELD BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFromSocialParty : 1;                                    // 0x0000(0x0001) BIT_FIELD BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bValidPlayer : 1;                                        // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5JEF[0x77];                                  // 0x0001(0x0077) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBPlayerChoices
	 * Size -> 0x0050
	 */
	struct FOrionTBPlayerChoices
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Cosmetic[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBPlayerChoices.Cosmetic
		class FString                                              DeckId;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Position;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Role;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KA5[0x4F];                                  // 0x0001(0x004F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBState
	 * Size -> 0x0010
	 */
	struct FOrionTBState
	{
	public:
		unsigned char                                              MemberSlots[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionTBState.MemberSlots
	};

	/**
	 * ScriptStruct OrionGame.OrionTBSlotState
	 * Size -> 0x0090
	 */
	struct FOrionTBSlotState
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MemberInfo[0x78];                                        // 0x0000(0x0078) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBSlotState.MemberInfo
		unsigned char                                              PartyMemberState[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionTBSlotState.PartyMemberState
		bool                                                       bIsReserved : 1;                                         // 0x0000(0x0001) BIT_FIELD BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsPending : 1;                                          // 0x0000(0x0001) BIT_FIELD BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsCaptain : 1;                                          // 0x0000(0x0001) BIT_FIELD BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGYF[0x8F];                                  // 0x0001(0x008F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAbilityBindInfo
	 * Size -> 0x0010
	 */
	struct FOrionAbilityBindInfo
	{
	public:
		unsigned char                                              KeyBinding;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnlocksWithKeyBinding;                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Ability[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.OrionAbilityBindInfo.Ability
		unsigned char                                              UnknownData_NNFM[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionPlayerEndMatchData
	 * Size -> 0x0028
	 */
	struct FOrionPlayerEndMatchData
	{
	public:
		class FString                                              MatchSessionId;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlaylistId;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGameConcludedViaSurrender : 1;                          // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsCustomGame : 1;                                       // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              GameTags[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionPlayerEndMatchData.GameTags
		unsigned char                                              UnknownData_R4WC[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.PlayerRatingObj
	 * Size -> 0x0050
	 */
	struct FPlayerRatingObj
	{
	public:
		unsigned char                                              UnknownData_6K2W[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionSurveyResponse
	 * Size -> 0x0028
	 */
	struct FOrionSurveyResponse
	{
	public:
		class FName                                                QuestionGroupAsked;                                      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchSessionId;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Responses[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionSurveyResponse.Responses
		unsigned char                                              UnknownData_BXMX[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAcceptMatchData
	 * Size -> 0x0020
	 */
	struct FOrionAcceptMatchData
	{
	public:
		unsigned char                                              PlayerId[0x18];                                          // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAcceptMatchData.PlayerId
		unsigned char                                              AcceptMatchState;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37SV[0x1F];                                  // 0x0001(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroSaveSettings
	 * Size -> 0x0028
	 */
	struct FOrionHeroSaveSettings
	{
	public:
		class FString                                              HeroId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeckId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Role;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Position;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YNQ[0x27];                                  // 0x0001(0x0027) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionItemEntryStateValue
	 * Size -> 0x0018
	 */
	struct FOrionItemEntryStateValue
	{
	public:
		int32_t                                                    IntValue;                                                // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                NameValue;                                               // 0x0000(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              StateType;                                               // 0x0000(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MLLN[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.LoginRewardProgression
	 * Size -> 0x0010
	 */
	struct FLoginRewardProgression
	{
	public:
		unsigned char                                              NextLoginTime[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.LoginRewardProgression.NextLoginTime
		int32_t                                                    Level;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalDays;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TGEU[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ActiveBoost
	 * Size -> 0x0018
	 */
	struct FActiveBoost
	{
	public:
		unsigned char                                              BoostType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ExpirationTime[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.ActiveBoost.ExpirationTime
		int32_t                                                    UsesRemaining;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q45L[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ItemIdList
	 * Size -> 0x0010
	 */
	struct FItemIdList
	{
	public:
		unsigned char                                              Values[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.ItemIdList.Values
	};

	/**
	 * ScriptStruct OrionGame.SimpleAchievements
	 * Size -> 0x0010
	 */
	struct FSimpleAchievements
	{
	public:
		unsigned char                                              Status[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.SimpleAchievements.Status
	};

	/**
	 * ScriptStruct OrionGame.SimpleAchievementStatus
	 * Size -> 0x0008
	 */
	struct FSimpleAchievementStatus
	{
	public:
		unsigned char                                              Key;                                                     // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RWU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.UserCreatedDeck
	 * Size -> 0x0010
	 */
	struct FUserCreatedDeck
	{
	public:
		unsigned char                                              CardGroups[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.UserCreatedDeck.CardGroups
	};

	/**
	 * ScriptStruct OrionGame.UserCardGroup
	 * Size -> 0x0020
	 */
	struct FUserCardGroup
	{
	public:
		class FString                                              CardId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ChildCardIds[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.UserCardGroup.ChildCardIds
		unsigned char                                              UnknownData_YWUI[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TeamOwnershipXPBonus
	 * Size -> 0x0010
	 */
	struct FTeamOwnershipXPBonus
	{
	public:
		unsigned char                                              Contributions[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.TeamOwnershipXPBonus.Contributions
	};

	/**
	 * ScriptStruct OrionGame.TeamOwnershipXPBonusEntry
	 * Size -> 0x0020
	 */
	struct FTeamOwnershipXPBonusEntry
	{
	public:
		class FString                                              PlayerNetID;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeroLevel;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    bIsMe;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeamXPContrib;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FB0G[0x1C];                                  // 0x0004(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AccountProgression
	 * Size -> 0x0014
	 */
	struct FAccountProgression
	{
	public:
		int32_t                                                    ProfileXP;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalXP;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileRank;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ValorRank;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XPToNextLevel;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VO5S[0x10];                                  // 0x0004(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MCPComponentStack
	 * Size -> 0x0018
	 */
	struct FMCPComponentStack
	{
	public:
		class FString                                              Component;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EI03[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.QuestJournal
	 * Size -> 0x0050
	 */
	struct FQuestJournal
	{
	public:
		int32_t                                                    numRewardsClaimed;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              QuestIds[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.QuestJournal.QuestIds
		unsigned char                                              RewardTemplates[0x10];                                   // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.QuestJournal.RewardTemplates
		unsigned char                                              NextRerollTime[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.QuestJournal.NextRerollTime
		unsigned char                                              OnDeckQuestTemplateNames[0x10];                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.QuestJournal.OnDeckQuestTemplateNames
		unsigned char                                              OnDeckQuestRewards[0x10];                                // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.QuestJournal.OnDeckQuestRewards
		unsigned char                                              UnknownData_KNX9[0x40];                                  // 0x0010(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.PlayerStatContainer
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	struct FPlayerStatContainer : public FFastArraySerializer
	{
	public:
		unsigned char                                              PlayerStats[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.PlayerStatContainer.PlayerStats
		unsigned char                                              Owner[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.PlayerStatContainer.Owner
		unsigned char                                              UnknownData_XFFL[0xC0];                                  // 0x0008(0x00C0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.PlayerStat
	 * Size -> 0x0014 (FullSize[0x0020] - InheritedSize[0x000C])
	 */
	struct FPlayerStat : public FFastArraySerializerItem
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LifeValue;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKA4[0x1C];                                  // 0x0004(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.PlayerStatData
	 * Size -> 0x0100
	 */
	struct FPlayerStatData
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LifeValue;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FastReplicationArrayIndex;                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWY5[0xFC];                                  // 0x0004(0x00FC) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.HeroPlayCount
	 * Size -> 0x0018
	 */
	struct FHeroPlayCount
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayCount;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYSA[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMcpCuratedDeck
	 * Size -> 0x0060
	 */
	struct FOrionMcpCuratedDeck
	{
	public:
		unsigned char                                              Categories[0x60];                                        // 0x0000(0x0060) UNKNOWN PROPERTY: StructProperty OrionGame.OrionMcpCuratedDeck.Categories
	};

	/**
	 * ScriptStruct OrionGame.OrionCuratedDeckCategory
	 * Size -> 0x0010
	 */
	struct FOrionCuratedDeckCategory
	{
	public:
		unsigned char                                              Cards[0x10];                                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionCuratedDeckCategory.Cards
	};

	/**
	 * ScriptStruct OrionGame.CuratedCardGroup
	 * Size -> 0x0030
	 */
	struct FCuratedCardGroup
	{
	public:
		unsigned char                                              CardPtr[0x20];                                           // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.CuratedCardGroup.CardPtr
		unsigned char                                              ChildCardPtrs[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.CuratedCardGroup.ChildCardPtrs
		unsigned char                                              UnknownData_GCAM[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TrackCardUpgradeAffinity
	 * Size -> 0x001C
	 */
	struct FTrackCardUpgradeAffinity
	{
	public:
		unsigned char                                              UnknownData_B4YG[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCardGameplayEffectData
	 * Size -> 0x0048
	 */
	struct FOrionCardGameplayEffectData
	{
	public:
		unsigned char                                              GameplayEffect[0x20];                                    // 0x0000(0x0020) UNKNOWN PROPERTY: AssetClassProperty OrionGame.OrionCardGameplayEffectData.GameplayEffect
		unsigned char                                              EffectAffinity;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpgradeUnlockNum;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnlockAffinityTypes[0x4];                                // 0x0000(0x0004) UNKNOWN PROPERTY: StructProperty OrionGame.OrionCardGameplayEffectData.UnlockAffinityTypes
		unsigned char                                              DeckTooltipType;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              InitialStackCountType;                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplicitStackCount;                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5PDH[0x44];                                  // 0x0004(0x0044) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionPlayerHandArray
	 * Size -> 0x0240
	 */
	struct FOrionPlayerHandArray
	{
	public:
		unsigned char                                              HandSlots[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionPlayerHandArray.HandSlots
		unsigned char                                              UnknownData_P9CI[0x230];                                 // 0x0010(0x0230) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHandSlot
	 * Size -> 0x0050
	 */
	struct FOrionHandSlot
	{
	public:
		unsigned char                                              HandSlotType;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlotKeyBinding;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RootCard[0x38];                                          // 0x0000(0x0038) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHandSlot.RootCard
		unsigned char                                              EquippedUpgrades[0x10];                                  // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionHandSlot.EquippedUpgrades
		unsigned char                                              UnknownData_XWP7[0x40];                                  // 0x0010(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCardInstance
	 * Size -> 0x0038
	 */
	struct FOrionCardInstance
	{
	public:
		unsigned char                                              CardGuid[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionCardInstance.CardGuid
		unsigned char                                              Card[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionCardInstance.Card
		unsigned char                                              Actor[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionCardInstance.Actor
		unsigned char                                              ParentGuid[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionCardInstance.ParentGuid
		unsigned char                                              Category;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5VR[0x37];                                  // 0x0001(0x0037) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLinkedCardsArray
	 * Size -> 0x0010
	 */
	struct FOrionLinkedCardsArray
	{
	public:
		unsigned char                                              CardsInDeck[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionLinkedCardsArray.CardsInDeck
	};

	/**
	 * ScriptStruct OrionGame.OrionLinkedCards
	 * Size -> 0x0050
	 */
	struct FOrionLinkedCards
	{
	public:
		unsigned char                                              RootCard[0x38];                                          // 0x0000(0x0038) UNKNOWN PROPERTY: StructProperty OrionGame.OrionLinkedCards.RootCard
		int32_t                                                    RootStackCount;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    RootTotalCount;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              LinkedCards[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionLinkedCards.LinkedCards
		unsigned char                                              UnknownData_FMEM[0x40];                                  // 0x0010(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BannerSocketEntry
	 * Size -> 0x0010
	 */
	struct FBannerSocketEntry
	{
	public:
		class FName                                                SocketIdent;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SocketType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PWXE[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BannerMaterialDesc
	 * Size -> 0x00C0
	 */
	struct FBannerMaterialDesc
	{
	public:
		unsigned char                                              DiffuseLoaded[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.BannerMaterialDesc.DiffuseLoaded
		unsigned char                                              TextureLoaded[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.BannerMaterialDesc.TextureLoaded
		unsigned char                                              NormalLoaded[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.BannerMaterialDesc.NormalLoaded
		unsigned char                                              Diffuse[0x20];                                           // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.BannerMaterialDesc.Diffuse
		unsigned char                                              Texture[0x20];                                           // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.BannerMaterialDesc.Texture
		unsigned char                                              Normal[0x20];                                            // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.BannerMaterialDesc.Normal
		unsigned char                                              Color1[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.BannerMaterialDesc.Color1
		unsigned char                                              Color2[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.BannerMaterialDesc.Color2
		unsigned char                                              Emissive[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.BannerMaterialDesc.Emissive
		float                                                      Metallic1;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Metallic2;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roughness1;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roughness2;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tiling;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GMAN[0xBC];                                  // 0x0004(0x00BC) MISSED OFFSET (PADDING)
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
		unsigned char                                              OriginalActor[0x20];                                     // 0x0000(0x0020) UNKNOWN PROPERTY: AssetClassProperty OrionGame.SkinSpawnOverrideItem.OriginalActor
		unsigned char                                              NewActor[0x20];                                          // 0x0000(0x0020) UNKNOWN PROPERTY: AssetClassProperty OrionGame.SkinSpawnOverrideItem.NewActor
		unsigned char                                              UnknownData_3GF0[0x20];                                  // 0x0020(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SkinAnimMontagePair
	 * Size -> 0x0040
	 */
	struct FSkinAnimMontagePair
	{
	public:
		unsigned char                                              SkinDefinition[0x20];                                    // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.SkinAnimMontagePair.SkinDefinition
		unsigned char                                              AnimMontage[0x20];                                       // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.SkinAnimMontagePair.AnimMontage
		unsigned char                                              UnknownData_MYJL[0x20];                                  // 0x0020(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AIInfluence
	 * Size -> 0x0010
	 */
	struct FAIInfluence
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FullEffectRadius;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SourceType;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XK8P[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AIBotDifficultySettings
	 * Size -> 0x0020
	 */
	struct FAIBotDifficultySettings
	{
	public:
		float                                                      RecommendedAbilityRangeModifier;                         // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrimaryCooldownModifier;                                 // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownModifier;                                        // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvailableCardPointsModifier;                             // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalAngleDeviation;                                // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAbilityLevel;                                         // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanUseUlt : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanUseActiveCards : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanPlaceAndUseRigs : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowRecallingBack : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q704[0x1F];                                  // 0x0001(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AIBotPerfConfig
	 * Size -> 0x0030
	 */
	struct FAIBotPerfConfig
	{
	public:
		float                                                      CombatAbilitiesUpdateInterval;                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AbilityTasksUpdateInterval;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentLaneInfoUpdateInterval;                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LaneLocationUpdateInterval;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BuffingUpdateInterval;                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FriendSupportingUpdateInterval;                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusUpdateInterval;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TacticalAssessmentUpdateInterval;                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunAwayUpdateInterval;                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnemyDistanceUpdateInterval;                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MobilityAbilityUpdateInterval;                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnemySelectionUpdateInterval;                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDB8[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AIAbilityTarget
	 * Size -> 0x0028
	 */
	struct FAIAbilityTarget
	{
	public:
		unsigned char                                              AsActor[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.AIAbilityTarget.AsActor
		unsigned char                                              UnknownData_3UA4[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CharacterScoreEvaluator
	 * Size -> 0x0014
	 */
	struct FCharacterScoreEvaluator
	{
	public:
		unsigned char                                              UnknownData_EFVP[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MinimapPingStyle
	 * Size -> 0x00A8
	 */
	struct FMinimapPingStyle
	{
	public:
		unsigned char                                              CenterImage_ColorOverTimeCurve[0x8];                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.MinimapPingStyle.CenterImage_ColorOverTimeCurve
		unsigned char                                              CenterImage_ScaleOverTimeCurve[0x8];                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.MinimapPingStyle.CenterImage_ScaleOverTimeCurve
		unsigned char                                              CenterImage[0x90];                                       // 0x0000(0x0090) UNKNOWN PROPERTY: StructProperty OrionGame.MinimapPingStyle.CenterImage
		unsigned char                                              PingSound[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.MinimapPingStyle.PingSound
		unsigned char                                              UnknownData_H7GA[0xA0];                                  // 0x0008(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.VisionManagerDebugInfoDump
	 * Size -> 0x0018
	 */
	struct FVisionManagerDebugInfoDump
	{
	public:
		unsigned char                                              Items[0x10];                                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.VisionManagerDebugInfoDump.Items
		unsigned char                                              UnknownData_S8PK[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.VisionManagerDebugItem
	 * Size -> 0x0040
	 */
	struct FVisionManagerDebugItem
	{
	public:
		unsigned char                                              Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Team;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TraceStart[0xC];                                         // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.VisionManagerDebugItem.TraceStart
		unsigned char                                              TraceEnd[0xC];                                           // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.VisionManagerDebugItem.TraceEnd
		unsigned char                                              TraceHit[0xC];                                           // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.VisionManagerDebugItem.TraceHit
		unsigned char                                              TargetActor[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.VisionManagerDebugItem.TargetActor
		unsigned char                                              ViewerActor[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.VisionManagerDebugItem.ViewerActor
		unsigned char                                              HitActor[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.VisionManagerDebugItem.HitActor
		unsigned char                                              UnknownData_LF2W[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.VisionManagerRuntimeData
	 * Size -> 0x31770
	 */
	struct FVisionManagerRuntimeData
	{
	public:
		unsigned char                                              InstantiatedMIDs[0x10];                                  // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.VisionManagerRuntimeData.InstantiatedMIDs
		unsigned char                                              UnknownData_5QTE[0x31760];                               // 0x0010(0x31760) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionVisionDefOverride
	 * Size -> 0x0010
	 */
	struct FOrionVisionDefOverride
	{
	public:
		uint16_t                                                   Index;                                                   // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Def[0x8];                                                // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionVisionDefOverride.Def
		unsigned char                                              UnknownData_GMG7[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
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
	 * ScriptStruct OrionGame.OrionReplicatedVisionData
	 * Size -> 0x0002
	 */
	struct FOrionReplicatedVisionData
	{
	public:
		uint16_t                                                   Index;                                                   // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionObjectiveCues
	 * Size -> 0x0030
	 */
	struct FOrionObjectiveCues
	{
	public:
		unsigned char                                              Idle[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionObjectiveCues.Idle
		unsigned char                                              TargetLocked[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionObjectiveCues.TargetLocked
		unsigned char                                              TargetAcquired[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionObjectiveCues.TargetAcquired
		unsigned char                                              Recharge[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionObjectiveCues.Recharge
		unsigned char                                              Destroyed[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionObjectiveCues.Destroyed
		unsigned char                                              ReviveFinished[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionObjectiveCues.ReviveFinished
		unsigned char                                              UnknownData_6PJY[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ObjectiveBuff
	 * Size -> 0x0010
	 */
	struct FObjectiveBuff
	{
	public:
		unsigned char                                              BuffGameplayEffect[0x8];                                 // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.ObjectiveBuff.BuffGameplayEffect
		unsigned char                                              BuffHandle[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.ObjectiveBuff.BuffHandle
		unsigned char                                              UnknownData_6V68[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ObjectiveDependency
	 * Size -> 0x0020
	 */
	struct FObjectiveDependency
	{
	public:
		unsigned char                                              Objective[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.ObjectiveDependency.Objective
		unsigned char                                              Relationship;                                            // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DeathGameplayEffect[0x8];                                // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.ObjectiveDependency.DeathGameplayEffect
		unsigned char                                              DeathGameplayEffectHandle[0x8];                          // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.ObjectiveDependency.DeathGameplayEffectHandle
		unsigned char                                              UnknownData_XXQP[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BotKnowledgeHub
	 * Size -> 0x0070
	 */
	struct FBotKnowledgeHub
	{
	public:
		unsigned char                                              AISystem[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.BotKnowledgeHub.AISystem
		unsigned char                                              CachedInfluenceMapManager[0x8];                          // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.BotKnowledgeHub.CachedInfluenceMapManager
		unsigned char                                              ScoreKeeper[0x14];                                       // 0x0000(0x0014) UNKNOWN PROPERTY: StructProperty OrionGame.BotKnowledgeHub.ScoreKeeper
		unsigned char                                              UnknownData_I295[0x5C];                                  // 0x0014(0x005C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.LanePath
	 * Size -> 0x0000
	 */
	struct FLanePath
	{
	public:
		unsigned char                                              Nodes[0x10];                                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.LanePath.Nodes
		unsigned char                                              LaneID;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3H2S[0xFFFFFFFF];                            // 0x0001(0xFFFFFFFF) Fix size for supers
	};

	/**
	 * ScriptStruct OrionGame.BotObjectiveGraphNode
	 * Size -> 0x0048
	 */
	struct FBotObjectiveGraphNode
	{
	public:
		unsigned char                                              StaticBotObjectives[0x10];                               // 0x0000(0x0010) UNKNOWN PROPERTY: ObjectProperty OrionGame.BotObjectiveGraphNode.StaticBotObjectives
		unsigned char                                              ObjectiveActor[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.BotObjectiveGraphNode.ObjectiveActor
		unsigned char                                              Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Edges[0x10];                                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.BotObjectiveGraphNode.Edges
		unsigned char                                              NodeLocation[0xC];                                       // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.BotObjectiveGraphNode.NodeLocation
		bool                                                       bIsTeleportLocation : 1;                                 // 0x0000(0x0001) BIT_FIELD NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N3CQ[0x47];                                  // 0x0001(0x0047) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BotObjectiveGraphEdge
	 * Size -> 0x000C
	 */
	struct FBotObjectiveGraphEdge
	{
	public:
		int32_t                                                    EndNodeIndex;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPruned : 1;                                             // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L4N8[0xB];                                   // 0x0001(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BotObjectiveGraphForcedEdge
	 * Size -> 0x0008
	 */
	struct FBotObjectiveGraphForcedEdge
	{
	public:
		int32_t                                                    StartNodeIndex;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndNodeIndex;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z5K4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AILaneInfoManager
	 * Size -> 0x0170
	 */
	struct FAILaneInfoManager
	{
	public:
		unsigned char                                              AISystem[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.AILaneInfoManager.AISystem
		unsigned char                                              ObjectiveGraph[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.AILaneInfoManager.ObjectiveGraph
		unsigned char                                              Lanes[0x150];                                            // 0x0000(0x0150) UNKNOWN PROPERTY: StructProperty OrionGame.AILaneInfoManager.Lanes
		unsigned char                                              UnknownData_LH2W[0x20];                                  // 0x0150(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.LaneInfo
	 * Size -> 0x0070
	 */
	struct FLaneInfo : public FLanePath
	{
	public:
		unsigned char                                              LaneWaves[0x20];                                         // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.LaneInfo.LaneWaves
		unsigned char                                              ActiveTowerLocation[0x18];                               // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.LaneInfo.ActiveTowerLocation
		unsigned char                                              UnknownData_WO66[0x58];                                  // 0x0018(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.LaneMinionWaves
	 * Size -> 0x0010
	 */
	struct FLaneMinionWaves
	{
	public:
		unsigned char                                              Waves[0x10];                                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.LaneMinionWaves.Waves
	};

	/**
	 * ScriptStruct OrionGame.MinionWaveInfo
	 * Size -> 0x0028
	 */
	struct FMinionWaveInfo
	{
	public:
		unsigned char                                              Minions[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.MinionWaveInfo.Minions
		unsigned char                                              UnknownData_RR17[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.HeroHealthMonitor
	 * Size -> 0x0020
	 */
	struct FHeroHealthMonitor
	{
	public:
		unsigned char                                              Teams[0x20];                                             // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.HeroHealthMonitor.Teams
	};

	/**
	 * ScriptStruct OrionGame.TeamHeroHealthRecords
	 * Size -> 0x0010
	 */
	struct FTeamHeroHealthRecords
	{
	public:
		unsigned char                                              Records[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.TeamHeroHealthRecords.Records
	};

	/**
	 * ScriptStruct OrionGame.HeroHealthRecord
	 * Size -> 0x0030
	 */
	struct FHeroHealthRecord
	{
	public:
		unsigned char                                              HeroCharacter[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.HeroHealthRecord.HeroCharacter
		unsigned char                                              PawnOwner[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.HeroHealthRecord.PawnOwner
		unsigned char                                              UnknownData_1YQL[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CoinSpawnInfo
	 * Size -> 0x00B0
	 */
	struct FCoinSpawnInfo
	{
	public:
		unsigned char                                              HomingActor[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.CoinSpawnInfo.HomingActor
		unsigned char                                              CoinSize;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OwnerTeam;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHoming : 1;                                             // 0x0000(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              SourceTags[0x20];                                        // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.CoinSpawnInfo.SourceTags
		unsigned char                                              SourceAssetTags[0x20];                                   // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.CoinSpawnInfo.SourceAssetTags
		unsigned char                                              Transform[0x30];                                         // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.CoinSpawnInfo.Transform
		unsigned char                                              DropLocation[0xC];                                       // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.CoinSpawnInfo.DropLocation
		unsigned char                                              TestLocation[0xC];                                       // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.CoinSpawnInfo.TestLocation
		uint64_t                                                   UniqueCoinID;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpireTime;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZE2[0xAC];                                  // 0x0004(0x00AC) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CoinSizeDetails
	 * Size -> 0x0020
	 */
	struct FCoinSizeDetails
	{
	public:
		unsigned char                                              CoinActorClass[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.CoinSizeDetails.CoinActorClass
		unsigned char                                              CoinActorPool[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.CoinSizeDetails.CoinActorPool
		unsigned char                                              UnknownData_HFBM[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CoinSpawningData
	 * Size -> 0x0098
	 */
	struct FCoinSpawningData
	{
	public:
		unsigned char                                              Owner[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.CoinSpawningData.Owner
		unsigned char                                              OwnerController[0x8];                                    // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.CoinSpawningData.OwnerController
		unsigned char                                              HomingActor[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.CoinSpawningData.HomingActor
		unsigned char                                              UnknownData_EQ3X[0x90];                                  // 0x0008(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAimAssistSettings
	 * Size -> 0x0030
	 */
	struct FOrionAimAssistSettings
	{
	public:
		float                                                      StrengthScalars[0x3];                                    // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonHeroScalar;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PullStrength;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PullMaxRate;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowMinDistance;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowMinStrength;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowMaxDistance;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowMaxStrength;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowDecayTime;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreferredTargetTimeout;                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7L1[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionPlayerInput_ChordMapping
	 * Size -> 0x0040
	 */
	struct FOrionPlayerInput_ChordMapping
	{
	public:
		unsigned char                                              Key1[0x18];                                              // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionPlayerInput_ChordMapping.Key1
		unsigned char                                              Key2[0x18];                                              // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionPlayerInput_ChordMapping.Key2
		class FName                                                ChordAction;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ChordAction_Modified;                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCNB[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionPlayerInput_AdvancedMapping
	 * Size -> 0x0040
	 */
	struct FOrionPlayerInput_AdvancedMapping
	{
	public:
		unsigned char                                              Key[0x18];                                               // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionPlayerInput_AdvancedMapping.Key
		class FName                                                PressAction;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PressAction_Modified;                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HoldAction;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HoldAction_Modified;                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoldTime;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FIGP[0x3C];                                  // 0x0004(0x003C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionPlayerInput_BasicMapping
	 * Size -> 0x0020
	 */
	struct FOrionPlayerInput_BasicMapping
	{
	public:
		unsigned char                                              Key[0x18];                                               // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionPlayerInput_BasicMapping.Key
		class FName                                                Action;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KS42[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionEmoteAbilityMapping
	 * Size -> 0x0018
	 */
	struct FOrionEmoteAbilityMapping
	{
	public:
		unsigned char                                              EmoteType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Ability[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.OrionEmoteAbilityMapping.Ability
		unsigned char                                              KeyBinding;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4EAZ[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AnalogCursorSettings
	 * Size -> 0x0038
	 */
	struct FAnalogCursorSettings
	{
	public:
		unsigned char                                              InputCurve[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.AnalogCursorSettings.InputCurve
		unsigned char                                              ScrollCurve[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.AnalogCursorSettings.ScrollCurve
		float                                                      DefaultSpeed;                                            // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHoverWidgetSize;                                      // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHoverWidgetSize;                                      // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHoverSpeedScale;                                      // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHoverSpeedScale;                                      // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoverSpeedScaleDecayRate;                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeadZone;                                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyAxisScaling : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisplayDebug : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XE2[0x37];                                  // 0x0001(0x0037) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCoinInfo
	 * Size -> 0x0028
	 */
	struct FOrionCoinInfo
	{
	public:
		unsigned char                                              DataRef[0x20];                                           // 0x0000(0x0020) UNKNOWN PROPERTY: AssetClassProperty OrionGame.OrionCoinInfo.DataRef
		int32_t                                                    XPValue;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InitialPoolSize;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLUO[0x24];                                  // 0x0004(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMovementProfileData
	 * Size -> 0x0018
	 */
	struct FOrionMovementProfileData
	{
	public:
		unsigned char                                              ProfileIndex;                                            // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAcceleration;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakingDecelerationWalking;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakingFrictionFactor;                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakingFriction;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroundFriction;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BW7G[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLoginRewardInfo
	 * Size -> 0x0048
	 */
	struct FOrionLoginRewardInfo
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LoginRewardRowData[0x40];                                // 0x0000(0x0040) UNKNOWN PROPERTY: StructProperty OrionGame.OrionLoginRewardInfo.LoginRewardRowData
		unsigned char                                              UnknownData_HB6H[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.LoginRewardData
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FLoginRewardData : public FTableRowBase
	{
	public:
		int32_t                                                    Quantity;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SpecificItem[0x20];                                      // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.LoginRewardData.SpecificItem
		class FString                                              LootTierGroup;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOUL[0x30];                                  // 0x0010(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.StatTranslationData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FStatTranslationData : public FTableRowBase
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Verb;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LegacyName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAccountPVP : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAccountTotal : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHeroPVP : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHeroTotal : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCommunity : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E6FM[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLevelUpRewardInfo
	 * Size -> 0x0098
	 */
	struct FOrionLevelUpRewardInfo
	{
	public:
		unsigned char                                              LevelUpRowData[0x90];                                    // 0x0000(0x0090) UNKNOWN PROPERTY: StructProperty OrionGame.OrionLevelUpRewardInfo.LevelUpRowData
		unsigned char                                              UnknownData_IO1S[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLevelUpData
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FOrionLevelUpData : public FTableRowBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XP;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SpecificItem[0x20];                                      // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.OrionLevelUpData.SpecificItem
		class FString                                              LootTierGroup;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MasterQuantity;                                          // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MasterSpecificItem[0x20];                                // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.OrionLevelUpData.MasterSpecificItem
		class FString                                              MasterLootTierGroup;                                     // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LXJR[0x80];                                  // 0x0010(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TeamXPBonus
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FTeamXPBonus : public FTableRowBase
	{
	public:
		float                                                      BonusForMe;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BonusForTeammate;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Q19[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroSettings
	 * Size -> 0x0002
	 */
	struct FOrionHeroSettings
	{
	public:
		bool                                                       bDebugDisplayShapeFacetBounds : 1;                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDebugDisplayAimTargetPlacement : 1;                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Y7C[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TrackedComponent
	 * Size -> 0x000C
	 */
	struct FTrackedComponent
	{
	public:
		unsigned char                                              UnknownData_PDAD[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SingleBannerEntry
	 * Size -> 0x0040
	 */
	struct FSingleBannerEntry
	{
	public:
		class FString                                              EntryID;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SocketEntry[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.SingleBannerEntry.SocketEntry
		unsigned char                                              Alterations[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.SingleBannerEntry.Alterations
		unsigned char                                              UnknownData_LK0O[0x30];                                  // 0x0010(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionActorPrioritizer
	 * Size -> 0x0008
	 */
	struct FOrionActorPrioritizer
	{
	public:
		unsigned char                                              RelativeTo;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SortOn;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Dimension;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxResults;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H1CT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionBasicDisplayInfo
	 * Size -> 0x0038
	 */
	struct FOrionBasicDisplayInfo
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionBasicDisplayInfo.Icon
		unsigned char                                              UnknownData_RYTO[0x30];                                  // 0x0008(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMenuEntry
	 * Size -> 0x0048
	 */
	struct FOrionMenuEntry
	{
	public:
		class FName                                                MenuId;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                MenuName;                                                // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic
		unsigned char                                              WidgetClass[0x20];                                       // 0x0000(0x0020) UNKNOWN PROPERTY: AssetClassProperty OrionGame.OrionMenuEntry.WidgetClass
		class FName                                                SceneName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZTH[0x40];                                  // 0x0008(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAnalogCursorSettings
	 * Size -> 0x0038
	 */
	struct FOrionAnalogCursorSettings
	{
	public:
		unsigned char                                              InputCurve[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionAnalogCursorSettings.InputCurve
		unsigned char                                              ScrollCurve[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionAnalogCursorSettings.ScrollCurve
		float                                                      DefaultSpeed;                                            // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHoverWidgetSize;                                      // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHoverWidgetSize;                                      // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHoverSpeedScale;                                      // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHoverSpeedScale;                                      // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoverSpeedScaleDecayRate;                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeadZone;                                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyAxisScaling : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisplayDebug : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A72S[0x37];                                  // 0x0001(0x0037) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLoadedMCPItemManager
	 * Size -> 0x0058
	 */
	struct FOrionLoadedMCPItemManager
	{
	public:
		unsigned char                                              NewItem[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionLoadedMCPItemManager.NewItem
		unsigned char                                              UnknownData_ZFT5[0x50];                                  // 0x0008(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLoadedDataCache
	 * Size -> 0x0030
	 */
	struct FOrionLoadedDataCache
	{
	public:
		unsigned char                                              LoadedObjects[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionLoadedDataCache.LoadedObjects
		unsigned char                                              UnknownData_LI9W[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDeveloperMenuCommand
	 * Size -> 0x0020
	 */
	struct FOrionDeveloperMenuCommand
	{
	public:
		class FString                                              Category;                                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Commands[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionDeveloperMenuCommand.Commands
		unsigned char                                              UnknownData_RI2Z[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDeveloperAttributeOverride
	 * Size -> 0x0030
	 */
	struct FOrionDeveloperAttributeOverride
	{
	public:
		class FName                                                CharacterDataName;                                       // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Attribute[0x20];                                         // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionDeveloperAttributeOverride.Attribute
		float                                                      NewValue;                                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6NFM[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDeveloperUIToggles
	 * Size -> 0x0007
	 */
	struct FOrionDeveloperUIToggles
	{
	public:
		bool                                                       bDisableHUD : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisableIndicators : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisableHealthAndStatus : 1;                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisableAbilityWidgets : 1;                              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisableTeamInfo : 1;                                    // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisableEnemyInfo : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDisableMiniMap : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQ78[0x6];                                   // 0x0001(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionObjectLibraryEntry
	 * Size -> 0x0020
	 */
	struct FOrionObjectLibraryEntry
	{
	public:
		unsigned char                                              Library[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionObjectLibraryEntry.Library
		unsigned char                                              ItemType;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LoadedPaths[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionObjectLibraryEntry.LoadedPaths
		unsigned char                                              UnknownData_P9XQ[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionWorldGlobals
	 * Size -> 0x0860
	 */
	struct FOrionWorldGlobals
	{
	public:
		unsigned char                                              ArenaCameras[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionWorldGlobals.ArenaCameras
		unsigned char                                              AvailableGameState[0x8];                                 // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionWorldGlobals.AvailableGameState
		unsigned char                                              AvailablePlayerState[0x8];                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionWorldGlobals.AvailablePlayerState
		unsigned char                                              AvailableAbilitySystemComp[0x8];                         // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionWorldGlobals.AvailableAbilitySystemComp
		unsigned char                                              VisionManager[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionWorldGlobals.VisionManager
		bool                                                       bGameReady : 1;                                          // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bTeamInfoReady : 1;                                      // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bFirstControlledPawn : 1;                                // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bFirstHeroData : 1;                                      // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bAbilitySystemCompReady : 1;                             // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bMatchDataLoaded : 1;                                    // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bReadyToStartMatch : 1;                                  // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bHUDLoaded : 1;                                          // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bPlayerControllerHasState : 1;                           // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              InUseWorldParticleSystems[0x50];                         // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty OrionGame.OrionWorldGlobals.InUseWorldParticleSystems
		unsigned char                                              WorldParticleSystemPool[0x50];                           // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty OrionGame.OrionWorldGlobals.WorldParticleSystemPool
		unsigned char                                              UnknownData_XZSS[0x810];                                 // 0x0050(0x0810) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ParticleSystemPoolElem
	 * Size -> 0x0020
	 */
	struct FParticleSystemPoolElem
	{
	public:
		unsigned char                                              PSComponents[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.ParticleSystemPoolElem.PSComponents
		unsigned char                                              UnknownData_R66S[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAbilityTargetDataFilter
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FOrionAbilityTargetDataFilter : public FGameplayTargetDataFilter
	{
	public:
		unsigned char                                              SelfTeam;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RequiredRelationshipType;                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPD3[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionProjectileSpeed
	 * Size -> 0x0008
	 */
	struct FOrionProjectileSpeed
	{
	public:
		float                                                      Coeffecient;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SpeedType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3VL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeDimension
	 * Size -> 0x0030
	 */
	struct FOrionShapeDimension
	{
	public:
		unsigned char                                              Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ScalableFloatValue[0x20];                                // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeDimension.ScalableFloatValue
		unsigned char                                              ProjectileValue[0x8];                                    // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.OrionShapeDimension.ProjectileValue
		unsigned char                                              UnknownData_DLS9[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeFacetDefinition
	 * Size -> 0x0290
	 */
	struct FOrionShapeFacetDefinition
	{
	public:
		unsigned char                                              Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AngleHorizontalDegrees[0x20];                            // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.AngleHorizontalDegrees
		unsigned char                                              AngleHorizontalDegreesDim[0x30];                         // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.AngleHorizontalDegreesDim
		unsigned char                                              RadiusMin[0x20];                                         // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.RadiusMin
		unsigned char                                              RadiusMinDim[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.RadiusMinDim
		unsigned char                                              RadiusMax[0x20];                                         // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.RadiusMax
		unsigned char                                              RadiusMaxDim[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.RadiusMaxDim
		unsigned char                                              Width[0x20];                                             // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.Width
		unsigned char                                              WidthDim[0x30];                                          // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.WidthDim
		unsigned char                                              LengthMin[0x20];                                         // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.LengthMin
		unsigned char                                              LengthMinDim[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.LengthMinDim
		unsigned char                                              LengthMax[0x20];                                         // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.LengthMax
		unsigned char                                              LengthMaxDim[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.LengthMaxDim
		unsigned char                                              HeightMin[0x20];                                         // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.HeightMin
		unsigned char                                              HeightMinDim[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.HeightMinDim
		unsigned char                                              HeightMax[0x20];                                         // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.HeightMax
		unsigned char                                              HeightMaxDim[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionShapeFacetDefinition.HeightMaxDim
		unsigned char                                              UnknownData_QA24[0x260];                                 // 0x0030(0x0260) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeDefinition
	 * Size -> 0x0010
	 */
	struct FOrionShapeDefinition
	{
	public:
		unsigned char                                              Facets[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionShapeDefinition.Facets
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeFacet
	 * Size -> 0x0010
	 */
	struct FOrionShapeFacet
	{
	public:
		unsigned char                                              UnknownData_DLAQ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTargetingModePlacement
	 * Size -> 0x0290
	 */
	struct FOrionTargetingModePlacement
	{
	public:
		unsigned char                                              Policy;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AimSphereCastRange[0x20];                                // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.AimSphereCastRange
		unsigned char                                              AimSphereCastRangeDim[0x30];                             // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.AimSphereCastRangeDim
		unsigned char                                              AimSphereCastRadius[0x20];                               // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.AimSphereCastRadius
		unsigned char                                              AimSphereCastBlockRadiusDim[0x30];                       // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.AimSphereCastBlockRadiusDim
		unsigned char                                              AimSphereCastOverlapRadiusDim[0x30];                     // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.AimSphereCastOverlapRadiusDim
		unsigned char                                              AimSphereCastProfile[0x8];                               // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.AimSphereCastProfile
		unsigned char                                              AimSphereCastFilter[0x60];                               // 0x0000(0x0060) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.AimSphereCastFilter
		bool                                                       bLockPitchAndRoll : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLockViewToTarget : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCheckOwnerLOSToSweepStart : 1;                          // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              GroundPlacementRangeMin[0x20];                           // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.GroundPlacementRangeMin
		unsigned char                                              GroundPlacementRangeMinDim[0x30];                        // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.GroundPlacementRangeMinDim
		unsigned char                                              GroundPlacementRangeMax[0x20];                           // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.GroundPlacementRangeMax
		unsigned char                                              GroundPlacementRangeMaxDim[0x30];                        // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.GroundPlacementRangeMaxDim
		unsigned char                                              GroundTargetingHeightLimitMin[0x30];                     // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.GroundTargetingHeightLimitMin
		unsigned char                                              GroundTargetingHeightLimitMax[0x30];                     // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.GroundTargetingHeightLimitMax
		unsigned char                                              GroundTargetingMinPitch[0x20];                           // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.GroundTargetingMinPitch
		unsigned char                                              GroundTargetingMaxPitch[0x20];                           // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTargetingModePlacement.GroundTargetingMaxPitch
		bool                                                       bGroundPlacementNormalToGround : 1;                      // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_238B[0x28F];                                 // 0x0001(0x028F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAbilityMontageContainer
	 * Size -> 0x0010
	 */
	struct FOrionAbilityMontageContainer
	{
	public:
		unsigned char                                              Montages[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionAbilityMontageContainer.Montages
	};

	/**
	 * ScriptStruct OrionGame.UICustomDescriptionLookup
	 * Size -> 0x0030
	 */
	struct FUICustomDescriptionLookup
	{
	public:
		class FString                                              Label;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CurveRow[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.UICustomDescriptionLookup.CurveRow
		unsigned char                                              LevelType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpecificColumn;                                          // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Coefficient;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AbsoluteValue : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRQC[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.UIDescriptionLookup
	 * Size -> 0x0020
	 */
	struct FUIDescriptionLookup
	{
	public:
		unsigned char                                              Factor;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CurveRow[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.UIDescriptionLookup.CurveRow
		unsigned char                                              LevelType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQR1[0x1F];                                  // 0x0001(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.PassiveHudRuntimeState
	 * Size -> 0x0020
	 */
	struct FPassiveHudRuntimeState
	{
	public:
		unsigned char                                              Ability[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.PassiveHudRuntimeState.Ability
		int32_t                                                    StackCount;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCountMax;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndTime;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DisplayType;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAZM[0x1F];                                  // 0x0001(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.PassiveHUDInfo
	 * Size -> 0x0180
	 */
	struct FPassiveHUDInfo
	{
	public:
		unsigned char                                              Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DurationStyle;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Query[0x170];                                            // 0x0000(0x0170) UNKNOWN PROPERTY: StructProperty OrionGame.PassiveHUDInfo.Query
		unsigned char                                              UnknownData_H0II[0x10];                                  // 0x0170(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.StackCountRefreshInfo
	 * Size -> 0x0008
	 */
	struct FStackCountRefreshInfo
	{
	public:
		unsigned char                                              AbilitySpec[0x4];                                        // 0x0000(0x0004) UNKNOWN PROPERTY: StructProperty OrionGame.StackCountRefreshInfo.AbilitySpec
		float                                                      ServerExpectedRefreshTime;                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G44F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TrackedActorEntry
	 * Size -> 0x000C
	 */
	struct FTrackedActorEntry
	{
	public:
		unsigned char                                              UnknownData_PBCI[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCostInfo
	 * Size -> 0x00D0
	 */
	struct FOrionCostInfo
	{
	public:
		unsigned char                                              CostGameplayEffect[0x8];                                 // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.OrionCostInfo.CostGameplayEffect
		unsigned char                                              ExplicitValue[0x20];                                     // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionCostInfo.ExplicitValue
		unsigned char                                              StackCost[0xA8];                                         // 0x0000(0x00A8) UNKNOWN PROPERTY: StructProperty OrionGame.OrionCostInfo.StackCost
		unsigned char                                              UnknownData_7ZKH[0x28];                                  // 0x00A8(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionStackCostInfo
	 * Size -> 0x00A8
	 */
	struct FOrionStackCostInfo
	{
	public:
		unsigned char                                              GameplayEffect[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.OrionStackCostInfo.GameplayEffect
		unsigned char                                              InitialStacks[0x20];                                     // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionStackCostInfo.InitialStacks
		unsigned char                                              StacksRequired[0x20];                                    // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionStackCostInfo.StacksRequired
		unsigned char                                              StacksConsumedOnCommit[0x20];                            // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionStackCostInfo.StacksConsumedOnCommit
		unsigned char                                              StackRefreshTime[0x20];                                  // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionStackCostInfo.StackRefreshTime
		unsigned char                                              StacksGrantedOnAbilityLevelUp[0x20];                     // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionStackCostInfo.StacksGrantedOnAbilityLevelUp
		unsigned char                                              UnknownData_CHYM[0x88];                                  // 0x0020(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCooldownInfo
	 * Size -> 0x0060
	 */
	struct FOrionCooldownInfo
	{
	public:
		unsigned char                                              CooldownType;                                            // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CooldownTags[0x20];                                      // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionCooldownInfo.CooldownTags
		unsigned char                                              ExplicitValue[0x20];                                     // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionCooldownInfo.ExplicitValue
		unsigned char                                              SecondaryCooldowns[0x10];                                // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionCooldownInfo.SecondaryCooldowns
		unsigned char                                              CooldownGameplayEffect[0x8];                             // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.OrionCooldownInfo.CooldownGameplayEffect
		unsigned char                                              UnknownData_F67X[0x58];                                  // 0x0008(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionSecondaryCooldownInfo
	 * Size -> 0x0048
	 */
	struct FOrionSecondaryCooldownInfo
	{
	public:
		unsigned char                                              AdditionalAbilityTags[0x20];                             // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionSecondaryCooldownInfo.AdditionalAbilityTags
		unsigned char                                              CooldownType;                                            // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ExplicitValue[0x20];                                     // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionSecondaryCooldownInfo.ExplicitValue
		unsigned char                                              UnknownData_1FHA[0x28];                                  // 0x0020(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAbilityActorInfo
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	struct FOrionAbilityActorInfo : public FGameplayAbilityActorInfo
	{
	public:
		unsigned char                                              OrionChar[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionAbilityActorInfo.OrionChar
		unsigned char                                              UnknownData_WKFM[0x40];                                  // 0x0008(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCharDeathData
	 * Size -> 0x0018
	 */
	struct FOrionCharDeathData
	{
	public:
		unsigned char                                              KilledBy[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionCharDeathData.KilledBy
		unsigned char                                              DamageNormal[0xC];                                       // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionCharDeathData.DamageNormal
		float                                                      DamageMagnitude;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RW3[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDesiredStencilValueEntry
	 * Size -> 0x0008
	 */
	struct FOrionDesiredStencilValueEntry
	{
	public:
		bool                                                       bShouldBeActive : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    DesiredStencilValue;                                     // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D7EJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CameraModeView
	 * Size -> 0x0028
	 */
	struct FCameraModeView
	{
	public:
		unsigned char                                              Location[0xC];                                           // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.CameraModeView.Location
		unsigned char                                              Rotation[0xC];                                           // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.CameraModeView.Rotation
		bool                                                       bIsFirstPerson : 1;                                      // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FieldOfView;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMin;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMax;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z18F[0x24];                                  // 0x0004(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CameraViewOffset
	 * Size -> 0x0040
	 */
	struct FCameraViewOffset
	{
	public:
		unsigned char                                              HighPitchOffset[0xC];                                    // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.CameraViewOffset.HighPitchOffset
		unsigned char                                              MidPitchOffset[0xC];                                     // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.CameraViewOffset.MidPitchOffset
		unsigned char                                              LowPitchOffset[0xC];                                     // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.CameraViewOffset.LowPitchOffset
		unsigned char                                              UnknownData_SJUT[0x34];                                  // 0x000C(0x0034) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.HeroProgression
	 * Size -> 0x0010
	 */
	struct FHeroProgression
	{
	public:
		int32_t                                                    TotalXP;                                                 // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeroXP;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeroRank;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XPToNextLevel;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C0WM[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMcpQuestObjectiveInfo
	 * Size -> 0x0048
	 */
	struct FOrionMcpQuestObjectiveInfo
	{
	public:
		class FName                                                BackendName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ObjectiveEvaluationType;                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ObjectiveTrackType;                                      // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ObjectiveStatHandle[0x10];                               // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionMcpQuestObjectiveInfo.ObjectiveStatHandle
		class FText                                                Description;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Stage;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHidden : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KOI6[0x47];                                  // 0x0001(0x0047) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionGameQuestReward
	 * Size -> 0x0020
	 */
	struct FOrionGameQuestReward
	{
	public:
		unsigned char                                              HudNotification[0x8];                                    // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionGameQuestReward.HudNotification
		unsigned char                                              RewardStatHandle[0x10];                                  // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionGameQuestReward.RewardStatHandle
		int32_t                                                    RewardStatCount;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TN9N[0x1C];                                  // 0x0004(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionItemQuantityPair
	 * Size -> 0x0028
	 */
	struct FOrionItemQuantityPair
	{
	public:
		unsigned char                                              ItemDefinition[0x20];                                    // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.OrionItemQuantityPair.ItemDefinition
		int32_t                                                    Quantity;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_040U[0x24];                                  // 0x0004(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionQuestPrerequisites
	 * Size -> 0x0018
	 */
	struct FOrionQuestPrerequisites
	{
	public:
		unsigned char                                              ObjectiveStatHandle[0x10];                               // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionQuestPrerequisites.ObjectiveStatHandle
		int32_t                                                    Count;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EvaluationOp;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3NLY[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionObjectiveItem
	 * Size -> 0x0018
	 */
	struct FOrionObjectiveItem
	{
	public:
		class FName                                                ObjectiveBackendName;                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StatName;                                                // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentValue;                                            // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompleted : 1;                                          // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJOJ[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMcpInventoryView
	 * Size -> 0x00C0
	 */
	struct FOrionMcpInventoryView
	{
	public:
		unsigned char                                              Banners[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionMcpInventoryView.Banners
		unsigned char                                              BannerAlterations[0x10];                                 // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionMcpInventoryView.BannerAlterations
		unsigned char                                              Cards[0x10];                                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionMcpInventoryView.Cards
		unsigned char                                              CardPacks[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionMcpInventoryView.CardPacks
		unsigned char                                              Components[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionMcpInventoryView.Components
		unsigned char                                              Decks[0x10];                                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionMcpInventoryView.Decks
		unsigned char                                              Emotes[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionMcpInventoryView.Emotes
		unsigned char                                              Glyphs[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionMcpInventoryView.Glyphs
		unsigned char                                              Heroes[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionMcpInventoryView.Heroes
		unsigned char                                              Quests[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionMcpInventoryView.Quests
		unsigned char                                              Skins[0x10];                                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionMcpInventoryView.Skins
		unsigned char                                              ActiveBannerStruct[0x10];                                // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionMcpInventoryView.ActiveBannerStruct
		unsigned char                                              UnknownData_1Z7N[0xB0];                                  // 0x0010(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionStyleEntry
	 * Size -> 0x0028
	 */
	struct FOrionStyleEntry
	{
	public:
		class FName                                                AssetName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Asset[0x20];                                             // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.OrionStyleEntry.Asset
		unsigned char                                              UnknownData_VOGH[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCardUnlockEntry
	 * Size -> 0x0060
	 */
	struct FOrionCardUnlockEntry
	{
	public:
		class FName                                                Token;                                                   // 0x0000(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TokenPtr[0x20];                                          // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.OrionCardUnlockEntry.TokenPtr
		class FText                                                TokenName;                                               // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                TokenDescription;                                        // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bClearAfterMatch : 1;                                    // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTQ3[0x5F];                                  // 0x0001(0x005F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionRarityDisplayInfo
	 * Size -> 0x0030
	 */
	struct FOrionRarityDisplayInfo
	{
	public:
		class FText                                                RarityName;                                              // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              RarityIcon[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionRarityDisplayInfo.RarityIcon
		unsigned char                                              RarityColor[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionRarityDisplayInfo.RarityColor
		unsigned char                                              UnknownData_649Q[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAffinityDisplayInfo
	 * Size -> 0x0050
	 */
	struct FOrionAffinityDisplayInfo
	{
	public:
		class FText                                                AffinityName;                                            // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              AffinityMaterial[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionAffinityDisplayInfo.AffinityMaterial
		unsigned char                                              AffinityColor[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAffinityDisplayInfo.AffinityColor
		unsigned char                                              AccentColor[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAffinityDisplayInfo.AccentColor
		unsigned char                                              BackgroundColor[0x10];                                   // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAffinityDisplayInfo.BackgroundColor
		unsigned char                                              UnknownData_HJOR[0x40];                                  // 0x0010(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDeckBuilder_ConstantText
	 * Size -> 0x0020
	 */
	struct FOrionDeckBuilder_ConstantText
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Value;                                                   // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R22J[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionStatFilterGroup
	 * Size -> 0x0028
	 */
	struct FOrionStatFilterGroup
	{
	public:
		unsigned char                                              Children[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionStatFilterGroup.Children
		class FText                                                CategoryName;                                            // 0x0000(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LCO[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionStatFilterEntry
	 * Size -> 0x00E0
	 */
	struct FOrionStatFilterEntry
	{
	public:
		unsigned char                                              State;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Details[0xB8];                                           // 0x0000(0x00B8) UNKNOWN PROPERTY: StructProperty OrionGame.OrionStatFilterEntry.Details
		unsigned char                                              Recommendation;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                HeroName;                                                // 0x0000(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8JY[0xC8];                                  // 0x0018(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AICardSelectionAction
	 * Size -> 0x0010
	 */
	struct FAICardSelectionAction
	{
	public:
		unsigned char                                              CardItem[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.AICardSelectionAction.CardItem
		unsigned char                                              Slot;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalCostSoFar;                                          // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R5S8[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AIScriptedBehaviorInstanceWrapper
	 * Size -> 0x0008
	 */
	struct FAIScriptedBehaviorInstanceWrapper
	{
	public:
		unsigned char                                              ScriptedBehavior[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.AIScriptedBehaviorInstanceWrapper.ScriptedBehavior
	};

	/**
	 * ScriptStruct OrionGame.ObjectiveGraphDebugNodeOverride
	 * Size -> 0x0001
	 */
	struct FObjectiveGraphDebugNodeOverride
	{
	public:
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.FakeObjectiveGraphMinionWave
	 * Size -> 0x0028
	 */
	struct FFakeObjectiveGraphMinionWave
	{
	public:
		unsigned char                                              Location[0xC];                                           // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.FakeObjectiveGraphMinionWave.Location
		unsigned char                                              MinionLocations[0x10];                                   // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.FakeObjectiveGraphMinionWave.MinionLocations
		uint32_t                                                   MinionsCount;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuperMinions : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QF3M[0x27];                                  // 0x0001(0x0027) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.FakeObjectiveGraphCharacter
	 * Size -> 0x0014
	 */
	struct FFakeObjectiveGraphCharacter
	{
	public:
		unsigned char                                              Location[0xC];                                           // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.FakeObjectiveGraphCharacter.Location
		int32_t                                                    Level;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZYR[0x13];                                  // 0x0001(0x0013) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SimpleAchievementEarnedNotification
	 * Size -> 0x0008
	 */
	struct FSimpleAchievementEarnedNotification
	{
	public:
		int32_t                                                    EarnedAchievementIndex;                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstTimeEarned : 1;                                    // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RVB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.DailyRewardsRetrievedNotification
	 * Size -> 0x0028
	 */
	struct FDailyRewardsRetrievedNotification
	{
	public:
		unsigned char                                              ChronologicalRewards[0x10];                              // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.DailyRewardsRetrievedNotification.ChronologicalRewards
		unsigned char                                              NextMajorReward[0x18];                                   // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.DailyRewardsRetrievedNotification.NextMajorReward
		unsigned char                                              UnknownData_2XSZ[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.FutureDailyRewardDesc
	 * Size -> 0x0018
	 */
	struct FFutureDailyRewardDesc
	{
	public:
		int32_t                                                    Day;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemDefinitionName;                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MU28[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.FriendCodeIssuedNotification
	 * Size -> 0x0020
	 */
	struct FFriendCodeIssuedNotification
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CodeType;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OY9V[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SaveDeckNotification
	 * Size -> 0x0020
	 */
	struct FSaveDeckNotification
	{
	public:
		class FString                                              DeckId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeckName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAYY[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CraftFinalizeNotification
	 * Size -> 0x0010
	 */
	struct FCraftFinalizeNotification
	{
	public:
		class FString                                              NewCardGuid;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.RefineNotification
	 * Size -> 0x0018
	 */
	struct FRefineNotification
	{
	public:
		bool                                                       bRefineSuccessful : 1;                                   // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    LastX;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastY;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewX;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewY;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumRefinements;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O3G6[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CraftNotification
	 * Size -> 0x0018
	 */
	struct FCraftNotification
	{
	public:
		bool                                                       bCraftSuccessful : 1;                                    // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bJustDiscovered : 1;                                     // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              NewCardGuid;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5UHH[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLootNotification
	 * Size -> 0x0048
	 */
	struct FOrionLootNotification
	{
	public:
		class FString                                              LootSource;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LootSourceInstance;                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LootGranted[0x20];                                       // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.OrionLootNotification.LootGranted
		int32_t                                                    Level;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZ2S[0x44];                                  // 0x0004(0x0044) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.DailyRewardsUpdateNotification
	 * Size -> 0x0010
	 */
	struct FDailyRewardsUpdateNotification
	{
	public:
		unsigned char                                              DailyRewards[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.DailyRewardsUpdateNotification.DailyRewards
	};

	/**
	 * ScriptStruct OrionGame.HeroLevelUpNotification
	 * Size -> 0x0028
	 */
	struct FHeroLevelUpNotification
	{
	public:
		class FString                                              HeroId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroType;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OldLevel;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFXB[0x24];                                  // 0x0004(0x0024) MISSED OFFSET (PADDING)
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
	 * ScriptStruct OrionGame.AccountLevelUpNotification
	 * Size -> 0x0008
	 */
	struct FAccountLevelUpNotification
	{
	public:
		int32_t                                                    OldLevel;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WURM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MatchCompleteNotification
	 * Size -> 0x0058
	 */
	struct FMatchCompleteNotification
	{
	public:
		float                                                      GameDurationInMinutes;                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseXP;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VictoryXP;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FirstGameXP;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DoubleXPWeekendXP;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamOwnershipXPBonus[0x10];                              // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.MatchCompleteNotification.TeamOwnershipXPBonus
		float                                                      AccountBoostXP;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeroBoostXP;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AccountTotalXP;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeroTotalXP;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseTimeCurrency;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VictoryTimeCurrency;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeCurrencyBoost;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DoubleCurrencyWeekendCurrency;                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeCurrencyTotal;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Dampener;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDidAbandonMatch : 1;                                    // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWasBannedForMatchAbandon : 1;                           // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MX18[0x57];                                  // 0x0001(0x0057) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionPlaylistInfo
	 * Size -> 0x0048
	 */
	struct FOrionPlaylistInfo
	{
	public:
		int32_t                                                    PlaylistId;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxTeams;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamSize;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayers;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRanked : 1;                                             // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSupportsCustomMMKey : 1;                                // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAwardXP : 1;                                            // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowRejoin : 1;                                        // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowSurrender : 1;                                     // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasFriendlyBots : 1;                                    // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasEnemyBots : 1;                                       // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              LobbyMap;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameMap;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IWDS[0x38];                                  // 0x0010(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBParams
	 * Size -> 0x00A8
	 */
	struct FOrionTBParams
	{
	public:
		unsigned char                                              UserId[0x18];                                            // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBParams.UserId
		int32_t                                                    ControllerId;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlaylistId;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomKey;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FriendlyBotDifficulty;                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EnemyBotDifficulty;                                      // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FriendlyBotHeroList;                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EnemyBotHeroList;                                        // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PlayerChoices[0x50];                                     // 0x0000(0x0050) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBParams.PlayerChoices
		unsigned char                                              UnknownData_1WWR[0x58];                                  // 0x0050(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBTeamInvite
	 * Size -> 0x0110
	 */
	struct FOrionTBTeamInvite
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RequestedChoices[0x50];                                  // 0x0000(0x0050) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBTeamInvite.RequestedChoices
		unsigned char                                              TeamInfo[0xA8];                                          // 0x0000(0x00A8) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBTeamInvite.TeamInfo
		unsigned char                                              UnknownData_ON2G[0x68];                                  // 0x00A8(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMatchConfig
	 * Size -> 0x0040
	 */
	struct FOrionMatchConfig
	{
	public:
		int32_t                                                    PlaylistId;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamElo;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomKey;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BotConfig[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: StructProperty OrionGame.OrionMatchConfig.BotConfig
		unsigned char                                              UnknownData_XKHH[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMatchBotConfig
	 * Size -> 0x0028
	 */
	struct FOrionMatchBotConfig
	{
	public:
		unsigned char                                              FriendlyBotDifficulty;                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EnemyBotDifficulty;                                      // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FriendlyBotHeroList;                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EnemyBotHeroList;                                        // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_47AX[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SkillRatingTimeRestriction
	 * Size -> 0x0008
	 */
	struct FSkillRatingTimeRestriction
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxRatingDelta;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PH0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TBPlayerFilterDuration
	 * Size -> 0x0008
	 */
	struct FTBPlayerFilterDuration
	{
	public:
		unsigned char                                              Reason;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Duration;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YE6G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TBFilteredPlayer
	 * Size -> 0x0020
	 */
	struct FTBFilteredPlayer
	{
	public:
		unsigned char                                              PlayerId[0x18];                                          // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.TBFilteredPlayer.PlayerId
		unsigned char                                              Reason;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeRemaining;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PS5G[0x1C];                                  // 0x0004(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamComp
	 * Size -> 0x0018
	 */
	struct FOrionTeamComp
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Roles[0x10];                                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionTeamComp.Roles
		unsigned char                                              UnknownData_NJ6N[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamCompDebugData
	 * Size -> 0x0018
	 */
	struct FOrionTeamCompDebugData
	{
	public:
		float                                                      TeamCompScore;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Members[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionTeamCompDebugData.Members
		unsigned char                                              UnknownData_6XYX[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamCompDebugSlot
	 * Size -> 0x0020
	 */
	struct FOrionTeamCompDebugSlot
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Status;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SelectedRole;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelectedRoleWeight;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJ2P[0x1C];                                  // 0x0004(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionPartyRepState
	 * Size -> 0xFFFFFFF0 (FullSize[0x0000] - InheritedSize[0x0010])
	 */
	struct FOrionPartyRepState : public FPartyState
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R04H[0xFFFFFFF0];                            // 0x0010(0xFFFFFFF0) Fix size for supers
	};

	/**
	 * ScriptStruct OrionGame.MatchmakingParams
	 * Size -> 0x0098
	 */
	struct FMatchmakingParams
	{
	public:
		int32_t                                                    ControllerId;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PartySize;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RegionId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumAttempts;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CreateGameChance;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RerunSearchDelay;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RerunNoCreateDelay;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NextResultDelay;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchFailureDelay;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Flags;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MatchConfig[0x40];                                       // 0x0000(0x0040) UNKNOWN PROPERTY: StructProperty OrionGame.MatchmakingParams.MatchConfig
		unsigned char                                              UnknownData_4SLB[0x58];                                  // 0x0040(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MMRWaitTime
	 * Size -> 0x0010
	 */
	struct FMMRWaitTime
	{
	public:
		int32_t                                                    MMR;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WaitTime[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.MMRWaitTime.WaitTime
		unsigned char                                              UnknownData_RUXV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMMRExpansion
	 * Size -> 0x0030
	 */
	struct FOrionMMRExpansion
	{
	public:
		int32_t                                                    PlaylistId;                                              // 0x0000(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Steps[0x10];                                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionMMRExpansion.Steps
		float                                                      X1;                                                      // 0x0000(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      X2;                                                      // 0x0000(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      X3;                                                      // 0x0000(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      X4;                                                      // 0x0000(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      X5;                                                      // 0x0000(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPHV[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMMRStep
	 * Size -> 0x000C
	 */
	struct FOrionMMRStep
	{
	public:
		int32_t                                                    DeltaBase;                                               // 0x0000(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxDelta;                                                // 0x0000(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxExpansionTime;                                        // 0x0000(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZ7I[0x8];                                   // 0x0004(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLobbyBuilderParams
	 * Size -> 0x0058
	 */
	struct FOrionLobbyBuilderParams
	{
	public:
		unsigned char                                              UserId[0x18];                                            // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionLobbyBuilderParams.UserId
		int32_t                                                    ControllerId;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlaylistId;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomKey;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BotConfig[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: StructProperty OrionGame.OrionLobbyBuilderParams.BotConfig
		unsigned char                                              UnknownData_YLL3[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionPersistentPartyRepState
	 * Size -> 0x0080
	 */
	struct FOrionPersistentPartyRepState : public FOrionPartyRepState
	{
	public:
		unsigned char                                              PartyProgression;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MatchmakingType;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchmakingCustomKey;                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MatchmakingState;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPlayersNeeded;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MatchmakingResult;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AcceptMatchPlayers[0x10];                                // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionPersistentPartyRepState.AcceptMatchPlayers
		unsigned char                                              PartyMembersSnapshot[0x10];                              // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionPersistentPartyRepState.PartyMembersSnapshot
		class FString                                              LockInHeroResponses;                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     MatchmakingEstWaitTime;                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T5SX[0x78];                                  // 0x0008(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLockHeroConfirmationWrapper
	 * Size -> 0x0018
	 */
	struct FOrionLockHeroConfirmationWrapper
	{
	public:
		int32_t                                                    ResponseId;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Confirmations[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionLockHeroConfirmationWrapper.Confirmations
		unsigned char                                              UnknownData_VK2O[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLockHeroConfirmation
	 * Size -> 0x0030
	 */
	struct FOrionLockHeroConfirmation
	{
	public:
		unsigned char                                              MemberId[0x18];                                          // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionLockHeroConfirmation.MemberId
		class FString                                              HeroName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuccess : 1;                                            // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VMW2[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GiftMessage
	 * Size -> 0x0030
	 */
	struct FGiftMessage
	{
	public:
		class FString                                              GiftCode;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SenderName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ISXM[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ExchangeAccessParams
	 * Size -> 0x0020
	 */
	struct FExchangeAccessParams
	{
	public:
		class FString                                              EntitlementId;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VendorReceipt;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJ33[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroDialogAudioControl
	 * Size -> 0x0080
	 */
	struct FOrionHeroDialogAudioControl
	{
	public:
		unsigned char                                              DialogEventIDS[0x10];                                    // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionHeroDialogAudioControl.DialogEventIDS
		unsigned char                                              DefaultTriggerType;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TagsToHandle[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionHeroDialogAudioControl.TagsToHandle
		unsigned char                                              UnknownData_MSFY[0x70];                                  // 0x0010(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroDialogCueEntry
	 * Size -> 0x0030
	 */
	struct FOrionHeroDialogCueEntry
	{
	public:
		class FString                                              DialogEventID;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TagIdent[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroDialogCueEntry.TagIdent
		unsigned char                                              SoundCue[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHeroDialogCueEntry.SoundCue
		float                                                      MaxPlayFrequency;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EventTriggerType;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZT09[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCharReplicatedStatus
	 * Size -> 0x0008
	 */
	struct FOrionCharReplicatedStatus
	{
	public:
		unsigned char                                              Status;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndTime;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5K0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLandingEffectEntry
	 * Size -> 0x0010
	 */
	struct FOrionLandingEffectEntry
	{
	public:
		float                                                      MinImpactSpeed;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              GCToTrigger[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionLandingEffectEntry.GCToTrigger
		unsigned char                                              UnknownData_TWOF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionReplicatedAcceleration
	 * Size -> 0x0002
	 */
	struct FOrionReplicatedAcceleration
	{
	public:
		unsigned char                                              AccelAngle;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AccelMagnitude;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JNAG[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTagTranslate
	 * Size -> 0x0010
	 */
	struct FOrionTagTranslate
	{
	public:
		unsigned char                                              TagID[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTagTranslate.TagID
		unsigned char                                              TranslatedTagID[0x8];                                    // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTagTranslate.TranslatedTagID
		unsigned char                                              UnknownData_8PY1[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.Orion2DReticle
	 * Size -> 0x0018
	 */
	struct FOrion2DReticle
	{
	public:
		unsigned char                                              Material[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.Orion2DReticle.Material
		unsigned char                                              ScreenSize[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.Orion2DReticle.ScreenSize
		unsigned char                                              ScreenOffset[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.Orion2DReticle.ScreenOffset
		unsigned char                                              UnknownData_BEPU[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.Orion2DReticleSourceData
	 * Size -> 0x0018
	 */
	struct FOrion2DReticleSourceData
	{
	public:
		unsigned char                                              Material[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.Orion2DReticleSourceData.Material
		unsigned char                                              ScreenSize[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.Orion2DReticleSourceData.ScreenSize
		unsigned char                                              ScreenOffset[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.Orion2DReticleSourceData.ScreenOffset
		unsigned char                                              UnknownData_NLHR[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.NavFieldLane
	 * Size -> 0x0078
	 */
	struct FNavFieldLane
	{
	public:
		unsigned char                                              KeyLocations[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.NavFieldLane.KeyLocations
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SHTS[0x77];                                  // 0x0001(0x0077) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.NavFieldHeightTile
	 * Size -> 0x0020
	 */
	struct FNavFieldHeightTile
	{
	public:
		int16_t                                                    TileX;                                                   // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    TileY;                                                   // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinZ;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxZ;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HeightData[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.NavFieldHeightTile.HeightData
		unsigned char                                              UnknownData_ZTZB[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.NavFieldDirectionTile
	 * Size -> 0x0018
	 */
	struct FNavFieldDirectionTile
	{
	public:
		int16_t                                                    TileX;                                                   // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    TileY;                                                   // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    RedLaneIdx;                                              // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    BlueLaneIdx;                                             // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FieldData[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.NavFieldDirectionTile.FieldData
		unsigned char                                              UnknownData_4194[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamCommMessage
	 * Size -> 0x0030
	 */
	struct FOrionTeamCommMessage
	{
	public:
		unsigned char                                              Position[0xC];                                           // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTeamCommMessage.Position
		unsigned char                                              MinimapLocation;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SenderID[0x18];                                          // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTeamCommMessage.SenderID
		unsigned char                                              TeamCommData[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionTeamCommMessage.TeamCommData
		unsigned char                                              UnknownData_80ML[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionQuestObjectiveData
	 * Size -> 0x0040
	 */
	struct FOrionQuestObjectiveData
	{
	public:
		class FName                                                ObjectiveName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ObjectiveText;                                           // 0x0000(0x0018) NativeAccessSpecifierPublic
		bool                                                       bIsCompleted : 1;                                        // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CountMax;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              QuestItem[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.OrionQuestObjectiveData.QuestItem
		unsigned char                                              PlayerState[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.OrionQuestObjectiveData.PlayerState
		unsigned char                                              UnknownData_7UHI[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TeamCommCommonData
	 * Size -> 0x0048
	 */
	struct FTeamCommCommonData
	{
	public:
		class FText                                                OptionLabel;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                ChatMessage;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              SpawnType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              GameEventWidgetClass[0x8];                               // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.TeamCommCommonData.GameEventWidgetClass
		class FName                                                GameEvenMessageType;                                     // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2A00[0x40];                                  // 0x0008(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDamageNumberStyleData
	 * Size -> 0x0188
	 */
	struct FOrionDamageNumberStyleData
	{
	public:
		unsigned char                                              DamageNumberType;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              DamageNumberFont[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDamageNumberStyleData.DamageNumberFont
		unsigned char                                              IsPlayingOutro[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDamageNumberStyleData.IsPlayingOutro
		unsigned char                                              DistanceAlongPathOverTime[0x8];                          // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDamageNumberStyleData.DistanceAlongPathOverTime
		unsigned char                                              ScaleOverTimeCurve[0x8];                                 // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDamageNumberStyleData.ScaleOverTimeCurve
		unsigned char                                              ScaleOverMagnitudeCurve[0x8];                            // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDamageNumberStyleData.ScaleOverMagnitudeCurve
		unsigned char                                              ColorOverTimeCurve[0x8];                                 // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDamageNumberStyleData.ColorOverTimeCurve
		unsigned char                                              GlowColorOverTimeCurve[0x8];                             // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDamageNumberStyleData.GlowColorOverTimeCurve
		unsigned char                                              MotionVector[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionDamageNumberStyleData.MotionVector
		unsigned char                                              MotionVectorRandMagnitude[0x8];                          // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionDamageNumberStyleData.MotionVectorRandMagnitude
		unsigned char                                              PrefixImage[0x90];                                       // 0x0000(0x0090) UNKNOWN PROPERTY: StructProperty OrionGame.OrionDamageNumberStyleData.PrefixImage
		unsigned char                                              SuffixImage[0x90];                                       // 0x0000(0x0090) UNKNOWN PROPERTY: StructProperty OrionGame.OrionDamageNumberStyleData.SuffixImage
		unsigned char                                              PortraitMaterial[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDamageNumberStyleData.PortraitMaterial
		float                                                      GlowSize;                                                // 0x0000(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AggregationAgeSeconds;                                   // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTetheredToActor : 1;                                    // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bDrawIfTarget : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bDrawIfInstigator : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bDrawIfOnSameTeam : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bAlwaysDraw : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GR6Y[0x187];                                 // 0x0001(0x0187) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDamageNumberInfo
	 * Size -> 0x0120
	 */
	struct FOrionDamageNumberInfo
	{
	public:
		unsigned char                                              DamagedActor[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.OrionDamageNumberInfo.DamagedActor
		unsigned char                                              Instigator[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.OrionDamageNumberInfo.Instigator
		unsigned char                                              EffectCauser[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.OrionDamageNumberInfo.EffectCauser
		unsigned char                                              DamageLocation[0xC];                                     // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionDamageNumberInfo.DamageLocation
		unsigned char                                              DesiredOffset[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionDamageNumberInfo.DesiredOffset
		float                                                      DamageAmount;                                            // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DamageNumberType;                                        // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCritical : 1;                                           // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLocalPlayerIsInstigator : 1;                            // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLocalPlayerIsTarget : 1;                                // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              DebugString;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                CachedText;                                              // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsOnLocalTeam : 1;                                      // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              PortraitMID[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDamageNumberInfo.PortraitMID
		unsigned char                                              PortraitBrush[0x90];                                     // 0x0000(0x0090) UNKNOWN PROPERTY: StructProperty OrionGame.OrionDamageNumberInfo.PortraitBrush
		float                                                      TimeRemaining;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TotalDuration;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AT1T[0x11C];                                 // 0x0004(0x011C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionSpectatorHUDTeamInfo
	 * Size -> 0x0002
	 */
	struct FOrionSpectatorHUDTeamInfo : public FUIUpdateHelperStruct
	{
	public:
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GYOK[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.FrameStatData
	 * Size -> 0x0040
	 */
	struct FFrameStatData
	{
	public:
		unsigned char                                              FrameTimeStamps[0x10];                                   // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.FrameStatData.FrameTimeStamps
		unsigned char                                              FrameDurations[0x10];                                    // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.FrameStatData.FrameDurations
		unsigned char                                              FrameGameTimes[0x10];                                    // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.FrameStatData.FrameGameTimes
		unsigned char                                              FrameRenderTimes[0x10];                                  // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.FrameStatData.FrameRenderTimes
		unsigned char                                              UnknownData_IK11[0x30];                                  // 0x0010(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BotObjectiveSlot
	 * Size -> 0x0048
	 */
	struct FBotObjectiveSlot
	{
	public:
		unsigned char                                              Agents[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.BotObjectiveSlot.Agents
		unsigned char                                              UnknownData_PGRH[0x38];                                  // 0x0010(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BotObjectiveAgent
	 * Size -> 0x0010
	 */
	struct FBotObjectiveAgent
	{
	public:
		unsigned char                                              BotController[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.BotObjectiveAgent.BotController
		unsigned char                                              PlayerController[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.BotObjectiveAgent.PlayerController
		unsigned char                                              UnknownData_W7E3[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionWellCues
	 * Size -> 0x0038
	 */
	struct FOrionWellCues
	{
	public:
		unsigned char                                              Geyser[0x8];                                             // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionWellCues.Geyser
		unsigned char                                              Active[0x8];                                             // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionWellCues.Active
		unsigned char                                              DeadZone[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionWellCues.DeadZone
		unsigned char                                              RanDry[0x8];                                             // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionWellCues.RanDry
		unsigned char                                              RigPlaced[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionWellCues.RigPlaced
		unsigned char                                              PlacingRig[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionWellCues.PlacingRig
		unsigned char                                              CollectingFromRig[0x8];                                  // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionWellCues.CollectingFromRig
		unsigned char                                              UnknownData_JJIO[0x30];                                  // 0x0008(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.WellAIInfo
	 * Size -> 0x0040
	 */
	struct FWellAIInfo
	{
	public:
		unsigned char                                              Well[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.WellAIInfo.Well
		unsigned char                                              WellObjectives[0x10];                                    // 0x0000(0x0010) UNKNOWN PROPERTY: ObjectProperty OrionGame.WellAIInfo.WellObjectives
		unsigned char                                              UnknownData_SEO8[0x30];                                  // 0x0010(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAILane
	 * Size -> 0x0048
	 */
	struct FOrionAILane
	{
	public:
		unsigned char                                              UnknownData_HO88[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BotTeamObjectives
	 * Size -> 0x0020
	 */
	struct FBotTeamObjectives
	{
	public:
		unsigned char                                              Teams[0x20];                                             // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.BotTeamObjectives.Teams
	};

	/**
	 * ScriptStruct OrionGame.BotObjectivesArray
	 * Size -> 0x0010
	 */
	struct FBotObjectivesArray
	{
	public:
		unsigned char                                              Objectives[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.BotObjectivesArray.Objectives
	};

	/**
	 * ScriptStruct OrionGame.HeroDataCollection
	 * Size -> 0x0010
	 */
	struct FHeroDataCollection
	{
	public:
		unsigned char                                              Collection[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.HeroDataCollection.Collection
	};

	/**
	 * ScriptStruct OrionGame.FrontEndCamera
	 * Size -> 0x0028
	 */
	struct FFrontEndCamera
	{
	public:
		class FName                                                SceneName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SceneCamera[0x1C];                                       // 0x0000(0x001C) UNKNOWN PROPERTY: LazyObjectProperty OrionGame.FrontEndCamera.SceneCamera
		unsigned char                                              UnknownData_SFC3[0xC];                                   // 0x001C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.FunctionalTestDesc
	 * Size -> 0x0018
	 */
	struct FFunctionalTestDesc
	{
	public:
		unsigned char                                              FTestActor[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.FunctionalTestDesc.FTestActor
		unsigned char                                              Phases[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.FunctionalTestDesc.Phases
		unsigned char                                              UnknownData_WKLW[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SurrenderBallot
	 * Size -> 0x0020
	 */
	struct FSurrenderBallot
	{
	public:
		unsigned char                                              NetID[0x18];                                             // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.SurrenderBallot.NetID
		unsigned char                                              Vote;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7TI[0x1F];                                  // 0x0001(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TeamSetupData
	 * Size -> 0x0020
	 */
	struct FTeamSetupData
	{
	public:
		unsigned char                                              TeamIndex;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerTeam : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayers;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DefaultTeamClass[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.TeamSetupData.DefaultTeamClass
		unsigned char                                              UnknownData_E5FN[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.VictoryPlayerTracker
	 * Size -> 0x0010
	 */
	struct FVictoryPlayerTracker
	{
	public:
		unsigned char                                              PlayerState[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.VictoryPlayerTracker.PlayerState
		unsigned char                                              SpawnedVictoryChar[0x8];                                 // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.VictoryPlayerTracker.SpawnedVictoryChar
		unsigned char                                              UnknownData_40PT[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionXPAssisterData
	 * Size -> 0x000C
	 */
	struct FOrionXPAssisterData
	{
	public:
		unsigned char                                              UnknownData_EOIY[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AxisKeyOverride
	 * Size -> 0x0040
	 */
	struct FAxisKeyOverride
	{
	public:
		class FName                                                BindingName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OldKey[0x18];                                            // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.AxisKeyOverride.OldKey
		unsigned char                                              NewKey[0x18];                                            // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.AxisKeyOverride.NewKey
		unsigned char                                              UnknownData_G0OP[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ActionKeyOverride
	 * Size -> 0x0048
	 */
	struct FActionKeyOverride
	{
	public:
		class FName                                                BindingName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OldKey[0x20];                                            // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.ActionKeyOverride.OldKey
		unsigned char                                              NewKey[0x20];                                            // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.ActionKeyOverride.NewKey
		unsigned char                                              UnknownData_TQQA[0x28];                                  // 0x0020(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GraphicsCardEntry
	 * Size -> 0x0030
	 */
	struct FGraphicsCardEntry
	{
	public:
		uint32_t                                                   VendorID;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DeviceID;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BenchmarkMultiplier;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AdapterDisplayName;                                      // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RequiredSourceName;                                      // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M88Q[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GraphicsCardVendorEntry
	 * Size -> 0x0068
	 */
	struct FGraphicsCardVendorEntry
	{
	public:
		uint32_t                                                   VendorID;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VendorDisplayName;                                       // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TB3T[0x58];                                  // 0x0010(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ReadyCheckDisplayData
	 * Size -> 0x0020
	 */
	struct FReadyCheckDisplayData
	{
	public:
		unsigned char                                              CheckImage[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.ReadyCheckDisplayData.CheckImage
		unsigned char                                              UnknownData_5OV2[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MOTDEntry
	 * Size -> 0x0040
	 */
	struct FMOTDEntry
	{
	public:
		class FString                                              Culture;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Body;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Date;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0J3M[0x30];                                  // 0x0010(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.PendingNewAura
	 * Size -> 0x0060
	 */
	struct FPendingNewAura
	{
	public:
		unsigned char                                              Handle[0x4];                                             // 0x0000(0x0004) UNKNOWN PROPERTY: StructProperty OrionGame.PendingNewAura.Handle
		unsigned char                                              Source[0x8];                                             // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.PendingNewAura.Source
		unsigned char                                              OwningAbility[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.PendingNewAura.OwningAbility
		unsigned char                                              AuraSpec[0x48];                                          // 0x0000(0x0048) UNKNOWN PROPERTY: StructProperty OrionGame.PendingNewAura.AuraSpec
		unsigned char                                              UnknownData_V17T[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ActiveAuraSpec
	 * Size -> 0x0048
	 */
	struct FActiveAuraSpec
	{
	public:
		unsigned char                                              FilterAndEffectsContainers[0x20];                        // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.ActiveAuraSpec.FilterAndEffectsContainers
		unsigned char                                              PeriodicFilterAndEffectsContainers[0x20];                // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.ActiveAuraSpec.PeriodicFilterAndEffectsContainers
		float                                                      Radius;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Period;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HB94[0x44];                                  // 0x0004(0x0044) MISSED OFFSET (PADDING)
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
		unsigned char                                              Source[0x8];                                             // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.ActiveAuraInfo.Source
		unsigned char                                              ProxyComponent[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.ActiveAuraInfo.ProxyComponent
		unsigned char                                              OwningAbility[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.ActiveAuraInfo.OwningAbility
		float                                                      RadiusSquared;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Handle[0x4];                                             // 0x0000(0x0004) UNKNOWN PROPERTY: StructProperty OrionGame.ActiveAuraInfo.Handle
		unsigned char                                              UnknownData_ZJLO[0x74];                                  // 0x0004(0x0074) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMeleeAttack
	 * Size -> 0x0030
	 */
	struct FOrionMeleeAttack
	{
	public:
		class FName                                                MeleeAttackName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MeleeAttackAnimation[0x8];                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionMeleeAttack.MeleeAttackAnimation
		unsigned char                                              MeleeAttackGameplayEffect[0x8];                          // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.OrionMeleeAttack.MeleeAttackGameplayEffect
		bool                                                       bOnKeyRelease : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                OnKeyReleaseAnimSection;                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IdealMeleeDistance;                                      // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseAttackTimeScale;                                     // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U04W[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BeamHitResult
	 * Size -> 0x0098
	 */
	struct FBeamHitResult
	{
	public:
		unsigned char                                              HitResult[0x88];                                         // 0x0000(0x0088) UNKNOWN PROPERTY: StructProperty OrionGame.BeamHitResult.HitResult
		unsigned char                                              HitParticleComponent[0x8];                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.BeamHitResult.HitParticleComponent
		float                                                      TimeStamp;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5TT0[0x94];                                  // 0x0004(0x0094) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SelectSingleTargetSorter
	 * Size -> 0x0010
	 */
	struct FSelectSingleTargetSorter
	{
	public:
		unsigned char                                              UnknownData_8IKR[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroSpeedWarpingSettings
	 * Size -> 0x0010
	 */
	struct FOrionHeroSpeedWarpingSettings
	{
	public:
		float                                                      MinAuthoredSpeed;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAuthoredSpeed;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedWarpingAmount;                                      // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampedSpeed;                                            // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9C8[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDistanceCurve
	 * Size -> 0x0010
	 */
	struct FOrionDistanceCurve
	{
	public:
		class FName                                                CurveName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VL1L[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDirectionalAnimRef
	 * Size -> 0x0020
	 */
	struct FOrionDirectionalAnimRef
	{
	public:
		unsigned char                                              North[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDirectionalAnimRef.North
		unsigned char                                              South[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDirectionalAnimRef.South
		unsigned char                                              East[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDirectionalAnimRef.East
		unsigned char                                              West[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDirectionalAnimRef.West
		unsigned char                                              UnknownData_VL1I[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCachedTransitionData
	 * Size -> 0x0028
	 */
	struct FOrionCachedTransitionData
	{
	public:
		class FName                                                StateMachineName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FromStateName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToStateName;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HNKP[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCachedRelevantAnimData
	 * Size -> 0x0020
	 */
	struct FOrionCachedRelevantAnimData
	{
	public:
		class FName                                                StateMachineName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StateName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U1G3[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCachedAssetPlayerData
	 * Size -> 0x0018
	 */
	struct FOrionCachedAssetPlayerData
	{
	public:
		class FName                                                StateMachineName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StateName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MUKF[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCachedStateArray
	 * Size -> 0x0010
	 */
	struct FOrionCachedStateArray
	{
	public:
		unsigned char                                              States[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionCachedStateArray.States
	};

	/**
	 * ScriptStruct OrionGame.OrionCachedStateData
	 * Size -> 0x0020
	 */
	struct FOrionCachedStateData
	{
	public:
		class FName                                                StateMachineName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StateName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56FR[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionBotTeam
	 * Size -> 0x00B8
	 */
	struct FOrionBotTeam
	{
	public:
		unsigned char                                              Members[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionBotTeam.Members
		unsigned char                                              AllObjectives[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionBotTeam.AllObjectives
		unsigned char                                              TeamComm[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionBotTeam.TeamComm
		unsigned char                                              UnknownData_PNRT[0xB0];                                  // 0x0008(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionBotTeamMember
	 * Size -> 0x0068
	 */
	struct FOrionBotTeamMember
	{
	public:
		unsigned char                                              BotController[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionBotTeamMember.BotController
		unsigned char                                              PlayerController[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionBotTeamMember.PlayerController
		unsigned char                                              CachedOrionPlayerState[0x8];                             // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionBotTeamMember.CachedOrionPlayerState
		unsigned char                                              CurrentObjective[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionBotTeamMember.CurrentObjective
		unsigned char                                              UnknownData_V7R5[0x60];                                  // 0x0008(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BotEnemySelection
	 * Size -> 0x0020
	 */
	struct FBotEnemySelection
	{
	public:
		unsigned char                                              DefaultQuery[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.BotEnemySelection.DefaultQuery
		unsigned char                                              OverrideQuery[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.BotEnemySelection.OverrideQuery
		unsigned char                                              AdditionalTargets[0x10];                                 // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.BotEnemySelection.AdditionalTargets
		unsigned char                                              UnknownData_GVUZ[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AIBotHandledTask
	 * Size -> 0x0028
	 */
	struct FAIBotHandledTask
	{
	public:
		unsigned char                                              Ability[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.AIBotHandledTask.Ability
		unsigned char                                              TaskToActUpon[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.AIBotHandledTask.TaskToActUpon
		unsigned char                                              RelatedActor[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.AIBotHandledTask.RelatedActor
		unsigned char                                              UnknownData_29I4[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MinionBehaviorAnimation
	 * Size -> 0x0190
	 */
	struct FMinionBehaviorAnimation
	{
	public:
		unsigned char                                              AnimationSources[0x10];                                  // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.MinionBehaviorAnimation.AnimationSources
		unsigned char                                              UnknownData_LRM3[0x180];                                 // 0x0010(0x0180) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MinionAnimSource
	 * Size -> 0x0020
	 */
	struct FMinionAnimSource
	{
	public:
		unsigned char                                              Behavior;                                                // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AnimationSequence[0x8];                                  // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.MinionAnimSource.AnimationSequence
		float                                                      BlendInTime;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4E7G[0x1C];                                  // 0x0004(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MinionAuxAggroSet
	 * Size -> 0x0010
	 */
	struct FMinionAuxAggroSet
	{
	public:
		unsigned char                                              Targets[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.MinionAuxAggroSet.Targets
	};

	/**
	 * ScriptStruct OrionGame.MinionSightData
	 * Size -> 0x0010
	 */
	struct FMinionSightData
	{
	public:
		unsigned char                                              AI[0x8];                                                 // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.MinionSightData.AI
		unsigned char                                              UnknownData_BUQ8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BTRef
	 * Size -> 0x0018
	 */
	struct FBTRef
	{
	public:
		unsigned char                                              Ref[0x10];                                               // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.BTRef.Ref
		unsigned char                                              BT[0x8];                                                 // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.BTRef.BT
		unsigned char                                              UnknownData_U40Y[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.DefaultEQSQueries
	 * Size -> 0x00E0
	 */
	struct FDefaultEQSQueries
	{
	public:
		unsigned char                                              MeleePositioning[0x20];                                  // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.DefaultEQSQueries.MeleePositioning
		unsigned char                                              RangedPositioning[0x20];                                 // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.DefaultEQSQueries.RangedPositioning
		unsigned char                                              TacticalFallbackQuery[0x20];                             // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.DefaultEQSQueries.TacticalFallbackQuery
		unsigned char                                              MeleeEnemySelection[0x20];                               // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.DefaultEQSQueries.MeleeEnemySelection
		unsigned char                                              RangedEnemySelection[0x20];                              // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.DefaultEQSQueries.RangedEnemySelection
		unsigned char                                              BaseRecallQuery[0x20];                                   // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.DefaultEQSQueries.BaseRecallQuery
		unsigned char                                              RunAwayQuery[0x20];                                      // 0x0000(0x0020) UNKNOWN PROPERTY: AssetObjectProperty OrionGame.DefaultEQSQueries.RunAwayQuery
		unsigned char                                              UnknownData_OJ5S[0xC0];                                  // 0x0020(0x00C0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.NamedHeroList
	 * Size -> 0x0020
	 */
	struct FNamedHeroList
	{
	public:
		class FString                                              HeroSetName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HeroList[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.NamedHeroList.HeroList
		unsigned char                                              UnknownData_YKWK[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLookAtTarget
	 * Size -> 0x0018
	 */
	struct FOrionLookAtTarget
	{
	public:
		unsigned char                                              LookAtActor[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionLookAtTarget.LookAtActor
		unsigned char                                              UnknownData_CO4M[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AnalyticsDamageLogEntry
	 * Size -> 0x0040
	 */
	struct FAnalyticsDamageLogEntry
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InstigatorDisplayName;                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InstigatorAbilityName;                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumHits;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageAmount;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DamageWasPhysical : 1;                                   // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DamageWasEnergy : 1;                                     // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DamageWasPure : 1;                                       // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DamageWasCritical : 1;                                   // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       PlayerHasRedBuff : 1;                                    // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       PlayerHasPrimeHelix : 1;                                 // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8CB[0x3F];                                  // 0x0001(0x003F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCoreBaseAnimInstanceProxy
	 * Size -> 0x0030 (FullSize[0x03E0] - InheritedSize[0x03B0])
	 */
	struct FOrionCoreBaseAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		float                                                      RotationRate0;                                           // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationRate1;                                           // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationRate2;                                           // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Rotation0[0xC];                                          // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionCoreBaseAnimInstanceProxy.Rotation0
		unsigned char                                              Rotation1[0xC];                                          // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionCoreBaseAnimInstanceProxy.Rotation1
		unsigned char                                              Rotation2[0xC];                                          // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionCoreBaseAnimInstanceProxy.Rotation2
		unsigned char                                              UnknownData_2GGK[0x3D4];                                 // 0x000C(0x03D4) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCharNetworkSmoothingLod
	 * Size -> 0x0014
	 */
	struct FOrionCharNetworkSmoothingLod
	{
	public:
		float                                                      DelayBetweenUpdates;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceInMeters;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimulationEnabled : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bForceRootMotionSimulationEnabled : 1;                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ForceRootMotionSimulationMinVelocity;                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PK9J[0x10];                                  // 0x0004(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.RecentMovementSyncKeysEntry
	 * Size -> 0x0014
	 */
	struct FRecentMovementSyncKeysEntry
	{
	public:
		unsigned char                                              SyncKey[0xC];                                            // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.RecentMovementSyncKeysEntry.SyncKey
		float                                                      ExpirationTime;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasServerMoveBeenProcessedWithMatchingKey : 1;          // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6E0L[0x13];                                  // 0x0001(0x0013) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MovementAbilitySyncKey
	 * Size -> 0x000C
	 */
	struct FMovementAbilitySyncKey
	{
	public:
		int16_t                                                    PredictionKey;                                           // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Index;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClientTimeStamp;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServerTimeStamp;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEHL[0x8];                                   // 0x0004(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroAbilityFlags
	 * Size -> 0x0005
	 */
	struct FOrionHeroAbilityFlags
	{
	public:
		bool                                                       bIsLMB : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsRMB : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsQ : 1;                                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsE : 1;                                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsR : 1;                                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUF9[0x4];                                   // 0x0001(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroAllowedTransitions
	 * Size -> 0x0007
	 */
	struct FOrionHeroAllowedTransitions
	{
	public:
		bool                                                       bAllowStartTransition : 1;                               // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowStopTransition : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowPivotTransition : 1;                               // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowSpinTransition : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowTurnInPlaceTransition : 1;                         // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowJumpTransition : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDo180LookAround : 1;                                    // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ITA[0x6];                                   // 0x0001(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroSpinAnimSet
	 * Size -> 0x0020
	 */
	struct FOrionHeroSpinAnimSet
	{
	public:
		unsigned char                                              SpinNorth2South_CW_Anim[0x8];                            // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHeroSpinAnimSet.SpinNorth2South_CW_Anim
		unsigned char                                              SpinNorth2South_CCW_Anim[0x8];                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHeroSpinAnimSet.SpinNorth2South_CCW_Anim
		unsigned char                                              SpinSouth2North_CW_Anim[0x8];                            // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHeroSpinAnimSet.SpinSouth2North_CW_Anim
		unsigned char                                              SpinSouth2North_CCW_Anim[0x8];                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHeroSpinAnimSet.SpinSouth2North_CCW_Anim
		unsigned char                                              UnknownData_PMNH[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroJumpAnimSet
	 * Size -> 0x0020
	 */
	struct FOrionHeroJumpAnimSet
	{
	public:
		unsigned char                                              Start[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHeroJumpAnimSet.Start
		unsigned char                                              Arc[0x8];                                                // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHeroJumpAnimSet.Arc
		unsigned char                                              PreLand[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHeroJumpAnimSet.PreLand
		unsigned char                                              PostLandAdditive[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHeroJumpAnimSet.PostLandAdditive
		unsigned char                                              UnknownData_YUE2[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTurnTransition
	 * Size -> 0x0020
	 */
	struct FOrionTurnTransition
	{
	public:
		unsigned char                                              Anim[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionTurnTransition.Anim
		bool                                                       bRightTurn : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DelayBeforeTrigger;                                      // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedSign;                                              // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedTurnAngle;                                         // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTravelModeTransition : 1;                             // 0x0000(0x0001) BIT_FIELD ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KEP[0x1F];                                  // 0x0001(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroAnimData
	 * Size -> 0x0130
	 */
	struct FOrionHeroAnimData
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJustTeleported : 1;                                     // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsOnGround : 1;                                         // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsMovementFalling : 1;                                  // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasRootMotionSources : 1;                               // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              MeshLocalToWorld[0x30];                                  // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroAnimData.MeshLocalToWorld
		unsigned char                                              LocalToWorld[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroAnimData.LocalToWorld
		unsigned char                                              Location[0xC];                                           // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroAnimData.Location
		unsigned char                                              WorldAccel[0xC];                                         // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroAnimData.WorldAccel
		unsigned char                                              LocalAccel[0xC];                                         // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroAnimData.LocalAccel
		float                                                      MaxAccel;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccelMagnitude2D;                                        // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocalAccelYawAngle;                                      // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAccelerating2D : 1;                                   // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              SmoothLocalAccelDir[0xC];                                // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroAnimData.SmoothLocalAccelDir
		unsigned char                                              WorldVelocity[0xC];                                      // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroAnimData.WorldVelocity
		unsigned char                                              LocalVelocity[0xC];                                      // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroAnimData.LocalVelocity
		float                                                      MaxSpeed;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed2D;                                                 // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedPercent;                                            // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocalVelocityYawAngle;                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMoving2D : 1;                                         // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TurnDeltaYaw;                                            // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnDeltaSpeedAverage;                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityZ;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsJumpingUp : 1;                                        // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsJumpingDown : 1;                                      // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSyncGroupIsBetweenMarkers : 1;                          // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_77C7[0x12F];                                 // 0x0001(0x012F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroCapsuleAnimData
	 * Size -> 0x0060
	 */
	struct FOrionHeroCapsuleAnimData
	{
	public:
		unsigned char                                              LocalToWorld[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroCapsuleAnimData.LocalToWorld
		unsigned char                                              Location[0xC];                                           // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroCapsuleAnimData.Location
		unsigned char                                              WorldVelocity[0xC];                                      // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroCapsuleAnimData.WorldVelocity
		unsigned char                                              WorldAccel[0xC];                                         // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroCapsuleAnimData.WorldAccel
		unsigned char                                              UnknownData_SC9M[0x54];                                  // 0x000C(0x0054) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMinionAnimInstanceProxy
	 * Size -> 0x00D0 (FullSize[0x0480] - InheritedSize[0x03B0])
	 */
	struct FOrionMinionAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		float                                                      MovementAngle;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalSpeed;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActiveLocomotionIndex;                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonFullBodyWeight;                                       // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LookAtTarget[0xC];                                       // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionMinionAnimInstanceProxy.LookAtTarget
		int32_t                                                    PoseIndex;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4QT[0x47C];                                 // 0x0004(0x047C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BalanceOverrideAlias
	 * Size -> 0x0020
	 */
	struct FBalanceOverrideAlias
	{
	public:
		class FString                                              AliasID;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RealID;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9YU[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BalanceSettings
	 * Size -> 0x0010
	 */
	struct FBalanceSettings
	{
	public:
		unsigned char                                              Items[0x10];                                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.BalanceSettings.Items
	};

	/**
	 * ScriptStruct OrionGame.BalanceSettingsItem
	 * Size -> 0x0040
	 */
	struct FBalanceSettingsItem
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DateCaptured;                                            // 0x0000(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TableOverrides[0x10];                                    // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.BalanceSettingsItem.TableOverrides
		unsigned char                                              UnknownData_KOU7[0x30];                                  // 0x0010(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CurveTableOverride
	 * Size -> 0x0020
	 */
	struct FCurveTableOverride
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Data;                                                    // 0x0000(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B0PA[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AIWaveBeingSpawned
	 * Size -> 0x0028
	 */
	struct FAIWaveBeingSpawned
	{
	public:
		unsigned char                                              FormationBeingSpawned[0x8];                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.AIWaveBeingSpawned.FormationBeingSpawned
		unsigned char                                              AIWaitingToSpawn[0x10];                                  // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.AIWaveBeingSpawned.AIWaitingToSpawn
		unsigned char                                              LastSpawnedAI[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.AIWaveBeingSpawned.LastSpawnedAI
		int32_t                                                    AIIndexToSpawn;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRI2[0x24];                                  // 0x0004(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionRigCues
	 * Size -> 0x0018
	 */
	struct FOrionRigCues
	{
	public:
		unsigned char                                              RigBuilding[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionRigCues.RigBuilding
		unsigned char                                              RigWorking[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionRigCues.RigWorking
		unsigned char                                              RigCollected[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionRigCues.RigCollected
		unsigned char                                              UnknownData_4LDZ[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayVolumeEffectsOverlapTracker
	 * Size -> 0x0030
	 */
	struct FGameplayVolumeEffectsOverlapTracker
	{
	public:
		int32_t                                                    OverlapCount;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EffectsApplied[0x10];                                    // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.GameplayVolumeEffectsOverlapTracker.EffectsApplied
		unsigned char                                              GrantedAbilitySpecHandle[0x4];                           // 0x0000(0x0004) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayVolumeEffectsOverlapTracker.GrantedAbilitySpecHandle
		unsigned char                                              Actor[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.GameplayVolumeEffectsOverlapTracker.Actor
		unsigned char                                              ParentVolume[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.GameplayVolumeEffectsOverlapTracker.ParentVolume
		unsigned char                                              UnknownData_3EQL[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionObjectivesToCapture
	 * Size -> 0x0030
	 */
	struct FOrionObjectivesToCapture
	{
	public:
		unsigned char                                              ObjectiveToLookFor[0x8];                                 // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.OrionObjectivesToCapture.ObjectiveToLookFor
		unsigned char                                              CapturedResponse;                                        // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              GameplayEffectsToApply[0x10];                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionObjectivesToCapture.GameplayEffectsToApply
		unsigned char                                              CaptureTeamCompareType;                                  // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyToDeadPlayers : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    NumTimesCaptured;                                        // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCapStacksAllowed;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPDR[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCardMessageSummary
	 * Size -> 0x0028
	 */
	struct FOrionCardMessageSummary
	{
	public:
		class FText                                                PlayerName;                                              // 0x0000(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              Actions[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionCardMessageSummary.Actions
		unsigned char                                              UnknownData_B0BQ[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCardMessageArray
	 * Size -> 0x0010
	 */
	struct FOrionCardMessageArray
	{
	public:
		unsigned char                                              Messages[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionCardMessageArray.Messages
	};

	/**
	 * ScriptStruct OrionGame.OrionCardMessage
	 * Size -> 0x0020
	 */
	struct FOrionCardMessage
	{
	public:
		unsigned char                                              ModType;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Equipment[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionCardMessage.Equipment
		unsigned char                                              Upgrades[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionCardMessage.Upgrades
		unsigned char                                              UnknownData_9FAZ[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BuffStatusBarTracker
	 * Size -> 0x0030
	 */
	struct FBuffStatusBarTracker
	{
	public:
		unsigned char                                              TagUsed[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.BuffStatusBarTracker.TagUsed
		unsigned char                                              EffectsTracked[0x10];                                    // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.BuffStatusBarTracker.EffectsTracked
		unsigned char                                              Icon[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.BuffStatusBarTracker.Icon
		unsigned char                                              BuffWidgetClass[0x8];                                    // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.BuffStatusBarTracker.BuffWidgetClass
		unsigned char                                              UnknownData_WF7Q[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.BuffStatusBarInfo
	 * Size -> 0x0020
	 */
	struct FBuffStatusBarInfo
	{
	public:
		unsigned char                                              TrackedEffectHandle[0x8];                                // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.BuffStatusBarInfo.TrackedEffectHandle
		unsigned char                                              TrackedTag[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.BuffStatusBarInfo.TrackedTag
		int32_t                                                    TrackedStackCount;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrackedEndTime;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ROAL[0x1C];                                  // 0x0004(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MapPing
	 * Size -> 0x0018
	 */
	struct FMapPing
	{
	public:
		unsigned char                                              UnknownData_CK5L[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.HeroDamageLogEntry
	 * Size -> 0x0050
	 */
	struct FHeroDamageLogEntry
	{
	public:
		unsigned char                                              InstigatorData[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.HeroDamageLogEntry.InstigatorData
		unsigned char                                              InstigatorPlayer[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.HeroDamageLogEntry.InstigatorPlayer
		unsigned char                                              GameplayEffect[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.HeroDamageLogEntry.GameplayEffect
		unsigned char                                              InstigatorAbility[0x8];                                  // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.HeroDamageLogEntry.InstigatorAbility
		unsigned char                                              SourceTags[0x20];                                        // 0x0000(0x0020) UNKNOWN PROPERTY: StructProperty OrionGame.HeroDamageLogEntry.SourceTags
		float                                                      DamageTime;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageAmount;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumDamageEvents;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PackedFlags;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7BAP[0x4F];                                  // 0x0001(0x004F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ButtonLegendItem
	 * Size -> 0x0020
	 */
	struct FButtonLegendItem
	{
	public:
		class FName                                                Action;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ActionText;                                              // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7WA[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAutoRemovedDecal
	 * Size -> 0x0018
	 */
	struct FOrionAutoRemovedDecal
	{
	public:
		unsigned char                                              TargetActor[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionAutoRemovedDecal.TargetActor
		class FName                                                DecalName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToRemove;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNUF[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDecalTarget
	 * Size -> 0x0028
	 */
	struct FOrionDecalTarget
	{
	public:
		unsigned char                                              TargetActor[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDecalTarget.TargetActor
		unsigned char                                              Decals[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionDecalTarget.Decals
		unsigned char                                              UnknownData_U4V1[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDecal
	 * Size -> 0x0028
	 */
	struct FOrionDecal
	{
	public:
		unsigned char                                              DecalComponent[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDecal.DecalComponent
		unsigned char                                              UnknownData_2WB7[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDecalLibraryEntry
	 * Size -> 0x0030
	 */
	struct FOrionDecalLibraryEntry
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInTime;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutTime;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Material[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionDecalLibraryEntry.Material
		unsigned char                                              Orientation;                                             // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SortOrder;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeScreenSize;                                          // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachToSkeletalMeshRootBone : 1;                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGE7[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHUDWidgetEntry
	 * Size -> 0x0010
	 */
	struct FOrionHUDWidgetEntry
	{
	public:
		unsigned char                                              Widgets[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionHUDWidgetEntry.Widgets
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
		unsigned char                                              PlayerNetID[0x18];                                       // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTrackedQuests.PlayerNetID
		unsigned char                                              Quests[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionTrackedQuests.Quests
		unsigned char                                              UnknownData_JAK8[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueNotifySubset
	 * Size -> 0x00A0
	 */
	struct FGameplayCueNotifySubset
	{
	public:
		unsigned char                                              LoadedClasses[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.GameplayCueNotifySubset.LoadedClasses
		unsigned char                                              GameplayCueNotifyActorObjectLibrary[0x8];                // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.GameplayCueNotifySubset.GameplayCueNotifyActorObjectLibrary
		unsigned char                                              GameplayCueNotifyStaticObjectLibrary[0x8];               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.GameplayCueNotifySubset.GameplayCueNotifyStaticObjectLibrary
		unsigned char                                              UnknownData_Q9OW[0x98];                                  // 0x0008(0x0098) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueStencilDecalInfo
	 * Size -> 0x0010
	 */
	struct FGameplayCueStencilDecalInfo
	{
	public:
		class FName                                                DecalName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PJ5[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueDecalInfo
	 * Size -> 0x0030
	 */
	struct FGameplayCueDecalInfo
	{
	public:
		unsigned char                                              Decal[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.GameplayCueDecalInfo.Decal
		unsigned char                                              DecalScale[0xC];                                         // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayCueDecalInfo.DecalScale
		bool                                                       bUseDecalRotationOverride : 1;                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              DecalRotationOverride[0xC];                              // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayCueDecalInfo.DecalRotationOverride
		bool                                                       bUseFadeOutValues : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FadeOutStartDelay;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDuration;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POJP[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueTraceInfo
	 * Size -> 0x00A0
	 */
	struct FGameplayCueTraceInfo
	{
	public:
		bool                                                       bEnableTrace : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                TraceStartSocketName;                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSocketRotation : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bTraceStartOffsetInLocalSpace : 1;                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              TraceStartOffset[0xC];                                   // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayCueTraceInfo.TraceStartOffset
		unsigned char                                              TraceRotation[0xC];                                      // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayCueTraceInfo.TraceRotation
		float                                                      TraceDistance;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TraceChannel;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceIgnoreHeroes : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              TraceSuccess[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayCueTraceInfo.TraceSuccess
		unsigned char                                              TraceFailureSpawn[0x10];                                 // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayCueTraceInfo.TraceFailureSpawn
		unsigned char                                              TraceFailure[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayCueTraceInfo.TraceFailure
		unsigned char                                              UnknownData_QY8G[0x78];                                  // 0x0028(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueTraceSpawnInfo
	 * Size -> 0x0028
	 */
	struct FGameplayCueTraceSpawnInfo
	{
	public:
		unsigned char                                              ParticleSystem[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.GameplayCueTraceSpawnInfo.ParticleSystem
		bool                                                       bParticleSystemCastShadow : 1;                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              Decal[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.GameplayCueTraceSpawnInfo.Decal
		unsigned char                                              DecalScale[0xC];                                         // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayCueTraceSpawnInfo.DecalScale
		unsigned char                                              SpawnOrientation;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LB27[0x27];                                  // 0x0001(0x0027) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueTraceFailureSpawnInfo
	 * Size -> 0x0010
	 */
	struct FGameplayCueTraceFailureSpawnInfo
	{
	public:
		class FName                                                SpawnSocketName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSocketUpVectorForRotation : 1;                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9MU8[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueForceFeedbackInfo
	 * Size -> 0x0018
	 */
	struct FGameplayCueForceFeedbackInfo
	{
	public:
		unsigned char                                              ForceFeedbackEffect[0x8];                                // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.GameplayCueForceFeedbackInfo.ForceFeedbackEffect
		bool                                                       bLooping : 1;                                            // 0x0000(0x0001) BIT_FIELD BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CUJB[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueCameraLensEffectInfo
	 * Size -> 0x0018
	 */
	struct FGameplayCueCameraLensEffectInfo
	{
	public:
		unsigned char                                              CameraLensEffect[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.GameplayCueCameraLensEffectInfo.CameraLensEffect
		unsigned char                                              Falloff[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayCueCameraLensEffectInfo.Falloff
		bool                                                       bCancelOnRemove : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07II[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueAOEInfo
	 * Size -> 0x0008
	 */
	struct FGameplayCueAOEInfo
	{
	public:
		float                                                      InnerRadius;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterRadius;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JYZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueCameraShakeInfo
	 * Size -> 0x0028
	 */
	struct FGameplayCueCameraShakeInfo
	{
	public:
		unsigned char                                              Shake[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.GameplayCueCameraShakeInfo.Shake
		float                                                      Scale;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PlaySpace;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UserPlaySpaceRotation[0xC];                              // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayCueCameraShakeInfo.UserPlaySpaceRotation
		bool                                                       bCalculateUserPlaySpaceRotationFromLocation : 1;         // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCancelOnRemove : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              Falloff[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayCueCameraShakeInfo.Falloff
		unsigned char                                              UnknownData_RZD2[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueAudioInfo
	 * Size -> 0x0000
	 */
	struct FGameplayCueAudioInfo
	{
	public:
		unsigned char                                              SoundCue[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.GameplayCueAudioInfo.SoundCue
		unsigned char                                              TeamAdjustStyle;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ShadowplanePolicy;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KTH6[0xFFFFFFFF];                            // 0x0001(0xFFFFFFFF) Fix size for supers
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueAudioInfo_Looping
	 * Size -> 0x0018
	 */
	struct FGameplayCueAudioInfo_Looping : public FGameplayCueAudioInfo
	{
	public:
		float                                                      LoopingSoundFadeOutDuration;                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoopingSoundVolumeLevel;                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M99N[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayCueParticleInfo
	 * Size -> 0x0040
	 */
	struct FGameplayCueParticleInfo
	{
	public:
		unsigned char                                              ParticleSystem[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.GameplayCueParticleInfo.ParticleSystem
		unsigned char                                              AdditionalParticleSystems[0x10];                         // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.GameplayCueParticleInfo.AdditionalParticleSystems
		unsigned char                                              AttachmentInfo[0x10];                                    // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayCueParticleInfo.AttachmentInfo
		unsigned char                                              ShadowplanePolicy;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamColorAdjust;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CastShadow : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              Scale[0xC];                                              // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayCueParticleInfo.Scale
		bool                                                       bUseAbsoluteScale : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UFOX[0x3F];                                  // 0x0001(0x003F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionGameplayCueAttachInfo
	 * Size -> 0x0010
	 */
	struct FOrionGameplayCueAttachInfo
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AttachType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9NSL[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionGameplayCueConditionedParticles
	 * Size -> 0x0028
	 */
	struct FOrionGameplayCueConditionedParticles
	{
	public:
		unsigned char                                              Condition;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LevelRequirements[0x10];                                 // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionGameplayCueConditionedParticles.LevelRequirements
		unsigned char                                              ParticleSystem[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionGameplayCueConditionedParticles.ParticleSystem
		class FName                                                SocketNameOverride;                                      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B0U4[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionGameplayCueLevelRequirements
	 * Size -> 0x000C
	 */
	struct FOrionGameplayCueLevelRequirements
	{
	public:
		unsigned char                                              ReqType;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinLevel;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLevel;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1OPW[0x8];                                   // 0x0004(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionGameplayCueSignificanceSettings
	 * Size -> 0x0001
	 */
	struct FOrionGameplayCueSignificanceSettings
	{
	public:
		bool                                                       bAlwaysSignificant : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OrionGame.OrionBurstEffectData
	 * Size -> 0x00E8
	 */
	struct FOrionBurstEffectData
	{
	public:
		unsigned char                                              BurstParticleEffect[0x40];                               // 0x0000(0x0040) UNKNOWN PROPERTY: StructProperty OrionGame.OrionBurstEffectData.BurstParticleEffect
		unsigned char                                              BurstSound[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionBurstEffectData.BurstSound
		unsigned char                                              BurstCameraShake[0x28];                                  // 0x0000(0x0028) UNKNOWN PROPERTY: StructProperty OrionGame.OrionBurstEffectData.BurstCameraShake
		unsigned char                                              BurstCameraLensEffect[0x18];                             // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionBurstEffectData.BurstCameraLensEffect
		unsigned char                                              BurstForceFeedbackEffect[0x18];                          // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionBurstEffectData.BurstForceFeedbackEffect
		unsigned char                                              BurstDecal[0x30];                                        // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionBurstEffectData.BurstDecal
		unsigned char                                              BurstStencilDecal[0x10];                                 // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionBurstEffectData.BurstStencilDecal
		unsigned char                                              UnknownData_LBDL[0xD8];                                  // 0x0010(0x00D8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayVolumeComponentEffectsOverlapTracker
	 * Size -> 0x0030
	 */
	struct FGameplayVolumeComponentEffectsOverlapTracker
	{
	public:
		int32_t                                                    OverlapCount;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPassedPeriodEffectFilter : 1;                           // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasAppliedPeriodicEffect : 1;                           // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              EffectsApplied[0x10];                                    // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.GameplayVolumeComponentEffectsOverlapTracker.EffectsApplied
		unsigned char                                              GrantedAbilitySpecHandle[0x4];                           // 0x0000(0x0004) UNKNOWN PROPERTY: StructProperty OrionGame.GameplayVolumeComponentEffectsOverlapTracker.GrantedAbilitySpecHandle
		unsigned char                                              Actor[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.GameplayVolumeComponentEffectsOverlapTracker.Actor
		unsigned char                                              ParentVolume[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: WeakObjectProperty OrionGame.GameplayVolumeComponentEffectsOverlapTracker.ParentVolume
		unsigned char                                              UnknownData_KNPR[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.DraftLobbyPhase
	 * Size -> 0x0020
	 */
	struct FDraftLobbyPhase
	{
	public:
		int32_t                                                    PhaseIdx;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamIndex;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumBots;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ChoosingPlayers[0x10];                                   // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.DraftLobbyPhase.ChoosingPlayers
		unsigned char                                              UnknownData_KDRM[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionGestureEntry
	 * Size -> 0x0018
	 */
	struct FOrionGestureEntry
	{
	public:
		unsigned char                                              GestureDirections[0x10];                                 // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionGestureEntry.GestureDirections
		unsigned char                                              TeamCommData[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionGestureEntry.TeamCommData
		unsigned char                                              UnknownData_SOH1[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.InputActionGamepadEquivalency
	 * Size -> 0x0010
	 */
	struct FInputActionGamepadEquivalency
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GamepadActionNameEquivalent;                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVWA[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GamepadButtonArt
	 * Size -> 0x0138
	 */
	struct FGamepadButtonArt
	{
	public:
		unsigned char                                              Key[0x18];                                               // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.GamepadButtonArt.Key
		unsigned char                                              PS4Icon[0x90];                                           // 0x0000(0x0090) UNKNOWN PROPERTY: StructProperty OrionGame.GamepadButtonArt.PS4Icon
		unsigned char                                              XBoxIcon[0x90];                                          // 0x0000(0x0090) UNKNOWN PROPERTY: StructProperty OrionGame.GamepadButtonArt.XBoxIcon
		unsigned char                                              UnknownData_W5M4[0xA8];                                  // 0x0090(0x00A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MouseButtonArt
	 * Size -> 0x00A8
	 */
	struct FMouseButtonArt
	{
	public:
		unsigned char                                              Key[0x18];                                               // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.MouseButtonArt.Key
		unsigned char                                              ButtonIcon[0x90];                                        // 0x0000(0x0090) UNKNOWN PROPERTY: StructProperty OrionGame.MouseButtonArt.ButtonIcon
		unsigned char                                              UnknownData_5KHE[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionQuickChatPayload
	 * Size -> 0x0018
	 */
	struct FOrionQuickChatPayload
	{
	public:
		unsigned char                                              Topic;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              MessageSlot;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              RawSubjectString;                                        // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BHIL[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionQuickChatTopic
	 * Size -> 0x0098
	 */
	struct FOrionQuickChatTopic
	{
	public:
		class FText                                                TopicTitle;                                              // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              MessageFormats[0x80];                                    // 0x0000(0x0080) UNKNOWN PROPERTY: StructProperty OrionGame.OrionQuickChatTopic.MessageFormats
		unsigned char                                              UnknownData_KK4X[0x18];                                  // 0x0080(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionQuickChatMessageInfo
	 * Size -> 0x0020
	 */
	struct FOrionQuickChatMessageInfo
	{
	public:
		class FText                                                MessageFormat;                                           // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              SubjectType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUUI[0x1F];                                  // 0x0001(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionHeroAvailabilityInfo
	 * Size -> 0x0038
	 */
	struct FOrionHeroAvailabilityInfo
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                MessageFormat;                                           // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              AvailabilityIcon[0x8];                                   // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionHeroAvailabilityInfo.AvailabilityIcon
		unsigned char                                              UnknownData_TV3R[0x30];                                  // 0x0008(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionSearchPassParams
	 * Size -> 0x0028
	 */
	struct FOrionSearchPassParams
	{
	public:
		int32_t                                                    ControllerId;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SessionName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RegionId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Flags;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R769[0x27];                                  // 0x0001(0x0027) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ClashMobThreshold
	 * Size -> 0x0020
	 */
	struct FClashMobThreshold
	{
	public:
		unsigned char                                              SocialType;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Count;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Rewards[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.ClashMobThreshold.Rewards
		unsigned char                                              UnknownData_H966[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.IssuedFriendCode
	 * Size -> 0x0028
	 */
	struct FIssuedFriendCode
	{
	public:
		class FString                                              CodeId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CodeType;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DateCreated[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.IssuedFriendCode.DateCreated
		unsigned char                                              UnknownData_TG6Z[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.AccountMmr
	 * Size -> 0x0008
	 */
	struct FAccountMmr
	{
	public:
		int32_t                                                    Rating;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNewPlayerAdjusted : 1;                                  // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NDN0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TeamElo
	 * Size -> 0x0008
	 */
	struct FTeamElo
	{
	public:
		int32_t                                                    Rating;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNewPlayerAdjusted : 1;                                  // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CW8Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.UpdateTeamBuilderPathStatsParams
	 * Size -> 0x0018
	 */
	struct FUpdateTeamBuilderPathStatsParams
	{
	public:
		class FString                                              BucketId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SocialPartySize;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AWQ5[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MatchResult
	 * Size -> 0x0058
	 */
	struct FMatchResult
	{
	public:
		class FString                                              RatingType;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MatchInfo[0x18];                                         // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.MatchResult.MatchInfo
		unsigned char                                              RedTeam[0x18];                                           // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.MatchResult.RedTeam
		unsigned char                                              BlueTeam[0x18];                                          // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.MatchResult.BlueTeam
		unsigned char                                              UnknownData_WD0K[0x40];                                  // 0x0018(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TeamInfo
	 * Size -> 0x0018
	 */
	struct FTeamInfo
	{
	public:
		unsigned char                                              Members[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.TeamInfo.Members
		int32_t                                                    SocialPartySize;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SK0W[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TeamMemberInfo
	 * Size -> 0x0018
	 */
	struct FTeamMemberInfo
	{
	public:
		unsigned char                                              AccountId[0x18];                                         // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.TeamMemberInfo.AccountId
	};

	/**
	 * ScriptStruct OrionGame.MatchInfo
	 * Size -> 0x0018
	 */
	struct FMatchInfo
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RedScore;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchLengthSeconds;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T7EO[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
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
		int32_t                                                    PlayerMatchWaitSecs;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamMatchWaitSecs;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JVCY[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.MiniMapRotationEntry
	 * Size -> 0x0008
	 */
	struct FMiniMapRotationEntry
	{
	public:
		float                                                      Rotation;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXVY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamBuilderRepState
	 * Size -> 0x0090
	 */
	struct FOrionTeamBuilderRepState : public FOrionPartyRepState
	{
	public:
		unsigned char                                              PartyProgression;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChatRoomId;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReservedSlots;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PendingMember0;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PendingMember1;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PendingMember2;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PendingMember3;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PendingMember4;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SVA[0x80];                                  // 0x0010(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionPartyMemberRepState
	 * Size -> 0xFFFFFFF8 (FullSize[0x0000] - InheritedSize[0x0008])
	 */
	struct FOrionPartyMemberRepState : public FPartyMemberRepState
	{
	public:
		int32_t                                                    AccountLevel;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LevelProgress;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAfk : 1;                                                // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsConsole : 1;                                          // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GIIA[0xFFFFFFFF];                            // 0x0001(0xFFFFFFFF) Fix size for supers
	};

	/**
	 * ScriptStruct OrionGame.OrionPersistentPartyMemberRepState
	 * Size -> 0x0040
	 */
	struct FOrionPersistentPartyMemberRepState : public FOrionPartyMemberRepState
	{
	public:
		unsigned char                                              Location;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReady : 1;                                              // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              AcceptMatchState;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoaded : 1;                                             // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MMR;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMMRAdjustedForNewPlayer : 1;                            // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              BanReason;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSE9[0x3F];                                  // 0x0001(0x003F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTeamBuilderPartyMemberRepState
	 * Size -> 0x0070
	 */
	struct FOrionTeamBuilderPartyMemberRepState : public FOrionPartyMemberRepState
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeckId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Position;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Role;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Ready : 1;                                               // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              BlockedPlayers;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Platform;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CosmeticString;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6B0[0x60];                                  // 0x0010(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAimAssist
	 * Size -> 0x00B0
	 */
	struct FOrionAimAssist
	{
	public:
		unsigned char                                              UnknownData_MFAQ[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAimAssistTarget
	 * Size -> 0x0030
	 */
	struct FOrionAimAssistTarget
	{
	public:
		unsigned char                                              UnknownData_I63Z[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAimAssistOwnerInfo
	 * Size -> 0x0070
	 */
	struct FOrionAimAssistOwnerInfo
	{
	public:
		unsigned char                                              UnknownData_DTGM[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAimAssistResults
	 * Size -> 0x0010
	 */
	struct FOrionAimAssistResults
	{
	public:
		unsigned char                                              UnknownData_1YJW[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAimAssistParams
	 * Size -> 0x0028
	 */
	struct FOrionAimAssistParams
	{
	public:
		unsigned char                                              UnknownData_KSBQ[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TeamSpecificDraftPlayerInfo
	 * Size -> 0x0020
	 */
	struct FTeamSpecificDraftPlayerInfo
	{
	public:
		unsigned char                                              TeamIndex;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Preferences[0x2];                                        // 0x0000(0x0002) UNKNOWN PROPERTY: StructProperty OrionGame.TeamSpecificDraftPlayerInfo.Preferences
		unsigned char                                              PreviewHeroSelection[0x18];                              // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.TeamSpecificDraftPlayerInfo.PreviewHeroSelection
		unsigned char                                              UnknownData_F8K9[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDraftHeroSelectionInfo
	 * Size -> 0x0018
	 */
	struct FOrionDraftHeroSelectionInfo
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeroLevel;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOwned : 1;                                            // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z6UH[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDraftPlayerPreferences
	 * Size -> 0x0002
	 */
	struct FOrionDraftPlayerPreferences
	{
	public:
		unsigned char                                              Role;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Position;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EEBA[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionFlairPopupRewards
	 * Size -> 0x0040
	 */
	struct FOrionFlairPopupRewards
	{
	public:
		class FText                                                RewardTitle;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                RewardDesc;                                              // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              RewardType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RewardIcon[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionFlairPopupRewards.RewardIcon
		unsigned char                                              UnknownData_SZ6R[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionIndividualPlayerRating
	 * Size -> 0x0048
	 */
	struct FOrionIndividualPlayerRating
	{
	public:
		class FText                                                RatingName;                                              // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                RatingId;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                RatingDesc;                                              // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              DefaultIcon[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionIndividualPlayerRating.DefaultIcon
		unsigned char                                              RatingValue;                                             // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3E9L[0x47];                                  // 0x0001(0x0047) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.ProfanityData
	 * Size -> 0x0038
	 */
	struct FProfanityData
	{
	public:
		class FString                                              CountryCode;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProfanityList;                                           // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WhiteList;                                               // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoAdd : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85P2[0x37];                                  // 0x0001(0x0037) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionRewardTypeInfo
	 * Size -> 0x0000
	 */
	struct FOrionRewardTypeInfo
	{
	public:
		unsigned char                                              DisplayIcons[0x18];                                      // 0x0000(0x0018) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionRewardTypeInfo.DisplayIcons
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                ShortDescription;                                        // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                FullDescription;                                         // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKJH[0xFFFFFFE8];                            // 0x0018(0xFFFFFFE8) Fix size for supers
	};

	/**
	 * ScriptStruct OrionGame.OrionBadgeRewardInfo
	 * Size -> 0x0068
	 */
	struct FOrionBadgeRewardInfo : public FOrionRewardTypeInfo
	{
	public:
		int32_t                                                    MinLevel;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DUIM[0x64];                                  // 0x0004(0x0064) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLootTierRewardInfo
	 * Size -> 0x0090
	 */
	struct FOrionLootTierRewardInfo : public FOrionRewardTypeInfo
	{
	public:
		class FString                                              LootTierGroupName;                                       // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                LootTypeName;                                            // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bIsRandomRoll : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9RRC[0x8F];                                  // 0x0001(0x008F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionItemRewardInfo
	 * Size -> 0x0068
	 */
	struct FOrionItemRewardInfo : public FOrionRewardTypeInfo
	{
	public:
		unsigned char                                              McpItemType[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.OrionItemRewardInfo.McpItemType
		unsigned char                                              UnknownData_P0B8[0x60];                                  // 0x0008(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionKeywordIcon
	 * Size -> 0x0020
	 */
	struct FOrionKeywordIcon
	{
	public:
		unsigned char                                              Icon[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionKeywordIcon.Icon
		unsigned char                                              UnknownData_ZRQQ[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.GameplayShadowPadOverlapTracker
	 * Size -> 0x0018
	 */
	struct FGameplayShadowPadOverlapTracker
	{
	public:
		unsigned char                                              UnknownData_ZS7N[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionStatusEffectDisplayInfo
	 * Size -> 0x0058
	 */
	struct FOrionStatusEffectDisplayInfo
	{
	public:
		unsigned char                                              DisplayIcon[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionStatusEffectDisplayInfo.DisplayIcon
		class FName                                                MarkupAbbreviation;                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Explanation;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              BuffBarDisplayIcon[0x8];                                 // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionStatusEffectDisplayInfo.BuffBarDisplayIcon
		unsigned char                                              StatusTag[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionStatusEffectDisplayInfo.StatusTag
		unsigned char                                              BuffWidgetClass[0x8];                                    // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.OrionStatusEffectDisplayInfo.BuffWidgetClass
		unsigned char                                              UnknownData_3ZGF[0x50];                                  // 0x0008(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionStorefrontInfo
	 * Size -> 0x0038
	 */
	struct FOrionStorefrontInfo
	{
	public:
		unsigned char                                              StorefrontIcon[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionStorefrontInfo.StorefrontIcon
		class FText                                                Title;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T67L[0x20];                                  // 0x0018(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionQuestionGroupInfo
	 * Size -> 0x0030
	 */
	struct FOrionQuestionGroupInfo
	{
	public:
		class FName                                                SurveyId;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Message;                                                 // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              Questions[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionQuestionGroupInfo.Questions
		unsigned char                                              UnknownData_2IA5[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TBSearchPassState
	 * Size -> 0x000C
	 */
	struct FTBSearchPassState
	{
	public:
		bool                                                       bWasCanceled : 1;                                        // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWasFailure : 1;                                         // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWasRejected : 1;                                        // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bTimerExpired : 1;                                       // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              SearchState;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ApprovalTimeRemaining;                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTQN[0x8];                                   // 0x0004(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TBSearchParams
	 * Size -> 0x0048
	 */
	struct FTBSearchParams
	{
	public:
		int32_t                                                    ControllerId;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SessionName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlaylistId;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MMR;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomKey;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Flags;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RY1X[0x47];                                  // 0x0001(0x0047) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBRunSummary
	 * Size -> 0x01D0
	 */
	struct FOrionTBRunSummary
	{
	public:
		bool                                                       bStarted : 1;                                            // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWasCanceled : 1;                                        // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsError : 1;                                            // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsCaptain : 1;                                          // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              ErrorStr;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StartTimeUtc[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBRunSummary.StartTimeUtc
		unsigned char                                              EndTimeUtc[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBRunSummary.EndTimeUtc
		double                                                     Duration;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserId;                                                  // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              InitialRole;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FinalRole;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerMMR;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamElo;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlaylistId;                                              // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamBuilderParams[0xA8];                                 // 0x0000(0x00A8) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBRunSummary.TeamBuilderParams
		class FString                                              MatchSessionId;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SoloSessionId;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TeamPartyId;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SocialPartyId;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SocialPartyMemberCount;                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PlayerWaitTimes[0x30];                                   // 0x0000(0x0030) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBRunSummary.PlayerWaitTimes
		unsigned char                                              SocialPartyMembers[0x10];                                // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionTBRunSummary.SocialPartyMembers
		unsigned char                                              SoloRiders[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionTBRunSummary.SoloRiders
		unsigned char                                              TeamInvites[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionTBRunSummary.TeamInvites
		unsigned char                                              TeamCompSummary[0x28];                                   // 0x0000(0x0028) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBRunSummary.TeamCompSummary
		unsigned char                                              UnknownData_0ZBX[0x1A8];                                 // 0x0028(0x01A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBTeamCompSummary
	 * Size -> 0x0028
	 */
	struct FOrionTBTeamCompSummary
	{
	public:
		float                                                      TeamCompScore;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamLayout[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionTBTeamCompSummary.TeamLayout
		unsigned char                                              TeamComp[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionTBTeamCompSummary.TeamComp
		unsigned char                                              UnknownData_Z2ZR[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionRoleSummary
	 * Size -> 0x0028
	 */
	struct FOrionRoleSummary
	{
	public:
		class FString                                              Role;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeroRoleWeight;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14ZC[0x24];                                  // 0x0004(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBTeamInviteSummary
	 * Size -> 0x0040
	 */
	struct FOrionTBTeamInviteSummary
	{
	public:
		class FString                                              TeamBuilderPartyId;                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CaptainId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TeamSessionId;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              InviteTimeStampUtc[0x8];                                 // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBTeamInviteSummary.InviteTimeStampUtc
		unsigned char                                              UnknownData_BHRL[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBSoloRiderSummary
	 * Size -> 0x0078
	 */
	struct FOrionTBSoloRiderSummary
	{
	public:
		class FString                                              SoloRiderSessionId;                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FoundTimeStampUtc[0x8];                                  // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBSoloRiderSummary.FoundTimeStampUtc
		unsigned char                                              PlayerChoices[0x50];                                     // 0x0000(0x0050) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBSoloRiderSummary.PlayerChoices
		unsigned char                                              UnknownData_OFRU[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBSocialPartyMemberSummary
	 * Size -> 0x0038
	 */
	struct FOrionTBSocialPartyMemberSummary
	{
	public:
		bool                                                       IsPartyLeader : 1;                                       // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              PlayerId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQJU[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTBWaitTimes
	 * Size -> 0x0030
	 */
	struct FOrionTBWaitTimes
	{
	public:
		unsigned char                                              StartSoloRiderTime[0x8];                                 // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBWaitTimes.StartSoloRiderTime
		double                                                     SoloRiderDuration;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StartTeammateSearchTime[0x8];                            // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBWaitTimes.StartTeammateSearchTime
		double                                                     TeammateSearchDuration;                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StartEnemySearchTime[0x8];                               // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBWaitTimes.StartEnemySearchTime
		double                                                     EnemySearchDuration;                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUDO[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTutorialStage
	 * Size -> 0x0038
	 */
	struct FOrionTutorialStage
	{
	public:
		class FName                                                TargetWidgetTutorialId;                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Message;                                                 // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CS5[0x20];                                  // 0x0018(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TeamCommGameEventInfo
	 * Size -> 0x0020
	 */
	struct FTeamCommGameEventInfo
	{
	public:
		class FName                                                MessageTypeIdentifier;                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                EventText;                                               // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OROC[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TileDefinition
	 * Size -> 0x0080
	 */
	struct FTileDefinition
	{
	public:
		unsigned char                                              Type;                                                    // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TypeString;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Subtitle;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Eyebrow;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Link;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Countdown[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.TileDefinition.Countdown
		unsigned char                                              CountdownType;                                           // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MediaUrl;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsVisible : 1;                                           // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L83E[0x7F];                                  // 0x0001(0x007F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionDeckBuilder_FilterData
	 * Size -> 0x00D0
	 */
	struct FOrionDeckBuilder_FilterData
	{
	public:
		unsigned char                                              ViewData[0xB8];                                          // 0x0000(0x00B8) UNKNOWN PROPERTY: StructProperty OrionGame.OrionDeckBuilder_FilterData.ViewData
		class FText                                                CategoryText;                                            // 0x0000(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0XY2[0xB8];                                  // 0x0018(0x00B8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.PieceOfFlair
	 * Size -> 0x0010
	 */
	struct FPieceOfFlair
	{
	public:
		unsigned char                                              FlairType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RS3[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionMuteInfo
	 * Size -> 0x0040
	 */
	struct FOrionMuteInfo
	{
	public:
		unsigned char                                              PlayerState[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionMuteInfo.PlayerState
		bool                                                       bIsMuted : 1;                                            // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              PlayerName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                HeroName;                                                // 0x0000(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              HeroIcon[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionMuteInfo.HeroIcon
		unsigned char                                              UnknownData_EXKM[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCardMenuCardState
	 * Size -> 0x0018
	 */
	struct FOrionCardMenuCardState
	{
	public:
		unsigned char                                              Material[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionCardMenuCardState.Material
		unsigned char                                              Params[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionCardMenuCardState.Params
		unsigned char                                              UnknownData_DWED[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionCardMenuCardParam
	 * Size -> 0x0018
	 */
	struct FOrionCardMenuCardParam
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              VectorParam[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionCardMenuCardParam.VectorParam
		unsigned char                                              UnknownData_5X8O[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CardBuildGuideInfo
	 * Size -> 0x0038
	 */
	struct FCardBuildGuideInfo
	{
	public:
		unsigned char                                              CardGuid[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.CardBuildGuideInfo.CardGuid
		unsigned char                                              PrimaryAffinity[0x10];                                   // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.CardBuildGuideInfo.PrimaryAffinity
		bool                                                       bIsLocked : 1;                                           // 0x0000(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              CardTexture[0x8];                                        // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.CardBuildGuideInfo.CardTexture
		int32_t                                                    CardCost;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F739[0x34];                                  // 0x0004(0x0034) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SlotDescription
	 * Size -> 0x0018
	 */
	struct FSlotDescription
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColumnCount;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RowCount;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFeaturedTextStyle : 1;                               // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableAutoScroll : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RFRL[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionStaticBuffInfo
	 * Size -> 0x0020
	 */
	struct FOrionStaticBuffInfo
	{
	public:
		unsigned char                                              BuffColor[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionStaticBuffInfo.BuffColor
		unsigned char                                              BuffIcon[0x8];                                           // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionStaticBuffInfo.BuffIcon
		unsigned char                                              BuffTag[0x8];                                            // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionStaticBuffInfo.BuffTag
		unsigned char                                              UnknownData_858C[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionQuestAlertInfo
	 * Size -> 0x0030
	 */
	struct FOrionQuestAlertInfo
	{
	public:
		class FName                                                QuestName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                QuestText;                                               // 0x0000(0x0018) NativeAccessSpecifierPublic
		int32_t                                                    StartCount;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewCount;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CountMax;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8VK1[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.TimeAgo
	 * Size -> 0x0030
	 */
	struct FTimeAgo
	{
	public:
		unsigned char                                              UnknownData_K37A[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionRespawnWidgetEntry
	 * Size -> 0x0018
	 */
	struct FOrionRespawnWidgetEntry
	{
	public:
		float                                                      TimeRemaining;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HeroPortrait[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionRespawnWidgetEntry.HeroPortrait
		unsigned char                                              HeroIconWidget[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionRespawnWidgetEntry.HeroIconWidget
		unsigned char                                              UnknownData_KC8M[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.WatchedActorInfo
	 * Size -> 0x0040
	 */
	struct FWatchedActorInfo
	{
	public:
		unsigned char                                              Actor[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.WatchedActorInfo.Actor
		unsigned char                                              UnknownData_RS61[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionRegisteredTabInfo
	 * Size -> 0x0058
	 */
	struct FOrionRegisteredTabInfo
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0000(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              TabButton[0x8];                                          // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionRegisteredTabInfo.TabButton
		unsigned char                                              ContentAssetID[0x20];                                    // 0x0000(0x0020) UNKNOWN PROPERTY: AssetClassProperty OrionGame.OrionRegisteredTabInfo.ContentAssetID
		unsigned char                                              ContentInstance[0x8];                                    // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionRegisteredTabInfo.ContentInstance
		class FName                                                SceneName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ALN[0x50];                                  // 0x0008(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.DefaultTextureDataEntry
	 * Size -> 0x0010
	 */
	struct FDefaultTextureDataEntry
	{
	public:
		class FName                                                DefaultTextureName;                                      // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DefaultTexture[0x8];                                     // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.DefaultTextureDataEntry.DefaultTexture
		unsigned char                                              UnknownData_WIYH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.WidgetDataEntry
	 * Size -> 0x0010
	 */
	struct FWidgetDataEntry
	{
	public:
		class FName                                                WidgetName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Widget[0x8];                                             // 0x0000(0x0008) UNKNOWN PROPERTY: ClassProperty OrionGame.WidgetDataEntry.Widget
		unsigned char                                              UnknownData_3EYH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_EH09[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeFacetBeam
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FOrionShapeFacetBeam : public FOrionShapeFacet
	{
	public:
		unsigned char                                              UnknownData_70GQ[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeFacetBox
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FOrionShapeFacetBox : public FOrionShapeFacet
	{
	public:
		unsigned char                                              UnknownData_241C[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionShapeFacetSector
	 * Size -> 0x0028 (FullSize[0x0038] - InheritedSize[0x0010])
	 */
	struct FOrionShapeFacetSector : public FOrionShapeFacet
	{
	public:
		unsigned char                                              UnknownData_HKLA[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTargetData
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FOrionTargetData : public FGameplayAbilityTargetData
	{
	public:
		unsigned char                                              UnknownData_03N4[0x88];                                  // 0x0008(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAnimNode_CardinalBlendByAngle
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	struct FOrionAnimNode_CardinalBlendByAngle : public FAnimNode_Base
	{
	public:
		unsigned char                                              InputPoses[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionAnimNode_CardinalBlendByAngle.InputPoses
		float                                                      Angle;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BlendProfile[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionAnimNode_CardinalBlendByAngle.BlendProfile
		unsigned char                                              PoseWeights[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionAnimNode_CardinalBlendByAngle.PoseWeights
		bool                                                       bHasValidPoseWeights : 1;                                // 0x0000(0x0001) BIT_FIELD ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              PerBoneSampleData[0x10];                                 // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionAnimNode_CardinalBlendByAngle.PerBoneSampleData
		unsigned char                                              UnknownData_EXU1[0x68];                                  // 0x0010(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAnimNode_LegIK
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	struct FOrionAnimNode_LegIK : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                      ReachPrecision;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LegsDefinition[0x10];                                    // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionAnimNode_LegIK.LegsDefinition
		unsigned char                                              LegsData[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionAnimNode_LegIK.LegsData
		unsigned char                                              UnknownData_G5OT[0x88];                                  // 0x0010(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLegIKData
	 * Size -> 0x0070
	 */
	struct FOrionLegIKData
	{
	public:
		unsigned char                                              UnknownData_IZKD[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionLegIKDefinition
	 * Size -> 0x0030
	 */
	struct FOrionLegIKDefinition
	{
	public:
		unsigned char                                              IKFootBone[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionLegIKDefinition.IKFootBone
		unsigned char                                              FKFootBone[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionLegIKDefinition.FKFootBone
		int32_t                                                    NumBonesInLimb;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FootBoneForwardAxis;                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRotationLimit : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinRotationAngle;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableKneeTwistCorrection : 1;                          // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AD8Y[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.IKChain
	 * Size -> 0x0030
	 */
	struct FIKChain
	{
	public:
		unsigned char                                              UnknownData_2P15[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.IKChainLink
	 * Size -> 0x001C
	 */
	struct FIKChainLink
	{
	public:
		unsigned char                                              UnknownData_RP65[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAnimNode_MinionBehavior
	 * Size -> 0x01B8 (FullSize[0x01E8] - InheritedSize[0x0030])
	 */
	struct FOrionAnimNode_MinionBehavior : public FAnimNode_Base
	{
	public:
		unsigned char                                              DefaultPose[0x18];                                       // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_MinionBehavior.DefaultPose
		unsigned char                                              MinionBehaviorHandler[0x190];                            // 0x0000(0x0190) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_MinionBehavior.MinionBehaviorHandler
		unsigned char                                              UnknownData_JHLP[0x58];                                  // 0x0190(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAnimNode_OrientationWarping
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	struct FOrionAnimNode_OrientationWarping : public FAnimNode_Base
	{
	public:
		unsigned char                                              Source[0x18];                                            // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_OrientationWarping.Source
		float                                                      LocomotionAngle;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Settings[0x38];                                          // 0x0000(0x0038) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_OrientationWarping.Settings
		unsigned char                                              SpineBoneDataArray[0x10];                                // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionAnimNode_OrientationWarping.SpineBoneDataArray
		unsigned char                                              UnknownData_UZ9G[0xA0];                                  // 0x0010(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrientationWarpingSpineBoneData
	 * Size -> 0x0004
	 */
	struct FOrientationWarpingSpineBoneData
	{
	public:
		unsigned char                                              UnknownData_CRTU[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrientationWarpingSettings
	 * Size -> 0x0038
	 */
	struct FOrientationWarpingSettings
	{
	public:
		unsigned char                                              YawRotationAxis;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BodyOrientationAlpha;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SpineBones[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrientationWarpingSettings.SpineBones
		unsigned char                                              IKFootRootBone[0x10];                                    // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrientationWarpingSettings.IKFootRootBone
		unsigned char                                              IKFootBones[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrientationWarpingSettings.IKFootBones
		unsigned char                                              UnknownData_RMKQ[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrientationWarpingSpineBoneSettings
	 * Size -> 0x0010
	 */
	struct FOrientationWarpingSpineBoneSettings
	{
	public:
		unsigned char                                              Bone[0x10];                                              // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrientationWarpingSpineBoneSettings.Bone
	};

	/**
	 * ScriptStruct OrionGame.OrionAnimNode_SlopeWarping
	 * Size -> 0x0160 (FullSize[0x01D0] - InheritedSize[0x0070])
	 */
	struct FOrionAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              IKFootRootBone[0x10];                                    // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SlopeWarping.IKFootRootBone
		unsigned char                                              PelvisBone[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SlopeWarping.PelvisBone
		unsigned char                                              FeetDefinitions[0x10];                                   // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionAnimNode_SlopeWarping.FeetDefinitions
		unsigned char                                              FeetData[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionAnimNode_SlopeWarping.FeetData
		unsigned char                                              PelvisOffsetInterpolator[0x8];                           // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SlopeWarping.PelvisOffsetInterpolator
		unsigned char                                              GravityDir[0xC];                                         // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SlopeWarping.GravityDir
		float                                                      CachedDeltaTime;                                         // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TargetFloorNormalWorldSpace[0xC];                        // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SlopeWarping.TargetFloorNormalWorldSpace
		unsigned char                                              FloorNormalInterpolator[0x8];                            // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SlopeWarping.FloorNormalInterpolator
		unsigned char                                              TargetFloorOffsetLocalSpace[0xC];                        // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SlopeWarping.TargetFloorOffsetLocalSpace
		unsigned char                                              FloorOffsetInterpolator[0x8];                            // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SlopeWarping.FloorOffsetInterpolator
		float                                                      MaxStepHeight;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCapsuleInfoInsteadOfFootTraces : 1;                  // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsOnGround : 1;                                         // 0x0000(0x0001) BIT_FIELD ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowDebug : 1;                                          // 0x0000(0x0001) BIT_FIELD ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFloorSmoothingInitialized : 1;                          // 0x0000(0x0001) BIT_FIELD ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              ActorLocation[0xC];                                      // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SlopeWarping.ActorLocation
		unsigned char                                              GravityDirCompSpace[0xC];                                // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SlopeWarping.GravityDirCompSpace
		unsigned char                                              UnknownData_DF2K[0x1C4];                                 // 0x000C(0x01C4) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SlopeWarpingFootData
	 * Size -> 0x00E0
	 */
	struct FSlopeWarpingFootData
	{
	public:
		unsigned char                                              UnknownData_FW68[0xE0];                                  // 0x0000(0x00E0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SlopeWarpingFootDefinition
	 * Size -> 0x0040
	 */
	struct FSlopeWarpingFootDefinition
	{
	public:
		unsigned char                                              IKFootBone[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.SlopeWarpingFootDefinition.IKFootBone
		unsigned char                                              FKFootBone[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.SlopeWarpingFootDefinition.FKFootBone
		int32_t                                                    NumBonesInLimb;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ToeSocketName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HeelSocketName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootSize;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RGGH[0x3C];                                  // 0x0004(0x003C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionAnimNode_SpeedWarping
	 * Size -> 0x00C0 (FullSize[0x0130] - InheritedSize[0x0070])
	 */
	struct FOrionAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              IKFootRootBone[0x10];                                    // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SpeedWarping.IKFootRootBone
		unsigned char                                              FeetDefinitions[0x10];                                   // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionAnimNode_SpeedWarping.FeetDefinitions
		unsigned char                                              FeetData[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.OrionAnimNode_SpeedWarping.FeetData
		unsigned char                                              PelvisBone[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SpeedWarping.PelvisBone
		unsigned char                                              SpeedWarpingAxisMode;                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              FloorNormalAxisMode;                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              GravityDirAxisMode;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpeedScaling;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              ManualSpeedWarpingDir[0xC];                              // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SpeedWarping.ManualSpeedWarpingDir
		unsigned char                                              ManualFloorNormalInput[0xC];                             // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SpeedWarping.ManualFloorNormalInput
		unsigned char                                              ManualGravityDirInput[0xC];                              // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SpeedWarping.ManualGravityDirInput
		float                                                      PelvisPostAdjustmentAlpha;                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PelvisAdjustmentMaxIter;                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              PelvisAdjustmentInterp[0x8];                             // 0x0000(0x0008) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAnimNode_SpeedWarping.PelvisAdjustmentInterp
		bool                                                       bAdjustThighBonesRotation : 1;                           // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bClampIKUsingFKLeg : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bOrientSpeedWarpingAxisBasedOnFloorNormal : 1;           // 0x0000(0x0001) BIT_FIELD Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      CachedDeltaTime;                                         // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O5ON[0x12C];                                 // 0x0004(0x012C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SpeedWarpingFootData
	 * Size -> 0x0040
	 */
	struct FSpeedWarpingFootData
	{
	public:
		unsigned char                                              UnknownData_VEO2[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.SpeedWarpingFootDefinition
	 * Size -> 0x0028
	 */
	struct FSpeedWarpingFootDefinition
	{
	public:
		unsigned char                                              IKFootBone[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.SpeedWarpingFootDefinition.IKFootBone
		unsigned char                                              FKFootBone[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: StructProperty OrionGame.SpeedWarpingFootDefinition.FKFootBone
		int32_t                                                    NumBonesInLimb;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJAB[0x24];                                  // 0x0004(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.OrionTechnicData
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FOrionTechnicData : public FTableRowBase
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Component0[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionTechnicData.Component0
		int32_t                                                    Quantity0;                                               // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Component1[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionTechnicData.Component1
		int32_t                                                    Quantity1;                                               // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Component2[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionTechnicData.Component2
		int32_t                                                    Quantity2;                                               // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Component3[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionTechnicData.Component3
		int32_t                                                    Quantity3;                                               // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Component4[0x8];                                         // 0x0000(0x0008) UNKNOWN PROPERTY: ObjectProperty OrionGame.OrionTechnicData.Component4
		int32_t                                                    Quantity4;                                               // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P4T3[0x64];                                  // 0x0004(0x0064) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.DraftStats_Phase
	 * Size -> 0x0030
	 */
	struct FDraftStats_Phase
	{
	public:
		int32_t                                                    PhaseIdx;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhaseDuration;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Players[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.DraftStats_Phase.Players
		unsigned char                                              UnknownData_QMWH[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.DraftStats_PenalizedPlayers
	 * Size -> 0x0020
	 */
	struct FDraftStats_PenalizedPlayers
	{
	public:
		unsigned char                                              UniqueId[0x18];                                          // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.DraftStats_PenalizedPlayers.UniqueId
		unsigned char                                              AbortReason;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HOR[0x1F];                                  // 0x0001(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.DraftStats_Team
	 * Size -> 0x0018
	 */
	struct FDraftStats_Team
	{
	public:
		int32_t                                                    TeamNum;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamMMR;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Players[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.DraftStats_Team.Players
		unsigned char                                              UnknownData_03XR[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.DraftStats_Player
	 * Size -> 0x0070
	 */
	struct FDraftStats_Player
	{
	public:
		unsigned char                                              UniqueId[0x18];                                          // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.DraftStats_Player.UniqueId
		unsigned char                                              Platform;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PartyLeader[0x18];                                       // 0x0000(0x0018) UNKNOWN PROPERTY: StructProperty OrionGame.DraftStats_Player.PartyLeader
		int32_t                                                    TeamNum;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PickOrder;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBot : 1;                                              // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MMR;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HeroChoice;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeroChoiceDuration;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHeroHardLock : 1;                                       // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQWY[0x6F];                                  // 0x0001(0x006F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CharPerfTestSet
	 * Size -> 0x0038
	 */
	struct FCharPerfTestSet
	{
	public:
		bool                                                       bIsComplete : 1;                                         // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              TestSetName;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TestData[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty OrionGame.CharPerfTestSet.TestData
		int32_t                                                    TestInterations;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWZ1[0x34];                                  // 0x0004(0x0034) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionGame.CharPerfTestEntry
	 * Size -> 0x0090
	 */
	struct FCharPerfTestEntry
	{
	public:
		bool                                                       bIsBurst : 1;                                            // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CommandTime;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TestCommand;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CommandVector[0xC];                                      // 0x0000(0x000C) UNKNOWN PROPERTY: StructProperty OrionGame.CharPerfTestEntry.CommandVector
		int32_t                                                    CommandParam;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CommandString;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CommandState : 1;                                        // 0x0000(0x0001) BIT_FIELD ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              CommandID;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A33O[0x80];                                  // 0x0010(0x0080) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
