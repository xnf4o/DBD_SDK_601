#pragma once

/**
 * Name: DBD
 * Version: 601
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
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVisual : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Widget
	 * Size -> 0x0100 (FullSize[0x0130] - InheritedSize[0x0030])
	 */
	class UWidget : public UVisual
	{
	public:
		class UPanelSlot*                                          Slot;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      bIsEnabledDelegate;                                      // 0x0038(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UKA[0x4];                                   // 0x0038(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_5MLQ[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ToolTipText;                                             // 0x0050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ToolTipTextDelegate;                                     // 0x0068(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQ2C[0x4];                                   // 0x0068(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_KXSK[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             ToolTipWidget;                                           // 0x0080(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ToolTipWidgetDelegate;                                   // 0x0088(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EMRA[0x4];                                   // 0x0088(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptDelegate                                      VisibilityDelegate;                                      // 0x009C(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Z9F[0x4];                                   // 0x009C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FWidgetTransform                                    RenderTransform;                                         // 0x00B0(0x001C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           RenderTransformPivot;                                    // 0x00CC(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsVariable : 1;                                         // 0x00D4(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCreatedByConstructionScript : 1;                        // 0x00D4(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsEnabled : 1;                                          // 0x00D4(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_Cursor : 1;                                    // 0x00D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T75O[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateAccessibleWidgetData*                          AccessibleWidgetData;                                    // 0x00D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bIsVolatile : 1;                                         // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMouseCursor                                               Cursor;                                                  // 0x00E1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWidgetClipping                                            Clipping;                                                // 0x00E2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           Visibility;                                              // 0x00E3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RenderOpacity;                                           // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPixelSnappingMethod                                       PixelSnappingMethod;                                     // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GW7D[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetNavigation*                                   Navigation;                                              // 0x00F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFlowDirectionPreference                                   FlowDirectionPreference;                                 // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IF3Z[0x27];                                  // 0x00F9(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPropertyBinding*>                            NativeBindings;                                          // 0x0120(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	public:
		void SetVisibility(ESlateVisibility InVisibility);
		void SetUserFocus(class APlayerController* PlayerController);
		void SetToolTipText(const class FText& InToolTipText);
		void SetToolTip(class UWidget* Widget);
		void SetRenderTranslation(const struct FVector2D& Translation);
		void SetRenderTransformPivot(const struct FVector2D& Pivot);
		void SetRenderTransformAngle(float Angle);
		void SetRenderTransform(const struct FWidgetTransform& InTransform);
		void SetRenderShear(const struct FVector2D& Shear);
		void SetRenderScale(const struct FVector2D& Scale);
		void SetRenderOpacity(float InOpacity);
		void SetPixelSnappingMethod(EPixelSnappingMethod InPixelSnappingMethod);
		void SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget);
		void SetNavigationRuleCustomBoundary(EUINavigation Direction, const class FScriptDelegate& InCustomDelegate);
		void SetNavigationRuleCustom(EUINavigation Direction, const class FScriptDelegate& InCustomDelegate);
		void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);
		void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const class FName& WidgetToFocus);
		void SetKeyboardFocus();
		void SetIsEnabled(bool bInIsEnabled);
		void SetFocus();
		void SetCursor(EMouseCursor InCursor);
		void SetClipping(EWidgetClipping InClipping);
		void SetAllNavigationRules(EUINavigationRule Rule, const class FName& WidgetToFocus);
		void ResetCursor();
		void RemoveFromParent();
		struct FEventReply OnReply__DelegateSignature();
		struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		bool IsVisible();
		bool IsHovered();
		void InvalidateLayoutAndVolatility();
		bool HasUserFocusedDescendants(class APlayerController* PlayerController);
		bool HasUserFocus(class APlayerController* PlayerController);
		bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);
		bool HasMouseCapture();
		bool HasKeyboardFocus();
		bool HasFocusedDescendants();
		bool HasAnyUserFocus();
		class UWidget* GetWidget__DelegateSignature();
		ESlateVisibility GetVisibility();
		struct FGeometry GetTickSpaceGeometry();
		class FText GetText__DelegateSignature();
		ESlateVisibility GetSlateVisibility__DelegateSignature();
		struct FSlateColor GetSlateColor__DelegateSignature();
		struct FSlateBrush GetSlateBrush__DelegateSignature();
		float GetRenderTransformAngle();
		float GetRenderOpacity();
		EPixelSnappingMethod GetPixelSnappingMethod();
		class UPanelWidget* GetParent();
		struct FGeometry GetPaintSpaceGeometry();
		class APlayerController* GetOwningPlayer();
		class ULocalPlayer* GetOwningLocalPlayer();
		EMouseCursor GetMouseCursor__DelegateSignature();
		struct FLinearColor GetLinearColor__DelegateSignature();
		bool GetIsEnabled();
		int32_t GetInt32__DelegateSignature();
		class UGameInstance* GetGameInstance();
		float GetFloat__DelegateSignature();
		struct FVector2D GetDesiredSize();
		EWidgetClipping GetClipping();
		ECheckBoxState GetCheckBoxState__DelegateSignature();
		struct FGeometry GetCachedGeometry();
		bool GetBool__DelegateSignature();
		class FText GetAccessibleText();
		class FText GetAccessibleSummaryText();
		class UWidget* GenerateWidgetForString__DelegateSignature(const class FString& Item);
		class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
		void ForceVolatile(bool bForce);
		void ForceLayoutPrepass();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PanelWidget
	 * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
	 */
	class UPanelWidget : public UWidget
	{
	public:
		TArray<class UPanelSlot*>                                  Slots;                                                   // 0x0130(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FHQC[0x8];                                   // 0x0140(0x0008) MISSED OFFSET (PADDING)

	public:
		bool RemoveChildAt(int32_t Index);
		bool RemoveChild(class UWidget* Content);
		bool HasChild(class UWidget* Content);
		bool HasAnyChildren();
		int32_t GetChildrenCount();
		int32_t GetChildIndex(class UWidget* Content);
		class UWidget* GetChildAt(int32_t Index);
		TArray<class UWidget*> GetAllChildren();
		void ClearChildren();
		class UPanelSlot* AddChild(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ContentWidget
	 * Size -> 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
	 */
	class UContentWidget : public UPanelWidget
	{
	public:
		class UPanelSlot* SetContent(class UWidget* Content);
		class UPanelSlot* GetContentSlot();
		class UWidget* GetContent();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PanelSlot
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UPanelSlot : public UVisual
	{
	public:
		class UPanelWidget*                                        Parent;                                                  // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             Content;                                                 // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserWidget
	 * Size -> 0x0168 (FullSize[0x0298] - InheritedSize[0x0130])
	 */
	class UUserWidget : public UWidget
	{
	public:
		unsigned char                                              UnknownData_NX0S[0x8];                                   // 0x0130(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x0138(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x0148(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFD2[0x4];                                   // 0x0148(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_X8WV[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         ForegroundColor;                                         // 0x0160(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ForegroundColorDelegate;                                 // 0x0188(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2DC[0x4];                                   // 0x0188(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_YUA7[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnVisibilityChanged;                                     // 0x01A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_20NA[0x18];                                  // 0x01B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x01C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<class UUMGSequencePlayer*>                          ActiveSequencePlayers;                                   // 0x01D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class UUMGSequenceTickManager*                             AnimationTickManager;                                    // 0x01E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UUMGSequencePlayer*>                          StoppedSequencePlayers;                                  // 0x01F0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FNamedSlotBinding>                           NamedSlotBindings;                                       // 0x0200(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UWidgetTree*                                         WidgetTree;                                              // 0x0210(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0218(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsKeyboardFocus : 1;                              // 0x021C(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsFocusable : 1;                                        // 0x021C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStopAction : 1;                                         // 0x021C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHasScriptImplementedTick : 1;                           // 0x021C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHasScriptImplementedPaint : 1;                          // 0x021C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13EB[0xB];                                   // 0x021D(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EWidgetTickFrequency                                       TickFrequency;                                           // 0x0228(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7VPX[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputComponent*                                     InputComponent;                                          // 0x0230(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAnimationEventBinding>                      AnimationCallbacks;                                      // 0x0238(0x0010) ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J7T2[0x50];                                  // 0x0248(0x0050) MISSED OFFSET (PADDING)

	public:
		void UnregisterInputComponent();
		void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate);
		void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate);
		void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);
		void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void StopListeningForInputAction(const class FName& ActionName, EInputEvent EventType);
		void StopListeningForAllInputActions();
		void StopAnimationsAndLatentActions();
		void StopAnimation(class UWidgetAnimation* InAnimation);
		void StopAllAnimations();
		void SetPositionInViewport(const struct FVector2D& position, bool bRemoveDPIScale);
		void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
		void SetPadding(const struct FMargin& InPadding);
		void SetOwningPlayer(class APlayerController* LocalPlayerController);
		void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);
		void SetInputActionPriority(int32_t NewPriority);
		void SetInputActionBlocking(bool bShouldBlock);
		void SetForegroundColor(const struct FSlateColor& InForegroundColor);
		void SetDesiredSizeInViewport(const struct FVector2D& Size);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime);
		void SetAnchorsInViewport(const struct FAnchors& Anchors);
		void SetAlignmentInViewport(const struct FVector2D& Alignment);
		void ReverseAnimation(class UWidgetAnimation* InAnimation);
		void RemoveFromViewport();
		void RegisterInputComponent();
		void PreConstruct(bool IsDesignTime);
		void PlaySound(class USoundBase* SoundToPlay);
		class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState);
		class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
		class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
		class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState);
		float PauseAnimation(class UWidgetAnimation* InAnimation);
		struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
		struct FEventReply OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnPaint(struct FPaintContext* Context);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseCaptureLost();
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
		struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
		void OnInitialized();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnAnimationStarted(class UWidgetAnimation* Animation);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void ListenForInputAction(const class FName& ActionName, EInputEvent EventType, bool bConsume, const class FScriptDelegate& Callback);
		bool IsPlayingAnimation();
		bool IsListeningForInputAction(const class FName& ActionName);
		bool IsInViewport();
		bool IsInteractable();
		bool IsAnyAnimationPlaying();
		bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
		bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
		class APawn* GetOwningPlayerPawn();
		class APlayerCameraManager* GetOwningPlayerCameraManager();
		bool GetIsVisible();
		float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
		struct FAnchors GetAnchorsInViewport();
		struct FVector2D GetAlignmentInViewport();
		void FlushAnimations();
		void Destruct();
		void Construct();
		void CancelLatentActions();
		void BindToAnimationStarted(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate);
		void BindToAnimationFinished(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate);
		void BindToAnimationEvent(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate, EWidgetAnimationEvent AnimationEvent, const class FName& UserTag);
		void AddToViewport(int32_t ZOrder);
		bool AddToPlayerScreen(int32_t ZOrder);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Button
	 * Size -> 0x0358 (FullSize[0x04A0] - InheritedSize[0x0148])
	 */
	class UButton : public UContentWidget
	{
	public:
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0148(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FButtonStyle                                        WidgetStyle;                                             // 0x0150(0x02A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x03F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0408(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonClickMethod                                         ClickMethod;                                             // 0x0418(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonTouchMethod                                         TouchMethod;                                             // 0x0419(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonPressMethod                                         PressMethod;                                             // 0x041A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x041B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G28I[0x4];                                   // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0420(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x0430(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReleased;                                              // 0x0440(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x0450(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x0460(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLongPress;                                             // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FTimerHandle                                        LongPressTimerHandle;                                    // 0x0480(0x0008) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H3TJ[0x18];                                  // 0x0488(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTouchMethod(EButtonTouchMethod InTouchMethod);
		void SetStyle(const struct FButtonStyle& InStyle);
		void SetPressMethod(EButtonPressMethod InPressMethod);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetClickMethod(EButtonClickMethod InClickMethod);
		void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
		void OnLongPressTimerFinished();
		bool IsPressed();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Image
	 * Size -> 0x0120 (FullSize[0x0250] - InheritedSize[0x0130])
	 */
	class UImage : public UWidget
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0130(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BrushDelegate;                                           // 0x01C0(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X5BH[0x4];                                   // 0x01C0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x01D4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x01E4(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NFCK[0x4];                                   // 0x01E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bFlipForRightToLeftFlowDirection;                        // 0x01F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHOV[0x3];                                   // 0x01F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x01FC(0x0010) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VE29[0x4];                                   // 0x01F9(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_ZJ2E[0x40];                                  // 0x0210(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetOpacity(float InOpacity);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetBrushTintColor(const struct FSlateColor& TintColor);
		void SetBrushSize(const struct FVector2D& DesiredSize);
		void SetBrushResourceObject(class UObject* ResourceObject);
		void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
		void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
		void SetBrushFromSoftTexture(bool bMatchSize);
		void SetBrushFromSoftMaterial();
		void SetBrushFromMaterial(class UMaterialInterface* Material);
		void SetBrushFromAtlasInterface(bool bMatchSize);
		void SetBrushFromAsset(class USlateBrushAsset* Asset);
		void SetBrush(const struct FSlateBrush& InBrush);
		class UMaterialInstanceDynamic* GetDynamicMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TextLayoutWidget
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	class UTextLayoutWidget : public UWidget
	{
	public:
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x0130(0x0003) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		ETextJustify                                               Justification;                                           // 0x0133(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETextWrappingPolicy                                        WrappingPolicy;                                          // 0x0134(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              AutoWrapText : 1;                                        // 0x0135(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8WR6[0x2];                                   // 0x0136(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WrapTextAt;                                              // 0x0138(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMargin                                             Margin;                                                  // 0x013C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		float                                                      LineHeightPercentage;                                    // 0x014C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetJustification(ETextJustify InJustification);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RichTextBlock
	 * Size -> 0x0580 (FullSize[0x06D0] - InheritedSize[0x0150])
	 */
	class URichTextBlock : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0150(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		class UDataTable*                                          TextStyleSet;                                            // 0x0168(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      DecoratorClasses;                                        // 0x0170(0x0010) Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		bool                                                       bOverrideDefaultStyle;                                   // 0x0180(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5Y9J[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockStyle                                     DefaultTextStyleOverride;                                // 0x0188(0x0288) Edit, Protected, NativeAccessSpecifierProtected
		float                                                      MinDesiredWidth;                                         // 0x0410(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETextTransformPolicy                                       TextTransformPolicy;                                     // 0x0414(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BMMH[0x3];                                   // 0x0415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockStyle                                     DefaultTextStyle;                                        // 0x0418(0x0288) Transient, Protected, NativeAccessSpecifierProtected
		TArray<class URichTextBlockDecorator*>                     InstanceDecorators;                                      // 0x06A0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0CDC[0x20];                                  // 0x06B0(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
		void SetTextStyleSet(class UDataTable* NewTextStyleSet);
		void SetText(const class FText& InText);
		void SetMinDesiredWidth(float InMinDesiredWidth);
		void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);
		void SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush);
		void SetDefaultShadowOffset(const struct FVector2D& InShadowOffset);
		void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
		void SetDefaultFont(const struct FSlateFontInfo& InFontInfo);
		void SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
		void SetAutoWrapText(bool InAutoTextWrap);
		class FText GetText();
		class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);
		void ClearAllDefaultStyleOverrides();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBox
	 * Size -> 0x07C8 (FullSize[0x0910] - InheritedSize[0x0148])
	 */
	class UScrollBox : public UPanelWidget
	{
	public:
		struct FScrollBoxStyle                                     WidgetStyle;                                             // 0x0148(0x0248) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FScrollBarStyle                                     WidgetBarStyle;                                          // 0x0390(0x0518) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x08A8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              BarStyle;                                                // 0x08B0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x08B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           ScrollBarVisibility;                                     // 0x08B9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConsumeMouseWheel                                         ConsumeMouseWheel;                                       // 0x08BA(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6LXI[0x1];                                   // 0x08BB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScrollbarThickness;                                      // 0x08BC(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarPadding;                                        // 0x08C4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       AlwaysShowScrollbar;                                     // 0x08D4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlwaysShowScrollbarTrack;                                // 0x08D5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowOverscroll;                                         // 0x08D6(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateWheelScrolling;                                  // 0x08D7(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDescendantScrollDestination                               NavigationDestination;                                   // 0x08D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PFQT[0x3];                                   // 0x08D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NavigationScrollPadding;                                 // 0x08DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScrollWhenFocusChanges                                    ScrollWhenFocusChanges;                                  // 0x08E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowRightClickDragScrolling;                           // 0x08E1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F0YK[0x2];                                   // 0x08E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WheelScrollMultiplier;                                   // 0x08E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUserScrolled;                                          // 0x08E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4FA5[0x18];                                  // 0x08F8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
		void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);
		void SetScrollOffset(float NewScrollOffset);
		void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
		void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
		void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);
		void SetOrientation(EOrientation NewOrientation);
		void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);
		void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
		void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
		void SetAllowOverscroll(bool NewAllowOverscroll);
		void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding);
		void ScrollToStart();
		void ScrollToEnd();
		float GetViewOffsetFraction();
		float GetScrollOffsetOfEnd();
		float GetScrollOffset();
		void EndInertialScrolling();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TextBlock
	 * Size -> 0x01A0 (FullSize[0x02F0] - InheritedSize[0x0150])
	 */
	class UTextBlock : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0150(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x0168(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VSOS[0x4];                                   // 0x0168(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_O7BO[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0180(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x01A8(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72ZG[0x4];                                   // 0x01A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_HUAE[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x01C0(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         StrikeBrush;                                             // 0x0218(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FVector2D                                           ShadowOffset;                                            // 0x02A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x02B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ShadowColorAndOpacityDelegate;                           // 0x02C0(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VI7K[0x4];                                   // 0x02C0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      MinDesiredWidth;                                         // 0x02D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWrapWithInvalidationPanel;                              // 0x02D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoWrapText;                                           // 0x02D9(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextTransformPolicy                                       TextTransformPolicy;                                     // 0x02DA(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimpleTextMode;                                         // 0x02DB(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q3S0[0x14];                                  // 0x02DC(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
		void SetText(const class FText& InText);
		void SetStrikeBrush(const struct FSlateBrush& InStrikeBrush);
		void SetShadowOffset(const struct FVector2D& InShadowOffset);
		void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
		void SetOpacity(float InOpacity);
		void SetMinDesiredWidth(float InMinDesiredWidth);
		void SetFont(const struct FSlateFontInfo& InFontInfo);
		void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
		void SetAutoWrapText(bool InAutoTextWrap);
		class FText GetText();
		class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
		class UMaterialInstanceDynamic* GetDynamicFontMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RichTextBlockDecorator
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class URichTextBlockDecorator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RichTextBlockImageDecorator
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class URichTextBlockImageDecorator : public URichTextBlockDecorator
	{
	public:
		class UDataTable*                                          ImageSet;                                                // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CanvasPanel
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UCanvasPanel : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_HR7W[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.DragDropOperation
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UDragDropOperation : public UObject
	{
	public:
		class FString                                              Tag;                                                     // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Payload;                                                 // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             DefaultDragVisual;                                       // 0x0048(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDragPivot                                                 Pivot;                                                   // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YRZ[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Offset;                                                  // 0x0054(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSYP[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDrop;                                                  // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDragCancelled;                                         // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDragged;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void Drop(const struct FPointerEvent& PointerEvent);
		void DraggedVisual(struct FVector2D* DesiredPosition, const struct FVector2D& DesiredSize);
		void Dragged(const struct FPointerEvent& PointerEvent);
		void DragCancelled(const struct FPointerEvent& PointerEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.AsyncTaskDownloadImage
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UAsyncTaskDownloadImage* STATIC_DownloadImage(const class FString& URL);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BackgroundBlur
	 * Size -> 0x00C0 (FullSize[0x0208] - InheritedSize[0x0148])
	 */
	class UBackgroundBlur : public UContentWidget
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0148(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0158(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0159(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyAlphaToBlur;                                       // 0x015A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAHP[0x1];                                   // 0x015B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlurStrength;                                            // 0x015C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAutoRadiusCalculation;                          // 0x0160(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B0MF[0x3];                                   // 0x0161(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BlurRadius;                                              // 0x0164(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LowQualityFallbackBrush;                                 // 0x0168(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6KH[0x10];                                  // 0x01F8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		void SetBlurStrength(float InStrength);
		void SetBlurRadius(int32_t InBlurRadius);
		void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BackgroundBlurSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UBackgroundBlurSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R593[0x16];                                  // 0x0052(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PropertyBinding
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UPropertyBinding : public UObject
	{
	public:
		TWeakObjectPtr<class UObject>                              SourceObject;                                            // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDynamicPropertyPath                                SourcePath;                                              // 0x0038(0x0028) NativeAccessSpecifierPublic
		class FName                                                DestinationProperty;                                     // 0x0060(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E191[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BoolBinding
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBoolBinding : public UPropertyBinding
	{
	public:
		bool GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Border
	 * Size -> 0x0170 (FullSize[0x02B8] - InheritedSize[0x0148])
	 */
	class UBorder : public UContentWidget
	{
	public:
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0148(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0149(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowEffectWhenDisabled : 1;                             // 0x014A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VING[0x1];                                   // 0x014B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ContentColorAndOpacity;                                  // 0x014C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ContentColorAndOpacityDelegate;                          // 0x015C(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36TP[0x4];                                   // 0x015C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FMargin                                             Padding;                                                 // 0x0170(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Background;                                              // 0x0180(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BackgroundDelegate;                                      // 0x0210(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2U1[0x4];                                   // 0x0210(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FLinearColor                                        BrushColor;                                              // 0x0224(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BrushColorDelegate;                                      // 0x0234(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZTN[0x4];                                   // 0x0234(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector2D                                           DesiredSizeScale;                                        // 0x0248(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipForRightToLeftFlowDirection;                        // 0x0250(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1L4D[0x3];                                   // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x0254(0x0010) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LRYN[0x4];                                   // 0x0251(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptDelegate                                      OnMouseButtonUpEvent;                                    // 0x0268(0x0010) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61NJ[0x4];                                   // 0x0268(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptDelegate                                      OnMouseMoveEvent;                                        // 0x027C(0x0010) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_661A[0x4];                                   // 0x027C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptDelegate                                      OnMouseDoubleClickEvent;                                 // 0x0290(0x0010) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6SY[0x4];                                   // 0x0290(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_POZE[0x14];                                  // 0x02A4(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
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
	 * Class UMG.BorderSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UBorderSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SYSF[0x16];                                  // 0x0052(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BrushBinding
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBrushBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_HM7L[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FSlateBrush GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ButtonSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UButtonSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBR8[0x16];                                  // 0x0052(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CanvasPanelSlot
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class UCanvasPanelSlot : public UPanelSlot
	{
	public:
		struct FAnchorData                                         LayoutData;                                              // 0x0040(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAutoSize;                                               // 0x0068(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6TT[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ZOrder;                                                  // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWUU[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

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
	 * Class UMG.CheckBox
	 * Size -> 0x06B0 (FullSize[0x07F8] - InheritedSize[0x0148])
	 */
	class UCheckBox : public UContentWidget
	{
	public:
		ECheckBoxState                                             CheckedState;                                            // 0x0148(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H9TR[0x3];                                   // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CheckedStateDelegate;                                    // 0x014C(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OSVY[0x4];                                   // 0x0149(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FCheckBoxStyle                                      WidgetStyle;                                             // 0x0160(0x05E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0740(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UncheckedImage;                                          // 0x0748(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UncheckedHoveredImage;                                   // 0x0750(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UncheckedPressedImage;                                   // 0x0758(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    CheckedImage;                                            // 0x0760(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    CheckedHoveredImage;                                     // 0x0768(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    CheckedPressedImage;                                     // 0x0770(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UndeterminedImage;                                       // 0x0778(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UndeterminedHoveredImage;                                // 0x0780(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UndeterminedPressedImage;                                // 0x0788(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0790(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9V2[0x3];                                   // 0x0791(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x0794(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKNL[0x4];                                   // 0x07A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         BorderBackgroundColor;                                   // 0x07A8(0x0028) Deprecated, NativeAccessSpecifierPublic
		EButtonClickMethod                                         ClickMethod;                                             // 0x07D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonTouchMethod                                         TouchMethod;                                             // 0x07D1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonPressMethod                                         PressMethod;                                             // 0x07D2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x07D3(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGZ2[0x4];                                   // 0x07D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCheckStateChanged;                                     // 0x07D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ESU[0x10];                                  // 0x07E8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTouchMethod(EButtonTouchMethod InTouchMethod);
		void SetPressMethod(EButtonPressMethod InPressMethod);
		void SetIsChecked(bool InIsChecked);
		void SetClickMethod(EButtonClickMethod InClickMethod);
		void SetCheckedState(ECheckBoxState InCheckedState);
		bool IsPressed();
		bool IsChecked();
		ECheckBoxState GetCheckedState();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CheckedStateBinding
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UCheckedStateBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_684K[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		ECheckBoxState GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CircularThrobber
	 * Size -> 0x00C0 (FullSize[0x01F0] - InheritedSize[0x0130])
	 */
	class UCircularThrobber : public UWidget
	{
	public:
		int32_t                                                    NumberOfPieces;                                          // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Period;                                                  // 0x0134(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0138(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUX2[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateBrushAsset*                                    PieceImage;                                              // 0x0140(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Image;                                                   // 0x0148(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bEnableRadius;                                           // 0x01D8(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2UAI[0x17];                                  // 0x01D9(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetRadius(float InRadius);
		void SetPeriod(float InPeriod);
		void SetNumberOfPieces(int32_t InNumberOfPieces);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ColorBinding
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UColorBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_RAGJ[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FSlateColor GetSlateValue();
		struct FLinearColor GetLinearValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ComboBox
	 * Size -> 0x0038 (FullSize[0x0168] - InheritedSize[0x0130])
	 */
	class UComboBox : public UWidget
	{
	public:
		TArray<class UObject*>                                     Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnGenerateWidgetEvent;                                   // 0x0140(0x0010) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QWUR[0x4];                                   // 0x0140(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bIsFocusable;                                            // 0x0154(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9TZ[0x13];                                  // 0x0155(0x0013) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ComboBoxString
	 * Size -> 0x0DB8 (FullSize[0x0EE8] - InheritedSize[0x0130])
	 */
	class UComboBoxString : public UWidget
	{
	public:
		TArray<class FString>                                      DefaultOptions;                                          // 0x0130(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              SelectedOption;                                          // 0x0140(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FComboBoxStyle                                      WidgetStyle;                                             // 0x0150(0x0440) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTableRowStyle                                      ItemStyle;                                               // 0x0590(0x0838) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             ContentPadding;                                          // 0x0DC8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxListHeight;                                           // 0x0DD8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasDownArrow;                                            // 0x0DDC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableGamepadNavigationMode;                             // 0x0DDD(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KBN[0x2];                                   // 0x0DDE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0DE0(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x0E38(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsFocusable;                                            // 0x0E60(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_47LO[0x3];                                   // 0x0E61(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnGenerateWidgetEvent;                                   // 0x0E64(0x0010) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RHN[0x4];                                   // 0x0E61(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0E78(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnOpening;                                               // 0x0E88(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K14G[0x50];                                  // 0x0E98(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetSelectedOption(const class FString& Option);
		void SetSelectedIndex(int32_t Index);
		bool RemoveOption(const class FString& Option);
		void RefreshOptions();
		void OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnOpeningEvent__DelegateSignature();
		bool IsOpen();
		class FString GetSelectedOption();
		int32_t GetSelectedIndex();
		int32_t GetOptionCount();
		class FString GetOptionAtIndex(int32_t Index);
		int32_t FindOptionIndex(const class FString& Option);
		void ClearSelection();
		void ClearOptions();
		void AddOption(const class FString& Option);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.DynamicEntryBoxBase
	 * Size -> 0x00D0 (FullSize[0x0200] - InheritedSize[0x0130])
	 */
	class UDynamicEntryBoxBase : public UWidget
	{
	public:
		EDynamicBoxType                                            EntryBoxType;                                            // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y1B0[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           EntrySpacing;                                            // 0x0134(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IRNL[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2D>                                   SpacingPattern;                                          // 0x0140(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FSlateChildSize                                     EntrySizeRule;                                           // 0x0150(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       EntryHorizontalAlignment;                                // 0x0158(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         EntryVerticalAlignment;                                  // 0x0159(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DJ7E[0x2];                                   // 0x015A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxElementSize;                                          // 0x015C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRadialBoxSettings                                  RadialBoxSettings;                                       // 0x0160(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V78N[0x10];                                  // 0x0170(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUserWidgetPool                                     EntryWidgetPool;                                         // 0x0180(0x0080) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetRadialSettings(const struct FRadialBoxSettings& InSettings);
		void SetEntrySpacing(const struct FVector2D& InEntrySpacing);
		int32_t GetNumEntries();
		TArray<class UUserWidget*> GetAllEntries();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.DynamicEntryBox
	 * Size -> 0x0008 (FullSize[0x0208] - InheritedSize[0x0200])
	 */
	class UDynamicEntryBox : public UDynamicEntryBoxBase
	{
	public:
		class UClass*                                              EntryWidgetClass;                                        // 0x0200(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Reset(bool bDeleteWidgets);
		void RemoveEntry(class UUserWidget* EntryWidget);
		class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);
		class UUserWidget* BP_CreateEntry();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.EditableText
	 * Size -> 0x0380 (FullSize[0x04B0] - InheritedSize[0x0130])
	 */
	class UEditableText : public UWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0130(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x0148(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTEL[0x4];                                   // 0x0148(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_NAMC[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                HintText;                                                // 0x0160(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0178(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WA6[0x4];                                   // 0x0178(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_TGSK[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEditableTextStyle                                  WidgetStyle;                                             // 0x0190(0x0238) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x03C8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    BackgroundImageSelected;                                 // 0x03D0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    BackgroundImageComposing;                                // 0x03D8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    CaretImage;                                              // 0x03E0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x03E8(0x0058) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0440(0x0028) Deprecated, NativeAccessSpecifierPublic
		bool                                                       IsReadOnly;                                              // 0x0468(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPassword;                                              // 0x0469(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6YC[0x2];                                   // 0x046A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDesiredWidth;                                     // 0x046C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCaretMovedWhenGainFocus;                               // 0x0470(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextWhenFocused;                                // 0x0471(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RevertTextOnEscape;                                      // 0x0472(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x0473(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextOnCommit;                                   // 0x0474(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x0475(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardType                                       KeyboardType;                                            // 0x0476(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x0477(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardTrigger                                    VirtualKeyboardTrigger;                                  // 0x0478(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x0479(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               Justification;                                           // 0x047A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x047B(0x0003) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IV02[0x2];                                   // 0x047E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0490(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F5BB[0x10];                                  // 0x04A0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetJustification(ETextJustify InJustification);
		void SetIsReadOnly(bool InbIsReadyOnly);
		void SetIsPassword(bool InbIsPassword);
		void SetHintText(const class FText& InHintText);
		void OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.EditableTextBox
	 * Size -> 0x09A8 (FullSize[0x0AD8] - InheritedSize[0x0130])
	 */
	class UEditableTextBox : public UWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0130(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x0148(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1VMX[0x4];                                   // 0x0148(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_8SXZ[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEditableTextBoxStyle                               WidgetStyle;                                             // 0x0160(0x0860) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x09C0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x09C8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x09E0(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TR10[0x4];                                   // 0x09E0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_XBTY[0x4];                                   // 0x09F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x09F8(0x0058) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ForegroundColor;                                         // 0x0A50(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0A60(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ReadOnlyForegroundColor;                                 // 0x0A70(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsReadOnly;                                              // 0x0A80(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPassword;                                              // 0x0A81(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8HQJ[0x2];                                   // 0x0A82(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDesiredWidth;                                     // 0x0A84(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0A88(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsCaretMovedWhenGainFocus;                               // 0x0A98(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextWhenFocused;                                // 0x0A99(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RevertTextOnEscape;                                      // 0x0A9A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x0A9B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextOnCommit;                                   // 0x0A9C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x0A9D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardType                                       KeyboardType;                                            // 0x0A9E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x0A9F(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardTrigger                                    VirtualKeyboardTrigger;                                  // 0x0AA0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x0AA1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               Justification;                                           // 0x0AA2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x0AA3(0x0003) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5CC[0x2];                                   // 0x0AA6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0AA8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0AB8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8494[0x10];                                  // 0x0AC8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetJustification(ETextJustify InJustification);
		void SetIsReadOnly(bool bReadOnly);
		void SetIsPassword(bool bIsPassword);
		void SetHintText(const class FText& InText);
		void SetError(const class FText& InError);
		void OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		bool HasError();
		class FText GetText();
		void ClearError();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ExpandableArea
	 * Size -> 0x0248 (FullSize[0x0378] - InheritedSize[0x0130])
	 */
	class UExpandableArea : public UWidget
	{
	public:
		unsigned char                                              UnknownData_PICK[0x8];                                   // 0x0130(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpandableAreaStyle                                Style;                                                   // 0x0138(0x0130) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BorderBrush;                                             // 0x0268(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSlateColor                                         BorderColor;                                             // 0x02F8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsExpanded;                                             // 0x0320(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JH7M[0x3];                                   // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxHeight;                                               // 0x0324(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             HeaderPadding;                                           // 0x0328(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             AreaPadding;                                             // 0x0338(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExpansionChanged;                                      // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UWidget*                                             HeaderContent;                                           // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidget*                                             BodyContent;                                             // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WUKJ[0x10];                                  // 0x0368(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetIsExpanded_Animated(bool IsExpanded);
		void SetIsExpanded(bool IsExpanded);
		bool GetIsExpanded();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.FloatBinding
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UFloatBinding : public UPropertyBinding
	{
	public:
		float GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.GridPanel
	 * Size -> 0x0030 (FullSize[0x0178] - InheritedSize[0x0148])
	 */
	class UGridPanel : public UPanelWidget
	{
	public:
		TArray<float>                                              ColumnFill;                                              // 0x0148(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              RowFill;                                                 // 0x0158(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TGAA[0x10];                                  // 0x0168(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetRowFill(int32_t ColumnIndex, float Coefficient);
		void SetColumnFill(int32_t ColumnIndex, float Coefficient);
		class UGridSlot* AddChildToGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.GridSlot
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class UGridSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8NB[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    row;                                                     // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RowSpan;                                                 // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Column;                                                  // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColumnSpan;                                              // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Layer;                                                   // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Nudge;                                                   // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OBH7[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetRowSpan(int32_t InRowSpan);
		void SetRow(int32_t InRow);
		void SetPadding(const struct FMargin& InPadding);
		void SetNudge(const struct FVector2D& InNudge);
		void SetLayer(int32_t InLayer);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		void SetColumnSpan(int32_t InColumnSpan);
		void SetColumn(int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.HorizontalBox
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UHorizontalBox : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_GLX1[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (PADDING)

	public:
		class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.HorizontalBoxSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UHorizontalBoxSlot : public UPanelSlot
	{
	public:
		unsigned char                                              UnknownData_QT2A[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateChildSize                                     Size;                                                    // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0061(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYMX[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetSize(const struct FSlateChildSize& InSize);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.InputKeySelector
	 * Size -> 0x0648 (FullSize[0x0778] - InheritedSize[0x0130])
	 */
	class UInputKeySelector : public UWidget
	{
	public:
		struct FButtonStyle                                        WidgetStyle;                                             // 0x0130(0x02A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x03D8(0x0288) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FInputChord                                         SelectedKey;                                             // 0x0660(0x0028) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0688(0x0058) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Margin;                                                  // 0x06E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x06F0(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                KeySelectionText;                                        // 0x0700(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                NoKeySpecifiedText;                                      // 0x0718(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bAllowModifierKeys;                                      // 0x0730(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowGamepadKeys;                                       // 0x0731(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K000[0x6];                                   // 0x0732(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKey>                                        EscapeKeys;                                              // 0x0738(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKeySelected;                                           // 0x0748(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsSelectingKeyChanged;                                 // 0x0758(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPAI[0x10];                                  // 0x0768(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTextBlockVisibility(ESlateVisibility InVisibility);
		void SetSelectedKey(const struct FInputChord& InSelectedKey);
		void SetNoKeySpecifiedText(const class FText& InNoKeySpecifiedText);
		void SetKeySelectionText(const class FText& InKeySelectionText);
		void SetEscapeKeys(TArray<struct FKey> InKeys);
		void SetAllowModifierKeys(bool bInAllowModifierKeys);
		void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
		void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		void OnIsSelectingKeyChanged__DelegateSignature();
		bool GetIsSelectingKey();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Int32Binding
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UInt32Binding : public UPropertyBinding
	{
	public:
		int32_t GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.InvalidationBox
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class UInvalidationBox : public UContentWidget
	{
	public:
		bool                                                       bCanCache;                                               // 0x0148(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       CacheRelativeTransforms;                                 // 0x0149(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O16U[0x16];                                  // 0x014A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetCanCache(bool CanCache);
		void InvalidateCache();
		bool GetCanCache();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserListEntry
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUserListEntry : public UInterface
	{
	public:
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void BP_OnEntryReleased();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserListEntryLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUserListEntryLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsListItemSelected();
		bool STATIC_IsListItemExpanded();
		class UListViewBase* STATIC_GetOwningListView();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserObjectListEntry
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUserObjectListEntry : public UUserListEntry
	{
	public:
		void OnListItemObjectSet(class UObject* ListItemObject);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserObjectListEntryLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UObject* STATIC_GetListItemObject();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ListViewBase
	 * Size -> 0x0110 (FullSize[0x0240] - InheritedSize[0x0130])
	 */
	class UListViewBase : public UWidget
	{
	public:
		class UClass*                                              EntryWidgetClass;                                        // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WheelScrollMultiplier;                                   // 0x0138(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableScrollAnimation;                                  // 0x013C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableFixedLineOffset;                                  // 0x013D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YPTY[0x2];                                   // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FixedLineScrollOffset;                                   // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QSPX[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BP_OnEntryGenerated;                                     // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnEntryReleased;                                      // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		struct FUserWidgetPool                                     EntryWidgetPool;                                         // 0x0168(0x0080) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZEVF[0x58];                                  // 0x01E8(0x0058) MISSED OFFSET (PADDING)

	public:
		void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
		void SetScrollOffset(float InScrollOffset);
		void SetScrollBarVisibility(ESlateVisibility InVisibility);
		void ScrollToTop();
		void ScrollToBottom();
		void RequestRefresh();
		void RegenerateAllEntries();
		TArray<class UUserWidget*> GetDisplayedEntryWidgets();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ListView
	 * Size -> 0x0150 (FullSize[0x0390] - InheritedSize[0x0240])
	 */
	class UListView : public UListViewBase
	{
	public:
		unsigned char                                              UnknownData_UXLP[0xC0];                                  // 0x0240(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EOrientation                                               Orientation;                                             // 0x0300(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESelectionMode                                             SelectionMode;                                           // 0x0301(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EConsumeMouseWheel                                         ConsumeMouseWheel;                                       // 0x0302(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClearSelectionOnClick;                                  // 0x0303(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsFocusable;                                            // 0x0304(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JOGI[0x3];                                   // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EntrySpacing;                                            // 0x0308(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReturnFocusToSelection;                                 // 0x030C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_47D5[0x3];                                   // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     ListItems;                                               // 0x0310(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9POL[0x10];                                  // 0x0320(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BP_OnEntryInitialized;                                   // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemClicked;                                        // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemDoubleClicked;                                  // 0x0350(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemIsHoveredChanged;                               // 0x0360(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemSelectionChanged;                               // 0x0370(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemScrolledIntoView;                               // 0x0380(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate

	public:
		void SetSelectionMode(ESelectionMode SelectionMode);
		void SetSelectedIndex(int32_t Index);
		void ScrollIndexIntoView(int32_t Index);
		void RemoveItem(class UObject* Item);
		void NavigateToIndex(int32_t Index);
		bool IsRefreshPending();
		int32_t GetNumItems();
		TArray<class UObject*> GetListItems();
		class UObject* GetItemAt(int32_t Index);
		int32_t GetIndexForItem(class UObject* Item);
		void ClearListItems();
		void BP_SetSelectedItem(class UObject* Item);
		void BP_SetListItems(TArray<class UObject*> InListItems);
		void BP_SetItemSelection(class UObject* Item, bool bSelected);
		void BP_ScrollItemIntoView(class UObject* Item);
		void BP_NavigateToItem(class UObject* Item);
		bool BP_IsItemVisible(class UObject* Item);
		bool BP_GetSelectedItems(TArray<class UObject*>* Items);
		class UObject* BP_GetSelectedItem();
		int32_t BP_GetNumItemsSelected();
		void BP_ClearSelection();
		void BP_CancelScrollIntoView();
		void AddItem(class UObject* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ListViewDesignerPreviewItem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UListViewDesignerPreviewItem : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MenuAnchor
	 * Size -> 0x0058 (FullSize[0x01A0] - InheritedSize[0x0148])
	 */
	class UMenuAnchor : public UContentWidget
	{
	public:
		class UClass*                                              MenuClass;                                               // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnGetMenuContentEvent;                                   // 0x0150(0x0010) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UBKY[0x4];                                   // 0x0150(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptDelegate                                      OnGetUserMenuContentEvent;                               // 0x0164(0x0010) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UVD4[0x4];                                   // 0x0164(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EMenuPlacement                                             Placement;                                               // 0x0178(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFitInWindow;                                            // 0x0179(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldDeferPaintingAfterWindowContent;                   // 0x017A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseApplicationMenuStack;                                 // 0x017B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5T7P[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMenuOpenChanged;                                       // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHT1[0x10];                                  // 0x0190(0x0010) MISSED OFFSET (PADDING)

	public:
		void ToggleOpen(bool bFocusOnOpen);
		bool ShouldOpenDueToClick();
		void SetPlacement(EMenuPlacement InPlacement);
		void Open(bool bFocusMenu);
		bool IsOpen();
		bool HasOpenSubMenus();
		class UUserWidget* GetUserWidget__DelegateSignature();
		struct FVector2D GetMenuPosition();
		void FitInWindow(bool bFit);
		void Close();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MouseCursorBinding
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UMouseCursorBinding : public UPropertyBinding
	{
	public:
		EMouseCursor GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieScene2DTransformPropertySystem
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieScene2DTransformSection
	 * Size -> 0x0470 (FullSize[0x0560] - InheritedSize[0x00F0])
	 */
	class UMovieScene2DTransformSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_EA3J[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieScene2DTransformMask                          TransformMask;                                           // 0x00F8(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNUI[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             Translation[0x2];                                        // 0x0100(0x0140) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Rotation;                                                // 0x0240(0x00A0) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Scale[0x2];                                              // 0x02E0(0x0140) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Shear[0x2];                                              // 0x0420(0x0140) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieScene2DTransformTrack
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneMarginPropertySystem
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneMarginSection
	 * Size -> 0x0288 (FullSize[0x0378] - InheritedSize[0x00F0])
	 */
	class UMovieSceneMarginSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_2M5Q[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             TopCurve;                                                // 0x00F8(0x00A0) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             LeftCurve;                                               // 0x0198(0x00A0) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             RightCurve;                                              // 0x0238(0x00A0) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             BottomCurve;                                             // 0x02D8(0x00A0) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneMarginTrack
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneWidgetMaterialTrack
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
	{
	public:
		unsigned char                                              UnknownData_T0L2[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        BrushPropertyNamePath;                                   // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FName                                                TrackName;                                               // 0x00C0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FCJB[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MultiLineEditableText
	 * Size -> 0x0368 (FullSize[0x04B8] - InheritedSize[0x0150])
	 */
	class UMultiLineEditableText : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0150(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0168(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0180(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XU4[0x4];                                   // 0x0180(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_ABWP[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockStyle                                     WidgetStyle;                                             // 0x0198(0x0288) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsReadOnly;                                             // 0x0420(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NN70[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0428(0x0058) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextWhenFocused;                                // 0x0480(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearTextSelectionOnFocusLoss;                           // 0x0481(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RevertTextOnEscape;                                      // 0x0482(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x0483(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x0484(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x0485(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x0486(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZQS[0x1];                                   // 0x0487(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0488(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0498(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5HR[0x10];                                  // 0x04A8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);
		void SetText(const class FText& InText);
		void SetIsReadOnly(bool bReadOnly);
		void SetHintText(const class FText& InHintText);
		void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		class FText GetHintText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MultiLineEditableTextBox
	 * Size -> 0x0BF8 (FullSize[0x0D48] - InheritedSize[0x0150])
	 */
	class UMultiLineEditableTextBox : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0150(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0168(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0180(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SD34[0x4];                                   // 0x0180(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_IVX6[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEditableTextBoxStyle                               WidgetStyle;                                             // 0x0198(0x0860) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x09F8(0x0288) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsReadOnly;                                             // 0x0C80(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x0C81(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x0C82(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x0C83(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2DP4[0x4];                                   // 0x0C84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0C88(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0C90(0x0058) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ForegroundColor;                                         // 0x0CE8(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0CF8(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ReadOnlyForegroundColor;                                 // 0x0D08(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0D18(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0D28(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EYEH[0x10];                                  // 0x0D38(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTextStyle(const struct FTextBlockStyle& InTextStyle);
		void SetText(const class FText& InText);
		void SetIsReadOnly(bool bReadOnly);
		void SetHintText(const class FText& InHintText);
		void SetError(const class FText& InError);
		void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		class FText GetHintText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NamedSlot
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UNamedSlot : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_YDIX[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NamedSlotInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNamedSlotInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NativeWidgetHost
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class UNativeWidgetHost : public UWidget
	{
	public:
		unsigned char                                              UnknownData_BEW7[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Overlay
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UOverlay : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_FOZM[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (PADDING)

	public:
		class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.OverlaySlot
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UOverlaySlot : public UPanelSlot
	{
	public:
		unsigned char                                              UnknownData_KMEL[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0059(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ERH[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ProgressBar
	 * Size -> 0x0230 (FullSize[0x0360] - InheritedSize[0x0130])
	 */
	class UProgressBar : public UWidget
	{
	public:
		struct FProgressBarStyle                                   WidgetStyle;                                             // 0x0130(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x02E8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    BackgroundImage;                                         // 0x02F0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    FillImage;                                               // 0x02F8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    MarqueeImage;                                            // 0x0300(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      percent;                                                 // 0x0308(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProgressBarFillType                                       BarFillType;                                             // 0x030C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMarquee;                                              // 0x030D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8WR9[0x2];                                   // 0x030E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           BorderPadding;                                           // 0x0310(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      PercentDelegate;                                         // 0x0318(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SRO[0x4];                                   // 0x0318(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FLinearColor                                        FillColorAndOpacity;                                     // 0x032C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      FillColorAndOpacityDelegate;                             // 0x033C(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_20PV[0x4];                                   // 0x033C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_Y6KV[0x10];                                  // 0x0350(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetPercent(float InPercent);
		void SetIsMarquee(bool InbIsMarquee);
		void SetFillColorAndOpacity(const struct FLinearColor& InColor);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RetainerBox
	 * Size -> 0x0038 (FullSize[0x0180] - InheritedSize[0x0148])
	 */
	class URetainerBox : public UContentWidget
	{
	public:
		bool                                                       bRetainRender;                                           // 0x0148(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       RenderOnInvalidation;                                    // 0x0149(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RenderOnPhase;                                           // 0x014A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LDQ[0x1];                                   // 0x014B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Phase;                                                   // 0x014C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhaseCount;                                              // 0x0150(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75GT[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  EffectMaterial;                                          // 0x0158(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TextureParameter;                                        // 0x0160(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H9FD[0x14];                                  // 0x016C(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetTextureParameter(const class FName& TextureParameter);
		void SetRetainRendering(bool bInRetainRendering);
		void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);
		void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
		void RequestRender();
		class UMaterialInstanceDynamic* GetEffectMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SafeZone
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class USafeZone : public UContentWidget
	{
	public:
		bool                                                       PadLeft;                                                 // 0x0148(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PadRight;                                                // 0x0149(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PadTop;                                                  // 0x014A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PadBottom;                                               // 0x014B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6UJ8[0x14];                                  // 0x014C(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SafeZoneSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class USafeZoneSlot : public UPanelSlot
	{
	public:
		bool                                                       bIsTitleSafe;                                            // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YH6C[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             SafeAreaScale;                                           // 0x0044(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HAlign;                                                  // 0x0054(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VAlign;                                                  // 0x0055(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UUZ3[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScaleBox
	 * Size -> 0x0020 (FullSize[0x0168] - InheritedSize[0x0148])
	 */
	class UScaleBox : public UContentWidget
	{
	public:
		EStretch                                                   Stretch;                                                 // 0x0148(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStretchDirection                                          StretchDirection;                                        // 0x0149(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4VP[0x2];                                   // 0x014A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UserSpecifiedScale;                                      // 0x014C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreInheritedScale;                                    // 0x0150(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEW4[0x17];                                  // 0x0151(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetUserSpecifiedScale(float InUserSpecifiedScale);
		void SetStretchDirection(EStretchDirection InStretchDirection);
		void SetStretch(EStretch InStretch);
		void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScaleBoxSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UScaleBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FIEV[0x16];                                  // 0x0052(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBar
	 * Size -> 0x0550 (FullSize[0x0680] - InheritedSize[0x0130])
	 */
	class UScrollBar : public UWidget
	{
	public:
		struct FScrollBarStyle                                     WidgetStyle;                                             // 0x0130(0x0518) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0648(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysShowScrollbar;                                    // 0x0650(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysShowScrollbarTrack;                               // 0x0651(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x0652(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KZE[0x1];                                   // 0x0653(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Thickness;                                               // 0x0654(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x065C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2GG5[0x14];                                  // 0x066C(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetState(float InOffsetFraction, float InThumbSizeFraction);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBoxSlot
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UScrollBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MB00[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SizeBox
	 * Size -> 0x0038 (FullSize[0x0180] - InheritedSize[0x0148])
	 */
	class USizeBox : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_MT6U[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WidthOverride;                                           // 0x0158(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightOverride;                                          // 0x015C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredWidth;                                         // 0x0160(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredHeight;                                        // 0x0164(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDesiredWidth;                                         // 0x0168(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDesiredHeight;                                        // 0x016C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAspectRatio;                                          // 0x0170(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAspectRatio;                                          // 0x0174(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_WidthOverride : 1;                             // 0x0178(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_HeightOverride : 1;                            // 0x0178(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_MinDesiredWidth : 1;                           // 0x0178(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_MinDesiredHeight : 1;                          // 0x0178(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_MaxDesiredWidth : 1;                           // 0x0178(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_MaxDesiredHeight : 1;                          // 0x0178(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_MinAspectRatio : 1;                            // 0x0178(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_MaxAspectRatio : 1;                            // 0x0178(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XREZ[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetWidthOverride(float InWidthOverride);
		void SetMinDesiredWidth(float InMinDesiredWidth);
		void SetMinDesiredHeight(float InMinDesiredHeight);
		void SetMinAspectRatio(float InMinAspectRatio);
		void SetMaxDesiredWidth(float InMaxDesiredWidth);
		void SetMaxDesiredHeight(float InMaxDesiredHeight);
		void SetMaxAspectRatio(float InMaxAspectRatio);
		void SetHeightOverride(float InHeightOverride);
		void ClearWidthOverride();
		void ClearMinDesiredWidth();
		void ClearMinDesiredHeight();
		void ClearMinAspectRatio();
		void ClearMaxDesiredWidth();
		void ClearMaxDesiredHeight();
		void ClearMaxAspectRatio();
		void ClearHeightOverride();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SizeBoxSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class USizeBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYPM[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0061(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_53IM[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SlateBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FVector2D STATIC_TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector);
		struct FVector2D STATIC_TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector);
		float STATIC_TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar);
		float STATIC_TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar);
		void STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate, bool bIncludeWindowPosition);
		void STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate, bool bIncludeWindowPosition);
		void STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
		void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
		struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
		bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
		struct FVector2D STATIC_GetLocalTopLeft(const struct FGeometry& Geometry);
		struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);
		struct FVector2D STATIC_GetAbsoluteSize(const struct FGeometry& Geometry);
		bool STATIC_EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
		void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
		struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SlateVectorArtData
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class USlateVectorArtData : public UObject
	{
	public:
		TArray<struct FSlateMeshVertex>                            VertexData;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<uint32_t>                                           IndexData;                                               // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  Material;                                                // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           ExtentMin;                                               // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           ExtentMax;                                               // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SlateAccessibleWidgetData
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class USlateAccessibleWidgetData : public UObject
	{
	public:
		bool                                                       bCanChildrenBeAccessible;                                // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateAccessibleBehavior                                   AccessibleBehavior;                                      // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateAccessibleBehavior                                   AccessibleSummaryBehavior;                               // 0x0032(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MG9K[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                AccessibleText;                                          // 0x0038(0x0018) NativeAccessSpecifierPublic
		class FScriptDelegate                                      AccessibleTextDelegate;                                  // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N830[0x4];                                   // 0x0050(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_NB6H[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                AccessibleSummaryText;                                   // 0x0068(0x0018) NativeAccessSpecifierPublic
		class FScriptDelegate                                      AccessibleSummaryTextDelegate;                           // 0x0080(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGL8[0x4];                                   // 0x0080(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_I10U[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Slider
	 * Size -> 0x0420 (FullSize[0x0550] - InheritedSize[0x0130])
	 */
	class USlider : public UWidget
	{
	public:
		float                                                      value;                                                   // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0134(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7U8T[0x4];                                   // 0x0134(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      MinValue;                                                // 0x0148(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x014C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSliderStyle                                        WidgetStyle;                                             // 0x0150(0x0370) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x04C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8K3Y[0x3];                                   // 0x04C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SliderBarColor;                                          // 0x04C4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderHandleColor;                                       // 0x04D4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IndentHandle;                                            // 0x04E4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       locked;                                                  // 0x04E5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MouseUsesStep;                                           // 0x04E6(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresControllerLock;                                  // 0x04E7(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StepSize;                                                // 0x04E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x04EC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTHU[0x3];                                   // 0x04ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMouseCaptureBegin;                                     // 0x04F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMouseCaptureEnd;                                       // 0x0500(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureBegin;                                // 0x0510(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureEnd;                                  // 0x0520(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0530(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQC0[0x10];                                  // 0x0540(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetValue(float InValue);
		void SetStepSize(float InValue);
		void SetSliderHandleColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetMinValue(float InValue);
		void SetMaxValue(float InValue);
		void SetLocked(bool InValue);
		void SetIndentHandle(bool InValue);
		float GetValue();
		float GetNormalizedValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Spacer
	 * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
	 */
	class USpacer : public UWidget
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YL2N[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetSize(const struct FVector2D& InSize);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SpinBox
	 * Size -> 0x0440 (FullSize[0x0570] - InheritedSize[0x0130])
	 */
	class USpinBox : public UWidget
	{
	public:
		float                                                      value;                                                   // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0134(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4KH[0x4];                                   // 0x0134(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FSpinBoxStyle                                       WidgetStyle;                                             // 0x0148(0x0310) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0458(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinFractionalDigits;                                     // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxFractionalDigits;                                     // 0x0464(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysUsesDeltaSnap;                                    // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5V9Y[0x3];                                   // 0x0469(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Delta;                                                   // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliderExponent;                                          // 0x0470(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFBV[0x4];                                   // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0478(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               Justification;                                           // 0x04D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJ26[0x3];                                   // 0x04D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDesiredWidth;                                         // 0x04D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x04D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextOnCommit;                                   // 0x04D9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNEG[0x6];                                   // 0x04DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         ForegroundColor;                                         // 0x04E0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0508(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueCommitted;                                        // 0x0518(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBeginSliderMovement;                                   // 0x0528(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndSliderMovement;                                     // 0x0538(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_MinValue : 1;                                  // 0x0548(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bOverride_MaxValue : 1;                                  // 0x0548(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bOverride_MinSliderValue : 1;                            // 0x0548(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bOverride_MaxSliderValue : 1;                            // 0x0548(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5IXP[0x3];                                   // 0x0549(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinValue;                                                // 0x054C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxValue;                                                // 0x0550(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinSliderValue;                                          // 0x0554(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSliderValue;                                          // 0x0558(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E5TI[0x14];                                  // 0x055C(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetValue(float NewValue);
		void SetMinValue(float NewValue);
		void SetMinSliderValue(float NewValue);
		void SetMinFractionalDigits(int32_t NewValue);
		void SetMaxValue(float NewValue);
		void SetMaxSliderValue(float NewValue);
		void SetMaxFractionalDigits(int32_t NewValue);
		void SetForegroundColor(const struct FSlateColor& InForegroundColor);
		void SetDelta(float NewValue);
		void SetAlwaysUsesDeltaSnap(bool bNewValue);
		void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void OnSpinBoxBeginSliderMovement__DelegateSignature();
		float GetValue();
		float GetMinValue();
		float GetMinSliderValue();
		int32_t GetMinFractionalDigits();
		float GetMaxValue();
		float GetMaxSliderValue();
		int32_t GetMaxFractionalDigits();
		float GetDelta();
		bool GetAlwaysUsesDeltaSnap();
		void ClearMinValue();
		void ClearMinSliderValue();
		void ClearMaxValue();
		void ClearMaxSliderValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TextBinding
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UTextBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_XQ3E[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		class FText GetTextValue();
		class FString GetStringValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Throbber
	 * Size -> 0x00B0 (FullSize[0x01E0] - InheritedSize[0x0130])
	 */
	class UThrobber : public UWidget
	{
	public:
		int32_t                                                    NumberOfPieces;                                          // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateHorizontally;                                    // 0x0134(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateVertically;                                      // 0x0135(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateOpacity;                                         // 0x0136(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZOM[0x1];                                   // 0x0137(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateBrushAsset*                                    PieceImage;                                              // 0x0138(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Image;                                                   // 0x0140(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8HJK[0x10];                                  // 0x01D0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetNumberOfPieces(int32_t InNumberOfPieces);
		void SetAnimateVertically(bool bInAnimateVertically);
		void SetAnimateOpacity(bool bInAnimateOpacity);
		void SetAnimateHorizontally(bool bInAnimateHorizontally);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TileView
	 * Size -> 0x0020 (FullSize[0x03B0] - InheritedSize[0x0390])
	 */
	class UTileView : public UListView
	{
	public:
		float                                                      EntryHeight;                                             // 0x0390(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EntryWidth;                                              // 0x0394(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EListItemAlignment                                         TileAlignment;                                           // 0x0398(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWrapHorizontalNavigation;                               // 0x0399(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TEYW[0x16];                                  // 0x039A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetEntryWidth(float NewWidth);
		void SetEntryHeight(float NewHeight);
		float GetEntryWidth();
		float GetEntryHeight();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TreeView
	 * Size -> 0x0060 (FullSize[0x03F0] - InheritedSize[0x0390])
	 */
	class UTreeView : public UListView
	{
	public:
		unsigned char                                              UnknownData_LHZD[0x10];                                  // 0x0390(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      BP_OnGetItemChildren;                                    // 0x03A0(0x0010) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VVOY[0x4];                                   // 0x0390(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_N5UK[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BP_OnItemExpansionChanged;                               // 0x03B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GQ5M[0x28];                                  // 0x03C8(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetItemExpansion(class UObject* Item, bool bExpandItem);
		void ExpandAll();
		void CollapseAll();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UMGSequencePlayer
	 * Size -> 0x03A8 (FullSize[0x03D8] - InheritedSize[0x0030])
	 */
	class UUMGSequencePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_8WPY[0x238];                                 // 0x0030(0x0238) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetAnimation*                                    Animation;                                               // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5XLZ[0x8];                                   // 0x0270(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneRootEvaluationTemplateInstance           RootTemplateInstance;                                    // 0x0278(0x00E8) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2YNK[0x78];                                  // 0x0360(0x0078) MISSED OFFSET (PADDING)

	public:
		void SetUserTag(const class FName& InUserTag);
		class FName GetUserTag();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UMGSequenceTickManager
	 * Size -> 0x00F8 (FullSize[0x0128] - InheritedSize[0x0030])
	 */
	class UUMGSequenceTickManager : public UObject
	{
	public:
		unsigned char                                              WeakUserWidgets[0x50];                                   // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty
		class UMovieSceneEntitySystemLinker*                       Linker;                                                  // 0x0080(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2LBN[0xA0];                                  // 0x0088(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UniformGridPanel
	 * Size -> 0x0028 (FullSize[0x0170] - InheritedSize[0x0148])
	 */
	class UUniformGridPanel : public UPanelWidget
	{
	public:
		struct FMargin                                             SlotPadding;                                             // 0x0148(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinDesiredSlotWidth;                                     // 0x0158(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredSlotHeight;                                    // 0x015C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9HY[0x10];                                  // 0x0160(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetSlotPadding(const struct FMargin& InSlotPadding);
		void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
		void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
		class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UniformGridSlot
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UUniformGridSlot : public UPanelSlot
	{
	public:
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CSED[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    row;                                                     // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Column;                                                  // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QEKD[0xC];                                   // 0x004C(0x000C) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetRow(int32_t InRow);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		void SetColumn(int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.VerticalBox
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UVerticalBox : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_H2BR[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (PADDING)

	public:
		class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.VerticalBoxSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UVerticalBoxSlot : public UPanelSlot
	{
	public:
		struct FSlateChildSize                                     Size;                                                    // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X0QK[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0061(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQ46[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetSize(const struct FSlateChildSize& InSize);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Viewport
	 * Size -> 0x0048 (FullSize[0x0190] - InheritedSize[0x0148])
	 */
	class UViewport : public UContentWidget
	{
	public:
		struct FLinearColor                                        BackgroundColor;                                         // 0x0148(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FD9H[0x38];                                  // 0x0158(0x0038) MISSED OFFSET (PADDING)

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
	 * Class UMG.VisibilityBinding
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UVisibilityBinding : public UPropertyBinding
	{
	public:
		ESlateVisibility GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetAnimation
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	class UWidgetAnimation : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0068(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWidgetAnimationBinding>                     AnimationBindings;                                       // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bLegacyFinishOnStop;                                     // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LM20[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayLabel;                                            // 0x0088(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UnbindFromAnimationStarted(class UUserWidget* Widget, const class FScriptDelegate& Delegate);
		void UnbindFromAnimationFinished(class UUserWidget* Widget, const class FScriptDelegate& Delegate);
		void UnbindAllFromAnimationStarted(class UUserWidget* Widget);
		void UnbindAllFromAnimationFinished(class UUserWidget* Widget);
		float GetStartTime();
		float GetEndTime();
		void BindToAnimationStarted(class UUserWidget* Widget, const class FScriptDelegate& Delegate);
		void BindToAnimationFinished(class UUserWidget* Widget, const class FScriptDelegate& Delegate);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetAnimationDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
	{
	public:
		TArray<struct FBlueprintWidgetAnimationDelegateBinding>    WidgetAnimationDelegateBindings;                         // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetAnimationPlayCallbackProxy
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UWidgetAnimationPlayCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             Finished;                                                // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OE62[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
		class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBinding
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UWidgetBinding : public UPropertyBinding
	{
	public:
		class UWidget* GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBlueprintGeneratedClass
	 * Size -> 0x0040 (FullSize[0x0378] - InheritedSize[0x0338])
	 */
	class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		class UWidgetTree*                                         WidgetTree;                                              // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bClassRequiresNativeTick : 1;                            // 0x0340(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6ZFO[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDelegateRuntimeBinding>                     Bindings;                                                // 0x0348(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UWidgetAnimation*>                            Animations;                                              // 0x0358(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        NamedSlots;                                              // 0x0368(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FEventReply STATIC_UnlockMouse(struct FEventReply* Reply);
		struct FEventReply STATIC_Unhandled();
		void STATIC_SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
		void STATIC_SetWindowTitleBarOnCloseClickedDelegate(const class FScriptDelegate& Delegate);
		void STATIC_SetWindowTitleBarCloseButtonActive(bool bActive);
		struct FEventReply STATIC_SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers);
		struct FEventReply STATIC_SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition);
		void STATIC_SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
		void STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
		void STATIC_SetInputMode_GameOnly(class APlayerController* PlayerController);
		void STATIC_SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
		void STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
		bool STATIC_SetHardwareCursor(class UObject* WorldContextObject, EMouseCursor CursorShape, const class FName& CursorName, const struct FVector2D& HotSpot);
		void STATIC_SetFocusToGameViewport();
		void STATIC_SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
		void STATIC_SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture);
		void STATIC_SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material);
		void STATIC_RestorePreviousWindowTitleBarState();
		struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);
		struct FEventReply STATIC_ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks);
		void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
		struct FSlateBrush STATIC_NoResourceBrush();
		struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height);
		struct FSlateBrush STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height);
		struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
		struct FEventReply STATIC_LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
		bool STATIC_IsDragDropping();
		struct FEventReply STATIC_Handled();
		void STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);
		struct FKeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
		class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateBrush* Brush);
		class UDragDropOperation* STATIC_GetDragDroppingContent();
		class UTexture2D* STATIC_GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush);
		class UMaterialInterface* STATIC_GetBrushResourceAsMaterial(const struct FSlateBrush& Brush);
		class UObject* STATIC_GetBrushResource(const struct FSlateBrush& Brush);
		void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* Interface, bool TopLevelOnly);
		void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly);
		struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);
		void STATIC_DrawTextFormatted(struct FPaintContext* Context, const class FText& Text, const struct FVector2D& position, class UFont* Font, int32_t FontSize, const class FName& FontTypeFace, const struct FLinearColor& Tint);
		void STATIC_DrawText(struct FPaintContext* Context, const class FString& inString, const struct FVector2D& position, const struct FLinearColor& Tint);
		void STATIC_DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
		void STATIC_DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
		void STATIC_DrawBox(struct FPaintContext* Context, const struct FVector2D& position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint);
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
	 * Size -> 0x0130 (FullSize[0x0600] - InheritedSize[0x04D0])
	 */
	class UWidgetComponent : public UMeshComponent
	{
	public:
		EWidgetSpace                                               space;                                                   // 0x04D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWidgetTimingPolicy                                        TimingPolicy;                                            // 0x04D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZEVG[0x6];                                   // 0x04D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WidgetClass;                                             // 0x04D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FIntPoint                                           DrawSize;                                                // 0x04E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bManuallyRedraw;                                         // 0x04E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRedrawRequested;                                        // 0x04E9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VA0I[0x2];                                   // 0x04EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RedrawTime;                                              // 0x04EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QDEM[0x8];                                   // 0x04F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           CurrentDrawSize;                                         // 0x04F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawAtDesiredSize;                                      // 0x0500(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ROCE[0x3];                                   // 0x0501(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Pivot;                                                   // 0x0504(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReceiveHardwareInput;                                   // 0x050C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWindowFocusable;                                        // 0x050D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWindowVisibility                                          WindowVisibility;                                        // 0x050E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bApplyGammaCorrection;                                   // 0x050F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULocalPlayer*                                        OwnerPlayer;                                             // 0x0510(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        BackgroundColor;                                         // 0x0518(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        TintColorAndOpacity;                                     // 0x0528(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OpacityFromTexture;                                      // 0x0538(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWidgetBlendMode                                           BlendMode;                                               // 0x053C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsTwoSided;                                             // 0x053D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       TickWhenOffscreen;                                       // 0x053E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TA9U[0x1];                                   // 0x053F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          BodySetup;                                               // 0x0540(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  TranslucentMaterial;                                     // 0x0548(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  TranslucentMaterial_OneSided;                            // 0x0550(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  OpaqueMaterial;                                          // 0x0558(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  OpaqueMaterial_OneSided;                                 // 0x0560(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  MaskedMaterial;                                          // 0x0568(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  MaskedMaterial_OneSided;                                 // 0x0570(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0578(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            MaterialInstance;                                        // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAddedToScreen;                                          // 0x0588(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEditTimeUsable;                                         // 0x0589(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PXI5[0x2];                                   // 0x058A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SharedLayerName;                                         // 0x058C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LayerZOrder;                                             // 0x0598(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWidgetGeometryMode                                        GeometryMode;                                            // 0x059C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LL9S[0x3];                                   // 0x059D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CylinderArcAngle;                                        // 0x05A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETickMode                                                  TickMode;                                                // 0x05A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RDBL[0x23];                                  // 0x05A5(0x0023) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         Widget;                                                  // 0x05C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3DZI[0x30];                                  // 0x05D0(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetWindowVisibility(EWindowVisibility InVisibility);
		void SetWindowFocusable(bool bInWindowFocusable);
		void SetWidgetSpace(EWidgetSpace NewSpace);
		void SetWidget(class UUserWidget* Widget);
		void SetTwoSided(bool bWantTwoSided);
		void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
		void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
		void SetTickMode(ETickMode InTickMode);
		void SetRedrawTime(float InRedrawTime);
		void SetPivot(const struct FVector2D& InPivot);
		void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
		void SetManuallyRedraw(bool bUseManualRedraw);
		void SetGeometryMode(EWidgetGeometryMode InGeometryMode);
		void SetDrawSize(const struct FVector2D& Size);
		void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
		void SetCylinderArcAngle(float InCylinderArcAngle);
		void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
		void RequestRenderUpdate();
		void RequestRedraw();
		bool IsWidgetVisible();
		EWindowVisibility GetWindowVisiblility();
		bool GetWindowFocusable();
		EWidgetSpace GetWidgetSpace();
		class UUserWidget* GetWidget();
		class UUserWidget* GetUserWidgetObject();
		bool GetTwoSided();
		bool GetTickWhenOffscreen();
		class UTextureRenderTarget2D* GetRenderTarget();
		float GetRedrawTime();
		struct FVector2D GetPivot();
		class ULocalPlayer* GetOwnerPlayer();
		class UMaterialInstanceDynamic* GetMaterialInstance();
		bool GetManuallyRedraw();
		EWidgetGeometryMode GetGeometryMode();
		struct FVector2D GetDrawSize();
		bool GetDrawAtDesiredSize();
		float GetCylinderArcAngle();
		struct FVector2D GetCurrentDrawSize();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetInteractionComponent
	 * Size -> 0x0200 (FullSize[0x0420] - InheritedSize[0x0220])
	 */
	class UWidgetInteractionComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnHoveredWidgetChanged;                                  // 0x0218(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G08L[0x10];                                  // 0x0228(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VirtualUserIndex;                                        // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PointerIndex;                                            // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          TraceChannel;                                            // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBOZ[0x3];                                   // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InteractionDistance;                                     // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWidgetInteractionSource                                   InteractionSource;                                       // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHitTesting;                                       // 0x0249(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDebug;                                              // 0x024A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NWR5[0x1];                                   // 0x024B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugSphereLineThickness;                                // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugLineThickness;                                      // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DebugColor;                                              // 0x0254(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5268[0x7C];                                  // 0x0264(0x007C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          CustomHitResult;                                         // 0x02E0(0x0090) Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FVector2D                                           LocalHitLocation;                                        // 0x0370(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           LastLocalHitLocation;                                    // 0x0378(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetComponent*                                    HoveredWidgetComponent;                                  // 0x0380(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FHitResult                                          LastHitResult;                                           // 0x0388(0x0090) Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsHoveredWidgetInteractable;                            // 0x0418(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsHoveredWidgetFocusable;                               // 0x0419(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsHoveredWidgetHitTestVisible;                          // 0x041A(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_570V[0x5];                                   // 0x041B(0x0005) MISSED OFFSET (PADDING)

	public:
		void SetFocus(class UWidget* FocusWidget);
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
		struct FVector2D Get2DHitLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetLayoutLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UWrapBoxSlot* STATIC_SlotAsWrapBoxSlot(class UWidget* Widget);
		class UWidgetSwitcherSlot* STATIC_SlotAsWidgetSwitcherSlot(class UWidget* Widget);
		class UVerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
		class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
		class USizeBoxSlot* STATIC_SlotAsSizeBoxSlot(class UWidget* Widget);
		class UScrollBoxSlot* STATIC_SlotAsScrollBoxSlot(class UWidget* Widget);
		class UScaleBoxSlot* STATIC_SlotAsScaleBoxSlot(class UWidget* Widget);
		class USafeZoneSlot* STATIC_SlotAsSafeBoxSlot(class UWidget* Widget);
		class UOverlaySlot* STATIC_SlotAsOverlaySlot(class UWidget* Widget);
		class UHorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
		class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);
		class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);
		class UBorderSlot* STATIC_SlotAsBorderSlot(class UWidget* Widget);
		void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
		bool STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative);
		struct FGeometry STATIC_GetViewportWidgetGeometry(class UObject* WorldContextObject);
		struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);
		float STATIC_GetViewportScale(class UObject* WorldContextObject);
		struct FGeometry STATIC_GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
		bool STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
		struct FVector2D STATIC_GetMousePositionOnViewport(class UObject* WorldContextObject);
		struct FVector2D STATIC_GetMousePositionOnPlatform();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetNavigation
	 * Size -> 0x0108 (FullSize[0x0138] - InheritedSize[0x0030])
	 */
	class UWidgetNavigation : public UObject
	{
	public:
		struct FWidgetNavigationData                               Up;                                                      // 0x0030(0x002C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Down;                                                    // 0x005C(0x002C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Left;                                                    // 0x0088(0x002C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Right;                                                   // 0x00B4(0x002C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Next;                                                    // 0x00E0(0x002C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Previous;                                                // 0x010C(0x002C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetSwitcher
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class UWidgetSwitcher : public UPanelWidget
	{
	public:
		int32_t                                                    ActiveWidgetIndex;                                       // 0x0148(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KNNT[0x14];                                  // 0x014C(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetActiveWidgetIndex(int32_t Index);
		void SetActiveWidget(class UWidget* Widget);
		class UWidget* GetWidgetAtIndex(int32_t Index);
		int32_t GetNumWidgets();
		int32_t GetActiveWidgetIndex();
		class UWidget* GetActiveWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetSwitcherSlot
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UWidgetSwitcherSlot : public UPanelSlot
	{
	public:
		unsigned char                                              UnknownData_GQ66[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0059(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4M4[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetTree
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UWidgetTree : public UObject
	{
	public:
		class UWidget*                                             RootWidget;                                              // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WindowTitleBarArea
	 * Size -> 0x0020 (FullSize[0x0168] - InheritedSize[0x0148])
	 */
	class UWindowTitleBarArea : public UContentWidget
	{
	public:
		bool                                                       bWindowButtonsEnabled;                                   // 0x0148(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoubleClickTogglesFullscreen;                           // 0x0149(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H1P5[0x1E];                                  // 0x014A(0x001E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WindowTitleBarAreaSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UWindowTitleBarAreaSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7XB5[0x16];                                  // 0x0052(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WrapBox
	 * Size -> 0x0028 (FullSize[0x0170] - InheritedSize[0x0148])
	 */
	class UWrapBox : public UPanelWidget
	{
	public:
		struct FVector2D                                           InnerSlotPadding;                                        // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WrapWidth;                                               // 0x0150(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WrapSize;                                                // 0x0154(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExplicitWrapWidth;                                      // 0x0158(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExplicitWrapSize;                                       // 0x0159(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x015A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LZW[0x15];                                  // 0x015B(0x0015) MISSED OFFSET (PADDING)

	public:
		void SetInnerSlotPadding(const struct FVector2D& InPadding);
		class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WrapBoxSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UWrapBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFillEmptySpace;                                         // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JDO[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FillSpanWhenLessThan;                                    // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0059(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRXA[0xE];                                   // 0x005A(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
		void SetFillEmptySpace(bool InbFillEmptySpace);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
