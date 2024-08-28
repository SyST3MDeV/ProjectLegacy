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
	 * Class UMG.Visual
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVisual : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Widget
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class UWidget : public UVisual
	{
	public:
		bool                                                       bIsVariable;                                             // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCreatedByConstructionScript;                            // 0x0029(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPXE[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPanelSlot*                                          Slot;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled;                                              // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EI1N[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      bIsEnabledDelegate;                                      // 0x0040(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FText                                                ToolTipText;                                             // 0x0050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ToolTipTextDelegate;                                     // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class UWidget*                                             TooltipWidget;                                           // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ToolTipWidgetDelegate;                                   // 0x0080(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		ESlateVisibility                                           Visiblity;                                               // 0x0090(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           Visibility;                                              // 0x0091(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASTC[0x6];                                   // 0x0092(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      VisibilityDelegate;                                      // 0x0098(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_Cursor : 1;                                    // 0x00A8(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Z8D[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMouseCursor                                               Cursor;                                                  // 0x00AC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsVolatile;                                             // 0x00AD(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6287[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWidgetTransform                                    RenderTransform;                                         // 0x00B0(0x001C) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FVector2D                                           RenderTransformPivot;                                    // 0x00CC(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGDN[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetNavigation*                                   Navigation;                                              // 0x00D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDV4[0x28];                                  // 0x00E0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPropertyBinding*>                            NativeBindings;                                          // 0x0108(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	public:
		void SetVisibility(ESlateVisibility InVisibility);
		void SetUserFocus(class APlayerController* PlayerController);
		void SetToolTipText(const class FText& InToolTipText);
		void SetToolTip(class UWidget* Widget);
		void SetRenderTranslation(const struct FVector2D& Translation);
		void SetRenderTransformPivot(const struct FVector2D& Pivot);
		void SetRenderTransform(const struct FWidgetTransform& InTransform);
		void SetRenderShear(const struct FVector2D& Shear);
		void SetRenderScale(const struct FVector2D& Scale);
		void SetRenderAngle(float Angle);
		void SetKeyboardFocus();
		void SetIsEnabled(bool bInIsEnabled);
		void SetCursor(EMouseCursor InCursor);
		void ResetCursor();
		void RemoveFromParent();
		struct FEventReply OnReply__DelegateSignature();
		struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		bool IsVisible();
		bool IsHovered();
		void InvalidateLayoutAndVolatility();
		bool HasUserFocusedDescendants(class APlayerController* PlayerController);
		bool HasUserFocus(class APlayerController* PlayerController);
		bool HasMouseCapture();
		bool HasKeyboardFocus();
		bool HasFocusedDescendants();
		bool HasAnyUserFocus();
		class UWidget* GetWidget__DelegateSignature();
		ESlateVisibility GetVisibility();
		class FText GetText__DelegateSignature();
		ESlateVisibility GetSlateVisibility__DelegateSignature();
		struct FSlateColor GetSlateColor__DelegateSignature();
		struct FSlateBrush GetSlateBrush__DelegateSignature();
		class UPanelWidget* GetParent();
		class APlayerController* GetOwningPlayer();
		EMouseCursor GetMouseCursor__DelegateSignature();
		struct FLinearColor GetLinearColor__DelegateSignature();
		bool GetIsEnabled();
		int32_t GetInt32__DelegateSignature();
		float GetFloat__DelegateSignature();
		struct FVector2D GetDesiredSize();
		ECheckBoxState GetCheckBoxState__DelegateSignature();
		bool GetBool__DelegateSignature();
		class UWidget* GenerateWidgetForString__DelegateSignature(const class FString& Item);
		class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
		void ForceVolatile(bool bForce);
		void ForceLayoutPrepass();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserWidget
	 * Size -> 0x0118 (FullSize[0x0230] - InheritedSize[0x0118])
	 */
	class UUserWidget : public UWidget
	{
	public:
		unsigned char                                              UnknownData_4BPH[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x0120(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x0130(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x0140(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ForegroundColorDelegate;                                 // 0x0168(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0178(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bSupportsKeyboardFocus;                                  // 0x0188(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsFocusable;                                            // 0x0189(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66E6[0x6];                                   // 0x018A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetTree*                                         WidgetTree;                                              // 0x0190(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UUMGSequencePlayer*>                          ActiveSequencePlayers;                                   // 0x0198(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UUMGSequencePlayer*>                          StoppedSequencePlayers;                                  // 0x01A8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FNamedSlotBinding>                           NamedSlotBindings;                                       // 0x01B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bStopAction;                                             // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N31O[0x3];                                   // 0x01C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Priority;                                                // 0x01CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USSI[0x8];                                   // 0x01D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputComponent*                                     InputComponent;                                          // 0x01D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WNMC[0x50];                                  // 0x01E0(0x0050) MISSED OFFSET (PADDING)

	public:
		void UnregisterInputComponent();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void StopListeningForInputAction(const class FName& ActionName, EInputEvent EventType);
		void StopListeningForAllInputActions();
		void StopAnimation(class UWidgetAnimation* InAnimation);
		void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
		void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
		void SetPadding(const struct FMargin& InPadding);
		void SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer);
		void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);
		void SetInputActionPriority(int32_t NewPriority);
		void SetInputActionBlocking(bool bShouldBlock);
		void SetForegroundColor(const struct FSlateColor& InForegroundColor);
		void SetDesiredSizeInViewport(const struct FVector2D& Size);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetAnchorsInViewport(const struct FAnchors& Anchors);
		void SetAlignmentInViewport(const struct FVector2D& Alignment);
		void ReverseAnimation(class UWidgetAnimation* InAnimation);
		void RemoveFromViewport();
		void RegisterInputComponent();
		void PlaySound(class USoundBase* SoundToPlay);
		void PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
		void PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
		float PauseAnimation(class UWidgetAnimation* InAnimation);
		struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
		struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnPaint(struct FPaintContext* Context);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
		struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		struct FEventReply OnControllerButtonReleased(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
		struct FEventReply OnControllerButtonPressed(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
		struct FEventReply OnControllerAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
		void OnAnimationStarted(class UWidgetAnimation* Animation);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void ListenForInputAction(const class FName& ActionName, EInputEvent EventType, bool bConsume, const class FScriptDelegate& Callback);
		bool IsPlayingAnimation();
		bool IsListeningForInputAction(const class FName& ActionName);
		bool IsInViewport();
		bool IsInteractable();
		bool IsAnyAnimationPlaying();
		bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
		class APawn* GetOwningPlayerPawn();
		class APlayerController* GetOwningPlayer();
		class ULocalPlayer* GetOwningLocalPlayer();
		bool GetIsVisible();
		float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
		void Destruct();
		void Construct();
		void AddToViewport(int32_t ZOrder);
		bool AddToPlayerScreen(int32_t ZOrder);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PanelWidget
	 * Size -> 0x0018 (FullSize[0x0130] - InheritedSize[0x0118])
	 */
	class UPanelWidget : public UWidget
	{
	public:
		TArray<class UPanelSlot*>                                  Slots;                                                   // 0x0118(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DR7U[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (PADDING)

	public:
		bool RemoveChildAt(int32_t Index);
		bool RemoveChild(class UWidget* Content);
		bool HasChild(class UWidget* Content);
		bool HasAnyChildren();
		int32_t GetChildrenCount();
		int32_t GetChildIndex(class UWidget* Content);
		class UWidget* GetChildAt(int32_t Index);
		void ClearChildren();
		class UPanelSlot* AddChild(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ContentWidget
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UContentWidget : public UPanelWidget
	{
	public:
		class UPanelSlot* SetContent(class UWidget* Content);
		class UPanelSlot* GetContentSlot();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Button
	 * Size -> 0x0338 (FullSize[0x0468] - InheritedSize[0x0130])
	 */
	class UButton : public UContentWidget
	{
	public:
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0130(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FButtonStyle                                        WidgetStyle;                                             // 0x0138(0x02A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x03E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x03F0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EButtonClickMethod                                         ClickMethod;                                             // 0x0400(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonTouchMethod                                         TouchMethod;                                             // 0x0401(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0402(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F2XB[0x5];                                   // 0x0403(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0408(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x0418(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReleased;                                              // 0x0428(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x0438(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x0448(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FU2U[0x10];                                  // 0x0458(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetStyle(const struct FButtonStyle& InStyle);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
		bool IsPressed();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PanelSlot
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPanelSlot : public UVisual
	{
	public:
		class UPanelWidget*                                        Parent;                                                  // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             Content;                                                 // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NativeWidgetHost
	 * Size -> 0x0010 (FullSize[0x0128] - InheritedSize[0x0118])
	 */
	class UNativeWidgetHost : public UWidget
	{
	public:
		unsigned char                                              UnknownData_EYB6[0x10];                                  // 0x0118(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TextLayoutWidget
	 * Size -> 0x0028 (FullSize[0x0140] - InheritedSize[0x0118])
	 */
	class UTextLayoutWidget : public UWidget
	{
	public:
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		ETextJustify                                               Justification;                                           // 0x0120(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AutoWrapText;                                            // 0x0121(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q5JQ[0x2];                                   // 0x0122(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WrapTextAt;                                              // 0x0124(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETextWrappingPolicy                                        WrappingPolicy;                                          // 0x0128(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U64R[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Margin;                                                  // 0x012C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		float                                                      LineHeightPercentage;                                    // 0x013C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TextBlock
	 * Size -> 0x0108 (FullSize[0x0248] - InheritedSize[0x0140])
	 */
	class UTextBlock : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0140(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x0158(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0168(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x0190(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x01A0(0x0068) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FVector2D                                           ShadowOffset;                                            // 0x0208(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x0210(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ShadowColorAndOpacityDelegate;                           // 0x0220(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinDesiredWidth;                                         // 0x0230(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWrapWithInvalidationPanel;                              // 0x0234(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JTP[0x13];                                  // 0x0235(0x0013) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetShadowOffset(const struct FVector2D& InShadowOffset);
		void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
		void SetOpacity(float InOpacity);
		void SetJustification(ETextJustify InJustification);
		void SetFont(const struct FSlateFontInfo& InFontInfo);
		void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
		class FText GetText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.EditableTextBox
	 * Size -> 0x09B8 (FullSize[0x0AD0] - InheritedSize[0x0118])
	 */
	class UEditableTextBox : public UWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0118(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x0130(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FEditableTextBoxStyle                               WidgetStyle;                                             // 0x0140(0x0870) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x09B0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x09B8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x09D0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x09E0(0x0068) Deprecated, NativeAccessSpecifierPublic
		struct FLinearColor                                        ForegroundColor;                                         // 0x0A48(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0A58(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        ReadOnlyForegroundColor;                                 // 0x0A68(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsReadOnly;                                              // 0x0A78(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsPassword;                                              // 0x0A79(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZT15[0x2];                                   // 0x0A7A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDesiredWidth;                                     // 0x0A7C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0A80(0x0010) Deprecated, NativeAccessSpecifierPublic
		bool                                                       IsCaretMovedWhenGainFocus;                               // 0x0A90(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextWhenFocused;                                // 0x0A91(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       RevertTextOnEscape;                                      // 0x0A92(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x0A93(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextOnCommit;                                   // 0x0A94(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x0A95(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardType                                       KeyboardType;                                            // 0x0A96(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EW3G[0x1];                                   // 0x0A97(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x0A98(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0AA0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0AB0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2H46[0x10];                                  // 0x0AC0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetError(const class FText& InError);
		void OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		bool HasError();
		class FText GetText();
		void ClearError();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.InputKeySelector
	 * Size -> 0x0100 (FullSize[0x0218] - InheritedSize[0x0118])
	 */
	class UInputKeySelector : public UWidget
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0118(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0138(0x0068) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FMargin                                             Margin;                                                  // 0x01A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x01B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FText                                                KeySelectionText;                                        // 0x01C0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bAllowModifierKeys;                                      // 0x01D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JX3[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnKeySelected;                                           // 0x01E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsSelectingKeyChanged;                                 // 0x01F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8YV9[0x18];                                  // 0x0200(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetSelectedKey(const struct FInputChord& InSelectedKey);
		void SetKeySelectionText(const class FText& InKeySelectionText);
		void SetAllowModifierKeys(bool bInAllowModifierKeys);
		void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		void OnIsSelectingKeyChanged__DelegateSignature();
		bool GetIsSelectingKey();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Image
	 * Size -> 0x00E8 (FullSize[0x0200] - InheritedSize[0x0118])
	 */
	class UImage : public UWidget
	{
	public:
		class USlateBrushAsset*                                    Image;                                                   // 0x0118(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Brush;                                                   // 0x0120(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BrushDelegate;                                           // 0x01B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x01C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x01D0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x01E0(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IC85[0x10];                                  // 0x01F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetOpacity(float InOpacity);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
		void SetBrushFromMaterial(class UMaterialInterface* Material);
		void SetBrushFromAsset(class USlateBrushAsset* Asset);
		void SetBrush(const struct FSlateBrush& InBrush);
		class UMaterialInstanceDynamic* GetDynamicMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.OverlaySlot
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UOverlaySlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2OEN[0xE];                                   // 0x004A(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Overlay
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class UOverlay : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_JZB8[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetSwitcher
	 * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
	 */
	class UWidgetSwitcher : public UPanelWidget
	{
	public:
		int32_t                                                    ActiveWidgetIndex;                                       // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3T0J[0x14];                                  // 0x0134(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetActiveWidgetIndex(int32_t Index);
		void SetActiveWidget(class UWidget* Widget);
		class UWidget* GetWidgetAtIndex(int32_t Index);
		int32_t GetNumWidgets();
		int32_t GetActiveWidgetIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.AsyncTaskDownloadImage
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UAsyncTaskDownloadImage* STATIC_DownloadImage(const class FString& URL);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.DragDropOperation
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UDragDropOperation : public UObject
	{
	public:
		class FString                                              Tag;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Payload;                                                 // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             DefaultDragVisual;                                       // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDragPivot                                                 Pivot;                                                   // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TEJO[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Offset;                                                  // 0x004C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2CVR[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDrop;                                                  // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDragCancelled;                                         // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDragged;                                               // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void Drop(const struct FPointerEvent& PointerEvent);
		void Dragged(const struct FPointerEvent& PointerEvent);
		void DragCancelled(const struct FPointerEvent& PointerEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieScene2DTransformSection
	 * Size -> 0x0350 (FullSize[0x0390] - InheritedSize[0x0040])
	 */
	class UMovieScene2DTransformSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_5CRT[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          Translation[0x2];                                        // 0x0048(0x00F0) NativeAccessSpecifierPrivate
		struct FRichCurve                                          Rotation;                                                // 0x0138(0x0078) NativeAccessSpecifierPrivate
		struct FRichCurve                                          Scale[0x2];                                              // 0x01B0(0x00F0) NativeAccessSpecifierPrivate
		struct FRichCurve                                          Shear[0x2];                                              // 0x02A0(0x00F0) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieScene2DTransformTrack
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneMarginSection
	 * Size -> 0x01E8 (FullSize[0x0228] - InheritedSize[0x0040])
	 */
	class UMovieSceneMarginSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_42Y8[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          TopCurve;                                                // 0x0048(0x0078) NativeAccessSpecifierPrivate
		struct FRichCurve                                          LeftCurve;                                               // 0x00C0(0x0078) NativeAccessSpecifierPrivate
		struct FRichCurve                                          RightCurve;                                              // 0x0138(0x0078) NativeAccessSpecifierPrivate
		struct FRichCurve                                          BottomCurve;                                             // 0x01B0(0x0078) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneMarginTrack
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneWidgetMaterialTrack
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
	{
	public:
		TArray<class FName>                                        BrushPropertyNamePath;                                   // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FName                                                TrackName;                                               // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NamedSlotInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNamedSlotInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PropertyBinding
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UPropertyBinding : public UObject
	{
	public:
		TWeakObjectPtr<class UObject>                              SourceObject;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		struct FDynamicPropertyPath                                SourcePath;                                              // 0x0030(0x0010) NativeAccessSpecifierPublic
		class FName                                                DestinationProperty;                                     // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BoolBinding
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UBoolBinding : public UPropertyBinding
	{
	public:
		bool GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BrushBinding
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UBrushBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_YQWA[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FSlateBrush GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CheckedStateBinding
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UCheckedStateBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_OTZD[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		ECheckBoxState GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ColorBinding
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UColorBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_K7HK[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FSlateColor GetSlateValue();
		struct FLinearColor GetLinearValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.FloatBinding
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UFloatBinding : public UPropertyBinding
	{
	public:
		float GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Int32Binding
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UInt32Binding : public UPropertyBinding
	{
	public:
		int32_t GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MouseCursorBinding
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UMouseCursorBinding : public UPropertyBinding
	{
	public:
		EMouseCursor GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TextBinding
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UTextBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_3NU3[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		class FText GetTextValue();
		class FString GetStringValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.VisibilityBinding
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UVisibilityBinding : public UPropertyBinding
	{
	public:
		ESlateVisibility GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBinding
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWidgetBinding : public UPropertyBinding
	{
	public:
		class UWidget* GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RichTextBlockDecorator
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class URichTextBlockDecorator : public UObject
	{
	public:
		bool                                                       bReveal;                                                 // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QROW[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RevealedIndex;                                           // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SlateBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate);
		void STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate);
		void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
		struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
		bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
		struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);
		void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
		struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SlateDataSheet
	 * Size -> 0x0408 (FullSize[0x0430] - InheritedSize[0x0028])
	 */
	class USlateDataSheet : public UObject
	{
	public:
		class UTexture2D*                                          DataTexture;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EAND[0x400];                                 // 0x0030(0x0400) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SlateVectorArtData
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class USlateVectorArtData : public UObject
	{
	public:
		TArray<struct FSlateMeshVertex>                            VertexData;                                              // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<uint32_t>                                           IndexData;                                               // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  Material;                                                // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           ExtentMin;                                               // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FVector2D                                           ExtentMax;                                               // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UMGSequencePlayer
	 * Size -> 0x0178 (FullSize[0x01A0] - InheritedSize[0x0028])
	 */
	class UUMGSequencePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_5XG5[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetAnimation*                                    Animation;                                               // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BTGV[0x150];                                 // 0x0050(0x0150) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BorderSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UBorderSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DJ12[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ButtonSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UButtonSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L67P[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CanvasPanelSlot
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UCanvasPanelSlot : public UPanelSlot
	{
	public:
		struct FAnchorData                                         LayoutData;                                              // 0x0038(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bAutoSize;                                               // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKE9[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ZOrder;                                                  // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NAT0[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetZOrder(int32_t InZOrder);
		void SetSize(const struct FVector2D& InSize);
		void SetPosition(const struct FVector2D& InPosition);
		void SetOffsets(const struct FMargin& InOffset);
		void SetMinimum(const struct FVector2D& InMinimumAnchors);
		void SetMaximum(const struct FVector2D& InMaximumAnchors);
		void SetLayout(const struct FAnchorData& InLayoutData);
		void SetAutoSize(bool InbAutoSize);
		void SetAnchors(const struct FAnchors& InAnchors);
		void SetAlignment(const struct FVector2D& InAlignment);
		int32_t GetZOrder();
		struct FVector2D GetSize();
		struct FVector2D GetPosition();
		struct FMargin GetOffsets();
		struct FAnchorData GetLayout();
		bool GetAutoSize();
		struct FAnchors GetAnchors();
		struct FVector2D GetAlignment();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.GridSlot
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UGridSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3MIV[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Row;                                                     // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RowSpan;                                                 // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Column;                                                  // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColumnSpan;                                              // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Layer;                                                   // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Nudge;                                                   // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EABX[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetRowSpan(int32_t InRowSpan);
		void SetRow(int32_t InRow);
		void SetPadding(const struct FMargin& InPadding);
		void SetLayer(int32_t InLayer);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetColumnSpan(int32_t InColumnSpan);
		void SetColumn(int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.HorizontalBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UHorizontalBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSlateChildSize                                     Size;                                                    // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GWCB[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetSize(const struct FSlateChildSize& InSize);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SafeZoneSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class USafeZoneSlot : public UPanelSlot
	{
	public:
		bool                                                       bIsTitleSafe;                                            // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNFG[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             SafeAreaScale;                                           // 0x003C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HAlign;                                                  // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VAlign;                                                  // 0x004D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5SQ7[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScaleBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UScaleBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FVD[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBoxSlot
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UScrollBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQ54[0xF];                                   // 0x0049(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SizeBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class USizeBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZO6G[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UniformGridSlot
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UUniformGridSlot : public UPanelSlot
	{
	public:
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0039(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SDP[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Row;                                                     // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Column;                                                  // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WM7X[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetRow(int32_t InRow);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetColumn(int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.VerticalBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UVerticalBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSlateChildSize                                     Size;                                                    // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AGTQ[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetSize(const struct FSlateChildSize& InSize);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetSwitcherSlot
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UWidgetSwitcherSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZW3[0xE];                                   // 0x004A(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WindowTitleBarAreaSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UWindowTitleBarAreaSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MO47[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WrapBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UWrapBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bFillEmptySpace;                                         // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K793[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FillSpanWhenLessThan;                                    // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELGO[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
		void SetFillEmptySpace(bool InbFillEmptySpace);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CircularThrobber
	 * Size -> 0x00C0 (FullSize[0x01D8] - InheritedSize[0x0118])
	 */
	class UCircularThrobber : public UWidget
	{
	public:
		int32_t                                                    NumberOfPieces;                                          // 0x0118(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Period;                                                  // 0x011C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0120(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3W36[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateBrushAsset*                                    PieceImage;                                              // 0x0128(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Image;                                                   // 0x0130(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bEnableRadius;                                           // 0x01C0(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5715[0x17];                                  // 0x01C1(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetRadius(float InRadius);
		void SetPeriod(float InPeriod);
		void SetNumberOfPieces(int32_t InNumberOfPieces);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ComboBox
	 * Size -> 0x0030 (FullSize[0x0148] - InheritedSize[0x0118])
	 */
	class UComboBox : public UWidget
	{
	public:
		TArray<class UObject*>                                     Items;                                                   // 0x0118(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnGenerateWidgetEvent;                                   // 0x0128(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDME[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ComboBoxString
	 * Size -> 0x0C78 (FullSize[0x0D90] - InheritedSize[0x0118])
	 */
	class UComboBoxString : public UWidget
	{
	public:
		TArray<class FString>                                      DefaultOptions;                                          // 0x0118(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              SelectedOption;                                          // 0x0128(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FComboBoxStyle                                      WidgetStyle;                                             // 0x0138(0x0428) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTableRowStyle                                      ItemStyle;                                               // 0x0560(0x0718) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             ContentPadding;                                          // 0x0C78(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      MaxListHeight;                                           // 0x0C88(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasDownArrow;                                            // 0x0C8C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       EnableGamepadNavigationMode;                             // 0x0C8D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDHE[0x2];                                   // 0x0C8E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0C90(0x0068) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x0CF8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnGenerateWidgetEvent;                                   // 0x0D20(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0D30(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnOpening;                                               // 0x0D40(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQMF[0x40];                                  // 0x0D50(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetSelectedOption(const class FString& Option);
		bool RemoveOption(const class FString& Option);
		void RefreshOptions();
		void OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnOpeningEvent__DelegateSignature();
		class FString GetSelectedOption();
		int32_t GetOptionCount();
		class FString GetOptionAtIndex(int32_t Index);
		int32_t FindOptionIndex(const class FString& Option);
		void ClearSelection();
		void ClearOptions();
		void AddOption(const class FString& Option);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.EditableText
	 * Size -> 0x0390 (FullSize[0x04A8] - InheritedSize[0x0118])
	 */
	class UEditableText : public UWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0118(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x0130(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0140(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0158(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FEditableTextStyle                                  WidgetStyle;                                             // 0x0168(0x0248) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x03B0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    BackgroundImageSelected;                                 // 0x03B8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    BackgroundImageComposing;                                // 0x03C0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    CaretImage;                                              // 0x03C8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x03D0(0x0068) Deprecated, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0438(0x0028) Deprecated, NativeAccessSpecifierPublic
		bool                                                       IsReadOnly;                                              // 0x0460(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsPassword;                                              // 0x0461(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N6FU[0x2];                                   // 0x0462(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDesiredWidth;                                     // 0x0464(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCaretMovedWhenGainFocus;                               // 0x0468(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextWhenFocused;                                // 0x0469(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       RevertTextOnEscape;                                      // 0x046A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x046B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextOnCommit;                                   // 0x046C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x046D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardType                                       KeyboardType;                                            // 0x046E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R3DP[0x1];                                   // 0x046F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x0470(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0478(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0488(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WJQ6[0x10];                                  // 0x0498(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetIsReadOnly(bool InbIsReadyOnly);
		void SetIsPassword(bool InbIsPassword);
		void SetHintText(const class FText& InHintText);
		void OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ExpandableArea
	 * Size -> 0x0240 (FullSize[0x0358] - InheritedSize[0x0118])
	 */
	class UExpandableArea : public UWidget
	{
	public:
		unsigned char                                              UnknownData_UVRE[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpandableAreaStyle                                Style;                                                   // 0x0120(0x0128) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BorderBrush;                                             // 0x0248(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSlateColor                                         BorderColor;                                             // 0x02D8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsExpanded;                                             // 0x0300(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNBA[0x3];                                   // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxHeight;                                               // 0x0304(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             HeaderPadding;                                           // 0x0308(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FMargin                                             AreaPadding;                                             // 0x0318(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExpansionChanged;                                      // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UWidget*                                             HeaderContent;                                           // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidget*                                             BodyContent;                                             // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SIDU[0x10];                                  // 0x0348(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetIsExpanded(bool IsExpanded);
		bool GetIsExpanded();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CanvasPanel
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class UCanvasPanel : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_F08G[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BackgroundBlurWidget
	 * Size -> 0x00B0 (FullSize[0x01E0] - InheritedSize[0x0130])
	 */
	class UBackgroundBlurWidget : public UContentWidget
	{
	public:
		float                                                      BlurStrength;                                            // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAutoRadiusCalculation;                          // 0x0134(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHRM[0x3];                                   // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BlurRadius;                                              // 0x0138(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCC0[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         LowQualityFallbackBrush;                                 // 0x0140(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YSGQ[0x10];                                  // 0x01D0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
		void SetBlurStrength(float InStrength);
		void SetBlurRadius(int32_t InBlurRadius);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Border
	 * Size -> 0x0160 (FullSize[0x0290] - InheritedSize[0x0130])
	 */
	class UBorder : public UContentWidget
	{
	public:
		struct FLinearColor                                        ContentColorAndOpacity;                                  // 0x0130(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ContentColorAndOpacityDelegate;                          // 0x0140(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0150(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0160(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0161(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WURA[0x6];                                   // 0x0162(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Background;                                              // 0x0168(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BackgroundDelegate;                                      // 0x01F8(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        BrushColor;                                              // 0x0208(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BrushColorDelegate;                                      // 0x0218(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           DesiredSizeScale;                                        // 0x0228(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowEffectWhenDisabled;                                 // 0x0230(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TEVI[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x0238(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonUpEvent;                                    // 0x0248(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseMoveEvent;                                        // 0x0258(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseDoubleClickEvent;                                 // 0x0268(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2AL[0x10];                                  // 0x0278(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateBrushAsset*                                    Brush;                                                   // 0x0288(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetDesiredSizeScale(const struct FVector2D& InScale);
		void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
		void SetBrushFromTexture(class UTexture2D* Texture);
		void SetBrushFromMaterial(class UMaterialInterface* Material);
		void SetBrushFromAsset(class USlateBrushAsset* Asset);
		void SetBrushColor(const struct FLinearColor& InBrushColor);
		void SetBrush(const struct FSlateBrush& InBrush);
		class UMaterialInstanceDynamic* GetDynamicMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CheckBox
	 * Size -> 0x06B0 (FullSize[0x07E0] - InheritedSize[0x0130])
	 */
	class UCheckBox : public UContentWidget
	{
	public:
		ECheckBoxState                                             CheckedState;                                            // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVDN[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CheckedStateDelegate;                                    // 0x0138(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FCheckBoxStyle                                      WidgetStyle;                                             // 0x0148(0x05E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0728(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UncheckedImage;                                          // 0x0730(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UncheckedHoveredImage;                                   // 0x0738(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UncheckedPressedImage;                                   // 0x0740(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    CheckedImage;                                            // 0x0748(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    CheckedHoveredImage;                                     // 0x0750(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    CheckedPressedImage;                                     // 0x0758(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UndeterminedImage;                                       // 0x0760(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UndeterminedHoveredImage;                                // 0x0768(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UndeterminedPressedImage;                                // 0x0770(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0778(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTI2[0x3];                                   // 0x0779(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x077C(0x0010) Deprecated, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N3DK[0x4];                                   // 0x078C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         BorderBackgroundColor;                                   // 0x0790(0x0028) Deprecated, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x07B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5OF[0x7];                                   // 0x07B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCheckStateChanged;                                     // 0x07C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACA9[0x10];                                  // 0x07D0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetIsChecked(bool InIsChecked);
		void SetCheckedState(ECheckBoxState InCheckedState);
		bool IsPressed();
		bool IsChecked();
		ECheckBoxState GetCheckedState();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.InvalidationBox
	 * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
	 */
	class UInvalidationBox : public UContentWidget
	{
	public:
		bool                                                       bCanCache;                                               // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       CacheRelativeTransforms;                                 // 0x0131(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F3EY[0x16];                                  // 0x0132(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetCanCache(bool CanCache);
		void InvalidateCache();
		bool GetCanCache();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MenuAnchor
	 * Size -> 0x0040 (FullSize[0x0170] - InheritedSize[0x0130])
	 */
	class UMenuAnchor : public UContentWidget
	{
	public:
		class UClass*                                              MenuClass;                                               // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnGetMenuContentEvent;                                   // 0x0138(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		EMenuPlacement                                             Placement;                                               // 0x0148(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldDeferPaintingAfterWindowContent;                   // 0x0149(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       UseApplicationMenuStack;                                 // 0x014A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CILO[0x5];                                   // 0x014B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMenuOpenChanged;                                       // 0x0150(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EW0[0x10];                                  // 0x0160(0x0010) MISSED OFFSET (PADDING)

	public:
		void ToggleOpen(bool bFocusOnOpen);
		bool ShouldOpenDueToClick();
		void Open(bool bFocusMenu);
		bool IsOpen();
		bool HasOpenSubMenus();
		struct FVector2D GetMenuPosition();
		void Close();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NamedSlot
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class UNamedSlot : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_BZQ4[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RetainerBox
	 * Size -> 0x0028 (FullSize[0x0158] - InheritedSize[0x0130])
	 */
	class URetainerBox : public UContentWidget
	{
	public:
		int32_t                                                    Phase;                                                   // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhaseCount;                                              // 0x0134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  EffectMaterial;                                          // 0x0138(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TextureParameter;                                        // 0x0140(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4KC4[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTextureParameter(const class FName& TextureParameter);
		void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
		class UMaterialInstanceDynamic* GetEffectMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SafeZone
	 * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
	 */
	class USafeZone : public UContentWidget
	{
	public:
		bool                                                       PadLeft;                                                 // 0x0130(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       PadRight;                                                // 0x0131(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       PadTop;                                                  // 0x0132(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       PadBottom;                                               // 0x0133(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VYQH[0x14];                                  // 0x0134(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScaleBox
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	class UScaleBox : public UContentWidget
	{
	public:
		EStretch                                                   Stretch;                                                 // 0x0130(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStretchDirection                                          StretchDirection;                                        // 0x0131(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R56F[0x2];                                   // 0x0132(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UserSpecifiedScale;                                      // 0x0134(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreInheritedScale;                                    // 0x0138(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5LC[0x17];                                  // 0x0139(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetUserSpecifiedScale(float InUserSpecifiedScale);
		void SetStretchDirection(EStretchDirection InStretchDirection);
		void SetStretch(EStretch InStretch);
		void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SizeBox
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	class USizeBox : public UContentWidget
	{
	public:
		bool                                                       bOverride_WidthOverride : 1;                             // 0x0130(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_HeightOverride : 1;                            // 0x0130(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_MinDesiredWidth : 1;                           // 0x0130(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_MinDesiredHeight : 1;                          // 0x0130(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_MaxDesiredWidth : 1;                           // 0x0130(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_MaxDesiredHeight : 1;                          // 0x0130(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_MaxAspectRatio : 1;                            // 0x0130(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1H1[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WidthOverride;                                           // 0x0134(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightOverride;                                          // 0x0138(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredWidth;                                         // 0x013C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredHeight;                                        // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDesiredWidth;                                         // 0x0144(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDesiredHeight;                                        // 0x0148(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAspectRatio;                                          // 0x014C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YW4U[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetWidthOverride(float InWidthOverride);
		void SetMinDesiredWidth(float InMinDesiredWidth);
		void SetMinDesiredHeight(float InMinDesiredHeight);
		void SetMaxDesiredWidth(float InMaxDesiredWidth);
		void SetMaxDesiredHeight(float InMaxDesiredHeight);
		void SetMaxAspectRatio(float InMaxAspectRatio);
		void SetHeightOverride(float InHeightOverride);
		void ClearWidthOverride();
		void ClearMinDesiredWidth();
		void ClearMinDesiredHeight();
		void ClearMaxDesiredWidth();
		void ClearMaxDesiredHeight();
		void ClearMaxAspectRatio();
		void ClearHeightOverride();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Viewport
	 * Size -> 0x0028 (FullSize[0x0158] - InheritedSize[0x0130])
	 */
	class UViewport : public UContentWidget
	{
	public:
		struct FLinearColor                                        BackgroundColor;                                         // 0x0130(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EL12[0x18];                                  // 0x0140(0x0018) MISSED OFFSET (PADDING)

	public:
		class AActor* Spawn(class UClass* ActorClass);
		void SetViewRotation(const struct FRotator& Rotation);
		void SetViewLocation(const struct FVector& Location);
		struct FRotator GetViewRotation();
		class UWorld* GetViewportWorld();
		struct FVector GetViewLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WindowTitleBarArea
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	class UWindowTitleBarArea : public UContentWidget
	{
	public:
		bool                                                       bDoubleClickTogglesFullscreen;                           // 0x0130(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C53Q[0x1F];                                  // 0x0131(0x001F) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.GridPanel
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	class UGridPanel : public UPanelWidget
	{
	public:
		TArray<float>                                              ColumnFill;                                              // 0x0130(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              RowFill;                                                 // 0x0140(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2AKS[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (PADDING)

	public:
		class UGridSlot* AddChildToGrid(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.HorizontalBox
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class UHorizontalBox : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_BOF4[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBox
	 * Size -> 0x0798 (FullSize[0x08C8] - InheritedSize[0x0130])
	 */
	class UScrollBox : public UPanelWidget
	{
	public:
		struct FScrollBoxStyle                                     WidgetStyle;                                             // 0x0130(0x0248) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FScrollBarStyle                                     WidgetBarStyle;                                          // 0x0378(0x0518) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0890(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              BarStyle;                                                // 0x0898(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x08A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           ScrollBarVisibility;                                     // 0x08A1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConsumeMouseWheel                                         ConsumeMouseWheel;                                       // 0x08A2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BBP[0x1];                                   // 0x08A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScrollbarThickness;                                      // 0x08A4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       AlwaysShowScrollbar;                                     // 0x08AC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3TSG[0x1B];                                  // 0x08AD(0x001B) MISSED OFFSET (PADDING)

	public:
		void SetScrollOffset(float NewScrollOffset);
		void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll);
		void ScrollToStart();
		void ScrollToEnd();
		float GetScrollOffset();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UniformGridPanel
	 * Size -> 0x0028 (FullSize[0x0158] - InheritedSize[0x0130])
	 */
	class UUniformGridPanel : public UPanelWidget
	{
	public:
		struct FMargin                                             SlotPadding;                                             // 0x0130(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      MinDesiredSlotWidth;                                     // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredSlotHeight;                                    // 0x0144(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9RS1[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetSlotPadding(const struct FMargin& InSlotPadding);
		void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
		void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
		class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.VerticalBox
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class UVerticalBox : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_FJZX[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WrapBox
	 * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
	 */
	class UWrapBox : public UPanelWidget
	{
	public:
		struct FVector2D                                           InnerSlotPadding;                                        // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8Z6[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetInnerSlotPadding(const struct FVector2D& InPadding);
		class UWrapBoxSlot* AddChildWrapBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ProgressBar
	 * Size -> 0x0220 (FullSize[0x0338] - InheritedSize[0x0118])
	 */
	class UProgressBar : public UWidget
	{
	public:
		struct FProgressBarStyle                                   WidgetStyle;                                             // 0x0118(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x02D0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    BackgroundImage;                                         // 0x02D8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    FillImage;                                               // 0x02E0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    MarqueeImage;                                            // 0x02E8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Percent;                                                 // 0x02F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProgressBarFillType                                       BarFillType;                                             // 0x02F4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMarquee;                                              // 0x02F5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPA0[0x2];                                   // 0x02F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      PercentDelegate;                                         // 0x02F8(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        FillColorAndOpacity;                                     // 0x0308(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      FillColorAndOpacityDelegate;                             // 0x0318(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMF3[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetPercent(float InPercent);
		void SetIsMarquee(bool InbIsMarquee);
		void SetFillColorAndOpacity(const struct FLinearColor& InColor);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBar
	 * Size -> 0x0540 (FullSize[0x0658] - InheritedSize[0x0118])
	 */
	class UScrollBar : public UWidget
	{
	public:
		struct FScrollBarStyle                                     WidgetStyle;                                             // 0x0118(0x0518) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0630(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysShowScrollbar;                                    // 0x0638(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x0639(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YPRV[0x2];                                   // 0x063A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Thickness;                                               // 0x063C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72SC[0x14];                                  // 0x0644(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetState(float InOffsetFraction, float InThumbSizeFraction);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Slider
	 * Size -> 0x02F8 (FullSize[0x0410] - InheritedSize[0x0118])
	 */
	class USlider : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PM1[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0120(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSliderStyle                                        WidgetStyle;                                             // 0x0130(0x0250) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x0380(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BYR[0x3];                                   // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SliderBarColor;                                          // 0x0384(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderHandleColor;                                       // 0x0394(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IndentHandle;                                            // 0x03A4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       Locked;                                                  // 0x03A5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWPP[0x2];                                   // 0x03A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StepSize;                                                // 0x03A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x03AC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OVM[0x3];                                   // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMouseCaptureBegin;                                     // 0x03B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMouseCaptureEnd;                                       // 0x03C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureBegin;                                // 0x03D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureEnd;                                  // 0x03E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x03F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHIM[0x10];                                  // 0x0400(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetValue(float InValue);
		void SetStepSize(float InValue);
		void SetSliderHandleColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetLocked(bool InValue);
		void SetIndentHandle(bool InValue);
		float GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Spacer
	 * Size -> 0x0018 (FullSize[0x0130] - InheritedSize[0x0118])
	 */
	class USpacer : public UWidget
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LEFJ[0x10];                                  // 0x0120(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetSize(const struct FVector2D& InSize);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SpinBox
	 * Size -> 0x0438 (FullSize[0x0550] - InheritedSize[0x0118])
	 */
	class USpinBox : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TJ9[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0120(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSpinBoxStyle                                       WidgetStyle;                                             // 0x0130(0x0310) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0440(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Delta;                                                   // 0x0448(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliderExponent;                                          // 0x044C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0450(0x0068) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      MinDesiredWidth;                                         // 0x04B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x04BC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextOnCommit;                                   // 0x04BD(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TOP[0x2];                                   // 0x04BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         ForegroundColor;                                         // 0x04C0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x04E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueCommitted;                                        // 0x04F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBeginSliderMovement;                                   // 0x0508(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndSliderMovement;                                     // 0x0518(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bOverride_MinValue : 1;                                  // 0x0528(0x0001) BIT_FIELD Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bOverride_MaxValue : 1;                                  // 0x0528(0x0001) BIT_FIELD Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bOverride_MinSliderValue : 1;                            // 0x0528(0x0001) BIT_FIELD Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bOverride_MaxSliderValue : 1;                            // 0x0528(0x0001) BIT_FIELD Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W3AX[0x3];                                   // 0x0529(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinValue;                                                // 0x052C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxValue;                                                // 0x0530(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinSliderValue;                                          // 0x0534(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSliderValue;                                          // 0x0538(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W9L7[0x14];                                  // 0x053C(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetValue(float NewValue);
		void SetMinValue(float NewValue);
		void SetMinSliderValue(float NewValue);
		void SetMaxValue(float NewValue);
		void SetMaxSliderValue(float NewValue);
		void SetForegroundColor(const struct FSlateColor& InForegroundColor);
		void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void OnSpinBoxBeginSliderMovement__DelegateSignature();
		float GetValue();
		float GetMinValue();
		float GetMinSliderValue();
		float GetMaxValue();
		float GetMaxSliderValue();
		void ClearMinValue();
		void ClearMinSliderValue();
		void ClearMaxValue();
		void ClearMaxSliderValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TableViewBase
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UTableViewBase : public UWidget
	{
	public:
		class UWidget* OnGenerateRowUObject__DelegateSignature(class UObject* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ListView
	 * Size -> 0x0040 (FullSize[0x0158] - InheritedSize[0x0118])
	 */
	class UListView : public UTableViewBase
	{
	public:
		float                                                      ItemHeight;                                              // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E71E[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     Items;                                                   // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ESelectionMode                                             SelectionMode;                                           // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYHQ[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnGenerateRowEvent;                                      // 0x0138(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZ2A[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TileView
	 * Size -> 0x0040 (FullSize[0x0158] - InheritedSize[0x0118])
	 */
	class UTileView : public UTableViewBase
	{
	public:
		float                                                      ItemWidth;                                               // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemHeight;                                              // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     Items;                                                   // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ESelectionMode                                             SelectionMode;                                           // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJT9[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnGenerateTileEvent;                                     // 0x0138(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13DN[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetItemWidth(float Width);
		void SetItemHeight(float Height);
		void RequestListRefresh();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MultiLineEditableText
	 * Size -> 0x02E8 (FullSize[0x0428] - InheritedSize[0x0140])
	 */
	class UMultiLineEditableText : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0140(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0158(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0170(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     WidgetStyle;                                             // 0x0180(0x0208) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0388(0x0068) Deprecated, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x03F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGM1[0x7];                                   // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x03F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0408(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N7N9[0x10];                                  // 0x0418(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MultiLineEditableTextBox
	 * Size -> 0x0B90 (FullSize[0x0CD0] - InheritedSize[0x0140])
	 */
	class UMultiLineEditableTextBox : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0140(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0158(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0170(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FEditableTextBoxStyle                               WidgetStyle;                                             // 0x0180(0x0870) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x09F0(0x0208) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x0BF8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGJC[0x7];                                   // 0x0BF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0C00(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0C08(0x0068) Deprecated, NativeAccessSpecifierPublic
		struct FLinearColor                                        ForegroundColor;                                         // 0x0C70(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0C80(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        ReadOnlyForegroundColor;                                 // 0x0C90(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0CA0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0CB0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UOWI[0x10];                                  // 0x0CC0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetError(const class FText& InError);
		void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RichTextBlock
	 * Size -> 0x02C8 (FullSize[0x0408] - InheritedSize[0x0140])
	 */
	class URichTextBlock : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0140(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		class FScriptDelegate                                      TextDelegate;                                            // 0x0158(0x0010) ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FSlateFontInfo                                      Font;                                                    // 0x0168(0x0068) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FLinearColor                                        Color;                                                   // 0x01D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<class URichTextBlockDecorator*>                     Decorators;                                              // 0x01E0(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L41U[0x218];                                 // 0x01F0(0x0218) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Throbber
	 * Size -> 0x00B0 (FullSize[0x01C8] - InheritedSize[0x0118])
	 */
	class UThrobber : public UWidget
	{
	public:
		int32_t                                                    NumberOfPieces;                                          // 0x0118(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateHorizontally;                                    // 0x011C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAnimateVertically;                                      // 0x011D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAnimateOpacity;                                         // 0x011E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KSRO[0x1];                                   // 0x011F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateBrushAsset*                                    PieceImage;                                              // 0x0120(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Image;                                                   // 0x0128(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I0FP[0x10];                                  // 0x01B8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetNumberOfPieces(int32_t InNumberOfPieces);
		void SetAnimateVertically(bool bInAnimateVertically);
		void SetAnimateOpacity(bool bInAnimateOpacity);
		void SetAnimateHorizontally(bool bInAnimateHorizontally);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetTree
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UWidgetTree : public UObject
	{
	public:
		class UWidget*                                             RootWidget;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UWidget*>                                     AllWidgets;                                              // 0x0030(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetAnimation
	 * Size -> 0x0180 (FullSize[0x01A8] - InheritedSize[0x0028])
	 */
	class UWidgetAnimation : public UMovieSceneSequence
	{
	public:
		class FScriptMulticastDelegate                             OnAnimationStarted;                                      // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAnimationFinished;                                     // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UMovieScene*                                         MovieScene;                                              // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWidgetAnimationBinding>                     AnimationBindings;                                       // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3UJ4[0x148];                                 // 0x0060(0x0148) MISSED OFFSET (PADDING)

	public:
		float GetStartTime();
		float GetEndTime();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBlueprintGeneratedClass
	 * Size -> 0x0040 (FullSize[0x0330] - InheritedSize[0x02F0])
	 */
	class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		class UWidgetTree*                                         WidgetTree;                                              // 0x02F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDelegateRuntimeBinding>                     Bindings;                                                // 0x02F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UWidgetAnimation*>                            Animations;                                              // 0x0308(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        NamedSlots;                                              // 0x0318(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bCanEverTick : 1;                                        // 0x0328(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanEverPaint : 1;                                       // 0x0328(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNRJ[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FEventReply STATIC_UnlockMouse(struct FEventReply* Reply);
		struct FEventReply STATIC_Unhandled();
		struct FEventReply STATIC_SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers);
		struct FEventReply STATIC_SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition);
		void STATIC_SetInputMode_UIOnlyEx(class APlayerController* Target, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
		void STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
		void STATIC_SetInputMode_GameOnly(class APlayerController* Target);
		void STATIC_SetInputMode_GameAndUIEx(class APlayerController* Target, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
		void STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
		void STATIC_SetFocusToGameViewport();
		void STATIC_SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture);
		void STATIC_SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material);
		struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);
		struct FEventReply STATIC_ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks);
		struct FSlateBrush STATIC_NoResourceBrush();
		struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height);
		struct FSlateBrush STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height);
		struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
		struct FEventReply STATIC_LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
		bool STATIC_IsDragDropping();
		struct FEventReply STATIC_Handled();
		void STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector2D* SafePadding, struct FVector2D* SafePaddingScale, struct FVector2D* SpillOverPadding);
		struct FKeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromControllerEvent(const struct FControllerEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
		class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateBrush* Brush);
		class UDragDropOperation* STATIC_GetDragDroppingContent();
		class UTexture2D* STATIC_GetBrushResourceAsTexture2D(struct FSlateBrush* Brush);
		class UMaterialInterface* STATIC_GetBrushResourceAsMaterial(struct FSlateBrush* Brush);
		class UObject* STATIC_GetBrushResource(struct FSlateBrush* Brush);
		void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, TArray<class UUserWidget*>* FoundWidgets, bool TopLevelOnly);
		void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly);
		struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);
		void STATIC_DrawTextFormatted(struct FPaintContext* Context, const class FText& Text, const struct FVector2D& Position, class UFont* Font, int32_t FontSize, const class FName& FontTypeFace, const struct FLinearColor& Tint);
		void STATIC_DrawText(struct FPaintContext* Context, const class FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint);
		void STATIC_DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias);
		void STATIC_DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias);
		void STATIC_DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint);
		void STATIC_DismissAllMenus();
		struct FEventReply STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
		struct FEventReply STATIC_DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
		class UDragDropOperation* STATIC_CreateDragDropOperation(class UClass* OperationClass);
		class UUserWidget* STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
		struct FEventReply STATIC_ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers);
		struct FEventReply STATIC_CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
		struct FEventReply STATIC_CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
		void STATIC_CancelDragDrop();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetComponent
	 * Size -> 0x0138 (FullSize[0x0820] - InheritedSize[0x06E8])
	 */
	class UWidgetComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_OBIH[0x8];                                   // 0x06E8(0x0008) Fix Super Size
		class UClass*                                              WidgetClass;                                             // 0x06F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FIntPoint                                           DrawSize;                                                // 0x06F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bManuallyRedraw;                                         // 0x0700(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bRedrawRequested;                                        // 0x0701(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PDPP[0x2];                                   // 0x0702(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RedrawTime;                                              // 0x0704(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastWidgetRenderTime;                                    // 0x0708(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWindowFocusable;                                        // 0x070C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JUU8[0x3];                                   // 0x070D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           CurrentDrawSize;                                         // 0x0710(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bDrawAtDesiredSize;                                      // 0x0718(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OSSD[0x3];                                   // 0x0719(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Pivot;                                                   // 0x071C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PDQM[0x4];                                   // 0x0724(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULocalPlayer*                                        OwnerPlayer;                                             // 0x0728(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        BackgroundColor;                                         // 0x0730(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FLinearColor                                        TintColorAndOpacity;                                     // 0x0740(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      OpacityFromTexture;                                      // 0x0750(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWidgetBlendMode                                           BlendMode;                                               // 0x0754(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsTwoSided;                                             // 0x0755(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       TickWhenOffscreen;                                       // 0x0756(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EB1U[0x1];                                   // 0x0757(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         Widget;                                                  // 0x0758(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VDLS[0x20];                                  // 0x0760(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          BodySetup;                                               // 0x0780(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  TranslucentMaterial;                                     // 0x0788(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  TranslucentMaterial_OneSided;                            // 0x0790(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  OpaqueMaterial;                                          // 0x0798(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  OpaqueMaterial_OneSided;                                 // 0x07A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  MaskedMaterial;                                          // 0x07A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  MaskedMaterial_OneSided;                                 // 0x07B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x07B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            MaterialInstance;                                        // 0x07C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAddedToScreen;                                          // 0x07C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bEditTimeUsable;                                         // 0x07C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W8XT[0x6];                                   // 0x07CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SharedLayerName;                                         // 0x07D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LayerZOrder;                                             // 0x07D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PZ2F[0x44];                                  // 0x07DC(0x0044) MISSED OFFSET (PADDING)

	public:
		void SetWidget(class UUserWidget* Widget);
		void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
		void SetDrawSize(const struct FVector2D& Size);
		void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
		void RequestRedraw();
		class UUserWidget* GetUserWidgetObject();
		class UTextureRenderTarget2D* GetRenderTarget();
		class ULocalPlayer* GetOwnerPlayer();
		class UMaterialInstanceDynamic* GetMaterialInstance();
		struct FVector2D GetDrawSize();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetInteractionComponent
	 * Size -> 0x01F0 (FullSize[0x0490] - InheritedSize[0x02A0])
	 */
	class UWidgetInteractionComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnHoveredWidgetChanged;                                  // 0x02A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OPY8[0x10];                                  // 0x02B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VirtualUserIndex;                                        // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointerIndex;                                            // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          TraceChannel;                                            // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFHX[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InteractionDistance;                                     // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWidgetInteractionSource                                   InteractionSource;                                       // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHitTesting;                                       // 0x02D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowDebug;                                              // 0x02D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CPDB[0x1];                                   // 0x02D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DebugColor;                                              // 0x02D4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R64K[0x7C];                                  // 0x02E4(0x007C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          CustomHitResult;                                         // 0x0360(0x0088) Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FVector2D                                           LocalHitLocation;                                        // 0x03E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector2D                                           LastLocalHitLocation;                                    // 0x03F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UWidgetComponent*                                    HoveredWidgetComponent;                                  // 0x03F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FHitResult                                          LastHitResult;                                           // 0x0400(0x0088) Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsHoveredWidgetInteractable;                            // 0x0488(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsHoveredWidgetFocusable;                               // 0x0489(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsHoveredWidgetHitTestVisible;                          // 0x048A(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F3BP[0x5];                                   // 0x048B(0x0005) MISSED OFFSET (PADDING)

	public:
		void SetCustomHitResult(const struct FHitResult& HitResult);
		bool SendKeyChar(const class FString& Characters, bool bRepeat);
		void ScrollWheel(float ScrollDelta);
		void ReleasePointerKey(const struct FKey& Key);
		bool ReleaseKey(const struct FKey& Key);
		void PressPointerKey(const struct FKey& Key);
		bool PressKey(const struct FKey& Key, bool bRepeat);
		bool PressAndReleaseKey(const struct FKey& Key);
		bool IsOverInteractableWidget();
		bool IsOverHitTestVisibleWidget();
		bool IsOverFocusableWidget();
		struct FHitResult GetLastHitResult();
		class UWidgetComponent* GetHoveredWidgetComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetLayoutLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UVerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
		class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
		class UOverlaySlot* STATIC_SlotAsOverlaySlot(class UWidget* Widget);
		class UHorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
		class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);
		class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);
		class UBorderSlot* STATIC_SlotAsBorderSlot(class UWidget* Widget);
		void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
		bool STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition);
		struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);
		float STATIC_GetViewportScale(class UObject* WorldContextObject);
		bool STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetNavigation
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UWidgetNavigation : public UObject
	{
	public:
		struct FWidgetNavigationData                               Up;                                                      // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Down;                                                    // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Left;                                                    // 0x0058(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Right;                                                   // 0x0070(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Next;                                                    // 0x0088(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Previous;                                                // 0x00A0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
