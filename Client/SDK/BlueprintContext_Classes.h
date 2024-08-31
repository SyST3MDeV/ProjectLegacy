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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class BlueprintContext.BlueprintContextBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBlueprintContextBase : public UObject
	{
	public:
		int32_t                                                    LocalPlayerIndex;                                        // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CRZU[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.AnalogCursorContext
	 * Size -> 0x0140 (FullSize[0x0170] - InheritedSize[0x0030])
	 */
	class UAnalogCursorContext : public UBlueprintContextBase
	{
	public:
		unsigned char                                              UnknownData_F1F4[0x80];                                  // 0x0030(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAnalogCursorToggle;                                    // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAnalogCursorHovered;                                   // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnFaceButtonClick;                                       // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SB29[0x90];                                  // 0x00E0(0x0090) MISSED OFFSET (PADDING)

	public:
		void SetNormalizedPosition(const struct FVector2D& NewRelativePosition);
		void SetIsListeningForGestures(bool bNewlyListening);
		void SetControllingAnalogStick(EOrionAnalogStick NewAnalogStick);
		void OnFaceButtonClick__DelegateSignature();
		void OnAnalogCursorToggle__DelegateSignature(bool UsingAnalog);
		void OnAnalogCursorHovered__DelegateSignature(bool bIsHovering);
		void OnAnalogCursorEnabledToggle__DelegateSignature(bool bIsEnabled);
		bool IsUsingAnalogCursor();
		bool IsHovering();
		bool IsDelegateToggleBound();
		struct FVector2D GetVelocity();
		float GetRightTriggerValue();
		float GetRadius();
		struct FVector2D GetNormalizedPosition();
		struct FVector2D GetLastCursorDirection();
		bool GetIsUsingGamePad();
		bool GetIsInFastMode();
		class FName GetHoveredWidgetName();
		void GetGestureInfo(EOrionGestureDirection* Direction0, EOrionGestureDirection* Direction1);
		EOrionGestureDirection GetDirectionFromVector(const struct FVector2D& Vector);
		struct FVector2D GetCurrentPosition();
		struct FVector2D GetAnalogStickValues();
		void EnableAnalogCursor(bool bEnableParallax);
		void DisableAnalogCursor();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.AutomationContext
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UAutomationContext : public UBlueprintContextBase
	{
	public:
		class FScriptMulticastDelegate                             OnOrionCharSpawned;                                      // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZMZ[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		void ViewTarget(class AActor* ActorToFace);
		void SetHealth(class AOrionChar* InChar, float InPercent);
		void ScriptAIBehavior(class AOrionChar* InChar, class UAIScriptedBehavior* ScriptedBehavior);
		void ResetAFKTime();
		void RegisterForActorSpawnCallbacks();
		void OnOrionCharSpawned__DelegateSignature(class AOrionChar* NewOrionChar);
		float GetRemainingCooldownForAbility(class UOrionAbilitySystemComponent* AbilitySystem, EOrionAbilityBinding InputID);
		void ConfirmAbilityForPawn(class AOrionChar* InChar);
		void CancelAllAbilities(class AOrionChar* InChar);
		void CancelAbilityForPawn(class AOrionChar* InChar);
		void ActivateAIAbility(class AOrionChar* InChar, EOrionAbilityBinding InputID);
		void ActivateAbilityForPawn(class AOrionChar* InChar, EOrionAbilityBinding InputID, bool bPressed);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.BannerContext
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UBannerContext : public UBlueprintContextBase
	{
	public:
		unsigned char                                              UnknownData_Y1E0[0x78];                                  // 0x0030(0x0078) MISSED OFFSET (PADDING)

	public:
		void SetupPrototypeFromDef(class UOrionMcpBannerItemDefinition* BannerDef);
		bool SetupBannerSocketFromIdent(struct FSingleBannerEntry* Socket, const class FString& BannerIdent, bool bRetainSocketID);
		void SetPrototypeStaffFromIdent(const class FString& BannerIdent, bool bRetainSocketID);
		void SetPrototypeSocketIdentFromArray(TArray<class FString> SocketIdentArray, EOrionBannerType SocketType);
		bool SetPrototypeSocketIdent(int32_t socketIndex, const class FString& Ident, EOrionBannerType SocketType);
		bool SetPrototypeSocketAlteration(int32_t socketIndex, int32_t AlterationIndex, const class FString& Ident, EOrionBannerType SocketType);
		bool STATIC_IsValidAlteration(const class FString& alterationId);
		void GetProtoypeBanner(struct FSingleBannerEntryRoot* BannerDef);
		void GetPrototypeSocketIdentArray(TArray<class FString>* SocketIdentArray, EOrionBannerType SocketType);
		bool GetPrototypeSocketIdent(int32_t socketIndex, class FString* SocketIdent, EOrionBannerType SocketType);
		bool GetPrototypeSocketAlteration(int32_t socketIndex, int32_t AlterationIndex, class FString* SocketIdent, EOrionBannerType SocketType);
		void GetPrototypeAlterationIdentArray(TArray<class FString>* AlterationIdentArray, int32_t socketIndex, EOrionBannerType SocketType);
		int32_t GetOwnedIDBannerItem(TArray<class UOrionMcpBannerItem*> Banners, const class FString& InItemIdent, struct FBannerItemIdent* OutItemID);
		int32_t GetNumSocketsOfType(const struct FSingleBannerEntryRoot& BannerEntry, EOrionBannerType ItemType);
		int32_t GetNumSockets(const struct FSingleBannerEntryRoot& BannerEntry);
		int32_t GetNumAlterationsOnPrototypeSocket(int32_t socketIndex, EOrionBannerType SocketType);
		class FString GetNameFromDisplayName(EOrionBannerType ItemType, const class FString& Ident);
		int32_t STATIC_GetMaxAlterations();
		class FString GetDisplayNameFromName(EOrionBannerType ItemType, const class FString& Ident);
		bool GetBannerItemStringsOfType(EOrionBannerType ItemTypes, TArray<class FString>* OutArray, bool bMustOwn);
		TArray<class UOrionMcpBannerItemDefinition*> GetBannerItemsOfType(EOrionBannerType ItemType);
		class FString GetBannerItemNameFromDisplayName(EOrionBannerType ItemType, const class FString& Ident);
		class FString GetBannerItemDisplayNameFromName(EOrionBannerType ItemType, const class FString& Ident);
		void GetBannerAlterationStrings(TArray<class FString>* OutArray, bool bMustOwn);
		class FString GetBannerAlterationNameFromDisplayName(const class FString& Ident);
		class FString GetBannerAlterationDisplayNameFromName(const class FString& Ident);
		void GeneratePrototypeBannerItemIDs(class AOrionPlayerController_Game* PlayerController, TArray<struct FBannerItemIdent> ItemIdents);
		void GenerateBannerItemIDs(class AOrionPlayerController_Game* PlayerController, TArray<struct FBannerItemIdent> ItemIdents, struct FSingleBannerEntryRoot* BannerEntry);
		class UOrionMcpBannerItem* FindActiveBanner(class UOrionMcpProfileAccount* McpProfile);
		bool STATIC_CreateRandomBannerDef(struct FSingleBannerEntryRoot* RandomBanner);
		bool STATIC_CreateDefaultBannerDef(struct FSingleBannerEntryRoot* DefaultBanner);
		int32_t STATIC_CountValidAlterations(TArray<class FString> Alterations);
		int32_t STATIC_CountOverlapAlterations(const struct FBannerItemIdent& BannerItem);
		void BuildListOfExistingItemAllocations(class UOrionMcpProfileAccount* McpProfile, TArray<struct FBannerItemIdent>* AllocatedBannerIdents, TArray<struct FBannerItemIdent>* OwnedBannerItems);
		void STATIC_AddRandomItemToSocketSlot(struct FSingleBannerEntry* Socket);
		void STATIC_AddRandomAlterationsToSocket(struct FSingleBannerEntry* Socket, int32_t NumRandomAlterations);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.BaseHUDContext
	 * Size -> 0x0828 (FullSize[0x0858] - InheritedSize[0x0030])
	 */
	class UBaseHUDContext : public UBlueprintContextBase
	{
	public:
		unsigned char                                              UnknownData_RCDF[0x1B0];                                 // 0x0030(0x01B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCardLevelUpDelegate;                                   // 0x01E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCardPointsUpdatedDel;                                  // 0x01F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUltimateReady;                                         // 0x0200(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N0GZ[0xC8];                                  // 0x0210(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EOrionMenuSlotTypes                                        CurrentMenu;                                             // 0x02D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DRXI[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOrionAbilityUIData>                         AbilityUIData;                                           // 0x02E0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UOrionBaseHUDWidget*                                 HUDWidget;                                               // 0x02F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P7GE[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMenuOpenStateChangedDel;                               // 0x0300(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnCannotActivateAbility;                                 // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZULV[0x80];                                  // 0x0320(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLevelUpDel;                                            // 0x03A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FI57[0x230];                                 // 0x03B0(0x0230) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerXPUpdateDel;                                     // 0x05E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnCardXPUpdateDelegate;                                  // 0x05F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnAbilityUpdateDel;                                      // 0x0600(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnKDAUpdateDel;                                          // 0x0610(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnHeroDeath;                                             // 0x0620(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_59LP[0x210];                                 // 0x0630(0x0210) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHUDAlertAsset*>                              HUDAlertQueue;                                           // 0x0840(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2RVD[0x8];                                   // 0x0850(0x0008) Fix size for supers

	public:
		void QueueHUDAlert(class UHUDAlertAsset* AlertAsset);
		void OnUltimateReady__DelegateSignature(int32_t InputID);
		void OnPlayerXPUpdate__DelegateSignature(int32_t XP, int32_t MaxXP);
		void OnLevelUp__DelegateSignature(int32_t NewLevel);
		void OnKDAUpdate__DelegateSignature(int32_t Kills, int32_t Deaths, int32_t Assists, int32_t Minions);
		void OnHeroDeathOrSpawnEvent__DelegateSignature(const struct FOrionHUDTeamStatusInfo& NewTeamInfo);
		void OnCardXPUpdate__DelegateSignature(float NewXP, float NewXPMax);
		void OnCardPointsUpdated__DelegateSignature(int32_t NewCardActivationPointsSpent, int32_t NewCardActivationPointsMax);
		void OnCardLevelUp__DelegateSignature(float NewLevel);
		void OnCannotActivateAbility__DelegateSignature(int32_t InputID, const struct FGameplayTagContainer& RelevantTags);
		void OnAbilityUpdate__DelegateSignature(EOrionAbilityBinding InputID, const struct FOrionAbilityUIData& AbilityData);
		bool IsUltimateReady();
		class UWidget* GetTopOpenMenu();
		EOrionTeam GetMyTeam();
		bool GetIsMenuVisible(EOrionMenuSlotTypes MenuType);
		struct FOrionBaseHUDPlayerInfo GetHUDPlayerInfo();
		EOrionTeam GetEnemyTeam();
		EOrionDesiredAnalogCursorState GetDesiredAnalogCursorState();
		void GetCurrentMenu(EOrionMenuSlotTypes* ActiveMenu);
		float GetCurrentMatchTime();
		struct FOrionAbilityUIData GetAbilityData(EOrionAbilityBinding InputID);
		void ChangeMenuOpenState(EOrionMenuSlotTypes MenuSlot, bool bNewlyOpen);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.PlayerAwareContext
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UPlayerAwareContext : public UBlueprintContextBase
	{
	public:
		class FScriptMulticastDelegate                             OnMcpError;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate

	public:
		void OnMcpError__DelegateSignature(const class FText& ErrorMessage);
		struct FDateTime GetMCPTime();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.BoostContext
	 * Size -> 0x0060 (FullSize[0x00A0] - InheritedSize[0x0040])
	 */
	class UBoostContext : public UPlayerAwareContext
	{
	public:
		class FScriptMulticastDelegate                             OnBoostsChanged;                                         // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1A94[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (PADDING)

	public:
		bool IsBoostActive(EOrionBoostType BoostType);
		bool IsAnyBoostActive();
		int32_t GetUsesRemaining(EOrionBoostType BoostType);
		void GetBoosts(TArray<class UOrionMcpBoostItem*>* Boosts);
		struct FDateTime GetBoostExpirationTime(EOrionBoostType BoostType);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.CardShopContext
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UCardShopContext : public UBlueprintContextBase
	{
	public:
		class FScriptMulticastDelegate                             OnHighlightChangeDelegate;                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             DeckCardArraySizeChangedDelegate;                        // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QJJN[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetHighlightedSlot(int32_t NewHighlightedSlot);
		void RemoveCardFromHandAtIndex(int32_t HandIndex);
		void RemoveCardDataFromDeck(class UOrionCardData* CardData);
		void OnHighlightChange__DelegateSignature(int32_t NewSlotIndex, int32_t OldSlotIndex);
		void OnDeckCardsFilered__DelegateSignature(TArray<class UOrionCardData*> FilteredCards);
		int32_t GetNumOfCardsInDeck();
		int32_t GetNumCardActivationPointsSpent();
		int32_t GetNumCardActivationPoints();
		int32_t GetMaxNumCardActivationPoints();
		int32_t GetHighlightedSlot();
		EOrionCardSlottypes GetHandCardSlotType(int32_t HandIndex);
		class FText GetDeckMessage(int32_t SlotIndex, TArray<class UOrionCardData*> DeckCards);
		class FText GetDeckCategoryText(int32_t SlotIndex, TArray<class UOrionCardData*> DeckCards);
		void GetCardsByType(ECardFilterType Filter, TArray<class UOrionCardData*>* Cards);
		class AOrionCard* GetCardActorFromHandAtIndex(int32_t HandIndex);
		void FilterCardsWithSlot(int32_t SlotIndex, const class FScriptDelegate& Callback);
		void DeckCardArraySizeChanged__DelegateSignature();
		bool CanAffordCard(class UOrionCardData* TestCard);
		bool CanAddCardDataToHandAtIndex(int32_t HandIndex, class UOrionCardData* CardData);
		void AddCardDataToHandAtIndex(int32_t HandIndex, class UOrionCardData* CardData);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.ChunkInstallContext
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UChunkInstallContext : public UBlueprintContextBase
	{
	public:
		class FScriptMulticastDelegate                             OnInstallComplete;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YQ9L[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetInstallSpeed(EInstallSpeed NewSpeed);
		void Prioritize(EOrionChunkId InChunk, EInstallPriority InPriority);
		struct FTimespan GetTimeRemaining(EOrionChunkId InChunk);
		EInstallStatus GetStatus(EOrionChunkId InChunk);
		float GetProgress(EOrionChunkId InChunk);
		EInstallSpeed GetInstallSpeed();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.DeckBuilderContext
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDeckBuilderContext : public UBlueprintContextBase
	{
	public:
		void OnMcpResult__DelegateSignature(bool bSuccess, const class FText& ErrorMessage);
		int32_t GetMaxDeckNameLength();
		void GenerateDeckName(class UEditableText* InTextField, class UOrionHeroData* InHeroData);
		void FormatDeck(class UOrionMcpDeckItem* Deck, const class FText& NewDeckName, const class FString& HeroTemplateName, class UOrionMcpDeckItem* Template, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.FriendsContext
	 * Size -> 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
	 */
	class UFriendsContext : public UBlueprintContextBase
	{
	public:
		class FScriptMulticastDelegate                             OnQuickInviteListChanged;                                // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F3JP[0xC8];                                  // 0x0040(0x00C8) MISSED OFFSET (PADDING)

	public:
		void SendFriendRequest(const struct FUniqueNetIdRepl& PlayerNetID);
		void RejectFriendRequest(const struct FUniqueNetIdRepl& PlayerNetID);
		void OnFriendsListChanged__DelegateSignature(TArray<class UOrionFriendItem*> Friends);
		void InitiateWhisperToFriend(const struct FUniqueNetIdRepl& FriendNetID);
		void HandleFriendsChanged();
		void GetQuickInviteList(TArray<class UOrionFriendItem*>* QuickInviteFriends);
		EOrionFriendshipStatus GetFriendshipStatus(const struct FUniqueNetIdRepl& PlayerNetID);
		void CancelFriendRequest(const struct FUniqueNetIdRepl& PlayerNetID);
		void AcceptFriendRequest(const struct FUniqueNetIdRepl& PlayerNetID);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.HeroAttributesContext
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class UHeroAttributesContext : public UBlueprintContextBase
	{
	public:
		bool                                                       bShouldShowDeltaStats;                                   // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OIH[0x7F];                                  // 0x0031(0x007F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionAbilitySystemComponent*                        StatsAbilitySystemComponent;                             // 0x00B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UF4M[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateBaseAttributes();
		void UpdateAttributesWithPotentialCard(int32_t CardSlotIndex, const struct FOrionCardInstance& PotentialCard);
		void GenerateHeroAttributesEntries(TArray<class UHeroAttributeListEntry*>* OutAttributeEntries);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.HeroContext
	 * Size -> 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
	 */
	class UHeroContext : public UPlayerAwareContext
	{
	public:
		unsigned char                                              UnknownData_WZHQ[0x30];                                  // 0x0040(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetSelectedSkin(class UOrionSkinItemDefinition* Skin);
		void SetHeroSettings(class UOrionHeroData* Hero, class UOrionMcpDeckItem* Deck, EOrionRole Role, EOrionPosition Position);
		void SetDeckForPlayer(class UOrionMcpDeckItem* NewDeck);
		void OnSelectedSkinChanged__DelegateSignature(class UOrionSkinItemDefinition* Skin);
		void NotifyPreviewSkinChanged(class UOrionSkinItemDefinition* Skin);
		void NotifyPreviewHeroChanged(class UOrionHeroData* NewHero);
		class UOrionSkinItemDefinition* GetSelectedSkinForHero(class UOrionHeroData* HeroData);
		struct FOrionHeroDataSpec GetSelectedHeroDataSpec();
		class UOrionHeroData* GetSelectedHero();
		struct FOrionCosmeticPlayerChoices GetSelectedCosmeticOptions();
		class FText GetQueueTimeFor(class UOrionHeroData* InHero, bool bCoopVsAI, int32_t* OutNumSamples);
		bool GetHeroSettings(class UOrionHeroData* Hero, class UOrionMcpDeckItem** Deck, EOrionRole* Role, EOrionPosition* Position);
		class UOrionHeroData* GetHeroByString(const class FString& HeroName);
		TArray<class UOrionHeroData*> GetAllAvailableHeroes();
		class UOrionAbility* GetAbility(class UOrionHeroData* Hero, EOrionAbilityBinding Slot);
		TArray<class UOrionHeroData*> FilterAvailableHeroes(const class FText& SearchText);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.HUDContext
	 * Size -> 0x0E58 (FullSize[0x16B0] - InheritedSize[0x0858])
	 */
	class UHUDContext : public UBaseHUDContext
	{
	public:
		unsigned char                                              UnknownData_8S9F[0x8];                                   // 0x0858(0x0008) Fix Super Size
		unsigned char                                              UnknownData_FKVL[0x930];                                 // 0x0860(0x0930) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMatchInfoTextChangeDel;                                // 0x1190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnMatchInfoTextVisibilityChangeDel;                      // 0x11A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnHeroSpecificHUDElementChangeDel;                       // 0x11B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnHUDColorChangeDel;                                     // 0x11C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnTeamNumChangeDel;                                      // 0x11D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnBuffInfoAdded;                                         // 0x11E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnBuffInfoUpdated;                                       // 0x11F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnBuffInfoRemoved;                                       // 0x1200(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnTeamInfoUpdateDel;                                     // 0x1210(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnHeroSpawn;                                             // 0x1220(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnLocalHeroDeath;                                        // 0x1230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnLocalHeroSpawn;                                        // 0x1240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnLocalPlayerHeroSetDel;                                 // 0x1250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnPlayerHandCardAbilityUpdateDel;                        // 0x1260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NJF3[0x70];                                  // 0x1270(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTeamSurrenderStatusUpdateDel;                          // 0x12E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnPlayerSurrenderStatusUpdateDel;                        // 0x12F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnDamageEventDelegate;                                   // 0x1300(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnWellProgressBarUpdateDelegate;                         // 0x1310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnWellProgressBarTextUpdateDelegate;                     // 0x1320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnWellProgressBarColorUpdateDelegate;                    // 0x1330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             UpdateAnalogCursorStateDelegate;                         // 0x1340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnSpectatorFollowedHeroChange;                           // 0x1350(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnSpectatorCameraModeChange;                             // 0x1360(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnSpectatorToggleControllerCursor;                       // 0x1370(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnConsoleOpenStateChangeDelegate;                        // 0x1380(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnStatusEffectUpdateDel;                                 // 0x1390(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnMatchStartDelegate;                                    // 0x13A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnIsInBaseChangeDelegate;                                // 0x13B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnCanShopChangeDelegate;                                 // 0x13C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnTowerInfoUpdateDel;                                    // 0x13D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnTargeted;                                              // 0x13E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnNewGameEventMessage;                                   // 0x13F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnMiniMapModeChanged;                                    // 0x1400(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		struct FOrionLocalPlayerUIInfo                             LocalPlayerInfo;                                         // 0x1410(0x00D8) NativeAccessSpecifierPrivate
		int32_t                                                    LastSeenDeathLogSerialNumber;                            // 0x14E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    LastSeenDeathLogExpansionState;                          // 0x14EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FOrionJungleBuffInfo>                        BuffInfoArray;                                           // 0x14F0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FOrionHUDTeamStatusInfo>                     FriendlyTeamStatusInfo;                                  // 0x1500(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FOrionHUDTeamStatusInfo>                     EnemyTeamStatusInfo;                                     // 0x1510(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FOrionCoreInfo                                      MyCoreInfo;                                              // 0x1520(0x0028) NativeAccessSpecifierPrivate
		struct FOrionCoreInfo                                      EnemyCoreInfo;                                           // 0x1548(0x0028) NativeAccessSpecifierPrivate
		TArray<struct FOrionCardAbilityData>                       CardAbilityData;                                         // 0x1570(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FOrionStatusEffectUIInfo                            StatusEffectUIInfo;                                      // 0x1580(0x0038) NativeAccessSpecifierPrivate
		struct FOrionTowerTargetingInfo                            TowerTargetingInfo;                                      // 0x15B8(0x0050) NativeAccessSpecifierPrivate
		TArray<TWeakObjectPtr<class AOrionDamageableObjective_Base>> OverlappingTargetingActors;                              // 0x1608(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3190[0x8];                                   // 0x1618(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UOrionUserWidget_GameEventMessage>    CurrentMessageWidget;                                    // 0x1620(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate
		class UClass*                                              HeroKillEventWidgetClass;                                // 0x1628(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              LevelUpEventWidgetClass;                                 // 0x1630(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAbilitySystemComponent*                             WatchedAbilityComponent;                                 // 0x1638(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FOrionBuffStatusEffectInfo>                  BuffStatusEffectInfoArray;                               // 0x1640(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FOrionHUDInputInfo                                  HUDInputInfo;                                            // 0x1650(0x0014) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2R0T[0x4C];                                  // 0x1664(0x004C) MISSED OFFSET (PADDING)

	public:
		void SetSprintCastingEndTime(float EndTime);
		void SetMatchInfoTextVisibility(bool bIsNewlyVisible);
		void SetMatchInfoText(const class FText& NewMatchInfoText);
		void SetIsHUDHitTestable(bool bNewIsHitTestable);
		void SetHUDColor(const struct FLinearColor& NewHUDColor);
		void SetHeroSpecificHUDElementIcon(class UTexture2D* NewIcon);
		void SetAutoConfirmEndTime(float EndTime);
		void OnTowerInfoUpdate__DelegateSignature(const struct FOrionTowerTargetingInfo& NewTowerInfo);
		void OnTeamNumChange__DelegateSignature(EOrionTeam NewTeamNum);
		void OnTeamInfoUpdateDelegate__DelegateSignature(EOrionTeam TeamNum, int32_t PlayerIndex, const struct FOrionHUDTeamStatusInfo& NewTeamInfo);
		void OnTeamInfoUpdate__DelegateSignature(EOrionTeam TeamNum, int32_t PlayerIndex, const struct FOrionHUDTeamStatusInfo& NewTeamInfo);
		void OnTargeted__DelegateSignature(bool bShowTargetingPopup);
		void OnStatusEffectUpdate__DelegateSignature(const struct FOrionStatusEffectUIInfo& NewStatusEffectInfo);
		void OnSpectatorToggleControllerCursor__DelegateSignature();
		void OnSpectatorFollowedHeroChange__DelegateSignature(EOrionTeam HeroTeam, int32_t HeroIndex);
		void OnSpectatorCameraModeChange__DelegateSignature(ESpectatorCameraType NewCameraMode);
		void OnPlayerHeroSet__DelegateSignature(class UOrionHeroData* NewHeroData);
		void OnNewGameEventMessage__DelegateSignature(const struct FOrionGameEventMessageData& MessageData);
		void OnMiniMapModeChanged__DelegateSignature(bool bIsLarge);
		void OnMatchStart__DelegateSignature();
		void OnMatchInfoTextVisibilityChange__DelegateSignature(bool bIsNewlyVisible);
		void OnMatchInfoTextChange__DelegateSignature(const class FText& NewMatchInfoText);
		void OnHUDColorChange__DelegateSignature(const struct FLinearColor& NewColor);
		void OnHeroSpecificHUDElementChange__DelegateSignature(class UTexture2D* NewIcon);
		void OnDamageEvent__DelegateSignature(const struct FOrionUIDamageEventInfo& UIDamageEventInfo);
		void OnConsoleOpenStateChange__DelegateSignature(bool bConsoleNewlyOpen);
		bool IsSurrenderEnabled();
		bool IsLocalHeroDead();
		void InvalidateHUDCache();
		void HUDAnimationStarting(const class FName& RequestingName);
		void HUDAnimationEnding(const class FName& RequestingName);
		void HideVictoryScreen();
		void HandleInput_Blueprint(const class FName& ActionBindingName);
		struct FOrionTowerTargetingInfo GetTowerTargetingInfo();
		struct FOrionHUDTeamStatusInfo GetTeamUIInfo(int32_t Index, EOrionTeam TeamNum);
		struct FVector2D STATIC_GetSafeZonePadding(ESafeZonePadding PaddingType);
		EOrionTeam GetMyTeam();
		struct FOrionHUDInputActionNames GetHUDInputActionNames();
		EOrionTeam GetEnemyTeam();
		float GetDamageIndicatorRotation(const struct FVector& PlayerLocation, const struct FVector& InstigatorLocation);
		struct FOrionCoreInfo GetCoreInfo(EOrionTeam TeamNum);
		TArray<class UOrionCardData*> GetCardDataInPlayerHand();
		bool GetAllowCardMenu();
		void FlushPressedActionBindingKeys(const class FName& ActionBindingName);
		void FadeHUDOut(float FadeInTime);
		void FadeHUDIn();
		void CancelAllAbilities();
		struct FOrionLocalPlayerUIInfo BP_GetLocalPlayerInfo();
		void AddStatusEffectEvent();
		void AddDamageEvent(const struct FOrionUIDamageEventInfo& DamageEventInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.InventoryContext
	 * Size -> 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
	 */
	class UInventoryContext : public UPlayerAwareContext
	{
	public:
		class FScriptMulticastDelegate                             OnCardPackOpened;                                        // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FScalableFloat                                      MaxCardsInDeck;                                          // 0x0050(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bMcpOperationPending;                                    // 0x0078(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WH9A[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDecomposeCardComplete;                                 // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected

	public:
		void SetDeckName(const class FString& DeckName, const class FString& DeckId);
		void SetCardsForDeck(TArray<class FString> CardIdList, const class FString& DeckId);
		void OnMcpCardsFiltered__DelegateSignature(TArray<class UOrionMcpCardItem*> FilteredCards);
		void OnDecomposeCard__DelegateSignature();
		void OnDecksFiltered__DelegateSignature(TArray<class UOrionMcpDeckItem*> FilteredDecks);
		void OnCardsFiltered__DelegateSignature(TArray<class UOrionCardData*> FilteredCards);
		void OnCardPacksChanged__DelegateSignature();
		class UOrionMcpDeckItem* GetUnusedDeck();
		int32_t GetNumCardsForDeck(class UOrionMcpDeckItem* DeckItem, bool bCountActive, bool bCountPassive, bool bCountPrimeHelix, bool bCountUpgrade);
		int32_t GetNumCardPacks();
		class UOrionMcpCardPackItem* GetNextCardPack();
		class UOrionMcpHeroItem* GetHeroFromData(class UOrionHeroData* HeroData);
		void GetHeroes(TArray<class UOrionMcpHeroItem*>* Heroes);
		class UOrionMcpGlyphItem* GetGlyphForHero(class UOrionHeroData* HeroData);
		void GetDecksForHero(TArray<class UOrionMcpDeckItem*>* Decks, class UOrionHeroData* HeroData, bool bAllowLockedDecks);
		void GetDecksByText(const class FText& SearchText, bool bAllowLockedDecks, bool bIncludeUninitialized, const class FScriptDelegate& Callback);
		void GetDecks(TArray<class UOrionMcpDeckItem*>* Decks);
		TArray<class UOrionMcpCardItem*> GetCardsForDeck(class UOrionMcpDeckItem* DeckItem);
		void GetCardPacks(TArray<class UOrionMcpCardPackItem*>* CardPacks);
		void GetBanners(TArray<class UOrionMcpBannerItem*>* Banners);
		void GetBannerAlterations(TArray<class UOrionMcpBannerAlterationItem*>* BannerAlterations);
		struct FOrionAffinityStruct GetAffinitiesForDeck(class UOrionMcpDeckItem* DeckItem);
		class UOrionSkinItemDefinition* GetActiveSkinForHero(class UOrionHeroData* HeroData);
		void GetActiveDecks(TArray<class UOrionMcpDeckItem*>* Decks, bool bAllowLockedDecks, bool bIncludeUninitialized);
		void GetActiveBannerID(class FString* ActiveID);
		void GetActiveBanner(struct FActiveBannerStruct* ActiveBanner);
		void DecomposeCard(class UOrionMcpCardItem* CardItem);
		bool CanAddCardToDeck(class UOrionMcpDeckItem* DeckItem, const class FString& CardId);
		void AddCreateDeckEntry(TArray<class UOrionMcpDeckItem*>* Decks);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.MatchmakingContext
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UMatchmakingContext : public UBlueprintContextBase
	{
	public:
		class FScriptMulticastDelegate                             OnRegionChanged;                                         // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UOrionLobbyBuilder*                                  LobbyBuilder;                                            // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S7K2[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		void StartRejoin(const class FScriptDelegate& InCompletionDelegate);
		bool SelectRegion(const class FString& RegionId, bool bSaveRegion);
		void RefreshRegionPings(const class FScriptDelegate& InCompletionDelgate);
		void OnRejoinAttemptComplete__DelegateSignature(bool bSuccess);
		void OnRefreshRegionPingComplete__DelegateSignature();
		bool IsCurrentMatchOfType(EOrionMatchmakingType MatchmakingType);
		bool HasValidOnlinePresence(class FText* ErrorString);
		class FString GetSelectedRegionId();
		EPingQuality GetPingQuality(class UMatchmakingRegion* Region);
		EOrionBanReason GetCurrentBanInfo(struct FTimespan* TimeLeft);
		void GetAvailableRegions(TArray<class UMatchmakingRegion*>* OutRegionOptions, int32_t* OutSelectedRegion);
		void AddMatchmakingCustomKeyToSession();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.MatchTutorialContext
	 * Size -> 0x0100 (FullSize[0x0130] - InheritedSize[0x0030])
	 */
	class UMatchTutorialContext : public UBlueprintContextBase
	{
	public:
		unsigned char                                              UnknownData_CAL9[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, bool>                                  RunTimeValues;                                           // 0x0038(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JRI3[0x78];                                  // 0x0088(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHUDTutorialCompleteDelegate;                           // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class UOrionTutorial*                                      CurrentTutorial;                                         // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                CurrentFocusedTutorialID;                                // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GBCG[0x10];                                  // 0x0120(0x0010) MISSED OFFSET (PADDING)

	public:
		void StartTutorial(class UClass* TutorialClass);
		void RequestPathToPosition(const struct FVector& TargetPosition);
		void RequestPathToActor(class AActor* TargetActor);
		void RequestFade(const class FName& TutorialID, EOrionHUDFadeRequest FadeType);
		bool InTutorialMode();
		struct FOrionHUDTutorialWidgetNames GetHUDTutorialWidgetNames();
		void EndTutorial(class UClass* TutorialClass);
		bool CurrentlyPlayingTutorial();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.McpContext
	 * Size -> 0x0160 (FullSize[0x0190] - InheritedSize[0x0030])
	 */
	class UMcpContext : public UBlueprintContextBase
	{
	public:
		TArray<struct FWebEnvironmentUrl>                          WebCreateEpicAccountUrl;                                 // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FWebEnvironmentUrl>                          WebUpgradeEpicAccountUrl;                                // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FWebEnvironmentUrl>                          WebForgotPasswordEpicAccountUrl;                         // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FWebEnvironmentUrl>                          WebManageEpicAccountUrl;                                 // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEulaAvailable;                                         // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLinkedConsoleAccount;                                  // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FFriendCode>                                 CachedFriendCodes;                                       // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic
		class FText                                                FriendCodeGiftMessageTitle;                              // 0x00A0(0x0018) Edit, Config, NativeAccessSpecifierPublic
		TArray<struct FFriendCodeLocString>                        FriendCodeGiftMessageTitleLocTexts;                      // 0x00B8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic
		class FText                                                FriendCodeGiftMessageBody;                               // 0x00C8(0x0018) Edit, Config, NativeAccessSpecifierPublic
		class FText                                                FriendCodeGiftMessageDetails;                            // 0x00E0(0x0018) Edit, Config, NativeAccessSpecifierPublic
		TArray<struct FFriendCodeLocString>                        FriendCodeGiftMessageDetailsLocTexts;                    // 0x00F8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TAMC[0x88];                                  // 0x0108(0x0088) MISSED OFFSET (PADDING)

	public:
		void WebUpgradeEpicAccount(const class FText& Email, const class FScriptDelegate& OnCompleteDelegate);
		void WebManageEpicAccount();
		void WebForgotPasswordEpicAccount(const class FText& Email, const class FScriptDelegate& OnCompleteDelegate);
		void WebCreateEpicAccount(const class FText& Email, const class FScriptDelegate& OnCompleteDelegate);
		void UnLinkConsoleAccount(const class FScriptDelegate& OnCompleteDelegate);
		bool ShouldShowWatermark();
		void SendFriendCodePlatformMessage(const struct FFriendCode& FriendCode, const class FScriptDelegate& OnCompleteDelegate);
		void QueryUnredeemedFriendCodes(const class FScriptDelegate& OnCompleteDelegate);
		void OnWebUpgradeEpicAccountRequestComplete__DelegateSignature(bool bSuccess, const class FText& Message);
		void OnWebForgotPasswordRequestComplete__DelegateSignature(bool bSuccess, const class FText& Message);
		void OnWebCreateEpicAccountRequestComplete__DelegateSignature(bool bSuccess, const class FText& Message, const class FString& AuthCode);
		void OnUnlinkAccountRequestComplete__DelegateSignature(bool bSuccess, const class FText& Message);
		void OnSendFriendCodePlatformMessageComplete__DelegateSignature(bool bMessageSent);
		void OnQueryUnredeemedFriendCodesComplete__DelegateSignature(bool bSuccess, TArray<struct FFriendCode> FriendCodes);
		void OnLoginRequestComplete__DelegateSignature(ELoginResult Result, const class FText& Message);
		void OnLinkedConsoleAccount__DelegateSignature(const class FText& DisplayName, const class FText& ConsoleDisplayName);
		void OnIssueFriendCodeComplete__DelegateSignature(bool bSuccess, const struct FFriendCode& FriendCode);
		void OnEulaAvailable__DelegateSignature(const class FText& EulaText);
		void OnCreateAccountRequestComplete__DelegateSignature(ECreateAccountResult Result, const class FText& Message);
		void OnCheckPurchaseRequiredForAccess__DelegateSignature(bool bPurchaseRequired);
		void OnCheckHasRedeemForAccess__DelegateSignature(bool bHasInvite, bool bHasPurchase);
		void Logout();
		void LoginAuthCode(const class FString& AuthCode, const class FScriptDelegate& OnCompleteDelegate);
		void Login(const class FText& Username, const class FText& Password, bool bRememberMe, const class FScriptDelegate& OnCompleteDelegate);
		bool IsValidEmail(const class FText& InEmail);
		bool IsUnlinkConsoleAccountAllowed();
		void IssueFriendCode(const class FScriptDelegate& OnCompleteDelegate);
		bool IsRememberMeChecked();
		bool IsRememberMeAllowed();
		bool IsLoggedIn();
		bool IsHeadlessAccountAllowed();
		bool IsHeadlessAccount();
		bool IsBusy();
		bool HasPlaystationPlus();
		void HACK_SetDisplayName(const class FString& DisplayName);
		class FText GetUsername();
		int32_t GetNumFriendCodesToIssue();
		class FText GetLoginStatus();
		class FText GetGameSessionWatermarkText();
		class FText GetFriendCodeDisplayName(const struct FFriendCode& FriendCode);
		class FText GetFriendCodeDescription(const struct FFriendCode& FriendCode);
		class FText GetEULAText();
		class FString GetAppName();
		void DeclineEula();
		void CreateHeadlessAccount(const class FText& DisplayName, const class FScriptDelegate& OnCompleteDelegate);
		void CheckPurchaseRequiredForAccess(const class FScriptDelegate& OnCompleteDelegate);
		void CheckHasRedeemForAccess(const class FScriptDelegate& OnCompleteDelegate);
		void AutoLogin(const class FScriptDelegate& OnCompleteDelegate);
		void AcceptEula();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.MenuContext
	 * Size -> 0x0128 (FullSize[0x0158] - InheritedSize[0x0030])
	 */
	class UMenuContext : public UBlueprintContextBase
	{
	public:
		bool                                                       bFrontEndContentReady;                                   // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17BS[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMenuCategoryChanged;                                   // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMenuSceneChanged;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFrontEndTabActivated;                                  // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShowPostGameSummary;                                   // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShowFrontEndContent;                                   // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShowHeroDetails;                                       // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShowDeckBuilder;                                       // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShowPackOpenScreen;                                    // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShowBundlePurchaseScreen;                              // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReturnToHomeScreen;                                    // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReturnToPlayScreen;                                    // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNavigateToStoreItem;                                   // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShowBannerEditor;                                      // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShowCraftingScreen;                                    // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DAP7[0x40];                                  // 0x0118(0x0040) MISSED OFFSET (PADDING)

	public:
		void UnregisterTabListWidget(class UOrionTabListWidget* TabListWidget);
		void ShowFrontEndStartupContent();
		void ShowCardCrafting(class UOrionCardData* CardToCraft);
		bool ShouldDisplayWUIUI();
		bool ReturnToTitleDueToRequiredUpdate(EReturnToMainMenuReason Reason, const class FScriptDelegate& OnDialogClosed);
		void RegisterTabListWidget(class UOrionTabListWidget* TabListWidget);
		void RegisterPurchaseConfirmation(class UOrionPurchaseConfirmationWidget* PurchaseConfirmationWidget);
		void RegisterMTXConfirmation(class UOrionPurchaseConfirmationWidget* MTXConfirmationWidget);
		void OnShowPostGameSummary__DelegateSignature();
		void OnShowPackOpenScreen__DelegateSignature(class UOrionMcpCardPackItem* CardPack);
		void OnShowHeroDetails__DelegateSignature(class UOrionHeroData* HeroData, class UOrionSkinItemDefinition* SkinToShow);
		void OnShowFrontEndContent__DelegateSignature();
		void OnShowDeckBuilder__DelegateSignature(class UOrionMcpDeckItem* Deck);
		void OnShowCraftingScreen__DelegateSignature(class UOrionCardData* CardToCraft);
		void OnShowBundlePurchaseScreen__DelegateSignature(const class FString& OfferId);
		void OnShowBannerEditor__DelegateSignature(class UOrionMcpBannerItem* BannerToEdit);
		void OnReturnToTitleScreenReasonClosed__DelegateSignature();
		ENavigationResult OnNavigationAttempt__DelegateSignature(const class FString& NavigationPath);
		void OnNavigateToTab__DelegateSignature();
		void OnNavigateToStoreItem__DelegateSignature(const class FString& OfferId);
		void OnMenuSceneChanged__DelegateSignature(const class FName& NewScene);
		void OnMenuCategoryPushed__DelegateSignature(class UUserWidget* Widget, const class FName& MenuCategory);
		void OnFrontEndTabActivated__DelegateSignature(const class FName& TabId);
		void NavigationRequest(const class FString& NavigationPath);
		void NavigateToStoreOffer(const class FString& OfferId);
		void NavigateToPlayScreen();
		void NavigateToHomeScreen();
		class FName GetCurrentSceneName();
		bool DisplayReturnToTitleScreenReason(const class FScriptDelegate& OnDialogClosed);
		void DisplayReturnToMainMenuReason();
		void BroadcastSceneChange(const class FName& SceneName);
		void BroadcastFrontEndTabActivated(const class FName& TabId);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.NotificationContext
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UNotificationContext : public UBlueprintContextBase
	{
	public:
		class FScriptMulticastDelegate                             OnNewNotification;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveNotification;                                    // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnNotificationEvent__DelegateSignature(const struct FOrionNotification& Notification);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.OrionGameContext
	 * Size -> 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
	 */
	class UOrionGameContext : public UPlayerAwareContext
	{
	public:
		unsigned char                                              UnknownData_5EVB[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLocalPlayerDeathDel;                                   // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnLocalPlayerSpawnDel;                                   // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AYI7[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetActiveDeck(const class FString& DeckId);
		struct FVector2D GetRightAnalogStickValues();
		struct FVector2D GetLeftAnalogStickValues();
		bool GetIsUsingGamePad();
		class UOrionHeroData* GetHeroData();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.PartyContext
	 * Size -> 0x0150 (FullSize[0x0180] - InheritedSize[0x0030])
	 */
	class UPartyContext : public UBlueprintContextBase
	{
	public:
		class FScriptMulticastDelegate                             OnPartyMatchmakingTypeChanged;                           // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyMatchmakingCustomKeyChanged;                      // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyChanged;                                          // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLocalPlayerMMRUpdated;                                 // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyTypeChangedDelegate;                              // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLeaderFriendsOnlyChangedDelegate;                      // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLeaderInvitesOnlyChangedDelegate;                      // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyDataChangedDelegate;                              // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3W3[0xD0];                                  // 0x00B0(0x00D0) MISSED OFFSET (PADDING)

	public:
		void SetPartyPrivacySetting(EPartyType PartyType, bool bLeaderFriendsOnly, bool bLeaderInvitesOnly);
		void SetMatchmakingType(EOrionMatchmakingType Type);
		void SetMatchmakingCustomKey(const class FString& CustomKey);
		void SendPartyInvite(class UOrionFriendItem* FriendItem);
		void SendConsoleFriendInvite();
		void PromoteToPartyLeader(class UOrionPartyMemberState* PartyMember);
		void OnPartyTypeChanged__DelegateSignature(EPartyType PartyType);
		void OnPartyDataChanged__DelegateSignature(const struct FPartyState& PartyData);
		void OnPartyChanged__DelegateSignature();
		void OnMMRUpdated__DelegateSignature(bool bIsValid);
		void OnMatchmakingTypeChanged__DelegateSignature(EOrionMatchmakingType NewType);
		void OnMatchmakingCustomKeyChanged__DelegateSignature(const class FString& CustomKey);
		void OnLeaderInvitesOnlyChanged__DelegateSignature(bool bLeaderInviteOnly);
		void OnLeaderFriendsOnlyChanged__DelegateSignature(bool bLeaderFriendsOnly);
		int32_t NumPartyMembers();
		int32_t MaxPartyMembers();
		void LeaveParty();
		void KickFromParty(class UOrionPartyMemberState* PartyMember);
		bool IsPartyLeader(class UOrionPartyMemberState* PartyMember);
		bool IsMatchmakingCustomKeyActive();
		bool IsHeroPickedByOtherPlayer(class UOrionHeroData* InHero);
		void STATIC_GetUniqueNetId(class UOrionPartyMemberState* PartyMember, struct FUniqueNetIdRepl* UniqueNetId);
		bool GetPartyPrivacySetting(EPartyType* OutPartyType, bool* OutLeaderFriendsOnly, bool* OutLeaderInvitesOnly);
		void GetPartyMembers(TArray<class UOrionPersistentPartyMember*>* PartyMembers);
		class UOrionPersistentPartyMember* GetMyPersistentPartyEntry();
		EOrionMatchmakingType GetMatchmakingType();
		class FString GetMatchmakingCustomKey();
		bool AmIPartyLeader();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.PlayerContext
	 * Size -> 0x00F0 (FullSize[0x0130] - InheritedSize[0x0040])
	 */
	class UPlayerContext : public UPlayerAwareContext
	{
	public:
		class FScriptMulticastDelegate                             OnPlayerNameChanged;                                     // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerTeamChanged;                                     // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnProfileStatsUpdated;                                   // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClientSettingsSaved;                                   // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClientGameplaySettingsChanged;                         // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClientAudioSettingsChanged;                            // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClientPartySettingsChanged;                            // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRangeIndicatorValueChanged;                            // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bMcpOperationPending;                                    // 0x00C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CTJZ[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPrestigeAccountComplete;                               // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FText                                                DeckBuilderLockedMessage;                                // 0x00D8(0x0018) Config, Protected, NativeAccessSpecifierProtected
		class FText                                                PVPLockedMessage;                                        // 0x00F0(0x0018) Config, Protected, NativeAccessSpecifierProtected
		class FText                                                AdvancedHeroesLockedMessage;                             // 0x0108(0x0018) Config, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MD87[0x10];                                  // 0x0120(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetVoiceGameVolume(float NewValue);
		void SetVeterancy(EOrionVeterancy Veterancy, const class FScriptDelegate& Callback);
		void SetShowXPPerMinOnHUD(int32_t NewValue);
		void SetShowPingAndFPSOnHUD(int32_t NewValue);
		void SetShowBasicAttackRangeIndicator(int32_t NewValue);
		void SetShowAbilityConfirmWidget(int32_t NewValue);
		void SetOtherGameVolume(float NewValue);
		void SetName(const class FText& Name);
		void SetMusicGameVolume(float NewValue);
		void SetMouseLookSensitivity(float NewValue);
		void SetMasterGameVolume(float NewValue);
		void SetInvertedMouse(bool bOn);
		void SetHealthBarOverhead(bool bOn);
		void SetHasAchieved(EOrionSimpleAchievementType InAchievementType);
		void SetGamepadYawSensitivity(int32_t NewValue);
		void SetGamepadRadialSelectEnabled(int32_t NewValue);
		void SetGamepadPitchSensitivity(int32_t NewValue);
		void SetGamepadInvertYaw(int32_t NewValue);
		void SetGamepadInvertPitch(int32_t NewValue);
		void SetGamepadConfigIndex(int32_t NewValue);
		void SetEnableDeathcam(int32_t NewValue);
		void SaveClientSettings();
		void RevertToCurrentClientGameplaySettings();
		void RevertToCurrentClientAudioSettings();
		void ResetClientGameplaySettings();
		void ResetClientAudioSettings();
		void ProcessAcknowledgedItems();
		void PrestigeAccount();
		void OverrideBoundKeyByNameAndType(const class FName& BindingName, EKeyBindingType BindingType, const struct FInputChord& PreviousKey, const struct FInputChord& NewKey);
		void OnPrestigeAccountComplete__DelegateSignature();
		void OnMcpResult__DelegateSignature(bool bSuccess, const class FText& ErrorMessage);
		bool IsSoloVsAIProgressionDisabled();
		bool IsRecentlyAbandoned();
		bool IsItemAcknowledgementNeeded(class UOrionMcpItem* Item);
		bool IsHeroTierUnlocked(EOrionHeroTier Tier);
		bool IsFeatureUnlocked(EUnlockableFeature Feature);
		bool IsDailyRewardAvailable();
		bool HasSpecifiedVeterancy();
		bool HasAccomplishedSimpleAchievement(EOrionSimpleAchievementType InAchievementType);
		float GetVoiceGameVolume();
		int32_t GetValorLevel();
		struct FTimespan GetTimeUntilNextDailyReward();
		EOrionTeam GetTeam();
		int32_t GetShowXPPerMinOnHUD();
		int32_t GetShowPingAndFPSOnHUD();
		int32_t GetShowBasicAttackRangeIndicator();
		int32_t GetShowAbilityConfirmWidget();
		EOrionPlayerPlatform GetPlatform();
		float GetOtherGameVolume();
		class FText GetName();
		float GetMusicGameVolume();
		float GetMouseLookSensitivity();
		float GetMasterGameVolume();
		class FString GetLastHeroPlayed();
		bool GetInvertedMouse();
		bool GetHealthBarOverhead();
		void GetGameplayStats(struct FGameplayStats* GameplayStats, bool bPvpOnly);
		int32_t GetGamepadYawSensitivity();
		int32_t GetGamepadRadialSelectEnabled();
		int32_t GetGamepadPitchSensitivity();
		int32_t GetGamepadInvertYaw();
		int32_t GetGamepadInvertPitch();
		int32_t GetGamepadConfigIndex();
		class FText GetFeatureLockedMessage(EUnlockableFeature Feature);
		int32_t GetEnableDeathcam();
		int32_t GetDailyRewardChestTokenCount();
		struct FBoundKeys GetBoundKeysByNameAndType(const class FName& BindingName, EKeyBindingType BindingType);
		struct FSimpleAchievementDescription GetAchievementDescription(EOrionSimpleAchievementType InAchievementType);
		void GetAccountLevelInfo(struct FOrionLevelInfo* AccountLevelInfo);
		int32_t GetAccountLevel();
		float GetAccountExperienceMax();
		float GetAccountExperience();
		int32_t GetAccountCurrency();
		void ChangeLanguage(const class FString& LanguageCode, bool bSave);
		void ApplyClientPartySettings();
		void ApplyClientGameplaySettings();
		void ApplyClientAudioSettings();
		void ApplyAllClientSettings();
		void AcknowledgeItem(class UOrionMcpItem* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.PostGameContext
	 * Size -> 0x01D8 (FullSize[0x0218] - InheritedSize[0x0040])
	 */
	class UPostGameContext : public UPlayerAwareContext
	{
	public:
		class FScriptMulticastDelegate                             OnShowReward;                                            // 0x0040(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWinningTeamReceivedDel;                                // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		struct FOrionScoreboardUIInfo                              ScoreboardInfo;                                          // 0x0060(0x0088) NativeAccessSpecifierPrivate
		struct FOrionPostGameLocalPlayerInfo                       LocalPlayerInfo;                                         // 0x00E8(0x0010) NativeAccessSpecifierPrivate
		struct FOrionEarnedXPInfo                                  EarnedXPInfo;                                            // 0x00F8(0x0028) NativeAccessSpecifierPrivate
		struct FOrionPostGameLevelUpInfo                           AccountLevelSummary;                                     // 0x0120(0x0048) NativeAccessSpecifierPrivate
		struct FOrionPostGameLevelUpInfo                           HeroLevelSummary;                                        // 0x0168(0x0048) NativeAccessSpecifierPrivate
		struct FOrionEarnedTimeCurrencyInfo                        EarnedTimeCurrencyInfo;                                  // 0x01B0(0x0018) NativeAccessSpecifierPrivate
		TArray<struct FOrionLootReward>                            EarnedLootRewards;                                       // 0x01C8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FOrionSurveyInfo                                    GameSurveyInfo;                                          // 0x01D8(0x0020) NativeAccessSpecifierPrivate
		class FString                                              MatchSessionId;                                          // 0x01F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IFER[0x10];                                  // 0x0208(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateScoreboardInfo();
		bool ShouldShowSurvey();
		bool ShouldShowPostGameScreen();
		void OnWinningTeamReceived__DelegateSignature(EOrionTeam WinningTeam);
		void OnShowReward__DelegateSignature(const struct FOrionLootReward& LootReward);
		void OnContinueButtonPressed();
		void NotifyPostGameScreenDismissed();
		bool GetWonLastCompletedMatch();
		int32_t GetSurveyQuestionGroupQuestionCount(const class FName& QuestionId);
		class FName GetSurveyQuestionGroupId();
		struct FOrionScoreboardTeamEntryInfo GetScoreboardTeamEntry(EOrionTeam TeamNum);
		struct FOrionScoreboardPlayerEntryInfo GetScoreboardPlayerEntryFromUIID(const struct FOrionPlayerStateUIID& PlayerStateUIID);
		struct FOrionScoreboardPlayerEntryInfo GetScoreboardPlayerEntry(EOrionTeam TeamNum, int32_t PlayerIndex);
		class FText GetQuestionForQuestionGroup(const class FName& QuestionId, int32_t Index);
		int32_t GetNumberOfPlayers(EOrionTeam TeamNum);
		EOrionTeam GetMyTeam();
		class FText GetMessageForQuestionGroup(const class FName& QuestionId);
		class FString GetMatchSessionId();
		struct FOrionPlayerStateUIID GetLocalPlayerUIID();
		struct FOrionScoreboardPlayerEntryInfo GetLocalPlayerScoreboardEntry();
		struct FOrionPostGameLocalPlayerInfo GetLocalPlayerInfo();
		void GetHeroLevelSummary(struct FOrionPostGameLevelUpInfo* Info);
		EOrionTeam GetEnemyTeam();
		void GetEarnedXP(struct FOrionEarnedXPInfo* Info);
		void GetEarnedTimeCurrency(struct FOrionEarnedTimeCurrencyInfo* Info);
		void GetEarnedMatchRewards(TArray<struct FOrionLootReward>* MatchRewards);
		float GetCurrentMatchTime();
		void GetAccountLevelSummary(struct FOrionPostGameLevelUpInfo* Info);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.QuestContext
	 * Size -> 0x00E0 (FullSize[0x0120] - InheritedSize[0x0040])
	 */
	class UQuestContext : public UPlayerAwareContext
	{
	public:
		unsigned char                                              UnknownData_TNY2[0xE0];                                  // 0x0040(0x00E0) MISSED OFFSET (PADDING)

	public:
		void OnSelectedSkinChanged__DelegateSignature(class UOrionSkinItemDefinition* Skin);
		bool IsQuestComplete(class UOrionMcpQuestItemDefinition* QuestDef);
		TArray<class UOrionMcpQuestItem*> GetWeeklyQuests(bool bOnDeck);
		struct FDateTime GetWeeklyQuestRolloverTime();
		class UOrionMcpCardPackItemDefinition* GetWeeklyQuestReward(int32_t NumCompleted, bool bOnDeck);
		int32_t GetWeeklyQuestNumRewardsClaimed();
		int32_t GetWeeklyQuestNumRewards();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.ReticleContext
	 * Size -> 0x02A0 (FullSize[0x02D0] - InheritedSize[0x0030])
	 */
	class UReticleContext : public UBlueprintContextBase
	{
	public:
		unsigned char                                              UnknownData_P193[0x240];                                 // 0x0030(0x0240) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSuccessfulHitDel;                                      // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnActivelyTargetingDelegate;                             // 0x0280(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		TArray<struct FReticleInfo>                                ReticleInfoArray;                                        // 0x0290(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UOrionUserWidget_Reticle>             DefaultReticle;                                          // 0x02A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X9DA[0x28];                                  // 0x02A8(0x0028) MISSED OFFSET (PADDING)

	public:
		void ShowReticle(class UOrionAbility* Ability);
		void SetDefaultReticle(class UOrionUserWidget_Reticle* NewDefaultReticle);
		void OnSuccessfulHit__DelegateSignature();
		void OnSuccessfulHit(class AActor* TargetActor, class AActor* Instigator);
		void OnActivelyTargeting__DelegateSignature(bool CurrentlyTargeting);
		bool IsUsingUMGReticle();
		bool IsReticleHidden();
		bool IsActivelyTargetingAnyActor();
		void HideReticle(class UOrionAbility* Ability);
		class UOrionUserWidget_Reticle* GetReticleWidget(class UOrionAbility* Ability);
		class UClass* GetReticleClass();
		int32_t GetHideCount();
		void AddReticle(class UOrionAbilitySystemComponent* AbilityComp, class UOrionAbility* Ability, class UClass* OptionalReticleClass);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.ScoreboardContext
	 * Size -> 0x05E0 (FullSize[0x0610] - InheritedSize[0x0030])
	 */
	class UScoreboardContext : public UBlueprintContextBase
	{
	public:
		unsigned char                                              UnknownData_PQG2[0x4D0];                                 // 0x0030(0x04D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionScoreboardUIInfo                              ScoreboardInfo;                                          // 0x0500(0x0088) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XNSD[0x88];                                  // 0x0588(0x0088) MISSED OFFSET (PADDING)

	public:
		bool IsSpectatorScoreboard();
		struct FOrionScoreboardTeamEntryInfo GetScoreboardTeamEntry(EOrionTeam TeamNum);
		struct FOrionScoreboardPlayerEntryInfo GetScoreboardPlayerEntryFromUIID(const struct FOrionPlayerStateUIID& PlayerStateUIID);
		struct FOrionScoreboardPlayerEntryInfo GetScoreboardPlayerEntry(EOrionTeam TeamNum, int32_t PlayerIndex);
		EOrionTeam GetMyTeam();
		struct FOrionPlayerStateUIID GetLocalPlayerUIID();
		struct FOrionScoreboardPlayerEntryInfo GetLocalPlayerScoreboardEntry();
		EOrionTeam GetEnemyTeam();
		float GetCurrentMatchTime();
		void ForceUpdateAllEntries();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.SpectatorHUDContext
	 * Size -> 0x00C8 (FullSize[0x0920] - InheritedSize[0x0858])
	 */
	class USpectatorHUDContext : public UBaseHUDContext
	{
	public:
		class FScriptMulticastDelegate                             OnSpectatorWatchedHeroChange;                            // 0x0858(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             UpdateAnalogCursorStateDelegate;                         // 0x0868(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnPlayerInfoUpdateDel;                                   // 0x0878(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnSpectatorCameraModeChange;                             // 0x0888(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnSpectatorToggleControllerCursor;                       // 0x0898(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnPlayerHandCardAbilityUpdateDel;                        // 0x08A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnSetHudVisibilityDel;                                   // 0x08B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		TArray<struct FOrionSpectatorHUDPlayerInfo>                RedTeamPlayerInfo;                                       // 0x08C8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FOrionSpectatorHUDPlayerInfo>                BlueTeamPlayerInfo;                                      // 0x08D8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FOrionCardAbilityData>                       WatchedHeroCardAbilityData;                              // 0x08E8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZBJV[0x28];                                  // 0x08F8(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnSpectatorWatchedHeroChange__DelegateSignature(EOrionTeam HeroTeam, int32_t HeroIndex);
		void OnSpectatorToggleControllerCursor__DelegateSignature();
		void OnSpectatorCameraModeChange__DelegateSignature(ESpectatorCameraType NewCameraMode);
		void OnSetHudVisibility__DelegateSignature(bool bMainVisible, bool bIndicatorsVisible);
		void OnPlayerInfoUpdateDelegate__DelegateSignature(EOrionTeam TeamNum, int32_t PlayerIndex, const struct FOrionSpectatorHUDPlayerInfo& NewPlayerInfo);
		struct FOrionSpectatorHUDPlayerInfo GetSpectatorHUDPlayerInfo(EOrionTeam Team, int32_t Index);
		EOrionTeam GetMyTeam();
		struct FOrionBaseHUDPlayerInfo GetHUDPlayerInfo();
		EOrionTeam GetEnemyTeam();
		float GetCurrentMatchTime();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.StoreContext
	 * Size -> 0x00A0 (FullSize[0x00E0] - InheritedSize[0x0040])
	 */
	class UStoreContext : public UPlayerAwareContext
	{
	public:
		class FString                                              FoundersPackStoreCategory;                               // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCurrencyChanged;                                       // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRebuildStorefront;                                     // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCatalogFlushed;                                        // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGiftBoxOpened;                                         // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FOrionDailyRewardInfo>                       DailyRewards;                                            // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnDailyRewardsUpdated;                                   // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LSDN[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      DisplayPurchaseWidget;                                   // 0x00C0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate
		class FScriptDelegate                                      DismissPurchaseWidget;                                   // 0x00D0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate

	public:
		void ShowPlatformStore(const class FString& Category, const class FScriptDelegate& OnClosedDelegate);
		bool ReportNoOffersAvailable();
		void ReportExitRealMoneyStore();
		void ReportEnterRealMoneyStore();
		void RegisterForEpicPurchasingDisplay(const class FScriptDelegate& DisplayCallback, const class FScriptDelegate& DismissCallback);
		void OpenGiftBox(const class FString& GiftBoxID);
		void OnPlatformStoreClosed__DelegateSignature(bool bPurchased);
		void OnOrionCatalogChanged__DelegateSignature();
		void OnGiftBoxOpened__DelegateSignature(const struct FOrionLootNotification& LootNotification, bool bOpenNext);
		void OnEpicPurchasingWidgetDisplay__DelegateSignature(class UWidget* WebWidget, const class FString& OfferId);
		void OnEpicPurchasingWidgetDismissed__DelegateSignature();
		bool IsDailyRewardAvailable();
		bool IsCatalogDownloadInProgress();
		struct FTimespan GetTimeUntilNextDailyReward();
		int32_t GetTimeCurrency();
		void GetSkinOffers(TArray<struct FStoreOfferBP>* SkinOffers, bool bShowIneligibleOffers);
		bool GetPurchaseFollowUpAction(TArray<struct FStorePurchase> Purchases, class FText* FollowUpAction);
		void GetMtxOffers(TArray<struct FStoreOfferBP>* MtxOffers, bool bShowIneligibleOffers);
		int32_t GetMtxCurrency();
		void GetHeroOffers(TArray<struct FStoreOfferBP>* HeroOffers, bool bShowIneligibleOffers);
		bool GetHeroOffer(const class FString& HeroPersistentName, struct FStoreOfferBP* HeroOffer);
		void GetFounderOffers(TArray<struct FStoreOfferBP>* FounderOffers);
		void GetEmoteOffers(TArray<struct FStoreOfferBP>* EmoteOffers, bool bShowIneligibleOffers);
		void GetDeckOffers(TArray<struct FStoreOfferBP>* DeckOffers, bool bShowIneligibleOffers);
		bool GetDailyRewardInfo(TArray<struct FOrionDailyRewardInfo>* UpcomingRewards);
		int32_t GetCurrencyBalance(EOrionCurrencyType Type);
		void GetCardpackOffers(TArray<struct FStoreOfferBP>* CardpackOffers, bool bShowIneligibleOffers);
		void GetBundleOffers(TArray<struct FStoreOfferBP>* BundleOffers, bool bShowIneligibleOffers);
		void GetBoostOffers(TArray<struct FStoreOfferBP>* BoostOffers, bool bShowIneligibleOffers);
		void GetBannerOffers(TArray<struct FStoreOfferBP>* BannerOffers);
		void FlushStoreCatalogCache();
		void ExecutePurchaseFollowUpAction(TArray<struct FStorePurchase> Purchases);
		void CheckGiftBoxes(bool bForce);
		void CheckForStuff();
		void CancelEpicPurchasingDisplay();
		bool CanAfford(const struct FOrionStorePrice& Price, int32_t Quantity);
		bool BP_GetSkinOffer(class UOrionSkinItemDefinition* Skin, struct FStoreOfferBP* SkinOffer);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.TeamBuilderContext
	 * Size -> 0x0148 (FullSize[0x0178] - InheritedSize[0x0030])
	 */
	class UTeamBuilderContext : public UBlueprintContextBase
	{
	public:
		class FScriptMulticastDelegate                             OnTeamMemberJoined;                                      // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamMemberUpdated;                                     // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamMemberLeft;                                        // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPendingMemberJoined;                                   // 0x0060(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPendingMemberUpdated;                                  // 0x0070(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPendingMemberLeft;                                     // 0x0080(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTBSocialPartyInvite;                                   // 0x0090(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSlotReserved;                                          // 0x00A0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSlotUnreserved;                                        // 0x00B0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamPartyLeft;                                         // 0x00C0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLobbyPlayerFound;                                      // 0x00D0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLobbyPlayerFailed;                                     // 0x00E0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLobbyReadyChanged;                                     // 0x00F0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreGameReadyChanged;                                   // 0x0100(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamBuilderProgressChanged;                            // 0x0110(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBecameQuitter;                                         // 0x0120(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLobbyInviteFailure;                                    // 0x0130(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BPR[0x10];                                  // 0x0140(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionTeamBuilder*                                   TeamBuilder;                                             // 0x0150(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionMatchmaker*                                    Matchmaker;                                              // 0x0158(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionTBRoboCaptain*                                 RoboCaptain;                                             // 0x0160(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEveryoneReady;                                          // 0x0168(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_224G[0xF];                                   // 0x0169(0x000F) MISSED OFFSET (PADDING)

	public:
		void ToggleTeamChatTab(const class FString& ChatRoomId, bool bEnabled);
		void StopLookingForFight();
		void StartTeam(EOrionMatchmakingType MatchmakingType, struct FOrionTBPlayerChoices* LeaderChoices, const class FScriptDelegate& OnCreateTeamComplete);
		void StartSlotSearch(int32_t SlotIdx, struct FOrionTBPlayerChoices* InChoices, const class FScriptDelegate& OnPlayerFound, const class FScriptDelegate& OnFailure);
		void SimpleQuickMatch(const class FString& HeroName, EOrionMatchmakingType GameType, const class FScriptDelegate& OnResult, const class FScriptDelegate& OnRoleDetermined, const class FScriptDelegate& OnInvite, const class FScriptDelegate& OnTeamJoined);
		void SetSelectedDeck(class UOrionMcpDeckItem* Deck);
		void RespondToQuickMatchInvite(bool bAccept);
		void RejectSocialPartyTeamInvite();
		void QuickMatch(struct FOrionTBPlayerChoices* Choices, EOrionMatchmakingType MatchmakingType, const class FScriptDelegate& OnResult, const class FScriptDelegate& OnRoleDetermined, const class FScriptDelegate& OnInvite, const class FScriptDelegate& OnTeamJoined);
		bool QueueSolo(EOrionMatchmakingType MatchmakingType, struct FOrionTBPlayerChoices* InChoices, const class FScriptDelegate& Callback, const class FScriptDelegate& OnInvite);
		void OnTeamPartyLeft__DelegateSignature();
		void OnTeamMemberUpdated__DelegateSignature(const struct FOrionTBMemberInfo& NewMemberInfo, class UOrionTeamBuilderPartyMember* NewPartyMemberData);
		void OnTeamMemberLeft__DelegateSignature(int32_t SlotIdx);
		void OnTeamMemberJoined__DelegateSignature(const struct FOrionTBMemberInfo& MemberInfo, class UOrionTeamBuilderPartyMember* PartyMemberData);
		void OnTeamBuilderProgressChanged__DelegateSignature(ETeamBuilderProgression NewState);
		void OnSocialJoinTeamCallback(bool bSuccess);
		void OnSlotUnreserved__DelegateSignature(int32_t SlotIdx);
		void OnSlotSearchResultExpired__DelegateSignature();
		void OnSlotSearchFailure__DelegateSignature(ETBSlotCompleteResult Result);
		void OnSlotReserved__DelegateSignature(int32_t SlotIdx);
		void OnReceivedInviteAsSocialPartyMember__DelegateSignature();
		void OnPreGameReadyChanged__DelegateSignature(int32_t NumReady);
		void OnPlayerInviteFailure__DelegateSignature(const class FText& Message);
		void OnPlayerInviteExpired__DelegateSignature();
		void OnPlayerFound__DelegateSignature(const struct FOrionTBMemberInfo& MemberInfo);
		void OnPendingMemberUpdated__DelegateSignature(const struct FOrionTBMemberInfo& PendingMember);
		void OnPendingMemberLeft__DelegateSignature(int32_t SlotIdx);
		void OnPendingMemberJoined__DelegateSignature(const struct FOrionTBMemberInfo& PendingMember);
		void OnLobbyReadyChanged__DelegateSignature(bool IsReady);
		void OnLobbyPlayerFound__DelegateSignature(const struct FOrionTBMemberInfo& Player);
		void OnLobbyPlayerFailed__DelegateSignature(int32_t SlotIndex);
		void OnJoinSocialPartyTeamComplete__DelegateSignature(bool bSuccess);
		void OnInviteExpired__DelegateSignature();
		void OnFindEnemyTeamResult__DelegateSignature(bool bResult, const class FText& Message);
		void OnCreateTeamComplete__DelegateSignature(bool bWasSuccessful);
		void OnBecameQuitter__DelegateSignature();
		int32_t NumTeamMembers();
		bool IsTeamReady();
		bool IsTeamLeader();
		bool IsCaptain();
		bool HasTeamMember(int32_t SlotIndex);
		struct FTimespan GetTeamWaitTime();
		class UOrionTeamBuilderPartyMember* GetTeamMember(struct FOrionTBMemberInfo* Info);
		struct FTimespan GetPlayerWaitTime();
		class UOrionTeamBuilderPartyMember* GetMyTeamState();
		int32_t GetMaxTeamSize();
		void FightAnotherTeam(const class FScriptDelegate& Callback);
		bool DeclineInvite();
		void ClearAllDelegates();
		void CancelSlotSearch(int32_t SlotIdx);
		void CancelQuickMatch();
		bool CancelQueue();
		void BuildCurrentTeamState(struct FOrionTBState* CurrentState);
		void BecomeQuitter(const class FScriptDelegate& Callback);
		void AcceptSocialPartyTeamInvite(struct FOrionTBPlayerChoices* InChoices, const class FScriptDelegate& Callback);
		void AcceptSlot(int32_t SlotIdx, bool bAccept, const class FScriptDelegate& OnInviteExpired, const class FScriptDelegate& OnFailure);
		bool AcceptInvite();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.TeamCommsContext
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UTeamCommsContext : public UBlueprintContextBase
	{
	public:
		unsigned char                                              UnknownData_2BYU[0xA0];                                  // 0x0030(0x00A0) MISSED OFFSET (PADDING)

	public:
		void ExecuteTeamCommData(class UPCTeamCommunicationsData* TeamCommData);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.TooltipContext
	 * Size -> 0x0138 (FullSize[0x0178] - InheritedSize[0x0040])
	 */
	class UTooltipContext : public UPlayerAwareContext
	{
	public:
		struct FOrionTooltipHelper                                 TooltipHelper;                                           // 0x0040(0x0138) NativeAccessSpecifierPrivate

	public:
		void GetField(const class FName& InFieldName, class FText* FieldText);
		void GetDeckDescription(EDeckTooltipColumns InType, struct FDeckCategoryDesc* Description);
		struct FOrionCardEffectSummary GetCardEffectSummary();
		void CalculateHeroTooltip(class UOrionHeroData* InHeroData, EOrionAbilityBinding InAbilityKeyBind, int32_t InAbilityLevel, TArray<class UOrionCardData*> InCardsInHand);
		void CalculateDeckTooltip(class UOrionMcpDeckItem* InDeckItem);
		void CalculateCardTooltip(class UOrionCardData* Card, TArray<class UOrionCardData*> UpgradeCards);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.UserFeedbackContext
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UUserFeedbackContext : public UBlueprintContextBase
	{
	public:
		class FScriptMulticastDelegate                             OnFeedbackScreenshotReady;                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZ3Y[0x38];                                  // 0x0040(0x0038) MISSED OFFSET (PADDING)

	public:
		void TakeScreenshotAndInitializeFeedback(EFeedbackType FeedbackType);
		void SendFeedback(const class FText& Body);
		void FinishTakeScreenshotAndInitializeFeedback();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.VideoContext
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVideoContext : public UBlueprintContextBase
	{
	public:
		bool IsFullscreen();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.HeroAttributeListEntry
	 * Size -> 0x0138 (FullSize[0x0160] - InheritedSize[0x0028])
	 */
	class UHeroAttributeListEntry : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnUpdateVisuals;                                         // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FOrionAttributeViewItem                             AttributeItem;                                           // 0x0038(0x00B8) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FLinearColor                                        StatColor;                                               // 0x00F0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CurrentBaseValue;                                        // 0x0100(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Z1D[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CurrentBaseValueText;                                    // 0x0108(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      CurrentDeltaValue;                                       // 0x0120(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V4LR[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CurrentDeltaValueText;                                   // 0x0128(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                CategoryName;                                            // 0x0140(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsCategory;                                             // 0x0158(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U72X[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnUpdateAttributeVisuals__DelegateSignature();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.MatchmakingRegion
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UMatchmakingRegion : public UObject
	{
	public:
		class FText                                                DisplayName;                                             // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              RegionId;                                                // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AveragePingMs;                                           // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LB4E[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.OrionCardDeckEntry
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOrionCardDeckEntry : public UObject
	{
	public:
		unsigned char                                              UnknownData_0REU[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Count;                                                   // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Index;                                                   // 0x0034(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		int32_t GetQuantity();
		class UOrionMcpCardItem* GetCardItem();
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.TeamBuilderFNLib
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTeamBuilderFNLib : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_RoleToText(EOrionRole InRole);
		class FText STATIC_PositionToText(EOrionPosition InPosition);
		class UOrionHeroData* STATIC_GetHeroDataFromHeroName(const class FString& HeroName);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.BlueprintContextLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBlueprintContextLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UBlueprintContextBase* STATIC_GetContext(class UObject* ContextObject, class UClass* Class);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.OrionAsyncAction_OpenCardPack
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UOrionAsyncAction_OpenCardPack : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UOrionMcpCardPackItem*                               CardPack;                                                // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInventoryContext*                                   InventoryContext;                                        // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UOrionAsyncAction_OpenCardPack* STATIC_OpenCardPack(class UInventoryContext* LibraryContext, class UOrionMcpCardPackItem* CardPackToOpen);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintContext.OrionAsyncAction_RefreshCatalog
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UOrionAsyncAction_RefreshCatalog : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnError;                                                 // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UStoreContext*                                       StoreContext;                                            // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UOrionAsyncAction_RefreshCatalog* STATIC_RefreshCatalog(class UStoreContext* InStoreContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
