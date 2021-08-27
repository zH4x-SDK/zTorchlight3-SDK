#pragma once

// Name: Torchlight3, Version: 4.26.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class FrontiersUI.BaseSingleSlotWidget
// 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
class UBaseSingleSlotWidget : public UContentWidget
{
public:
	unsigned char                                      UnknownData_SOK5[0x10];                                    // 0x0120(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.BaseSingleSlotWidget");
		return ptr;
	}



};

// Class FrontiersUI.ListWidget
// 0x0120 (FullSize[0x0250] - InheritedSize[0x0130])
class UListWidget : public UBaseSingleSlotWidget
{
public:
	class UClass*                                      WidgetClass;                                               // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PanelName;                                                 // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WrapSelection;                                             // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FrontiersUI_EListDirection                         ListDirection;                                             // 0x0141(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5RD8[0x2];                                     // 0x0142(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumGridColumns;                                            // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumMinimumGridRows;                                        // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FrontiersUI_EUINavigationScheme                    NavigationScheme;                                          // 0x014C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        WidgetHorizontalAlignment;                                 // 0x014D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          WidgetVerticalAlignment;                                   // 0x014E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C8TM[0x1];                                     // 0x014F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateChildSize                             WidgetSize;                                                // 0x0150(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bReverseFillHorizontal;                                    // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReverseFillVertical;                                      // 0x0159(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvalidateOnRefresh;                                      // 0x015A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLazyLoad;                                                 // 0x015B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LazyLoadPadding;                                           // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxWidgetsCreatedPerFrame;                                 // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             GetNextListBinding;                                        // 0x0164(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FQ2H[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DefaultWidgetSelectionIndex;                               // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BWAC[0x2C];                                    // 0x017C(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget*                                     SelectedWidget;                                            // 0x01A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScrollBox*                                  ScrollBox;                                                 // 0x01B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     LoadingSpinner;                                            // 0x01B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                                PanelWidget;                                               // 0x01C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KSSQ[0x78];                                    // 0x01C8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    WidgetFocusEvent;                                          // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ListWidget");
		return ptr;
	}



	void WidgetFocusEvent__DelegateSignature(class UWidget* Widget, bool bHasFocus, int Index);
	void SetLoadingSpinner(class UWidget* InLoadingSpinner);
	class UWidget* SetFocusedWidget(int Index);
	void OnScrolled(float ScrollOffset);
	int GetNumValidWidgets();
	int GetFocusedWidgetIndex();
	void EnsureWidgetSelectedAndFocused(bool bSelectLast);
	void EnsureWidgetSelected(bool bSelectLast);
};

// Class FrontiersUI.TLUserWidget
// 0x03E0 (FullSize[0x0640] - InheritedSize[0x0260])
class UTLUserWidget : public UUserWidget
{
public:
	bool                                               bIsModal;                                                  // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCannotBeUnfocused;                                        // 0x0261(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConsumeAllMouseInput;                                     // 0x0262(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideHUDWhileVisible;                                      // 0x0263(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAcceptInputKeyRepeat;                                     // 0x0264(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMouseKeyboardActionsRequireHover;                         // 0x0265(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeClosed;                                              // 0x0266(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideInsteadOfClose;                                       // 0x0267(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FrontiersUI_EUINavigationScheme                    NavigationScheme;                                          // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7LTF[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ServerRPCThrottleMilliseconds;                             // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        DragMouseButton;                                           // 0x0270(0x0018) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             BackAction;                                                // 0x0288(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             PrimaryAction;                                             // 0x0380(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWidget>                      FocusReturn;                                               // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            SelectWidgetAnimation;                                     // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    BlueprintOnClosedEvent;                                    // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z1QG[0x10];                                    // 0x0498(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<FrontiersUI_EUIAudioSlot, struct FFMODEventReference> AudioMap;                                                  // 0x04A8(0x0050) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         ShownSnapshot;                                             // 0x04F8(0x0018) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SJ7H[0x8];                                     // 0x0510(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ShownStatusEffectClass[0x28];                              // 0x0510(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	class UStatusEffect*                               ShownStatusEffect;                                         // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_345S[0x8];                                     // 0x0548(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            ActiveHideAnimation;                                       // 0x0550(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                                 TooltipAnchor;                                             // 0x0558(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bShowFocusWhenHovered;                                     // 0x0560(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_993I[0xA7];                                    // 0x0561(0x00A7) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWidgetTickHandle                           PrimaryTick;                                               // 0x0608(0x0028) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TE3B[0x10];                                    // 0x0630(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLUserWidget");
		return ptr;
	}



	void PlayAudioEvent(FrontiersUI_EUIAudioSlot FMODSlot);
	bool PerformButtonAction(const struct FUIButtonAction& Action);
	void OnTooltipMenuAnchorOpenChanged(bool bIsOpen);
	bool OnNavigation(SlateCore_EUINavigation NavDirection);
	void OnDragOperationCancelled(class UDragDropOperation* DragDropOperation);
	void OnCharacterChanged(class ATLCharacter* NewCharacter);
	bool IsSelectedInList();
	bool IsHiddenOrHiding();
	class UMenuAnchor* GetTooltipAnchor();
	UMG_ESlateVisibility GetSteamUIVisibility();
	class UWidgetAnimation* GetShowAnimation();
	UMG_ESlateVisibility GetSelectedVisibility();
	class ATLPlayerController* GetOwningTLPlayer();
	class UUserWidget* GetOrCreateTooltipWidget();
	UMG_ESlateVisibility GetMouseKeyboardUIVisibility();
	UMG_ESlateVisibility GetMouseKeyboardInteractiveUIVisibility();
	class UWidgetAnimation* GetListSelectAnimation();
	float GetHoldActionProgress();
	class UWidgetAnimation* GetHideAnimation();
	UMG_ESlateVisibility GetGamepadUIVisibility();
	UMG_ESlateVisibility GetFocusSelectionVisibility();
	class UWidgetAnimation* GetFocusAnimation();
	class UTLBaseHUD* GetBaseHUD();
	void CloseWidget();
	void BlueprintOnShown();
	void BlueprintOnHidden();
};

// Class FrontiersUI.AccountCreatePanel
// 0x0740 (FullSize[0x0D80] - InheritedSize[0x0640])
class UAccountCreatePanel : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_TQF5[0x10];                                    // 0x0640(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FModalWidgetDefinition                      FailedToGetLoginTokenModal;                                // 0x0650(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      FailedToGetLinkCodeModal;                                  // 0x08B0(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      FailedToCreateShadowAccountModal;                          // 0x0B10(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U5WZ[0x10];                                    // 0x0D70(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.AccountCreatePanel");
		return ptr;
	}



	void OnCancel();
	void CreateArcAccount(const struct FString& SessionId);
};

// Class FrontiersUI.AccountLinkPanel
// 0x0138 (FullSize[0x0778] - InheritedSize[0x0640])
class UAccountLinkPanel : public UTLUserWidget
{
public:
	struct FText                                       LinkCodeFormatString;                                      // 0x0640(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q300[0x28];                                    // 0x0658(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             FollowLinkAction;                                          // 0x0680(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.AccountLinkPanel");
		return ptr;
	}



	void OnOpenLink();
	void OnContinue();
	struct FText GetLinkCodeText();
};

// Class FrontiersUI.AccountOptionsModalWidget
// 0x0BC8 (FullSize[0x1208] - InheritedSize[0x0640])
class UAccountOptionsModalWidget : public UTLUserWidget
{
public:
	struct FModalWidgetDefinition                      UnlinkFirstWarningModal;                                   // 0x0640(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      UnlinkSecondWarningModal;                                  // 0x08A0(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      UnlinkCompleteModal;                                       // 0x0B00(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      UnlinkFailedModal;                                         // 0x0D60(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AJTK[0x248];                                   // 0x0FC0(0x0248) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.AccountOptionsModalWidget");
		return ptr;
	}



	void UpdateSinglePlayerHeroCount(int HeroCount);
	void UpdateMultiplayerHeroCount(int HeroCount);
	void UnlinkAccountModals();
	void UnlinkAccount();
	void SetCurrentSelectedListWidget(class UListWidget* ListWidget);
	bool IsUnlinkButtonEnabled();
	void HideMultiplayerLoadingSpinner();
	int GetSinglePlayerCharacterCount();
	class UListWidget* GetButtonList();
};

// Class FrontiersUI.AccountResetModalWidget
// 0x0730 (FullSize[0x0D70] - InheritedSize[0x0640])
class UAccountResetModalWidget : public UTLUserWidget
{
public:
	bool                                               bIsMultiplayerReset;                                       // 0x0640(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8OMC[0x7];                                     // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FModalWidgetDefinition                      ConfirmModalDefinition;                                    // 0x0648(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      ConfirmCompleteModalDefinition;                            // 0x08A8(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      ResetFailedModalDefinition;                                // 0x0B08(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0B2U[0x8];                                     // 0x0D68(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.AccountResetModalWidget");
		return ptr;
	}



	void StartResetFlow();
	struct FString GetTextToMatch();
	float GetResetHoldTime();
};

// Class FrontiersUI.ActiveTraitBarWidget
// 0x0238 (FullSize[0x0878] - InheritedSize[0x0640])
class UActiveTraitBarWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_UY2O[0x30];                                    // 0x0640(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FActiveTraitsTableRowHandle                 ActiveTraitRow;                                            // 0x0670(0x0010) (Edit, NativeAccessSpecifierPublic)
	bool                                               bUsePlayerEnergy;                                          // 0x0680(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDiscrete;                                               // 0x0681(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_EProgressBarFillType>            ProgressBarFillType;                                       // 0x0682(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3ID8[0x5];                                     // 0x0683(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            ResourceFilledAnimation;                                   // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            ResourceNoLongerFilledAnimation;                           // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            ResourceFullLoopAnimation;                                 // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            ResourceIncreasingAnimation;                               // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UUserWidget>                  AnimatedWidget;                                            // 0x06A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProgressBarStyle                           ProgressBarStyle;                                          // 0x06B0(0x01A0) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      TooltipWidgetClass;                                        // 0x0850(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActiveTraitTooltipWidget*                   ActiveTraitTooltipWidget;                                  // 0x0858(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                ProgressBar;                                               // 0x0860(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YDBT[0x10];                                    // 0x0868(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ActiveTraitBarWidget");
		return ptr;
	}



	struct FLinearColor GetResourceColor();
	class UProgressBar* GetProgressBar();
};

// Class FrontiersUI.TooltipWidget
// 0x0040 (FullSize[0x0680] - InheritedSize[0x0640])
class UTooltipWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_450G[0x40];                                    // 0x0640(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TooltipWidget");
		return ptr;
	}



	void SetText(const struct FText& Text);
	struct FText GetTextFromDelegate();
	class UTLRichTextBlock* GetTextBlock();
};

// Class FrontiersUI.ActiveTraitTooltipWidget
// 0x0000 (FullSize[0x0680] - InheritedSize[0x0680])
class UActiveTraitTooltipWidget : public UTooltipWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ActiveTraitTooltipWidget");
		return ptr;
	}



	class UTLTextBlock* GetTraitNameBlock();
	class UTraitTextBlock* GetMaxTraitText();
	class UActiveTraitTextBlock* GetCurrentTraitText();
};

// Class FrontiersUI.ActiveTraitWidgetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActiveTraitWidgetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ActiveTraitWidgetInterface");
		return ptr;
	}



	void OnActiveTraitChanged(class UActiveTrait* InActiveTrait);
};

// Class FrontiersUI.ActorDebugInfoWidget
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UActorDebugInfoWidget : public UTLUserWidget
{
public:
	TWeakObjectPtr<class AActor>                       Target;                                                    // 0x0640(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ActorDebugInfoWidget");
		return ptr;
	}



};

// Class FrontiersUI.AffixListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UAffixListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.AffixListWidget");
		return ptr;
	}



};

// Class FrontiersUI.LockedAffixListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class ULockedAffixListWidget : public UAffixListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LockedAffixListWidget");
		return ptr;
	}



};

// Class FrontiersUI.AffixWidget
// 0x0038 (FullSize[0x0678] - InheritedSize[0x0640])
class UAffixWidget : public UTLUserWidget
{
public:
	struct FText                                       AffixText;                                                 // 0x0640(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       SetNameText;                                               // 0x0658(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bSetUnlocked;                                              // 0x0670(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GT7J[0x7];                                     // 0x0671(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.AffixWidget");
		return ptr;
	}



	class UTLRichTextBlock* GetSetNameTextBlock();
	class UTLRichTextBlock* GetLockedTextBlock();
	class UTLImage* GetIconImage();
};

// Class FrontiersUI.LockedAffixWidget
// 0x0020 (FullSize[0x0698] - InheritedSize[0x0678])
class ULockedAffixWidget : public UAffixWidget
{
public:
	struct FText                                       UnlockLevelText;                                           // 0x0678(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               LockVisibility;                                            // 0x0690(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               UnlockedVisibility;                                        // 0x0691(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6L9U[0x6];                                     // 0x0692(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LockedAffixWidget");
		return ptr;
	}



};

// Class FrontiersUI.AllyInfoWidget
// 0x00D8 (FullSize[0x0718] - InheritedSize[0x0640])
class UAllyInfoWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_R7F3[0x30];                                    // 0x0640(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   PortraitBaseMaterial;                                      // 0x0670(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterial*                                   PortraitDesaturatedBaseMaterial;                           // 0x0678(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<FrontiersUI_EAllyHealthStatus, struct FSlateBrush> BorderBrushes;                                             // 0x0680(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                              LowHealthPercent;                                          // 0x06D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               LowHealthVisibility;                                       // 0x06D4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZB18[0x33];                                    // 0x06D5(0x0033) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProgressBar*                                HealthProgressBar;                                         // 0x0708(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  LevelText;                                                 // 0x0710(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.AllyInfoWidget");
		return ptr;
	}



	void SetInstanceResetReadyState(bool bIsReady);
	void OnAllyEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void OnAllyDeath(class APawn* Dying, class AActor* Attacker);
	class UTLImage* GetPortraitImage();
	class UTextBlock* GetNameText();
	class UTextBlock* GetLevelText();
	class UProgressBar* GetHealthProgressBar();
	class UTLImage* GetDifficultyWidget();
	class UWidget* GetDifficultyContainer();
	class UWidget* GetContainerWidget();
	class UTLBorder* GetBorderWidget();
};

// Class FrontiersUI.TLImage
// 0x0028 (FullSize[0x0238] - InheritedSize[0x0210])
class UTLImage : public UImage
{
public:
	class UMaterial*                                   Material;                                                  // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    NormalMap;                                                 // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MaterialTextureParameterName;                              // 0x0220(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SKV3[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLImage");
		return ptr;
	}



	void SetImageAsset(class UObject* TextureAsset, TEnumAsByte<SlateCore_ESlateBrushDrawType> DrawType, bool bAutoResize);
};

// Class FrontiersUI.AsyncImage
// 0x0060 (FullSize[0x0298] - InheritedSize[0x0238])
class UAsyncImage : public UTLImage
{
public:
	unsigned char                                      TextureAsset[0x28];                                        // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FIconAsset                                  PendingIconAsset;                                          // 0x0260(0x0038) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.AsyncImage");
		return ptr;
	}



	void OnTextureLoaded();
};

// Class FrontiersUI.BaseListedObjectWidget
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UBaseListedObjectWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_0TJT[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.BaseListedObjectWidget");
		return ptr;
	}



};

// Class FrontiersUI.BaseSkillBarWidget
// 0x0090 (FullSize[0x06D0] - InheritedSize[0x0640])
class UBaseSkillBarWidget : public UTLUserWidget
{
public:
	TArray<struct FClassSkillBarDefinition>            ClassSkillBars;                                            // 0x0640(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G5A7[0x18];                                    // 0x0650(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, class UPotionWidget*>           PotionWidgets;                                             // 0x0668(0x0050) (ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      PotionItemClass;                                           // 0x06B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DefaultPotionWidget;                                       // 0x06C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                                 ResourceBar;                                               // 0x06C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.BaseSkillBarWidget");
		return ptr;
	}



	class UMessageWidget* GetStatusEffectMessage();
	TArray<class USkillWidget*> GetSkillWidgetsWithTags(const struct FGameplayTagContainer& Tags);
	class UPanelWidget* GetResourceBarPanel();
	class UPanelWidget* GetPotionWidgetPanel();
	class UClass* GetPotionWidgetClass(class UClass* InPotion);
	class USkillWidget* GetPortalSkillWidget();
	class UWidget* GetPortalSkillContainerWidget();
	class UActiveTraitBarWidget* GetHealthBar();
	class UUserWidget* GetEmberWeaponWidget();
	class UPanelWidget* GetEmberWeaponPanel();
	TArray<class USkillWidget*> GetAllSkillWidgets();
};

// Class FrontiersUI.TargetInfoWidgetContainer
// 0x00D8 (FullSize[0x0718] - InheritedSize[0x0640])
class UTargetInfoWidgetContainer : public UTLUserWidget
{
public:
	bool                                               bForceShow;                                                // 0x0640(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QEQ5[0x7];                                     // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<FrontiersUI_ETargetWidgetType, class UClass*> WidgetClasses;                                             // 0x0648(0x0050) (Edit, UObjectWrapper, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I7X3[0x10];                                    // 0x0698(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<FrontiersUI_ETargetWidgetType, class UTargetInfoWidget*> Widgets;                                                   // 0x06A8(0x0050) (ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WYTL[0x8];                                     // 0x06F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTargetInfoWidget*                           CurrentTargetWidget;                                       // 0x0700(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                                PanelWidget;                                               // 0x0708(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     OverallVisibilityContainer;                                // 0x0710(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TargetInfoWidgetContainer");
		return ptr;
	}



	void SetSelectedActorOverride(class AActor* Override);
	void OnSelectedActorDestroyed(class AActor* Actor);
	void OnSelectedActorChanged();
	FrontiersUI_ETargetWidgetType GetTargetType();
	class AActor* GetSelectedActor();
	class UPanelWidget* GetPanel();
	class UWidget* GetOverallVisibilityContainer();
};

// Class FrontiersUI.BossInfoWidget
// 0x0000 (FullSize[0x0718] - InheritedSize[0x0718])
class UBossInfoWidget : public UTargetInfoWidgetContainer
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.BossInfoWidget");
		return ptr;
	}



};

// Class FrontiersUI.ButtonListWidget
// 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
class UButtonListWidget : public UListWidget
{
public:
	class UClass*                                      ButtonStyle;                                               // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TextStyle;                                                 // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ButtonListWidget");
		return ptr;
	}



};

// Class FrontiersUI.BuybackItemListWidget
// 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
class UBuybackItemListWidget : public UListWidget
{
public:
	class UClass*                                      ComparisonWidgetClass;                                     // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryComparisonWidget*                  ComparisonWidget;                                          // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.BuybackItemListWidget");
		return ptr;
	}



};

// Class FrontiersUI.VendorInventoryEntryWidget
// 0x02C8 (FullSize[0x0908] - InheritedSize[0x0640])
class UVendorInventoryEntryWidget : public UTLUserWidget
{
public:
	struct FUIButtonAction                             BuyAction;                                                 // 0x0640(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             BulkBuyAction;                                             // 0x0738(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J5AL[0xD8];                                    // 0x0830(0x00D8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.VendorInventoryEntryWidget");
		return ptr;
	}



	class UCatalogEntryWidget* GetCatalogEntryWidget();
	void Buy();
	void BulkBuy();
};

// Class FrontiersUI.BuybackItemWidget
// 0x0008 (FullSize[0x0910] - InheritedSize[0x0908])
class UBuybackItemWidget : public UVendorInventoryEntryWidget
{
public:
	unsigned char                                      UnknownData_Q7T4[0x8];                                     // 0x0908(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.BuybackItemWidget");
		return ptr;
	}



	class UInventoryItemWidget* GetItemWidget();
};

// Class FrontiersUI.CarouselWidget
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UCarouselWidget : public UTLUserWidget
{
public:
	int                                                SelectedIndex;                                             // 0x0640(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QXQ0[0x4];                                     // 0x0644(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CarouselWidget");
		return ptr;
	}



	void SelectPrevious();
	void SelectNext();
	int GetNumOptions();
	class UTLTextBlock* GetCountText();
	UMG_ESlateVisibility GetArrowVisibility();
};

// Class FrontiersUI.CatalogEntryWidget
// 0x0030 (FullSize[0x0670] - InheritedSize[0x0640])
class UCatalogEntryWidget : public UTLUserWidget
{
public:
	struct FText                                       Name;                                                      // 0x0640(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ShortDescription;                                          // 0x0658(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CatalogEntryWidget");
		return ptr;
	}



	class UGenericResourceWidget* GetIconWidget();
	TArray<class UWidget*> GetCurrencyCountWidgets();
	class UGenericResourceWidget* GetCostWidget();
};

// Class FrontiersUI.TargetInfoWidget
// 0x0088 (FullSize[0x06C8] - InheritedSize[0x0640])
class UTargetInfoWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_9O7A[0x30];                                    // 0x0640(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTargetInfoWidgetContainer*                  ParentContainer;                                           // 0x0670(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UHPBarFragment*>                      HPBarFragments;                                            // 0x0678(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      HPBarFragmentClass;                                        // 0x0688(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2OVR[0x8];                                     // 0x0690(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinTimeBetweenBarFragments;                                // 0x0698(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DG9R[0x14];                                    // 0x069C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWidgetElementArray>                 WidgetElementsByType;                                      // 0x06B0(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UTLTextBlock*                                NameTextBlock;                                             // 0x06C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TargetInfoWidget");
		return ptr;
	}



	TArray<class UWidget*> GetWidgetElements(FrontiersUI_ETargetInfoWidgetElement Element);
	class AActor* GetSelectedActor();
	class UTLTextBlock* GetNameTextBlock();
	void AddHPFragmentToPanel(class UHPBarFragment* Fragment);
};

// Class FrontiersUI.ChampionTargetInfoWidget
// 0x0050 (FullSize[0x0718] - InheritedSize[0x06C8])
class UChampionTargetInfoWidget : public UTargetInfoWidget
{
public:
	TMap<Frontiers_EMonsterSpawnType, struct FChampionTargetDisplayData> ChampionDisplayData;                                       // 0x06C8(0x0050) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ChampionTargetInfoWidget");
		return ptr;
	}



};

// Class FrontiersUI.TabbedMenuWidget
// 0x00E8 (FullSize[0x0728] - InheritedSize[0x0640])
class UTabbedMenuWidget : public UTLUserWidget
{
public:
	TArray<struct FTabbedMenuOption>                   TabbedMenus;                                               // 0x0640(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bCanReopenMenus;                                           // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LEEX[0x7];                                     // 0x0651(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        NavigateLeftKey;                                           // 0x0658(0x0018) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        NavigateRightKey;                                          // 0x0670(0x0018) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTabbedMenuOption                           PersistentMenuOption;                                      // 0x0688(0x0070) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bHideTabNames;                                             // 0x06F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRouteInputToSubMenu;                                      // 0x06F9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BAVB[0x6];                                     // 0x06FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTLUserWidget*>                       PersistentWidgets;                                         // 0x0700(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L5CR[0x18];                                    // 0x0710(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TabbedMenuWidget");
		return ptr;
	}



	void SetOptionEnabled(int Index, bool bEnabled);
	void MoveSelectionRight();
	void MoveSelectionLeft();
	class UTabbedMenuWidget* GetSubMenu();
	class UTLTextBlock* GetMenuHeader();
	class UTabbedMenuButtonList* GetMenuButtonList();
	class UWidget* GetCurrentDisplayedWidget();
	class UCanvasPanel* GetCanvasPanel();
	void BlueprintOnOptionSelected(const struct FTabbedMenuOption& Option);
};

// Class FrontiersUI.CharacterMenuHeader
// 0x0000 (FullSize[0x0728] - InheritedSize[0x0728])
class UCharacterMenuHeader : public UTabbedMenuWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CharacterMenuHeader");
		return ptr;
	}



	UMG_ESlateVisibility GetSkillAlertVisibility();
	UMG_ESlateVisibility GetContractAlertVisibility();
	struct FText GetContractAlertText();
};

// Class FrontiersUI.ChatMessageListWidget
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class UChatMessageListWidget : public UListWidget
{
public:
	int                                                MaximumMessages;                                           // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QRD7[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ChatMessageListWidget");
		return ptr;
	}



};

// Class FrontiersUI.ChatMessageWidget
// 0x0060 (FullSize[0x02C0] - InheritedSize[0x0260])
class UChatMessageWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_4V8R[0x60];                                    // 0x0260(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ChatMessageWidget");
		return ptr;
	}



	void OnClicked();
	class UTLRichTextBlock* GetTextBlock();
	class UMenuAnchor* GetSocialMenuAnchor();
};

// Class FrontiersUI.ChatWidget
// 0x00C8 (FullSize[0x0708] - InheritedSize[0x0640])
class UChatWidget : public UTLUserWidget
{
public:
	float                                              FadeDelay;                                                 // 0x0640(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7PG1[0x4];                                     // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FChannelUIDefinition>                ChannelDefinitions;                                        // 0x0648(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FKey                                        CycleChannelKey;                                           // 0x0658(0x0018) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       HelpText;                                                  // 0x0670(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IOOR[0x48];                                    // 0x0688(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bFadedOut;                                                 // 0x06D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0UZG[0xB];                                     // 0x06D1(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                CurrentChannelColor;                                       // 0x06DC(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OTEB[0x4];                                     // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CurrentChannelHeader;                                      // 0x06F0(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ChatWidget");
		return ptr;
	}



	void UpdateTextChatEnabled();
	void UpdateChatOpacity();
	void SetTextEntry(const struct FText& Text);
	void SendMessage();
	void OnMessageTextCommitted(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitType);
	void OnMessageTextChanged(const struct FText& Text);
	class UChatMessageListWidget* GetChatMessageList();
	class UEditableTextBox* GetChatMessageEditableTextBox();
	UMG_ESlateVisibility GetChannelNameVisibility();
	void FocusTextEntry();
	void FadeOutChat();
	void FadeInChat();
	void BlueprintSetCanEverChat(bool bCanEverChat);
};

// Class FrontiersUI.CinematicWidget
// 0x0028 (FullSize[0x0668] - InheritedSize[0x0640])
class UCinematicWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_7UBB[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConfirmationHideTimeSeconds;                               // 0x0658(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZAS2[0xC];                                     // 0x065C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CinematicWidget");
		return ptr;
	}



	void OnBackAction();
	class UTLUserWidget* GetConfirmationWidget();
};

// Class FrontiersUI.LevelSequenceCinematicWidget
// 0x0000 (FullSize[0x0668] - InheritedSize[0x0668])
class ULevelSequenceCinematicWidget : public UCinematicWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LevelSequenceCinematicWidget");
		return ptr;
	}



};

// Class FrontiersUI.HUDElementNoTick
// 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
class UHUDElementNoTick : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.HUDElementNoTick");
		return ptr;
	}



};

// Class FrontiersUI.BaseClassResourceWidget
// 0x0050 (FullSize[0x0690] - InheritedSize[0x0640])
class UBaseClassResourceWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_OW60[0x30];                                    // 0x0640(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FActiveTraitsTableRowHandle                 EnergyActiveTrait;                                         // 0x0670(0x0010) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      TooltipWidgetClass;                                        // 0x0680(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActiveTraitTooltipWidget*                   ActiveTraitTooltipWidget;                                  // 0x0688(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.BaseClassResourceWidget");
		return ptr;
	}



};

// Class FrontiersUI.DuskMageResourceBar
// 0x0040 (FullSize[0x06D0] - InheritedSize[0x0690])
class UDuskMageResourceBar : public UBaseClassResourceWidget
{
public:
	class UPaperSprite*                                DarkBarFillingImage;                                       // 0x0690(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPaperSprite*                                DarkBarFilledImage;                                        // 0x0698(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPaperSprite*                                LightBarFillingImage;                                      // 0x06A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPaperSprite*                                LightBarFilledImage;                                       // 0x06A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DarkChargeStatusEffect;                                    // 0x06B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      LightChargeStatusEffect;                                   // 0x06B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActiveTraitBarWidget*                       DarkChargeBar;                                             // 0x06C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActiveTraitBarWidget*                       LightChargeBar;                                            // 0x06C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DuskMageResourceBar");
		return ptr;
	}



	class UActiveTraitBarWidget* GetLightChargeBar();
	class UActiveTraitBarWidget* GetDarkChargeBar();
};

// Class FrontiersUI.BasePipResourceBar
// 0x0010 (FullSize[0x06A0] - InheritedSize[0x0690])
class UBasePipResourceBar : public UBaseClassResourceWidget
{
public:
	TArray<class UResourcePip*>                        Pips;                                                      // 0x0690(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.BasePipResourceBar");
		return ptr;
	}



	TArray<class UResourcePip*> GetPips();
};

// Class FrontiersUI.RailmasterResourceBar
// 0x0008 (FullSize[0x06A8] - InheritedSize[0x06A0])
class URailmasterResourceBar : public UBasePipResourceBar
{
public:
	class UWidget*                                     GlowWidget;                                                // 0x06A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.RailmasterResourceBar");
		return ptr;
	}



	class UWidget* GetGlowWidget();
};

// Class FrontiersUI.ResourcePip
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UResourcePip : public UUserWidget
{
public:
	class UProgressBar*                                ProgressBar;                                               // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BH99[0x8];                                     // 0x0268(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ResourcePip");
		return ptr;
	}



	class UWidgetAnimation* GetSpendAnimation();
	class UProgressBar* GetProgressBar();
	class UWidgetAnimation* GetFullAnimation();
};

// Class FrontiersUI.ForgedResourceBar
// 0x0018 (FullSize[0x06A8] - InheritedSize[0x0690])
class UForgedResourceBar : public UBaseClassResourceWidget
{
public:
	unsigned char                                      UnknownData_AQI4[0x18];                                    // 0x0690(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ForgedResourceBar");
		return ptr;
	}



	void SetupExternalAnimation(class UForgedResourceBar* WidgetToAnimate, class UWidgetAnimation* InWidgetAnimation);
	class UWidgetAnimation* GetResourceAnimation();
};

// Class FrontiersUI.SharpshooterResourceBar
// 0x0080 (FullSize[0x0720] - InheritedSize[0x06A0])
class USharpshooterResourceBar : public UBasePipResourceBar
{
public:
	unsigned char                                      UnknownData_VL1E[0x20];                                    // 0x06A0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                TrinketStatusGameplayTag;                                  // 0x06C0(0x0008) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, struct FSharpshooterTrinketAppearanceData> TrinketAppearanceData;                                     // 0x06C8(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_14Z7[0x8];                                     // 0x0718(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SharpshooterResourceBar");
		return ptr;
	}



	class UWidget* GetTrinketOpenContainer();
	class UTLImage* GetTrinketImage();
	TArray<class UTLImage*> GetTrinketBackgroundImages();
	class UWidgetAnimation* GetOpenTrinketAnimation();
};

// Class FrontiersUI.CursedCaptainResourceBar
// 0x0008 (FullSize[0x06A8] - InheritedSize[0x06A0])
class UCursedCaptainResourceBar : public UBasePipResourceBar
{
public:
	int                                                DefaultMaxDoubloons;                                       // 0x06A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHasExtendedCapacity;                                      // 0x06A4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NBIL[0x3];                                     // 0x06A5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CursedCaptainResourceBar");
		return ptr;
	}



	class UTLWidgetSwitcher* GetPipsSwitcher();
	class UWidget* GetExtendedPipsWidget();
	class UWidget* GetDefaultPipsWidget();
	void BlueprintMaxResource(bool bIsMax);
};

// Class FrontiersUI.CloseButtonWidget
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UCloseButtonWidget : public UTLUserWidget
{
public:
	bool                                               bAutomaticallyCloseParent;                                 // 0x0640(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OPTX[0x7];                                     // 0x0641(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CloseButtonWidget");
		return ptr;
	}



	void Clicked();
};

// Class FrontiersUI.ComparableWidgetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UComparableWidgetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ComparableWidgetInterface");
		return ptr;
	}



	class UMenuAnchor* GetComparisonMenuAnchor();
};

// Class FrontiersUI.ContractClaimWidget
// 0x0080 (FullSize[0x06C0] - InheritedSize[0x0640])
class UContractClaimWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_NCQL[0x10];                                    // 0x0640(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       LevelNameTextFormat;                                       // 0x0650(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       LevelNameText;                                             // 0x0668(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ClaimProgressText;                                         // 0x0680(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZYBN[0x28];                                    // 0x0698(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ContractClaimWidget");
		return ptr;
	}



	class UContractRewardListWidget* GetRewardList();
	class UWidgetAnimation* GetClaimAnimation();
	void ClaimRewards();
};

// Class FrontiersUI.XPBarWidget
// 0x00D0 (FullSize[0x0710] - InheritedSize[0x0640])
class UXPBarWidget : public UTLUserWidget
{
public:
	struct FRuntimeFloatCurve                          AnimationCurve;                                            // 0x0640(0x0088) (Edit, NativeAccessSpecifierPublic)
	float                                              MinimumLevel;                                              // 0x06C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KNZT[0x2C];                                    // 0x06CC(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  LevelText;                                                 // 0x06F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  LevelProgressTextBlock;                                    // 0x0700(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                XPBar;                                                     // 0x0708(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.XPBarWidget");
		return ptr;
	}



	void StopOverridingLevel();
	void StartOverridingLevel(float Level);
	bool IsMaxLevel();
	class UProgressBar* GetXPBar();
	class UWidgetAnimation* GetLevelUpAnimation();
	class UTextBlock* GetLevelText();
	class UTextBlock* GetLevelProgressTextBlock();
};

// Class FrontiersUI.ContractFameLevelBar
// 0x0030 (FullSize[0x0740] - InheritedSize[0x0710])
class UContractFameLevelBar : public UXPBarWidget
{
public:
	bool                                               bOnlyShowWhenAnimating;                                    // 0x0710(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysShowActiveContract;                                 // 0x0711(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y9KC[0x2];                                     // 0x0712(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HideTime;                                                  // 0x0714(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FBF7[0x28];                                    // 0x0718(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ContractFameLevelBar");
		return ptr;
	}



	float GetExperiencePercent();
	class UWidget* GetContainerWidget();
};

// Class FrontiersUI.ContractLevelListWidget
// 0x0170 (FullSize[0x03C0] - InheritedSize[0x0250])
class UContractLevelListWidget : public UListWidget
{
public:
	class UListWidget*                                 AllRewardsList;                                            // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_38NW[0x168];                                   // 0x0258(0x0168) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ContractLevelListWidget");
		return ptr;
	}



};

// Class FrontiersUI.ContractLevelWidget
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class UContractLevelWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_M787[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ContractLevelWidget");
		return ptr;
	}



	class UWidget* GetRegularRewardBorder();
	class UContractRewardListWidget* GetPaidRewardList();
	class UWidget* GetNonFeaturedRewardBorder();
	UMG_ESlateVisibility GetNextLevelVisibility();
	class UWidget* GetLoopRewardBorder();
	class UTextBlock* GetLoopLevelTextBlock();
	class UTextBlock* GetLoopCountTextBlock();
	class UTextBlock* GetLevelTextBlock();
	class UContractRewardListWidget* GetFreeRewardList();
	class UWidget* GetFeaturedRewardBorder();
	class UWidget* GetEndOfLoopBorder();
	UMG_ESlateVisibility GetEarnedVisibility();
	class UTLWidgetSwitcher* GetBorderSwitcher();
};

// Class FrontiersUI.ContractRewardListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UContractRewardListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ContractRewardListWidget");
		return ptr;
	}



};

// Class FrontiersUI.ContractRewardWidget
// 0x0040 (FullSize[0x0680] - InheritedSize[0x0640])
class UContractRewardWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_JIPP[0x1E];                                    // 0x0640(0x001E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	UMG_ESlateVisibility                               LimitedTimeIconVisibility;                                 // 0x065E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HK6W[0x21];                                    // 0x065F(0x0021) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ContractRewardWidget");
		return ptr;
	}



	void ResetAnimation();
	void PlayClaimAnimation(int Index);
	class UTLTextBlock* GetRewardNameTextBlock();
	class UCraftingRecipeDetailWidget* GetRewardDetailWidget();
	UMG_ESlateVisibility GetLockedStateVisibility();
	UMG_ESlateVisibility GetEarnedStateVisibility();
	class UCraftingProductWidget* GetCraftingProductWidget();
	UMG_ESlateVisibility GetClaimedStateVisibility();
};

// Class FrontiersUI.ContractRewardClaimedModalContent
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UContractRewardClaimedModalContent : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ContractRewardClaimedModalContent");
		return ptr;
	}



	class UContractRewardListWidget* GetRewardList();
};

// Class FrontiersUI.ContractSelectionMenuWidget
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UContractSelectionMenuWidget : public UTLUserWidget
{
public:
	class UContractWidget*                             ContractWidget;                                            // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ContractSelectionMenuWidget");
		return ptr;
	}



	class UContractListWidget* GetContractListWidget();
};

// Class FrontiersUI.ContractListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UContractListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ContractListWidget");
		return ptr;
	}



};

// Class FrontiersUI.ContractEntryWidget
// 0x0130 (FullSize[0x0770] - InheritedSize[0x0640])
class UContractEntryWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_ZORZ[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             MakeContractActiveAction;                                  // 0x0658(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UContractWidget*                             ContractWidget;                                            // 0x0750(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U893[0x18];                                    // 0x0758(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ContractEntryWidget");
		return ptr;
	}



	void SelectContract();
	void MakeContractActive();
	class UTLImage* GetSplashImage();
	class UTLTextBlock* GetRemainingTimeTextBlock();
	class UTLRichTextBlock* GetLockedContractTextBlock();
	class UWidget* GetInactiveIndicatorWidget();
	class UContractFameLevelBar* GetFameXpBar();
	class UTLTextBlock* GetContractNameTextBlock();
	class UWidget* GetActiveIndicatorWidget();
	class UWidget* GetActiveFrame();
	class UTLWidgetSwitcher* GetActivationSwitcher();
};

// Class FrontiersUI.ContractWidget
// 0x08A0 (FullSize[0x0EE0] - InheritedSize[0x0640])
class UContractWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_ZRJQ[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             ClaimNextAction;                                           // 0x0648(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             SwitchContractAction;                                      // 0x0740(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             MakeContractActiveAction;                                  // 0x0838(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FText                                       ContractDisplayName;                                       // 0x0930(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ContractWelcomeText;                                       // 0x0948(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FDepthOfFieldOverrideRequest                DepthOfFieldSettings;                                      // 0x0960(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZMP6[0x4];                                     // 0x096C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       UnclaimedRewardsTextFormat;                                // 0x0970(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnclaimedRewardsPreviewActor[0x28];                        // 0x0988(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FModalWidgetDefinition                      PurchaseSuccessModalDefinition;                            // 0x09B0(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      ClaimNextModalDefinition;                                  // 0x0C10(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	float                                              PageSizeSlateUnits;                                        // 0x0E70(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QYB7[0x4];                                     // 0x0E74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ContractStartTextFormat;                                   // 0x0E78(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ContractEndTextFormat;                                     // 0x0E90(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4OJH[0x18];                                    // 0x0EA8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FameLevelAnimateFrom;                                      // 0x0EC0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FameLevelAnimateTo;                                        // 0x0EC4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U63I[0x4];                                     // 0x0EC8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumFameAnimationIntervals;                                 // 0x0ECC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HUDC[0x10];                                    // 0x0ED0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ContractWidget");
		return ptr;
	}



	void SwitchContract();
	void ShowClaimModalIfPossible();
	void PageInDirection(int Direction);
	void MakeContractActive();
	bool IsCurrentContract();
	void IncrementFameAnimation();
	UMG_ESlateVisibility GetUnclaimedRewardsVisibility();
	class UTLScrollBox* GetRewardsScrollBox();
	UMG_ESlateVisibility GetRewardAreaVisibility();
	class UCraftingRecipeDetailWidget* GetRecipeDetailWidget();
	struct FText GetNumUnclaimedRewardsText();
	UMG_ESlateVisibility GetIsNotCurrentContractVisibility();
	UMG_ESlateVisibility GetIsCurrentContractVisibility();
	class UContractFameLevelBar* GetFameBar();
	class UWidgetAnimation* GetEarnFameAnimation();
	class UWidget* GetCurrentContractWidget();
	class UWidget* GetContractPickerWidget();
	struct FText GetContractLevelText();
	class UContractLevelListWidget* GetContractLevelList();
	class UTLImage* GetBannerImage();
	class UListWidget* GetAllRewardsListWidget();
	bool CanPageRight();
	bool CanPageLeft();
	void BlueprintUpdateContractStatus(bool bIsActive, bool bShowLoopedSection);
	void BlueprintUpdateClaimStatus(int InNumUnclaimedRewards);
	void BackToShowContract();
};

// Class FrontiersUI.ControllerButtonConstants
// 0x06F0 (FullSize[0x0718] - InheritedSize[0x0028])
class UControllerButtonConstants : public UObject
{
public:
	TMap<struct FKey, struct FKeyUIData>               BaseKeys;                                                  // 0x0028(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FKey, struct FKeyUIData>               XboxKeys;                                                  // 0x0078(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FKey, struct FKeyUIData>               PlaystationKeys;                                           // 0x00C8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FKey, struct FKeyUIData>               SwitchKeys;                                                // 0x0118(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<FrontiersUI_ESpecialKey, struct FSpecialKeyPlatformMapping> SpecialKeys;                                               // 0x0168(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FKey, int>                             KeySortOrder;                                              // 0x01B8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FButtonStyle                                DefaultButtonBG;                                           // 0x0208(0x0278) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FButtonStyle                                DefaultGamepadButtonBG;                                    // 0x0480(0x0278) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                                DefaultTextColor;                                          // 0x06F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlatformUIKeyMapping>               PlatformUIKeyMappings;                                     // 0x0708(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ControllerButtonConstants");
		return ptr;
	}



};

// Class FrontiersUI.CraftingCategoryListWidget
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class UCraftingCategoryListWidget : public UListWidget
{
public:
	class UListWidget*                                 ListByCategory;                                            // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingCategoryListWidget");
		return ptr;
	}



};

// Class FrontiersUI.CraftingCategoryWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UCraftingCategoryWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingCategoryWidget");
		return ptr;
	}



	class UCraftingEntryContainerListWidget* GetCraftingEntriesList();
	class UTLTextBlock* GetCategoryText();
	void BlueprintSetCategoryEnabled(bool bIsCategoryEnabled);
};

// Class FrontiersUI.CraftingEntryContainerWidget
// 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
class UCraftingEntryContainerWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_9TOT[0x20];                                    // 0x0640(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingEntryContainerWidget");
		return ptr;
	}



	class UWidgetSwitcher* GetWidgetSwitcher();
	class UCraftingRecipeWidget* GetCraftingRecipeWidget_Blueprint();
	class UCraftingQueueEntryWidget* GetCraftingQueueEntryWidget_Blueprint();
	void BlueprintSetRecipeEnabled(bool bEnabled);
};

// Class FrontiersUI.CraftingEntryContainerListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UCraftingEntryContainerListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingEntryContainerListWidget");
		return ptr;
	}



};

// Class FrontiersUI.CraftingPanel
// 0x0070 (FullSize[0x0798] - InheritedSize[0x0728])
class UCraftingPanel : public UTabbedMenuWidget
{
public:
	unsigned char                                      UnknownData_022S[0x30];                                    // 0x0728(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       PrimaryName;                                               // 0x0758(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       PrimaryDescription;                                        // 0x0770(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1EBA[0x10];                                    // 0x0788(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingPanel");
		return ptr;
	}



	UMG_ESlateVisibility GetReadyToClaimVisibility();
	struct FText GetNumQueuedItemsReadyToClaim();
	class UCurrencyWidget* GetCurrencyWidget();
};

// Class FrontiersUI.CraftingProductListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UCraftingProductListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingProductListWidget");
		return ptr;
	}



};

// Class FrontiersUI.CraftingProductWidget
// 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
class UCraftingProductWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingProductWidget");
		return ptr;
	}



	class UGenericResourceWidget* GetResourceWidget();
	class UTextBlock* GetDisplayNameText();
};

// Class FrontiersUI.MailboxProductWidget
// 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
class UMailboxProductWidget : public UCraftingProductWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MailboxProductWidget");
		return ptr;
	}



	void OnShownInMailbox();
};

// Class FrontiersUI.CraftingRecipeWidgetBase
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class UCraftingRecipeWidgetBase : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_ZKDP[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingRecipeWidgetBase");
		return ptr;
	}



	class UWidgetAnimation* GetCraftingAnimation();
};

// Class FrontiersUI.CraftingQueueEntryWidget
// 0x0048 (FullSize[0x06A0] - InheritedSize[0x0658])
class UCraftingQueueEntryWidget : public UCraftingRecipeWidgetBase
{
public:
	struct FName                                       QueueName;                                                 // 0x0658(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       EntryNameText;                                             // 0x0660(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FString                                     JobId;                                                     // 0x0678(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDateTime                                   StartTime;                                                 // 0x0688(0x0008) (ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDateTime                                   FinishTime;                                                // 0x0690(0x0008) (ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       CraftingRecipeName;                                        // 0x0698(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingQueueEntryWidget");
		return ptr;
	}



	void TryToClaim();
	UMG_ESlateVisibility GetReadyToClaimVisibility();
	class UGenericResourceWidget* GetProductWidget();
	UMG_ESlateVisibility GetInProgressVisibility();
	struct FText GetDisplayTimeLeft();
	float GetCraftingProgress();
	UMG_ESlateVisibility GetClaimButtonVisibility();
	bool CanClaim();
};

// Class FrontiersUI.CraftingQueueEntryListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UCraftingQueueEntryListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingQueueEntryListWidget");
		return ptr;
	}



};

// Class FrontiersUI.CraftingQueueWidget
// 0x0080 (FullSize[0x06C0] - InheritedSize[0x0640])
class UCraftingQueueWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_SAIC[0x50];                                    // 0x0640(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             GetNextListBinding;                                        // 0x0690(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               NoQueueEntriesNotificationVisibility;                      // 0x06A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2NTK[0x7];                                     // 0x06A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Prop;                                                      // 0x06A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NEYK[0x8];                                     // 0x06B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCraftingCategoryListWidget*                 CraftingCategoriesList;                                    // 0x06B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingQueueWidget");
		return ptr;
	}



	class UWidget* GetStorageWidget();
	class UListWidget* GetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection);
	class UCraftingCategoryListWidget* GetCraftingCategoriesList();
	void BlueprintSetLoadingSpinnerEnabled(bool bEnabled);
};

// Class FrontiersUI.CraftingWidgetBase
// 0x0030 (FullSize[0x0670] - InheritedSize[0x0640])
class UCraftingWidgetBase : public UTLUserWidget
{
public:
	bool                                               bHideGold;                                                 // 0x0640(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGamepadAlwaysShowGold;                                    // 0x0641(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GEGI[0x1E];                                    // 0x0642(0x001E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	UMG_ESlateVisibility                               CostListVisible;                                           // 0x0660(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D12P[0x7];                                     // 0x0661(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGenericResourceWidget*                      CurrencyCostWidget;                                        // 0x0668(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingWidgetBase");
		return ptr;
	}



	void TryToCraft();
	class UGenericResourceWidget* GetCurrencyCostWidget();
	class UCraftingCostListWidget* GetCostListWidget();
	bool CanCraft();
	void BlueprintRefreshCraftingWidget();
};

// Class FrontiersUI.CraftingRecipeDetailWidget
// 0x0350 (FullSize[0x09C0] - InheritedSize[0x0670])
class UCraftingRecipeDetailWidget : public UCraftingWidgetBase
{
public:
	struct FUIButtonAction                             ShowTooltipAction;                                         // 0x0670(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             HideTooltipAction;                                         // 0x0768(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FCraftingRequest                            CraftingRequest;                                           // 0x0860(0x0078) (Protected, NativeAccessSpecifierProtected)
	struct FCraftingRecipe                             CraftingRecipe;                                            // 0x08D8(0x00C0) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       CustomCraftingVerb;                                        // 0x0998(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UListWidget*                                 EmberWeaponSkillsList;                                     // 0x09B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWantsGamepadFocus;                                        // 0x09B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IWNH[0x7];                                     // 0x09B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingRecipeDetailWidget");
		return ptr;
	}



	void SwitchBack();
	void OpenTooltip();
	void OnCraftButtonClicked();
	class UTLTextBlock* GetTitleWidget();
	class UTLTextBlock* GetPurchaseDetailsWidget();
	class UListWidget* GetNextList(class UListWidget* ListWidget, SlateCore_EUINavigation NavDirection);
	class UWidget* GetMainPanel();
	class UTLTextBlock* GetLongDescriptionWidget();
	class UWidget* GetLongDescriptionContainer();
	class UTLTextBlock* GetItemTypeTextWidget();
	class UTLTextBlock* GetItemRarityTextWidget();
	class UInventoryItemDetailsWidget* GetItemDetailsWidget();
	class UWidget* GetEmberWeaponSkillsWrapper();
	class UEmberWeaponSkillsWidget* GetEmberWeaponSkills();
	class UTLTextBlock* GetDurationTextBlock();
	class UWidgetSwitcher* GetDetailsSwitcher();
	class UWidget* GetDetailsPanel();
	class UTLButton* GetCraftButton();
	class UListWidget* GetActionButtonListWidget();
	void CloseTooltip();
	bool CanOpenTooltip();
	bool CanCloseTooltip();
};

// Class FrontiersUI.CraftingRecipeListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UCraftingRecipeListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingRecipeListWidget");
		return ptr;
	}



};

// Class FrontiersUI.CraftingRecipeUnitWidget
// 0x01F0 (FullSize[0x0830] - InheritedSize[0x0640])
class UCraftingRecipeUnitWidget : public UTLUserWidget
{
public:
	struct FCraftingRecipeUnit                         Unit;                                                      // 0x0640(0x01F0) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingRecipeUnitWidget");
		return ptr;
	}



	UMG_ESlateVisibility GetMeetsRequirementsVisibility();
	struct FLinearColor GetCanAffordColor();
};

// Class FrontiersUI.CraftingRecipeWidget
// 0x0150 (FullSize[0x07A8] - InheritedSize[0x0658])
class UCraftingRecipeWidget : public UCraftingRecipeWidgetBase
{
public:
	struct FCraftingRecipe                             CraftingRecipe;                                            // 0x0658(0x00C0) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       RecipeDescription;                                         // 0x0718(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FCraftingRequest                            CraftingRequest;                                           // 0x0730(0x0078) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingRecipeWidget");
		return ptr;
	}



	void SwitchToDetails();
	class UGenericResourceWidget* GetProductWidget();
	class UWidget* GetNewFlagWidget();
	struct FText GetDurationText();
	bool CanAffordRecipe();
};

// Class FrontiersUI.CraftingResultsWidget
// 0x0028 (FullSize[0x0668] - InheritedSize[0x0640])
class UCraftingResultsWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_557E[0x10];                                    // 0x0640(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	UMG_ESlateVisibility                               CloseButtonVisibility;                                     // 0x0650(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6YRL[0x17];                                    // 0x0651(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingResultsWidget");
		return ptr;
	}



	class UCraftingProductListWidget* GetCraftingProductList();
	void CloseAction();
};

// Class FrontiersUI.CraftingCostListWidget
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class UCraftingCostListWidget : public UListWidget
{
public:
	bool                                               bShowAsCost;                                               // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YECB[0x7];                                     // 0x0251(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingCostListWidget");
		return ptr;
	}



};

// Class FrontiersUI.CraftingConfirmationWidget
// 0x00B0 (FullSize[0x0720] - InheritedSize[0x0670])
class UCraftingConfirmationWidget : public UCraftingWidgetBase
{
public:
	unsigned char                                      UnknownData_68PU[0xB0];                                    // 0x0670(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CraftingConfirmationWidget");
		return ptr;
	}



	void Confirm();
	bool CanConfirm();
	void BlueprintCustomizeText(const struct FText& Header, const struct FText& Body);
};

// Class FrontiersUI.CreditsWidget
// 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
class UCreditsWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_UB78[0x4];                                     // 0x0640(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ScrollSpeed;                                               // 0x0644(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTLScrollBox*                                ScrollBox;                                                 // 0x0648(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CreditsWidget");
		return ptr;
	}



	void OnUserScrolled(float CurrentOffset);
	class UTLScrollBox* GetScrollBox();
};

// Class FrontiersUI.CurrencyListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UCurrencyListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CurrencyListWidget");
		return ptr;
	}



};

// Class FrontiersUI.CurrencyWidget
// 0x00B8 (FullSize[0x06F8] - InheritedSize[0x0640])
class UCurrencyWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_FA75[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bShowOwnedQuantity;                                        // 0x0648(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M3YT[0x7];                                     // 0x0649(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCurrencyTableRowHandle                     DefaultCurrencyToDisplay;                                  // 0x0650(0x0010) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               CurrencyNameVisibility;                                    // 0x0660(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8WAA[0xF];                                     // 0x0661(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ResourceName;                                              // 0x0670(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ResourceNameAndValue;                                      // 0x0688(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      Icon[0x28];                                                // 0x06A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FSlateColor                                 QualityColor;                                              // 0x06C8(0x0028) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UDescriptionTooltipWidget*                   CurrencyTooltipWidget;                                     // 0x06F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CurrencyWidget");
		return ptr;
	}



	class UWidgetAnimation* GetValueUpdatedAnimation();
	class UTraitTextBlock* GetTraitTextBlock();
	class UTLTextBlock* GetTextBlock();
	class UWidget* GetResourceFrame();
	class UTLImage* GetPurchaseButtonIconImage();
	class UWidget* GetPurchaseButton();
	class UTLBorder* GetItemIconBorder();
	class UTLImage* GetItemIconBackground();
	class UTLImage* GetIconImage();
};

// Class FrontiersUI.CurrencyPickUpWidget
// 0x0008 (FullSize[0x0700] - InheritedSize[0x06F8])
class UCurrencyPickUpWidget : public UCurrencyWidget
{
public:
	float                                              Duration;                                                  // 0x06F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D9SC[0x4];                                     // 0x06FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CurrencyPickUpWidget");
		return ptr;
	}



	class UCurrencyWidget* GetCurrencyIcon();
};

// Class FrontiersUI.CurrencyCostWidget
// 0x0058 (FullSize[0x0888] - InheritedSize[0x0830])
class UCurrencyCostWidget : public UCraftingRecipeUnitWidget
{
public:
	unsigned char                                      UnknownData_H9U4[0x10];                                    // 0x0830(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ResourceName;                                              // 0x0840(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       RequiredQuantity;                                          // 0x0858(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UTraitTextBlock*                             ResourceTraitTextBlock;                                    // 0x0870(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTLTextBlock*                                ResourceRequiredTextBlock;                                 // 0x0878(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDescriptionTooltipWidget*                   CurrencyTooltipWidget;                                     // 0x0880(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CurrencyCostWidget");
		return ptr;
	}



	class UTraitTextBlock* GetResourceTraitTextBlock();
	class UTLTextBlock* GetResourceRequiredTextBlock();
	class UAsyncImage* GetResourceIcon();
	class UCurrencyWidget* GetCurrencyWidget();
};

// Class FrontiersUI.CustomizationItemCarouselWidget
// 0x0028 (FullSize[0x0670] - InheritedSize[0x0648])
class UCustomizationItemCarouselWidget : public UCarouselWidget
{
public:
	unsigned char                                      UnknownData_960W[0x28];                                    // 0x0648(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CustomizationItemCarouselWidget");
		return ptr;
	}



	class UTextBlock* GetLabelText();
};

// Class FrontiersUI.InventoryGridWithTabsWidget
// 0x08A8 (FullSize[0x0EE8] - InheritedSize[0x0640])
class UInventoryGridWithTabsWidget : public UTLUserWidget
{
public:
	class UInventoryItemWidget*                        GrabbedInventoryItem;                                      // 0x0640(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             GetNextListBinding;                                        // 0x0648(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bResetSelectionWhenOpened;                                 // 0x0658(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z2ML[0x7];                                     // 0x0659(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             SortAction;                                                // 0x0660(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YCTF[0x68];                                    // 0x0758(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsInteractive;                                            // 0x07C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XQJS[0x7];                                     // 0x07C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTabbedMenuWidget*                           CategoryTabbedMenu;                                        // 0x07C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<FrontiersUI_EUIInventoryCategory, struct FInventoryGridCategoryData> CategoryData;                                              // 0x07D0(0x0050) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	FrontiersUI_EUIItemPrimaryActionType               ItemPrimaryAction;                                         // 0x0820(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0S1Y[0x7];                                     // 0x0821(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ItemsContainerClass;                                       // 0x0828(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<FrontiersUI_EUIInventoryCategory>           DisabledCategories;                                        // 0x0830(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      PetShoppingListModalDefinition;                            // 0x0840(0x0260) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             SellAllPetItemsAction;                                     // 0x0AA0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             CancelAction;                                              // 0x0B98(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             SendToTownAction;                                          // 0x0C90(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             PetShoppingListAction;                                     // 0x0D88(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FText                                       SendPetText;                                               // 0x0E80(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TMap<Frontiers_EUIPetToTown, struct FText>         SendPetData;                                               // 0x0E98(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InventoryGridWithTabsWidget");
		return ptr;
	}



	void SortItems();
	void SetItemHeader(const struct FText& Name, class UUserWidget* Header);
	void SendToTown();
	void SellAllPetItems();
	void OpenPetShoppingList();
	void OnInventoryUpdated();
	class UTLTextBlock* GetSortText(FrontiersUI_EUIInventoryCategory Category);
	class UWidgetAnimation* GetSortedAnimation(FrontiersUI_EUIInventoryCategory Category);
	UMG_ESlateVisibility GetSendtoTownButtonVisibility();
	class UTLButton* GetSendToTownButton();
	UMG_ESlateVisibility GetSellAllPetItemsButtonVisibility();
	UMG_ESlateVisibility GetSecondInventoryVisibility();
	UMG_ESlateVisibility GetPetCountdownVisibility();
	struct FText GetPetCountdownText();
	class UTLButton* GetOpenPetShoppingListButton();
	UMG_ESlateVisibility GetNoItemsTextVisibility();
	class UListWidget* GetNextList(SlateCore_EUINavigation NavDirection);
	class UWidget* GetItemWidget();
	class UTLTextBlock* GetItemCountTextBlock();
	class UWidgetSwitcher* GetInventoryWidgetSwitcher();
	class UInventoryItemListWidget* GetInventoryItemListWidget();
	class UInventoryItemListWidget* GetInventoryItem2ListWidget();
	class UTabbedMenuWidget* GetInventoryCategoryTabbedMenu();
	class UListWidget* GetFirstInventoryList();
	class UWidget* GetEquippedWidget();
	class UInventoryItemEquippedListWidget* GetEquippedWeaponsWidget();
	class UInventoryItemEquippedListWidget* GetEquippedPotionsListWidget();
	class UInventoryItemEquippedListWidget* GetEquippedPetItemWidget();
	class UInventoryItemEquippedListWidget* GetEquippedGearWidget();
	class UWidget* GetCurrencyWidget();
	class UCurrencyListWidget* GetCurrencyListWidget();
	void CancelUsingItem();
};

// Class FrontiersUI.DeathWidget
// 0x0500 (FullSize[0x13E8] - InheritedSize[0x0EE8])
class UDeathWidget : public UInventoryGridWithTabsWidget
{
public:
	TMap<Frontiers_EDeathReviveOption, struct FDeathOption> DeathOptions;                                              // 0x0EE8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             CharacterSelectAction;                                     // 0x0F38(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             AllyReviveGiveUpAction;                                    // 0x1030(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      ReviveInTownConfirmation;                                  // 0x1128(0x0260) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DungeonProgressLostMessageText;                            // 0x1388(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DungeonFailedMessageText;                                  // 0x13A0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FDialogueTableRowHandle>             DungeonFailedQuips;                                        // 0x13B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_98RL[0x20];                                    // 0x13C8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DeathWidget");
		return ptr;
	}



	void OnRevive(class APawn* Revived);
	void OnDeath(class APawn* Dying, class AActor* Attacker);
	class UWidgetSwitcher* GetWidgetSwitcher();
	class UTLTextBlock* GetRemainingPotionsWidget();
	class UWidget* GetNonHardcoreWidget();
	UMG_ESlateVisibility GetLifeboundItemTextVisibility();
	class UWidget* GetHardcoreWidget();
	class UTLTextBlock* GetDungeonFailedMessageText();
	class UTLRichTextBlock* GetDungeonFailedMCDialogueText();
	class UWidgetAnimation* GetDungeonFailedMCDialogueAnimation();
	class UWidget* GetDungeonFailedContainerWidget();
	class UTLTextBlock* GetDifficultyMessageText();
	class UDeathOptionListWidget* GetDeathOptionsWidget();
	class UTLWidgetSwitcher* GetDeathOptionsBackgroundWidgetSwitcher();
	class UWidget* GetAllyReviveWidget();
	class UWidgetAnimation* GetAllyReviveExpireAnimation();
	class UWidgetAnimation* GetAllyReviveAnimation();
	void CharacterSelect();
	void AllyReviveGiveUp();
};

// Class FrontiersUI.DeathOptionListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UDeathOptionListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DeathOptionListWidget");
		return ptr;
	}



};

// Class FrontiersUI.DeathOptionWidget
// 0x0078 (FullSize[0x06B8] - InheritedSize[0x0640])
class UDeathOptionWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_LOKX[0x20];                                    // 0x0640(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 CanAffordColorAndOpacity;                                  // 0x0660(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                                 CanNotAffordColorAndOpacity;                               // 0x0688(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XVH8[0x8];                                     // 0x06B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DeathOptionWidget");
		return ptr;
	}



	void SelectThisWidget();
	class UTLTextBlock* GetTextLabel();
	class UTLButton* GetReviveButton();
	class UTLTextBlock* GetGoldCostLabel();
	class UTLImage* GetButtonImage();
};

// Class FrontiersUI.DepthOfFieldWidgetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDepthOfFieldWidgetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DepthOfFieldWidgetInterface");
		return ptr;
	}



};

// Class FrontiersUI.DifficultyPanel
// 0x0038 (FullSize[0x0678] - InheritedSize[0x0640])
class UDifficultyPanel : public UTLUserWidget
{
public:
	struct FText                                       AvailableAtLevelText;                                      // 0x0640(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       AcceptText;                                                // 0x0658(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bNoLastDifficulty;                                         // 0x0670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0Q7J[0x7];                                     // 0x0671(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DifficultyPanel");
		return ptr;
	}



	void OnAccept();
	class UDifficultyListWidget* GetDifficultyList();
	class UWidget* GetCloseWrapper();
	class UWidget* GetButtonWrapper();
};

// Class FrontiersUI.DifficultyWidget
// 0x0128 (FullSize[0x0768] - InheritedSize[0x0640])
class UDifficultyWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_NFLO[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DifficultyIndex;                                           // 0x0658(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoLastDifficulty;                                         // 0x065C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AB0K[0x3];                                     // 0x065D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             AcceptAction;                                              // 0x0660(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YZJB[0x10];                                    // 0x0758(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DifficultyWidget");
		return ptr;
	}



	void UpdateUI(const struct FLinearColor& DifficultyColor);
	void SelectWidgetUI();
	void SelectThisWidget();
	class UTLImage* GetShoulderWidget();
	class UTLImage* GetShieldWidget();
	class UWidget* GetLastDifficultyWidget();
	class UTLImage* GetHighlightShieldWidget();
	class UTLBorder* GetFrameWidget();
	class UTextLayoutWidget* GetDifficultyName();
	class UTextLayoutWidget* GetDifficultyDescription();
	class UTLImage* GetBackgroundWidget();
	void DeselectWidgetUI();
	void DeselectedOtherWidgets(class UWidget* Widget);
};

// Class FrontiersUI.DifficultyListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UDifficultyListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DifficultyListWidget");
		return ptr;
	}



};

// Class FrontiersUI.DungeonWidgetBase
// 0x0058 (FullSize[0x0698] - InheritedSize[0x0640])
class UDungeonWidgetBase : public UTLUserWidget
{
public:
	class UDungeonMenuPanel*                           CachedDungeonMenuPanel;                                    // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<FrontiersUI_EDungeonUIAction, struct FDungeonUIResponse> UIResponses;                                               // 0x0648(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonWidgetBase");
		return ptr;
	}



	bool WasBossCardJustUnselected(const struct FDungeonUIActionMetadata& MetaData);
	bool WasBossCardJustSelected(const struct FDungeonUIActionMetadata& MetaData);
};

// Class FrontiersUI.DungeonStatePanelBase
// 0x0050 (FullSize[0x06E8] - InheritedSize[0x0698])
class UDungeonStatePanelBase : public UDungeonWidgetBase
{
public:
	struct FWidgetTransform                            MCWidgetRenderTransform;                                   // 0x0698(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   MCWidgetPivot;                                             // 0x06B4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               MCWidgetVisibility;                                        // 0x06BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8A8D[0x3];                                     // 0x06BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWidgetTransform                            ClusterWidgetRenderTransform;                              // 0x06C0(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   ClusterWidgetPivot;                                        // 0x06DC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               ClusterWidgetVisibility;                                   // 0x06E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2X1T[0x3];                                     // 0x06E5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonStatePanelBase");
		return ptr;
	}



	class UMenuAnchor* GetMCWidgetAnchor();
	class UMenuAnchor* GetClusterWidgetAnchor();
};

// Class FrontiersUI.DungeonChallengeConfirmPanel
// 0x0050 (FullSize[0x0738] - InheritedSize[0x06E8])
class UDungeonChallengeConfirmPanel : public UDungeonStatePanelBase
{
public:
	struct FText                                       ProgressWarningTextFormat;                                 // 0x06E8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ProgressUnaffectedTextFormat;                              // 0x0700(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       SelectorDungeonTitleTextFormat;                            // 0x0718(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R78H[0x8];                                     // 0x0730(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonChallengeConfirmPanel");
		return ptr;
	}



	void GoBackToSelect();
	class UDungeonChallengeRulesCard* GetRulesToConfirmWidget();
	class UTLTextBlock* GetProgressWarningText();
	class UWidget* GetProgressWarningContainer();
	class UTLTextBlock* GetProgressUnaffectedText();
	class UWidget* GetProgressUnaffectedContainer();
	class UTLTextBlock* GetPlayerDungeonTitleText();
	class UWidget* GetPlayerDungeonTitleContainer();
	class UWidgetAnimation* GetOutroExitToPlayingAnimation();
	void ConfirmSelection();
};

// Class FrontiersUI.DungeonChallengeRuleWidget
// 0x0030 (FullSize[0x0670] - InheritedSize[0x0640])
class UDungeonChallengeRuleWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_XRE2[0x30];                                    // 0x0640(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonChallengeRuleWidget");
		return ptr;
	}



	class UTLRichTextBlock* GetAffixTitleTextBlock();
	class UTLRichTextBlock* GetAffixTextDescriptionBlock();
};

// Class FrontiersUI.DungeonChallengeRuleListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UDungeonChallengeRuleListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonChallengeRuleListWidget");
		return ptr;
	}



};

// Class FrontiersUI.DungeonChallengeRulesCard
// 0x02B8 (FullSize[0x0950] - InheritedSize[0x0698])
class UDungeonChallengeRulesCard : public UDungeonWidgetBase
{
public:
	unsigned char                                      UnknownData_OXOP[0x20];                                    // 0x0698(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         StartFocusAudioEvent;                                      // 0x06B8(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         EndFocusAudioEvent;                                        // 0x06D0(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FName, int>                            QualityCardBackIndex;                                      // 0x06E8(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FName, int>                            QualityCardFrontIndex;                                     // 0x0738(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             RevealAction;                                              // 0x0788(0x00F8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<FrontiersUI_EDungeonRulesCardState, int>      CardStateToSwitcherIndex;                                  // 0x0880(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8GFH[0x80];                                    // 0x08D0(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonChallengeRulesCard");
		return ptr;
	}



	void SelectRules();
	void RevealRules();
	class UWidgetAnimation* GetStartFocusAnimation();
	class UWidget* GetRulesEmptyWidget();
	class UTLWidgetSwitcher* GetRulesEmptySwitcher();
	class UWidget* GetRulesContainerWidget();
	class UWidget* GetRegularCardFrontContainer();
	class UWidget* GetRegularCardBackContainer();
	class UTLWidgetSwitcher* GetQualityFrontSwitcher();
	class UTLWidgetSwitcher* GetQualityBackSwitcher();
	TArray<class UTLImage*> GetPrimaryElementImages();
	class UTLImage* GetMonsterPopulationImage();
	class UWidgetAnimation* GetFlipToFrontAnimation();
	class UWidgetAnimation* GetEndFocusAnimation();
	TArray<class UDungeonChallengeRuleListWidget*> GetChallengeRuleListWidgets();
	class UTLWidgetSwitcher* GetCardStateSwitcher();
	class UTLRichTextBlock* GetBossNameTextBlock();
	class UTLImage* GetBossImage();
	class UTLWidgetSwitcher* GetBossCardFrontSwitcher();
	class UWidget* GetBossCardFrontContainer();
	class UTLWidgetSwitcher* GetBossCardBackSwitcher();
	class UWidget* GetBossCardBackContainer();
	TArray<class UDungeonChallengeRuleListWidget*> GetBenefitRuleListWidgets();
	class UTLRichTextBlock* GetAreaNameTextBlock();
};

// Class FrontiersUI.DungeonChallengeRulesCardSet
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class UDungeonChallengeRulesCardSet : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_EERQ[0x10];                                    // 0x0640(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PerCardRevealDelaySeconds;                                 // 0x0650(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z4SN[0x4];                                     // 0x0654(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonChallengeRulesCardSet");
		return ptr;
	}



	class UWidgetAnimation* GetCardShowAnimation();
	class UDungeonChallengeRulesCardListWidget* GetCardListWidget();
	class UWidgetAnimation* GetCardHideAnimation();
};

// Class FrontiersUI.DungeonChallengeRulesCardListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UDungeonChallengeRulesCardListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonChallengeRulesCardListWidget");
		return ptr;
	}



};

// Class FrontiersUI.DungeonClusterWidget
// 0x0080 (FullSize[0x0718] - InheritedSize[0x0698])
class UDungeonClusterWidget : public UDungeonWidgetBase
{
public:
	unsigned char                                      UnknownData_8ET2[0x68];                                    // 0x0698(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       RulesTitleTextFormat;                                      // 0x0700(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonClusterWidget");
		return ptr;
	}



	class UTLRichTextBlock* GetRulesTitleText();
	class UDungeonChallengeRuleListWidget* GetRulesList();
	class UWidget* GetRulesEmptyWidget();
	class UTLWidgetSwitcher* GetRulesEmptySwitcher();
	class UWidget* GetRulesContainerWidget();
};

// Class FrontiersUI.DungeonChallengeLevelSelectorWidget
// 0x0228 (FullSize[0x0868] - InheritedSize[0x0640])
class UDungeonChallengeLevelSelectorWidget : public UTLUserWidget
{
public:
	struct FUIButtonAction                             GoToPreviousClusterAction;                                 // 0x0640(0x00F8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             GoToNextClusterAction;                                     // 0x0738(0x00F8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QECQ[0x8];                                     // 0x0830(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDungeonChallengeSelectPanel*                CachedSelectPanel;                                         // 0x0838(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FastForwardPlayRate;                                       // 0x0840(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GN8D[0x24];                                    // 0x0844(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonChallengeLevelSelectorWidget");
		return ptr;
	}



	void SelectPreviousCluster();
	void SelectNextCluster();
	class UWidgetAnimation* GetRightExitAnimation();
	class UWidgetAnimation* GetRightEnterAnimation();
	UMG_ESlateVisibility GetPreviousClusterButtonVisibility();
	UMG_ESlateVisibility GetNextClusterButtonVisibility();
	class UDungeonChallengeLevelListWidget* GetLevelListWidget();
	class UWidgetAnimation* GetLeftExitAnimation();
	class UWidgetAnimation* GetLeftEnterAnimation();
};

// Class FrontiersUI.DungeonChallengeLevelListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UDungeonChallengeLevelListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonChallengeLevelListWidget");
		return ptr;
	}



};

// Class FrontiersUI.DungeonChallengeLevelCard
// 0x00E0 (FullSize[0x0720] - InheritedSize[0x0640])
class UDungeonChallengeLevelCard : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_U53N[0x20];                                    // 0x0640(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<FrontiersUI_EDungeonLevelCardState, int>      SwitcherIndices;                                           // 0x0660(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         SelectLevelAudioEvent;                                     // 0x06B0(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         DeselectLevelAudioEvent;                                   // 0x06C8(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         StartFocusAudioEvent;                                      // 0x06E0(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         EndFocusAudioEvent;                                        // 0x06F8(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               LockedVisibility;                                          // 0x0710(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               UnlockedVisibility;                                        // 0x0711(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               UnlockedUnclearedVisibility;                               // 0x0712(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QTPM[0xD];                                     // 0x0713(0x000D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonChallengeLevelCard");
		return ptr;
	}



	void SelectLevel();
	TArray<class UTLWidgetSwitcher*> GetStateSwitchers();
	class UWidgetAnimation* GetStartFocusAnimation();
	class UWidgetAnimation* GetSelectAnimation();
	TArray<class UTLRichTextBlock*> GetLevelTextBlocks();
	class UWidgetAnimation* GetEndFocusAnimation();
	class UWidgetAnimation* GetDeselectAnimation();
};

// Class FrontiersUI.DungeonChallengeSelectPanel
// 0x0038 (FullSize[0x0720] - InheritedSize[0x06E8])
class UDungeonChallengeSelectPanel : public UDungeonStatePanelBase
{
public:
	float                                              StartCardDealingDelay;                                     // 0x06E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1PEQ[0x4];                                     // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDungeonChallengeLevelSelectorWidget*        CachedLevelSelector;                                       // 0x06F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDungeonChallengeRulesCardSet*               CachedRulesCardSet;                                        // 0x06F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KJXU[0x20];                                    // 0x0700(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonChallengeSelectPanel");
		return ptr;
	}



	void GoBackToLevels();
	class UDungeonChallengeRulesCardSet* GetChallengeRulesCardSet();
	class UDungeonChallengeLevelSelectorWidget* GetChallengeLevelSelector();
	class UWidgetAnimation* GetCardHidingAnimation();
};

// Class FrontiersUI.DungeonClusterRevealPanel
// 0x0118 (FullSize[0x0800] - InheritedSize[0x06E8])
class UDungeonClusterRevealPanel : public UDungeonStatePanelBase
{
public:
	struct FUIButtonAction                             RevealAffixesAction;                                       // 0x06E8(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FText                                       UnlockedClusterChallengeLevelsTextFormat;                  // 0x07E0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KY9X[0x8];                                     // 0x07F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonClusterRevealPanel");
		return ptr;
	}



	void RevealAffixes();
	void GoToNextState();
	class UDungeonChallengeRuleListWidget* GetUnlockedClusterRulesWidget();
	class UTLTextBlock* GetUnlockedClusterChallengeLevelRangeText();
	UMG_ESlateVisibility GetRevealAffixesButtonVisibility();
	class UWidgetAnimation* GetRevealAffixesAnimation();
	UMG_ESlateVisibility GetNextStateButtonVisibility();
};

// Class FrontiersUI.DungeonMCWidget
// 0x0188 (FullSize[0x0820] - InheritedSize[0x0698])
class UDungeonMCWidget : public UDungeonWidgetBase
{
public:
	unsigned char                                      UnknownData_I96Q[0x58];                                    // 0x0698(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<FrontiersUI_EDungeonUIAction, struct FMCDialogueChoices> UIActionDialogues;                                         // 0x06F0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FDungeonUIStateTransition, struct FMCDialogueChoices> UIStateDialogues;                                          // 0x0740(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FMCIdleAnimationGroup>               IdleAnimations;                                            // 0x0790(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              MinimumDialogueSeconds;                                    // 0x07A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZG5N[0x7C];                                    // 0x07A4(0x007C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonMCWidget");
		return ptr;
	}



	void UpdateDialogueAnchor(bool bIsOpen);
	class UWidgetAnimation* GetLoopingIdleAnimation();
	class UTLRichTextBlock* GetDialogueTextBlock();
	class UMenuAnchor* GetDialogueAnchor();
};

// Class FrontiersUI.DungeonMenuPanel
// 0x01F8 (FullSize[0x0990] - InheritedSize[0x0798])
class UDungeonMenuPanel : public UCraftingPanel
{
public:
	unsigned char                                      UnknownData_4NK7[0x130];                                   // 0x0798(0x0130) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDungeonCachedStateWidget>           CachedStateWidgets;                                        // 0x08C8(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PVFT[0x54];                                    // 0x08D8(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSpringArmRequestOverride                   SpringArmOverride;                                         // 0x092C(0x0010) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W6SY[0x4];                                     // 0x093C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FDungeonUIStateTransition, struct FFMODEventReference> StateTransitionSounds;                                     // 0x0940(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonMenuPanel");
		return ptr;
	}



	class UDungeonResultsPanel* GetResultsPanel();
	class UDungeonMCWidget* GetMCWidget();
	class UDungeonClusterWidget* GetClusterWidget();
	class UDungeonClusterRevealPanel* GetClusterRevealPanel();
	class UDungeonChallengeSelectPanel* GetChallengeSelectPanel();
	class UDungeonChallengeConfirmPanel* GetChallengeConfirmPanel();
	void CancelAndExit();
};

// Class FrontiersUI.DungeonResultsPanel
// 0x01F0 (FullSize[0x08D8] - InheritedSize[0x06E8])
class UDungeonResultsPanel : public UDungeonStatePanelBase
{
public:
	class UClass*                                      SuccessTitleTextStyle;                                     // 0x06E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       SuccessTitleTextMessage;                                   // 0x06F0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       SuccessNewCheckpointTextMessage;                           // 0x0708(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       SuccessNewHighestLevelTextMessage;                         // 0x0720(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      FailedTitleTextStyle;                                      // 0x0738(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       FailedTitleTextMessage;                                    // 0x0740(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       FailedResetToCheckpointTextMessage;                        // 0x0758(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      SuccessCheckpointMessageTextStyle;                         // 0x0770(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      SuccessNewLevelTextStyle;                                  // 0x0778(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FailedCheckpointMessageTextStyle;                          // 0x0780(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             RequestRewardsAction;                                      // 0x0788(0x00F8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               UnlockedClusterRulesVisibility;                            // 0x0880(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X87A[0x7];                                     // 0x0881(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       UnlockedClusterChallengeLevelsTextFormat;                  // 0x0888(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         ClearedChallengeAudioEvent;                                // 0x08A0(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         FailedChallengeAudioEvent;                                 // 0x08B8(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N5CU[0x8];                                     // 0x08D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DungeonResultsPanel");
		return ptr;
	}



	void GoToNextState();
	class UTLRichTextBlock* GetSuccessNewLevelTextBlock();
	class UTLRichTextBlock* GetResultTitleTextBlock();
	class UTLRichTextBlock* GetCheckpointMessageTextBlock();
	void AcknowledgeResults();
};

// Class FrontiersUI.CanvasPanelInterpInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCanvasPanelInterpInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.CanvasPanelInterpInterface");
		return ptr;
	}



};

// Class FrontiersUI.DyeAndTransmogWidget
// 0x02D0 (FullSize[0x09F8] - InheritedSize[0x0728])
class UDyeAndTransmogWidget : public UTabbedMenuWidget
{
public:
	unsigned char                                      UnknownData_BT05[0x30];                                    // 0x0728(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             TransmogAction;                                            // 0x0758(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             DyeAction;                                                 // 0x0850(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	Frontiers_ETransmogOperation                       CurrentOperation;                                          // 0x0948(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FYEY[0x7];                                     // 0x0949(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         ItemSelectedAudioEvent;                                    // 0x0950(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	FrontiersUI_ECameraType                            CameraType;                                                // 0x0968(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TYJ4[0x7];                                     // 0x0969(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<FrontiersUI_EDyeAndTransmogError, struct FText> DyeAndTransmogErrorTexts;                                  // 0x0970(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_67N6[0x38];                                    // 0x09C0(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DyeAndTransmogWidget");
		return ptr;
	}



	void Transmog();
	class UTransmogDyeStylesWidget* GetTransmogStylesWidget();
	class UTLWidgetSwitcher* GetOptionWidgetSwitcher();
	class UInventoryGridWithTabsWidget* GetInventoryWidget();
	class UTransmogDyeStylesWidget* GetDyeStylesWidget();
	class UCurrencyCostWidget* GetCostWidget();
	class UTLWidgetSwitcher* GetButtonWidgetSwitcher();
	void Dye();
	bool CanTransmog();
	bool CanDye();
	void BlueprintUpdateState(FrontiersUI_EDyeAndTransmogState State);
};

// Class FrontiersUI.TransmogDyeItemListWidget
// 0x0028 (FullSize[0x0278] - InheritedSize[0x0250])
class UTransmogDyeItemListWidget : public UListWidget
{
public:
	FrontiersUI_ETransmogDyeListType                   ListType;                                                  // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QTOQ[0x27];                                    // 0x0251(0x0027) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TransmogDyeItemListWidget");
		return ptr;
	}



};

// Class FrontiersUI.DyeItemListWidget
// 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
class UDyeItemListWidget : public UTransmogDyeItemListWidget
{
public:
	unsigned char                                      UnknownData_BHRQ[0x10];                                    // 0x0278(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DyeItemListWidget");
		return ptr;
	}



};

// Class FrontiersUI.InventoryItemBaseWidget
// 0x0260 (FullSize[0x08A0] - InheritedSize[0x0640])
class UInventoryItemBaseWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_3GL5[0x28];                                    // 0x0640(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	UMG_ESlateVisibility                               ItemNameVisibility;                                        // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               StackSizeVisibility;                                       // 0x0669(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L0XL[0x6];                                     // 0x066A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 ItemQualityColor;                                          // 0x0670(0x0028) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bShowScaledLevel;                                          // 0x0698(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZFXY[0x3];                                     // 0x0699(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GamepadTooltipDelay;                                       // 0x069C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFocusOnHover;                                             // 0x06A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XA2Y[0x7];                                     // 0x06A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ItemName;                                                  // 0x06A8(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BGAN[0x10];                                    // 0x06C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ItemLevelText;                                             // 0x06D0(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ItemLevelTextFormat;                                       // 0x06E8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ItemLevelTextWithMaxFormat;                                // 0x0700(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       WeaponDPSFormat;                                           // 0x0718(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DamageOverTimeFormat;                                      // 0x0730(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ChallengeLevelBonusFormat;                                 // 0x0748(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsEquipped;                                               // 0x0760(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4NZ9[0x7];                                     // 0x0761(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       GoldValue;                                                 // 0x0768(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               ElementVisibility;                                         // 0x0780(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               SpokeVisibility;                                           // 0x0781(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               LevelVisibility;                                           // 0x0782(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               ItemIconVisibility;                                        // 0x0783(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               GoldVisibility;                                            // 0x0784(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S2LC[0x3];                                     // 0x0785(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       StackSize;                                                 // 0x0788(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsTwoHanded;                                              // 0x07A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMultiSlot;                                                // 0x07A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3HPP[0x2];                                     // 0x07A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InventoryEntryId;                                          // 0x07A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      InventoryOwner;                                            // 0x07A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JU7E[0xE8];                                    // 0x07B0(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInventoryComparisonWidget*                  ComparisonWidget;                                          // 0x0898(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InventoryItemBaseWidget");
		return ptr;
	}



	void UpdateComparisonWidget(bool bIsTooltipOpen);
	class UWidget* GetLoadingWidget();
	class UTextBlock* GetItemNameText();
	class UTLImage* GetItemIconImage();
	class AActor* GetItemActorCDO();
	class UTLBorder* GetIconBorder();
	class UTLImage* GetIconBackground();
	class UTLImage* GetElementIconImage();
	class UWidget* GetDamageWidget();
	class UTLTextBlock* GetDamageTextBlock();
	class UTLTextBlock* GetDamageOverTimeTextBlock();
	class UUserWidget* GetComparisonWidget();
	class UMenuAnchor* GetComparisonMenuAnchor();
	class UTLTextBlock* GetChallengeLevelBonusTextBlock();
	bool CanSell();
	void BlueprintUpdateWidget();
};

// Class FrontiersUI.TransmogDyeItemWidget
// 0x0148 (FullSize[0x09E8] - InheritedSize[0x08A0])
class UTransmogDyeItemWidget : public UInventoryItemBaseWidget
{
public:
	unsigned char                                      UnknownData_QTJN[0x18];                                    // 0x08A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             SelectAction;                                              // 0x08B8(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4PBI[0x28];                                    // 0x09B0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      TooltipWidgetClass;                                        // 0x09D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransmogDyeTooltipWidget*                   TransmogDyeTooltipWidget;                                  // 0x09E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TransmogDyeItemWidget");
		return ptr;
	}



	void HandleSelectAction();
	class UWidget* GetNewFlag();
	class UWidget* GetLoadedItemContainer();
	class UTLTextBlock* GetGoldText();
	class UWidget* GetGoldOverlay();
	class UWidget* GetDimmer();
};

// Class FrontiersUI.DyeItemWidget
// 0x0000 (FullSize[0x09E8] - InheritedSize[0x09E8])
class UDyeItemWidget : public UTransmogDyeItemWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DyeItemWidget");
		return ptr;
	}



};

// Class FrontiersUI.TransmogDyeTooltipWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UTransmogDyeTooltipWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TransmogDyeTooltipWidget");
		return ptr;
	}



	class UTLRichTextBlock* GetNameText();
};

// Class FrontiersUI.DyeTooltipWidget
// 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
class UDyeTooltipWidget : public UTransmogDyeTooltipWidget
{
public:
	struct FDyeTableRowHandle                          DyeRowHandle;                                              // 0x0640(0x0010) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DyeTooltipWidget");
		return ptr;
	}



};

// Class FrontiersUI.DyeListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UDyeListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DyeListWidget");
		return ptr;
	}



};

// Class FrontiersUI.DyeWidget
// 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
class UDyeWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_PH02[0x20];                                    // 0x0640(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DyeWidget");
		return ptr;
	}



	void SelectDye();
	class UTLImage* GetDyeImage();
};

// Class FrontiersUI.EmberWeaponChargeBarWidget
// 0x0020 (FullSize[0x06B0] - InheritedSize[0x0690])
class UEmberWeaponChargeBarWidget : public UBaseClassResourceWidget
{
public:
	struct FActiveTraitsTableRowHandle                 PowerWidgetTrait;                                          // 0x0690(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FActiveTraitsTableRowHandle                 EntireWidgetTrait;                                         // 0x06A0(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.EmberWeaponChargeBarWidget");
		return ptr;
	}



	class UWidget* GetPowerWidget();
};

// Class FrontiersUI.EmberWeaponChargeWidget
// 0x0080 (FullSize[0x06C0] - InheritedSize[0x0640])
class UEmberWeaponChargeWidget : public UTLUserWidget
{
public:
	struct FActiveTraitsTableRowHandle                 EmberWeaponChargeActiveTrait;                              // 0x0640(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FActiveTraitsTableRowHandle                 EmberWeaponDrainActiveTrait;                               // 0x0650(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         EmberWeaponReadySound;                                     // 0x0660(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      TooltipWidgetClass;                                        // 0x0678(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7SCF[0x8];                                     // 0x0680(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UActiveTrait>                 ChargeActiveTrait;                                         // 0x0688(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UActiveTrait>                 DrainActiveTrait;                                          // 0x0690(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6SJV[0x8];                                     // 0x0698(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UTLInventoryContainerWardrobe> WardrobeContainer;                                         // 0x06A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkillDescriptionWidget*                     EmberWeaponTooltipWidget;                                  // 0x06A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkillHotkey*                                HotkeyWidget;                                              // 0x06B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ALYZ[0x8];                                     // 0x06B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.EmberWeaponChargeWidget");
		return ptr;
	}



	bool IsEmberWeaponAllowed();
	class USkillHotkey* GetSkillHotkey();
	class USkillActiveWidget* GetSkillActiveDisplay();
	UMG_ESlateVisibility GetEmberWeaponEquippedUIVisibility();
	float GetChargeOrDrainTimeRemaining();
	float GetChargeBarPercent();
};

// Class FrontiersUI.EmberWeaponMessageWidget
// 0x0030 (FullSize[0x08D0] - InheritedSize[0x08A0])
class UEmberWeaponMessageWidget : public UInventoryItemBaseWidget
{
public:
	struct FText                                       SkillUnlockTextFormat;                                     // 0x08A0(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       AffixUnlockText;                                           // 0x08B8(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.EmberWeaponMessageWidget");
		return ptr;
	}



	class UInventoryItemBaseWidget* GetItemIconWidget();
};

// Class FrontiersUI.EmberWeaponSkillsWidget
// 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
class UEmberWeaponSkillsWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_V3AF[0xC];                                     // 0x0640(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bPreviewMode;                                              // 0x064C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JWGR[0x3];                                     // 0x064D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSkillsTabTableRowHandle                    DefaultEmberSkillTab;                                      // 0x0650(0x0010) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.EmberWeaponSkillsWidget");
		return ptr;
	}



	class UTLImage* GetSkillTabBackground();
	class USkillInTabListWidget* GetSkillsInTabList();
	class UWidget* GetDefaultEmberWeaponWidget();
};

// Class FrontiersUI.EnchantingAffixListWidget
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class UEnchantingAffixListWidget : public UListWidget
{
public:
	unsigned char                                      UnknownData_JJ4N[0x8];                                     // 0x0250(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.EnchantingAffixListWidget");
		return ptr;
	}



};

// Class FrontiersUI.EnchantingAffixWidget
// 0x0020 (FullSize[0x0698] - InheritedSize[0x0678])
class UEnchantingAffixWidget : public UAffixWidget
{
public:
	bool                                               bIsEmptySlot;                                              // 0x0678(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I7KH[0x7];                                     // 0x0679(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       EnchantingSlotText;                                        // 0x0680(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.EnchantingAffixWidget");
		return ptr;
	}



	class UTLImage* GetSlotFilledIcon();
	void BlueprintSetIsHighlighted(bool bIsHighlighted);
	void BlueprintRefresh();
	void BlueprintPlayEnchantHighlightAnimation(bool bIsDisenchant);
};

// Class FrontiersUI.EnchantingDetailsWidget
// 0x00C8 (FullSize[0x0A88] - InheritedSize[0x09C0])
class UEnchantingDetailsWidget : public UCraftingRecipeDetailWidget
{
public:
	struct FCraftingRecipe                             MetaRecipe;                                                // 0x09C0(0x00C0) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UEnchantingMenuWidget*                       EnchantingMenu;                                            // 0x0A80(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.EnchantingDetailsWidget");
		return ptr;
	}



	class UTLTextBlock* GetRarityTextBlock();
	class UAffixListWidget* GetPrimaryAffixWidget();
	bool GetEnchantButtonEnabled();
	class UTLImage* GetCategoryIcon();
	class UWidget* GetAffixWidget();
};

// Class FrontiersUI.InventoryItemDetailsWidget
// 0x0170 (FullSize[0x0A10] - InheritedSize[0x08A0])
class UInventoryItemDetailsWidget : public UInventoryItemBaseWidget
{
public:
	struct FText                                       WardrobeSlotName;                                          // 0x08A0(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ItemQualityName;                                           // 0x08B8(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ItemDyeName;                                               // 0x08D0(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       SkillDescription;                                          // 0x08E8(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       FlavorText;                                                // 0x0900(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               FlavorTextVisibility;                                      // 0x0918(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PRR0[0x7];                                     // 0x0919(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       RequiredLevelText;                                         // 0x0920(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       RequiredLevelTextFormat;                                   // 0x0938(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       RequiredClassText;                                         // 0x0950(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       EmberWeaponChargeTime;                                     // 0x0968(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       EmberWeaponDrainTime;                                      // 0x0980(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              AttackSpeedPercent;                                        // 0x0998(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               DyeNameVisibility;                                         // 0x099C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               SkillDividerVisibility;                                    // 0x099D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               PrimaryAffixesVisibility;                                  // 0x099E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               SecondaryAffixesVisibility;                                // 0x099F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               EnchantingAffixesVisibility;                               // 0x09A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               LegendaryAffixesVisibility;                                // 0x09A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               AffixesVisibility;                                         // 0x09A2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               SkillDescriptionVisibility;                                // 0x09A3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               AttackSpeedVisibility;                                     // 0x09A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               EmberWeaponDetailsVisibility;                              // 0x09A5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               EmberWeaponStatusVisibilty;                                // 0x09A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               ItemFooterVisibility;                                      // 0x09A7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               LifeboundVisibility;                                       // 0x09A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               CannotSellVisibility;                                      // 0x09A9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               CannotUseInAreaVisibility;                                 // 0x09AA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               RequiredLevelVisibility;                                   // 0x09AB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               RequiredClassVisibility;                                   // 0x09AC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               InvalidSlotVisibility;                                     // 0x09AD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               SellBoxVisibility;                                         // 0x09AE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               DividerVisibility;                                         // 0x09AF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               TopStatsVisibility;                                        // 0x09B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               RarityVisibility;                                          // 0x09B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               TransmogOrDyedVisibility;                                  // 0x09B2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               BreakDownAreaVisibility;                                   // 0x09B3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               OwnerSacrificeVisibility;                                  // 0x09B4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               VisitorSacrificeVisibility;                                // 0x09B5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               OwnerCannotSacrificeVisibility;                            // 0x09B6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               VisitorCannotSacrificeVisibility;                          // 0x09B7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       SacrificeBonusText;                                        // 0x09B8(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       CannotSacrificeText;                                       // 0x09D0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LRLT[0x8];                                     // 0x09E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInventoryItemBaseWidget*                    HoveredItemWidget;                                         // 0x09F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       WeaponSkillFormat;                                         // 0x09F8(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InventoryItemDetailsWidget");
		return ptr;
	}



	class USkillLevelBonusListListWidget* GetSkillsListWidget();
	class UAffixListWidget* GetSecondaryAffixListWidget();
	class UAffixListWidget* GetPrimaryAffixListWidget();
	class UWidget* GetNewLegendaryAffixWidget();
	UMG_ESlateVisibility GetMouseKeyboardSendToPlayerHintVisibility();
	UMG_ESlateVisibility GetMouseKeyboardSendToPetHintVisibility();
	UMG_ESlateVisibility GetMouseKeyboardEquipHintVisibility();
	class ULockedAffixListWidget* GetLockedAffixListWidget();
	class UAffixListWidget* GetLegendaryAffixListWidget();
	class UEnchantingAffixListWidget* GetEnchantingAffixListWidget();
	class UGenericResourceWidget* GetBreakDownRewardIcon();
	class UTLBorder* GetBorder();
	void BlueprintSetCraftingMessageText(const struct FText& Text, UMG_ESlateVisibility InVisibility);
};

// Class FrontiersUI.EnchantingGearWidget
// 0x0008 (FullSize[0x0A18] - InheritedSize[0x0A10])
class UEnchantingGearWidget : public UInventoryItemDetailsWidget
{
public:
	class UEnchantingMenuWidget*                       EnchantingMenu;                                            // 0x0A10(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.EnchantingGearWidget");
		return ptr;
	}



	class UInventoryItemWidget* GetItemIconWidget();
	bool GetDisenchantButtonEnabled();
};

// Class FrontiersUI.EnchantingMenuWidget
// 0x03C0 (FullSize[0x0AE8] - InheritedSize[0x0728])
class UEnchantingMenuWidget : public UTabbedMenuWidget
{
public:
	unsigned char                                      UnknownData_QQCA[0x30];                                    // 0x0728(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             EnchantAction;                                             // 0x0758(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             DisenchantAction;                                          // 0x0850(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             CloseAction;                                               // 0x0948(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	FrontiersUI_EEnchantingMenuState                   State;                                                     // 0x0A40(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1ZX3[0x7];                                     // 0x0A41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisenchantHeaderText;                                      // 0x0A48(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DisenchantBodyText;                                        // 0x0A60(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DisenchantVerbText;                                        // 0x0A78(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         ItemSelectedAudioEvent;                                    // 0x0A90(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         DisenchantAudioEvent;                                      // 0x0AA8(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SYA0[0x10];                                    // 0x0AC0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCraftingCategoryListWidget*                 CraftingList;                                              // 0x0AD0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RPMZ[0x8];                                     // 0x0AD8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnchantingGearWidget*                       SelectedGearWidget;                                        // 0x0AE0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.EnchantingMenuWidget");
		return ptr;
	}



	void GoBack();
	class UEnchantingGearWidget* GetSelectedGearWidget();
	class UInventoryGridWithTabsWidget* GetInventoryWidget();
	class UEnchantingDetailsWidget* GetEnchantingDetailsWidget();
	FrontiersUI_EEnchantActionStatus GetEnchantActionStatus();
	class UCraftingQueueWidget* GetCraftingQueueWidget();
	void Enchant();
	void Disenchant();
	void BlueprintOnStateChanged();
};

// Class FrontiersUI.EnchantingRecipeWidget
// 0x0020 (FullSize[0x07C8] - InheritedSize[0x07A8])
class UEnchantingRecipeWidget : public UCraftingRecipeWidget
{
public:
	class UClass*                                      TooltipWidgetClass;                                        // 0x07A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnchantingDetailsWidget*                    EnchantTooltipWidget;                                      // 0x07B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCraftingEntryContainerWidget*               ContainerWidget;                                           // 0x07B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnchantingMenuWidget*                       EnchantingMenu;                                            // 0x07C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.EnchantingRecipeWidget");
		return ptr;
	}



	class UTLImage* GetCategoryIcon();
};

// Class FrontiersUI.FameRewardWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UFameRewardWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FameRewardWidget");
		return ptr;
	}



	class UTLTextBlock* GetRewardText();
};

// Class FrontiersUI.FeedbackModal
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFeedbackModal : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FeedbackModal");
		return ptr;
	}



	class UGenericModalWidget* STATIC_ShowChatReportUI(class UObject* WorldContextObject, const struct FModalWidgetDefinition& WidgetDefinition, const struct FText& ReportSuccessMessage, const struct FTLUserAccount& ReportedPlayer, const struct FString& ReportedChatMessage, FrontiersUI_EUserReportCategory ReportCategory);
};

// Class FrontiersUI.FeedbackWidget
// 0x01C0 (FullSize[0x0800] - InheritedSize[0x0640])
class UFeedbackWidget : public UTLUserWidget
{
public:
	TMap<FrontiersUI_ETLFeedbackType, struct FText>    FeedbackTypeText;                                          // 0x0640(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<FrontiersUI_ETLFeedbackType, struct FText>    FeedbackSendText;                                          // 0x0690(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                MaxCharCount;                                              // 0x06E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentCharCount;                                          // 0x06E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             SendAction;                                                // 0x06E8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RPSS[0x20];                                    // 0x07E0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FeedbackWidget");
		return ptr;
	}



	void UpdateText(const struct FText& InText);
	void UpdateScreenshot(bool bShouldSendScreenshot);
	void SendFeedback();
	class UTLTextBlock* GetText();
	class UTLImage* GetScreenshotImage();
	class UListWidget* GetListWidget();
	class UMultiLineEditableText* GetFeedbackBox();
	void DisplayScreenshot();
	void BlueprintUpdateScreenshot(bool bShouldSendScreenshot);
	void BlueprintUpdateCharCount(bool bOverCharCount);
};

// Class FrontiersUI.FeedbackOptionWidget
// 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
class UFeedbackOptionWidget : public UTLUserWidget
{
public:
	struct FText                                       OptionText;                                                // 0x0640(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	FrontiersUI_EFeedbackOptionType                    OptionType;                                                // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7F7K[0x7];                                     // 0x0659(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FeedbackOptionWidget");
		return ptr;
	}



	void ToggleCheckboxAction();
	void PerformCheckboxOptionAction(bool bState);
	class UMultiLineEditableText* GetEditableText();
	class UTLComboBox* GetDropdown();
	class UTLCheckBox* GetCheckbox();
};

// Class FrontiersUI.FloatingHitpointBarWidget
// 0x00C8 (FullSize[0x0708] - InheritedSize[0x0640])
class UFloatingHitpointBarWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_0W7Q[0x40];                                    // 0x0640(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayBeforeFade;                                           // 0x0680(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7YAS[0x4];                                     // 0x0684(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Frontiers_EActorTargetType, class UObject*>   HealthBarTextures;                                         // 0x0688(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UProgressBar*                                ProgressBar;                                               // 0x06D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RLGZ[0x20];                                    // 0x06E0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLHUD*                                      HUD;                                                       // 0x0700(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FloatingHitpointBarWidget");
		return ptr;
	}



	void OnDeath(class APawn* Dying, class AActor* Attacker);
	class UProgressBar* GetProgressBar();
};

// Class FrontiersUI.FloatingTextWidget
// 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
class UFloatingTextWidget : public UTLUserWidget
{
public:
	bool                                               bAutoDestroy;                                              // 0x0640(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JB6J[0x3];                                     // 0x0641(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDuration;                                               // 0x0644(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            WidgetAnimation;                                           // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FloatingTextWidget");
		return ptr;
	}



	class UTLTextBlock* GetTextBlock();
	class UTLRichTextBlock* GetRichTextBlock();
};

// Class FrontiersUI.FortEditWidget
// 0x1290 (FullSize[0x18D0] - InheritedSize[0x0640])
class UFortEditWidget : public UTLUserWidget
{
public:
	struct FUIButtonAction                             PickupPropAction;                                          // 0x0640(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             PlacePropAction;                                           // 0x0738(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             BuildPropAction;                                           // 0x0830(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             CancelPlaceAction;                                         // 0x0928(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             StorePropAction;                                           // 0x0A20(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             RotatePropLeftAction;                                      // 0x0B18(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             RotatePropRightAction;                                     // 0x0C10(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             MovePropUpAction;                                          // 0x0D08(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             MovePropDownAction;                                        // 0x0E00(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             RotatePropAction;                                          // 0x0EF8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             MovePropVerticallyAction;                                  // 0x0FF0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             ToggleMouseWheelAction;                                    // 0x10E8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             SnapToGroundAction;                                        // 0x11E0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             DuplicatePropAction;                                       // 0x12D8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             MoveCameraAction;                                          // 0x13D0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             StoreAllAction;                                            // 0x14C8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      StoreAllModal;                                             // 0x15C0(0x0260) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W9IO[0x80];                                    // 0x1820(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLTextBlock*                                HoveredPropTextBlock;                                      // 0x18A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPropWidget*                             PropToPlaceWidget;                                         // 0x18A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortInventoryWidget*                        FortInventoryWidget;                                       // 0x18B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MouseDragSensitivity;                                      // 0x18B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MUFF[0x4];                                     // 0x18BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget*                                     PlaceableAreaWidget;                                       // 0x18C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8YW2[0x8];                                     // 0x18C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FortEditWidget");
		return ptr;
	}



	void StoreProp();
	void StoreAll();
	void SnapToGround();
	void RotatePropRight();
	void RotatePropLeft();
	void PlaceProp();
	void PickupProp();
	void MovePropUp();
	void MovePropDown();
	UMG_ESlateVisibility GetStoreAllButtonVisibility();
	class UFortPropWidget* GetPropToPlaceWidget();
	class UWidget* GetPlaceableAreaWidget();
	class UTLTextBlock* GetHoveredPropTextBlock();
	UMG_ESlateVisibility GetGamepadSlashedCircleVisibility();
	UMG_ESlateVisibility GetGamepadCrosshairVisibility();
	class UFortInventoryWidget* GetFortInventoryWidget();
	void DuplicateProp();
	void CancelPlace();
};

// Class FrontiersUI.FortInventoryWidget
// 0x00D0 (FullSize[0x07F8] - InheritedSize[0x0728])
class UFortInventoryWidget : public UTabbedMenuWidget
{
public:
	unsigned char                                      UnknownData_BHP3[0x34];                                    // 0x0728(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDepthOfFieldOverrideRequest                DepthOfFieldSettings;                                      // 0x075C(0x000C) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCurrencyTableRowHandle>             DefaultCurrencies;                                         // 0x0768(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FFortPropGroupTableRowHandle, class UObject*> GroupIcons;                                                // 0x0778(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       FortStashCategoryName;                                     // 0x07C8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UFortPropListWidget*                         FortPropListWidget;                                        // 0x07E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortEditWidget*                             FortEditWidget;                                            // 0x07E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0MFY[0x8];                                     // 0x07F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FortInventoryWidget");
		return ptr;
	}



	void OnSubMenuOptionSelected(const struct FTabbedMenuOption& Option, int Index);
	class UWidget* GetSubMenuPanel();
	class UWidget* GetSidePanelContainer();
	class UTLTextBlock* GetSelectedSubCategoryTextBlock();
	class UWidget* GetNoPropsWidget();
	class UFortPropListWidget* GetFortPropListWidget();
	class UListWidget* GetCurrencyListWidget();
	void BlueprintUpdateSelectedPropDescription(const struct FText& Name, const struct FText& Description, bool bVisible);
};

// Class FrontiersUI.FortCustomizationButton
// 0x0278 (FullSize[0x08B8] - InheritedSize[0x0640])
class UFortCustomizationButton : public UTLUserWidget
{
public:
	struct FModalWidgetDefinition                      FortReportModalDefinition;                                 // 0x0640(0x0260) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FText                                       FortReportSuccessMessage;                                  // 0x08A0(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FortCustomizationButton");
		return ptr;
	}



	void ToggleFortEditMenu();
	class UWidget* GetOtherOwnerWidget();
	class UTLTextBlock* GetOtherOwnerTextBlock();
	class UWidget* GetCustomizeWidget();
};

// Class FrontiersUI.FortPropCraftingWidget
// 0x0110 (FullSize[0x0780] - InheritedSize[0x0670])
class UFortPropCraftingWidget : public UCraftingWidgetBase
{
public:
	struct FUIButtonAction                             CraftAction;                                               // 0x0670(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_665B[0x18];                                    // 0x0768(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FortPropCraftingWidget");
		return ptr;
	}



	void Place();
	UMG_ESlateVisibility GetPlaceButtonVisibility();
	class UFortPropWidget* GetFortPropWidget();
};

// Class FrontiersUI.FortPropLimitWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UFortPropLimitWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FortPropLimitWidget");
		return ptr;
	}



	void BlueprintRefreshLimit(int CurrentComplexity, int MaxComplexity);
};

// Class FrontiersUI.FortPropListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UFortPropListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FortPropListWidget");
		return ptr;
	}



};

// Class FrontiersUI.FortPropLevelIconSwitcherWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UFortPropLevelIconSwitcherWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FortPropLevelIconSwitcherWidget");
		return ptr;
	}



	void SetState(FrontiersUI_EIconSwitcherState SwitcherState);
};

// Class FrontiersUI.FortPropExperienceWidget
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class UFortPropExperienceWidget : public UTLUserWidget
{
public:
	class UProgressBar*                                ProgressBar;                                               // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortPropLevelIconSwitcherWidget*>    LevelIcons;                                                // 0x0648(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FortPropExperienceWidget");
		return ptr;
	}



	void PlayExperienceGainAnimation();
	class UProgressBar* GetProgressBar();
	class UProgressBar* GetPreviewProgressBar();
	TArray<class UFortPropLevelIconSwitcherWidget*> GetLevelIcons();
};

// Class FrontiersUI.FortPropSacrificeCurrencyWidget
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UFortPropSacrificeCurrencyWidget : public UTLUserWidget
{
public:
	class UBaseFortPropSacrificeWidget*                SacrificeMenu;                                             // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FortPropSacrificeCurrencyWidget");
		return ptr;
	}



	void SacrificeButtonClicked();
	void PlayExperienceGainAnimation();
	class UGoldLimitWidget* GetGoldLimitWidget();
	class UFloatingGamepadButtonActionWidget* GetFloatingSacrificeAction();
	class UCurrencyWidget* GetCurrencyWidget();
	class UCurrencyWidget* GetCostWidget();
	void BlueprintSetup(FrontiersUI_ECanSacrificeState State);
};

// Class FrontiersUI.BaseFortPropSacrificeWidget
// 0x0270 (FullSize[0x08B0] - InheritedSize[0x0640])
class UBaseFortPropSacrificeWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_UU4C[0x30];                                    // 0x0640(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             SacrificeSimpleAction;                                     // 0x0670(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                      Prop;                                                      // 0x0768(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E2ZN[0x4];                                     // 0x0770(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       OwnerRecipeBaseName;                                       // 0x0774(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       VisitorRecipeBaseName;                                     // 0x077C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QSWV[0x4];                                     // 0x0784(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TitleText;                                                 // 0x0788(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UFortPropExperienceWidget*                   PropExperienceWidget;                                      // 0x07A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryGridWithTabsWidget*                InventoryGrid;                                             // 0x07A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTLTextBlock*                                DescriptionTextBlock;                                      // 0x07B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTLTextBlock*                                OwnerMaxLevelTextBlock;                                    // 0x07B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPropSacrificeCurrencyWidget*            SacrificeCurrencyWidget;                                   // 0x07C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       OwnerDescriptionFormat;                                    // 0x07C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       VisitorDescription;                                        // 0x07E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       PreventVisitorSacrificeStatusEffectTags;                   // 0x07F8(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FTraitInitializer                           OwnerBonusTraitInitializer;                                // 0x0818(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      ExperienceWidgetClass;                                     // 0x0880(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      SacrificeCurrencyWidgetClass;                              // 0x0888(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OBP6[0x20];                                    // 0x0890(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.BaseFortPropSacrificeWidget");
		return ptr;
	}



	void SetBonusText(const struct FText& Text);
	void SacrificeSimple();
	class UFortPropSacrificeCurrencyWidget* GetSacrificeCurrencyWidget();
	class UFortPropExperienceWidget* GetPropExperienceWidget();
	class UTLTextBlock* GetOwnerMaxLevelTextBlock();
	class UInventoryGridWithTabsWidget* GetInventoryGrid();
	class UTLTextBlock* GetDescriptionTextBlock();
};

// Class FrontiersUI.FortPropUIInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFortPropUIInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FortPropUIInterface");
		return ptr;
	}



	void SetFortProp(int InventoryId, class AActor* InProp);
};

// Class FrontiersUI.FortPropIconWidget
// 0x0268 (FullSize[0x08C0] - InheritedSize[0x0658])
class UFortPropIconWidget : public UCraftingRecipeWidgetBase
{
public:
	unsigned char                                      UnknownData_WXQU[0x8];                                     // 0x0658(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFortPropData                               FortPropData;                                              // 0x0660(0x0250) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      TooltipWidgetClass;                                        // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPropTooltipWidget*                      FortPropTooltipWidget;                                     // 0x08B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FortPropIconWidget");
		return ptr;
	}



	class UTLTextBlock* GetQuantityTextBlock();
	class UTLImage* GetPropIconImage();
	class UTLBorder* GetItemIconBorder();
	class UTLImage* GetItemIconBackground();
};

// Class FrontiersUI.FortPropWidget
// 0x0148 (FullSize[0x0A08] - InheritedSize[0x08C0])
class UFortPropWidget : public UFortPropIconWidget
{
public:
	struct FUIButtonAction                             CraftAction;                                               // 0x08C0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               CostsVisibility;                                           // 0x09B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_41Z4[0x7];                                     // 0x09B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       MaxCountText;                                              // 0x09C0(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               MaxCountVisibility;                                        // 0x09D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0CFU[0x7];                                     // 0x09D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ComplexityValueText;                                       // 0x09E0(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               ComplexityVisibility;                                      // 0x09F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UXPU[0x3];                                     // 0x09F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UFortEditComponent>           FortEditComponent;                                         // 0x09FC(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7QU7[0x4];                                     // 0x0A04(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FortPropWidget");
		return ptr;
	}



	UMG_ESlateVisibility GetPlaceButtonVisibility();
	class UWidget* GetPlaceButtonContainer();
	class UWidget* GetLockOverlay();
	UMG_ESlateVisibility GetExceedLimitTextVisibility();
	UMG_ESlateVisibility GetCraftButtonVisibility();
	class UCraftingCostListWidget* GetCostListWidget();
	void CraftOrPlace();
};

// Class FrontiersUI.FortPropTooltipWidget
// 0x0098 (FullSize[0x06D8] - InheritedSize[0x0640])
class UFortPropTooltipWidget : public UTLUserWidget
{
public:
	struct FText                                       DisplayName;                                               // 0x0640(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       QualityName;                                               // 0x0658(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               QualityVisibility;                                         // 0x0670(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PEBB[0x7];                                     // 0x0671(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 QualityColor;                                              // 0x0678(0x0028) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       TypeName;                                                  // 0x06A0(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       FortPropDescription;                                       // 0x06B8(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               DescriptionVisibility;                                     // 0x06D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4FXP[0x7];                                     // 0x06D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FortPropTooltipWidget");
		return ptr;
	}



};

// Class FrontiersUI.OtherPlayerWidget
// 0x0878 (FullSize[0x0EB8] - InheritedSize[0x0640])
class UOtherPlayerWidget : public UTLUserWidget
{
public:
	struct FUIButtonAction                             ViewProfileAction;                                         // 0x0640(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               ViewProfileButtonVisibility;                               // 0x0738(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QTHH[0x7];                                     // 0x0739(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             InviteAction;                                              // 0x0740(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               InviteButtonVisibility;                                    // 0x0838(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M9CZ[0x7];                                     // 0x0839(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             WhisperAction;                                             // 0x0840(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               WhisperButtonVisibility;                                   // 0x0938(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EKBH[0x7];                                     // 0x0939(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       HostPlatformText;                                          // 0x0940(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               ForeignHostPlatformVisibility;                             // 0x0958(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6I70[0x7];                                     // 0x0959(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FOtherPlayerContext                         Context;                                                   // 0x0960(0x0088) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      DifficultyModalDef;                                        // 0x09E8(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoInviteBlockedModalDef;                                   // 0x0C48(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6ZQ0[0x10];                                    // 0x0EA8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.OtherPlayerWidget");
		return ptr;
	}



	void Whisper();
	void ViewProfile();
	void Invite();
	struct FTLUserAccount GetTLUserAccount();
	class UTLImage* GetPortraitImage();
	class UTLTextBlock* GetHardcoreText();
	class UTLTextBlock* GetDifficultyText();
	class UTLTextBlock* GetCharacterNameTextBlock();
	class UTLTextBlock* GetAccountNameTextBlock();
};

// Class FrontiersUI.FriendEntryWidget
// 0x01B8 (FullSize[0x1070] - InheritedSize[0x0EB8])
class UFriendEntryWidget : public UOtherPlayerWidget
{
public:
	struct FText                                       InviteStatusText;                                          // 0x0EB8(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TMap<Frontiers_EUIFriendStatus, struct FText>      FriendStatusText;                                          // 0x0ED0(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<Frontiers_EUIFriendStatus, int>               FriendStatusSwitcherIndices;                               // 0x0F20(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KF1C[0x8];                                     // 0x0F70(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             InviteToGameAction;                                        // 0x0F78(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FriendEntryWidget");
		return ptr;
	}



	void InviteToGame();
	class UTLTextBlock* GetHardcoreTextBlock();
	class UWidgetSwitcher* GetFriendStatusWidgetSwitcher();
	class UTLTextBlock* GetDifficultyTextBlock();
	class UTLTextBlock* GetAreaTextBlock();
};

// Class FrontiersUI.FriendEntryListWidget
// 0x0060 (FullSize[0x02B0] - InheritedSize[0x0250])
class UFriendEntryListWidget : public UListWidget
{
public:
	TArray<Frontiers_EUIFriendStatus>                  FriendStatusUIOrdering;                                    // 0x0250(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YN5Z[0x50];                                    // 0x0260(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FriendEntryListWidget");
		return ptr;
	}



};

// Class FrontiersUI.FriendsWidget
// 0x0118 (FullSize[0x0758] - InheritedSize[0x0640])
class UFriendsWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_TBJM[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             RefreshAction;                                             // 0x0648(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               FriendsVisibility;                                         // 0x0740(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               NoFriendsVisibility;                                       // 0x0741(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6NLP[0x6];                                     // 0x0742(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   NextRefreshTimeStamp;                                      // 0x0748(0x0008) (ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDateTime                                   NextForcedRefreshTimeStamp;                                // 0x0750(0x0008) (ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FriendsWidget");
		return ptr;
	}



	void UpdateFriendsList();
	struct FText GetTitleText();
	class UFriendEntryListWidget* GetFriendsList();
	void ForceUpdateFriendsList();
	bool CanForceUpdateFriendsList();
};

// Class FrontiersUI.GameMessageWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UGameMessageWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GameMessageWidget");
		return ptr;
	}



	class UGameMessageListWidget* GetGameMessageListWidget();
};

// Class FrontiersUI.GameMessageListWidget
// 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
class UGameMessageListWidget : public UListWidget
{
public:
	int                                                MaxWidgetsInList;                                          // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefaultSortValue;                                          // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PlayerStateSortValue;                                      // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LoreLineSortValue;                                         // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GameMessageListWidget");
		return ptr;
	}



};

// Class FrontiersUI.GamepadButtonActionList
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UGamepadButtonActionList : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GamepadButtonActionList");
		return ptr;
	}



};

// Class FrontiersUI.GamepadButtonActionWidget
// 0x0028 (FullSize[0x0668] - InheritedSize[0x0640])
class UGamepadButtonActionWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_0ZBS[0x28];                                    // 0x0640(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GamepadButtonActionWidget");
		return ptr;
	}



	class UTLTextBlock* GetTextBlock();
	float GetHoldProgressPercent();
	class UProgressBar* GetHoldProgressBar();
	class UHotkeyWidget* GetButtonImage();
};

// Class FrontiersUI.FloatingGamepadButtonActionWidget
// 0x0040 (FullSize[0x06A8] - InheritedSize[0x0668])
class UFloatingGamepadButtonActionWidget : public UGamepadButtonActionWidget
{
public:
	class UClass*                                      TextStyle;                                                 // 0x0668(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGamepadOnly;                                              // 0x0670(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHidePromptWhenActionUnavailable;                          // 0x0671(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GLC2[0x36];                                    // 0x0672(0x0036) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FloatingGamepadButtonActionWidget");
		return ptr;
	}



	void SetupAction(struct FUIButtonAction* Action);
	void OnKeyBindingsChanged();
	UMG_ESlateVisibility GetPromptVisibility();
};

// Class FrontiersUI.GamepadButtonLegend
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UGamepadButtonLegend : public UTLUserWidget
{
public:
	class UGamepadButtonActionList*                    ActionList;                                                // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GamepadButtonLegend");
		return ptr;
	}



	class UGamepadButtonActionList* GetActionList();
};

// Class FrontiersUI.GamepadInteractButtonWidget
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class AGamepadInteractButtonWidget : public AActor
{
public:
	unsigned char                                      UnknownData_TM8X[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetComponent*                            WidgetComponent;                                           // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GamepadInteractButtonWidget");
		return ptr;
	}



};

// Class FrontiersUI.GamepadInteractButtonUIWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UGamepadInteractButtonUIWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GamepadInteractButtonUIWidget");
		return ptr;
	}



	UMG_ESlateVisibility GetWidgetVisibility();
};

// Class FrontiersUI.ModalContentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UModalContentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ModalContentInterface");
		return ptr;
	}



};

// Class FrontiersUI.GenericModalWidget
// 0x0158 (FullSize[0x0798] - InheritedSize[0x0640])
class UGenericModalWidget : public UTLUserWidget
{
public:
	struct FUIButtonAction                             SpecialAction;                                             // 0x0640(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	FrontiersUI_ERejectButtonType                      RejectButtonType;                                          // 0x0738(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBlurBackground;                                           // 0x0739(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QQ3O[0x6];                                     // 0x073A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 Content;                                                   // 0x0740(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    AcceptEvent;                                               // 0x0748(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZR00[0x10];                                    // 0x0758(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    RejectEvent;                                               // 0x0768(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VKR6[0x20];                                    // 0x0778(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GenericModalWidget");
		return ptr;
	}



	void SetRejectText(const struct FText& Text);
	class UUserWidget* SetContent(class UClass* WidgetClass, bool bFocusContent);
	void SetCloseButtonVisibility(UMG_ESlateVisibility InVisibility);
	void SetAcceptText(const struct FText& Text);
	void Reject();
	void ModalButtonEvent__DelegateSignature();
	class UTextLayoutWidget* GetTitleTextBlock();
	UMG_ESlateVisibility GetSpecialActionVisibility();
	UMG_ESlateVisibility GetRejectButtonVisibility();
	class UTextLayoutWidget* GetErrorMessageTextBlock();
	class UPanelWidget* GetContentPanel();
	class UTextLayoutWidget* GetBodyTextBlock();
	UMG_ESlateVisibility GetAcceptButtonVisibility();
	void EnableSpecialAction(const struct FText& Text);
	void DoSpecialAction();
	class UGenericModalWidget* STATIC_CreateTwoButtonModalWidget(class UObject* WorldContextObject, const struct FText& Title, const struct FText& Body, bool bShowOverLoadingScreen, FrontiersUI_ERejectButtonType RejectButtonType);
	class UGenericModalWidget* STATIC_CreateOneButtonModalWidget(class UObject* WorldContextObject, const struct FText& Title, const struct FText& Body, bool bShowOverLoadingScreen);
	class UGenericModalWidget* STATIC_CreateModalWidget(class UClass* WidgetClass, class UObject* WorldContextObject, const struct FText& Title, const struct FText& Body, bool bShowOverLoadingScreen);
	void Accept();
};

// Class FrontiersUI.GenericModalWidgetTextInput
// 0x0000 (FullSize[0x0798] - InheritedSize[0x0798])
class UGenericModalWidgetTextInput : public UGenericModalWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GenericModalWidgetTextInput");
		return ptr;
	}



	struct FString GetInputValue();
};

// Class FrontiersUI.GenericResourceWidget
// 0x0020 (FullSize[0x0850] - InheritedSize[0x0830])
class UGenericResourceWidget : public UCraftingRecipeUnitWidget
{
public:
	bool                                               bShowItemCountFromInventory;                               // 0x0830(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NEY2[0x1F];                                    // 0x0831(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GenericResourceWidget");
		return ptr;
	}



	class UWidgetSwitcher* GetSwitcher();
	class UPetIconWidget* GetMinionWidget();
	class UInventoryItemBaseWidget* GetItemWidget();
	class UItemSpawnWidget* GetItemSpawnWidget();
	class UInventoryItemCostWidget* GetItemCostWidget();
	class UFortPropIconWidget* GetFortPropWidget();
	class UCurrencyWidget* GetCurrencyWidget();
	class UCurrencyCostWidget* GetCurrencyCostWidget();
};

// Class FrontiersUI.GenericResourceWidgetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGenericResourceWidgetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GenericResourceWidgetInterface");
		return ptr;
	}



};

// Class FrontiersUI.GoldLimitWidget
// 0x0040 (FullSize[0x0680] - InheritedSize[0x0640])
class UGoldLimitWidget : public UTLUserWidget
{
public:
	float                                              NearGoldLimitPercent;                                      // 0x0640(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DefaultColor;                                              // 0x0644(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                NearGoldLimitColor;                                        // 0x0654(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                AtGoldLimitColor;                                          // 0x0664(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ST8D[0xC];                                     // 0x0674(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GoldLimitWidget");
		return ptr;
	}



	float GetPercentOfMaxGold();
	UMG_ESlateVisibility GetMaxGoldVisibility();
	struct FText GetMaxGoldLabel();
	struct FLinearColor GetGoldTextColor();
};

// Class FrontiersUI.HelpTabbedMenu
// 0x0110 (FullSize[0x0838] - InheritedSize[0x0728])
class UHelpTabbedMenu : public UTabbedMenuWidget
{
public:
	struct FUIButtonAction                             DontShowThisAgainAction;                                   // 0x0728(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FText                                       PlatformIdFormatText;                                      // 0x0820(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.HelpTabbedMenu");
		return ptr;
	}



	void ToggleSkipHelp();
	void SetSkipHelp(bool bNewValue);
	void SetPlatformId(const struct FString& PlatformId);
	void OnSkipHelpChanged(bool bSkipHelp);
	bool GetSkipHelp();
	class UTextBlock* GetHeaderText();
};

// Class FrontiersUI.ClassMechanicsTabbedMenu
// 0x0010 (FullSize[0x0658] - InheritedSize[0x0648])
class UClassMechanicsTabbedMenu : public UCarouselWidget
{
public:
	TArray<struct FGameplayTag>                        ClassesToShow;                                             // 0x0648(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ClassMechanicsTabbedMenu");
		return ptr;
	}



	class UWidgetSwitcher* GetWidgetSwitcher();
};

// Class FrontiersUI.HotkeyWidget
// 0x0058 (FullSize[0x0698] - InheritedSize[0x0640])
class UHotkeyWidget : public UTLUserWidget
{
public:
	struct FName                                       InputActionName;                                           // 0x0640(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       GamepadActionName;                                         // 0x0648(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        Hotkey;                                                    // 0x0650(0x0018) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        GamepadHotkey;                                             // 0x0668(0x0018) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FrontiersUI_ESpecialKey                            SpecialKey;                                                // 0x0680(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D22L[0x7];                                     // 0x0681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UButton*                                     BGButton;                                                  // 0x0688(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TextBlock;                                                 // 0x0690(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.HotkeyWidget");
		return ptr;
	}



	void OnKeyBindingsChanged();
	class UTextBlock* GetTextBlock();
	class UButton* GetBGButton();
};

// Class FrontiersUI.GamepadSkillGroupToggle
// 0x0000 (FullSize[0x0698] - InheritedSize[0x0698])
class UGamepadSkillGroupToggle : public UHotkeyWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GamepadSkillGroupToggle");
		return ptr;
	}



};

// Class FrontiersUI.IconConstants
// 0x0580 (FullSize[0x05A8] - InheritedSize[0x0028])
class UIconConstants : public UObject
{
public:
	class UMaterial*                                   DesaturationMaterial;                                      // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperSprite*                                DefaultTraitIcon;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UPaperSprite*>     ElementIcons;                                              // 0x0038(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UPaperSprite*>     ElementIconsRound;                                         // 0x0088(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UPaperSprite*>     ElementProcIcons;                                          // 0x00D8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      ElementCardIcons[0x50];                                    // 0x0128(0x0050) UNKNOWN PROPERTY: MapProperty
	TMap<struct FGameplayTag, class UPaperSprite*>     TargetTypeIcons;                                           // 0x0178(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UPaperSprite*>     ClassIcons;                                                // 0x01C8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UObject*>          DefaultClassPortraits;                                     // 0x0218(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UObject*>          LorePortraits;                                             // 0x0268(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UPaperSprite*>     ClassResourceIcons;                                        // 0x02B8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UObject*>          SpokeIcons;                                                // 0x0308(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FIconAsset>       QuestRewardIcons;                                          // 0x0358(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<FrontiersUI_EMapMarkerType, struct FMapMarkerIcon> MapMarkerIcons;                                            // 0x03A8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      EnchantingCategoryIcons[0x50];                             // 0x03F8(0x0050) UNKNOWN PROPERTY: MapProperty
	TMap<int, class UObject*>                          DifficultyBadgeIcons;                                      // 0x0448(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<FrontiersUI_EMapMarkerType, class UMaterialInterface*> InWorldQuestIcons;                                         // 0x0498(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DialogueIcon;                                              // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          CraftingReadyToClaimIcon;                                  // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          CraftingInProgressIcon;                                    // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   AutoGeneratedIconMaterial;                                 // 0x0500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MonsterPopulationImages[0x50];                             // 0x0508(0x0050) UNKNOWN PROPERTY: MapProperty
	unsigned char                                      BossImages[0x50];                                          // 0x0558(0x0050) UNKNOWN PROPERTY: MapProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.IconConstants");
		return ptr;
	}



};

// Class FrontiersUI.InboxEntryListWidget
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class UInboxEntryListWidget : public UListWidget
{
public:
	int                                                NumSlotsPerPage;                                           // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T7RD[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InboxEntryListWidget");
		return ptr;
	}



};

// Class FrontiersUI.InboxAttachmentWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UInboxAttachmentWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InboxAttachmentWidget");
		return ptr;
	}



	class UGenericResourceWidget* GetGenericResourceWidget();
};

// Class FrontiersUI.InboxAttachmentListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UInboxAttachmentListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InboxAttachmentListWidget");
		return ptr;
	}



};

// Class FrontiersUI.InboxEntryWidget
// 0x0060 (FullSize[0x06A0] - InheritedSize[0x0640])
class UInboxEntryWidget : public UTLUserWidget
{
public:
	struct FText                                       FromText;                                                  // 0x0640(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       BodyText;                                                  // 0x0658(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DateText;                                                  // 0x0670(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               ItemIconVisibility;                                        // 0x0688(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FECQ[0x17];                                    // 0x0689(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InboxEntryWidget");
		return ptr;
	}



	class UTLImage* GetItemIconImage();
	TArray<class UWidget*> GetHiddenWidgets();
	class UInboxAttachmentListWidget* GetAttachmentListWidget();
	void ClaimItem();
};

// Class FrontiersUI.InboxWidget
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class UInboxWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_IX14[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ContainerClass;                                            // 0x0648(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInboxEntryListWidget*                       InboxListWidget;                                           // 0x0650(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InboxWidget");
		return ptr;
	}



	void STATIC_ShowInbox(class UObject* Context);
	class UInboxEntryListWidget* GetInboxEntryList();
	class UWidget* GetFullWidget();
	class UWidget* GetEmptyWidget();
	class UWidgetSwitcher* GetEmptyFullSwitcher();
};

// Class FrontiersUI.InGameMenuWidget
// 0x15E8 (FullSize[0x1C28] - InheritedSize[0x0640])
class UInGameMenuWidget : public UTLUserWidget
{
public:
	struct FModalWidgetDefinition                      ExitToTitleConfirmationModal;                              // 0x0640(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      ExitToDesktopConfirmationModal;                            // 0x08A0(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      ExitToTitleWithFeedbackModal;                              // 0x0B00(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      ExitToDesktopWithFeedbackModal;                            // 0x0D60(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      UnlinkFirstWarningModal;                                   // 0x0FC0(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      UnlinkSecondWarningModal;                                  // 0x1220(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      UnlinkCompleteModal;                                       // 0x1480(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      UnlinkFailedModal;                                         // 0x16E0(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      FortReportModalDefinition;                                 // 0x1940(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FText                                       FortReportSuccessMessage;                                  // 0x1BA0(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      PoliciesWidgetClass;                                       // 0x1BB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<Frontiers_EStoreAvailability, struct FText>   StoreAvailabilityMessages;                                 // 0x1BC0(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FDebugTextKeyCombo>                  DebugTextKeyCombo;                                         // 0x1C10(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              DebugTextKeyComboSeconds;                                  // 0x1C20(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IGWA[0x4];                                     // 0x1C24(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InGameMenuWidget");
		return ptr;
	}



	void ShowPolicies();
	void ShowOptionsMenu();
	void ShowHelpOnHUD();
	void ShowFeedbackWidget();
	void ShowAccountModal();
	void ResetMultiplayerAccount();
	void ReportFort();
	void GoToCharacterSelect();
	UMG_ESlateVisibility GetUnlinkAccountVisibility();
	bool GetOptionsEnabled();
	class UWidget* GetFortReportButtonContainer();
	UMG_ESlateVisibility GetExitToTitleVisibility();
	UMG_ESlateVisibility GetExitToDesktopVisibility();
	class UTextBlock* GetDebugTextBlock();
	UMG_ESlateVisibility GetCinematicVisibility();
	UMG_ESlateVisibility GetChangeProfileVisibility();
	bool GetChangeProfileEnabled();
	struct FText GetCannotOpenStoreText();
	UMG_ESlateVisibility GetCannotOpenStoreMessageVisibility();
	class UListWidget* GetButtonList();
	void FeedbackCallback();
	void ExitToTitleScreen();
	void ExitToDesktop();
	void ChangeProfile();
	bool CanOpenStore();
};

// Class FrontiersUI.InstanceResetModalWidget
// 0x0030 (FullSize[0x0670] - InheritedSize[0x0640])
class UInstanceResetModalWidget : public UTLUserWidget
{
public:
	struct FText                                       ResetActionText;                                           // 0x0640(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8JBW[0x18];                                    // 0x0658(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InstanceResetModalWidget");
		return ptr;
	}



	void UpdatePartyMemberStatus();
	void ShowPartyMemberStatus();
	void ShowAfterResetConfirmation();
	bool ShouldShowPartySection();
	void SetHasDoneReset(bool inHasDoneReset);
	void SendPartyInstanceResetRequests();
	void RefreshPartyMembersList();
	void HandleInstanceResetButtonClick();
	TArray<struct FString> GetPartyMemberNamesKickedFromParty();
	class UInstanceResetPartyList* GetPartyMemberList();
	void ContinueToPartyStatus();
	void CloseHud();
	bool CanDoInstanceResetHere();
};

// Class FrontiersUI.InstanceResetPartyList
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UInstanceResetPartyList : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InstanceResetPartyList");
		return ptr;
	}



};

// Class FrontiersUI.InstanceResetPartyMember
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UInstanceResetPartyMember : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InstanceResetPartyMember");
		return ptr;
	}



	class UAllyInfoWidget* GetAllyInfoWidget();
};

// Class FrontiersUI.InventoryComparisonWidget
// 0x0068 (FullSize[0x06A8] - InheritedSize[0x0640])
class UInventoryComparisonWidget : public UTLUserWidget
{
public:
	float                                              UnsuppressTooltipMouseMovementThreshold;                   // 0x0640(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L9EU[0x4];                                     // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<FrontiersUI_EInventoryCompareType, int>       CompareTypeIndices;                                        // 0x0648(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VWZG[0x10];                                    // 0x0698(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InventoryComparisonWidget");
		return ptr;
	}



	void UnsuppressTooltips();
	class UPetDetailsWidget* GetSelectedPetDetailsWidget();
	class UInventoryItemDetailsWidget* GetSelectedItemDetailsWidget();
	class UPetDetailsWidget* GetEquippedPetDetailsWidget();
	class UInventoryItemDetailsWidget* GetEquippedItemDetailsWidget();
	class UTLWidgetSwitcher* GetComparisonSwitcher();
};

// Class FrontiersUI.InventoryItemCostWidget
// 0x0058 (FullSize[0x0888] - InheritedSize[0x0830])
class UInventoryItemCostWidget : public UCraftingRecipeUnitWidget
{
public:
	unsigned char                                      UnknownData_RY63[0x8];                                     // 0x0830(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       OwnedQuantity;                                             // 0x0838(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       RequiredQuantity;                                          // 0x0850(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QRK3[0x20];                                    // 0x0868(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InventoryItemCostWidget");
		return ptr;
	}



	class UInventoryItemBaseWidget* GetItemWidget();
};

// Class FrontiersUI.InventoryItemEquippedListWidget
// 0x0038 (FullSize[0x0288] - InheritedSize[0x0250])
class UInventoryItemEquippedListWidget : public UListWidget
{
public:
	class UClass*                                      ComparisonWidgetClass;                                     // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       SlotTagsAny;                                               // 0x0258(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bSlotSelectMode;                                           // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_83AB[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInventoryComparisonWidget*                  ComparisonWidget;                                          // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InventoryItemEquippedListWidget");
		return ptr;
	}



	void SelectSlotMode(class UInventoryItemWidget* InItemWidget);
	void ClearSelectMode();
	void BlueprintSetSelectMode(bool SelectMode);
};

// Class FrontiersUI.InventoryItemEquippedWidget
// 0x0028 (FullSize[0x0668] - InheritedSize[0x0640])
class UInventoryItemEquippedWidget : public UTLUserWidget
{
public:
	bool                                               bHasEquippedItem;                                          // 0x0640(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YM96[0x7];                                     // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SlotName;                                                  // 0x0648(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TCP3[0x8];                                     // 0x0660(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InventoryItemEquippedWidget");
		return ptr;
	}



	class UTLImage* GetSlotIconImage();
	class UWidget* GetSlotBGImage();
	class UInventoryItemBaseWidget* GetInventoryItemWidget();
};

// Class FrontiersUI.InventoryItemListWidget
// 0x0020 (FullSize[0x0270] - InheritedSize[0x0250])
class UInventoryItemListWidget : public UListWidget
{
public:
	struct FName                                       HeaderName;                                                // 0x0250(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ComparisonWidgetClass;                                     // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowEmptySlots;                                           // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CJ9I[0x3];                                     // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumSlotsPerPage;                                           // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryComparisonWidget*                  ComparisonWidget;                                          // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InventoryItemListWidget");
		return ptr;
	}



};

// Class FrontiersUI.InventoryItemPickUpWidget
// 0x0000 (FullSize[0x08A0] - InheritedSize[0x08A0])
class UInventoryItemPickUpWidget : public UInventoryItemBaseWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InventoryItemPickUpWidget");
		return ptr;
	}



	class UInventoryItemBaseWidget* GetItemIconWidget();
};

// Class FrontiersUI.InventoryItemWidget
// 0x1290 (FullSize[0x1B30] - InheritedSize[0x08A0])
class UInventoryItemWidget : public UInventoryItemBaseWidget
{
public:
	unsigned char                                      UnknownData_C8ZV[0x18];                                    // 0x08A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             SendToPetAction;                                           // 0x08B8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             SendToPlayerAction;                                        // 0x09B0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             DestroyAction;                                             // 0x0AA8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             BreakDownAction;                                           // 0x0BA0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             BeginMoveAction;                                           // 0x0C98(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             FinishMoveAction;                                          // 0x0D90(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             CancelMoveAction;                                          // 0x0E88(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             ActivateAction;                                            // 0x0F80(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             MoveByClickAction;                                         // 0x1078(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             UnequipAction;                                             // 0x1170(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             SacrificeAction;                                           // 0x1268(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             SelectAction;                                              // 0x1360(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             SellAction;                                                // 0x1458(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             UseOtherItemOnThisAction;                                  // 0x1550(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             MultiSlotEquipAction;                                      // 0x1648(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             MultiSlotSelectAction;                                     // 0x1740(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L4O7[0x8];                                     // 0x1838(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsLifeBound;                                              // 0x1840(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YT3A[0x21];                                    // 0x1841(0x0021) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bParentHandlesButtonAction;                                // 0x1862(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NFWL[0x1];                                     // 0x1863(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SuppressTooltipsDuration;                                  // 0x1864(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                                     GrabbedItemOffset;                                         // 0x1868(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         BreakDownAudioEvent;                                       // 0x1878(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         DestroyAudioEvent;                                         // 0x1890(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      LegendarySaleConfirmation;                                 // 0x18A8(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RX72[0x28];                                    // 0x1B08(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InventoryItemWidget");
		return ptr;
	}



	void UseOtherItemOnThis();
	void Use();
	void Unequip();
	void TryToEquipCosmetic();
	void SetItemVisibility(bool bShowItem);
	void SendToPetOrPlayerInventory();
	bool SellConfirm(class UGenericModalWidget* ModalWidget, struct FText* Error);
	void Sell();
	void SelectMultipleAction();
	void Sacrifice();
	void OnSold();
	void OnEquippedCosmetic();
	void MoveByClick();
	class UWidgetAnimation* GetUseAnimation();
	class UWidget* GetSelectionIndicator();
	UMG_ESlateVisibility GetNewFlagVisibility();
	class UWidget* GetModifiedOverlay();
	class UEnchantingAffixListWidget* GetEnchantingAffixListWidget();
	UMG_ESlateVisibility GetDimmerVisibility();
	void FinishMove();
	void EquipMultipleAction();
	void Equip();
	void DoSelectItemAction();
	class UInventoryItemWidget* CreateDraggableCopy();
	void ClearMultipleAction();
	void CancelMove();
	void BreakDownOrDestroy();
	void BlueprintSetSelectMode(bool SelectMode);
	void BeginMove();
};

// Class FrontiersUI.InventoryStashLoadRetryWidget
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UInventoryStashLoadRetryWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_MH6S[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InventoryStashLoadRetryWidget");
		return ptr;
	}



	bool ShouldEnableRetryButton();
	void RetryButtonClicked();
	struct FText GetRetryText();
	UMG_ESlateVisibility GetRetryButtonVisibility();
	class UTLButton* GetRetryButton();
};

// Class FrontiersUI.InventoryStashWidget
// 0x0070 (FullSize[0x0F58] - InheritedSize[0x0EE8])
class UInventoryStashWidget : public UInventoryGridWithTabsWidget
{
public:
	TWeakObjectPtr<class AActor>                       StashActor;                                                // 0x0EE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryGridWithTabsWidget*                InventoryGridWidget;                                       // 0x0EF0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5VZ3[0x60];                                    // 0x0EF8(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InventoryStashWidget");
		return ptr;
	}



	void RetryStashLoad();
	class UTLWidgetSwitcher* GetStashSwitcher();
	class UInventoryStashLoadRetryWidget* GetRetryWidget();
	class UInventoryGridWithTabsWidget* GetInventoryGridWidget();
};

// Class FrontiersUI.InventoryWidget
// 0x0278 (FullSize[0x08B8] - InheritedSize[0x0640])
class UInventoryWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_MC3Z[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             CloseAction;                                               // 0x0648(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UInventoryGridWithTabsWidget*                InventoryGridWidget;                                       // 0x0740(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryItemEquippedListWidget*            EquippedWeaponsWidget;                                     // 0x0748(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryItemEquippedListWidget*            EquippedGearWidget;                                        // 0x0750(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryItemEquippedListWidget*            PetItemsWidget;                                            // 0x0758(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerInfoWidget*                           PlayerInfoWidget;                                          // 0x0760(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             ToggleStatsAction;                                         // 0x0768(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ShowStatsText;                                             // 0x0860(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       HideStatsText;                                             // 0x0878(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<FrontiersUI_ETLWidget>                      HUDWidgetsToKeepOpen;                                      // 0x0890(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G7V6[0x18];                                    // 0x08A0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.InventoryWidget");
		return ptr;
	}



	void ToggleStatsPanel();
	class UTLUserWidget* GetStatsPanel();
	class UPlayerInfoWidget* GetPlayerInfoWidget();
	class UInventoryItemEquippedListWidget* GetPetItemsWidget();
	class UInventoryGridWithTabsWidget* GetInventoryGridWidget();
	class UInventoryItemEquippedListWidget* GetEquippedWeaponsWidget();
	class UInventoryItemEquippedListWidget* GetEquippedGearWidget();
	void BlueprintSetSelectMode(bool SelectMode);
};

// Class FrontiersUI.ItemCountListWidget
// 0x0018 (FullSize[0x0268] - InheritedSize[0x0250])
class UItemCountListWidget : public UListWidget
{
public:
	TArray<struct FItemTableRowHandle>                 ItemsToDisplay;                                            // 0x0250(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9E59[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ItemCountListWidget");
		return ptr;
	}



};

// Class FrontiersUI.ItemNameplateWidget
// 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
class UItemNameplateWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_WJOX[0x10];                                    // 0x0640(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ItemNameplateWidget");
		return ptr;
	}



	void STATIC_UpdateNameplate(class AActor* Actor);
	void STATIC_ShowNameplate(class AActor* Actor, bool bIgnoreRearrange);
	void HoverOff();
	void Hover();
	void STATIC_HideNameplate(class AActor* Actor);
	class UWidgetAnimation* GetVisibileAnimation();
	class UTLTextBlock* GetTextBlock();
};

// Class FrontiersUI.ItemSpawnWidget
// 0x0070 (FullSize[0x06C8] - InheritedSize[0x0658])
class UItemSpawnWidget : public UCraftingRecipeWidgetBase
{
public:
	unsigned char                                      UnknownData_5MPE[0x8];                                     // 0x0658(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ItemSpawnRowText;                                          // 0x0660(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       LevelWarningFormat;                                        // 0x0678(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       QuestWarningText;                                          // 0x0690(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZE1M[0x10];                                    // 0x06A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTooltipWidget*                              MyTooltipWidget;                                           // 0x06B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      TooltipWidgetClass;                                        // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ItemSpawnWidget");
		return ptr;
	}



	class UTLImage* GetIconImage();
};

// Class FrontiersUI.ItemSpawnWidgetTooltip
// 0x0000 (FullSize[0x0680] - InheritedSize[0x0680])
class UItemSpawnWidgetTooltip : public UTooltipWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ItemSpawnWidgetTooltip");
		return ptr;
	}



	class UWidget* GetWarningTextBlockWrapper();
	class UTLTextBlock* GetWarningTextBlock();
};

// Class FrontiersUI.KeyBindingsWidget
// 0x0118 (FullSize[0x0758] - InheritedSize[0x0640])
class UKeyBindingsWidget : public UTLUserWidget
{
public:
	struct FUIButtonAction                             ResetToDefaultAction;                                      // 0x0640(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FKeyBindingData>                     BindableActionData;                                        // 0x0738(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UInputComponent*                             DummyInputComponent;                                       // 0x0748(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerInput*                                DummyPlayerInput;                                          // 0x0750(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.KeyBindingsWidget");
		return ptr;
	}



	void ResetToDefault();
	class UKeyBindingListWidget* GetKeyBindingList();
};

// Class FrontiersUI.KeyBindingListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UKeyBindingListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.KeyBindingListWidget");
		return ptr;
	}



};

// Class FrontiersUI.KeyBindingEntryWidget
// 0x0290 (FullSize[0x08D0] - InheritedSize[0x0640])
class UKeyBindingEntryWidget : public UTLUserWidget
{
public:
	struct FUIButtonAction                             ChangeBinding1Action;                                      // 0x0640(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             ChangeBinding2Action;                                      // 0x0738(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      ModifyWidget;                                              // 0x0830(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       BindingName;                                               // 0x0838(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       KeyText;                                                   // 0x0850(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       KeyText2;                                                  // 0x0868(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P262[0x50];                                    // 0x0880(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.KeyBindingEntryWidget");
		return ptr;
	}



	void ChangeBinding2();
	void ChangeBinding1();
};

// Class FrontiersUI.KeyBindingModifyWidget
// 0x00A0 (FullSize[0x06E0] - InheritedSize[0x0640])
class UKeyBindingModifyWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_ROPP[0x68];                                    // 0x0640(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       KeyText;                                                   // 0x06A8(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       UnbindMessageText;                                         // 0x06C0(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NAVJ[0x8];                                     // 0x06D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.KeyBindingModifyWidget");
		return ptr;
	}



};

// Class FrontiersUI.LegendaryAffixCollectionEquippedWidget
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class ULegendaryAffixCollectionEquippedWidget : public UTLUserWidget
{
public:
	int                                                NumAffixesUnlocked;                                        // 0x0640(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HJGT[0x4];                                     // 0x0644(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LegendaryAffixCollectionEquippedWidget");
		return ptr;
	}



	void Refresh();
	bool IsInEquipModal();
	class ULegendaryAffixSlotListWidget* GetSlotListWidget();
	void BlueprintRefresh();
};

// Class FrontiersUI.LegendaryAffixCollectionEquipModal
// 0x00F8 (FullSize[0x0738] - InheritedSize[0x0640])
class ULegendaryAffixCollectionEquipModal : public UTLUserWidget
{
public:
	struct FUIButtonAction                             EquipSelectedAction;                                       // 0x0640(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LegendaryAffixCollectionEquipModal");
		return ptr;
	}



	class ULegendaryAffixCollectionEquippedWidget* GetEquippedWidget();
	class ULegendaryAffixCollectionWidget* GetCollectionWidget();
	void EquipSelected();
};

// Class FrontiersUI.LegendaryAffixCollectionItemCategoryListWidget
// 0x0090 (FullSize[0x02E0] - InheritedSize[0x0250])
class ULegendaryAffixCollectionItemCategoryListWidget : public UListWidget
{
public:
	TArray<struct FLegendaryAffixItemSubCategory>      Categories;                                                // 0x0250(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                NumAffixesInList;                                          // 0x0260(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumUnlockedAffixesInList;                                  // 0x0264(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BUP5[0x78];                                    // 0x0268(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LegendaryAffixCollectionItemCategoryListWidget");
		return ptr;
	}



};

// Class FrontiersUI.LegendaryAffixCollectionItemCategoryWidget
// 0x0038 (FullSize[0x0678] - InheritedSize[0x0640])
class ULegendaryAffixCollectionItemCategoryWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_5JY4[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ItemCategoryName;                                          // 0x0658(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                               bShowHeader;                                               // 0x0670(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1EUD[0x7];                                     // 0x0671(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LegendaryAffixCollectionItemCategoryWidget");
		return ptr;
	}



	class ULegendaryAffixCollectionItemListWidget* GetItemListWidget();
	void BlueprintRefresh();
};

// Class FrontiersUI.LegendaryAffixCollectionItemListWidget
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class ULegendaryAffixCollectionItemListWidget : public UListWidget
{
public:
	int                                                NumAffixesInList;                                          // 0x0250(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumUnlockedAffixesInList;                                  // 0x0254(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LegendaryAffixCollectionItemListWidget");
		return ptr;
	}



};

// Class FrontiersUI.LegendaryAffixCollectionItemWidget
// 0x0258 (FullSize[0x0898] - InheritedSize[0x0640])
class ULegendaryAffixCollectionItemWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_YXED[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             EquipAction;                                               // 0x0658(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             SelectAction;                                              // 0x0750(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_35SZ[0x10];                                    // 0x0848(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0858(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                               bCanBeEquippedByPlayer;                                    // 0x0870(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C5ZX[0x7];                                     // 0x0871(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ClassRequirementText;                                      // 0x0878(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	FrontiersUI_ELegendaryAffixEquippedState           EquippedState;                                             // 0x0890(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsNew;                                                    // 0x0891(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9MJJ[0x6];                                     // 0x0892(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LegendaryAffixCollectionItemWidget");
		return ptr;
	}



	void Select();
	bool IsUnlocked();
	class UInventoryItemBaseWidget* GetItemWidget();
	class UAffixListWidget* GetAffixListWidget();
	void Equip();
	void BlueprintSetup(const struct FItemData& InItemData);
};

// Class FrontiersUI.LegendaryAffixCollectionWidget
// 0x0028 (FullSize[0x0750] - InheritedSize[0x0728])
class ULegendaryAffixCollectionWidget : public UTabbedMenuWidget
{
public:
	unsigned char                                      UnknownData_9BXL[0x8];                                     // 0x0728(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CategoryTabName;                                           // 0x0730(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HMGB[0x8];                                     // 0x0748(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LegendaryAffixCollectionWidget");
		return ptr;
	}



	class UListWidget* GetAllAffixListWidget();
	class ULegendaryAffixCollectionItemCategoryListWidget* GetAffixSubCategoryListWidget();
	void BlueprintRefresh();
};

// Class FrontiersUI.LegendaryAffixSlotListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class ULegendaryAffixSlotListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LegendaryAffixSlotListWidget");
		return ptr;
	}



};

// Class FrontiersUI.LegendaryAffixSlotWidget
// 0x03D8 (FullSize[0x0A18] - InheritedSize[0x0640])
class ULegendaryAffixSlotWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_CLLO[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             SelectSlotAction;                                          // 0x0658(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TFBL[0x4];                                     // 0x0750(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsUnlocked;                                               // 0x0754(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsFilled;                                                 // 0x0755(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsPreview;                                                // 0x0756(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDuplicatesWardrobe;                                       // 0x0757(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                UnlockLevel;                                               // 0x0758(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N17A[0x4];                                     // 0x075C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemData                                   ItemData;                                                  // 0x0760(0x02B0) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6RUF[0x8];                                     // 0x0A10(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LegendaryAffixSlotWidget");
		return ptr;
	}



	void SelectSlot();
	bool IsOnEquipScreen();
	class ULegendaryAffixCollectionItemWidget* GetItemWidget();
	void BlueprintSetup();
	void BlueprintOnChanged();
};

// Class FrontiersUI.SelectableWidgetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USelectableWidgetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SelectableWidgetInterface");
		return ptr;
	}



};

// Class FrontiersUI.ListWidgetWrapperInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UListWidgetWrapperInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ListWidgetWrapperInterface");
		return ptr;
	}



};

// Class FrontiersUI.TextListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UTextListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TextListWidget");
		return ptr;
	}



};

// Class FrontiersUI.LoadingScreen
// 0x0158 (FullSize[0x03B8] - InheritedSize[0x0260])
class ULoadingScreen : public UUserWidget
{
public:
	unsigned char                                      UnknownData_BZ2A[0x50];                                    // 0x0260(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         MuteSoundsEventReference;                                  // 0x02B0(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UUserWidget*                                 BackgroundWidget;                                          // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                                 ForegroundWidget;                                          // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ISRM[0xE0];                                    // 0x02D8(0x00E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LoadingScreen");
		return ptr;
	}



	bool STATIC_ShouldShowLoadingScreen(class APlayerController* Controller);
	class UTLRichTextBlock* GetTextBlock();
	class UWidgetAnimation* GetFrontPlateFadeAnimation();
	class UWidget* GetFrontPlate();
	class UWidgetAnimation* GetFadeToGameAnimation();
	class UCanvasPanel* GetCanvasPanel();
};

// Class FrontiersUI.LorePlayerWidget
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class ULorePlayerWidget : public UTLUserWidget
{
public:
	struct FGameplayTag                                FallbackPortraitGameplayTag;                               // 0x0640(0x0008) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LorePlayerWidget");
		return ptr;
	}



	void StopPlayingLore();
	class UTLTextBlock* GetTitleTextBlock();
	class UTLImage* GetPortraitImage();
	class UWidget* GetPortraitContainer();
};

// Class FrontiersUI.MainMenuBreadcrumbWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UMainMenuBreadcrumbWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuBreadcrumbWidget");
		return ptr;
	}



	class UMainMenuBreadcrumbButtonWidget* GetHomeButton();
	class UMainMenuBreadcrumbButtonWidget* GetCurrentButton();
	class UMainMenuBreadcrumbButtonWidget* GetBackButton();
};

// Class FrontiersUI.MainMenuBreadcrumbButtonWidget
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UMainMenuBreadcrumbButtonWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_QDAS[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuBreadcrumbButtonWidget");
		return ptr;
	}



	void OnClicked();
	void BlueprintSetup(const struct FText& StateDisplayName, bool bIsActive, bool bDidChange);
};

// Class FrontiersUI.GenderButtonWidget
// 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
class UGenderButtonWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_3OJH[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_EPlayerGender                            Gender;                                                    // 0x0658(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PIMS[0x7];                                     // 0x0659(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.GenderButtonWidget");
		return ptr;
	}



	void OnClicked();
};

// Class FrontiersUI.MainMenuWidgetBase
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UMainMenuWidgetBase : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuWidgetBase");
		return ptr;
	}



};

// Class FrontiersUI.MainMenuCharacterCreateCustomizeWidget
// 0x0BC8 (FullSize[0x1208] - InheritedSize[0x0640])
class UMainMenuCharacterCreateCustomizeWidget : public UMainMenuWidgetBase
{
public:
	class UMainMenuStateCharacterCreate*               MainMenuState;                                             // 0x0640(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             RandomizeNameAction;                                       // 0x0648(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             EditNameAction;                                            // 0x0740(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             SelectMaleAction;                                          // 0x0838(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             SelectFemaleAction;                                        // 0x0930(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             SwapGenderAction;                                          // 0x0A28(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             ContinueAction;                                            // 0x0B20(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             HardcoreAction;                                            // 0x0C18(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             FocusSkillsAction;                                         // 0x0D10(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             FocusCustomizationAction;                                  // 0x0E08(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      HardcoreWarningModalDefinition;                            // 0x0F00(0x0260) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FTabbedMenuOption                           ClassInfoTabOption;                                        // 0x1160(0x0070) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	float                                              DimmedSectionOpacity;                                      // 0x11D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CFKN[0x4];                                     // 0x11D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLEditableTextBox*                          EditableTextBox;                                           // 0x11D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTabbedMenuWidget*                           ClassDescriptionTabbedMenu;                                // 0x11E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkillInTabListWidget*                       ClassSkillsList;                                           // 0x11E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0PV9[0x8];                                     // 0x11F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCustomizeSection>                   GamepadSections;                                           // 0x11F8(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuCharacterCreateCustomizeWidget");
		return ptr;
	}



	void ToggleHardcore();
	void RandomizeName();
	void OnHardcoreCheckChanged(bool bChecked);
	void OnCharacterNameChanged(const struct FText& Text);
	void GoBack();
	class UDyeListWidget* GetSkinDyeListWidget();
	class UWidget* GetSkinColorContainerWidget();
	class UScrollBox* GetScrollBox();
	UMG_ESlateVisibility GetNameValidatingVisibility();
	UMG_ESlateVisibility GetNameErrorVisibility();
	class UCustomizationItemCarouselWidget* GetHeadsWidget();
	class UWidget* GetHeadContainerWidget();
	class UTLCheckBox* GetHardcoreCheckBox();
	class UCustomizationItemCarouselWidget* GetHairsWidget();
	class UDyeListWidget* GetHairDyeListWidget();
	class UWidget* GetHairContainerWidget();
	class UWidget* GetHairColorContainerWidget();
	class UListWidget* GetGenderListWidget();
	class UWidget* GetGenderContainerWidget();
	TArray<struct FCustomizeSection> GetGamepadSections();
	class UTLTextBlock* GetDisplayNameWidget();
	class UTLTextBlock* GetDescriptionWidget();
	class USkillInTabListWidget* GetClassSkillsList();
	class UTabbedMenuWidget* GetClassDescriptionTabbedMenu();
	class UWidgetSwitcher* GetClassDescriptionSwitcher();
	class UTLEditableTextBox* GetCharacterNameTextBox();
	void FocusSkills();
	void FocusCustomization();
	void EditName();
	void ContinueToNextGamepadSection();
	bool CanContinue();
	void BlueprintUpdateClass(const struct FGameplayTag& ClassTag);
	void BlueprintSetSkillTabText(const struct FText& TabName, const struct FText& TabDescription);
};

// Class FrontiersUI.EmberWeaponOptionWidget
// 0x0028 (FullSize[0x0668] - InheritedSize[0x0640])
class UEmberWeaponOptionWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_4ETE[0x28];                                    // 0x0640(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.EmberWeaponOptionWidget");
		return ptr;
	}



	void PickEmberWeapon();
	class UTLTextBlock* GetNameText();
	class UTLImage* GetEmberWeaponImage();
};

// Class FrontiersUI.EmberWeaponOptionListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UEmberWeaponOptionListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.EmberWeaponOptionListWidget");
		return ptr;
	}



};

// Class FrontiersUI.MainMenuCharacterCreateEmberWeaponWidget
// 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
class UMainMenuCharacterCreateEmberWeaponWidget : public UMainMenuWidgetBase
{
public:
	class UMainMenuStateCharacterCreate*               State;                                                     // 0x0640(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_EMainMenuState                           MainMenuState;                                             // 0x0648(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QXW0[0x7];                                     // 0x0649(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEmberWeaponOptionListWidget*                EmberWeaponListWidget;                                     // 0x0650(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CombinedSkillTreeEmberWeaponIndex;                         // 0x0658(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9XLM[0x4];                                     // 0x065C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuCharacterCreateEmberWeaponWidget");
		return ptr;
	}



	TArray<class USkillInTabListWidget*> GetSkillTreeWidgets();
	class USkillInTabListWidget* GetSkillsList();
	class UEmberWeaponOptionListWidget* GetEmberWeaponListWidget();
	UMG_ESlateVisibility GetContinueButtonVisiblity();
	void Continue();
	void BlueprintShowSkillTrees();
	void BlueprintShowEmberWeaponDescription(const struct FText& Name, const struct FText& Description, const struct FSkillsTabData& TabData);
	void BlueprintSetupSkillTab(int TabIndex, const struct FSkillsTabData& TabData);
	void BlueprintSetupSkillHeaders(const struct FText& CharacterName);
};

// Class FrontiersUI.MainMenuCharacterCreatePickerWidget
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class UMainMenuCharacterCreatePickerWidget : public UMainMenuWidgetBase
{
public:
	unsigned char                                      UnknownData_VQMF[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuCharacterCreatePickerWidget");
		return ptr;
	}



	void ContinueToNextState();
};

// Class FrontiersUI.MainMenuCharacterCreatePickClassWidget
// 0x0008 (FullSize[0x0660] - InheritedSize[0x0658])
class UMainMenuCharacterCreatePickClassWidget : public UMainMenuCharacterCreatePickerWidget
{
public:
	class UMainMenuStateCharacterCreatePickClass*      State;                                                     // 0x0658(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuCharacterCreatePickClassWidget");
		return ptr;
	}



};

// Class FrontiersUI.MainMenuCharacterCreatePickPetWidget
// 0x0008 (FullSize[0x0660] - InheritedSize[0x0658])
class UMainMenuCharacterCreatePickPetWidget : public UMainMenuCharacterCreatePickerWidget
{
public:
	class UMainMenuStateCharacterCreatePickPet*        State;                                                     // 0x0658(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuCharacterCreatePickPetWidget");
		return ptr;
	}



};

// Class FrontiersUI.MainMenuCharacterCreateReadyToDeployWidget
// 0x0140 (FullSize[0x0780] - InheritedSize[0x0640])
class UMainMenuCharacterCreateReadyToDeployWidget : public UMainMenuWidgetBase
{
public:
	class UMainMenuStateCharacterCreate*               State;                                                     // 0x0640(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       DifficultyButtonLabel;                                     // 0x0648(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             ChangeDifficultyAction;                                    // 0x0660(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PEL0[0x10];                                    // 0x0758(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DeployCharacterButtonWaitingText;                          // 0x0768(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuCharacterCreateReadyToDeployWidget");
		return ptr;
	}



	void ReadyToDeploy();
	UMG_ESlateVisibility GetWaitingToDeployVisibility();
	class UTLTextBlock* GetGamepadDifficultyLabelTextBlock();
	class UDifficultyPanel* GetDifficultyPanel();
	class UTLTextBlock* GetDifficultyButtonLabelTextBlock();
	struct FText GetDeployCharacterButtonText();
	bool GetDeployCharacterButtonEnabled();
	void ChangeDifficulty();
	bool CanChangeDifficulty();
};

// Class FrontiersUI.MainMenuCharacterSelectWidget
// 0x10F0 (FullSize[0x1730] - InheritedSize[0x0640])
class UMainMenuCharacterSelectWidget : public UMainMenuWidgetBase
{
public:
	unsigned char                                      UnknownData_XI32[0x20];                                    // 0x0640(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMainMenuStateCharacterSelect*               CharacterSelectState;                                      // 0x0660(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       SelectedCharacterName;                                     // 0x0668(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       SelectedCharacterPetName;                                  // 0x0680(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       SelectedCharacterEmberWeaponName;                          // 0x0698(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DeleteCharacterConfirmationTitle;                          // 0x06B0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DeleteCharacterConfirmationBody;                           // 0x06C8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      OptionsMenuClass;                                          // 0x06E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             CreateCharacterAction;                                     // 0x06E8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             ChangeDifficultyAction;                                    // 0x07E0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             LinkArcAccountAction;                                      // 0x08D8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             VerifyEmailAction;                                         // 0x09D0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CXFY[0x8];                                     // 0x0AC8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FModalWidgetDefinition                      DifficultyChangeWidgetClass;                               // 0x0AD0(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LHCW[0x8];                                     // 0x0D30(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       EnterGameButtonWaitingText;                                // 0x0D38(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       InvalidCharacterVersionText;                               // 0x0D50(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       LinkAccountReadyText;                                      // 0x0D68(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       LinkAccountInProgressText;                                 // 0x0D80(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PM70[0x8];                                     // 0x0D98(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FModalWidgetDefinition                      AccountReadyModal;                                         // 0x0DA0(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      CouldntCreateShadowAccountModal;                           // 0x1000(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      RejectedTermsModal;                                        // 0x1260(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoShadowAccountModal;                                      // 0x14C0(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S2YC[0x8];                                     // 0x1720(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PoliciesWidgetClass;                                       // 0x1728(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuCharacterSelectWidget");
		return ptr;
	}



	void VerifyEmail();
	void SetDifficultyAndEnterGame(int InDifficulty);
	void LinkArcAccount();
	UMG_ESlateVisibility GetWaitingToEnterVisibility();
	class UFloatingGamepadButtonActionWidget* GetVerifyEmailButtonActionWidget();
	class UPlayerInfoWidget* GetPlayerInfoWidget();
	class UTLTextBlock* GetPlayButtonText();
	struct FText GetLinkArcAccountButtonText();
	class UAccountLinkPanel* GetLinkAccountPanel();
	UMG_ESlateVisibility GetLinkAccountButtonVisibility();
	class UFloatingGamepadButtonActionWidget* GetLinkAccountButtonActionWidget();
	UMG_ESlateVisibility GetHarvestEmailVisibility();
	struct FText GetEnterGameButtonText();
	bool GetEnterGameButtonEnabled();
	class UDifficultyPanel* GetDifficultyPanel();
	class UAccountCreatePanel* GetCreateAccountPanel();
	class UMainMenuCharacterSlotListWidget* GetCharacterSlotListWidget();
	class UTLTextBlock* GetCharacterSlotCountTextBlock();
	void EnterGame();
	void DeleteCharacter();
	void CreateCharacter();
	void ChangeDifficulty();
	bool CanLinkArcAccount();
	bool CanEnterGame();
	void BlueprintUpdateCharacterSlots(int NumCharacters, int NumSlots);
};

// Class FrontiersUI.MainMenuCharacterSlotListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UMainMenuCharacterSlotListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuCharacterSlotListWidget");
		return ptr;
	}



};

// Class FrontiersUI.MainMenuCharacterSlotWidget
// 0x03D0 (FullSize[0x0A10] - InheritedSize[0x0640])
class UMainMenuCharacterSlotWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_K5D2[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMainMenuPlayerData                         MainMenuPlayerData;                                        // 0x0658(0x0180) (NativeAccessSpecifierPublic)
	struct FUIButtonAction                             DeleteCharacterAction;                                     // 0x07D8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             SelectCharacterAction;                                     // 0x08D0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FText                                       LevelTextFormat;                                           // 0x09C8(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       PlayActionTextOnline;                                      // 0x09E0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       PlayActionTextOffline;                                     // 0x09F8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuCharacterSlotWidget");
		return ptr;
	}



	void SelectSlot();
	class UTLTextBlock* GetRelicNameWidget();
	class UWidget* GetRelicContainer();
	class UPetIconWidget* GetPetPortraitWidget();
	class UTLTextBlock* GetPetNameWidget();
	class UWidget* GetPetContainerWidget();
	class UTLTextBlock* GetLevelWidget();
	class UWidget* GetHardcoreWidget();
	class UTLTextBlock* GetDifficultyWidget();
	class UWidget* GetDeadHardcoreWidget();
	class UTLImage* GetCharacterPortraitWidget();
	class UTLTextBlock* GetCharacterNameWidget();
	class UTLTextBlock* GetCharacterClassNameWidget();
	void DoSelectBP();
	void BlueprintRefresh();
};

// Class FrontiersUI.TLBaseHUD
// 0x0110 (FullSize[0x0750] - InheritedSize[0x0640])
class UTLBaseHUD : public UTLUserWidget
{
public:
	class UMaterialParameterCollection*                UIMaterialGlobals;                                         // 0x0640(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FullscreenVideoWidget;                                     // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFullscreenVideoWidget*                      CinematicWidget;                                           // 0x0650(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FM8G[0xF8];                                    // 0x0658(0x00F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLBaseHUD");
		return ptr;
	}



	class UWidget* ToggleWidget(FrontiersUI_ETLWidget Widget);
	void ShowOptionsMenu();
	void ShowFeedbackWidget();
	class UWidget* STATIC_SetWidgetVisibilityForPlayer(class AActor* Player, FrontiersUI_ETLWidget Widget, UMG_ESlateVisibility InVisibility);
	class UWidget* SetWidgetVisibility(FrontiersUI_ETLWidget Widget, UMG_ESlateVisibility InVisibility);
	class UFullscreenVideoWidget* PlayCinematic();
	class UUserWidget* GetLoadingScreen();
	class UCanvasPanel* GetCanvasPanel();
	class UWidget* FindWidgetOfClass(class UClass* WidgetClass);
	void CloseTLWidget(FrontiersUI_ETLWidget Widget);
	bool CloseAllUIWindows();
	class UWidget* BlueprintGetWidget(FrontiersUI_ETLWidget Widget);
	class UUserWidget* AddWidgetToHUDCentered(class UClass* WidgetClass);
	class UUserWidget* AddWidgetToHUD(const struct FCanvasWidget& Widget);
};

// Class FrontiersUI.MainMenuHUD
// 0x04C0 (FullSize[0x0C10] - InheritedSize[0x0750])
class UMainMenuHUD : public UTLBaseHUD
{
public:
	struct FUIButtonAction                             ShowMenuAction;                                            // 0x0750(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             QuitGameAction;                                            // 0x0848(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      QuitConfirmationModal;                                     // 0x0940(0x0260) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FText                                       BuildInfo;                                                 // 0x0BA0(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TArray<class UTLImage*>                            LetterboxBars;                                             // 0x0BB8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UWidget*                                     LetterboxContainer;                                        // 0x0BC8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GX0Q[0x40];                                    // 0x0BD0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuHUD");
		return ptr;
	}



	void ToggleMenu();
	void QuitGame();
	void PlayFadeToBlackAnimation();
	void OnFadedToBlack();
	void GoBack();
	class UWidget* GetUIContainer();
	UMG_ESlateVisibility GetOptionsButtonVisibility();
	class UWidget* GetLetterboxContainer();
	TArray<class UTLImage*> GetLetterboxBars();
	class UMainMenuBreadcrumbWidget* GetBreadcrumbWidget();
	UMG_ESlateVisibility GetBackButtonVisibility();
	void BackgroundClicked();
};

// Class FrontiersUI.MainMenuLoginWidget
// 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
class UMainMenuLoginWidget : public UMainMenuWidgetBase
{
public:
	struct FText                                       LoginButtonWaitingText;                                    // 0x0640(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	class UMainMenuStateLogin*                         MainMenuState;                                             // 0x0658(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuLoginWidget");
		return ptr;
	}



	UMG_ESlateVisibility GetWaitingToLoginVisibility();
	struct FText GetLoginButtonText();
	bool GetLoginButtonEnabled();
};

// Class FrontiersUI.MainMenuPlatformSignOnWidget
// 0x02F0 (FullSize[0x0930] - InheritedSize[0x0640])
class UMainMenuPlatformSignOnWidget : public UMainMenuWidgetBase
{
public:
	struct FUIButtonAction                             StartAction;                                               // 0x0640(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             PlayOfflineAction;                                         // 0x0738(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             IdentifyProfileAction;                                     // 0x0830(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UMainMenuStatePlatformSignOn*                PlatformSignOnState;                                       // 0x0928(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MainMenuPlatformSignOnWidget");
		return ptr;
	}



	UMG_ESlateVisibility VisibleIfUserIsIdentified();
	UMG_ESlateVisibility VisibleIfUserCannotPlay();
	void PlayOnline();
	void PlayOffline();
	bool IsUserUnidentified();
	bool IsUserIdentified();
	void IdentifyUser();
	UMG_ESlateVisibility HiddenIfUserIsIdentified();
	class UWidget* GetPlayOfflineButton();
	class UTLTextBlock* GetOfflineComingSoonLabel();
	struct FText GetMessageText();
	class UHotkeyWidget* GetIdentifyUserWidget();
	void ExitToDesktop();
};

// Class FrontiersUI.MapMarkerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMapMarkerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MapMarkerInterface");
		return ptr;
	}



};

// Class FrontiersUI.MapMarkerListWidget
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class UMapMarkerListWidget : public UListWidget
{
public:
	class ULocalPlayerMapMarkerWidget*                 LocalPlayerMapMarker;                                      // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MapMarkerListWidget");
		return ptr;
	}



};

// Class FrontiersUI.MapMarkerWidget
// 0x00C8 (FullSize[0x0300] - InheritedSize[0x0238])
class UMapMarkerWidget : public UTLImage
{
public:
	unsigned char                                      UnknownData_CJID[0x60];                                    // 0x0238(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMapMarker                                  MarkerData;                                                // 0x0298(0x0048) (Protected, NativeAccessSpecifierProtected)
	float                                              SelectionRadius;                                           // 0x02E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   GamepadTooltipOffset;                                      // 0x02E4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   LabelOffset;                                               // 0x02EC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9YXQ[0xC];                                     // 0x02F4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MapMarkerWidget");
		return ptr;
	}



	struct FText GetLabelTextUFunction();
};

// Class FrontiersUI.LocalPlayerMapMarkerWidget
// 0x00B0 (FullSize[0x0310] - InheritedSize[0x0260])
class ULocalPlayerMapMarkerWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_E14W[0x58];                                    // 0x0260(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMapMarker                                  MarkerData;                                                // 0x02B8(0x0048) (Protected, NativeAccessSpecifierProtected)
	class UWidget*                                     ElementToTransform;                                        // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RotationOffset;                                            // 0x0308(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WANE[0x4];                                     // 0x030C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.LocalPlayerMapMarkerWidget");
		return ptr;
	}



	struct FText GetLabelTextUFunction();
	class UWidget* GetElementToTransform();
};

// Class FrontiersUI.TLRichTextBlock
// 0x00A0 (FullSize[0x0718] - InheritedSize[0x0678])
class UTLRichTextBlock : public URichTextBlock
{
public:
	class UClass*                                      StyleClass;                                                // 0x0678(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreStyleColor;                                         // 0x0680(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GWLM[0x3];                                     // 0x0681(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             BindableTextDelegate;                                      // 0x0684(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZLVD[0x4];                                     // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       BindableText;                                              // 0x0698(0x0018) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x06B0(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                Color;                                                     // 0x0708(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLRichTextBlock");
		return ptr;
	}



	void SetStyleClass(class UClass* Style);
	void SetColor(const struct FLinearColor& InColor);
};

// Class FrontiersUI.MapMarkerLabel
// 0x0000 (FullSize[0x0718] - InheritedSize[0x0718])
class UMapMarkerLabel : public UTLRichTextBlock
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MapMarkerLabel");
		return ptr;
	}



};

// Class FrontiersUI.MapPanel
// 0x0360 (FullSize[0x09A0] - InheritedSize[0x0640])
class UMapPanel : public UTLUserWidget
{
public:
	class AActor*                                      GadgetBeingUsed;                                           // 0x0640(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FrontiersUI_EMapPanelState                         FocusIndex;                                                // 0x0648(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C03A[0x7];                                     // 0x0649(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             LeftFocusAction;                                           // 0x0650(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             RightFocusAction;                                          // 0x0748(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             ToggleMapAction;                                           // 0x0840(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3V8R[0x18];                                    // 0x0938(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<FrontiersUI_EMapPanelState, struct FText>     MapPanelName;                                              // 0x0950(0x0050) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MapPanel");
		return ptr;
	}



	void ToggleMap();
	void STATIC_ShowSpokeMap(class UObject* WorldContextObject, class AActor* Gadget);
	void RightFocus();
	void OnAreaChanged(const struct FGuid& NewAreaId, const struct FName& NewAreaName);
	void LeftFocus();
	class UMapSpokeWrapper* GetSpokeWrapper();
	class UQuestLogWidget* GetQuestLog();
	bool CanUseToggleMapAction();
};

// Class FrontiersUI.MapSpokeWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UMapSpokeWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MapSpokeWidget");
		return ptr;
	}



	class UListWidget* GetNextListWidget(SlateCore_EUINavigation Direction);
	class UListWidget* GetAreaWidgetList();
};

// Class FrontiersUI.MapSpokeWrapper
// 0x0088 (FullSize[0x06C8] - InheritedSize[0x0640])
class UMapSpokeWrapper : public UTLUserWidget
{
public:
	class UMapSpokeWidget*                             CurrentMapSpokeWidget;                                     // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GoblinStopPercent;                                         // 0x0648(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GoblinScrollRate;                                          // 0x064C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              InfestedStartPercent;                                      // 0x0650(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              InfestedStopPercent;                                       // 0x0654(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              InfestedScrollRate;                                        // 0x0658(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EchonokStartPercent;                                       // 0x065C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EchonokScrollRate;                                         // 0x0660(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FYTK[0x4];                                     // 0x0664(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UMapSpokeWidget*, float>                MapSpokeOffset;                                            // 0x0668(0x0050) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UMapSpokeWidget*>                     ListOfSpokes;                                              // 0x06B8(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MapSpokeWrapper");
		return ptr;
	}



	void UpdateLabels(float CurrentOffset);
	void UpdateCompass();
	void ScrollMapOffset(float CurrentOffset);
	class UCanvasPanel* GetSpokePanelWidget();
	class UTLScrollBox* GetScrollBox();
	class UMapSidebar* GetMapSidebar();
	class UWidget* GetInfestedLabel();
	class UWidget* GetGoblinLabel();
	class UWidget* GetEchonokLabel();
	class UMapWidget* GetAreaMap();
};

// Class FrontiersUI.MapSidebar
// 0x0030 (FullSize[0x0670] - InheritedSize[0x0640])
class UMapSidebar : public UTLUserWidget
{
public:
	struct FText                                       AreaMapLabel;                                              // 0x0640(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       SpokeMapLabel;                                             // 0x0658(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MapSidebar");
		return ptr;
	}



	void UpdateCompassSwitcher();
	void HandleInstanceResetClick();
	class UListWidget* GetResetInstanceWidgetList();
	class UAreaInSpokeWidget* GetPortalWidget();
	class UAreaInSpokeWidget* GetFortWidget();
	class UListWidget* GetAreaWidgetList();
};

// Class FrontiersUI.MapIconWidgetBase
// 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
class UMapIconWidgetBase : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_FSW2[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	UMG_ESlateVisibility                               FocusedVisibility;                                         // 0x0658(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GG5Z[0x7];                                     // 0x0659(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MapIconWidgetBase");
		return ptr;
	}



};

// Class FrontiersUI.MapCompassWidget
// 0x0000 (FullSize[0x0660] - InheritedSize[0x0660])
class UMapCompassWidget : public UMapIconWidgetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MapCompassWidget");
		return ptr;
	}



	void ToggleMap();
	void PlayCompassAnimation();
	bool IsShowingAreaMap();
};

// Class FrontiersUI.AreaInSpokeWidget
// 0x0120 (FullSize[0x0780] - InheritedSize[0x0660])
class UAreaInSpokeWidget : public UMapIconWidgetBase
{
public:
	struct FUIButtonAction                             SelectAction;                                              // 0x0660(0x00F8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               YouAreHereVisibility;                                      // 0x0758(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EPlayerPortalDestinationType             Destination;                                               // 0x0759(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HKIO[0x6];                                     // 0x075A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAreaTableRowHandle                         AreaRow;                                                   // 0x0760(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	int                                                BindIndex;                                                 // 0x0770(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_902G[0xC];                                     // 0x0774(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.AreaInSpokeWidget");
		return ptr;
	}



	void UpdateBindIndex();
	class UTLImage* GetYouAreHereImage();
	class UTLImage* GetSpokeQuestIcon();
	class UTextListWidget* GetNeighborList();
	class UButton* GetButton();
	class UTLTextBlock* GetAreaNameWithLevelText();
	class UTLTextBlock* GetAreaNameText();
	class UTLUserWidget* FindMapPanelWidgetInParent();
	void ButtonClicked();
};

// Class FrontiersUI.SpokeInWorldWidget
// 0x0018 (FullSize[0x0678] - InheritedSize[0x0660])
class USpokeInWorldWidget : public UMapIconWidgetBase
{
public:
	struct FSpokeTableRowHandle                        SpokeRow;                                                  // 0x0660(0x0010) (Edit, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               YouAreHereVisibility;                                      // 0x0670(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QRS1[0x7];                                     // 0x0671(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SpokeInWorldWidget");
		return ptr;
	}



	class UTLTextBlock* GetSpokeNameText();
	void ButtonClicked();
};

// Class FrontiersUI.MapWorldWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UMapWorldWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MapWorldWidget");
		return ptr;
	}



	class UListWidget* GetSpokeList();
};

// Class FrontiersUI.MapWidget
// 0x0140 (FullSize[0x0780] - InheritedSize[0x0640])
class UMapWidget : public UTLUserWidget
{
public:
	float                                              MapMarkerWidth;                                            // 0x0640(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistanceBetweenMarkersForLabels;                        // 0x0644(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLargeMapRenderTexture;                                 // 0x0648(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowPersistentMarkerLabels;                               // 0x0649(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCenterOnOwnPlayer;                                        // 0x064A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y7RA[0x1];                                     // 0x064B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMapMarkerConstraint                        MarkerConstraint;                                          // 0x064C(0x002C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                EdgeColor;                                                 // 0x0678(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EdgeScale_Important;                                       // 0x0688(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_11Q1[0x4];                                     // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                           // 0x0690(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVirtualCursorPanel*                         VirtualCursorPanel;                                        // 0x0698(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMapMarkerListWidget*                        MarkerListWidget;                                          // 0x06A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JRR9[0xD8];                                    // 0x06A8(0x00D8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MapWidget");
		return ptr;
	}



	void RefreshMarkers();
	void RefreshMap();
	class UVirtualCursorPanel* GetVirtualCursorPanel();
	class UOverlay* GetOverlayWidget();
	class UMapMarkerListWidget* GetMarkerListWidget();
	class UImage* GetMapImageWidget();
};

// Class FrontiersUI.MessageContainerWidget
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class UMessageContainerWidget : public UTLUserWidget
{
public:
	float                                              DefaultShowDuration;                                       // 0x0640(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VQSN[0x4];                                     // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	FrontiersUI_EMessageContainerWidgetType            ActiveWidgetType;                                          // 0x0648(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2O6R[0xF];                                     // 0x0649(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MessageContainerWidget");
		return ptr;
	}



	class UPanelWidget* GetPanel();
	class UTLUserWidget* GetActiveWidget();
};

// Class FrontiersUI.MessageWidget
// 0x0098 (FullSize[0x06D8] - InheritedSize[0x0640])
class UMessageWidget : public UTLUserWidget
{
public:
	struct FSlateColor                                 MessageColor;                                              // 0x0640(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ErrorColor;                                                // 0x0668(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       Message;                                                   // 0x0690(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                                 TextColor;                                                 // 0x06A8(0x0028) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QJAI[0x8];                                     // 0x06D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MessageWidget");
		return ptr;
	}



	void STATIC_ShowMessageOfClass(class UObject* WorldContext, const struct FText& InMessage, class UClass* MessageClass, float Duration);
	void ShowMessage(const struct FText& InMessage, FrontiersUI_EUIMessageType Type, float Duration);
	void ShowColoredMessage(const struct FText& InMessage, const struct FSlateColor& InColor, float Duration);
	void HideMessage();
};

// Class FrontiersUI.MiniHelpWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UMiniHelpWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MiniHelpWidget");
		return ptr;
	}



	UMG_ESlateVisibility GetDesiredVisibility();
};

// Class FrontiersUI.TimeOfDayWidget
// 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
class UTimeOfDayWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_0KE9[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            PercentAnimation;                                          // 0x0648(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TimeOfDayWidget");
		return ptr;
	}



	class UWidgetAnimation* GetPercentAnimation();
};

// Class FrontiersUI.MiniMapWidget
// 0x00B0 (FullSize[0x06F0] - InheritedSize[0x0640])
class UMiniMapWidget : public UTLUserWidget
{
public:
	TMap<struct FName, class UWidget*>                 DifficultyBadgeMap;                                        // 0x0640(0x0050) (BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ChallengeLevelTextFormat;                                  // 0x0690(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       MonsterDamageScalingTextFormat;                            // 0x06A8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       MonsterHealthScalingTextFormat;                            // 0x06C0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       MonsterMoveSpeedScalingTextFormat;                         // 0x06D8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.MiniMapWidget");
		return ptr;
	}



	void OnDifficultyChangedByIndex(int Difficulty);
	void OnAreaChanged(const struct FGuid& NewAreaId, const struct FName& NewAreaName);
	class UTLImage* GetSpokeIconWidget();
	class UWidget* GetSpokeContainerWidget();
	class UWidget* GetMonsterScalingContainerWidget();
	class UTLTextBlock* GetMonsterMoveSpeedScalingTextWidget();
	class UTLTextBlock* GetMonsterHealthScalingTextWidget();
	class UTLTextBlock* GetMonsterDamageScalingTextWidget();
	class UWidget* GetMapWidget();
	class UTLTextBlock* GetFortNameWidget();
	class UTLTextBlock* GetDungeonDetrimentsTextWidget();
	class UWidget* GetDungeonDetrimentsContainerWidget();
	TArray<class UWidget*> GetDungeonDecorativeWidgets();
	class UTLTextBlock* GetDungeonChallengeLevelTextWidget();
	class UTLTextBlock* GetDungeonBenefitsTextWidget();
	class UWidget* GetDungeonBenefitsContainerWidget();
	class UTLRichTextBlock* GetDifficultyWidget();
	class UTLWidgetSwitcher* GetDifficultyBadgeSwitcher();
	class UWidget* GetDifficultyAndLevelContainerWidget();
	class UTLTextBlock* GetAreaNameWidget();
	class UTLTextBlock* GetAreaLevelRangeWidget();
	class UTLTextBlock* GetAffixTextWidget();
	class UWidget* GetAffixesContainerWidget();
};

// Class FrontiersUI.Nameplate
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UNameplate : public UUserWidget
{
public:
	class UClass*                                      LevelTextStyle;                                            // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DungeonLevelTextStyle;                                     // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.Nameplate");
		return ptr;
	}



	void SetupNameplate(class ATLCharacter* Character, class UWidgetComponent* WidgetComponent);
	class UTLTextBlock* GetLevelText();
	class UWidget* GetHardcoreWidget();
	TArray<class UWidget*> GetDungeonDecorativeWidgets();
	class UTLTextBlock* GetDisplayNameText();
	class UTLImage* GetDifficultyIcon();
	UMG_ESlateVisibility GetAccountNameVisibility();
	class UTLTextBlock* GetAccountNameText();
};

// Class FrontiersUI.NavigationHeader
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UNavigationHeader : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.NavigationHeader");
		return ptr;
	}



	UMG_ESlateVisibility GetRightSelectionButtonVisibility();
	UMG_ESlateVisibility GetLeftSelectionButtonVisibility();
	class UListWidget* GetButtonList();
};

// Class FrontiersUI.SocialHUDNotificationWidget
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class USocialHUDNotificationWidget : public UTLUserWidget
{
public:
	struct FText                                       NotificationCountText;                                     // 0x0640(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SocialHUDNotificationWidget");
		return ptr;
	}



	void OpenFriendsMenu();
};

// Class FrontiersUI.NotificationsWidget
// 0x0058 (FullSize[0x0698] - InheritedSize[0x0640])
class UNotificationsWidget : public UTLUserWidget
{
public:
	TMap<FrontiersUI_EUINotification, class UWidget*>  NotificationWidgets;                                       // 0x0640(0x0050) (ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2BME[0x8];                                     // 0x0690(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.NotificationsWidget");
		return ptr;
	}



	void OnNotificationMadeVisible(FrontiersUI_EUINotification Notification);
	void GoToSkills();
	void GoToLegendaryAffixCollection();
	void GoToInventory();
	void GoToContracts();
	UMG_ESlateVisibility GetUnclaimedContractRewardsVisibility();
	class UWidget* GetNotificationWidget(FrontiersUI_EUINotification Notification);
};

// Class FrontiersUI.NumberPickerWidget
// 0x0030 (FullSize[0x0670] - InheritedSize[0x0640])
class UNumberPickerWidget : public UTLUserWidget
{
public:
	float                                              Delta;                                                     // 0x0640(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccelerationPerSecond;                                     // 0x0644(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxVelocity;                                               // 0x0648(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxChars;                                                  // 0x064C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIntegersOnly;                                             // 0x0650(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SHOE[0x3];                                     // 0x0651(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Min;                                                       // 0x0654(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Max;                                                       // 0x0658(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JQT2[0x14];                                    // 0x065C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.NumberPickerWidget");
		return ptr;
	}



	void OnTextCommitted(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnTextChanged(const struct FText& Text);
	void Increment();
	int GetValueAsInt();
	float GetValue();
	class UEditableTextBox* GetTextBox();
	class UButton* GetIncrementButton();
	class UButton* GetDecrementButton();
	void EndClickAndHold();
	void Decrement();
	bool CanIncrement();
	bool CanDecrement();
	void BeginClickAndHoldIncrement();
	void BeginClickAndHoldDecrement();
};

// Class FrontiersUI.ListedObjectWidgetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UListedObjectWidgetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ListedObjectWidgetInterface");
		return ptr;
	}



	void OnDataSet(class UObject* Object);
};

// Class FrontiersUI.ObjectListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UObjectListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ObjectListWidget");
		return ptr;
	}



};

// Class FrontiersUI.OnlineStoreEntryListWidget
// 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
class UOnlineStoreEntryListWidget : public UListWidget
{
public:
	class UClass*                                      ComparisonWidgetClass;                                     // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryComparisonWidget*                  ComparisonWidget;                                          // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.OnlineStoreEntryListWidget");
		return ptr;
	}



};

// Class FrontiersUI.OnlineStoreEntryWidget
// 0x00E8 (FullSize[0x0728] - InheritedSize[0x0640])
class UOnlineStoreEntryWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_W9WC[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCatalogData                                CatalogData;                                               // 0x0658(0x00D0) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.OnlineStoreEntryWidget");
		return ptr;
	}



	void ViewItem();
	class UCatalogEntryWidget* GetCatalogEntryWidget();
};

// Class FrontiersUI.OptionsMenuWidget
// 0x0210 (FullSize[0x0850] - InheritedSize[0x0640])
class UOptionsMenuWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_296N[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOptionWidget*                               SafeZoneOptionWidget;                                      // 0x0648(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             EditKeyBindingsAction;                                     // 0x0650(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             EditVideoSettingsAction;                                   // 0x0748(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FOptionWidgetData>                   OptionWidgets;                                             // 0x0840(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.OptionsMenuWidget");
		return ptr;
	}



	UMG_ESlateVisibility GetVideoSettingsVisibility();
	class UOptionWidget* GetSafeZoneOptionWidget();
	class UOptionListWidget* GetOptionListWidget();
	UMG_ESlateVisibility GetGamepadLegendVisibility();
	void EditVideoSettings();
	void EditKeyBindings();
	bool CanEditVideoSettings();
};

// Class FrontiersUI.OptionWidget
// 0x0118 (FullSize[0x0758] - InheritedSize[0x0640])
class UOptionWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_9E9E[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             SliderAction;                                              // 0x0648(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FText                                       OptionText;                                                // 0x0740(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.OptionWidget");
		return ptr;
	}



	void ToggleCheckboxAction();
	void SetActiveOptionType(FrontiersUI_EOptionWidgetType InType);
	void PerformSliderOptionAction(float SliderValue);
	void PerformCheckboxOptionAction(bool bState);
	class UTLSlider* GetSlider();
	class UTLComboBox* GetDropdown();
	class UTLCheckBox* GetCheckbox();
};

// Class FrontiersUI.OptionListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UOptionListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.OptionListWidget");
		return ptr;
	}



};

// Class FrontiersUI.OtherPlayerMenuWidget
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class UOtherPlayerMenuWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_X8I0[0x10];                                    // 0x0640(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	UMG_ESlateVisibility                               NoNearbyPlayersVisibility;                                 // 0x0650(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               FortOwnerVisibility;                                       // 0x0651(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WQRQ[0x6];                                     // 0x0652(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.OtherPlayerMenuWidget");
		return ptr;
	}



	class UOtherPlayerListWidget* GetNearbyPlayersListWidget();
	class UOtherPlayerWidget* GetFortOwnerWidget();
};

// Class FrontiersUI.OtherPlayerListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UOtherPlayerListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.OtherPlayerListWidget");
		return ptr;
	}



};

// Class FrontiersUI.OverlayMapWidget
// 0x0000 (FullSize[0x0780] - InheritedSize[0x0780])
class UOverlayMapWidget : public UMapWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.OverlayMapWidget");
		return ptr;
	}



};

// Class FrontiersUI.OverlayMapWrapper
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UOverlayMapWrapper : public UTLUserWidget
{
public:
	class UWidget*                                     MapWidget;                                                 // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.OverlayMapWrapper");
		return ptr;
	}



	class UWidget* GetMapWidget();
};

// Class FrontiersUI.ToastWidget
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UToastWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_T33E[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ToastWidget");
		return ptr;
	}



};

// Class FrontiersUI.PartyInstanceResetToastWidget
// 0x00E8 (FullSize[0x0730] - InheritedSize[0x0648])
class UPartyInstanceResetToastWidget : public UToastWidget
{
public:
	unsigned char                                      UnknownData_2W51[0xD0];                                    // 0x0648(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       RequestToastText;                                          // 0x0718(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PartyInstanceResetToastWidget");
		return ptr;
	}



	class UTextLayoutWidget* GetBodyTextBlock();
	void DeclineRequest();
	void AcceptRequest();
};

// Class FrontiersUI.PartyInviteToastWidget
// 0x07F0 (FullSize[0x0E38] - InheritedSize[0x0648])
class UPartyInviteToastWidget : public UToastWidget
{
public:
	struct FModalWidgetDefinition                      DifficultyModalDef;                                        // 0x0648(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoInviteBlockedModalDef;                                   // 0x08A8(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      PartyAcceptConfirmation;                                   // 0x0B08(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FText                                       InviteToastText;                                           // 0x0D68(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               bCanInvite;                                                // 0x0D80(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IP2M[0xB7];                                    // 0x0D81(0x00B7) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PartyInviteToastWidget");
		return ptr;
	}



	void MuteAndDecline();
	void Invite();
	class UWidget* GetInviteButton();
	class UTextLayoutWidget* GetBodyTextBlock();
	class UWidget* GetAcceptButton();
	void DeclineInvite();
	void AcceptInvite();
};

// Class FrontiersUI.PartyMemberWidget
// 0x0A20 (FullSize[0x18D8] - InheritedSize[0x0EB8])
class UPartyMemberWidget : public UOtherPlayerWidget
{
public:
	FrontiersUI_EPartyMemberWidgetState                WidgetState;                                               // 0x0EB8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5B5N[0x7];                                     // 0x0EB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             KickAction;                                                // 0x0EC0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             LeaveAction;                                               // 0x0FB8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             AcceptInviteAction;                                        // 0x10B0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             DeclineInviteAction;                                       // 0x11A8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             ShowSocialContextMenuAction;                               // 0x12A0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             MuteAction;                                                // 0x1398(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FPartyMember                                PartyMember;                                               // 0x1490(0x00E0) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FPartyInvite                                PartyInvite;                                               // 0x1570(0x00B0) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               KickButtonVisibility;                                      // 0x1620(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               LeaveButtonVisibility;                                     // 0x1621(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               InviteByTextVisibility;                                    // 0x1622(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCanInvite;                                                // 0x1623(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FL24[0x4];                                     // 0x1624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLTextBlock*                                AreaNameTextBlock;                                         // 0x1628(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTLTextBlock*                                CharacterLevelTextBlock;                                   // 0x1630(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       AcceptText;                                                // 0x1638(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       JoinText;                                                  // 0x1650(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	int                                                PartyIndex;                                                // 0x1668(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VXMS[0x4];                                     // 0x166C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FModalWidgetDefinition                      PartyAcceptConfirmation;                                   // 0x1670(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CJ5C[0x8];                                     // 0x18D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PartyMemberWidget");
		return ptr;
	}



	void UpdateSpeakerImage(const struct FChatHandle& SpeakerChatHandle, bool bSpeaking);
	void ShowSocialContextMenu();
	void OnDataSet();
	void OnChatChannelsChanged(TArray<class UChatChannel*> Channels);
	void MuteAndDecline();
	void Kick();
	bool IsSelf();
	void InviteByText();
	class UTLImage* GetSpeakerIcon();
	class UWidget* GetPartyInviteWidget();
	struct FText GetInviterName();
	class UTLImage* GetDifficultyWidget();
	class UMenuAnchor* GetContextMenuAnchor();
	class UTLTextBlock* GetCharacterLevelTextBlock();
	class UTLTextBlock* GetAreaNameTextBlock();
	class UAllyInfoWidget* GetAllyInfoWidget();
	void DeclineInvitation();
	void AcceptInvitation();
};

// Class FrontiersUI.PartyListWidget
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class UPartyListWidget : public UListWidget
{
public:
	bool                                               bCanInvite;                                                // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowSelf;                                                 // 0x0251(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowPendingInvitations;                                   // 0x0252(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HNPS[0x5];                                     // 0x0253(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PartyListWidget");
		return ptr;
	}



};

// Class FrontiersUI.PartyWidget
// 0x0038 (FullSize[0x0678] - InheritedSize[0x0640])
class UPartyWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_1LU1[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FParty                                      Party;                                                     // 0x0648(0x0030) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PartyWidget");
		return ptr;
	}



	void ShowInviteModal();
	void LeaveParty();
	class UPartyListWidget* GetPartyMemberListWidget();
	UMG_ESlateVisibility GetLeavePartyVisibility();
	UMG_ESlateVisibility GetInviteVisibility();
};

// Class FrontiersUI.PetDetailsWidget
// 0x0C10 (FullSize[0x1250] - InheritedSize[0x0640])
class UPetDetailsWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_3QH5[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             ReleasePetAction;                                          // 0x0648(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             SwapPetAction;                                             // 0x0740(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             RandomizePetNameAction;                                    // 0x0838(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             EditPetNameAction;                                         // 0x0930(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             SendPetHomeAction;                                         // 0x0A28(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             ToggleSkillDetailsAction;                                  // 0x0B20(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bSwapActionNeedsConfirm;                                   // 0x0C18(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3IWI[0x7];                                     // 0x0C19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FModalWidgetDefinition                      ReleasePetConfirmModal;                                    // 0x0C20(0x0260) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      SwapPetConfirmModal;                                       // 0x0E80(0x0260) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FDepthOfFieldOverrideRequest                DOFSettings;                                               // 0x10E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H311[0xD4];                                    // 0x10EC(0x00D4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Description;                                               // 0x11C0(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       PetTypeDisplayName;                                        // 0x11D8(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       PetNameText;                                               // 0x11F0(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ItemTypeText;                                              // 0x1208(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       RarityText;                                                // 0x1220(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                                RarityColor;                                               // 0x1238(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               PetNameInvalidVisibility;                                  // 0x1248(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               PetNameValidatingVisibility;                               // 0x1249(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               PetNameValidVisibility;                                    // 0x124A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               DescriptionVisibility;                                     // 0x124B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               NewUnlockedSkillVisibility;                                // 0x124C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bShowPreviewPetActors;                                     // 0x124D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BKMT[0x2];                                     // 0x124E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetDetailsWidget");
		return ptr;
	}



	void ToggleSkillDetails();
	void Swap();
	void Release();
	void RandomizePetName();
	void OnSubmit();
	void OnNameTextChanged(const struct FText& Text);
	void GoBack();
	class UTLWidgetSwitcher* GetSkillDetailsSwitcher();
	class USkillDisplayListWidget* GetPetSkillSimpleList();
	class USkillDescriptionListWidget* GetPetSkillDescriptionList();
	class UTLEditableTextBox* GetPetNameField();
	class UPetIconWidget* GetPetIconWidget();
	void EditPetName();
	bool CanSwap();
	bool CanRelease();
};

// Class FrontiersUI.PetAcquiredWidget
// 0x0000 (FullSize[0x1250] - InheritedSize[0x1250])
class UPetAcquiredWidget : public UPetDetailsWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetAcquiredWidget");
		return ptr;
	}



	class UPetStoredInventoryWidget* GetPetsStoredWidget();
};

// Class FrontiersUI.PetDisplayMenuWidget
// 0x0030 (FullSize[0x0758] - InheritedSize[0x0728])
class UPetDisplayMenuWidget : public UTabbedMenuWidget
{
public:
	unsigned char                                      UnknownData_IA9Q[0x30];                                    // 0x0728(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetDisplayMenuWidget");
		return ptr;
	}



};

// Class FrontiersUI.PetStoredInventoryWidgetBase
// 0x0118 (FullSize[0x0758] - InheritedSize[0x0640])
class UPetStoredInventoryWidgetBase : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_FI8D[0x11];                                    // 0x0640(0x0011) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bCanReleaseInactivePets;                                   // 0x0651(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MNO1[0x6];                                     // 0x0652(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             SortAction;                                                // 0x0658(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4SZK[0x8];                                     // 0x0750(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetStoredInventoryWidgetBase");
		return ptr;
	}



	void UpdateSectionVisibility(bool bHasActivePets, bool bHasInactivePets);
	void SortPets();
	class UScrollBox* GetStoredPetScrollBox();
	class UTLTextBlock* GetSortText();
	class UWidgetAnimation* GetSortedAnimation();
	class UPetStoredListWidget* GetPetStoredListWidget();
	class UWidget* GetListedPets();
	class UPetStoredListWidget* GetActivePetStoredListWidget();
	class UScrollBox* GetActivePetScrollBox();
};

// Class FrontiersUI.PetDisplayInventoryWidget
// 0x0008 (FullSize[0x0760] - InheritedSize[0x0758])
class UPetDisplayInventoryWidget : public UPetStoredInventoryWidgetBase
{
public:
	unsigned char                                      UnknownData_EE1R[0x8];                                     // 0x0758(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetDisplayInventoryWidget");
		return ptr;
	}



};

// Class FrontiersUI.PetIconWidget
// 0x00F0 (FullSize[0x0748] - InheritedSize[0x0658])
class UPetIconWidget : public UCraftingRecipeWidgetBase
{
public:
	unsigned char                                      UnknownData_4KVP[0x20];                                    // 0x0658(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	UMG_ESlateVisibility                               SkillIconVisibility;                                       // 0x0678(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FQYK[0x7];                                     // 0x0679(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       PetMinionRowText;                                          // 0x0680(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UInventoryComparisonWidget*                  ComparisonWidget;                                          // 0x0698(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XC9R[0xA8];                                    // 0x06A0(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetIconWidget");
		return ptr;
	}



	class UUserWidget* UpdateComparisonWidget();
	class USkillDisplayWidget* GetSkillDisplay();
	class UTLImage* GetPetIconImage();
	class UTLBorder* GetItemIconBorder();
	class UMenuAnchor* GetComparisonMenuAnchor();
};

// Class FrontiersUI.PetInfoWidget
// 0x0058 (FullSize[0x0770] - InheritedSize[0x0718])
class UPetInfoWidget : public UAllyInfoWidget
{
public:
	class UClass*                                      InventoryContainerClass;                                   // 0x0718(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      PetClass;                                                  // 0x0720(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLocalPlayerIsOwner;                                       // 0x0728(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M0X2[0x7];                                     // 0x0729(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UProgressBar*>                        PetInventoryProgressWidgets;                               // 0x0730(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UTextBlock*                                  CountdownTextBlock;                                        // 0x0740(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FKDV[0x28];                                    // 0x0748(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetInfoWidget");
		return ptr;
	}



	void SendToTown();
	UMG_ESlateVisibility GetSendToTownVisibility();
	class UTLButton* GetSendHomeButton();
	TArray<class UProgressBar*> GetPetInventoryProgressWidgets();
	class UTextBlock* GetCountdownTextBlock();
	class UWidget* GetCountdownContainer();
	bool CanSendToTown();
	void BlueprintUpdateHealthStatus(FrontiersUI_EAllyHealthStatus InStatus);
};

// Class FrontiersUI.PetRenameWidget
// 0x0040 (FullSize[0x0680] - InheritedSize[0x0640])
class UPetRenameWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_VPW5[0x40];                                    // 0x0640(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetRenameWidget");
		return ptr;
	}



	void SetNameValid(bool bIsValid);
	void OnSubmit();
	class UTLEditableTextBox* GetPetNameField();
	class UPetIconWidget* GetPetIconWidget();
	void CheckNameValid();
};

// Class FrontiersUI.PetShoppingListModal
// 0x0088 (FullSize[0x0820] - InheritedSize[0x0798])
class UPetShoppingListModal : public UGenericModalWidget
{
public:
	struct FText                                       NothingToDoActionText;                                     // 0x0798(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       BuyPotionActionText;                                       // 0x07B0(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       SellItemsActionText;                                       // 0x07C8(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       SellAndBuyActionText;                                      // 0x07E0(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BGMR[0x28];                                    // 0x07F8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetShoppingListModal");
		return ptr;
	}



	void PurchaseCountChanged();
	class UPetShoppingEntryListWidget* GetShoppingEntryListWidget();
	class UGenericResourceWidget* GetGoldCostWidget();
	class UTLButton* GetFetchButton();
};

// Class FrontiersUI.PetShoppingEntryListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UPetShoppingEntryListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetShoppingEntryListWidget");
		return ptr;
	}



};

// Class FrontiersUI.PetShoppingEntryCounterWidget
// 0x0230 (FullSize[0x0870] - InheritedSize[0x0640])
class UPetShoppingEntryCounterWidget : public UTLUserWidget
{
public:
	struct FUIButtonAction                             IncrementCountAction;                                      // 0x0640(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             DecrementCountAction;                                      // 0x0738(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PM8Q[0x40];                                    // 0x0830(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetShoppingEntryCounterWidget");
		return ptr;
	}



	void IncrementRequestedPurchaseCount();
	class UTLTextBlock* GetPurchaseCountTextBlock();
	class UTLTextBlock* GetMaxAvailableTextBlock();
	class UTLButton* GetIncrementButton();
	class UTLButton* GetDecrementButton();
	class UCatalogEntryWidget* GetCatalogEntryWidget();
	void DecrementRequestedPurchaseCount();
};

// Class FrontiersUI.PetStoredInventoryWidget
// 0x0298 (FullSize[0x09F0] - InheritedSize[0x0758])
class UPetStoredInventoryWidget : public UPetStoredInventoryWidgetBase
{
public:
	UMG_ESlateVisibility                               InventoryFullVisibility;                                   // 0x0758(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EWQ9[0x7];                                     // 0x0759(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FModalWidgetDefinition                      ReleasePetConfirmModal;                                    // 0x0760(0x0260) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YF89[0x8];                                     // 0x09C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       StorageSizeText;                                           // 0x09C8(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BDL2[0x10];                                    // 0x09E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetStoredInventoryWidget");
		return ptr;
	}



	void GoBack();
	class UTLWidgetSwitcher* GetSwitcher();
	class UPetDetailsWidget* GetDetailsWidget();
	void BlueprintSetIsFull(bool bIsFull);
};

// Class FrontiersUI.PetStoredListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UPetStoredListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetStoredListWidget");
		return ptr;
	}



};

// Class FrontiersUI.PetStoredMenuWidget
// 0x0018 (FullSize[0x0740] - InheritedSize[0x0728])
class UPetStoredMenuWidget : public UTabbedMenuWidget
{
public:
	unsigned char                                      UnknownData_41T5[0x8];                                     // 0x0728(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	UMG_ESlateVisibility                               InventoryFullVisibility;                                   // 0x0730(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_INPL[0x3];                                     // 0x0731(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDepthOfFieldOverrideRequest                DepthOfFieldSettings;                                      // 0x0734(0x000C) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetStoredMenuWidget");
		return ptr;
	}



};

// Class FrontiersUI.PetStoredWidget
// 0x02C8 (FullSize[0x0908] - InheritedSize[0x0640])
class UPetStoredWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_KD6P[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             FocusPetAction;                                            // 0x0658(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUIButtonAction                             ReleasePetAction;                                          // 0x0750(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      RenameWidget;                                              // 0x0848(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FRWB[0xB8];                                    // 0x0850(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PetStoredWidget");
		return ptr;
	}



	void TryToReleasePet();
	void PlayChangedAnimation();
	class UWidget* GetReleaseButtonWidget();
	class UTLTextBlock* GetRarityTextBlock();
	class UTLTextBlock* GetPetTypeTextBlock();
	class USkillDisplayListWidget* GetPetSkillList();
	class UTLTextBlock* GetPetName();
	class UPetIconWidget* GetPetIconWidget();
	void Focus();
	bool CanReleasePet();
};

// Class FrontiersUI.PlaceNameMessageWidget
// 0x0010 (FullSize[0x06E8] - InheritedSize[0x06D8])
class UPlaceNameMessageWidget : public UMessageWidget
{
public:
	float                                              PlaceScreenDuration;                                       // 0x06D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RAPD[0xC];                                     // 0x06DC(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PlaceNameMessageWidget");
		return ptr;
	}



	void ShowText(const struct FText& Text);
	void OnAreaChanged(const struct FGuid& NewAreaGuid, const struct FName& NewAreaName);
};

// Class FrontiersUI.PlatformText
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UPlatformText : public UDataAsset
{
public:
	struct FText                                       PlatformFullName;                                          // 0x0030(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       PlatformShortName;                                         // 0x0048(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       FriendsTitle;                                              // 0x0060(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PlatformText");
		return ptr;
	}



};

// Class FrontiersUI.PlayerInfoWidget
// 0x0048 (FullSize[0x0688] - InheritedSize[0x0640])
class UPlayerInfoWidget : public UTLUserWidget
{
public:
	struct FText                                       EmberWeaponFormatText;                                     // 0x0640(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       EnergyNameText;                                            // 0x0658(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DamageOverTimeFormat;                                      // 0x0670(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PlayerInfoWidget");
		return ptr;
	}



	class UWidget* GetHardcoreWidget();
	class UTraitTextBlock* GetEnergyRegenBlock();
	class UTraitTextBlock* GetEnergyMaxBlock();
	class UWidget* GetEmberWeaponWrapper();
	class UTLTextBlock* GetEmberWeaponTextBlock();
	class UTLImage* GetEmberWeaponImage();
	class UTLTextBlock* GetElementalDefenseTextBlock();
	class UTLTextBlock* GetDPSTextBlock();
	class UTLTextBlock* GetDifficultyTextBlock();
	class UTLImage* GetDifficultyIcon();
	class UTLTextBlock* GetDefenseTextBlock();
	class UTLImage* GetDefenseElement();
	class UTLTextBlock* GetDamageOverTimeTextBlock();
	class UTLTextBlock* GetCharacterNameTextBlock();
	struct FText GetCharacterLevelText();
	class UWidget* GetChangeDifficultyButton();
	class UTLTextBlock* GetAverageItemLevelTextBlock();
};

// Class FrontiersUI.PlayerNotificationWidget
// 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
class UPlayerNotificationWidget : public UTLUserWidget
{
public:
	struct FText                                       NotificationText;                                          // 0x0640(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	float                                              ShowDuration;                                              // 0x0658(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SortValue;                                                 // 0x065C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PlayerNotificationWidget");
		return ptr;
	}



	class UTLImage* GetPortraitImage();
};

// Class FrontiersUI.SkillWidgetBase
// 0x0030 (FullSize[0x0670] - InheritedSize[0x0640])
class USkillWidgetBase : public UTLUserWidget
{
public:
	class UMenuAnchor*                                 DescriptionAnchor;                                         // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DescriptionWidgetClass;                                    // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bShowRequirementsOnDescription;                            // 0x0650(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7KMP[0x7];                                     // 0x0651(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkillDescriptionWidget*                     DescriptionWidget;                                         // 0x0658(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8BP7[0x8];                                     // 0x0660(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DescriptionDelay;                                          // 0x0668(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_590X[0x4];                                     // 0x066C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillWidgetBase");
		return ptr;
	}



	class UUserWidget* UpdateDescriptionWidget();
	void ShowDelayedGamepadDescription();
	void GetSkillIcon();
	class UAsyncImage* GetIconImage();
	class UMenuAnchor* GetDescriptionAnchor();
};

// Class FrontiersUI.SkillWidget
// 0x0078 (FullSize[0x06E8] - InheritedSize[0x0670])
class USkillWidget : public USkillWidgetBase
{
public:
	Frontiers_ESkillSlot                               SkillSlot;                                                 // 0x0670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ESkillSet                                SkillSet;                                                  // 0x0671(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FEUP[0x2];                                     // 0x0672(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       InputActionName;                                           // 0x0674(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       GamepadActionName;                                         // 0x067C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bShowCanCastStates;                                        // 0x0684(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bInvertCooldownPercent;                                    // 0x0685(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHideInInvalidAreas;                                       // 0x0686(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOnlyShowForGamepad;                                       // 0x0687(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDontShowForGamepad;                                       // 0x0688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L4NR[0x3];                                     // 0x0689(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                DisabledGamepadSkillSlotGroupColor;                        // 0x068C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q9Q1[0x4];                                     // 0x069C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkillHotkey*                                SkillHotkey;                                               // 0x06A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     CannotUseSkillOverlay;                                     // 0x06A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     DisabledByHotkeyOverlay;                                   // 0x06B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkillActiveWidget*                          SkillActiveDisplay;                                        // 0x06B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6FOA[0x28];                                    // 0x06C0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillWidget");
		return ptr;
	}



	void OnSkillCooldown(float Duration);
	void OnChargesActiveTraitChanged(class UActiveTrait* InActiveTrait);
	class USkillHotkey* GetSkillHotkey();
	class USkillActiveWidget* GetSkillActiveWidget();
	class UWidget* GetDisabledByHotkeyOverlay();
	class UWidget* GetCannotUseSkillOverlay();
};

// Class FrontiersUI.PotionWidget
// 0x0030 (FullSize[0x0718] - InheritedSize[0x06E8])
class UPotionWidget : public USkillWidget
{
public:
	unsigned char                                      UnknownData_0RRD[0x10];                                    // 0x06E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            UsePotionAnimation;                                        // 0x06F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            UseLastPotionAnimation;                                    // 0x0700(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  NumPotionsText;                                            // 0x0708(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BYGR[0x8];                                     // 0x0710(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PotionWidget");
		return ptr;
	}



	void SetProgressBarColor(class UClass* Potion);
	class UWidgetAnimation* GetUsePotionAnimation();
	class UWidgetAnimation* GetUseLastPotionAnimation();
	class UTextBlock* GetNumPotionsText();
};

// Class FrontiersUI.QuestWidget
// 0x0090 (FullSize[0x06D0] - InheritedSize[0x0640])
class UQuestWidget : public UTLUserWidget
{
public:
	class UClass*                                      StoryQuestStyle;                                           // 0x0640(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      MainQuestStyle;                                            // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      SideQuestStyle;                                            // 0x0650(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ContractQuestStyle;                                        // 0x0658(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CompletedQuestStyle;                                       // 0x0660(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      TurnInQuestStyle;                                          // 0x0668(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DefaultStyle;                                              // 0x0670(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsComplete;                                               // 0x0678(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bTurnInTaskActive;                                         // 0x0679(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bNotifyCompletion;                                         // 0x067A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bKeepCompletedTasks;                                       // 0x067B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FQF2[0x44];                                    // 0x067C(0x0044) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      QuestDescriptionClass;                                     // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UQuestDetailsWidget*                         DescriptionWidget;                                         // 0x06C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.QuestWidget");
		return ptr;
	}



	void TogglePinned();
	void SetPinnedTint(bool bIsPinned);
	void PlayPinnedAnimation();
	class UTLImage* GetSpokeIcon();
	class UTLRichTextBlock* GetQuestTitleBlock();
	class UQuestTaskListWidget* GetQuestTaskList();
	class UWidgetAnimation* GetFailedAnimation();
	class UWidgetAnimation* GetCompletionAnimation();
	void BlueprintSetData();
};

// Class FrontiersUI.QuestDetailsWidget
// 0x0000 (FullSize[0x06D0] - InheritedSize[0x06D0])
class UQuestDetailsWidget : public UQuestWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.QuestDetailsWidget");
		return ptr;
	}



	class UWidget* GetRewardPrefixWidget();
	class UQuestRewardListWidget* GetRewardListWidget();
	class UTLRichTextBlock* GetQuestName();
};

// Class FrontiersUI.QuestDialogueWidget
// 0x0320 (FullSize[0x0968] - InheritedSize[0x0648])
class UQuestDialogueWidget : public UCarouselWidget
{
public:
	unsigned char                                      UnknownData_ZPVQ[0x18];                                    // 0x0648(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsRewardDialog;                                           // 0x0660(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9WK3[0x1];                                     // 0x0661(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsInventoryFull;                                          // 0x0662(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NOPD[0x5];                                     // 0x0663(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FModalWidgetDefinition                      FameQuestAbandonConfirmation;                              // 0x0668(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DialogueBody;                                              // 0x08C8(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DialogueHeader;                                            // 0x08E0(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DialogueButtonText;                                        // 0x08F8(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ChooseButtonText;                                          // 0x0910(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       RewardButtonText;                                          // 0x0928(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       InventoryFullText;                                         // 0x0940(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      RewardWidgetClass;                                         // 0x0958(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ChoiceWidgetClass;                                         // 0x0960(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.QuestDialogueWidget");
		return ptr;
	}



	void RemoveCurrentDialogue();
	void OpenRewardContainer();
	class UWidget* GetRewardPrefixWidget();
	class UQuestRewardListWidget* GetRewardListWidget();
	class UQuestRewardListWidget* GetRewardChoiceWidget();
	class UWidget* GetRewardButton();
	class UTLImage* GetQuestIcon();
	class UWidget* GetQuestButton();
	class UWidget* GetInteractiveSectionWidget();
	class UWidgetSwitcher* GetButtonSwitcher();
	void ConfirmQuestDialogue();
	bool CanAcceptRewards();
	void AcceptRewards();
};

// Class FrontiersUI.QuestListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UQuestListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.QuestListWidget");
		return ptr;
	}



};

// Class FrontiersUI.QuestLogWidgetBase
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UQuestLogWidgetBase : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.QuestLogWidgetBase");
		return ptr;
	}



	class UWidget* GetTutorialQuestsWrapper();
	class UQuestListWidget* GetTutorialQuestsWidget();
	class UWidget* GetStoryQuestsWrapper();
	class UQuestListWidget* GetStoryQuestsWidget();
	class UScrollBox* GetQuestScrollBox();
	class UWidget* GetAdventureQuestsWrapper();
	class UQuestListWidget* GetAdventureQuestsWidget();
};

// Class FrontiersUI.QuestLogWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UQuestLogWidget : public UQuestLogWidgetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.QuestLogWidget");
		return ptr;
	}



	class UListWidget* GetNextListWidget(SlateCore_EUINavigation Direction, class UListWidget* CurrentListWidget);
};

// Class FrontiersUI.QuestRewardListWidget
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class UQuestRewardListWidget : public UListWidget
{
public:
	int                                                MaxEntries;                                                // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LFU3[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.QuestRewardListWidget");
		return ptr;
	}



};

// Class FrontiersUI.QuestRewardWidget
// 0x0008 (FullSize[0x07A0] - InheritedSize[0x0798])
class UQuestRewardWidget : public UGenericModalWidget
{
public:
	unsigned char                                      UnknownData_8V2H[0x8];                                     // 0x0798(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.QuestRewardWidget");
		return ptr;
	}



	void UpdateSelectedUI(bool bCanSelect, bool bIsSelected);
	void PropagateChosenReward();
	class UGenericResourceWidget* GetGenericResourceWidget();
};

// Class FrontiersUI.QuestTaskListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UQuestTaskListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.QuestTaskListWidget");
		return ptr;
	}



};

// Class FrontiersUI.QuestTaskWidget
// 0x0060 (FullSize[0x06A0] - InheritedSize[0x0640])
class UQuestTaskWidget : public UTLUserWidget
{
public:
	bool                                               bShouldShowProgress;                                       // 0x0640(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_610D[0x1F];                                    // 0x0641(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsComplete;                                               // 0x0660(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_09BR[0x3];                                     // 0x0661(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                CompletedColor;                                            // 0x0664(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                RegularColor;                                              // 0x0674(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ShowProgressDuration;                                      // 0x0684(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTLRichTextBlock*                            TaskTextBlock;                                             // 0x0688(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VM5W[0x10];                                    // 0x0690(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.QuestTaskWidget");
		return ptr;
	}



	class UTLRichTextBlock* GetTaskTextBlock();
	class UWidgetAnimation* GetShowProgressAnimation();
};

// Class FrontiersUI.QuestTrackerWidget
// 0x0108 (FullSize[0x0748] - InheritedSize[0x0640])
class UQuestTrackerWidget : public UQuestLogWidgetBase
{
public:
	bool                                               bHideWhenEmpty;                                            // 0x0640(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EEZJ[0x3];                                     // 0x0641(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              QuestCompleteTime;                                         // 0x0644(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              QuestFailedTime;                                           // 0x0648(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MinutesUntilFameExpirationToShowTimeout;                   // 0x064C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BESE[0xF8];                                    // 0x0650(0x00F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.QuestTrackerWidget");
		return ptr;
	}



	class UPanelWidget* GetTrackerOverlay();
	class UWidgetAnimation* GetQuestFailedAnimation();
	class UWidgetAnimation* GetQuestCompletedAnimation();
	class UWidget* GetNothingPinnedWidget();
	void BlueprintSetupQuestsOverMaxLabel(int MaxQuests, int NumOverMax);
};

// Class FrontiersUI.RadialListItemInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URadialListItemInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.RadialListItemInterface");
		return ptr;
	}



};

// Class FrontiersUI.RadialListWidget
// 0x0030 (FullSize[0x0280] - InheritedSize[0x0250])
class URadialListWidget : public UListWidget
{
public:
	struct FVector2D                                   EllipseSize;                                               // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FixedSlotCount;                                            // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFixedLayout;                                              // 0x025C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8JOP[0x3];                                     // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartingAngleDegrees;                                      // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelectionWedgeStartingAngleDegrees;                        // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnalogStickDeadzone;                                       // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WT6T[0x14];                                    // 0x026C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.RadialListWidget");
		return ptr;
	}



	void SetSelectionWedge(class UWidget* WedgeWidget);
};

// Class FrontiersUI.RecipesWidget
// 0x0040 (FullSize[0x0680] - InheritedSize[0x0640])
class URecipesWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_8OC9[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCraftingQueueWidget*                        QueueWidget;                                               // 0x0648(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCraftingRecipeWidget*                       SelectedRecipeWidget;                                      // 0x0650(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCraftingRecipeDetailWidget*                 DetailsWidget;                                             // 0x0658(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FrontiersUI_EBackgroundBehavior                    ListBackgroundBehavor;                                     // 0x0660(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FrontiersUI_EBackgroundBehavior                    DetailsBackgroundBehavor;                                  // 0x0661(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J8Z3[0x12];                                    // 0x0662(0x0012) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDepthOfFieldOverrideRequest                DepthOfFieldSettings;                                      // 0x0674(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.RecipesWidget");
		return ptr;
	}



	void OnRecipeWidgetSelected(class UWidget* Widget);
	class UCraftingRecipeDetailWidget* GetDetailsWidget();
	class UCraftingQueueWidget* GetCraftingQueueWidget();
};

// Class FrontiersUI.SkillAssignWidget
// 0x0020 (FullSize[0x0690] - InheritedSize[0x0670])
class USkillAssignWidget : public USkillWidgetBase
{
public:
	unsigned char                                      UnknownData_5SGY[0x20];                                    // 0x0670(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillAssignWidget");
		return ptr;
	}



	UMG_ESlateVisibility GetSelectionHighlightVisibility();
	void Assign();
};

// Class FrontiersUI.SkillAssignListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class USkillAssignListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillAssignListWidget");
		return ptr;
	}



};

// Class FrontiersUI.SkillDescriptionWidget
// 0x00A0 (FullSize[0x06E0] - InheritedSize[0x0640])
class USkillDescriptionWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_5VGT[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ActiveSkillText;                                           // 0x0648(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       PassiveSkillText;                                          // 0x0660(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       EnergyCostFormat;                                          // 0x0678(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       CooldownFormat;                                            // 0x0690(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class USkill*                                      Skill;                                                     // 0x06A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HPGY[0x8];                                     // 0x06B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SkillPointCost;                                            // 0x06B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsInRegretMode;                                           // 0x06BC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3CXP[0x23];                                    // 0x06BD(0x0023) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillDescriptionWidget");
		return ptr;
	}



	void UpdateWidget();
	bool HasRequiredSkillPoints();
	TArray<class USkillTierBonusWidget*> GetTierBonusWidgets();
	class UTLRichTextBlock* GetSkillTagTextWidget();
	int GetSkillPoints();
	Frontiers_ESkillLevelState GetSkillLevelState();
	class USkillDisplayWidget* GetSkillDisplayWidget();
	struct FText GetSkillDescription();
	Frontiers_ESkillAssignedState GetSkillAssignedState();
	Frontiers_ESkillSlot GetSelectedSlot();
	class UWidget* GetRequirementsWidget();
	class UTLTextBlock* GetRequiredLevelWidget();
	class UTLTextBlock* GetNextLevelTextWidget();
	class UTLTextBlock* GetMaxLevelTextWidget();
	class USkillLevelBonusListWidget* GetLevelBonusListWidget();
	class UTLTextBlock* GetEnergyCostText();
	class UTLTextBlock* GetCurrentLevelTextWidget();
	class UTLTextBlock* GetCooldownText();
	class UTLTextBlock* GetBonusLevelsTextWidget();
	class UTLTextBlock* GetActivePassiveText();
};

// Class FrontiersUI.SkillDescriptionListWidget
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class USkillDescriptionListWidget : public UListWidget
{
public:
	bool                                               bShowRequirements;                                         // 0x0250(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4EAO[0x7];                                     // 0x0251(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillDescriptionListWidget");
		return ptr;
	}



};

// Class FrontiersUI.SkillTierBonusWidget
// 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
class USkillTierBonusWidget : public UUserWidget
{
public:
	struct FLinearColor                                TitleColor;                                                // 0x0260(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                TitleColorLocked;                                          // 0x0270(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                DescriptionColor;                                          // 0x0280(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                DescriptionColorLocked;                                    // 0x0290(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillTierBonusWidget");
		return ptr;
	}



	class UTLTextBlock* GetTitleTextBlock();
	class UTLTextBlock* GetPointsRemainingTextBlock();
	class UTLImage* GetLockImage();
	class UTLTextBlock* GetDescriptionTextBlock();
};

// Class FrontiersUI.SkillLevelBonusWidget
// 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
class USkillLevelBonusWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillLevelBonusWidget");
		return ptr;
	}



	class UWidget* GetZebraStripeBackground();
	class UTLTextBlock* GetNextBonusNumberTextWidget();
	class UTLTextBlock* GetBonusNumberTextWidget();
	class UTLTextBlock* GetBonusDescriptionWidget();
};

// Class FrontiersUI.SkillLevelBonusListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class USkillLevelBonusListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillLevelBonusListWidget");
		return ptr;
	}



};

// Class FrontiersUI.SkillLevelBonusWrapper
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class USkillLevelBonusWrapper : public UTLUserWidget
{
public:
	bool                                               bSkillIsUnlocked;                                          // 0x0640(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MVCE[0x7];                                     // 0x0641(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillLevelBonusWrapper");
		return ptr;
	}



	void UpdateSkillLockedSwitcher();
	class UTLTextBlock* GetSkillLevelText();
	class USkillLevelBonusListWidget* GetBonusList();
};

// Class FrontiersUI.SkillLevelBonusListListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class USkillLevelBonusListListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillLevelBonusListListWidget");
		return ptr;
	}



};

// Class FrontiersUI.SkillDisplayWidget
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class USkillDisplayWidget : public UTLUserWidget
{
public:
	struct FText                                       SkillNameText;                                             // 0x0640(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillDisplayWidget");
		return ptr;
	}



	class UTLImage* GetIconImage();
};

// Class FrontiersUI.SkillDisplayListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class USkillDisplayListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillDisplayListWidget");
		return ptr;
	}



};

// Class FrontiersUI.SkillActiveWidget
// 0x0038 (FullSize[0x0678] - InheritedSize[0x0640])
class USkillActiveWidget : public UTLUserWidget
{
public:
	class UProgressBar*                                CooldownProgress;                                          // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  CooldownTextBlock;                                         // 0x0648(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     OffCooldownWidget;                                         // 0x0650(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     OnCooldownWidget;                                          // 0x0658(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9BHF[0x18];                                    // 0x0660(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillActiveWidget");
		return ptr;
	}



	class USkillDisplayWidget* GetSkillDisplay();
	class UWidget* GetOnCooldownWidget();
	class UWidget* GetOffCooldownWidget();
	class UWidgetAnimation* GetOffCooldownAnimation();
	class UWidget* GetDisabledWidget();
	class UTextBlock* GetCooldownTextBlock();
	class UProgressBar* GetCooldownProgress();
	class UPanelWidget* GetChargesWidget();
};

// Class FrontiersUI.SkillHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USkillHelpers : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillHelpers");
		return ptr;
	}



	void STATIC_OnUnstuckComplete(class ATLCharacter* PlayerCharacter);
	float STATIC_GetSkillLevelBonusTraitByIndex(class AActor* Actor, const struct FSkillsTableRowHandle& SkillRowHandle, int Index);
};

// Class FrontiersUI.SkillInTabListWidget
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class USkillInTabListWidget : public UListWidget
{
public:
	unsigned char                                      UnknownData_X4X1[0x4];                                     // 0x0250(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumGridRows;                                               // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillInTabListWidget");
		return ptr;
	}



};

// Class FrontiersUI.SkillInTabWidget
// 0x0818 (FullSize[0x0E88] - InheritedSize[0x0670])
class USkillInTabWidget : public USkillWidgetBase
{
public:
	unsigned char                                      UnknownData_6ADY[0x28];                                    // 0x0670(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             BuySkillLevelAction;                                       // 0x0698(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             UnlockSkillAction;                                         // 0x0790(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             RegretSkillAction;                                         // 0x0888(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                                LockedColor;                                               // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      UnlockModalConfirmation;                                   // 0x0990(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      UpgradeModalConfirmation;                                  // 0x0BF0(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                               bRequireUpgradeConfirmation;                               // 0x0E50(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_688S[0x7];                                     // 0x0E51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkill*                                      SkillCDO;                                                  // 0x0E58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       SkillNameText;                                             // 0x0E60(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               EmberWeaponActiveVisibility;                               // 0x0E78(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               PetSkillLockedVisibility;                                  // 0x0E79(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EU78[0xE];                                     // 0x0E7A(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillInTabWidget");
		return ptr;
	}



	void UpdateStatus(bool bSuccess, const struct FName& SkillName, int SkillLevel);
	void UnlockSkill();
	void RegretSkill();
	class UProgressBar* GetUpgradeProgressBar();
	class UWidget* GetUpgradeContainer();
	class UWidget* GetUpgradeButton();
	class UWidget* GetUnlockUpgradeWrapper();
	class UWidget* GetUnlockButton();
	class UWidgetAnimation* GetUnlockAnimation();
	TArray<class UWidget*> GetTierFilledWidgets();
	class USkillLevelTextBlock* GetSkillLevelText();
	class USkillHotkey* GetSkillHotkey();
	class UWidget* GetSelectedBorder();
	class UWidgetAnimation* GetSelectAnimation();
	class UWidget* GetRegretButton();
	class UWidgetAnimation* GetRegretAnimation();
	class UWidget* GetLockWidget();
	class UWidget* GetLevelWidget();
	class UWidget* GetLevelUpgradeBackground();
	class UWidgetAnimation* GetDeselectAnimation();
	class UWidgetAnimation* GetBuyAnimation();
	void BuySkill();
};

// Class FrontiersUI.SkillListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class USkillListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillListWidget");
		return ptr;
	}



};

// Class FrontiersUI.SkillListAssignmentWidget
// 0x0050 (FullSize[0x0690] - InheritedSize[0x0640])
class USkillListAssignmentWidget : public UTLUserWidget
{
public:
	Frontiers_ESkillSet                                SkillSet;                                                  // 0x0640(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B6S8[0x7];                                     // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SkillListTitleText;                                        // 0x0648(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             GetNextListBinding;                                        // 0x0660(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	TArray<Frontiers_ESkillSlot>                       SkillSlots;                                                // 0x0670(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<Frontiers_ESkillSlot>                       SkillSlotsGamepad;                                         // 0x0680(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillListAssignmentWidget");
		return ptr;
	}



	class USkillListWidget* GetSkillSlotListWidget();
};

// Class FrontiersUI.SkillPurchaseConfirmationModalContent
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class USkillPurchaseConfirmationModalContent : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillPurchaseConfirmationModalContent");
		return ptr;
	}



	class USkillInTabWidget* GetSkillWidget();
};

// Class FrontiersUI.SkillSlotPickerWidget
// 0x0060 (FullSize[0x0748] - InheritedSize[0x06E8])
class USkillSlotPickerWidget : public USkillWidget
{
public:
	unsigned char                                      UnknownData_WTAP[0x18];                                    // 0x06E8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                VisibilityColor;                                           // 0x0700(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DraggableWidgetClass;                                      // 0x0710(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      SlotDescriptionWidgetClass;                                // 0x0718(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTooltipWidget*                              SlotDescriptionWidget;                                     // 0x0720(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       SlotLockedText;                                            // 0x0728(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	int                                                SlotUnlockLevel;                                           // 0x0740(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KLW1[0x4];                                     // 0x0744(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillSlotPickerWidget");
		return ptr;
	}



	void StartAssign();
	bool IsSkillSlotUnlocked();
	struct FText GetSkillName();
	struct FText GetSkillCategory();
	UMG_ESlateVisibility GetSelectionHighlightVisibility();
	UMG_ESlateVisibility GetLockedSkillVisibility();
	class UWidgetAnimation* GetAssignAnimation();
};

// Class FrontiersUI.SkillsMenuWidget
// 0x04F8 (FullSize[0x0B38] - InheritedSize[0x0640])
class USkillsMenuWidget : public UTLUserWidget
{
public:
	class UPlayerInfoWidget*                           PlayerInfoWidget;                                          // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             CloseAction;                                               // 0x0648(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             RespecAction;                                              // 0x0740(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             ShowInfoAction;                                            // 0x0838(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             HideInfoAction;                                            // 0x0930(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      RespecModalClass;                                          // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       RespecSkillsModalTitle;                                    // 0x0A30(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FText                                       RespecSkillsModalBody;                                     // 0x0A48(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class USkillInTabListWidget*                       SkillInTabList;                                            // 0x0A60(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ESkillTabType                            SkillTabType;                                              // 0x0A68(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R575[0x7];                                     // 0x0A69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSkillsTabTableRowHandle                    DefaultRelicSkillTab;                                      // 0x0A70(0x0010) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	int                                                FirstClassTabIndex;                                        // 0x0A80(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SecondClassTabIndex;                                       // 0x0A84(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                EmberWeaponTabIndex;                                       // 0x0A88(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                AvailablePointsColor;                                      // 0x0A8C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefaultMaxEmberWeaponPoints;                               // 0x0A9C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<Frontiers_ESkillTabType>                    SkillTabsWithMoreInfo;                                     // 0x0AA0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FName, class UUserWidget*>             DescriptionWidgets;                                        // 0x0AB0(0x0050) (ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6DIC[0x1C];                                    // 0x0B00(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsInfoVisible;                                            // 0x0B1C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_631N[0x3];                                     // 0x0B1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTabbedMenuWidget*                           SkillTabMenu;                                              // 0x0B20(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDepthOfFieldOverrideRequest                EmberWeaponDepthOfFieldSettings;                           // 0x0B28(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FW5L[0x4];                                     // 0x0B34(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillsMenuWidget");
		return ptr;
	}



	void ShowInfo();
	void SetupSkillRegretMode();
	void SetSlotListToFocus();
	void RespecSkills();
	void PreviousCategory();
	void OnWardrobeItemsChange(TArray<struct FItemReplicatedData> Items);
	void OnSkillTabChanged(const struct FTabbedMenuOption& Option, int Index);
	void NextCategory();
	void HideInfo();
	class UWidget* GetWidgetInSwitcherBySkillTabType(Frontiers_ESkillTabType TabType);
	class UTLTextBlock* GetTotalSkillPointsText();
	class UProgressBar* GetTotalSkillPointsProgressBar();
	TArray<class USkillTabTierWidget*> GetTabTierWidgets();
	class UWidgetSwitcher* GetTabSwitcher();
	class USkillsTabbedMenuWidget* GetSkillTabMenu();
	class USkillInTabListWidget* GetSkillTabList();
	class UTLImage* GetSkillTabBackground();
	class UWidgetSwitcher* GetSkillSlotListSwitcher();
	struct FText GetSkillPointsText();
	class UProgressBar* GetSkillPointsTabProgressBar(int Index);
	class UTLTextBlock* GetSkillPointsSecondTabText();
	class UTLTextBlock* GetSkillPointsSecondTabNameText();
	class UTLImage* GetSkillPointsSecondImage();
	class UTLTextBlock* GetSkillPointsFirstTabText();
	class UTLTextBlock* GetSkillPointsFirstTabNameText();
	class UTLImage* GetSkillPointsFirstImage();
	class UTLTextBlock* GetSkillPointsEmberWeaponTabText();
	class UTLTextBlock* GetSkillPointsEmberWeaponTabNameText();
	class UTLImage* GetSkillPointsEmberWeaponImage();
	class UTLTextBlock* GetSkillPointsAvailableText();
	class UWidget* GetSkillLegendWrapper();
	class UTextBlock* GetSkillCategoryTextBlock();
	class USkillAssignListWidget* GetSkillAssignList();
	class UWidget* GetSkillAssignContainer();
	class UWidget* GetRespecButton();
	class UPlayerInfoWidget* GetPlayerInfoWidget();
	class ULegendaryAffixCollectionEquippedWidget* GetLegendaryAffixCollectionWidget();
	class UPanelWidget* GetDescriptionWidgetPanel();
	class UTextBlock* GetCategoryNameTextBlock();
	bool CanToggleInfo();
	void CancelAssign();
	void BlueprintUpdateCurrentTab();
	void BlueprintSetupSkillRegretMode();
	void BlueprintSetInfoVisibility(bool bIsVisible);
};

// Class FrontiersUI.SkillsRespecModal
// 0x00F8 (FullSize[0x0890] - InheritedSize[0x0798])
class USkillsRespecModal : public UGenericModalWidget
{
public:
	struct FUIButtonAction                             SkipResetAction;                                           // 0x0798(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillsRespecModal");
		return ptr;
	}



	void RejectRespecSkills();
};

// Class FrontiersUI.SkillsTabbedMenuWidget
// 0x0000 (FullSize[0x0728] - InheritedSize[0x0728])
class USkillsTabbedMenuWidget : public UTabbedMenuWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillsTabbedMenuWidget");
		return ptr;
	}



	UMG_ESlateVisibility GetSkillAlertVisibility();
	UMG_ESlateVisibility GetLegendaryCollectionAlertVisibility();
};

// Class FrontiersUI.SkillTabTierWidget
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class USkillTabTierWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_71HY[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        LevelRequiredForTier;                                      // 0x0648(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillTabTierWidget");
		return ptr;
	}



	void BlueprintRefresh(bool bIsNewTab, int TierIndex, bool bIsUnlocked, int LevelsGainedInTier, int LevelForTab, int LevelsRequiredForPreviousTier, int LevelsRequiredForCurrentTier);
};

// Class FrontiersUI.SkillHotkey
// 0x0008 (FullSize[0x06A0] - InheritedSize[0x0698])
class USkillHotkey : public UHotkeyWidget
{
public:
	Frontiers_ESkillSlot                               SkillSlot;                                                 // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NLDQ[0x7];                                     // 0x0699(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillHotkey");
		return ptr;
	}



	void SetSkillSlot(Frontiers_ESkillSlot InSkillSlot);
	void PlayCooldownPulseAnimation();
	void HideCooldownPulseIndicator();
};

// Class FrontiersUI.SocialContextMenuWidget
// 0x0388 (FullSize[0x1240] - InheritedSize[0x0EB8])
class USocialContextMenuWidget : public UOtherPlayerWidget
{
public:
	struct FString                                     SelectedChatMessage;                                       // 0x0EB8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FListedButton                               InviteToPartyButton;                                       // 0x0EC8(0x0040) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FListedButton                               ViewProfileButton;                                         // 0x0F08(0x0040) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FListedButton                               WhisperButton;                                             // 0x0F48(0x0040) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FListedButton                               ReportAbuseButton;                                         // 0x0F88(0x0040) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ReportAbuseMessage;                                        // 0x0FC8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      ChatReportWidgetDefinition;                                // 0x0FE0(0x0260) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SocialContextMenuWidget");
		return ptr;
	}



	void ReportAbuse();
	class UTLTextBlock* GetLevelTextBox();
	class UTLImage* GetDifficultyWidget();
	class UButtonListWidget* GetButtonList();
};

// Class FrontiersUI.SocialContextWidgetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USocialContextWidgetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SocialContextWidgetInterface");
		return ptr;
	}



	void Whisper();
	void SendFriendRequest();
	void RejectFriendRequest();
	void Invite();
	void AcceptFriendRequest();
};

// Class FrontiersUI.SocialMenuWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class USocialMenuWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SocialMenuWidget");
		return ptr;
	}



	class UTabbedMenuWidget* GetSocialTabs();
	class UWidgetSwitcher* GetSocialPanelSwitcher();
	class UPartyWidget* GetPartyWidget();
	class UOtherPlayerMenuWidget* GetOtherPlayersWidget();
	class UListWidget* GetNextListWidget(class UListWidget* CurrentListWidget, SlateCore_EUINavigation Direction);
	class UFriendsWidget* GetFriendsWidget();
	class UListWidget* GetActiveSwitcherListWidget();
};

// Class FrontiersUI.SpokeLevelWidget
// 0x0010 (FullSize[0x0720] - InheritedSize[0x0710])
class USpokeLevelWidget : public UXPBarWidget
{
public:
	struct FSpokeTableRowHandle                        SpokeOverride;                                             // 0x0710(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SpokeLevelWidget");
		return ptr;
	}



	UMG_ESlateVisibility GetWidgetVisibility();
	float GetExperiencePercent();
};

// Class FrontiersUI.SpringArmWidgetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USpringArmWidgetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SpringArmWidgetInterface");
		return ptr;
	}



};

// Class FrontiersUI.StatRowListWidget
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class UStatRowListWidget : public UListWidget
{
public:
	Frontiers_EWeaponSlot                              TraitMode;                                                 // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WC6O[0x7];                                     // 0x0251(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StatRowListWidget");
		return ptr;
	}



	bool IsEmpty();
};

// Class FrontiersUI.StatDamageRowListWidget
// 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
class UStatDamageRowListWidget : public UStatRowListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StatDamageRowListWidget");
		return ptr;
	}



};

// Class FrontiersUI.StatCategoryListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UStatCategoryListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StatCategoryListWidget");
		return ptr;
	}



};

// Class FrontiersUI.StatCategoryWidget
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class UStatCategoryWidget : public UTLUserWidget
{
public:
	struct FText                                       CategoryText;                                              // 0x0640(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StatCategoryWidget");
		return ptr;
	}



	class UStatRowListWidget* GetStatRowList();
};

// Class FrontiersUI.StatRowWidget
// 0x0030 (FullSize[0x0670] - InheritedSize[0x0640])
class UStatRowWidget : public UTLUserWidget
{
public:
	struct FTraitKey                                   TraitKey;                                                  // 0x0640(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       LabelText;                                                 // 0x0648(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GHUS[0x10];                                    // 0x0660(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StatRowWidget");
		return ptr;
	}



	class UTraitTextBlock* GetTraitTextBlock();
	class UTraitTextBlock* GetSecondTraitTextBlock();
	class UImage* GetIconImage();
};

// Class FrontiersUI.StatDamageRowWidget
// 0x0018 (FullSize[0x0688] - InheritedSize[0x0670])
class UStatDamageRowWidget : public UStatRowWidget
{
public:
	struct FText                                       DamageValueText;                                           // 0x0670(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StatDamageRowWidget");
		return ptr;
	}



	class UDamageTraitTextBlock* GetDamageTextBlock();
};

// Class FrontiersUI.StatSheetPanel
// 0x0048 (FullSize[0x0688] - InheritedSize[0x0640])
class UStatSheetPanel : public UTLUserWidget
{
public:
	UMG_ESlateVisibility                               CannonStatVisibility;                                      // 0x0640(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               SkillTraitsVisibility;                                     // 0x0641(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               MiscTraitsVisibility;                                      // 0x0642(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               AttackMiscTraitsVisibility;                                // 0x0643(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               DefenseMiscTraitsVisibility;                               // 0x0644(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               CannonMiscTraitsVisibility;                                // 0x0645(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               PetAnyAttackVisibility;                                    // 0x0646(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               PetAttackTraitsVisibility;                                 // 0x0647(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               PetAttackTypeTraitsVisibility;                             // 0x0648(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               PetAnyDefenseVisibility;                                   // 0x0649(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               PetDefenseTraitsVisibility;                                // 0x064A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               PetDefenseTypeTraitsVisibility;                            // 0x064B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               PetMiscTraitsVisibility;                                   // 0x064C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               PetSkillTraitsVisibility;                                  // 0x064D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L1J6[0x2];                                     // 0x064E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TotalDamagePerSwing;                                       // 0x0650(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       TotalDamageOverTimePerSwing;                               // 0x0668(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q6C6[0x8];                                     // 0x0680(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StatSheetPanel");
		return ptr;
	}



	class UStatCategoryListWidget* GetSkillTraitsList();
	class UStatCategoryListWidget* GetPetSkillTraitsList();
	class UStatRowListWidget* GetPetMiscTraitsList();
	class UStatRowListWidget* GetPetDefenseTypeTraitsList();
	class UStatRowListWidget* GetPetDefenseTraitsList();
	class UStatDamageRowListWidget* GetPetAttackTypeTraitsList();
	class UStatRowListWidget* GetPetAttackTraitsList();
	class UStatRowListWidget* GetMiscTraitsList();
	class UStatDamageRowListWidget* GetMainHandAttackTypeList();
	class UStatRowListWidget* GetDefenseTypeList();
	class UStatRowListWidget* GetDefenseMiscTraitsList();
	struct FText GetCharacterName();
	class UStatRowListWidget* GetCannonMiscTraitsList();
	class UStatDamageRowListWidget* GetCannonAttackTypeList();
	class UStatRowListWidget* GetAttackMiscTraitsList();
	void BlueprintOnCharacterChanged(class ATLCharacter* Character);
};

// Class FrontiersUI.StatusEffectBar
// 0x0038 (FullSize[0x0678] - InheritedSize[0x0640])
class UStatusEffectBar : public UTLUserWidget
{
public:
	bool                                               bIsPlayerCharacter;                                        // 0x0640(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZEVA[0xF];                                     // 0x0641(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       StatusEffectFilterAny;                                     // 0x0650(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                              IndentAmount;                                              // 0x0670(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U1QL[0x4];                                     // 0x0674(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StatusEffectBar");
		return ptr;
	}



	void UpdateStatusEffects();
	void SetTargetActor(class AActor* Target);
	class UStatusEffectListWidget* GetStatusEffectListWidget();
};

// Class FrontiersUI.StatusEffectListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UStatusEffectListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StatusEffectListWidget");
		return ptr;
	}



};

// Class FrontiersUI.StatusEffectToolipWidget
// 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
class UStatusEffectToolipWidget : public UTLUserWidget
{
public:
	TWeakObjectPtr<class UStatusEffect>                StatusEffect;                                              // 0x0640(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                       TargetActor;                                               // 0x0648(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StatusEffectToolipWidget");
		return ptr;
	}



	struct FText GetStatusEffectName();
	struct FText GetStatusEffectDescription();
};

// Class FrontiersUI.StatusEffectWidget
// 0x0040 (FullSize[0x0680] - InheritedSize[0x0640])
class UStatusEffectWidget : public UTLUserWidget
{
public:
	class UTextBlock*                                  StackCountTextBlock;                                       // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  CountdownTextBlock;                                        // 0x0648(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStatusEffect*                               StatusEffectCDO;                                           // 0x0650(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      TargetActor;                                               // 0x0658(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EarliestStartTime;                                         // 0x0660(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LatestExpireTime;                                          // 0x0664(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               CountdownVisibility;                                       // 0x0668(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2Y0H[0x7];                                     // 0x0669(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      TooltipWidgetClass;                                        // 0x0670(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C30B[0x8];                                     // 0x0678(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StatusEffectWidget");
		return ptr;
	}



	class UWidget* GetTooltipWidget();
	float GetStatusEffectProportionRemaining();
	struct FText GetStatusEffectName();
	struct FText GetStatusEffectDescription();
	class UTextBlock* GetStackCountTextBlock();
	class UTLImage* GetIconImage();
	class UTextBlock* GetCountdownTextBlock();
};

// Class FrontiersUI.StoreCelebrationWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UStoreCelebrationWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StoreCelebrationWidget");
		return ptr;
	}



	class UCraftingProductListWidget* GetProductList();
};

// Class FrontiersUI.PurchaseConfirmationWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UPurchaseConfirmationWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.PurchaseConfirmationWidget");
		return ptr;
	}



	class UOnlineStoreEntryListWidget* GetStoreEntryList();
};

// Class FrontiersUI.StoreDetailsWidget
// 0x00E0 (FullSize[0x0AA0] - InheritedSize[0x09C0])
class UStoreDetailsWidget : public UCraftingRecipeDetailWidget
{
public:
	struct FCatalogData                                CatalogData;                                               // 0x09C0(0x00D0) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PG4S[0xC];                                     // 0x0A90(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bShow3DPreview;                                            // 0x0A9C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WMLC[0x3];                                     // 0x0A9D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StoreDetailsWidget");
		return ptr;
	}



	UMG_ESlateVisibility GetShimVisible();
	class UWidget* GetQuantityLockedWidget();
	class UWidget* GetPurchaseSelectionWidget();
	class UTLTextBlock* GetPurchaseButtonText();
	class UWidgetSwitcher* GetPurchaseAvailabilitySwitcher();
};

// Class FrontiersUI.StoreGridListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UStoreGridListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StoreGridListWidget");
		return ptr;
	}



};

// Class FrontiersUI.StoreGridWidget
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class UStoreGridWidget : public UTLUserWidget
{
public:
	class UOnlineStoreEntryListWidget*                 EntryListWidget;                                           // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WU7T[0x10];                                    // 0x0648(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StoreGridWidget");
		return ptr;
	}



	struct FText GetTimeText();
	UMG_ESlateVisibility GetTimeDisplay();
	class UWidget* GetNoItemsWidget();
	class UListWidget* GetNextSlotList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection);
	class UOnlineStoreEntryListWidget* GetEntryListWidget();
};

// Class FrontiersUI.StoreListWidget
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UStoreListWidget : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StoreListWidget");
		return ptr;
	}



};

// Class FrontiersUI.StoreWidget
// 0x0050 (FullSize[0x0778] - InheritedSize[0x0728])
class UStoreWidget : public UTabbedMenuWidget
{
public:
	unsigned char                                      UnknownData_PPM3[0x8];                                     // 0x0728(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FStoreCategory>                      Categories;                                                // 0x0730(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IKYH[0x18];                                    // 0x0740(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDepthOfFieldOverrideRequest                DepthOfFieldSettings;                                      // 0x0758(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VGTH[0x4];                                     // 0x0764(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      VendorActor;                                               // 0x0768(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L270[0x8];                                     // 0x0770(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.StoreWidget");
		return ptr;
	}



	void UpdateCatalog(TArray<struct FCatalogData> InCatalog);
	class UStoreGridListWidget* GetStoreGridListWidget();
	class UWidget* GetSellPanel();
	class UWidgetSwitcher* GetMainPanelSwitcher();
	class UStoreDetailsWidget* GetItemDetailsWidget();
	class UInventoryGridWithTabsWidget* GetInventoryWidget();
	class UCurrencyWidget* GetCurrencyWidget();
};

// Class FrontiersUI.OnlineStoreWidget
// 0x0008 (FullSize[0x0780] - InheritedSize[0x0778])
class UOnlineStoreWidget : public UStoreWidget
{
public:
	unsigned char                                      UnknownData_NDW3[0x8];                                     // 0x0778(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.OnlineStoreWidget");
		return ptr;
	}



	void STATIC_OpenExternalPurchaseWindow();
	void STATIC_OnUnpromptedChargeUp(class AActor* Context);
};

// Class FrontiersUI.VendorStoreWidget
// 0x0018 (FullSize[0x0790] - InheritedSize[0x0778])
class UVendorStoreWidget : public UStoreWidget
{
public:
	struct FText                                       StoreTabName;                                              // 0x0778(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.VendorStoreWidget");
		return ptr;
	}



	void SetStoreName(const struct FText& StoreName);
	class UInventoryGridWithTabsWidget* GetInventoryGridWidget();
	class UWidgetSwitcher* GetCategoryWidgetSwitcher();
	class UTabbedMenuWidget* GetCategoryTabbedMenuWidget();
	class UTLTextBlock* GetCategoryHeaderText();
	class UBuybackItemListWidget* GetBuybackListWidget();
};

// Class FrontiersUI.TabbedMenuButton
// 0x00D0 (FullSize[0x0710] - InheritedSize[0x0640])
class UTabbedMenuButton : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_2FKA[0x18];                                    // 0x0640(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTabbedMenuOption                           MenuOption;                                                // 0x0658(0x0070) (BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	FrontiersUI_EAlertWidgetType                       CurrentAlert;                                              // 0x06C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V9HC[0x27];                                    // 0x06C9(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCanvasPanel*                                CanvasPanel;                                               // 0x06F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTabbedMenuWidget*                           TabbedMenu;                                                // 0x06F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UUserWidget*>                         CurrentWidgets;                                            // 0x0700(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TabbedMenuButton");
		return ptr;
	}



	void ShowMenu();
	void ShowAlert(UMG_ESlateVisibility AlertVisibility, const struct FText& AlertText);
	void ReopenMenu();
	void OnMenuWidgetClosed();
	void OnDataSet();
	UMG_ESlateVisibility GetSelectionVisibility();
	UMG_ESlateVisibility GetNotSelectedVisibility();
	UMG_ESlateVisibility GetNativeAlertVisibility();
	struct FText GetNativeAlertText();
	class UPanelWidget* GetAlertPanel();
	void CloseWidgets();
};

// Class FrontiersUI.TabbedMenuButtonList
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UTabbedMenuButtonList : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TabbedMenuButtonList");
		return ptr;
	}



};

// Class FrontiersUI.HPBarFragment
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UHPBarFragment : public UUserWidget
{
public:
	unsigned char                                      UnknownData_OCVP[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.HPBarFragment");
		return ptr;
	}



	void Setup(float FromPercent, float ToPercent);
	void MatchProgressBar(class UProgressBar* InProgressBar);
	class USizeBox* GetSizeBox();
	class UProgressBar* GetProgressBar();
};

// Class FrontiersUI.TextInputWidget
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UTextInputWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_LQOJ[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TextInputWidget");
		return ptr;
	}



	void OnMessageTextCommitted(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitType);
	struct FString GetInputValue();
	class UWidget* GetEditableText();
};

// Class FrontiersUI.TLBorder
// 0x0028 (FullSize[0x0298] - InheritedSize[0x0270])
class UTLBorder : public UBorder
{
public:
	class UMaterial*                                   Material;                                                  // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StyleClass;                                                // 0x0278(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnorePaddingFromStyle;                                   // 0x0280(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FMZ0[0xF];                                     // 0x0281(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     ImageAsset;                                                // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLBorder");
		return ptr;
	}



	void SetStyleClass(class UClass* InStyleClass);
};

// Class FrontiersUI.TLBorderHighlightable
// 0x0038 (FullSize[0x02D0] - InheritedSize[0x0298])
class UTLBorderHighlightable : public UTLBorder
{
public:
	class UClass*                                      FocusedStyleClass;                                         // 0x0298(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SelectedStyleClass;                                        // 0x02A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FocusedAndSelectedStyleClass;                              // 0x02A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGamepadOnly;                                              // 0x02B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowAsFocusedWhenHovered;                                 // 0x02B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CXVW[0x1E];                                    // 0x02B2(0x001E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLBorderHighlightable");
		return ptr;
	}



};

// Class FrontiersUI.TLBorderStyle
// 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
class UTLBorderStyle : public UObject
{
public:
	class UMaterial*                                   Material;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyBrushFromStyle;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E7PR[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 BackgroundBrush;                                           // 0x0038(0x0088) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                                BrushColor;                                                // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyPaddingFromStyle;                                    // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EZUU[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x00D4(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bApplyOuterPaddingFromStyle;                               // 0x00E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GMNW[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     OuterPadding;                                              // 0x00E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLBorderStyle");
		return ptr;
	}



};

// Class FrontiersUI.TLButton
// 0x00C8 (FullSize[0x04F0] - InheritedSize[0x0428])
class UTLButton : public UButton
{
public:
	class UClass*                                      StyleClass;                                                // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   Material;                                                  // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyMaterialWhenDisabled;                                // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N10W[0x7];                                     // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MaterialTextureParameterName;                              // 0x0440(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<FrontiersUI_EUIAudioSlot, struct FFMODEventReference> AudioMap;                                                  // 0x0450(0x0050) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JN49[0x50];                                    // 0x04A0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLButton");
		return ptr;
	}



	void SetStyleClass(class UClass* InStyleClass);
	void SetMaterial(class UMaterial* InMaterial);
	void PlayReleasedSound();
	void PlayPressedSound();
	void PlayAudioEvent(FrontiersUI_EUIAudioSlot FMODSlot);
};

// Class FrontiersUI.TLStyle
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UTLStyle : public UObject
{
public:
	TMap<FrontiersUI_EUIAudioSlot, struct FFMODEventReference> AudioEvents;                                               // 0x0028(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLStyle");
		return ptr;
	}



	void PlayAudioEvent(FrontiersUI_EUIAudioSlot FMODSlot);
};

// Class FrontiersUI.TLButtonStyle
// 0x0298 (FullSize[0x0310] - InheritedSize[0x0078])
class UTLButtonStyle : public UTLStyle
{
public:
	struct FButtonStyle                                ButtonStyle;                                               // 0x0078(0x0278) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x02F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x0300(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLButtonStyle");
		return ptr;
	}



};

// Class FrontiersUI.TLCheckBoxStyle
// 0x0580 (FullSize[0x05F8] - InheritedSize[0x0078])
class UTLCheckBoxStyle : public UTLStyle
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                             // 0x0078(0x0580) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLCheckBoxStyle");
		return ptr;
	}



};

// Class FrontiersUI.TLCheckBox
// 0x0008 (FullSize[0x0778] - InheritedSize[0x0770])
class UTLCheckBox : public UCheckBox
{
public:
	class UClass*                                      StyleClass;                                                // 0x0770(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLCheckBox");
		return ptr;
	}



	void OnCheckboxTicked(bool InState);
};

// Class FrontiersUI.TLComboBoxStyle
// 0x0BB8 (FullSize[0x0C30] - InheritedSize[0x0078])
class UTLComboBoxStyle : public UTLStyle
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                             // 0x0078(0x03F0) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FTableRowStyle                              ItemStyle;                                                 // 0x0468(0x07C8) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLComboBoxStyle");
		return ptr;
	}



};

// Class FrontiersUI.TLComboBoxItemWidget
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class UTLComboBoxItemWidget : public UTLUserWidget
{
public:
	struct FText                                       DisplayText;                                               // 0x0640(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLComboBoxItemWidget");
		return ptr;
	}



};

// Class FrontiersUI.TLComboBox
// 0x0088 (FullSize[0x0E88] - InheritedSize[0x0E00])
class UTLComboBox : public UComboBoxString
{
public:
	class UClass*                                      StyleClass;                                                // 0x0E00(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ComboBoxItemClass;                                         // 0x0E08(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9CR5[0x78];                                    // 0x0E10(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLComboBox");
		return ptr;
	}



	void OnSelectionChanged_Internal(const struct FString& inString, TEnumAsByte<SlateCore_ESelectInfo> InSelectInfo);
	class UWidget* MakeComboBoxItemWidget(const struct FString& inString);
};

// Class FrontiersUI.TLCustomCursor
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UTLCustomCursor : public UUserWidget
{
public:
	class UImage*                                      Image;                                                     // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLCustomCursor");
		return ptr;
	}



	class UImage* GetImage();
};

// Class FrontiersUI.TLDebugPanel
// 0x0038 (FullSize[0x0678] - InheritedSize[0x0640])
class UTLDebugPanel : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_ACJH[0x38];                                    // 0x0640(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLDebugPanel");
		return ptr;
	}



	struct FText GetZoneId();
	struct FText GetWorldTimestamp();
	struct FText GetSessionID();
	struct FText GetRegion();
	struct FText GetPlayerLocation();
	UMG_ESlateVisibility GetPlayerDungeonVisibility();
	struct FText GetPlayerDungeonInfo();
	UMG_ESlateVisibility GetPlatformVisibility();
	struct FText GetPlatformName();
	struct FText GetPlatformId();
	struct FText GetPing();
	struct FText GetOfflineMode();
	struct FText GetLevelInstanceName();
	struct FText GetLanguage();
	struct FText GetHardcoreStatus();
	struct FText GetFrameRate();
	struct FText GetDRLGSeedNumber();
	struct FText GetDifficulty();
	struct FText GetConnectionStatus();
	struct FText GetCharacterName();
	struct FText GetCharacterLevel();
	struct FText GetCharacterID();
	struct FText GetBuildAndEnvironment();
	struct FText GetAreaLevelRange();
	UMG_ESlateVisibility GetAreaDungeonVisibility();
	struct FText GetAreaDungeonInfo();
	struct FText GetAreaDataName();
	struct FText GetAreaCameraYaw();
	struct FText GetAccountNickname();
	struct FText GetAccountID();
};

// Class FrontiersUI.TLDPIScalingRule
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTLDPIScalingRule : public UDPICustomScalingRule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLDPIScalingRule");
		return ptr;
	}



};

// Class FrontiersUI.TLEditableTextBoxStyle
// 0x07F8 (FullSize[0x0820] - InheritedSize[0x0028])
class UTLEditableTextBoxStyle : public UObject
{
public:
	struct FEditableTextBoxStyle                       EditableTextStyle;                                         // 0x0028(0x07F8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLEditableTextBoxStyle");
		return ptr;
	}



};

// Class FrontiersUI.TLEditableTextBox
// 0x0010 (FullSize[0x0A48] - InheritedSize[0x0A38])
class UTLEditableTextBox : public UEditableTextBox
{
public:
	class UClass*                                      StyleClass;                                                // 0x0A38(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCharacters;                                             // 0x0A40(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZQN0[0x4];                                     // 0x0A44(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLEditableTextBox");
		return ptr;
	}



	void ClampText(const struct FText& NewText);
};

// Class FrontiersUI.TLHUD
// 0x0020 (FullSize[0x0770] - InheritedSize[0x0750])
class UTLHUD : public UTLBaseHUD
{
public:
	unsigned char                                      UnknownData_CQL6[0x20];                                    // 0x0750(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLHUD");
		return ptr;
	}



	void UpdateChat();
	void ShowCenterScreenMessage(const struct FText& InMessage, FrontiersUI_EUIMessageType Type, float Duration, bool bShowOverLoadingScreen, bool bOverrideExisting);
	void HideChat();
	void HideCenterScreenMessage();
	class UTLHUD* STATIC_GetHUD(class UObject* WorldContextObject);
	void FocusChat(const struct FString& StartingCharacters);
};

// Class FrontiersUI.TLProgressBar
// 0x0010 (FullSize[0x0328] - InheritedSize[0x0318])
class UTLProgressBar : public UProgressBar
{
public:
	bool                                               bIsRadial;                                                 // 0x0318(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRadialClockwise;                                          // 0x0319(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVolatileOnlyOnce;                                         // 0x031A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4983[0xD];                                     // 0x031B(0x000D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLProgressBar");
		return ptr;
	}



	void SetBorderPadding(const struct FVector2D& InBorderPadding);
};

// Class FrontiersUI.TLRichTextBlockDecorator
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTLRichTextBlockDecorator : public URichTextBlockDecorator
{
public:
	bool                                               bReveal;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OGIX[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RevealedIndex;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLRichTextBlockDecorator");
		return ptr;
	}



};

// Class FrontiersUI.TLScrollBox
// 0x0098 (FullSize[0x0918] - InheritedSize[0x0880])
class UTLScrollBox : public UScrollBox
{
public:
	class UClass*                                      StyleClass;                                                // 0x0880(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GamepadScrollSpeed;                                        // 0x0888(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MouseWheelScrollSpeedMultiplier;                           // 0x088C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CursorDragBrush;                                           // 0x0890(0x0088) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLScrollBox");
		return ptr;
	}



	void SetStyleClass(class UClass* Style);
};

// Class FrontiersUI.TLScrollBoxStyle
// 0x0788 (FullSize[0x07B0] - InheritedSize[0x0028])
class UTLScrollBoxStyle : public UObject
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                               // 0x0028(0x0228) (Edit, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                             WidgetBarStyle;                                            // 0x0250(0x04D0) (Edit, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScrollbarThickness;                                        // 0x0720(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CursorDragBrush;                                           // 0x0728(0x0088) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLScrollBoxStyle");
		return ptr;
	}



};

// Class FrontiersUI.TLSliderStyle
// 0x0340 (FullSize[0x0368] - InheritedSize[0x0028])
class UTLSliderStyle : public UObject
{
public:
	struct FSliderStyle                                SliderStyle;                                               // 0x0028(0x0340) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLSliderStyle");
		return ptr;
	}



};

// Class FrontiersUI.TLSlider
// 0x0010 (FullSize[0x0508] - InheritedSize[0x04F8])
class UTLSlider : public USlider
{
public:
	class UClass*                                      StyleClass;                                                // 0x04F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SliderIncrement;                                           // 0x0500(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QE0P[0x4];                                     // 0x0504(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLSlider");
		return ptr;
	}



};

// Class FrontiersUI.TLTextBlock
// 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
class UTLTextBlock : public UTextBlock
{
public:
	class UClass*                                      StyleClass;                                                // 0x02A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreStyleColor;                                         // 0x02B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IFOH[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLTextBlock");
		return ptr;
	}



	void SetStyleClass(class UClass* Style);
};

// Class FrontiersUI.TLTextStyle
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UTLTextStyle : public UObject
{
public:
	struct FLinearColor                                Color;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0038(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                     // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLTextStyle");
		return ptr;
	}



};

// Class FrontiersUI.TLVideo
// 0x0058 (FullSize[0x0268] - InheritedSize[0x0210])
class UTLVideo : public UImage
{
public:
	class UMaterial*                                   Material;                                                  // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                                DefaultMediaSource;                                        // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoop;                                                     // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayOnStart;                                              // 0x0221(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayAudio;                                                // 0x0222(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMuteOtherAudioWhilePlaying;                               // 0x0223(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2O27[0x24];                                    // 0x0224(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMediaTexture*                               MediaTexture;                                              // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AVideoAudioActor*                            MediaAudioActor;                                           // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLVideo");
		return ptr;
	}



	void Stop();
	void FinishPlayback();
};

// Class FrontiersUI.FullscreenVideoWidget
// 0x0000 (FullSize[0x0668] - InheritedSize[0x0668])
class UFullscreenVideoWidget : public UCinematicWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.FullscreenVideoWidget");
		return ptr;
	}



	class UTLVideo* GetTLVideo();
};

// Class FrontiersUI.VideoAudioActor
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class AVideoAudioActor : public AActor
{
public:
	class UMediaSoundComponent*                        MediaSoundComponent;                                       // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.VideoAudioActor");
		return ptr;
	}



};

// Class FrontiersUI.TLWidgetSwitcher
// 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
class UTLWidgetSwitcher : public UWidgetSwitcher
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TLWidgetSwitcher");
		return ptr;
	}



};

// Class FrontiersUI.DescriptionTooltipWidget
// 0x0000 (FullSize[0x0680] - InheritedSize[0x0680])
class UDescriptionTooltipWidget : public UTooltipWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DescriptionTooltipWidget");
		return ptr;
	}



	void SetDescription(const struct FText& Text);
};

// Class FrontiersUI.TraitNotificationWidget
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class UTraitNotificationWidget : public UTLUserWidget
{
public:
	float                                              ShowDuration;                                              // 0x0640(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SortValue;                                                 // 0x0644(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5JO2[0x10];                                    // 0x0648(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TraitNotificationWidget");
		return ptr;
	}



	class UTLTextBlock* GetTextBlock();
	class UTLImage* GetImage();
};

// Class FrontiersUI.TraitsTableHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTraitsTableHelpers : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TraitsTableHelpers");
		return ptr;
	}



	void STATIC_UnlockActiveTrait(class AActor* Actor, const struct FName& ActiveTraitName);
	struct FTraitKey STATIC_MakeTraitKeyWithTag(const struct FName& RowName, const struct FGameplayTag& Tag);
	struct FTraitKey STATIC_MakeTraitKeyForParameterRow(class UObject* WorldContextObject, const struct FName& RowName, const struct FName& ParameterRowName);
	struct FTraitKey STATIC_MakeTraitKey(const struct FName& RowName, Frontiers_ETraitSlot PrimarySlot, Frontiers_ESecondaryTraitSlot SecondarySlot, int Param);
	void STATIC_LockActiveTrait(class AActor* Actor, const struct FName& ActiveTraitName);
	float STATIC_GetTraitWithTag(class UUserWidget* Widget, const struct FName& RowName, const struct FGameplayTag& Tag);
	struct FName STATIC_GetTraitName(const struct FTraitKey& Key);
	float STATIC_GetTrait(class UUserWidget* Widget, const struct FName& RowName);
	struct FName STATIC_GetPlayerEnergyTraitName(class ATLCharacter* Character);
	float STATIC_GetActiveTraitPercent(class UUserWidget* Widget, const struct FName& ActiveTraitName);
};

// Class FrontiersUI.TraitTextBlock
// 0x0098 (FullSize[0x0350] - InheritedSize[0x02B8])
class UTraitTextBlock : public UTLTextBlock
{
public:
	struct FText                                       TextFormat;                                                // 0x02B8(0x0018) (Edit, NativeAccessSpecifierPublic)
	bool                                               bShouldRound;                                              // 0x02D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTreatAsPercentage;                                        // 0x02D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowAsNegative;                                           // 0x02D2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseTraitDisplayData;                                      // 0x02D3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ERoundingMode>                  RoundingMode;                                              // 0x02D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseTraitModes;                                            // 0x02D5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EWeaponSlot                              TraitMode;                                                 // 0x02D6(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S1CS[0x9];                                     // 0x02D7(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTraitInitializer                           Trait;                                                     // 0x02E0(0x0068) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OQBQ[0x8];                                     // 0x0348(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TraitTextBlock");
		return ptr;
	}



	struct FText GetTraitTextValue();
};

// Class FrontiersUI.ActiveTraitTextBlock
// 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
class UActiveTraitTextBlock : public UTraitTextBlock
{
public:
	struct FActiveTraitsTableRowHandle                 ActiveTrait;                                               // 0x0350(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ActiveTraitTextBlock");
		return ptr;
	}



};

// Class FrontiersUI.DamageTraitTextBlock
// 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
class UDamageTraitTextBlock : public UTraitTextBlock
{
public:
	unsigned char                                      UnknownData_OQNI[0x10];                                    // 0x0350(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DamageTraitTextBlock");
		return ptr;
	}



};

// Class FrontiersUI.DefenseTextBlock
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UDefenseTextBlock : public UTraitTextBlock
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DefenseTextBlock");
		return ptr;
	}



};

// Class FrontiersUI.DefensePercentTextBlock
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UDefensePercentTextBlock : public UTraitTextBlock
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DefensePercentTextBlock");
		return ptr;
	}



};

// Class FrontiersUI.SkillLevelTextBlock
// 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
class USkillLevelTextBlock : public UTraitTextBlock
{
public:
	unsigned char                                      UnknownData_7IPV[0x10];                                    // 0x0350(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.SkillLevelTextBlock");
		return ptr;
	}



};

// Class FrontiersUI.TraitTickerTextBlock
// 0x0018 (FullSize[0x0368] - InheritedSize[0x0350])
class UTraitTickerTextBlock : public UTraitTextBlock
{
public:
	float                                              ScaleFactor;                                               // 0x0350(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JumpThreshold;                                             // 0x0354(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideWhenNotTicking;                                       // 0x0358(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BYW4[0x3];                                     // 0x0359(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FadeFactor;                                                // 0x035C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FFPO[0x8];                                     // 0x0360(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TraitTickerTextBlock");
		return ptr;
	}



};

// Class FrontiersUI.TransmogDyeStylesWidget
// 0x0028 (FullSize[0x0668] - InheritedSize[0x0640])
class UTransmogDyeStylesWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_862O[0x20];                                    // 0x0640(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDyeAndTransmogWidget*                       DyeAndTransmogWidget;                                      // 0x0660(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TransmogDyeStylesWidget");
		return ptr;
	}



	void SetUnlockedHeaderVisibility(UMG_ESlateVisibility InVisibility);
	void SetLockedHeaderVisibility(UMG_ESlateVisibility InVisibility);
	class UWidget* GetWeaponHeader();
	class UTransmogDyeItemListWidget* GetUnlockedItemList();
	class UScrollBox* GetScrollBox();
	class UTransmogDyeItemListWidget* GetLockedItemList();
	class UWidget* GetLoadingSpinner();
	class UTLTextBlock* GetCountText();
	class UWidget* GetArmorHeader();
	void DisplayError(const struct FText& ErrorText);
};

// Class FrontiersUI.TransmogStylesWidget
// 0x0000 (FullSize[0x0668] - InheritedSize[0x0668])
class UTransmogStylesWidget : public UTransmogDyeStylesWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TransmogStylesWidget");
		return ptr;
	}



};

// Class FrontiersUI.DyeStylesWidget
// 0x0000 (FullSize[0x0668] - InheritedSize[0x0668])
class UDyeStylesWidget : public UTransmogDyeStylesWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.DyeStylesWidget");
		return ptr;
	}



};

// Class FrontiersUI.TransmogItemListWidget
// 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
class UTransmogItemListWidget : public UTransmogDyeItemListWidget
{
public:
	unsigned char                                      UnknownData_07UL[0x10];                                    // 0x0278(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TransmogItemListWidget");
		return ptr;
	}



};

// Class FrontiersUI.TransmogItemWidget
// 0x0000 (FullSize[0x09E8] - InheritedSize[0x09E8])
class UTransmogItemWidget : public UTransmogDyeItemWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TransmogItemWidget");
		return ptr;
	}



};

// Class FrontiersUI.TransmogTooltipWidget
// 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
class UTransmogTooltipWidget : public UTransmogDyeTooltipWidget
{
public:
	struct FItemTableRowHandle                         ItemRow;                                                   // 0x0640(0x0010) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TransmogTooltipWidget");
		return ptr;
	}



};

// Class FrontiersUI.TravelToPartyMemberWidget
// 0x02B8 (FullSize[0x08F8] - InheritedSize[0x0640])
class UTravelToPartyMemberWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_VJ4J[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTravelMapWidget*                            TravelMapWidget;                                           // 0x0648(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       PartyMemberIsTooCloseText;                                 // 0x0650(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             PortalToPartyMemberAction;                                 // 0x0668(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             PortalToPartyMemberFortAction;                             // 0x0760(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ASXA[0xA0];                                    // 0x0858(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TravelToPartyMemberWidget");
		return ptr;
	}



	void PortalToPartyMemberFort();
	void PortalToPartyMember();
	class UAllyInfoWidget* GetPortraitIcon();
	class UTLButton* GetPortalToPartyMemberFortButton();
	class UTLButton* GetPortalToPartyMemberButton();
	class UTLTextBlock* GetPartyMemberNameTextBlock();
	class UTLTextBlock* GetCurrentAreaTextBlock();
	struct FText GetCurrentAreaText();
	bool CanPortalToPartyMember();
};

// Class FrontiersUI.TravelToKnownDestinationWidget
// 0x0068 (FullSize[0x06A8] - InheritedSize[0x0640])
class UTravelToKnownDestinationWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_8REG[0x8];                                     // 0x0640(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_EPlayerPortalDestinationType             DestinationType;                                           // 0x0648(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZR5D[0x7];                                     // 0x0649(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTravelMapWidget*                            TravelMapWidget;                                           // 0x0650(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DLI5[0x50];                                    // 0x0658(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TravelToKnownDestinationWidget");
		return ptr;
	}



	void PortalToDestination();
	class UTLImage* GetIcon();
	class UTLTextBlock* GetButtonLabel();
};

// Class FrontiersUI.TravelMapWidget
// 0x00A8 (FullSize[0x06E8] - InheritedSize[0x0640])
class UTravelMapWidget : public UTLUserWidget
{
public:
	TMap<Frontiers_EPlayerPortalDestinationType, class UObject*> KnownTravelIcons;                                          // 0x0640(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UObject*>          TownIcons;                                                 // 0x0690(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KFNQ[0x8];                                     // 0x06E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.TravelMapWidget");
		return ptr;
	}



	class UTravelToKnownDestinationWidget* GetTravelToTownWidget();
	class UTravelToKnownDestinationWidget* GetTravelToFortWidget();
	class UWidget* GetPartyWidgetContainer();
	TArray<class UTravelToPartyMemberWidget*> GetPartyTravelWidgets();
	class UListWidget* GetPartyMemberListWidget();
	class UTLWidgetSwitcher* GetOptionsBackgroundWidgetSwitcher();
	class UListWidget* GetDefaultGamepadListWidget();
	class UListWidget* GetDefaultDestinationsListWidget();
};

// Class FrontiersUI.UIBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.UIBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_ShowLevelUpToast(class UObject* WorldContextObject, const struct FText& Message);
	void STATIC_SetTLTextStyle(class UTextLayoutWidget* TextLayoutWidget, class UClass* StyleClass);
	void STATIC_SetTLText(class UTextLayoutWidget* TextLayoutWidget, const struct FText& Text);
	struct FText STATIC_NumberToText(float Number, int MaximumFractionalDigits, TEnumAsByte<Engine_ERoundingMode> RoundingMode);
	class UTooltipWidget* STATIC_MakeTooltipForWidget(class UWidget* Widget, class UClass* TooltipClass);
	class UTooltipWidget* STATIC_MakeTextTooltipForWidget(class UWidget* Widget);
	class UTooltipWidget* STATIC_MakeDescriptionTooltipForWidget(class UWidget* Widget, const struct FText& Title, const struct FText& Description);
	struct FLinearColor STATIC_GetTLTextColor(class UTextLayoutWidget* TextLayoutWidget);
	struct FText STATIC_GetTLText(class UTextLayoutWidget* TextLayoutWidget);
	struct FText STATIC_GetSpokeNameForActor(class AActor* Actor);
	void STATIC_ChangeTypefaceFontName(class UTextBlock* TextBlock, const struct FName& InTypefaceFontName);
	void STATIC_ChangeProgressBarFillImage(class UProgressBar* ProgressBar, class UObject* TextureAsset);
	void STATIC_ChangeImageAsset(class UImage* Image, class UObject* TextureAsset, TEnumAsByte<SlateCore_ESlateBrushDrawType> DrawType);
};

// Class FrontiersUI.UILightComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UUILightComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_9S85[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.UILightComponent");
		return ptr;
	}



};

// Class FrontiersUI.UITextConstants
// 0x0C10 (FullSize[0x0C38] - InheritedSize[0x0028])
class UUITextConstants : public UObject
{
public:
	unsigned char                                      PlatformSpecificText[0x50];                                // 0x0028(0x0050) UNKNOWN PROPERTY: MapProperty
	TMap<struct FGameplayTag, struct FUserFacingText>  ElementText;                                               // 0x0078(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FText>            TargetTypeText;                                            // 0x00C8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FText>            MinionTypeText;                                            // 0x0118(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FText>            ClassText;                                                 // 0x0168(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FText>            ElementProcText;                                           // 0x01B8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FText>            StatusEffectText;                                          // 0x0208(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FText>            WeaponTypeText;                                            // 0x0258(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FText>            SkillTypeText;                                             // 0x02A8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FUserFacingText>  SkillTagText;                                              // 0x02F8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FText>            SetTagText;                                                // 0x0348(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FName>                               AttackSpeedOrder;                                          // 0x0398(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<Frontiers_ETraitTextFormat, struct FText>     TraitTextFormats;                                          // 0x03A8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FText>                               RandomPetNames;                                            // 0x03F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FText>                               PlayerDeathKnownAttacker;                                  // 0x0408(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FText>                               PlayerDeathUnknownAttacker;                                // 0x0418(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FText>                               PartyMemberTraveled;                                       // 0x0428(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<FrontiersUI_EStandardUIButtonAction, struct FText> StandardUIActions;                                         // 0x0438(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<FrontiersUI_EUIQuestTask, struct FText>       QuestTaskFormats;                                          // 0x0488(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<Frontiers_ETLFullscreenMode, struct FText>    FullscreenModeText;                                        // 0x04D8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<Frontiers_ETLScalabilityQuality, struct FText> QualityOffText;                                            // 0x0528(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<Frontiers_ETLScalabilityQuality, struct FText> QualityLowText;                                            // 0x0578(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<Frontiers_EVoiceChatRole, struct FText>       VoiceChatRole;                                             // 0x05C8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<SlateCore_EColorVisionDeficiency, struct FText> ColorModeText;                                             // 0x0618(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<FrontiersUI_EUserFacingError, struct FUserFacingError> ErrorText;                                                 // 0x0668(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       LoginErrorTitle;                                           // 0x06B8(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       LoginErrorGeneric;                                         // 0x06D0(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<int, struct FText>                            LoginErrorsByResponseCode;                                 // 0x06E8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<FrontiersUI_EUserFacingQuery, struct FUserFacingQuery> QueryText;                                                 // 0x0738(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<FrontiersUI_EGameplayError, struct FText>     GameplayErrorMessages;                                     // 0x0788(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<Frontiers_EFortPropType, struct FText>        FortPropTypeText;                                          // 0x07D8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FText>            CraftingCategoryText;                                      // 0x0828(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<FrontiersUI_EQuestMapMode, struct FText>      MapModeText;                                               // 0x0878(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FTraitsTableRowHandle, struct FText>   CraftingTraitExceededMaxText;                              // 0x08C8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FCurrencyTableRowHandle, struct FText> CraftingCurrencyExceededMaxText;                           // 0x0918(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       DefaultCraftingExceededMaxText;                            // 0x0968(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<Frontiers_ECraftingResult, struct FText>      CraftingResultMessages;                                    // 0x0980(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<Frontiers_EMenuState, struct FText>           PresenceMenuText;                                          // 0x09D0(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       AffixNumberColorFormat;                                    // 0x0A20(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                                InvalidTextColor;                                          // 0x0A38(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NameValidationRegex;                                       // 0x0A48(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       QuestChestDisplayName;                                     // 0x0A58(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       KillBossFormat;                                            // 0x0A70(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       WarpGadgetRestriction;                                     // 0x0A88(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       MapworksPortalDescription;                                 // 0x0AA0(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       EndlessDungeonPortalDescription;                           // 0x0AB8(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       PhaseBeastPortalDescription;                               // 0x0AD0(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       AssignmentsExpireTimeFormat;                               // 0x0AE8(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       AssignmentsExpireTimeFormatNoDays;                         // 0x0B00(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       AssignmentsExpireTimeFormatNoHours;                        // 0x0B18(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       AssignmentsExpireTimeFormatNoMinutes;                      // 0x0B30(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       AssignmentsExpire;                                         // 0x0B48(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       AssignmentsHaveExpired;                                    // 0x0B60(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       DefaultFallbackFortName;                                   // 0x0B78(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       PetSlotUnlockedText;                                       // 0x0B90(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       PetAquiredText;                                            // 0x0BA8(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       PortalDestroyedText;                                       // 0x0BC0(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ChallengeLevelItemPrefixes;                                // 0x0BD8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<Frontiers_EInventorySortOptions, struct FText> InventorySortText;                                         // 0x0BE8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.UITextConstants");
		return ptr;
	}



	struct FText STATIC_AsPercent(float Value, TEnumAsByte<Engine_ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits);
};

// Class FrontiersUI.ResolutionConfirmationWidget
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UResolutionConfirmationWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_KDXH[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAppSettings*                                AppSettings;                                               // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGenericModalWidget*                         AcceptModal;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                ProgressBar;                                               // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVideoSettingsWidget*                        VideoSettingsWidget;                                       // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0ZHJ[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.ResolutionConfirmationWidget");
		return ptr;
	}



	void TimerElapsed();
	class UProgressBar* GetProgressBarWidget();
	void Close(bool Accepted);
	void Accept();
};

// Class FrontiersUI.VideoSettingsWidget
// 0x0358 (FullSize[0x0998] - InheritedSize[0x0640])
class UVideoSettingsWidget : public UTLUserWidget
{
public:
	class UClass*                                      ResolutionChangeContent;                                   // 0x0640(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                                     DetectDefaultsButton;                                      // 0x0648(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             SaveAndCloseAction;                                        // 0x0650(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             ResetToDefaultAction;                                      // 0x0748(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             DetectDefaultsAction;                                      // 0x0840(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FOptionWidgetData>                   OptionWidgets;                                             // 0x0938(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XU2J[0x50];                                    // 0x0948(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.VideoSettingsWidget");
		return ptr;
	}



	void SetGamepadFocus(class APlayerController* Controller);
	void ResetToDefault();
	void PromptSaveAndClose();
	class UOptionListWidget* GetOptionListWidget();
	class UButton* GetDetectDefaultsButton();
	void DetectDefaults();
};

// Class FrontiersUI.VirtualCursorInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVirtualCursorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.VirtualCursorInterface");
		return ptr;
	}



};

// Class FrontiersUI.VirtualCursorPanel
// 0x0038 (FullSize[0x0168] - InheritedSize[0x0130])
class UVirtualCursorPanel : public UCanvasPanel
{
public:
	class UClass*                                      VirtualCursorClass;                                        // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CursorSpeed;                                               // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CursorSize;                                                // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   CursorLimitSize;                                           // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TZID[0x8];                                     // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 VirtualCursor;                                             // 0x0150(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class UVirtualCursorInterface>    HoveredItem;                                               // 0x0158(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.VirtualCursorPanel");
		return ptr;
	}



};

// Class FrontiersUI.VirtualCursor
// 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
class UVirtualCursor : public UTLUserWidget
{
public:
	TScriptInterface<class UVirtualCursorInterface>    HoveredItem;                                               // 0x0640(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.VirtualCursor");
		return ptr;
	}



};

// Class FrontiersUI.VitalsStatWidget
// 0x0078 (FullSize[0x06B8] - InheritedSize[0x0640])
class UVitalsStatWidget : public UTLUserWidget
{
public:
	struct FTraitInitializer                           Trait;                                                     // 0x0640(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bUseIconSprite;                                            // 0x06A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WO7U[0x7];                                     // 0x06A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPaperSprite*                                IconSprite;                                                // 0x06B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.VitalsStatWidget");
		return ptr;
	}



	class UTraitTextBlock* GetTraitTextBlock();
	class UImage* GetIconImage();
};

// Class FrontiersUI.VoiceChatWidget
// 0x0050 (FullSize[0x0690] - InheritedSize[0x0640])
class UVoiceChatWidget : public UTLUserWidget
{
public:
	unsigned char                                      UnknownData_BE8A[0x50];                                    // 0x0640(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.VoiceChatWidget");
		return ptr;
	}



	void OnChatChannelsChanged(TArray<class UChatChannel*> Channels);
	class UTLTextBlock* GetAccountNameText();
	void BlueprintToggle(bool bSpeaking);
};

// Class FrontiersUI.VoiceChatListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UVoiceChatListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.VoiceChatListWidget");
		return ptr;
	}



};

// Class FrontiersUI.VoiceChatOverlay
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UVoiceChatOverlay : public UTLUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.VoiceChatOverlay");
		return ptr;
	}



	class UVoiceChatListWidget* GetVoiceChatListWidget();
};

// Class FrontiersUI.WardrobePropWidget
// 0x0420 (FullSize[0x0CD8] - InheritedSize[0x08B8])
class UWardrobePropWidget : public UInventoryWidget
{
public:
	unsigned char                                      UnknownData_7DNU[0x30];                                    // 0x08B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             SwapAllAction;                                             // 0x08E8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             SwapArmorAction;                                           // 0x09E0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             SwapWeaponsAction;                                         // 0x0AD8(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUIButtonAction                             ToggleGenderAction;                                        // 0x0BD0(0x00F8) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class AActor*                                      WardrobeProp;                                              // 0x0CC8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               GenderUIVisibility;                                        // 0x0CD0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               MaleSelectionVisibility;                                   // 0x0CD1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               FemaleSelectionVisibility;                                 // 0x0CD2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RGFG[0x5];                                     // 0x0CD3(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.WardrobePropWidget");
		return ptr;
	}



	void ToggleGender();
	void SwapWeapons();
	void SwapArmor();
	void SwapAll();
	void SelectMale();
	void SelectFemale();
	class UTLTextBlock* GetWardrobePropName();
	bool CanSwapWeapons();
	bool CanSwapArmor();
	bool CanSwapAll();
};

// Class FrontiersUI.WidgetConstants
// 0x0730 (FullSize[0x0758] - InheritedSize[0x0028])
class UWidgetConstants : public UObject
{
public:
	class UClass*                                      ModalTwoButtons;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TextInput;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TextInputMultiLine;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TextTooltip;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      InlineHotkeyWidgetSmall;                                   // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      InlineHotkeyWidgetBig;                                     // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FName>                   InlineHotkeyGamepadActionMappings;                         // 0x0058(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FSlateBrush>             InlineImages;                                              // 0x00A8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      DescriptionTooltip;                                        // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Nameplate;                                                 // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SocialContextMenu;                                         // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BossName;                                                  // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LevelUpBanner[0x28];                                       // 0x0118(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	float                                              LevelUpDuration;                                           // 0x0140(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BNCK[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      HelpOnHUD;                                                 // 0x0148(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      HelpOnHUD_Demo;                                            // 0x0150(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      OptionsMenu;                                               // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      NewPetReceivedWidget;                                      // 0x0160(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FloatingItemTextWidget;                                    // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MapMarkerLabelClass;                                       // 0x0170(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LocalPlayerMapMarkerClass;                                 // 0x0178(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      InventoryComparisonWidget;                                 // 0x0180(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<FrontiersUI_ETLWidget, struct FCanvasWidget>  Widgets;                                                   // 0x0188(0x0050) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      FeedbackWidgetDefinition;                                  // 0x01D8(0x0260) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         CinematicSnapshotEvent;                                    // 0x0438(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         ErrorModalEvent;                                           // 0x0450(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          ScrollBoxAnimationCurve;                                   // 0x0468(0x0088) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UMaterial*                                   RadialProgressBarMaterial;                                 // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      ExitToJoinSession;                                         // 0x04F8(0x0260) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersUI.WidgetConstants");
		return ptr;
	}



	class UWidgetConstants* STATIC_BlueprintGetWidgetConstants(class UObject* WorldContextObject);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
