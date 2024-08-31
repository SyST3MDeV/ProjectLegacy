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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Social.ChatChromeStyle
	 * Size -> 0x02E8
	 */
	struct FChatChromeStyle
	{
	public:
		struct FSlateBrush                                         ChatBackgroundBrush;                                     // 0x0000(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ChatEntryBackgroundBrush;                                // 0x0090(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ChannelBackgroundBrush;                                  // 0x0120(0x0090) Edit, NativeAccessSpecifierPublic
		struct FLinearColor                                        ChatEntryBackgroundColor;                                // 0x01B0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateBrush                                         TabBackgroundBrush;                                      // 0x01C0(0x0090) Edit, NativeAccessSpecifierPublic
		struct FLinearColor                                        NoneActiveTabColor;                                      // 0x0250(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        TabFontColor;                                            // 0x0260(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        TabFontColorInverted;                                    // 0x0270(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TabWidth;                                                // 0x0280(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             TabPadding;                                              // 0x0284(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             ChatWindowPadding;                                       // 0x0294(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             ChatWindowToEntryMargin;                                 // 0x02A4(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             ChatChannelPadding;                                      // 0x02B4(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             ChatEntryPadding;                                        // 0x02C4(0x0010) Edit, NativeAccessSpecifierPublic
		struct FLinearColor                                        ChatBackgroundColor;                                     // 0x02D4(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VYBQ[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Social.ChatMarkupStyle
	 * Size -> 0x0670
	 */
	struct FChatMarkupStyle
	{
	public:
		struct FButtonStyle                                        MarkupButtonStyle;                                       // 0x0000(0x02A8) Edit, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     MarkupTextStyle;                                         // 0x02A8(0x0208) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MarkupBackground;                                        // 0x04B0(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         ButtonColor;                                             // 0x0540(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         ButtonHoverColor;                                        // 0x0568(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         TipColor;                                                // 0x0590(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SeperatorBrush;                                          // 0x05B8(0x0090) Edit, NativeAccessSpecifierPublic
		float                                                      SeperatorThickness;                                      // 0x0648(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             MarkupPadding;                                           // 0x064C(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             ButtonPadding;                                           // 0x065C(0x0010) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A8JO[0x4];                                   // 0x066C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Social.ChatStyle
	 * Size -> 0x19A0
	 */
	struct FChatStyle
	{
	public:
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0000(0x0208) Edit, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TimeStampTextStyle;                                      // 0x0208(0x0208) Edit, NativeAccessSpecifierPublic
		struct FLinearColor                                        TimeStampColor;                                          // 0x0410(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        DefaultChatColor;                                        // 0x0420(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        WhisperChatColor;                                        // 0x0430(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        GlobalChatColor;                                         // 0x0440(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        GameChatColor;                                           // 0x0450(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        TeamChatColor;                                           // 0x0460(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        PartyChatColor;                                          // 0x0470(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        AdminChatColor;                                          // 0x0480(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        GameAdminChatColor;                                      // 0x0490(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        WhisperHyperlinkChatColor;                               // 0x04A0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        GlobalHyperlinkChatColor;                                // 0x04B0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        GameHyperlinkChatColor;                                  // 0x04C0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        TeamHyperlinkChatColor;                                  // 0x04D0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        PartyHyperlinkChatColor;                                 // 0x04E0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        EnemyColor;                                              // 0x04F0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        FriendlyColor;                                           // 0x0500(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FEditableTextBoxStyle                               ChatEntryTextStyle;                                      // 0x0510(0x0870) Edit, NativeAccessSpecifierPublic
		struct FEditableTextBoxStyle                               ChatDisplayTextStyle;                                    // 0x0D80(0x0870) Edit, NativeAccessSpecifierPublic
		struct FScrollBoxStyle                                     ScrollBorderStyle;                                       // 0x15F0(0x0248) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MessageNotificationBrush;                                // 0x1838(0x0090) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             ChatEntryPadding;                                        // 0x18C8(0x0010) Edit, NativeAccessSpecifierPublic
		float                                                      ChatEntryHeight;                                         // 0x18D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_954R[0x4];                                   // 0x18DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         ChatMenuBackgroundBrush;                                 // 0x18E0(0x0090) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendActionPadding;                                     // 0x1970(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendActionHeaderPadding;                               // 0x1980(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendActionStatusMargin;                                // 0x1990(0x0010) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Social.SocialFontStyle
	 * Size -> 0x02A0
	 */
	struct FSocialFontStyle
	{
	public:
		struct FSlateFontInfo                                      FontSmall;                                               // 0x0000(0x0068) Edit, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      FontSmallBold;                                           // 0x0068(0x0068) Edit, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      FontNormal;                                              // 0x00D0(0x0068) Edit, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      FontNormalBold;                                          // 0x0138(0x0068) Edit, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      FontLarge;                                               // 0x01A0(0x0068) Edit, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      FontLargeBold;                                           // 0x0208(0x0068) Edit, NativeAccessSpecifierPublic
		struct FLinearColor                                        DefaultFontColor;                                        // 0x0270(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        InvertedFontColor;                                       // 0x0280(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        DefaultDullFontColor;                                    // 0x0290(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Social.SocialListStyle
	 * Size -> 0x2BB0
	 */
	struct FSocialListStyle
	{
	public:
		struct FButtonStyle                                        GlobalChatButtonStyle;                                   // 0x0000(0x02A8) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         GlobalChatIcon;                                          // 0x02A8(0x0090) Edit, NativeAccessSpecifierPublic
		struct FButtonStyle                                        FriendItemButtonStyle;                                   // 0x0338(0x02A8) Edit, NativeAccessSpecifierPublic
		struct FButtonStyle                                        ConfirmButtonStyle;                                      // 0x05E0(0x02A8) Edit, NativeAccessSpecifierPublic
		struct FButtonStyle                                        CancelButtonStyle;                                       // 0x0888(0x02A8) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         ButtonContentColor;                                      // 0x0B30(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         ButtonHoverContentColor;                                 // 0x0B58(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActionMenuArrowBrush;                                    // 0x0B80(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActionMenuArrowRightBrush;                               // 0x0C10(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         ActionMenuBackgroundColor;                               // 0x0CA0(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ToolTipArrowBrush;                                       // 0x0CC8(0x0090) Edit, NativeAccessSpecifierPublic
		struct FButtonStyle                                        BackButtonStyle;                                         // 0x0D58(0x02A8) Edit, NativeAccessSpecifierPublic
		struct FButtonStyle                                        HeaderButtonStyle;                                       // 0x1000(0x02A8) Edit, NativeAccessSpecifierPublic
		struct FButtonStyle                                        FriendListActionButtonStyle;                             // 0x12A8(0x02A8) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         AddFriendButtonContentBrush;                             // 0x1550(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         StatusIconBrush;                                         // 0x15E0(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         PCIconBrush;                                             // 0x1670(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ConsoleIconBrush;                                        // 0x1700(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         EpicIconBrush;                                           // 0x1790(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         FriendImageBrush;                                        // 0x1820(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         OfflineBrush;                                            // 0x18B0(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         OnlineBrush;                                             // 0x1940(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         AwayBrush;                                               // 0x19D0(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SpectateBrush;                                           // 0x1A60(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         FriendsContainerBackground;                              // 0x1AF0(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         FriendsListBackground;                                   // 0x1B80(0x0090) Edit, NativeAccessSpecifierPublic
		struct FEditableTextBoxStyle                               AddFriendEditableTextStyle;                              // 0x1C10(0x0870) Edit, NativeAccessSpecifierPublic
		struct FVector2D                                           UserPresenceImageSize;                                   // 0x2480(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackBrush;                                               // 0x2488(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SelectedOptionBrush;                                     // 0x2518(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SettingsBrush;                                           // 0x25A8(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SeperatorBrush;                                          // 0x2638(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         PresenceSeperatorBrush;                                  // 0x26C8(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         FontSizeBrush;                                           // 0x2758(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SearchBrush;                                             // 0x27E8(0x0090) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             BackButtonMargin;                                        // 0x2878(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             HeaderButtonMargin;                                      // 0x2888(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendsListMargin;                                       // 0x2898(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             BackButtonContentMargin;                                 // 0x28A8(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendsListNoFriendsMargin;                              // 0x28B8(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendsListHeaderMargin;                                 // 0x28C8(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendsListHeaderCountMargin;                            // 0x28D8(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             HeaderButtonContentMargin;                               // 0x28E8(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendItemMargin;                                        // 0x28F8(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendItemStatusMargin;                                  // 0x2908(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendTipStatusMargin;                                   // 0x2918(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendItemPresenceMargin;                                // 0x2928(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendItemPlatformMargin;                                // 0x2938(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendItemTextScrollerMargin;                            // 0x2948(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             ConfirmationBorderMargin;                                // 0x2958(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             ConfirmationButtonMargin;                                // 0x2968(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             ConfirmationButtonContentMargin;                         // 0x2978(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             NoneFriendContentMargin;                                 // 0x2988(0x0010) Edit, NativeAccessSpecifierPublic
		float                                                      NoneFriendContentHeight;                                 // 0x2998(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoneFriendIconWidth;                                     // 0x299C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             SubMenuBackIconMargin;                                   // 0x29A0(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             SubMenuPageIconMargin;                                   // 0x29B0(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             RadioSettingTitleMargin;                                 // 0x29C0(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             SubMenuSearchIconMargin;                                 // 0x29D0(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             SubMenuSearchTextMargin;                                 // 0x29E0(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             SubMenuBackButtonMargin;                                 // 0x29F0(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             SubMenuSettingButtonMargin;                              // 0x2A00(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             SubMenuListMargin;                                       // 0x2A10(0x0010) Edit, NativeAccessSpecifierPublic
		float                                                      SubMenuSeperatorThickness;                               // 0x2A20(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PresenceSeperatorThickness;                              // 0x2A24(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             FriendTipMargin;                                         // 0x2A28(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendTipPresenceMargin;                                 // 0x2A38(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             FriendTipSeperatorMargin;                                // 0x2A48(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             ToolTipMargin;                                           // 0x2A58(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             TipStatusMargin;                                         // 0x2A68(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             AddButtonMargin;                                         // 0x2A78(0x0010) Edit, NativeAccessSpecifierPublic
		struct FVector2D                                           AddButtonSpacing;                                        // 0x2A88(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ClanDetailsBrush;                                        // 0x2A90(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ClanMembersBrush;                                        // 0x2B20(0x0090) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Social.SocialStyle
	 * Size -> 0x6CA8
	 */
	struct FSocialStyle
	{
	public:
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x0000(0x0518) Edit, NativeAccessSpecifierPublic
		struct FButtonStyle                                        ActionButtonStyle;                                       // 0x0518(0x02A8) Edit, NativeAccessSpecifierPublic
		struct FSocialFontStyle                                    SmallFontStyle;                                          // 0x07C0(0x02A0) Edit, NativeAccessSpecifierPublic
		struct FSocialFontStyle                                    NormalFontStyle;                                         // 0x0A60(0x02A0) Edit, NativeAccessSpecifierPublic
		struct FSocialFontStyle                                    LargeFontStyle;                                          // 0x0D00(0x02A0) Edit, NativeAccessSpecifierPublic
		struct FSocialFontStyle                                    ChatFontStyle;                                           // 0x0FA0(0x02A0) Edit, NativeAccessSpecifierPublic
		struct FCheckBoxStyle                                      CheckBoxStyle;                                           // 0x1240(0x05E0) Edit, NativeAccessSpecifierPublic
		struct FCheckBoxStyle                                      RadioBoxStyle;                                           // 0x1820(0x05E0) Edit, NativeAccessSpecifierPublic
		struct FSocialListStyle                                    SocialListStyle;                                         // 0x1E00(0x2BB0) Edit, NativeAccessSpecifierPublic
		struct FChatStyle                                          ChatStyle;                                               // 0x49B0(0x19A0) Edit, NativeAccessSpecifierPublic
		struct FChatChromeStyle                                    ChatChromeStyle;                                         // 0x6350(0x02E8) Edit, NativeAccessSpecifierPublic
		struct FChatMarkupStyle                                    ChatMarkupStyle;                                         // 0x6638(0x0670) Edit, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
