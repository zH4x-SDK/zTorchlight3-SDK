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
// Parameters
//---------------------------------------------------------------------------

// DelegateFunction FrontiersUI.ListWidget.WidgetFocusEvent__DelegateSignature
struct UListWidget_WidgetFocusEvent__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ListWidget.SetLoadingSpinner
struct UListWidget_SetLoadingSpinner_Params
{
	class UWidget*                                     InLoadingSpinner;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ListWidget.SetFocusedWidget
struct UListWidget_SetFocusedWidget_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ListWidget.OnScrolled
struct UListWidget_OnScrolled_Params
{
	float                                              ScrollOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ListWidget.GetNumValidWidgets
struct UListWidget_GetNumValidWidgets_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ListWidget.GetFocusedWidgetIndex
struct UListWidget_GetFocusedWidgetIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ListWidget.EnsureWidgetSelectedAndFocused
struct UListWidget_EnsureWidgetSelectedAndFocused_Params
{
	bool                                               bSelectLast;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ListWidget.EnsureWidgetSelected
struct UListWidget_EnsureWidgetSelected_Params
{
	bool                                               bSelectLast;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.PlayAudioEvent
struct UTLUserWidget_PlayAudioEvent_Params
{
	FrontiersUI_EUIAudioSlot                           FMODSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.PerformButtonAction
struct UTLUserWidget_PerformButtonAction_Params
{
	struct FUIButtonAction                             Action;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.OnTooltipMenuAnchorOpenChanged
struct UTLUserWidget_OnTooltipMenuAnchorOpenChanged_Params
{
	bool                                               bIsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.OnNavigation
struct UTLUserWidget_OnNavigation_Params
{
	SlateCore_EUINavigation                            NavDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.OnDragOperationCancelled
struct UTLUserWidget_OnDragOperationCancelled_Params
{
	class UDragDropOperation*                          DragDropOperation;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.OnCharacterChanged
struct UTLUserWidget_OnCharacterChanged_Params
{
	class ATLCharacter*                                NewCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.IsSelectedInList
struct UTLUserWidget_IsSelectedInList_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.IsHiddenOrHiding
struct UTLUserWidget_IsHiddenOrHiding_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetTooltipAnchor
struct UTLUserWidget_GetTooltipAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetSteamUIVisibility
struct UTLUserWidget_GetSteamUIVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetShowAnimation
struct UTLUserWidget_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetSelectedVisibility
struct UTLUserWidget_GetSelectedVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetOwningTLPlayer
struct UTLUserWidget_GetOwningTLPlayer_Params
{
	class ATLPlayerController*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetOrCreateTooltipWidget
struct UTLUserWidget_GetOrCreateTooltipWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetMouseKeyboardUIVisibility
struct UTLUserWidget_GetMouseKeyboardUIVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetMouseKeyboardInteractiveUIVisibility
struct UTLUserWidget_GetMouseKeyboardInteractiveUIVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetListSelectAnimation
struct UTLUserWidget_GetListSelectAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetHoldActionProgress
struct UTLUserWidget_GetHoldActionProgress_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetHideAnimation
struct UTLUserWidget_GetHideAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetGamepadUIVisibility
struct UTLUserWidget_GetGamepadUIVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetFocusSelectionVisibility
struct UTLUserWidget_GetFocusSelectionVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetFocusAnimation
struct UTLUserWidget_GetFocusAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.GetBaseHUD
struct UTLUserWidget_GetBaseHUD_Params
{
	class UTLBaseHUD*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLUserWidget.CloseWidget
struct UTLUserWidget_CloseWidget_Params
{
};

// Function FrontiersUI.TLUserWidget.BlueprintOnShown
struct UTLUserWidget_BlueprintOnShown_Params
{
};

// Function FrontiersUI.TLUserWidget.BlueprintOnHidden
struct UTLUserWidget_BlueprintOnHidden_Params
{
};

// Function FrontiersUI.AccountCreatePanel.OnCancel
struct UAccountCreatePanel_OnCancel_Params
{
};

// Function FrontiersUI.AccountCreatePanel.CreateArcAccount
struct UAccountCreatePanel_CreateArcAccount_Params
{
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AccountLinkPanel.OnOpenLink
struct UAccountLinkPanel_OnOpenLink_Params
{
};

// Function FrontiersUI.AccountLinkPanel.OnContinue
struct UAccountLinkPanel_OnContinue_Params
{
};

// Function FrontiersUI.AccountLinkPanel.GetLinkCodeText
struct UAccountLinkPanel_GetLinkCodeText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AccountOptionsModalWidget.UpdateSinglePlayerHeroCount
struct UAccountOptionsModalWidget_UpdateSinglePlayerHeroCount_Params
{
	int                                                HeroCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AccountOptionsModalWidget.UpdateMultiplayerHeroCount
struct UAccountOptionsModalWidget_UpdateMultiplayerHeroCount_Params
{
	int                                                HeroCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AccountOptionsModalWidget.UnlinkAccountModals
struct UAccountOptionsModalWidget_UnlinkAccountModals_Params
{
};

// Function FrontiersUI.AccountOptionsModalWidget.UnlinkAccount
struct UAccountOptionsModalWidget_UnlinkAccount_Params
{
};

// Function FrontiersUI.AccountOptionsModalWidget.SetCurrentSelectedListWidget
struct UAccountOptionsModalWidget_SetCurrentSelectedListWidget_Params
{
	class UListWidget*                                 ListWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AccountOptionsModalWidget.IsUnlinkButtonEnabled
struct UAccountOptionsModalWidget_IsUnlinkButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AccountOptionsModalWidget.HideMultiplayerLoadingSpinner
struct UAccountOptionsModalWidget_HideMultiplayerLoadingSpinner_Params
{
};

// Function FrontiersUI.AccountOptionsModalWidget.GetSinglePlayerCharacterCount
struct UAccountOptionsModalWidget_GetSinglePlayerCharacterCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AccountOptionsModalWidget.GetButtonList
struct UAccountOptionsModalWidget_GetButtonList_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AccountResetModalWidget.StartResetFlow
struct UAccountResetModalWidget_StartResetFlow_Params
{
};

// Function FrontiersUI.AccountResetModalWidget.GetTextToMatch
struct UAccountResetModalWidget_GetTextToMatch_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AccountResetModalWidget.GetResetHoldTime
struct UAccountResetModalWidget_GetResetHoldTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ActiveTraitBarWidget.GetResourceColor
struct UActiveTraitBarWidget_GetResourceColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ActiveTraitBarWidget.GetProgressBar
struct UActiveTraitBarWidget_GetProgressBar_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TooltipWidget.SetText
struct UTooltipWidget_SetText_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TooltipWidget.GetTextFromDelegate
struct UTooltipWidget_GetTextFromDelegate_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TooltipWidget.GetTextBlock
struct UTooltipWidget_GetTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ActiveTraitTooltipWidget.GetTraitNameBlock
struct UActiveTraitTooltipWidget_GetTraitNameBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ActiveTraitTooltipWidget.GetMaxTraitText
struct UActiveTraitTooltipWidget_GetMaxTraitText_Params
{
	class UTraitTextBlock*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ActiveTraitTooltipWidget.GetCurrentTraitText
struct UActiveTraitTooltipWidget_GetCurrentTraitText_Params
{
	class UActiveTraitTextBlock*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ActiveTraitWidgetInterface.OnActiveTraitChanged
struct UActiveTraitWidgetInterface_OnActiveTraitChanged_Params
{
	class UActiveTrait*                                InActiveTrait;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AffixWidget.GetSetNameTextBlock
struct UAffixWidget_GetSetNameTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AffixWidget.GetLockedTextBlock
struct UAffixWidget_GetLockedTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AffixWidget.GetIconImage
struct UAffixWidget_GetIconImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AllyInfoWidget.SetInstanceResetReadyState
struct UAllyInfoWidget_SetInstanceResetReadyState_Params
{
	bool                                               bIsReady;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AllyInfoWidget.OnAllyEndPlay
struct UAllyInfoWidget_OnAllyEndPlay_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AllyInfoWidget.OnAllyDeath
struct UAllyInfoWidget_OnAllyDeath_Params
{
	class APawn*                                       Dying;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AllyInfoWidget.GetPortraitImage
struct UAllyInfoWidget_GetPortraitImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AllyInfoWidget.GetNameText
struct UAllyInfoWidget_GetNameText_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AllyInfoWidget.GetLevelText
struct UAllyInfoWidget_GetLevelText_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AllyInfoWidget.GetHealthProgressBar
struct UAllyInfoWidget_GetHealthProgressBar_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AllyInfoWidget.GetDifficultyWidget
struct UAllyInfoWidget_GetDifficultyWidget_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AllyInfoWidget.GetDifficultyContainer
struct UAllyInfoWidget_GetDifficultyContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AllyInfoWidget.GetContainerWidget
struct UAllyInfoWidget_GetContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AllyInfoWidget.GetBorderWidget
struct UAllyInfoWidget_GetBorderWidget_Params
{
	class UTLBorder*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLImage.SetImageAsset
struct UTLImage_SetImageAsset_Params
{
	class UObject*                                     TextureAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESlateBrushDrawType>         DrawType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoResize;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AsyncImage.OnTextureLoaded
struct UAsyncImage_OnTextureLoaded_Params
{
};

// Function FrontiersUI.BaseSkillBarWidget.GetStatusEffectMessage
struct UBaseSkillBarWidget_GetStatusEffectMessage_Params
{
	class UMessageWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseSkillBarWidget.GetSkillWidgetsWithTags
struct UBaseSkillBarWidget_GetSkillWidgetsWithTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (Parm, NativeAccessSpecifierPublic)
	TArray<class USkillWidget*>                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseSkillBarWidget.GetResourceBarPanel
struct UBaseSkillBarWidget_GetResourceBarPanel_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseSkillBarWidget.GetPotionWidgetPanel
struct UBaseSkillBarWidget_GetPotionWidgetPanel_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseSkillBarWidget.GetPotionWidgetClass
struct UBaseSkillBarWidget_GetPotionWidgetClass_Params
{
	class UClass*                                      InPotion;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseSkillBarWidget.GetPortalSkillWidget
struct UBaseSkillBarWidget_GetPortalSkillWidget_Params
{
	class USkillWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseSkillBarWidget.GetPortalSkillContainerWidget
struct UBaseSkillBarWidget_GetPortalSkillContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseSkillBarWidget.GetHealthBar
struct UBaseSkillBarWidget_GetHealthBar_Params
{
	class UActiveTraitBarWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseSkillBarWidget.GetEmberWeaponWidget
struct UBaseSkillBarWidget_GetEmberWeaponWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseSkillBarWidget.GetEmberWeaponPanel
struct UBaseSkillBarWidget_GetEmberWeaponPanel_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseSkillBarWidget.GetAllSkillWidgets
struct UBaseSkillBarWidget_GetAllSkillWidgets_Params
{
	TArray<class USkillWidget*>                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TargetInfoWidgetContainer.SetSelectedActorOverride
struct UTargetInfoWidgetContainer_SetSelectedActorOverride_Params
{
	class AActor*                                      Override;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TargetInfoWidgetContainer.OnSelectedActorDestroyed
struct UTargetInfoWidgetContainer_OnSelectedActorDestroyed_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TargetInfoWidgetContainer.OnSelectedActorChanged
struct UTargetInfoWidgetContainer_OnSelectedActorChanged_Params
{
};

// Function FrontiersUI.TargetInfoWidgetContainer.GetTargetType
struct UTargetInfoWidgetContainer_GetTargetType_Params
{
	FrontiersUI_ETargetWidgetType                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TargetInfoWidgetContainer.GetSelectedActor
struct UTargetInfoWidgetContainer_GetSelectedActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TargetInfoWidgetContainer.GetPanel
struct UTargetInfoWidgetContainer_GetPanel_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TargetInfoWidgetContainer.GetOverallVisibilityContainer
struct UTargetInfoWidgetContainer_GetOverallVisibilityContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VendorInventoryEntryWidget.GetCatalogEntryWidget
struct UVendorInventoryEntryWidget_GetCatalogEntryWidget_Params
{
	class UCatalogEntryWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VendorInventoryEntryWidget.Buy
struct UVendorInventoryEntryWidget_Buy_Params
{
};

// Function FrontiersUI.VendorInventoryEntryWidget.BulkBuy
struct UVendorInventoryEntryWidget_BulkBuy_Params
{
};

// Function FrontiersUI.BuybackItemWidget.GetItemWidget
struct UBuybackItemWidget_GetItemWidget_Params
{
	class UInventoryItemWidget*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CarouselWidget.SelectPrevious
struct UCarouselWidget_SelectPrevious_Params
{
};

// Function FrontiersUI.CarouselWidget.SelectNext
struct UCarouselWidget_SelectNext_Params
{
};

// Function FrontiersUI.CarouselWidget.GetNumOptions
struct UCarouselWidget_GetNumOptions_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CarouselWidget.GetCountText
struct UCarouselWidget_GetCountText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CarouselWidget.GetArrowVisibility
struct UCarouselWidget_GetArrowVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CatalogEntryWidget.GetIconWidget
struct UCatalogEntryWidget_GetIconWidget_Params
{
	class UGenericResourceWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CatalogEntryWidget.GetCurrencyCountWidgets
struct UCatalogEntryWidget_GetCurrencyCountWidgets_Params
{
	TArray<class UWidget*>                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CatalogEntryWidget.GetCostWidget
struct UCatalogEntryWidget_GetCostWidget_Params
{
	class UGenericResourceWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TargetInfoWidget.GetWidgetElements
struct UTargetInfoWidget_GetWidgetElements_Params
{
	FrontiersUI_ETargetInfoWidgetElement               Element;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWidget*>                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TargetInfoWidget.GetSelectedActor
struct UTargetInfoWidget_GetSelectedActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TargetInfoWidget.GetNameTextBlock
struct UTargetInfoWidget_GetNameTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TargetInfoWidget.AddHPFragmentToPanel
struct UTargetInfoWidget_AddHPFragmentToPanel_Params
{
	class UHPBarFragment*                              Fragment;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuWidget.SetOptionEnabled
struct UTabbedMenuWidget_SetOptionEnabled_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuWidget.MoveSelectionRight
struct UTabbedMenuWidget_MoveSelectionRight_Params
{
};

// Function FrontiersUI.TabbedMenuWidget.MoveSelectionLeft
struct UTabbedMenuWidget_MoveSelectionLeft_Params
{
};

// Function FrontiersUI.TabbedMenuWidget.GetSubMenu
struct UTabbedMenuWidget_GetSubMenu_Params
{
	class UTabbedMenuWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuWidget.GetMenuHeader
struct UTabbedMenuWidget_GetMenuHeader_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuWidget.GetMenuButtonList
struct UTabbedMenuWidget_GetMenuButtonList_Params
{
	class UTabbedMenuButtonList*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuWidget.GetCurrentDisplayedWidget
struct UTabbedMenuWidget_GetCurrentDisplayedWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuWidget.GetCanvasPanel
struct UTabbedMenuWidget_GetCanvasPanel_Params
{
	class UCanvasPanel*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuWidget.BlueprintOnOptionSelected
struct UTabbedMenuWidget_BlueprintOnOptionSelected_Params
{
	struct FTabbedMenuOption                           Option;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CharacterMenuHeader.GetSkillAlertVisibility
struct UCharacterMenuHeader_GetSkillAlertVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CharacterMenuHeader.GetContractAlertVisibility
struct UCharacterMenuHeader_GetContractAlertVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CharacterMenuHeader.GetContractAlertText
struct UCharacterMenuHeader_GetContractAlertText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ChatMessageWidget.OnClicked
struct UChatMessageWidget_OnClicked_Params
{
};

// Function FrontiersUI.ChatMessageWidget.GetTextBlock
struct UChatMessageWidget_GetTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ChatMessageWidget.GetSocialMenuAnchor
struct UChatMessageWidget_GetSocialMenuAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ChatWidget.UpdateTextChatEnabled
struct UChatWidget_UpdateTextChatEnabled_Params
{
};

// Function FrontiersUI.ChatWidget.UpdateChatOpacity
struct UChatWidget_UpdateChatOpacity_Params
{
};

// Function FrontiersUI.ChatWidget.SetTextEntry
struct UChatWidget_SetTextEntry_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ChatWidget.SendMessage
struct UChatWidget_SendMessage_Params
{
};

// Function FrontiersUI.ChatWidget.OnMessageTextCommitted
struct UChatWidget_OnMessageTextCommitted_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ChatWidget.OnMessageTextChanged
struct UChatWidget_OnMessageTextChanged_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ChatWidget.GetChatMessageList
struct UChatWidget_GetChatMessageList_Params
{
	class UChatMessageListWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ChatWidget.GetChatMessageEditableTextBox
struct UChatWidget_GetChatMessageEditableTextBox_Params
{
	class UEditableTextBox*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ChatWidget.GetChannelNameVisibility
struct UChatWidget_GetChannelNameVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ChatWidget.FocusTextEntry
struct UChatWidget_FocusTextEntry_Params
{
};

// Function FrontiersUI.ChatWidget.FadeOutChat
struct UChatWidget_FadeOutChat_Params
{
};

// Function FrontiersUI.ChatWidget.FadeInChat
struct UChatWidget_FadeInChat_Params
{
};

// Function FrontiersUI.ChatWidget.BlueprintSetCanEverChat
struct UChatWidget_BlueprintSetCanEverChat_Params
{
	bool                                               bCanEverChat;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CinematicWidget.OnBackAction
struct UCinematicWidget_OnBackAction_Params
{
};

// Function FrontiersUI.CinematicWidget.GetConfirmationWidget
struct UCinematicWidget_GetConfirmationWidget_Params
{
	class UTLUserWidget*                               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DuskMageResourceBar.GetLightChargeBar
struct UDuskMageResourceBar_GetLightChargeBar_Params
{
	class UActiveTraitBarWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DuskMageResourceBar.GetDarkChargeBar
struct UDuskMageResourceBar_GetDarkChargeBar_Params
{
	class UActiveTraitBarWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BasePipResourceBar.GetPips
struct UBasePipResourceBar_GetPips_Params
{
	TArray<class UResourcePip*>                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.RailmasterResourceBar.GetGlowWidget
struct URailmasterResourceBar_GetGlowWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ResourcePip.GetSpendAnimation
struct UResourcePip_GetSpendAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ResourcePip.GetProgressBar
struct UResourcePip_GetProgressBar_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ResourcePip.GetFullAnimation
struct UResourcePip_GetFullAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ForgedResourceBar.SetupExternalAnimation
struct UForgedResourceBar_SetupExternalAnimation_Params
{
	class UForgedResourceBar*                          WidgetToAnimate;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            InWidgetAnimation;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ForgedResourceBar.GetResourceAnimation
struct UForgedResourceBar_GetResourceAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SharpshooterResourceBar.GetTrinketOpenContainer
struct USharpshooterResourceBar_GetTrinketOpenContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SharpshooterResourceBar.GetTrinketImage
struct USharpshooterResourceBar_GetTrinketImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SharpshooterResourceBar.GetTrinketBackgroundImages
struct USharpshooterResourceBar_GetTrinketBackgroundImages_Params
{
	TArray<class UTLImage*>                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SharpshooterResourceBar.GetOpenTrinketAnimation
struct USharpshooterResourceBar_GetOpenTrinketAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CursedCaptainResourceBar.GetPipsSwitcher
struct UCursedCaptainResourceBar_GetPipsSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CursedCaptainResourceBar.GetExtendedPipsWidget
struct UCursedCaptainResourceBar_GetExtendedPipsWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CursedCaptainResourceBar.GetDefaultPipsWidget
struct UCursedCaptainResourceBar_GetDefaultPipsWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CursedCaptainResourceBar.BlueprintMaxResource
struct UCursedCaptainResourceBar_BlueprintMaxResource_Params
{
	bool                                               bIsMax;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CloseButtonWidget.Clicked
struct UCloseButtonWidget_Clicked_Params
{
};

// Function FrontiersUI.ComparableWidgetInterface.GetComparisonMenuAnchor
struct UComparableWidgetInterface_GetComparisonMenuAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractClaimWidget.GetRewardList
struct UContractClaimWidget_GetRewardList_Params
{
	class UContractRewardListWidget*                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractClaimWidget.GetClaimAnimation
struct UContractClaimWidget_GetClaimAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractClaimWidget.ClaimRewards
struct UContractClaimWidget_ClaimRewards_Params
{
};

// Function FrontiersUI.XPBarWidget.StopOverridingLevel
struct UXPBarWidget_StopOverridingLevel_Params
{
};

// Function FrontiersUI.XPBarWidget.StartOverridingLevel
struct UXPBarWidget_StartOverridingLevel_Params
{
	float                                              Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.XPBarWidget.IsMaxLevel
struct UXPBarWidget_IsMaxLevel_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.XPBarWidget.GetXPBar
struct UXPBarWidget_GetXPBar_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.XPBarWidget.GetLevelUpAnimation
struct UXPBarWidget_GetLevelUpAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.XPBarWidget.GetLevelText
struct UXPBarWidget_GetLevelText_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.XPBarWidget.GetLevelProgressTextBlock
struct UXPBarWidget_GetLevelProgressTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractFameLevelBar.GetExperiencePercent
struct UContractFameLevelBar_GetExperiencePercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractFameLevelBar.GetContainerWidget
struct UContractFameLevelBar_GetContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractLevelWidget.GetRegularRewardBorder
struct UContractLevelWidget_GetRegularRewardBorder_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractLevelWidget.GetPaidRewardList
struct UContractLevelWidget_GetPaidRewardList_Params
{
	class UContractRewardListWidget*                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractLevelWidget.GetNonFeaturedRewardBorder
struct UContractLevelWidget_GetNonFeaturedRewardBorder_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractLevelWidget.GetNextLevelVisibility
struct UContractLevelWidget_GetNextLevelVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractLevelWidget.GetLoopRewardBorder
struct UContractLevelWidget_GetLoopRewardBorder_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractLevelWidget.GetLoopLevelTextBlock
struct UContractLevelWidget_GetLoopLevelTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractLevelWidget.GetLoopCountTextBlock
struct UContractLevelWidget_GetLoopCountTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractLevelWidget.GetLevelTextBlock
struct UContractLevelWidget_GetLevelTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractLevelWidget.GetFreeRewardList
struct UContractLevelWidget_GetFreeRewardList_Params
{
	class UContractRewardListWidget*                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractLevelWidget.GetFeaturedRewardBorder
struct UContractLevelWidget_GetFeaturedRewardBorder_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractLevelWidget.GetEndOfLoopBorder
struct UContractLevelWidget_GetEndOfLoopBorder_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractLevelWidget.GetEarnedVisibility
struct UContractLevelWidget_GetEarnedVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractLevelWidget.GetBorderSwitcher
struct UContractLevelWidget_GetBorderSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractRewardWidget.ResetAnimation
struct UContractRewardWidget_ResetAnimation_Params
{
};

// Function FrontiersUI.ContractRewardWidget.PlayClaimAnimation
struct UContractRewardWidget_PlayClaimAnimation_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractRewardWidget.GetRewardNameTextBlock
struct UContractRewardWidget_GetRewardNameTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractRewardWidget.GetRewardDetailWidget
struct UContractRewardWidget_GetRewardDetailWidget_Params
{
	class UCraftingRecipeDetailWidget*                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractRewardWidget.GetLockedStateVisibility
struct UContractRewardWidget_GetLockedStateVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractRewardWidget.GetEarnedStateVisibility
struct UContractRewardWidget_GetEarnedStateVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractRewardWidget.GetCraftingProductWidget
struct UContractRewardWidget_GetCraftingProductWidget_Params
{
	class UCraftingProductWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractRewardWidget.GetClaimedStateVisibility
struct UContractRewardWidget_GetClaimedStateVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractRewardClaimedModalContent.GetRewardList
struct UContractRewardClaimedModalContent_GetRewardList_Params
{
	class UContractRewardListWidget*                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractSelectionMenuWidget.GetContractListWidget
struct UContractSelectionMenuWidget_GetContractListWidget_Params
{
	class UContractListWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractEntryWidget.SelectContract
struct UContractEntryWidget_SelectContract_Params
{
};

// Function FrontiersUI.ContractEntryWidget.MakeContractActive
struct UContractEntryWidget_MakeContractActive_Params
{
};

// Function FrontiersUI.ContractEntryWidget.GetSplashImage
struct UContractEntryWidget_GetSplashImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractEntryWidget.GetRemainingTimeTextBlock
struct UContractEntryWidget_GetRemainingTimeTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractEntryWidget.GetLockedContractTextBlock
struct UContractEntryWidget_GetLockedContractTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractEntryWidget.GetInactiveIndicatorWidget
struct UContractEntryWidget_GetInactiveIndicatorWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractEntryWidget.GetFameXpBar
struct UContractEntryWidget_GetFameXpBar_Params
{
	class UContractFameLevelBar*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractEntryWidget.GetContractNameTextBlock
struct UContractEntryWidget_GetContractNameTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractEntryWidget.GetActiveIndicatorWidget
struct UContractEntryWidget_GetActiveIndicatorWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractEntryWidget.GetActiveFrame
struct UContractEntryWidget_GetActiveFrame_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractEntryWidget.GetActivationSwitcher
struct UContractEntryWidget_GetActivationSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.SwitchContract
struct UContractWidget_SwitchContract_Params
{
};

// Function FrontiersUI.ContractWidget.ShowClaimModalIfPossible
struct UContractWidget_ShowClaimModalIfPossible_Params
{
};

// Function FrontiersUI.ContractWidget.PageInDirection
struct UContractWidget_PageInDirection_Params
{
	int                                                Direction;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.MakeContractActive
struct UContractWidget_MakeContractActive_Params
{
};

// Function FrontiersUI.ContractWidget.IsCurrentContract
struct UContractWidget_IsCurrentContract_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.IncrementFameAnimation
struct UContractWidget_IncrementFameAnimation_Params
{
};

// Function FrontiersUI.ContractWidget.GetUnclaimedRewardsVisibility
struct UContractWidget_GetUnclaimedRewardsVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetRewardsScrollBox
struct UContractWidget_GetRewardsScrollBox_Params
{
	class UTLScrollBox*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetRewardAreaVisibility
struct UContractWidget_GetRewardAreaVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetRecipeDetailWidget
struct UContractWidget_GetRecipeDetailWidget_Params
{
	class UCraftingRecipeDetailWidget*                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetNumUnclaimedRewardsText
struct UContractWidget_GetNumUnclaimedRewardsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetIsNotCurrentContractVisibility
struct UContractWidget_GetIsNotCurrentContractVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetIsCurrentContractVisibility
struct UContractWidget_GetIsCurrentContractVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetFameBar
struct UContractWidget_GetFameBar_Params
{
	class UContractFameLevelBar*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetEarnFameAnimation
struct UContractWidget_GetEarnFameAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetCurrentContractWidget
struct UContractWidget_GetCurrentContractWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetContractPickerWidget
struct UContractWidget_GetContractPickerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetContractLevelText
struct UContractWidget_GetContractLevelText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetContractLevelList
struct UContractWidget_GetContractLevelList_Params
{
	class UContractLevelListWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetBannerImage
struct UContractWidget_GetBannerImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.GetAllRewardsListWidget
struct UContractWidget_GetAllRewardsListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.CanPageRight
struct UContractWidget_CanPageRight_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.CanPageLeft
struct UContractWidget_CanPageLeft_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.BlueprintUpdateContractStatus
struct UContractWidget_BlueprintUpdateContractStatus_Params
{
	bool                                               bIsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowLoopedSection;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.BlueprintUpdateClaimStatus
struct UContractWidget_BlueprintUpdateClaimStatus_Params
{
	int                                                InNumUnclaimedRewards;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ContractWidget.BackToShowContract
struct UContractWidget_BackToShowContract_Params
{
};

// Function FrontiersUI.CraftingCategoryWidget.GetCraftingEntriesList
struct UCraftingCategoryWidget_GetCraftingEntriesList_Params
{
	class UCraftingEntryContainerListWidget*           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingCategoryWidget.GetCategoryText
struct UCraftingCategoryWidget_GetCategoryText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingCategoryWidget.BlueprintSetCategoryEnabled
struct UCraftingCategoryWidget_BlueprintSetCategoryEnabled_Params
{
	bool                                               bIsCategoryEnabled;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingEntryContainerWidget.GetWidgetSwitcher
struct UCraftingEntryContainerWidget_GetWidgetSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingEntryContainerWidget.GetCraftingRecipeWidget_Blueprint
struct UCraftingEntryContainerWidget_GetCraftingRecipeWidget_Blueprint_Params
{
	class UCraftingRecipeWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingEntryContainerWidget.GetCraftingQueueEntryWidget_Blueprint
struct UCraftingEntryContainerWidget_GetCraftingQueueEntryWidget_Blueprint_Params
{
	class UCraftingQueueEntryWidget*                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingEntryContainerWidget.BlueprintSetRecipeEnabled
struct UCraftingEntryContainerWidget_BlueprintSetRecipeEnabled_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingPanel.GetReadyToClaimVisibility
struct UCraftingPanel_GetReadyToClaimVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingPanel.GetNumQueuedItemsReadyToClaim
struct UCraftingPanel_GetNumQueuedItemsReadyToClaim_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingPanel.GetCurrencyWidget
struct UCraftingPanel_GetCurrencyWidget_Params
{
	class UCurrencyWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingProductWidget.GetResourceWidget
struct UCraftingProductWidget_GetResourceWidget_Params
{
	class UGenericResourceWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingProductWidget.GetDisplayNameText
struct UCraftingProductWidget_GetDisplayNameText_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MailboxProductWidget.OnShownInMailbox
struct UMailboxProductWidget_OnShownInMailbox_Params
{
};

// Function FrontiersUI.CraftingRecipeWidgetBase.GetCraftingAnimation
struct UCraftingRecipeWidgetBase_GetCraftingAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingQueueEntryWidget.TryToClaim
struct UCraftingQueueEntryWidget_TryToClaim_Params
{
};

// Function FrontiersUI.CraftingQueueEntryWidget.GetReadyToClaimVisibility
struct UCraftingQueueEntryWidget_GetReadyToClaimVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingQueueEntryWidget.GetProductWidget
struct UCraftingQueueEntryWidget_GetProductWidget_Params
{
	class UGenericResourceWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingQueueEntryWidget.GetInProgressVisibility
struct UCraftingQueueEntryWidget_GetInProgressVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingQueueEntryWidget.GetDisplayTimeLeft
struct UCraftingQueueEntryWidget_GetDisplayTimeLeft_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingQueueEntryWidget.GetCraftingProgress
struct UCraftingQueueEntryWidget_GetCraftingProgress_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingQueueEntryWidget.GetClaimButtonVisibility
struct UCraftingQueueEntryWidget_GetClaimButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingQueueEntryWidget.CanClaim
struct UCraftingQueueEntryWidget_CanClaim_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingQueueWidget.GetStorageWidget
struct UCraftingQueueWidget_GetStorageWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingQueueWidget.GetNextList
struct UCraftingQueueWidget_GetNextList_Params
{
	class UListWidget*                                 CurrentList;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EUINavigation                            NavDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingQueueWidget.GetCraftingCategoriesList
struct UCraftingQueueWidget_GetCraftingCategoriesList_Params
{
	class UCraftingCategoryListWidget*                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingQueueWidget.BlueprintSetLoadingSpinnerEnabled
struct UCraftingQueueWidget_BlueprintSetLoadingSpinnerEnabled_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingWidgetBase.TryToCraft
struct UCraftingWidgetBase_TryToCraft_Params
{
};

// Function FrontiersUI.CraftingWidgetBase.GetCurrencyCostWidget
struct UCraftingWidgetBase_GetCurrencyCostWidget_Params
{
	class UGenericResourceWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingWidgetBase.GetCostListWidget
struct UCraftingWidgetBase_GetCostListWidget_Params
{
	class UCraftingCostListWidget*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingWidgetBase.CanCraft
struct UCraftingWidgetBase_CanCraft_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingWidgetBase.BlueprintRefreshCraftingWidget
struct UCraftingWidgetBase_BlueprintRefreshCraftingWidget_Params
{
};

// Function FrontiersUI.CraftingRecipeDetailWidget.SwitchBack
struct UCraftingRecipeDetailWidget_SwitchBack_Params
{
};

// Function FrontiersUI.CraftingRecipeDetailWidget.OpenTooltip
struct UCraftingRecipeDetailWidget_OpenTooltip_Params
{
};

// Function FrontiersUI.CraftingRecipeDetailWidget.OnCraftButtonClicked
struct UCraftingRecipeDetailWidget_OnCraftButtonClicked_Params
{
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetTitleWidget
struct UCraftingRecipeDetailWidget_GetTitleWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetPurchaseDetailsWidget
struct UCraftingRecipeDetailWidget_GetPurchaseDetailsWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetNextList
struct UCraftingRecipeDetailWidget_GetNextList_Params
{
	class UListWidget*                                 ListWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EUINavigation                            NavDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetMainPanel
struct UCraftingRecipeDetailWidget_GetMainPanel_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetLongDescriptionWidget
struct UCraftingRecipeDetailWidget_GetLongDescriptionWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetLongDescriptionContainer
struct UCraftingRecipeDetailWidget_GetLongDescriptionContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetItemTypeTextWidget
struct UCraftingRecipeDetailWidget_GetItemTypeTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetItemRarityTextWidget
struct UCraftingRecipeDetailWidget_GetItemRarityTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetItemDetailsWidget
struct UCraftingRecipeDetailWidget_GetItemDetailsWidget_Params
{
	class UInventoryItemDetailsWidget*                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetEmberWeaponSkillsWrapper
struct UCraftingRecipeDetailWidget_GetEmberWeaponSkillsWrapper_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetEmberWeaponSkills
struct UCraftingRecipeDetailWidget_GetEmberWeaponSkills_Params
{
	class UEmberWeaponSkillsWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetDurationTextBlock
struct UCraftingRecipeDetailWidget_GetDurationTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetDetailsSwitcher
struct UCraftingRecipeDetailWidget_GetDetailsSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetDetailsPanel
struct UCraftingRecipeDetailWidget_GetDetailsPanel_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetCraftButton
struct UCraftingRecipeDetailWidget_GetCraftButton_Params
{
	class UTLButton*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.GetActionButtonListWidget
struct UCraftingRecipeDetailWidget_GetActionButtonListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.CloseTooltip
struct UCraftingRecipeDetailWidget_CloseTooltip_Params
{
};

// Function FrontiersUI.CraftingRecipeDetailWidget.CanOpenTooltip
struct UCraftingRecipeDetailWidget_CanOpenTooltip_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeDetailWidget.CanCloseTooltip
struct UCraftingRecipeDetailWidget_CanCloseTooltip_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeUnitWidget.GetMeetsRequirementsVisibility
struct UCraftingRecipeUnitWidget_GetMeetsRequirementsVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeUnitWidget.GetCanAffordColor
struct UCraftingRecipeUnitWidget_GetCanAffordColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeWidget.SwitchToDetails
struct UCraftingRecipeWidget_SwitchToDetails_Params
{
};

// Function FrontiersUI.CraftingRecipeWidget.GetProductWidget
struct UCraftingRecipeWidget_GetProductWidget_Params
{
	class UGenericResourceWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeWidget.GetNewFlagWidget
struct UCraftingRecipeWidget_GetNewFlagWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeWidget.GetDurationText
struct UCraftingRecipeWidget_GetDurationText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingRecipeWidget.CanAffordRecipe
struct UCraftingRecipeWidget_CanAffordRecipe_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingResultsWidget.GetCraftingProductList
struct UCraftingResultsWidget_GetCraftingProductList_Params
{
	class UCraftingProductListWidget*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingResultsWidget.CloseAction
struct UCraftingResultsWidget_CloseAction_Params
{
};

// Function FrontiersUI.CraftingConfirmationWidget.Confirm
struct UCraftingConfirmationWidget_Confirm_Params
{
};

// Function FrontiersUI.CraftingConfirmationWidget.CanConfirm
struct UCraftingConfirmationWidget_CanConfirm_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CraftingConfirmationWidget.BlueprintCustomizeText
struct UCraftingConfirmationWidget_BlueprintCustomizeText_Params
{
	struct FText                                       Header;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       Body;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CreditsWidget.OnUserScrolled
struct UCreditsWidget_OnUserScrolled_Params
{
	float                                              CurrentOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CreditsWidget.GetScrollBox
struct UCreditsWidget_GetScrollBox_Params
{
	class UTLScrollBox*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyWidget.GetValueUpdatedAnimation
struct UCurrencyWidget_GetValueUpdatedAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyWidget.GetTraitTextBlock
struct UCurrencyWidget_GetTraitTextBlock_Params
{
	class UTraitTextBlock*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyWidget.GetTextBlock
struct UCurrencyWidget_GetTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyWidget.GetResourceFrame
struct UCurrencyWidget_GetResourceFrame_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyWidget.GetPurchaseButtonIconImage
struct UCurrencyWidget_GetPurchaseButtonIconImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyWidget.GetPurchaseButton
struct UCurrencyWidget_GetPurchaseButton_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyWidget.GetItemIconBorder
struct UCurrencyWidget_GetItemIconBorder_Params
{
	class UTLBorder*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyWidget.GetItemIconBackground
struct UCurrencyWidget_GetItemIconBackground_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyWidget.GetIconImage
struct UCurrencyWidget_GetIconImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyPickUpWidget.GetCurrencyIcon
struct UCurrencyPickUpWidget_GetCurrencyIcon_Params
{
	class UCurrencyWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyCostWidget.GetResourceTraitTextBlock
struct UCurrencyCostWidget_GetResourceTraitTextBlock_Params
{
	class UTraitTextBlock*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyCostWidget.GetResourceRequiredTextBlock
struct UCurrencyCostWidget_GetResourceRequiredTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyCostWidget.GetResourceIcon
struct UCurrencyCostWidget_GetResourceIcon_Params
{
	class UAsyncImage*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CurrencyCostWidget.GetCurrencyWidget
struct UCurrencyCostWidget_GetCurrencyWidget_Params
{
	class UCurrencyWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.CustomizationItemCarouselWidget.GetLabelText
struct UCustomizationItemCarouselWidget_GetLabelText_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.SortItems
struct UInventoryGridWithTabsWidget_SortItems_Params
{
};

// Function FrontiersUI.InventoryGridWithTabsWidget.SetItemHeader
struct UInventoryGridWithTabsWidget_SetItemHeader_Params
{
	struct FText                                       Name;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUserWidget*                                 Header;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.SendToTown
struct UInventoryGridWithTabsWidget_SendToTown_Params
{
};

// Function FrontiersUI.InventoryGridWithTabsWidget.SellAllPetItems
struct UInventoryGridWithTabsWidget_SellAllPetItems_Params
{
};

// Function FrontiersUI.InventoryGridWithTabsWidget.OpenPetShoppingList
struct UInventoryGridWithTabsWidget_OpenPetShoppingList_Params
{
};

// Function FrontiersUI.InventoryGridWithTabsWidget.OnInventoryUpdated
struct UInventoryGridWithTabsWidget_OnInventoryUpdated_Params
{
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetSortText
struct UInventoryGridWithTabsWidget_GetSortText_Params
{
	FrontiersUI_EUIInventoryCategory                   Category;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetSortedAnimation
struct UInventoryGridWithTabsWidget_GetSortedAnimation_Params
{
	FrontiersUI_EUIInventoryCategory                   Category;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetSendtoTownButtonVisibility
struct UInventoryGridWithTabsWidget_GetSendtoTownButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetSendToTownButton
struct UInventoryGridWithTabsWidget_GetSendToTownButton_Params
{
	class UTLButton*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetSellAllPetItemsButtonVisibility
struct UInventoryGridWithTabsWidget_GetSellAllPetItemsButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetSecondInventoryVisibility
struct UInventoryGridWithTabsWidget_GetSecondInventoryVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetPetCountdownVisibility
struct UInventoryGridWithTabsWidget_GetPetCountdownVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetPetCountdownText
struct UInventoryGridWithTabsWidget_GetPetCountdownText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetOpenPetShoppingListButton
struct UInventoryGridWithTabsWidget_GetOpenPetShoppingListButton_Params
{
	class UTLButton*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetNoItemsTextVisibility
struct UInventoryGridWithTabsWidget_GetNoItemsTextVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetNextList
struct UInventoryGridWithTabsWidget_GetNextList_Params
{
	SlateCore_EUINavigation                            NavDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetItemWidget
struct UInventoryGridWithTabsWidget_GetItemWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetItemCountTextBlock
struct UInventoryGridWithTabsWidget_GetItemCountTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetInventoryWidgetSwitcher
struct UInventoryGridWithTabsWidget_GetInventoryWidgetSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetInventoryItemListWidget
struct UInventoryGridWithTabsWidget_GetInventoryItemListWidget_Params
{
	class UInventoryItemListWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetInventoryItem2ListWidget
struct UInventoryGridWithTabsWidget_GetInventoryItem2ListWidget_Params
{
	class UInventoryItemListWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetInventoryCategoryTabbedMenu
struct UInventoryGridWithTabsWidget_GetInventoryCategoryTabbedMenu_Params
{
	class UTabbedMenuWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetFirstInventoryList
struct UInventoryGridWithTabsWidget_GetFirstInventoryList_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetEquippedWidget
struct UInventoryGridWithTabsWidget_GetEquippedWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetEquippedWeaponsWidget
struct UInventoryGridWithTabsWidget_GetEquippedWeaponsWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetEquippedPotionsListWidget
struct UInventoryGridWithTabsWidget_GetEquippedPotionsListWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetEquippedPetItemWidget
struct UInventoryGridWithTabsWidget_GetEquippedPetItemWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetEquippedGearWidget
struct UInventoryGridWithTabsWidget_GetEquippedGearWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetCurrencyWidget
struct UInventoryGridWithTabsWidget_GetCurrencyWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.GetCurrencyListWidget
struct UInventoryGridWithTabsWidget_GetCurrencyListWidget_Params
{
	class UCurrencyListWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryGridWithTabsWidget.CancelUsingItem
struct UInventoryGridWithTabsWidget_CancelUsingItem_Params
{
};

// Function FrontiersUI.DeathWidget.OnRevive
struct UDeathWidget_OnRevive_Params
{
	class APawn*                                       Revived;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.OnDeath
struct UDeathWidget_OnDeath_Params
{
	class APawn*                                       Dying;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetWidgetSwitcher
struct UDeathWidget_GetWidgetSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetRemainingPotionsWidget
struct UDeathWidget_GetRemainingPotionsWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetNonHardcoreWidget
struct UDeathWidget_GetNonHardcoreWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetLifeboundItemTextVisibility
struct UDeathWidget_GetLifeboundItemTextVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetHardcoreWidget
struct UDeathWidget_GetHardcoreWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetDungeonFailedMessageText
struct UDeathWidget_GetDungeonFailedMessageText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetDungeonFailedMCDialogueText
struct UDeathWidget_GetDungeonFailedMCDialogueText_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetDungeonFailedMCDialogueAnimation
struct UDeathWidget_GetDungeonFailedMCDialogueAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetDungeonFailedContainerWidget
struct UDeathWidget_GetDungeonFailedContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetDifficultyMessageText
struct UDeathWidget_GetDifficultyMessageText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetDeathOptionsWidget
struct UDeathWidget_GetDeathOptionsWidget_Params
{
	class UDeathOptionListWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetDeathOptionsBackgroundWidgetSwitcher
struct UDeathWidget_GetDeathOptionsBackgroundWidgetSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetAllyReviveWidget
struct UDeathWidget_GetAllyReviveWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetAllyReviveExpireAnimation
struct UDeathWidget_GetAllyReviveExpireAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.GetAllyReviveAnimation
struct UDeathWidget_GetAllyReviveAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathWidget.CharacterSelect
struct UDeathWidget_CharacterSelect_Params
{
};

// Function FrontiersUI.DeathWidget.AllyReviveGiveUp
struct UDeathWidget_AllyReviveGiveUp_Params
{
};

// Function FrontiersUI.DeathOptionWidget.SelectThisWidget
struct UDeathOptionWidget_SelectThisWidget_Params
{
};

// Function FrontiersUI.DeathOptionWidget.GetTextLabel
struct UDeathOptionWidget_GetTextLabel_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathOptionWidget.GetReviveButton
struct UDeathOptionWidget_GetReviveButton_Params
{
	class UTLButton*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathOptionWidget.GetGoldCostLabel
struct UDeathOptionWidget_GetGoldCostLabel_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DeathOptionWidget.GetButtonImage
struct UDeathOptionWidget_GetButtonImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DifficultyPanel.OnAccept
struct UDifficultyPanel_OnAccept_Params
{
};

// Function FrontiersUI.DifficultyPanel.GetDifficultyList
struct UDifficultyPanel_GetDifficultyList_Params
{
	class UDifficultyListWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DifficultyPanel.GetCloseWrapper
struct UDifficultyPanel_GetCloseWrapper_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DifficultyPanel.GetButtonWrapper
struct UDifficultyPanel_GetButtonWrapper_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DifficultyWidget.UpdateUI
struct UDifficultyWidget_UpdateUI_Params
{
	struct FLinearColor                                DifficultyColor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DifficultyWidget.SelectWidgetUI
struct UDifficultyWidget_SelectWidgetUI_Params
{
};

// Function FrontiersUI.DifficultyWidget.SelectThisWidget
struct UDifficultyWidget_SelectThisWidget_Params
{
};

// Function FrontiersUI.DifficultyWidget.GetShoulderWidget
struct UDifficultyWidget_GetShoulderWidget_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DifficultyWidget.GetShieldWidget
struct UDifficultyWidget_GetShieldWidget_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DifficultyWidget.GetLastDifficultyWidget
struct UDifficultyWidget_GetLastDifficultyWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DifficultyWidget.GetHighlightShieldWidget
struct UDifficultyWidget_GetHighlightShieldWidget_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DifficultyWidget.GetFrameWidget
struct UDifficultyWidget_GetFrameWidget_Params
{
	class UTLBorder*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DifficultyWidget.GetDifficultyName
struct UDifficultyWidget_GetDifficultyName_Params
{
	class UTextLayoutWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DifficultyWidget.GetDifficultyDescription
struct UDifficultyWidget_GetDifficultyDescription_Params
{
	class UTextLayoutWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DifficultyWidget.GetBackgroundWidget
struct UDifficultyWidget_GetBackgroundWidget_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DifficultyWidget.DeselectWidgetUI
struct UDifficultyWidget_DeselectWidgetUI_Params
{
};

// Function FrontiersUI.DifficultyWidget.DeselectedOtherWidgets
struct UDifficultyWidget_DeselectedOtherWidgets_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonWidgetBase.WasBossCardJustUnselected
struct UDungeonWidgetBase_WasBossCardJustUnselected_Params
{
	struct FDungeonUIActionMetadata                    MetaData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonWidgetBase.WasBossCardJustSelected
struct UDungeonWidgetBase_WasBossCardJustSelected_Params
{
	struct FDungeonUIActionMetadata                    MetaData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonStatePanelBase.GetMCWidgetAnchor
struct UDungeonStatePanelBase_GetMCWidgetAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonStatePanelBase.GetClusterWidgetAnchor
struct UDungeonStatePanelBase_GetClusterWidgetAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeConfirmPanel.GoBackToSelect
struct UDungeonChallengeConfirmPanel_GoBackToSelect_Params
{
};

// Function FrontiersUI.DungeonChallengeConfirmPanel.GetRulesToConfirmWidget
struct UDungeonChallengeConfirmPanel_GetRulesToConfirmWidget_Params
{
	class UDungeonChallengeRulesCard*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeConfirmPanel.GetProgressWarningText
struct UDungeonChallengeConfirmPanel_GetProgressWarningText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeConfirmPanel.GetProgressWarningContainer
struct UDungeonChallengeConfirmPanel_GetProgressWarningContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeConfirmPanel.GetProgressUnaffectedText
struct UDungeonChallengeConfirmPanel_GetProgressUnaffectedText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeConfirmPanel.GetProgressUnaffectedContainer
struct UDungeonChallengeConfirmPanel_GetProgressUnaffectedContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeConfirmPanel.GetPlayerDungeonTitleText
struct UDungeonChallengeConfirmPanel_GetPlayerDungeonTitleText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeConfirmPanel.GetPlayerDungeonTitleContainer
struct UDungeonChallengeConfirmPanel_GetPlayerDungeonTitleContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeConfirmPanel.GetOutroExitToPlayingAnimation
struct UDungeonChallengeConfirmPanel_GetOutroExitToPlayingAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeConfirmPanel.ConfirmSelection
struct UDungeonChallengeConfirmPanel_ConfirmSelection_Params
{
};

// Function FrontiersUI.DungeonChallengeRuleWidget.GetAffixTitleTextBlock
struct UDungeonChallengeRuleWidget_GetAffixTitleTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRuleWidget.GetAffixTextDescriptionBlock
struct UDungeonChallengeRuleWidget_GetAffixTextDescriptionBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.SelectRules
struct UDungeonChallengeRulesCard_SelectRules_Params
{
};

// Function FrontiersUI.DungeonChallengeRulesCard.RevealRules
struct UDungeonChallengeRulesCard_RevealRules_Params
{
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetStartFocusAnimation
struct UDungeonChallengeRulesCard_GetStartFocusAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetRulesEmptyWidget
struct UDungeonChallengeRulesCard_GetRulesEmptyWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetRulesEmptySwitcher
struct UDungeonChallengeRulesCard_GetRulesEmptySwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetRulesContainerWidget
struct UDungeonChallengeRulesCard_GetRulesContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetRegularCardFrontContainer
struct UDungeonChallengeRulesCard_GetRegularCardFrontContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetRegularCardBackContainer
struct UDungeonChallengeRulesCard_GetRegularCardBackContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetQualityFrontSwitcher
struct UDungeonChallengeRulesCard_GetQualityFrontSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetQualityBackSwitcher
struct UDungeonChallengeRulesCard_GetQualityBackSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetPrimaryElementImages
struct UDungeonChallengeRulesCard_GetPrimaryElementImages_Params
{
	TArray<class UTLImage*>                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetMonsterPopulationImage
struct UDungeonChallengeRulesCard_GetMonsterPopulationImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetFlipToFrontAnimation
struct UDungeonChallengeRulesCard_GetFlipToFrontAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetEndFocusAnimation
struct UDungeonChallengeRulesCard_GetEndFocusAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetChallengeRuleListWidgets
struct UDungeonChallengeRulesCard_GetChallengeRuleListWidgets_Params
{
	TArray<class UDungeonChallengeRuleListWidget*>     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetCardStateSwitcher
struct UDungeonChallengeRulesCard_GetCardStateSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetBossNameTextBlock
struct UDungeonChallengeRulesCard_GetBossNameTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetBossImage
struct UDungeonChallengeRulesCard_GetBossImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetBossCardFrontSwitcher
struct UDungeonChallengeRulesCard_GetBossCardFrontSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetBossCardFrontContainer
struct UDungeonChallengeRulesCard_GetBossCardFrontContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetBossCardBackSwitcher
struct UDungeonChallengeRulesCard_GetBossCardBackSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetBossCardBackContainer
struct UDungeonChallengeRulesCard_GetBossCardBackContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetBenefitRuleListWidgets
struct UDungeonChallengeRulesCard_GetBenefitRuleListWidgets_Params
{
	TArray<class UDungeonChallengeRuleListWidget*>     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCard.GetAreaNameTextBlock
struct UDungeonChallengeRulesCard_GetAreaNameTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCardSet.GetCardShowAnimation
struct UDungeonChallengeRulesCardSet_GetCardShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCardSet.GetCardListWidget
struct UDungeonChallengeRulesCardSet_GetCardListWidget_Params
{
	class UDungeonChallengeRulesCardListWidget*        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeRulesCardSet.GetCardHideAnimation
struct UDungeonChallengeRulesCardSet_GetCardHideAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonClusterWidget.GetRulesTitleText
struct UDungeonClusterWidget_GetRulesTitleText_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonClusterWidget.GetRulesList
struct UDungeonClusterWidget_GetRulesList_Params
{
	class UDungeonChallengeRuleListWidget*             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonClusterWidget.GetRulesEmptyWidget
struct UDungeonClusterWidget_GetRulesEmptyWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonClusterWidget.GetRulesEmptySwitcher
struct UDungeonClusterWidget_GetRulesEmptySwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonClusterWidget.GetRulesContainerWidget
struct UDungeonClusterWidget_GetRulesContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeLevelSelectorWidget.SelectPreviousCluster
struct UDungeonChallengeLevelSelectorWidget_SelectPreviousCluster_Params
{
};

// Function FrontiersUI.DungeonChallengeLevelSelectorWidget.SelectNextCluster
struct UDungeonChallengeLevelSelectorWidget_SelectNextCluster_Params
{
};

// Function FrontiersUI.DungeonChallengeLevelSelectorWidget.GetRightExitAnimation
struct UDungeonChallengeLevelSelectorWidget_GetRightExitAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeLevelSelectorWidget.GetRightEnterAnimation
struct UDungeonChallengeLevelSelectorWidget_GetRightEnterAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeLevelSelectorWidget.GetPreviousClusterButtonVisibility
struct UDungeonChallengeLevelSelectorWidget_GetPreviousClusterButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeLevelSelectorWidget.GetNextClusterButtonVisibility
struct UDungeonChallengeLevelSelectorWidget_GetNextClusterButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeLevelSelectorWidget.GetLevelListWidget
struct UDungeonChallengeLevelSelectorWidget_GetLevelListWidget_Params
{
	class UDungeonChallengeLevelListWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeLevelSelectorWidget.GetLeftExitAnimation
struct UDungeonChallengeLevelSelectorWidget_GetLeftExitAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeLevelSelectorWidget.GetLeftEnterAnimation
struct UDungeonChallengeLevelSelectorWidget_GetLeftEnterAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeLevelCard.SelectLevel
struct UDungeonChallengeLevelCard_SelectLevel_Params
{
};

// Function FrontiersUI.DungeonChallengeLevelCard.GetStateSwitchers
struct UDungeonChallengeLevelCard_GetStateSwitchers_Params
{
	TArray<class UTLWidgetSwitcher*>                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeLevelCard.GetStartFocusAnimation
struct UDungeonChallengeLevelCard_GetStartFocusAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeLevelCard.GetSelectAnimation
struct UDungeonChallengeLevelCard_GetSelectAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeLevelCard.GetLevelTextBlocks
struct UDungeonChallengeLevelCard_GetLevelTextBlocks_Params
{
	TArray<class UTLRichTextBlock*>                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeLevelCard.GetEndFocusAnimation
struct UDungeonChallengeLevelCard_GetEndFocusAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeLevelCard.GetDeselectAnimation
struct UDungeonChallengeLevelCard_GetDeselectAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeSelectPanel.GoBackToLevels
struct UDungeonChallengeSelectPanel_GoBackToLevels_Params
{
};

// Function FrontiersUI.DungeonChallengeSelectPanel.GetChallengeRulesCardSet
struct UDungeonChallengeSelectPanel_GetChallengeRulesCardSet_Params
{
	class UDungeonChallengeRulesCardSet*               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeSelectPanel.GetChallengeLevelSelector
struct UDungeonChallengeSelectPanel_GetChallengeLevelSelector_Params
{
	class UDungeonChallengeLevelSelectorWidget*        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonChallengeSelectPanel.GetCardHidingAnimation
struct UDungeonChallengeSelectPanel_GetCardHidingAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonClusterRevealPanel.RevealAffixes
struct UDungeonClusterRevealPanel_RevealAffixes_Params
{
};

// Function FrontiersUI.DungeonClusterRevealPanel.GoToNextState
struct UDungeonClusterRevealPanel_GoToNextState_Params
{
};

// Function FrontiersUI.DungeonClusterRevealPanel.GetUnlockedClusterRulesWidget
struct UDungeonClusterRevealPanel_GetUnlockedClusterRulesWidget_Params
{
	class UDungeonChallengeRuleListWidget*             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonClusterRevealPanel.GetUnlockedClusterChallengeLevelRangeText
struct UDungeonClusterRevealPanel_GetUnlockedClusterChallengeLevelRangeText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonClusterRevealPanel.GetRevealAffixesButtonVisibility
struct UDungeonClusterRevealPanel_GetRevealAffixesButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonClusterRevealPanel.GetRevealAffixesAnimation
struct UDungeonClusterRevealPanel_GetRevealAffixesAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonClusterRevealPanel.GetNextStateButtonVisibility
struct UDungeonClusterRevealPanel_GetNextStateButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonMCWidget.UpdateDialogueAnchor
struct UDungeonMCWidget_UpdateDialogueAnchor_Params
{
	bool                                               bIsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonMCWidget.GetLoopingIdleAnimation
struct UDungeonMCWidget_GetLoopingIdleAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonMCWidget.GetDialogueTextBlock
struct UDungeonMCWidget_GetDialogueTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonMCWidget.GetDialogueAnchor
struct UDungeonMCWidget_GetDialogueAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonMenuPanel.GetResultsPanel
struct UDungeonMenuPanel_GetResultsPanel_Params
{
	class UDungeonResultsPanel*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonMenuPanel.GetMCWidget
struct UDungeonMenuPanel_GetMCWidget_Params
{
	class UDungeonMCWidget*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonMenuPanel.GetClusterWidget
struct UDungeonMenuPanel_GetClusterWidget_Params
{
	class UDungeonClusterWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonMenuPanel.GetClusterRevealPanel
struct UDungeonMenuPanel_GetClusterRevealPanel_Params
{
	class UDungeonClusterRevealPanel*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonMenuPanel.GetChallengeSelectPanel
struct UDungeonMenuPanel_GetChallengeSelectPanel_Params
{
	class UDungeonChallengeSelectPanel*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonMenuPanel.GetChallengeConfirmPanel
struct UDungeonMenuPanel_GetChallengeConfirmPanel_Params
{
	class UDungeonChallengeConfirmPanel*               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonMenuPanel.CancelAndExit
struct UDungeonMenuPanel_CancelAndExit_Params
{
};

// Function FrontiersUI.DungeonResultsPanel.GoToNextState
struct UDungeonResultsPanel_GoToNextState_Params
{
};

// Function FrontiersUI.DungeonResultsPanel.GetSuccessNewLevelTextBlock
struct UDungeonResultsPanel_GetSuccessNewLevelTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonResultsPanel.GetResultTitleTextBlock
struct UDungeonResultsPanel_GetResultTitleTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonResultsPanel.GetCheckpointMessageTextBlock
struct UDungeonResultsPanel_GetCheckpointMessageTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DungeonResultsPanel.AcknowledgeResults
struct UDungeonResultsPanel_AcknowledgeResults_Params
{
};

// Function FrontiersUI.DyeAndTransmogWidget.Transmog
struct UDyeAndTransmogWidget_Transmog_Params
{
};

// Function FrontiersUI.DyeAndTransmogWidget.GetTransmogStylesWidget
struct UDyeAndTransmogWidget_GetTransmogStylesWidget_Params
{
	class UTransmogDyeStylesWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DyeAndTransmogWidget.GetOptionWidgetSwitcher
struct UDyeAndTransmogWidget_GetOptionWidgetSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DyeAndTransmogWidget.GetInventoryWidget
struct UDyeAndTransmogWidget_GetInventoryWidget_Params
{
	class UInventoryGridWithTabsWidget*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DyeAndTransmogWidget.GetDyeStylesWidget
struct UDyeAndTransmogWidget_GetDyeStylesWidget_Params
{
	class UTransmogDyeStylesWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DyeAndTransmogWidget.GetCostWidget
struct UDyeAndTransmogWidget_GetCostWidget_Params
{
	class UCurrencyCostWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DyeAndTransmogWidget.GetButtonWidgetSwitcher
struct UDyeAndTransmogWidget_GetButtonWidgetSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DyeAndTransmogWidget.Dye
struct UDyeAndTransmogWidget_Dye_Params
{
};

// Function FrontiersUI.DyeAndTransmogWidget.CanTransmog
struct UDyeAndTransmogWidget_CanTransmog_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DyeAndTransmogWidget.CanDye
struct UDyeAndTransmogWidget_CanDye_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DyeAndTransmogWidget.BlueprintUpdateState
struct UDyeAndTransmogWidget_BlueprintUpdateState_Params
{
	FrontiersUI_EDyeAndTransmogState                   State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.UpdateComparisonWidget
struct UInventoryItemBaseWidget_UpdateComparisonWidget_Params
{
	bool                                               bIsTooltipOpen;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.GetLoadingWidget
struct UInventoryItemBaseWidget_GetLoadingWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.GetItemNameText
struct UInventoryItemBaseWidget_GetItemNameText_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.GetItemIconImage
struct UInventoryItemBaseWidget_GetItemIconImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.GetItemActorCDO
struct UInventoryItemBaseWidget_GetItemActorCDO_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.GetIconBorder
struct UInventoryItemBaseWidget_GetIconBorder_Params
{
	class UTLBorder*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.GetIconBackground
struct UInventoryItemBaseWidget_GetIconBackground_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.GetElementIconImage
struct UInventoryItemBaseWidget_GetElementIconImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.GetDamageWidget
struct UInventoryItemBaseWidget_GetDamageWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.GetDamageTextBlock
struct UInventoryItemBaseWidget_GetDamageTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.GetDamageOverTimeTextBlock
struct UInventoryItemBaseWidget_GetDamageOverTimeTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.GetComparisonWidget
struct UInventoryItemBaseWidget_GetComparisonWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.GetComparisonMenuAnchor
struct UInventoryItemBaseWidget_GetComparisonMenuAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.GetChallengeLevelBonusTextBlock
struct UInventoryItemBaseWidget_GetChallengeLevelBonusTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.CanSell
struct UInventoryItemBaseWidget_CanSell_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemBaseWidget.BlueprintUpdateWidget
struct UInventoryItemBaseWidget_BlueprintUpdateWidget_Params
{
};

// Function FrontiersUI.TransmogDyeItemWidget.HandleSelectAction
struct UTransmogDyeItemWidget_HandleSelectAction_Params
{
};

// Function FrontiersUI.TransmogDyeItemWidget.GetNewFlag
struct UTransmogDyeItemWidget_GetNewFlag_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeItemWidget.GetLoadedItemContainer
struct UTransmogDyeItemWidget_GetLoadedItemContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeItemWidget.GetGoldText
struct UTransmogDyeItemWidget_GetGoldText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeItemWidget.GetGoldOverlay
struct UTransmogDyeItemWidget_GetGoldOverlay_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeItemWidget.GetDimmer
struct UTransmogDyeItemWidget_GetDimmer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeTooltipWidget.GetNameText
struct UTransmogDyeTooltipWidget_GetNameText_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DyeWidget.SelectDye
struct UDyeWidget_SelectDye_Params
{
};

// Function FrontiersUI.DyeWidget.GetDyeImage
struct UDyeWidget_GetDyeImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EmberWeaponChargeBarWidget.GetPowerWidget
struct UEmberWeaponChargeBarWidget_GetPowerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EmberWeaponChargeWidget.IsEmberWeaponAllowed
struct UEmberWeaponChargeWidget_IsEmberWeaponAllowed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EmberWeaponChargeWidget.GetSkillHotkey
struct UEmberWeaponChargeWidget_GetSkillHotkey_Params
{
	class USkillHotkey*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EmberWeaponChargeWidget.GetSkillActiveDisplay
struct UEmberWeaponChargeWidget_GetSkillActiveDisplay_Params
{
	class USkillActiveWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EmberWeaponChargeWidget.GetEmberWeaponEquippedUIVisibility
struct UEmberWeaponChargeWidget_GetEmberWeaponEquippedUIVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EmberWeaponChargeWidget.GetChargeOrDrainTimeRemaining
struct UEmberWeaponChargeWidget_GetChargeOrDrainTimeRemaining_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EmberWeaponChargeWidget.GetChargeBarPercent
struct UEmberWeaponChargeWidget_GetChargeBarPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EmberWeaponMessageWidget.GetItemIconWidget
struct UEmberWeaponMessageWidget_GetItemIconWidget_Params
{
	class UInventoryItemBaseWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EmberWeaponSkillsWidget.GetSkillTabBackground
struct UEmberWeaponSkillsWidget_GetSkillTabBackground_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EmberWeaponSkillsWidget.GetSkillsInTabList
struct UEmberWeaponSkillsWidget_GetSkillsInTabList_Params
{
	class USkillInTabListWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EmberWeaponSkillsWidget.GetDefaultEmberWeaponWidget
struct UEmberWeaponSkillsWidget_GetDefaultEmberWeaponWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingAffixWidget.GetSlotFilledIcon
struct UEnchantingAffixWidget_GetSlotFilledIcon_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingAffixWidget.BlueprintSetIsHighlighted
struct UEnchantingAffixWidget_BlueprintSetIsHighlighted_Params
{
	bool                                               bIsHighlighted;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingAffixWidget.BlueprintRefresh
struct UEnchantingAffixWidget_BlueprintRefresh_Params
{
};

// Function FrontiersUI.EnchantingAffixWidget.BlueprintPlayEnchantHighlightAnimation
struct UEnchantingAffixWidget_BlueprintPlayEnchantHighlightAnimation_Params
{
	bool                                               bIsDisenchant;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingDetailsWidget.GetRarityTextBlock
struct UEnchantingDetailsWidget_GetRarityTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingDetailsWidget.GetPrimaryAffixWidget
struct UEnchantingDetailsWidget_GetPrimaryAffixWidget_Params
{
	class UAffixListWidget*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingDetailsWidget.GetEnchantButtonEnabled
struct UEnchantingDetailsWidget_GetEnchantButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingDetailsWidget.GetCategoryIcon
struct UEnchantingDetailsWidget_GetCategoryIcon_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingDetailsWidget.GetAffixWidget
struct UEnchantingDetailsWidget_GetAffixWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemDetailsWidget.GetSkillsListWidget
struct UInventoryItemDetailsWidget_GetSkillsListWidget_Params
{
	class USkillLevelBonusListListWidget*              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemDetailsWidget.GetSecondaryAffixListWidget
struct UInventoryItemDetailsWidget_GetSecondaryAffixListWidget_Params
{
	class UAffixListWidget*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemDetailsWidget.GetPrimaryAffixListWidget
struct UInventoryItemDetailsWidget_GetPrimaryAffixListWidget_Params
{
	class UAffixListWidget*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemDetailsWidget.GetNewLegendaryAffixWidget
struct UInventoryItemDetailsWidget_GetNewLegendaryAffixWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemDetailsWidget.GetMouseKeyboardSendToPlayerHintVisibility
struct UInventoryItemDetailsWidget_GetMouseKeyboardSendToPlayerHintVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemDetailsWidget.GetMouseKeyboardSendToPetHintVisibility
struct UInventoryItemDetailsWidget_GetMouseKeyboardSendToPetHintVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemDetailsWidget.GetMouseKeyboardEquipHintVisibility
struct UInventoryItemDetailsWidget_GetMouseKeyboardEquipHintVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemDetailsWidget.GetLockedAffixListWidget
struct UInventoryItemDetailsWidget_GetLockedAffixListWidget_Params
{
	class ULockedAffixListWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemDetailsWidget.GetLegendaryAffixListWidget
struct UInventoryItemDetailsWidget_GetLegendaryAffixListWidget_Params
{
	class UAffixListWidget*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemDetailsWidget.GetEnchantingAffixListWidget
struct UInventoryItemDetailsWidget_GetEnchantingAffixListWidget_Params
{
	class UEnchantingAffixListWidget*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemDetailsWidget.GetBreakDownRewardIcon
struct UInventoryItemDetailsWidget_GetBreakDownRewardIcon_Params
{
	class UGenericResourceWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemDetailsWidget.GetBorder
struct UInventoryItemDetailsWidget_GetBorder_Params
{
	class UTLBorder*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemDetailsWidget.BlueprintSetCraftingMessageText
struct UInventoryItemDetailsWidget_BlueprintSetCraftingMessageText_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               InVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingGearWidget.GetItemIconWidget
struct UEnchantingGearWidget_GetItemIconWidget_Params
{
	class UInventoryItemWidget*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingGearWidget.GetDisenchantButtonEnabled
struct UEnchantingGearWidget_GetDisenchantButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingMenuWidget.GoBack
struct UEnchantingMenuWidget_GoBack_Params
{
};

// Function FrontiersUI.EnchantingMenuWidget.GetSelectedGearWidget
struct UEnchantingMenuWidget_GetSelectedGearWidget_Params
{
	class UEnchantingGearWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingMenuWidget.GetInventoryWidget
struct UEnchantingMenuWidget_GetInventoryWidget_Params
{
	class UInventoryGridWithTabsWidget*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingMenuWidget.GetEnchantingDetailsWidget
struct UEnchantingMenuWidget_GetEnchantingDetailsWidget_Params
{
	class UEnchantingDetailsWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingMenuWidget.GetEnchantActionStatus
struct UEnchantingMenuWidget_GetEnchantActionStatus_Params
{
	FrontiersUI_EEnchantActionStatus                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingMenuWidget.GetCraftingQueueWidget
struct UEnchantingMenuWidget_GetCraftingQueueWidget_Params
{
	class UCraftingQueueWidget*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EnchantingMenuWidget.Enchant
struct UEnchantingMenuWidget_Enchant_Params
{
};

// Function FrontiersUI.EnchantingMenuWidget.Disenchant
struct UEnchantingMenuWidget_Disenchant_Params
{
};

// Function FrontiersUI.EnchantingMenuWidget.BlueprintOnStateChanged
struct UEnchantingMenuWidget_BlueprintOnStateChanged_Params
{
};

// Function FrontiersUI.EnchantingRecipeWidget.GetCategoryIcon
struct UEnchantingRecipeWidget_GetCategoryIcon_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FameRewardWidget.GetRewardText
struct UFameRewardWidget_GetRewardText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FeedbackModal.ShowChatReportUI
struct UFeedbackModal_ShowChatReportUI_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      WidgetDefinition;                                          // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FText                                       ReportSuccessMessage;                                      // (Parm, NativeAccessSpecifierPublic)
	struct FTLUserAccount                              ReportedPlayer;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReportedChatMessage;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FrontiersUI_EUserReportCategory                    ReportCategory;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGenericModalWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FeedbackWidget.UpdateText
struct UFeedbackWidget_UpdateText_Params
{
	struct FText                                       InText;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FeedbackWidget.UpdateScreenshot
struct UFeedbackWidget_UpdateScreenshot_Params
{
	bool                                               bShouldSendScreenshot;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FeedbackWidget.SendFeedback
struct UFeedbackWidget_SendFeedback_Params
{
};

// Function FrontiersUI.FeedbackWidget.GetText
struct UFeedbackWidget_GetText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FeedbackWidget.GetScreenshotImage
struct UFeedbackWidget_GetScreenshotImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FeedbackWidget.GetListWidget
struct UFeedbackWidget_GetListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FeedbackWidget.GetFeedbackBox
struct UFeedbackWidget_GetFeedbackBox_Params
{
	class UMultiLineEditableText*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FeedbackWidget.DisplayScreenshot
struct UFeedbackWidget_DisplayScreenshot_Params
{
};

// Function FrontiersUI.FeedbackWidget.BlueprintUpdateScreenshot
struct UFeedbackWidget_BlueprintUpdateScreenshot_Params
{
	bool                                               bShouldSendScreenshot;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FeedbackWidget.BlueprintUpdateCharCount
struct UFeedbackWidget_BlueprintUpdateCharCount_Params
{
	bool                                               bOverCharCount;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FeedbackOptionWidget.ToggleCheckboxAction
struct UFeedbackOptionWidget_ToggleCheckboxAction_Params
{
};

// Function FrontiersUI.FeedbackOptionWidget.PerformCheckboxOptionAction
struct UFeedbackOptionWidget_PerformCheckboxOptionAction_Params
{
	bool                                               bState;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FeedbackOptionWidget.GetEditableText
struct UFeedbackOptionWidget_GetEditableText_Params
{
	class UMultiLineEditableText*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FeedbackOptionWidget.GetDropdown
struct UFeedbackOptionWidget_GetDropdown_Params
{
	class UTLComboBox*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FeedbackOptionWidget.GetCheckbox
struct UFeedbackOptionWidget_GetCheckbox_Params
{
	class UTLCheckBox*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FloatingHitpointBarWidget.OnDeath
struct UFloatingHitpointBarWidget_OnDeath_Params
{
	class APawn*                                       Dying;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FloatingHitpointBarWidget.GetProgressBar
struct UFloatingHitpointBarWidget_GetProgressBar_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FloatingTextWidget.GetTextBlock
struct UFloatingTextWidget_GetTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FloatingTextWidget.GetRichTextBlock
struct UFloatingTextWidget_GetRichTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortEditWidget.StoreProp
struct UFortEditWidget_StoreProp_Params
{
};

// Function FrontiersUI.FortEditWidget.StoreAll
struct UFortEditWidget_StoreAll_Params
{
};

// Function FrontiersUI.FortEditWidget.SnapToGround
struct UFortEditWidget_SnapToGround_Params
{
};

// Function FrontiersUI.FortEditWidget.RotatePropRight
struct UFortEditWidget_RotatePropRight_Params
{
};

// Function FrontiersUI.FortEditWidget.RotatePropLeft
struct UFortEditWidget_RotatePropLeft_Params
{
};

// Function FrontiersUI.FortEditWidget.PlaceProp
struct UFortEditWidget_PlaceProp_Params
{
};

// Function FrontiersUI.FortEditWidget.PickupProp
struct UFortEditWidget_PickupProp_Params
{
};

// Function FrontiersUI.FortEditWidget.MovePropUp
struct UFortEditWidget_MovePropUp_Params
{
};

// Function FrontiersUI.FortEditWidget.MovePropDown
struct UFortEditWidget_MovePropDown_Params
{
};

// Function FrontiersUI.FortEditWidget.GetStoreAllButtonVisibility
struct UFortEditWidget_GetStoreAllButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortEditWidget.GetPropToPlaceWidget
struct UFortEditWidget_GetPropToPlaceWidget_Params
{
	class UFortPropWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortEditWidget.GetPlaceableAreaWidget
struct UFortEditWidget_GetPlaceableAreaWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortEditWidget.GetHoveredPropTextBlock
struct UFortEditWidget_GetHoveredPropTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortEditWidget.GetGamepadSlashedCircleVisibility
struct UFortEditWidget_GetGamepadSlashedCircleVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortEditWidget.GetGamepadCrosshairVisibility
struct UFortEditWidget_GetGamepadCrosshairVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortEditWidget.GetFortInventoryWidget
struct UFortEditWidget_GetFortInventoryWidget_Params
{
	class UFortInventoryWidget*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortEditWidget.DuplicateProp
struct UFortEditWidget_DuplicateProp_Params
{
};

// Function FrontiersUI.FortEditWidget.CancelPlace
struct UFortEditWidget_CancelPlace_Params
{
};

// Function FrontiersUI.FortInventoryWidget.OnSubMenuOptionSelected
struct UFortInventoryWidget_OnSubMenuOptionSelected_Params
{
	struct FTabbedMenuOption                           Option;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortInventoryWidget.GetSubMenuPanel
struct UFortInventoryWidget_GetSubMenuPanel_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortInventoryWidget.GetSidePanelContainer
struct UFortInventoryWidget_GetSidePanelContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortInventoryWidget.GetSelectedSubCategoryTextBlock
struct UFortInventoryWidget_GetSelectedSubCategoryTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortInventoryWidget.GetNoPropsWidget
struct UFortInventoryWidget_GetNoPropsWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortInventoryWidget.GetFortPropListWidget
struct UFortInventoryWidget_GetFortPropListWidget_Params
{
	class UFortPropListWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortInventoryWidget.GetCurrencyListWidget
struct UFortInventoryWidget_GetCurrencyListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortInventoryWidget.BlueprintUpdateSelectedPropDescription
struct UFortInventoryWidget_BlueprintUpdateSelectedPropDescription_Params
{
	struct FText                                       Name;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortCustomizationButton.ToggleFortEditMenu
struct UFortCustomizationButton_ToggleFortEditMenu_Params
{
};

// Function FrontiersUI.FortCustomizationButton.GetOtherOwnerWidget
struct UFortCustomizationButton_GetOtherOwnerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortCustomizationButton.GetOtherOwnerTextBlock
struct UFortCustomizationButton_GetOtherOwnerTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortCustomizationButton.GetCustomizeWidget
struct UFortCustomizationButton_GetCustomizeWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropCraftingWidget.Place
struct UFortPropCraftingWidget_Place_Params
{
};

// Function FrontiersUI.FortPropCraftingWidget.GetPlaceButtonVisibility
struct UFortPropCraftingWidget_GetPlaceButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropCraftingWidget.GetFortPropWidget
struct UFortPropCraftingWidget_GetFortPropWidget_Params
{
	class UFortPropWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropLimitWidget.BlueprintRefreshLimit
struct UFortPropLimitWidget_BlueprintRefreshLimit_Params
{
	int                                                CurrentComplexity;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxComplexity;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropLevelIconSwitcherWidget.SetState
struct UFortPropLevelIconSwitcherWidget_SetState_Params
{
	FrontiersUI_EIconSwitcherState                     SwitcherState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropExperienceWidget.PlayExperienceGainAnimation
struct UFortPropExperienceWidget_PlayExperienceGainAnimation_Params
{
};

// Function FrontiersUI.FortPropExperienceWidget.GetProgressBar
struct UFortPropExperienceWidget_GetProgressBar_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropExperienceWidget.GetPreviewProgressBar
struct UFortPropExperienceWidget_GetPreviewProgressBar_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropExperienceWidget.GetLevelIcons
struct UFortPropExperienceWidget_GetLevelIcons_Params
{
	TArray<class UFortPropLevelIconSwitcherWidget*>    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropSacrificeCurrencyWidget.SacrificeButtonClicked
struct UFortPropSacrificeCurrencyWidget_SacrificeButtonClicked_Params
{
};

// Function FrontiersUI.FortPropSacrificeCurrencyWidget.PlayExperienceGainAnimation
struct UFortPropSacrificeCurrencyWidget_PlayExperienceGainAnimation_Params
{
};

// Function FrontiersUI.FortPropSacrificeCurrencyWidget.GetGoldLimitWidget
struct UFortPropSacrificeCurrencyWidget_GetGoldLimitWidget_Params
{
	class UGoldLimitWidget*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropSacrificeCurrencyWidget.GetFloatingSacrificeAction
struct UFortPropSacrificeCurrencyWidget_GetFloatingSacrificeAction_Params
{
	class UFloatingGamepadButtonActionWidget*          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropSacrificeCurrencyWidget.GetCurrencyWidget
struct UFortPropSacrificeCurrencyWidget_GetCurrencyWidget_Params
{
	class UCurrencyWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropSacrificeCurrencyWidget.GetCostWidget
struct UFortPropSacrificeCurrencyWidget_GetCostWidget_Params
{
	class UCurrencyWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropSacrificeCurrencyWidget.BlueprintSetup
struct UFortPropSacrificeCurrencyWidget_BlueprintSetup_Params
{
	FrontiersUI_ECanSacrificeState                     State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseFortPropSacrificeWidget.SetBonusText
struct UBaseFortPropSacrificeWidget_SetBonusText_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseFortPropSacrificeWidget.SacrificeSimple
struct UBaseFortPropSacrificeWidget_SacrificeSimple_Params
{
};

// Function FrontiersUI.BaseFortPropSacrificeWidget.GetSacrificeCurrencyWidget
struct UBaseFortPropSacrificeWidget_GetSacrificeCurrencyWidget_Params
{
	class UFortPropSacrificeCurrencyWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseFortPropSacrificeWidget.GetPropExperienceWidget
struct UBaseFortPropSacrificeWidget_GetPropExperienceWidget_Params
{
	class UFortPropExperienceWidget*                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseFortPropSacrificeWidget.GetOwnerMaxLevelTextBlock
struct UBaseFortPropSacrificeWidget_GetOwnerMaxLevelTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseFortPropSacrificeWidget.GetInventoryGrid
struct UBaseFortPropSacrificeWidget_GetInventoryGrid_Params
{
	class UInventoryGridWithTabsWidget*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.BaseFortPropSacrificeWidget.GetDescriptionTextBlock
struct UBaseFortPropSacrificeWidget_GetDescriptionTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropUIInterface.SetFortProp
struct UFortPropUIInterface_SetFortProp_Params
{
	int                                                InventoryId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InProp;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropIconWidget.GetQuantityTextBlock
struct UFortPropIconWidget_GetQuantityTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropIconWidget.GetPropIconImage
struct UFortPropIconWidget_GetPropIconImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropIconWidget.GetItemIconBorder
struct UFortPropIconWidget_GetItemIconBorder_Params
{
	class UTLBorder*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropIconWidget.GetItemIconBackground
struct UFortPropIconWidget_GetItemIconBackground_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropWidget.GetPlaceButtonVisibility
struct UFortPropWidget_GetPlaceButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropWidget.GetPlaceButtonContainer
struct UFortPropWidget_GetPlaceButtonContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropWidget.GetLockOverlay
struct UFortPropWidget_GetLockOverlay_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropWidget.GetExceedLimitTextVisibility
struct UFortPropWidget_GetExceedLimitTextVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropWidget.GetCraftButtonVisibility
struct UFortPropWidget_GetCraftButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropWidget.GetCostListWidget
struct UFortPropWidget_GetCostListWidget_Params
{
	class UCraftingCostListWidget*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FortPropWidget.CraftOrPlace
struct UFortPropWidget_CraftOrPlace_Params
{
};

// Function FrontiersUI.OtherPlayerWidget.Whisper
struct UOtherPlayerWidget_Whisper_Params
{
};

// Function FrontiersUI.OtherPlayerWidget.ViewProfile
struct UOtherPlayerWidget_ViewProfile_Params
{
};

// Function FrontiersUI.OtherPlayerWidget.Invite
struct UOtherPlayerWidget_Invite_Params
{
};

// Function FrontiersUI.OtherPlayerWidget.GetTLUserAccount
struct UOtherPlayerWidget_GetTLUserAccount_Params
{
	struct FTLUserAccount                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OtherPlayerWidget.GetPortraitImage
struct UOtherPlayerWidget_GetPortraitImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OtherPlayerWidget.GetHardcoreText
struct UOtherPlayerWidget_GetHardcoreText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OtherPlayerWidget.GetDifficultyText
struct UOtherPlayerWidget_GetDifficultyText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OtherPlayerWidget.GetCharacterNameTextBlock
struct UOtherPlayerWidget_GetCharacterNameTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OtherPlayerWidget.GetAccountNameTextBlock
struct UOtherPlayerWidget_GetAccountNameTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FriendEntryWidget.InviteToGame
struct UFriendEntryWidget_InviteToGame_Params
{
};

// Function FrontiersUI.FriendEntryWidget.GetHardcoreTextBlock
struct UFriendEntryWidget_GetHardcoreTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FriendEntryWidget.GetFriendStatusWidgetSwitcher
struct UFriendEntryWidget_GetFriendStatusWidgetSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FriendEntryWidget.GetDifficultyTextBlock
struct UFriendEntryWidget_GetDifficultyTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FriendEntryWidget.GetAreaTextBlock
struct UFriendEntryWidget_GetAreaTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FriendsWidget.UpdateFriendsList
struct UFriendsWidget_UpdateFriendsList_Params
{
};

// Function FrontiersUI.FriendsWidget.GetTitleText
struct UFriendsWidget_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FriendsWidget.GetFriendsList
struct UFriendsWidget_GetFriendsList_Params
{
	class UFriendEntryListWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FriendsWidget.ForceUpdateFriendsList
struct UFriendsWidget_ForceUpdateFriendsList_Params
{
};

// Function FrontiersUI.FriendsWidget.CanForceUpdateFriendsList
struct UFriendsWidget_CanForceUpdateFriendsList_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GameMessageWidget.GetGameMessageListWidget
struct UGameMessageWidget_GetGameMessageListWidget_Params
{
	class UGameMessageListWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GamepadButtonActionWidget.GetTextBlock
struct UGamepadButtonActionWidget_GetTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GamepadButtonActionWidget.GetHoldProgressPercent
struct UGamepadButtonActionWidget_GetHoldProgressPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GamepadButtonActionWidget.GetHoldProgressBar
struct UGamepadButtonActionWidget_GetHoldProgressBar_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GamepadButtonActionWidget.GetButtonImage
struct UGamepadButtonActionWidget_GetButtonImage_Params
{
	class UHotkeyWidget*                               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FloatingGamepadButtonActionWidget.SetupAction
struct UFloatingGamepadButtonActionWidget_SetupAction_Params
{
	struct FUIButtonAction                             Action;                                                    // (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.FloatingGamepadButtonActionWidget.OnKeyBindingsChanged
struct UFloatingGamepadButtonActionWidget_OnKeyBindingsChanged_Params
{
};

// Function FrontiersUI.FloatingGamepadButtonActionWidget.GetPromptVisibility
struct UFloatingGamepadButtonActionWidget_GetPromptVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GamepadButtonLegend.GetActionList
struct UGamepadButtonLegend_GetActionList_Params
{
	class UGamepadButtonActionList*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GamepadInteractButtonUIWidget.GetWidgetVisibility
struct UGamepadInteractButtonUIWidget_GetWidgetVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.SetRejectText
struct UGenericModalWidget_SetRejectText_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.SetContent
struct UGenericModalWidget_SetContent_Params
{
	class UClass*                                      WidgetClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFocusContent;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.SetCloseButtonVisibility
struct UGenericModalWidget_SetCloseButtonVisibility_Params
{
	UMG_ESlateVisibility                               InVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.SetAcceptText
struct UGenericModalWidget_SetAcceptText_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.Reject
struct UGenericModalWidget_Reject_Params
{
};

// DelegateFunction FrontiersUI.GenericModalWidget.ModalButtonEvent__DelegateSignature
struct UGenericModalWidget_ModalButtonEvent__DelegateSignature_Params
{
};

// Function FrontiersUI.GenericModalWidget.GetTitleTextBlock
struct UGenericModalWidget_GetTitleTextBlock_Params
{
	class UTextLayoutWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.GetSpecialActionVisibility
struct UGenericModalWidget_GetSpecialActionVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.GetRejectButtonVisibility
struct UGenericModalWidget_GetRejectButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.GetErrorMessageTextBlock
struct UGenericModalWidget_GetErrorMessageTextBlock_Params
{
	class UTextLayoutWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.GetContentPanel
struct UGenericModalWidget_GetContentPanel_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.GetBodyTextBlock
struct UGenericModalWidget_GetBodyTextBlock_Params
{
	class UTextLayoutWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.GetAcceptButtonVisibility
struct UGenericModalWidget_GetAcceptButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.EnableSpecialAction
struct UGenericModalWidget_EnableSpecialAction_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.DoSpecialAction
struct UGenericModalWidget_DoSpecialAction_Params
{
};

// Function FrontiersUI.GenericModalWidget.CreateTwoButtonModalWidget
struct UGenericModalWidget_CreateTwoButtonModalWidget_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       Body;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bShowOverLoadingScreen;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FrontiersUI_ERejectButtonType                      RejectButtonType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGenericModalWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.CreateOneButtonModalWidget
struct UGenericModalWidget_CreateOneButtonModalWidget_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       Body;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bShowOverLoadingScreen;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGenericModalWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.CreateModalWidget
struct UGenericModalWidget_CreateModalWidget_Params
{
	class UClass*                                      WidgetClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       Body;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bShowOverLoadingScreen;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGenericModalWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericModalWidget.Accept
struct UGenericModalWidget_Accept_Params
{
};

// Function FrontiersUI.GenericModalWidgetTextInput.GetInputValue
struct UGenericModalWidgetTextInput_GetInputValue_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericResourceWidget.GetSwitcher
struct UGenericResourceWidget_GetSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericResourceWidget.GetMinionWidget
struct UGenericResourceWidget_GetMinionWidget_Params
{
	class UPetIconWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericResourceWidget.GetItemWidget
struct UGenericResourceWidget_GetItemWidget_Params
{
	class UInventoryItemBaseWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericResourceWidget.GetItemSpawnWidget
struct UGenericResourceWidget_GetItemSpawnWidget_Params
{
	class UItemSpawnWidget*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericResourceWidget.GetItemCostWidget
struct UGenericResourceWidget_GetItemCostWidget_Params
{
	class UInventoryItemCostWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericResourceWidget.GetFortPropWidget
struct UGenericResourceWidget_GetFortPropWidget_Params
{
	class UFortPropIconWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericResourceWidget.GetCurrencyWidget
struct UGenericResourceWidget_GetCurrencyWidget_Params
{
	class UCurrencyWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenericResourceWidget.GetCurrencyCostWidget
struct UGenericResourceWidget_GetCurrencyCostWidget_Params
{
	class UCurrencyCostWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GoldLimitWidget.GetPercentOfMaxGold
struct UGoldLimitWidget_GetPercentOfMaxGold_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GoldLimitWidget.GetMaxGoldVisibility
struct UGoldLimitWidget_GetMaxGoldVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GoldLimitWidget.GetMaxGoldLabel
struct UGoldLimitWidget_GetMaxGoldLabel_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GoldLimitWidget.GetGoldTextColor
struct UGoldLimitWidget_GetGoldTextColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.HelpTabbedMenu.ToggleSkipHelp
struct UHelpTabbedMenu_ToggleSkipHelp_Params
{
};

// Function FrontiersUI.HelpTabbedMenu.SetSkipHelp
struct UHelpTabbedMenu_SetSkipHelp_Params
{
	bool                                               bNewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.HelpTabbedMenu.SetPlatformId
struct UHelpTabbedMenu_SetPlatformId_Params
{
	struct FString                                     PlatformId;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.HelpTabbedMenu.OnSkipHelpChanged
struct UHelpTabbedMenu_OnSkipHelpChanged_Params
{
	bool                                               bSkipHelp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.HelpTabbedMenu.GetSkipHelp
struct UHelpTabbedMenu_GetSkipHelp_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.HelpTabbedMenu.GetHeaderText
struct UHelpTabbedMenu_GetHeaderText_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ClassMechanicsTabbedMenu.GetWidgetSwitcher
struct UClassMechanicsTabbedMenu_GetWidgetSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.HotkeyWidget.OnKeyBindingsChanged
struct UHotkeyWidget_OnKeyBindingsChanged_Params
{
};

// Function FrontiersUI.HotkeyWidget.GetTextBlock
struct UHotkeyWidget_GetTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.HotkeyWidget.GetBGButton
struct UHotkeyWidget_GetBGButton_Params
{
	class UButton*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InboxAttachmentWidget.GetGenericResourceWidget
struct UInboxAttachmentWidget_GetGenericResourceWidget_Params
{
	class UGenericResourceWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InboxEntryWidget.GetItemIconImage
struct UInboxEntryWidget_GetItemIconImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InboxEntryWidget.GetHiddenWidgets
struct UInboxEntryWidget_GetHiddenWidgets_Params
{
	TArray<class UWidget*>                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InboxEntryWidget.GetAttachmentListWidget
struct UInboxEntryWidget_GetAttachmentListWidget_Params
{
	class UInboxAttachmentListWidget*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InboxEntryWidget.ClaimItem
struct UInboxEntryWidget_ClaimItem_Params
{
};

// Function FrontiersUI.InboxWidget.ShowInbox
struct UInboxWidget_ShowInbox_Params
{
	class UObject*                                     Context;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InboxWidget.GetInboxEntryList
struct UInboxWidget_GetInboxEntryList_Params
{
	class UInboxEntryListWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InboxWidget.GetFullWidget
struct UInboxWidget_GetFullWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InboxWidget.GetEmptyWidget
struct UInboxWidget_GetEmptyWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InboxWidget.GetEmptyFullSwitcher
struct UInboxWidget_GetEmptyFullSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InGameMenuWidget.ShowPolicies
struct UInGameMenuWidget_ShowPolicies_Params
{
};

// Function FrontiersUI.InGameMenuWidget.ShowOptionsMenu
struct UInGameMenuWidget_ShowOptionsMenu_Params
{
};

// Function FrontiersUI.InGameMenuWidget.ShowHelpOnHUD
struct UInGameMenuWidget_ShowHelpOnHUD_Params
{
};

// Function FrontiersUI.InGameMenuWidget.ShowFeedbackWidget
struct UInGameMenuWidget_ShowFeedbackWidget_Params
{
};

// Function FrontiersUI.InGameMenuWidget.ShowAccountModal
struct UInGameMenuWidget_ShowAccountModal_Params
{
};

// Function FrontiersUI.InGameMenuWidget.ResetMultiplayerAccount
struct UInGameMenuWidget_ResetMultiplayerAccount_Params
{
};

// Function FrontiersUI.InGameMenuWidget.ReportFort
struct UInGameMenuWidget_ReportFort_Params
{
};

// Function FrontiersUI.InGameMenuWidget.GoToCharacterSelect
struct UInGameMenuWidget_GoToCharacterSelect_Params
{
};

// Function FrontiersUI.InGameMenuWidget.GetUnlinkAccountVisibility
struct UInGameMenuWidget_GetUnlinkAccountVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InGameMenuWidget.GetOptionsEnabled
struct UInGameMenuWidget_GetOptionsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InGameMenuWidget.GetFortReportButtonContainer
struct UInGameMenuWidget_GetFortReportButtonContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InGameMenuWidget.GetExitToTitleVisibility
struct UInGameMenuWidget_GetExitToTitleVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InGameMenuWidget.GetExitToDesktopVisibility
struct UInGameMenuWidget_GetExitToDesktopVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InGameMenuWidget.GetDebugTextBlock
struct UInGameMenuWidget_GetDebugTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InGameMenuWidget.GetCinematicVisibility
struct UInGameMenuWidget_GetCinematicVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InGameMenuWidget.GetChangeProfileVisibility
struct UInGameMenuWidget_GetChangeProfileVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InGameMenuWidget.GetChangeProfileEnabled
struct UInGameMenuWidget_GetChangeProfileEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InGameMenuWidget.GetCannotOpenStoreText
struct UInGameMenuWidget_GetCannotOpenStoreText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InGameMenuWidget.GetCannotOpenStoreMessageVisibility
struct UInGameMenuWidget_GetCannotOpenStoreMessageVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InGameMenuWidget.GetButtonList
struct UInGameMenuWidget_GetButtonList_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InGameMenuWidget.FeedbackCallback
struct UInGameMenuWidget_FeedbackCallback_Params
{
};

// Function FrontiersUI.InGameMenuWidget.ExitToTitleScreen
struct UInGameMenuWidget_ExitToTitleScreen_Params
{
};

// Function FrontiersUI.InGameMenuWidget.ExitToDesktop
struct UInGameMenuWidget_ExitToDesktop_Params
{
};

// Function FrontiersUI.InGameMenuWidget.ChangeProfile
struct UInGameMenuWidget_ChangeProfile_Params
{
};

// Function FrontiersUI.InGameMenuWidget.CanOpenStore
struct UInGameMenuWidget_CanOpenStore_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InstanceResetModalWidget.UpdatePartyMemberStatus
struct UInstanceResetModalWidget_UpdatePartyMemberStatus_Params
{
};

// Function FrontiersUI.InstanceResetModalWidget.ShowPartyMemberStatus
struct UInstanceResetModalWidget_ShowPartyMemberStatus_Params
{
};

// Function FrontiersUI.InstanceResetModalWidget.ShowAfterResetConfirmation
struct UInstanceResetModalWidget_ShowAfterResetConfirmation_Params
{
};

// Function FrontiersUI.InstanceResetModalWidget.ShouldShowPartySection
struct UInstanceResetModalWidget_ShouldShowPartySection_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InstanceResetModalWidget.SetHasDoneReset
struct UInstanceResetModalWidget_SetHasDoneReset_Params
{
	bool                                               inHasDoneReset;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InstanceResetModalWidget.SendPartyInstanceResetRequests
struct UInstanceResetModalWidget_SendPartyInstanceResetRequests_Params
{
};

// Function FrontiersUI.InstanceResetModalWidget.RefreshPartyMembersList
struct UInstanceResetModalWidget_RefreshPartyMembersList_Params
{
};

// Function FrontiersUI.InstanceResetModalWidget.HandleInstanceResetButtonClick
struct UInstanceResetModalWidget_HandleInstanceResetButtonClick_Params
{
};

// Function FrontiersUI.InstanceResetModalWidget.GetPartyMemberNamesKickedFromParty
struct UInstanceResetModalWidget_GetPartyMemberNamesKickedFromParty_Params
{
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InstanceResetModalWidget.GetPartyMemberList
struct UInstanceResetModalWidget_GetPartyMemberList_Params
{
	class UInstanceResetPartyList*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InstanceResetModalWidget.ContinueToPartyStatus
struct UInstanceResetModalWidget_ContinueToPartyStatus_Params
{
};

// Function FrontiersUI.InstanceResetModalWidget.CloseHud
struct UInstanceResetModalWidget_CloseHud_Params
{
};

// Function FrontiersUI.InstanceResetModalWidget.CanDoInstanceResetHere
struct UInstanceResetModalWidget_CanDoInstanceResetHere_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InstanceResetPartyMember.GetAllyInfoWidget
struct UInstanceResetPartyMember_GetAllyInfoWidget_Params
{
	class UAllyInfoWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryComparisonWidget.UnsuppressTooltips
struct UInventoryComparisonWidget_UnsuppressTooltips_Params
{
};

// Function FrontiersUI.InventoryComparisonWidget.GetSelectedPetDetailsWidget
struct UInventoryComparisonWidget_GetSelectedPetDetailsWidget_Params
{
	class UPetDetailsWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryComparisonWidget.GetSelectedItemDetailsWidget
struct UInventoryComparisonWidget_GetSelectedItemDetailsWidget_Params
{
	class UInventoryItemDetailsWidget*                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryComparisonWidget.GetEquippedPetDetailsWidget
struct UInventoryComparisonWidget_GetEquippedPetDetailsWidget_Params
{
	class UPetDetailsWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryComparisonWidget.GetEquippedItemDetailsWidget
struct UInventoryComparisonWidget_GetEquippedItemDetailsWidget_Params
{
	class UInventoryItemDetailsWidget*                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryComparisonWidget.GetComparisonSwitcher
struct UInventoryComparisonWidget_GetComparisonSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemCostWidget.GetItemWidget
struct UInventoryItemCostWidget_GetItemWidget_Params
{
	class UInventoryItemBaseWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemEquippedListWidget.SelectSlotMode
struct UInventoryItemEquippedListWidget_SelectSlotMode_Params
{
	class UInventoryItemWidget*                        InItemWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemEquippedListWidget.ClearSelectMode
struct UInventoryItemEquippedListWidget_ClearSelectMode_Params
{
};

// Function FrontiersUI.InventoryItemEquippedListWidget.BlueprintSetSelectMode
struct UInventoryItemEquippedListWidget_BlueprintSetSelectMode_Params
{
	bool                                               SelectMode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemEquippedWidget.GetSlotIconImage
struct UInventoryItemEquippedWidget_GetSlotIconImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemEquippedWidget.GetSlotBGImage
struct UInventoryItemEquippedWidget_GetSlotBGImage_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemEquippedWidget.GetInventoryItemWidget
struct UInventoryItemEquippedWidget_GetInventoryItemWidget_Params
{
	class UInventoryItemBaseWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemPickUpWidget.GetItemIconWidget
struct UInventoryItemPickUpWidget_GetItemIconWidget_Params
{
	class UInventoryItemBaseWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemWidget.UseOtherItemOnThis
struct UInventoryItemWidget_UseOtherItemOnThis_Params
{
};

// Function FrontiersUI.InventoryItemWidget.Use
struct UInventoryItemWidget_Use_Params
{
};

// Function FrontiersUI.InventoryItemWidget.Unequip
struct UInventoryItemWidget_Unequip_Params
{
};

// Function FrontiersUI.InventoryItemWidget.TryToEquipCosmetic
struct UInventoryItemWidget_TryToEquipCosmetic_Params
{
};

// Function FrontiersUI.InventoryItemWidget.SetItemVisibility
struct UInventoryItemWidget_SetItemVisibility_Params
{
	bool                                               bShowItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemWidget.SendToPetOrPlayerInventory
struct UInventoryItemWidget_SendToPetOrPlayerInventory_Params
{
};

// Function FrontiersUI.InventoryItemWidget.SellConfirm
struct UInventoryItemWidget_SellConfirm_Params
{
	class UGenericModalWidget*                         ModalWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Error;                                                     // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemWidget.Sell
struct UInventoryItemWidget_Sell_Params
{
};

// Function FrontiersUI.InventoryItemWidget.SelectMultipleAction
struct UInventoryItemWidget_SelectMultipleAction_Params
{
};

// Function FrontiersUI.InventoryItemWidget.Sacrifice
struct UInventoryItemWidget_Sacrifice_Params
{
};

// Function FrontiersUI.InventoryItemWidget.OnSold
struct UInventoryItemWidget_OnSold_Params
{
};

// Function FrontiersUI.InventoryItemWidget.OnEquippedCosmetic
struct UInventoryItemWidget_OnEquippedCosmetic_Params
{
};

// Function FrontiersUI.InventoryItemWidget.MoveByClick
struct UInventoryItemWidget_MoveByClick_Params
{
};

// Function FrontiersUI.InventoryItemWidget.GetUseAnimation
struct UInventoryItemWidget_GetUseAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemWidget.GetSelectionIndicator
struct UInventoryItemWidget_GetSelectionIndicator_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemWidget.GetNewFlagVisibility
struct UInventoryItemWidget_GetNewFlagVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemWidget.GetModifiedOverlay
struct UInventoryItemWidget_GetModifiedOverlay_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemWidget.GetEnchantingAffixListWidget
struct UInventoryItemWidget_GetEnchantingAffixListWidget_Params
{
	class UEnchantingAffixListWidget*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemWidget.GetDimmerVisibility
struct UInventoryItemWidget_GetDimmerVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemWidget.FinishMove
struct UInventoryItemWidget_FinishMove_Params
{
};

// Function FrontiersUI.InventoryItemWidget.EquipMultipleAction
struct UInventoryItemWidget_EquipMultipleAction_Params
{
};

// Function FrontiersUI.InventoryItemWidget.Equip
struct UInventoryItemWidget_Equip_Params
{
};

// Function FrontiersUI.InventoryItemWidget.DoSelectItemAction
struct UInventoryItemWidget_DoSelectItemAction_Params
{
};

// Function FrontiersUI.InventoryItemWidget.CreateDraggableCopy
struct UInventoryItemWidget_CreateDraggableCopy_Params
{
	class UInventoryItemWidget*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemWidget.ClearMultipleAction
struct UInventoryItemWidget_ClearMultipleAction_Params
{
};

// Function FrontiersUI.InventoryItemWidget.CancelMove
struct UInventoryItemWidget_CancelMove_Params
{
};

// Function FrontiersUI.InventoryItemWidget.BreakDownOrDestroy
struct UInventoryItemWidget_BreakDownOrDestroy_Params
{
};

// Function FrontiersUI.InventoryItemWidget.BlueprintSetSelectMode
struct UInventoryItemWidget_BlueprintSetSelectMode_Params
{
	bool                                               SelectMode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryItemWidget.BeginMove
struct UInventoryItemWidget_BeginMove_Params
{
};

// Function FrontiersUI.InventoryStashLoadRetryWidget.ShouldEnableRetryButton
struct UInventoryStashLoadRetryWidget_ShouldEnableRetryButton_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryStashLoadRetryWidget.RetryButtonClicked
struct UInventoryStashLoadRetryWidget_RetryButtonClicked_Params
{
};

// Function FrontiersUI.InventoryStashLoadRetryWidget.GetRetryText
struct UInventoryStashLoadRetryWidget_GetRetryText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryStashLoadRetryWidget.GetRetryButtonVisibility
struct UInventoryStashLoadRetryWidget_GetRetryButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryStashLoadRetryWidget.GetRetryButton
struct UInventoryStashLoadRetryWidget_GetRetryButton_Params
{
	class UTLButton*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryStashWidget.RetryStashLoad
struct UInventoryStashWidget_RetryStashLoad_Params
{
};

// Function FrontiersUI.InventoryStashWidget.GetStashSwitcher
struct UInventoryStashWidget_GetStashSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryStashWidget.GetRetryWidget
struct UInventoryStashWidget_GetRetryWidget_Params
{
	class UInventoryStashLoadRetryWidget*              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryStashWidget.GetInventoryGridWidget
struct UInventoryStashWidget_GetInventoryGridWidget_Params
{
	class UInventoryGridWithTabsWidget*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryWidget.ToggleStatsPanel
struct UInventoryWidget_ToggleStatsPanel_Params
{
};

// Function FrontiersUI.InventoryWidget.GetStatsPanel
struct UInventoryWidget_GetStatsPanel_Params
{
	class UTLUserWidget*                               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryWidget.GetPlayerInfoWidget
struct UInventoryWidget_GetPlayerInfoWidget_Params
{
	class UPlayerInfoWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryWidget.GetPetItemsWidget
struct UInventoryWidget_GetPetItemsWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryWidget.GetInventoryGridWidget
struct UInventoryWidget_GetInventoryGridWidget_Params
{
	class UInventoryGridWithTabsWidget*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryWidget.GetEquippedWeaponsWidget
struct UInventoryWidget_GetEquippedWeaponsWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryWidget.GetEquippedGearWidget
struct UInventoryWidget_GetEquippedGearWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.InventoryWidget.BlueprintSetSelectMode
struct UInventoryWidget_BlueprintSetSelectMode_Params
{
	bool                                               SelectMode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ItemNameplateWidget.UpdateNameplate
struct UItemNameplateWidget_UpdateNameplate_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ItemNameplateWidget.ShowNameplate
struct UItemNameplateWidget_ShowNameplate_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreRearrange;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ItemNameplateWidget.HoverOff
struct UItemNameplateWidget_HoverOff_Params
{
};

// Function FrontiersUI.ItemNameplateWidget.Hover
struct UItemNameplateWidget_Hover_Params
{
};

// Function FrontiersUI.ItemNameplateWidget.HideNameplate
struct UItemNameplateWidget_HideNameplate_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ItemNameplateWidget.GetVisibileAnimation
struct UItemNameplateWidget_GetVisibileAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ItemNameplateWidget.GetTextBlock
struct UItemNameplateWidget_GetTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ItemSpawnWidget.GetIconImage
struct UItemSpawnWidget_GetIconImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ItemSpawnWidgetTooltip.GetWarningTextBlockWrapper
struct UItemSpawnWidgetTooltip_GetWarningTextBlockWrapper_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ItemSpawnWidgetTooltip.GetWarningTextBlock
struct UItemSpawnWidgetTooltip_GetWarningTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.KeyBindingsWidget.ResetToDefault
struct UKeyBindingsWidget_ResetToDefault_Params
{
};

// Function FrontiersUI.KeyBindingsWidget.GetKeyBindingList
struct UKeyBindingsWidget_GetKeyBindingList_Params
{
	class UKeyBindingListWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.KeyBindingEntryWidget.ChangeBinding2
struct UKeyBindingEntryWidget_ChangeBinding2_Params
{
};

// Function FrontiersUI.KeyBindingEntryWidget.ChangeBinding1
struct UKeyBindingEntryWidget_ChangeBinding1_Params
{
};

// Function FrontiersUI.LegendaryAffixCollectionEquippedWidget.Refresh
struct ULegendaryAffixCollectionEquippedWidget_Refresh_Params
{
};

// Function FrontiersUI.LegendaryAffixCollectionEquippedWidget.IsInEquipModal
struct ULegendaryAffixCollectionEquippedWidget_IsInEquipModal_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LegendaryAffixCollectionEquippedWidget.GetSlotListWidget
struct ULegendaryAffixCollectionEquippedWidget_GetSlotListWidget_Params
{
	class ULegendaryAffixSlotListWidget*               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LegendaryAffixCollectionEquippedWidget.BlueprintRefresh
struct ULegendaryAffixCollectionEquippedWidget_BlueprintRefresh_Params
{
};

// Function FrontiersUI.LegendaryAffixCollectionEquipModal.GetEquippedWidget
struct ULegendaryAffixCollectionEquipModal_GetEquippedWidget_Params
{
	class ULegendaryAffixCollectionEquippedWidget*     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LegendaryAffixCollectionEquipModal.GetCollectionWidget
struct ULegendaryAffixCollectionEquipModal_GetCollectionWidget_Params
{
	class ULegendaryAffixCollectionWidget*             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LegendaryAffixCollectionEquipModal.EquipSelected
struct ULegendaryAffixCollectionEquipModal_EquipSelected_Params
{
};

// Function FrontiersUI.LegendaryAffixCollectionItemCategoryWidget.GetItemListWidget
struct ULegendaryAffixCollectionItemCategoryWidget_GetItemListWidget_Params
{
	class ULegendaryAffixCollectionItemListWidget*     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LegendaryAffixCollectionItemCategoryWidget.BlueprintRefresh
struct ULegendaryAffixCollectionItemCategoryWidget_BlueprintRefresh_Params
{
};

// Function FrontiersUI.LegendaryAffixCollectionItemWidget.Select
struct ULegendaryAffixCollectionItemWidget_Select_Params
{
};

// Function FrontiersUI.LegendaryAffixCollectionItemWidget.IsUnlocked
struct ULegendaryAffixCollectionItemWidget_IsUnlocked_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LegendaryAffixCollectionItemWidget.GetItemWidget
struct ULegendaryAffixCollectionItemWidget_GetItemWidget_Params
{
	class UInventoryItemBaseWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LegendaryAffixCollectionItemWidget.GetAffixListWidget
struct ULegendaryAffixCollectionItemWidget_GetAffixListWidget_Params
{
	class UAffixListWidget*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LegendaryAffixCollectionItemWidget.Equip
struct ULegendaryAffixCollectionItemWidget_Equip_Params
{
};

// Function FrontiersUI.LegendaryAffixCollectionItemWidget.BlueprintSetup
struct ULegendaryAffixCollectionItemWidget_BlueprintSetup_Params
{
	struct FItemData                                   InItemData;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LegendaryAffixCollectionWidget.GetAllAffixListWidget
struct ULegendaryAffixCollectionWidget_GetAllAffixListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LegendaryAffixCollectionWidget.GetAffixSubCategoryListWidget
struct ULegendaryAffixCollectionWidget_GetAffixSubCategoryListWidget_Params
{
	class ULegendaryAffixCollectionItemCategoryListWidget* ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LegendaryAffixCollectionWidget.BlueprintRefresh
struct ULegendaryAffixCollectionWidget_BlueprintRefresh_Params
{
};

// Function FrontiersUI.LegendaryAffixSlotWidget.SelectSlot
struct ULegendaryAffixSlotWidget_SelectSlot_Params
{
};

// Function FrontiersUI.LegendaryAffixSlotWidget.IsOnEquipScreen
struct ULegendaryAffixSlotWidget_IsOnEquipScreen_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LegendaryAffixSlotWidget.GetItemWidget
struct ULegendaryAffixSlotWidget_GetItemWidget_Params
{
	class ULegendaryAffixCollectionItemWidget*         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LegendaryAffixSlotWidget.BlueprintSetup
struct ULegendaryAffixSlotWidget_BlueprintSetup_Params
{
};

// Function FrontiersUI.LegendaryAffixSlotWidget.BlueprintOnChanged
struct ULegendaryAffixSlotWidget_BlueprintOnChanged_Params
{
};

// Function FrontiersUI.LoadingScreen.ShouldShowLoadingScreen
struct ULoadingScreen_ShouldShowLoadingScreen_Params
{
	class APlayerController*                           Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LoadingScreen.GetTextBlock
struct ULoadingScreen_GetTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LoadingScreen.GetFrontPlateFadeAnimation
struct ULoadingScreen_GetFrontPlateFadeAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LoadingScreen.GetFrontPlate
struct ULoadingScreen_GetFrontPlate_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LoadingScreen.GetFadeToGameAnimation
struct ULoadingScreen_GetFadeToGameAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LoadingScreen.GetCanvasPanel
struct ULoadingScreen_GetCanvasPanel_Params
{
	class UCanvasPanel*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LorePlayerWidget.StopPlayingLore
struct ULorePlayerWidget_StopPlayingLore_Params
{
};

// Function FrontiersUI.LorePlayerWidget.GetTitleTextBlock
struct ULorePlayerWidget_GetTitleTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LorePlayerWidget.GetPortraitImage
struct ULorePlayerWidget_GetPortraitImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LorePlayerWidget.GetPortraitContainer
struct ULorePlayerWidget_GetPortraitContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuBreadcrumbWidget.GetHomeButton
struct UMainMenuBreadcrumbWidget_GetHomeButton_Params
{
	class UMainMenuBreadcrumbButtonWidget*             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuBreadcrumbWidget.GetCurrentButton
struct UMainMenuBreadcrumbWidget_GetCurrentButton_Params
{
	class UMainMenuBreadcrumbButtonWidget*             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuBreadcrumbWidget.GetBackButton
struct UMainMenuBreadcrumbWidget_GetBackButton_Params
{
	class UMainMenuBreadcrumbButtonWidget*             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuBreadcrumbButtonWidget.OnClicked
struct UMainMenuBreadcrumbButtonWidget_OnClicked_Params
{
};

// Function FrontiersUI.MainMenuBreadcrumbButtonWidget.BlueprintSetup
struct UMainMenuBreadcrumbButtonWidget_BlueprintSetup_Params
{
	struct FText                                       StateDisplayName;                                          // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDidChange;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.GenderButtonWidget.OnClicked
struct UGenderButtonWidget_OnClicked_Params
{
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.ToggleHardcore
struct UMainMenuCharacterCreateCustomizeWidget_ToggleHardcore_Params
{
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.RandomizeName
struct UMainMenuCharacterCreateCustomizeWidget_RandomizeName_Params
{
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.OnHardcoreCheckChanged
struct UMainMenuCharacterCreateCustomizeWidget_OnHardcoreCheckChanged_Params
{
	bool                                               bChecked;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.OnCharacterNameChanged
struct UMainMenuCharacterCreateCustomizeWidget_OnCharacterNameChanged_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GoBack
struct UMainMenuCharacterCreateCustomizeWidget_GoBack_Params
{
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetSkinDyeListWidget
struct UMainMenuCharacterCreateCustomizeWidget_GetSkinDyeListWidget_Params
{
	class UDyeListWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetSkinColorContainerWidget
struct UMainMenuCharacterCreateCustomizeWidget_GetSkinColorContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetScrollBox
struct UMainMenuCharacterCreateCustomizeWidget_GetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetNameValidatingVisibility
struct UMainMenuCharacterCreateCustomizeWidget_GetNameValidatingVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetNameErrorVisibility
struct UMainMenuCharacterCreateCustomizeWidget_GetNameErrorVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetHeadsWidget
struct UMainMenuCharacterCreateCustomizeWidget_GetHeadsWidget_Params
{
	class UCustomizationItemCarouselWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetHeadContainerWidget
struct UMainMenuCharacterCreateCustomizeWidget_GetHeadContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetHardcoreCheckBox
struct UMainMenuCharacterCreateCustomizeWidget_GetHardcoreCheckBox_Params
{
	class UTLCheckBox*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetHairsWidget
struct UMainMenuCharacterCreateCustomizeWidget_GetHairsWidget_Params
{
	class UCustomizationItemCarouselWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetHairDyeListWidget
struct UMainMenuCharacterCreateCustomizeWidget_GetHairDyeListWidget_Params
{
	class UDyeListWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetHairContainerWidget
struct UMainMenuCharacterCreateCustomizeWidget_GetHairContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetHairColorContainerWidget
struct UMainMenuCharacterCreateCustomizeWidget_GetHairColorContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetGenderListWidget
struct UMainMenuCharacterCreateCustomizeWidget_GetGenderListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetGenderContainerWidget
struct UMainMenuCharacterCreateCustomizeWidget_GetGenderContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetGamepadSections
struct UMainMenuCharacterCreateCustomizeWidget_GetGamepadSections_Params
{
	TArray<struct FCustomizeSection>                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetDisplayNameWidget
struct UMainMenuCharacterCreateCustomizeWidget_GetDisplayNameWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetDescriptionWidget
struct UMainMenuCharacterCreateCustomizeWidget_GetDescriptionWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetClassSkillsList
struct UMainMenuCharacterCreateCustomizeWidget_GetClassSkillsList_Params
{
	class USkillInTabListWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetClassDescriptionTabbedMenu
struct UMainMenuCharacterCreateCustomizeWidget_GetClassDescriptionTabbedMenu_Params
{
	class UTabbedMenuWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetClassDescriptionSwitcher
struct UMainMenuCharacterCreateCustomizeWidget_GetClassDescriptionSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.GetCharacterNameTextBox
struct UMainMenuCharacterCreateCustomizeWidget_GetCharacterNameTextBox_Params
{
	class UTLEditableTextBox*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.FocusSkills
struct UMainMenuCharacterCreateCustomizeWidget_FocusSkills_Params
{
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.FocusCustomization
struct UMainMenuCharacterCreateCustomizeWidget_FocusCustomization_Params
{
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.EditName
struct UMainMenuCharacterCreateCustomizeWidget_EditName_Params
{
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.ContinueToNextGamepadSection
struct UMainMenuCharacterCreateCustomizeWidget_ContinueToNextGamepadSection_Params
{
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.CanContinue
struct UMainMenuCharacterCreateCustomizeWidget_CanContinue_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.BlueprintUpdateClass
struct UMainMenuCharacterCreateCustomizeWidget_BlueprintUpdateClass_Params
{
	struct FGameplayTag                                ClassTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateCustomizeWidget.BlueprintSetSkillTabText
struct UMainMenuCharacterCreateCustomizeWidget_BlueprintSetSkillTabText_Params
{
	struct FText                                       TabName;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       TabDescription;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EmberWeaponOptionWidget.PickEmberWeapon
struct UEmberWeaponOptionWidget_PickEmberWeapon_Params
{
};

// Function FrontiersUI.EmberWeaponOptionWidget.GetNameText
struct UEmberWeaponOptionWidget_GetNameText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.EmberWeaponOptionWidget.GetEmberWeaponImage
struct UEmberWeaponOptionWidget_GetEmberWeaponImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateEmberWeaponWidget.GetSkillTreeWidgets
struct UMainMenuCharacterCreateEmberWeaponWidget_GetSkillTreeWidgets_Params
{
	TArray<class USkillInTabListWidget*>               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateEmberWeaponWidget.GetSkillsList
struct UMainMenuCharacterCreateEmberWeaponWidget_GetSkillsList_Params
{
	class USkillInTabListWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateEmberWeaponWidget.GetEmberWeaponListWidget
struct UMainMenuCharacterCreateEmberWeaponWidget_GetEmberWeaponListWidget_Params
{
	class UEmberWeaponOptionListWidget*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateEmberWeaponWidget.GetContinueButtonVisiblity
struct UMainMenuCharacterCreateEmberWeaponWidget_GetContinueButtonVisiblity_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateEmberWeaponWidget.Continue
struct UMainMenuCharacterCreateEmberWeaponWidget_Continue_Params
{
};

// Function FrontiersUI.MainMenuCharacterCreateEmberWeaponWidget.BlueprintShowSkillTrees
struct UMainMenuCharacterCreateEmberWeaponWidget_BlueprintShowSkillTrees_Params
{
};

// Function FrontiersUI.MainMenuCharacterCreateEmberWeaponWidget.BlueprintShowEmberWeaponDescription
struct UMainMenuCharacterCreateEmberWeaponWidget_BlueprintShowEmberWeaponDescription_Params
{
	struct FText                                       Name;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSkillsTabData                              TabData;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateEmberWeaponWidget.BlueprintSetupSkillTab
struct UMainMenuCharacterCreateEmberWeaponWidget_BlueprintSetupSkillTab_Params
{
	int                                                TabIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsTabData                              TabData;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateEmberWeaponWidget.BlueprintSetupSkillHeaders
struct UMainMenuCharacterCreateEmberWeaponWidget_BlueprintSetupSkillHeaders_Params
{
	struct FText                                       CharacterName;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreatePickerWidget.ContinueToNextState
struct UMainMenuCharacterCreatePickerWidget_ContinueToNextState_Params
{
};

// Function FrontiersUI.MainMenuCharacterCreateReadyToDeployWidget.ReadyToDeploy
struct UMainMenuCharacterCreateReadyToDeployWidget_ReadyToDeploy_Params
{
};

// Function FrontiersUI.MainMenuCharacterCreateReadyToDeployWidget.GetWaitingToDeployVisibility
struct UMainMenuCharacterCreateReadyToDeployWidget_GetWaitingToDeployVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateReadyToDeployWidget.GetGamepadDifficultyLabelTextBlock
struct UMainMenuCharacterCreateReadyToDeployWidget_GetGamepadDifficultyLabelTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateReadyToDeployWidget.GetDifficultyPanel
struct UMainMenuCharacterCreateReadyToDeployWidget_GetDifficultyPanel_Params
{
	class UDifficultyPanel*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateReadyToDeployWidget.GetDifficultyButtonLabelTextBlock
struct UMainMenuCharacterCreateReadyToDeployWidget_GetDifficultyButtonLabelTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateReadyToDeployWidget.GetDeployCharacterButtonText
struct UMainMenuCharacterCreateReadyToDeployWidget_GetDeployCharacterButtonText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateReadyToDeployWidget.GetDeployCharacterButtonEnabled
struct UMainMenuCharacterCreateReadyToDeployWidget_GetDeployCharacterButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterCreateReadyToDeployWidget.ChangeDifficulty
struct UMainMenuCharacterCreateReadyToDeployWidget_ChangeDifficulty_Params
{
};

// Function FrontiersUI.MainMenuCharacterCreateReadyToDeployWidget.CanChangeDifficulty
struct UMainMenuCharacterCreateReadyToDeployWidget_CanChangeDifficulty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.VerifyEmail
struct UMainMenuCharacterSelectWidget_VerifyEmail_Params
{
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.SetDifficultyAndEnterGame
struct UMainMenuCharacterSelectWidget_SetDifficultyAndEnterGame_Params
{
	int                                                InDifficulty;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.LinkArcAccount
struct UMainMenuCharacterSelectWidget_LinkArcAccount_Params
{
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetWaitingToEnterVisibility
struct UMainMenuCharacterSelectWidget_GetWaitingToEnterVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetVerifyEmailButtonActionWidget
struct UMainMenuCharacterSelectWidget_GetVerifyEmailButtonActionWidget_Params
{
	class UFloatingGamepadButtonActionWidget*          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetPlayerInfoWidget
struct UMainMenuCharacterSelectWidget_GetPlayerInfoWidget_Params
{
	class UPlayerInfoWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetPlayButtonText
struct UMainMenuCharacterSelectWidget_GetPlayButtonText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetLinkArcAccountButtonText
struct UMainMenuCharacterSelectWidget_GetLinkArcAccountButtonText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetLinkAccountPanel
struct UMainMenuCharacterSelectWidget_GetLinkAccountPanel_Params
{
	class UAccountLinkPanel*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetLinkAccountButtonVisibility
struct UMainMenuCharacterSelectWidget_GetLinkAccountButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetLinkAccountButtonActionWidget
struct UMainMenuCharacterSelectWidget_GetLinkAccountButtonActionWidget_Params
{
	class UFloatingGamepadButtonActionWidget*          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetHarvestEmailVisibility
struct UMainMenuCharacterSelectWidget_GetHarvestEmailVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetEnterGameButtonText
struct UMainMenuCharacterSelectWidget_GetEnterGameButtonText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetEnterGameButtonEnabled
struct UMainMenuCharacterSelectWidget_GetEnterGameButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetDifficultyPanel
struct UMainMenuCharacterSelectWidget_GetDifficultyPanel_Params
{
	class UDifficultyPanel*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetCreateAccountPanel
struct UMainMenuCharacterSelectWidget_GetCreateAccountPanel_Params
{
	class UAccountCreatePanel*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetCharacterSlotListWidget
struct UMainMenuCharacterSelectWidget_GetCharacterSlotListWidget_Params
{
	class UMainMenuCharacterSlotListWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.GetCharacterSlotCountTextBlock
struct UMainMenuCharacterSelectWidget_GetCharacterSlotCountTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.EnterGame
struct UMainMenuCharacterSelectWidget_EnterGame_Params
{
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.DeleteCharacter
struct UMainMenuCharacterSelectWidget_DeleteCharacter_Params
{
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.CreateCharacter
struct UMainMenuCharacterSelectWidget_CreateCharacter_Params
{
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.ChangeDifficulty
struct UMainMenuCharacterSelectWidget_ChangeDifficulty_Params
{
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.CanLinkArcAccount
struct UMainMenuCharacterSelectWidget_CanLinkArcAccount_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.CanEnterGame
struct UMainMenuCharacterSelectWidget_CanEnterGame_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSelectWidget.BlueprintUpdateCharacterSlots
struct UMainMenuCharacterSelectWidget_BlueprintUpdateCharacterSlots_Params
{
	int                                                NumCharacters;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSlots;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.SelectSlot
struct UMainMenuCharacterSlotWidget_SelectSlot_Params
{
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.GetRelicNameWidget
struct UMainMenuCharacterSlotWidget_GetRelicNameWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.GetRelicContainer
struct UMainMenuCharacterSlotWidget_GetRelicContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.GetPetPortraitWidget
struct UMainMenuCharacterSlotWidget_GetPetPortraitWidget_Params
{
	class UPetIconWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.GetPetNameWidget
struct UMainMenuCharacterSlotWidget_GetPetNameWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.GetPetContainerWidget
struct UMainMenuCharacterSlotWidget_GetPetContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.GetLevelWidget
struct UMainMenuCharacterSlotWidget_GetLevelWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.GetHardcoreWidget
struct UMainMenuCharacterSlotWidget_GetHardcoreWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.GetDifficultyWidget
struct UMainMenuCharacterSlotWidget_GetDifficultyWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.GetDeadHardcoreWidget
struct UMainMenuCharacterSlotWidget_GetDeadHardcoreWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.GetCharacterPortraitWidget
struct UMainMenuCharacterSlotWidget_GetCharacterPortraitWidget_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.GetCharacterNameWidget
struct UMainMenuCharacterSlotWidget_GetCharacterNameWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.GetCharacterClassNameWidget
struct UMainMenuCharacterSlotWidget_GetCharacterClassNameWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.DoSelectBP
struct UMainMenuCharacterSlotWidget_DoSelectBP_Params
{
};

// Function FrontiersUI.MainMenuCharacterSlotWidget.BlueprintRefresh
struct UMainMenuCharacterSlotWidget_BlueprintRefresh_Params
{
};

// Function FrontiersUI.TLBaseHUD.ToggleWidget
struct UTLBaseHUD_ToggleWidget_Params
{
	FrontiersUI_ETLWidget                              Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLBaseHUD.ShowOptionsMenu
struct UTLBaseHUD_ShowOptionsMenu_Params
{
};

// Function FrontiersUI.TLBaseHUD.ShowFeedbackWidget
struct UTLBaseHUD_ShowFeedbackWidget_Params
{
};

// Function FrontiersUI.TLBaseHUD.SetWidgetVisibilityForPlayer
struct UTLBaseHUD_SetWidgetVisibilityForPlayer_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FrontiersUI_ETLWidget                              Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               InVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLBaseHUD.SetWidgetVisibility
struct UTLBaseHUD_SetWidgetVisibility_Params
{
	FrontiersUI_ETLWidget                              Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               InVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLBaseHUD.PlayCinematic
struct UTLBaseHUD_PlayCinematic_Params
{
	class UFullscreenVideoWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLBaseHUD.GetLoadingScreen
struct UTLBaseHUD_GetLoadingScreen_Params
{
	class UUserWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLBaseHUD.GetCanvasPanel
struct UTLBaseHUD_GetCanvasPanel_Params
{
	class UCanvasPanel*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLBaseHUD.FindWidgetOfClass
struct UTLBaseHUD_FindWidgetOfClass_Params
{
	class UClass*                                      WidgetClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLBaseHUD.CloseTLWidget
struct UTLBaseHUD_CloseTLWidget_Params
{
	FrontiersUI_ETLWidget                              Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLBaseHUD.CloseAllUIWindows
struct UTLBaseHUD_CloseAllUIWindows_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLBaseHUD.BlueprintGetWidget
struct UTLBaseHUD_BlueprintGetWidget_Params
{
	FrontiersUI_ETLWidget                              Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLBaseHUD.AddWidgetToHUDCentered
struct UTLBaseHUD_AddWidgetToHUDCentered_Params
{
	class UClass*                                      WidgetClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLBaseHUD.AddWidgetToHUD
struct UTLBaseHUD_AddWidgetToHUD_Params
{
	struct FCanvasWidget                               Widget;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UUserWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuHUD.ToggleMenu
struct UMainMenuHUD_ToggleMenu_Params
{
};

// Function FrontiersUI.MainMenuHUD.QuitGame
struct UMainMenuHUD_QuitGame_Params
{
};

// Function FrontiersUI.MainMenuHUD.PlayFadeToBlackAnimation
struct UMainMenuHUD_PlayFadeToBlackAnimation_Params
{
};

// Function FrontiersUI.MainMenuHUD.OnFadedToBlack
struct UMainMenuHUD_OnFadedToBlack_Params
{
};

// Function FrontiersUI.MainMenuHUD.GoBack
struct UMainMenuHUD_GoBack_Params
{
};

// Function FrontiersUI.MainMenuHUD.GetUIContainer
struct UMainMenuHUD_GetUIContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuHUD.GetOptionsButtonVisibility
struct UMainMenuHUD_GetOptionsButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuHUD.GetLetterboxContainer
struct UMainMenuHUD_GetLetterboxContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuHUD.GetLetterboxBars
struct UMainMenuHUD_GetLetterboxBars_Params
{
	TArray<class UTLImage*>                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuHUD.GetBreadcrumbWidget
struct UMainMenuHUD_GetBreadcrumbWidget_Params
{
	class UMainMenuBreadcrumbWidget*                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuHUD.GetBackButtonVisibility
struct UMainMenuHUD_GetBackButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuHUD.BackgroundClicked
struct UMainMenuHUD_BackgroundClicked_Params
{
};

// Function FrontiersUI.MainMenuLoginWidget.GetWaitingToLoginVisibility
struct UMainMenuLoginWidget_GetWaitingToLoginVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuLoginWidget.GetLoginButtonText
struct UMainMenuLoginWidget_GetLoginButtonText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuLoginWidget.GetLoginButtonEnabled
struct UMainMenuLoginWidget_GetLoginButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuPlatformSignOnWidget.VisibleIfUserIsIdentified
struct UMainMenuPlatformSignOnWidget_VisibleIfUserIsIdentified_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuPlatformSignOnWidget.VisibleIfUserCannotPlay
struct UMainMenuPlatformSignOnWidget_VisibleIfUserCannotPlay_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuPlatformSignOnWidget.PlayOnline
struct UMainMenuPlatformSignOnWidget_PlayOnline_Params
{
};

// Function FrontiersUI.MainMenuPlatformSignOnWidget.PlayOffline
struct UMainMenuPlatformSignOnWidget_PlayOffline_Params
{
};

// Function FrontiersUI.MainMenuPlatformSignOnWidget.IsUserUnidentified
struct UMainMenuPlatformSignOnWidget_IsUserUnidentified_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuPlatformSignOnWidget.IsUserIdentified
struct UMainMenuPlatformSignOnWidget_IsUserIdentified_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuPlatformSignOnWidget.IdentifyUser
struct UMainMenuPlatformSignOnWidget_IdentifyUser_Params
{
};

// Function FrontiersUI.MainMenuPlatformSignOnWidget.HiddenIfUserIsIdentified
struct UMainMenuPlatformSignOnWidget_HiddenIfUserIsIdentified_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuPlatformSignOnWidget.GetPlayOfflineButton
struct UMainMenuPlatformSignOnWidget_GetPlayOfflineButton_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuPlatformSignOnWidget.GetOfflineComingSoonLabel
struct UMainMenuPlatformSignOnWidget_GetOfflineComingSoonLabel_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuPlatformSignOnWidget.GetMessageText
struct UMainMenuPlatformSignOnWidget_GetMessageText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuPlatformSignOnWidget.GetIdentifyUserWidget
struct UMainMenuPlatformSignOnWidget_GetIdentifyUserWidget_Params
{
	class UHotkeyWidget*                               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MainMenuPlatformSignOnWidget.ExitToDesktop
struct UMainMenuPlatformSignOnWidget_ExitToDesktop_Params
{
};

// Function FrontiersUI.MapMarkerWidget.GetLabelTextUFunction
struct UMapMarkerWidget_GetLabelTextUFunction_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LocalPlayerMapMarkerWidget.GetLabelTextUFunction
struct ULocalPlayerMapMarkerWidget_GetLabelTextUFunction_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.LocalPlayerMapMarkerWidget.GetElementToTransform
struct ULocalPlayerMapMarkerWidget_GetElementToTransform_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLRichTextBlock.SetStyleClass
struct UTLRichTextBlock_SetStyleClass_Params
{
	class UClass*                                      Style;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLRichTextBlock.SetColor
struct UTLRichTextBlock_SetColor_Params
{
	struct FLinearColor                                InColor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapPanel.ToggleMap
struct UMapPanel_ToggleMap_Params
{
};

// Function FrontiersUI.MapPanel.ShowSpokeMap
struct UMapPanel_ShowSpokeMap_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Gadget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapPanel.RightFocus
struct UMapPanel_RightFocus_Params
{
};

// Function FrontiersUI.MapPanel.OnAreaChanged
struct UMapPanel_OnAreaChanged_Params
{
	struct FGuid                                       NewAreaId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewAreaName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapPanel.LeftFocus
struct UMapPanel_LeftFocus_Params
{
};

// Function FrontiersUI.MapPanel.GetSpokeWrapper
struct UMapPanel_GetSpokeWrapper_Params
{
	class UMapSpokeWrapper*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapPanel.GetQuestLog
struct UMapPanel_GetQuestLog_Params
{
	class UQuestLogWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapPanel.CanUseToggleMapAction
struct UMapPanel_CanUseToggleMapAction_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSpokeWidget.GetNextListWidget
struct UMapSpokeWidget_GetNextListWidget_Params
{
	SlateCore_EUINavigation                            Direction;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSpokeWidget.GetAreaWidgetList
struct UMapSpokeWidget_GetAreaWidgetList_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSpokeWrapper.UpdateLabels
struct UMapSpokeWrapper_UpdateLabels_Params
{
	float                                              CurrentOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSpokeWrapper.UpdateCompass
struct UMapSpokeWrapper_UpdateCompass_Params
{
};

// Function FrontiersUI.MapSpokeWrapper.ScrollMapOffset
struct UMapSpokeWrapper_ScrollMapOffset_Params
{
	float                                              CurrentOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSpokeWrapper.GetSpokePanelWidget
struct UMapSpokeWrapper_GetSpokePanelWidget_Params
{
	class UCanvasPanel*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSpokeWrapper.GetScrollBox
struct UMapSpokeWrapper_GetScrollBox_Params
{
	class UTLScrollBox*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSpokeWrapper.GetMapSidebar
struct UMapSpokeWrapper_GetMapSidebar_Params
{
	class UMapSidebar*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSpokeWrapper.GetInfestedLabel
struct UMapSpokeWrapper_GetInfestedLabel_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSpokeWrapper.GetGoblinLabel
struct UMapSpokeWrapper_GetGoblinLabel_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSpokeWrapper.GetEchonokLabel
struct UMapSpokeWrapper_GetEchonokLabel_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSpokeWrapper.GetAreaMap
struct UMapSpokeWrapper_GetAreaMap_Params
{
	class UMapWidget*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSidebar.UpdateCompassSwitcher
struct UMapSidebar_UpdateCompassSwitcher_Params
{
};

// Function FrontiersUI.MapSidebar.HandleInstanceResetClick
struct UMapSidebar_HandleInstanceResetClick_Params
{
};

// Function FrontiersUI.MapSidebar.GetResetInstanceWidgetList
struct UMapSidebar_GetResetInstanceWidgetList_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSidebar.GetPortalWidget
struct UMapSidebar_GetPortalWidget_Params
{
	class UAreaInSpokeWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSidebar.GetFortWidget
struct UMapSidebar_GetFortWidget_Params
{
	class UAreaInSpokeWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapSidebar.GetAreaWidgetList
struct UMapSidebar_GetAreaWidgetList_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapCompassWidget.ToggleMap
struct UMapCompassWidget_ToggleMap_Params
{
};

// Function FrontiersUI.MapCompassWidget.PlayCompassAnimation
struct UMapCompassWidget_PlayCompassAnimation_Params
{
};

// Function FrontiersUI.MapCompassWidget.IsShowingAreaMap
struct UMapCompassWidget_IsShowingAreaMap_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AreaInSpokeWidget.UpdateBindIndex
struct UAreaInSpokeWidget_UpdateBindIndex_Params
{
};

// Function FrontiersUI.AreaInSpokeWidget.GetYouAreHereImage
struct UAreaInSpokeWidget_GetYouAreHereImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AreaInSpokeWidget.GetSpokeQuestIcon
struct UAreaInSpokeWidget_GetSpokeQuestIcon_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AreaInSpokeWidget.GetNeighborList
struct UAreaInSpokeWidget_GetNeighborList_Params
{
	class UTextListWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AreaInSpokeWidget.GetButton
struct UAreaInSpokeWidget_GetButton_Params
{
	class UButton*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AreaInSpokeWidget.GetAreaNameWithLevelText
struct UAreaInSpokeWidget_GetAreaNameWithLevelText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AreaInSpokeWidget.GetAreaNameText
struct UAreaInSpokeWidget_GetAreaNameText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AreaInSpokeWidget.FindMapPanelWidgetInParent
struct UAreaInSpokeWidget_FindMapPanelWidgetInParent_Params
{
	class UTLUserWidget*                               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.AreaInSpokeWidget.ButtonClicked
struct UAreaInSpokeWidget_ButtonClicked_Params
{
};

// Function FrontiersUI.SpokeInWorldWidget.GetSpokeNameText
struct USpokeInWorldWidget_GetSpokeNameText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SpokeInWorldWidget.ButtonClicked
struct USpokeInWorldWidget_ButtonClicked_Params
{
};

// Function FrontiersUI.MapWorldWidget.GetSpokeList
struct UMapWorldWidget_GetSpokeList_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapWidget.RefreshMarkers
struct UMapWidget_RefreshMarkers_Params
{
};

// Function FrontiersUI.MapWidget.RefreshMap
struct UMapWidget_RefreshMap_Params
{
};

// Function FrontiersUI.MapWidget.GetVirtualCursorPanel
struct UMapWidget_GetVirtualCursorPanel_Params
{
	class UVirtualCursorPanel*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapWidget.GetOverlayWidget
struct UMapWidget_GetOverlayWidget_Params
{
	class UOverlay*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapWidget.GetMarkerListWidget
struct UMapWidget_GetMarkerListWidget_Params
{
	class UMapMarkerListWidget*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MapWidget.GetMapImageWidget
struct UMapWidget_GetMapImageWidget_Params
{
	class UImage*                                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MessageContainerWidget.GetPanel
struct UMessageContainerWidget_GetPanel_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MessageContainerWidget.GetActiveWidget
struct UMessageContainerWidget_GetActiveWidget_Params
{
	class UTLUserWidget*                               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MessageWidget.ShowMessageOfClass
struct UMessageWidget_ShowMessageOfClass_Params
{
	class UObject*                                     WorldContext;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       InMessage;                                                 // (Parm, NativeAccessSpecifierPublic)
	class UClass*                                      MessageClass;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MessageWidget.ShowMessage
struct UMessageWidget_ShowMessage_Params
{
	struct FText                                       InMessage;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FrontiersUI_EUIMessageType                         Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MessageWidget.ShowColoredMessage
struct UMessageWidget_ShowColoredMessage_Params
{
	struct FText                                       InMessage;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSlateColor                                 InColor;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MessageWidget.HideMessage
struct UMessageWidget_HideMessage_Params
{
};

// Function FrontiersUI.MiniHelpWidget.GetDesiredVisibility
struct UMiniHelpWidget_GetDesiredVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TimeOfDayWidget.GetPercentAnimation
struct UTimeOfDayWidget_GetPercentAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.OnDifficultyChangedByIndex
struct UMiniMapWidget_OnDifficultyChangedByIndex_Params
{
	int                                                Difficulty;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.OnAreaChanged
struct UMiniMapWidget_OnAreaChanged_Params
{
	struct FGuid                                       NewAreaId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewAreaName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetSpokeIconWidget
struct UMiniMapWidget_GetSpokeIconWidget_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetSpokeContainerWidget
struct UMiniMapWidget_GetSpokeContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetMonsterScalingContainerWidget
struct UMiniMapWidget_GetMonsterScalingContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetMonsterMoveSpeedScalingTextWidget
struct UMiniMapWidget_GetMonsterMoveSpeedScalingTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetMonsterHealthScalingTextWidget
struct UMiniMapWidget_GetMonsterHealthScalingTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetMonsterDamageScalingTextWidget
struct UMiniMapWidget_GetMonsterDamageScalingTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetMapWidget
struct UMiniMapWidget_GetMapWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetFortNameWidget
struct UMiniMapWidget_GetFortNameWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetDungeonDetrimentsTextWidget
struct UMiniMapWidget_GetDungeonDetrimentsTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetDungeonDetrimentsContainerWidget
struct UMiniMapWidget_GetDungeonDetrimentsContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetDungeonDecorativeWidgets
struct UMiniMapWidget_GetDungeonDecorativeWidgets_Params
{
	TArray<class UWidget*>                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetDungeonChallengeLevelTextWidget
struct UMiniMapWidget_GetDungeonChallengeLevelTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetDungeonBenefitsTextWidget
struct UMiniMapWidget_GetDungeonBenefitsTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetDungeonBenefitsContainerWidget
struct UMiniMapWidget_GetDungeonBenefitsContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetDifficultyWidget
struct UMiniMapWidget_GetDifficultyWidget_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetDifficultyBadgeSwitcher
struct UMiniMapWidget_GetDifficultyBadgeSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetDifficultyAndLevelContainerWidget
struct UMiniMapWidget_GetDifficultyAndLevelContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetAreaNameWidget
struct UMiniMapWidget_GetAreaNameWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetAreaLevelRangeWidget
struct UMiniMapWidget_GetAreaLevelRangeWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetAffixTextWidget
struct UMiniMapWidget_GetAffixTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.MiniMapWidget.GetAffixesContainerWidget
struct UMiniMapWidget_GetAffixesContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.Nameplate.SetupNameplate
struct UNameplate_SetupNameplate_Params
{
	class ATLCharacter*                                Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetComponent*                            WidgetComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.Nameplate.GetLevelText
struct UNameplate_GetLevelText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.Nameplate.GetHardcoreWidget
struct UNameplate_GetHardcoreWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.Nameplate.GetDungeonDecorativeWidgets
struct UNameplate_GetDungeonDecorativeWidgets_Params
{
	TArray<class UWidget*>                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.Nameplate.GetDisplayNameText
struct UNameplate_GetDisplayNameText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.Nameplate.GetDifficultyIcon
struct UNameplate_GetDifficultyIcon_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.Nameplate.GetAccountNameVisibility
struct UNameplate_GetAccountNameVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.Nameplate.GetAccountNameText
struct UNameplate_GetAccountNameText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NavigationHeader.GetRightSelectionButtonVisibility
struct UNavigationHeader_GetRightSelectionButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NavigationHeader.GetLeftSelectionButtonVisibility
struct UNavigationHeader_GetLeftSelectionButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NavigationHeader.GetButtonList
struct UNavigationHeader_GetButtonList_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SocialHUDNotificationWidget.OpenFriendsMenu
struct USocialHUDNotificationWidget_OpenFriendsMenu_Params
{
};

// Function FrontiersUI.NotificationsWidget.OnNotificationMadeVisible
struct UNotificationsWidget_OnNotificationMadeVisible_Params
{
	FrontiersUI_EUINotification                        Notification;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NotificationsWidget.GoToSkills
struct UNotificationsWidget_GoToSkills_Params
{
};

// Function FrontiersUI.NotificationsWidget.GoToLegendaryAffixCollection
struct UNotificationsWidget_GoToLegendaryAffixCollection_Params
{
};

// Function FrontiersUI.NotificationsWidget.GoToInventory
struct UNotificationsWidget_GoToInventory_Params
{
};

// Function FrontiersUI.NotificationsWidget.GoToContracts
struct UNotificationsWidget_GoToContracts_Params
{
};

// Function FrontiersUI.NotificationsWidget.GetUnclaimedContractRewardsVisibility
struct UNotificationsWidget_GetUnclaimedContractRewardsVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NotificationsWidget.GetNotificationWidget
struct UNotificationsWidget_GetNotificationWidget_Params
{
	FrontiersUI_EUINotification                        Notification;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NumberPickerWidget.OnTextCommitted
struct UNumberPickerWidget_OnTextCommitted_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NumberPickerWidget.OnTextChanged
struct UNumberPickerWidget_OnTextChanged_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NumberPickerWidget.Increment
struct UNumberPickerWidget_Increment_Params
{
};

// Function FrontiersUI.NumberPickerWidget.GetValueAsInt
struct UNumberPickerWidget_GetValueAsInt_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NumberPickerWidget.GetValue
struct UNumberPickerWidget_GetValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NumberPickerWidget.GetTextBox
struct UNumberPickerWidget_GetTextBox_Params
{
	class UEditableTextBox*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NumberPickerWidget.GetIncrementButton
struct UNumberPickerWidget_GetIncrementButton_Params
{
	class UButton*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NumberPickerWidget.GetDecrementButton
struct UNumberPickerWidget_GetDecrementButton_Params
{
	class UButton*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NumberPickerWidget.EndClickAndHold
struct UNumberPickerWidget_EndClickAndHold_Params
{
};

// Function FrontiersUI.NumberPickerWidget.Decrement
struct UNumberPickerWidget_Decrement_Params
{
};

// Function FrontiersUI.NumberPickerWidget.CanIncrement
struct UNumberPickerWidget_CanIncrement_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NumberPickerWidget.CanDecrement
struct UNumberPickerWidget_CanDecrement_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.NumberPickerWidget.BeginClickAndHoldIncrement
struct UNumberPickerWidget_BeginClickAndHoldIncrement_Params
{
};

// Function FrontiersUI.NumberPickerWidget.BeginClickAndHoldDecrement
struct UNumberPickerWidget_BeginClickAndHoldDecrement_Params
{
};

// Function FrontiersUI.ListedObjectWidgetInterface.OnDataSet
struct UListedObjectWidgetInterface_OnDataSet_Params
{
	class UObject*                                     Object;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OnlineStoreEntryWidget.ViewItem
struct UOnlineStoreEntryWidget_ViewItem_Params
{
};

// Function FrontiersUI.OnlineStoreEntryWidget.GetCatalogEntryWidget
struct UOnlineStoreEntryWidget_GetCatalogEntryWidget_Params
{
	class UCatalogEntryWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OptionsMenuWidget.GetVideoSettingsVisibility
struct UOptionsMenuWidget_GetVideoSettingsVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OptionsMenuWidget.GetSafeZoneOptionWidget
struct UOptionsMenuWidget_GetSafeZoneOptionWidget_Params
{
	class UOptionWidget*                               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OptionsMenuWidget.GetOptionListWidget
struct UOptionsMenuWidget_GetOptionListWidget_Params
{
	class UOptionListWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OptionsMenuWidget.GetGamepadLegendVisibility
struct UOptionsMenuWidget_GetGamepadLegendVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OptionsMenuWidget.EditVideoSettings
struct UOptionsMenuWidget_EditVideoSettings_Params
{
};

// Function FrontiersUI.OptionsMenuWidget.EditKeyBindings
struct UOptionsMenuWidget_EditKeyBindings_Params
{
};

// Function FrontiersUI.OptionsMenuWidget.CanEditVideoSettings
struct UOptionsMenuWidget_CanEditVideoSettings_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OptionWidget.ToggleCheckboxAction
struct UOptionWidget_ToggleCheckboxAction_Params
{
};

// Function FrontiersUI.OptionWidget.SetActiveOptionType
struct UOptionWidget_SetActiveOptionType_Params
{
	FrontiersUI_EOptionWidgetType                      InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OptionWidget.PerformSliderOptionAction
struct UOptionWidget_PerformSliderOptionAction_Params
{
	float                                              SliderValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OptionWidget.PerformCheckboxOptionAction
struct UOptionWidget_PerformCheckboxOptionAction_Params
{
	bool                                               bState;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OptionWidget.GetSlider
struct UOptionWidget_GetSlider_Params
{
	class UTLSlider*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OptionWidget.GetDropdown
struct UOptionWidget_GetDropdown_Params
{
	class UTLComboBox*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OptionWidget.GetCheckbox
struct UOptionWidget_GetCheckbox_Params
{
	class UTLCheckBox*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OtherPlayerMenuWidget.GetNearbyPlayersListWidget
struct UOtherPlayerMenuWidget_GetNearbyPlayersListWidget_Params
{
	class UOtherPlayerListWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OtherPlayerMenuWidget.GetFortOwnerWidget
struct UOtherPlayerMenuWidget_GetFortOwnerWidget_Params
{
	class UOtherPlayerWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OverlayMapWrapper.GetMapWidget
struct UOverlayMapWrapper_GetMapWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyInstanceResetToastWidget.GetBodyTextBlock
struct UPartyInstanceResetToastWidget_GetBodyTextBlock_Params
{
	class UTextLayoutWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyInstanceResetToastWidget.DeclineRequest
struct UPartyInstanceResetToastWidget_DeclineRequest_Params
{
};

// Function FrontiersUI.PartyInstanceResetToastWidget.AcceptRequest
struct UPartyInstanceResetToastWidget_AcceptRequest_Params
{
};

// Function FrontiersUI.PartyInviteToastWidget.MuteAndDecline
struct UPartyInviteToastWidget_MuteAndDecline_Params
{
};

// Function FrontiersUI.PartyInviteToastWidget.Invite
struct UPartyInviteToastWidget_Invite_Params
{
};

// Function FrontiersUI.PartyInviteToastWidget.GetInviteButton
struct UPartyInviteToastWidget_GetInviteButton_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyInviteToastWidget.GetBodyTextBlock
struct UPartyInviteToastWidget_GetBodyTextBlock_Params
{
	class UTextLayoutWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyInviteToastWidget.GetAcceptButton
struct UPartyInviteToastWidget_GetAcceptButton_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyInviteToastWidget.DeclineInvite
struct UPartyInviteToastWidget_DeclineInvite_Params
{
};

// Function FrontiersUI.PartyInviteToastWidget.AcceptInvite
struct UPartyInviteToastWidget_AcceptInvite_Params
{
};

// Function FrontiersUI.PartyMemberWidget.UpdateSpeakerImage
struct UPartyMemberWidget_UpdateSpeakerImage_Params
{
	struct FChatHandle                                 SpeakerChatHandle;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bSpeaking;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyMemberWidget.ShowSocialContextMenu
struct UPartyMemberWidget_ShowSocialContextMenu_Params
{
};

// Function FrontiersUI.PartyMemberWidget.OnDataSet
struct UPartyMemberWidget_OnDataSet_Params
{
};

// Function FrontiersUI.PartyMemberWidget.OnChatChannelsChanged
struct UPartyMemberWidget_OnChatChannelsChanged_Params
{
	TArray<class UChatChannel*>                        Channels;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyMemberWidget.MuteAndDecline
struct UPartyMemberWidget_MuteAndDecline_Params
{
};

// Function FrontiersUI.PartyMemberWidget.Kick
struct UPartyMemberWidget_Kick_Params
{
};

// Function FrontiersUI.PartyMemberWidget.IsSelf
struct UPartyMemberWidget_IsSelf_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyMemberWidget.InviteByText
struct UPartyMemberWidget_InviteByText_Params
{
};

// Function FrontiersUI.PartyMemberWidget.GetSpeakerIcon
struct UPartyMemberWidget_GetSpeakerIcon_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyMemberWidget.GetPartyInviteWidget
struct UPartyMemberWidget_GetPartyInviteWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyMemberWidget.GetInviterName
struct UPartyMemberWidget_GetInviterName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyMemberWidget.GetDifficultyWidget
struct UPartyMemberWidget_GetDifficultyWidget_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyMemberWidget.GetContextMenuAnchor
struct UPartyMemberWidget_GetContextMenuAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyMemberWidget.GetCharacterLevelTextBlock
struct UPartyMemberWidget_GetCharacterLevelTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyMemberWidget.GetAreaNameTextBlock
struct UPartyMemberWidget_GetAreaNameTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyMemberWidget.GetAllyInfoWidget
struct UPartyMemberWidget_GetAllyInfoWidget_Params
{
	class UAllyInfoWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyMemberWidget.DeclineInvitation
struct UPartyMemberWidget_DeclineInvitation_Params
{
};

// Function FrontiersUI.PartyMemberWidget.AcceptInvitation
struct UPartyMemberWidget_AcceptInvitation_Params
{
};

// Function FrontiersUI.PartyWidget.ShowInviteModal
struct UPartyWidget_ShowInviteModal_Params
{
};

// Function FrontiersUI.PartyWidget.LeaveParty
struct UPartyWidget_LeaveParty_Params
{
};

// Function FrontiersUI.PartyWidget.GetPartyMemberListWidget
struct UPartyWidget_GetPartyMemberListWidget_Params
{
	class UPartyListWidget*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyWidget.GetLeavePartyVisibility
struct UPartyWidget_GetLeavePartyVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PartyWidget.GetInviteVisibility
struct UPartyWidget_GetInviteVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetDetailsWidget.ToggleSkillDetails
struct UPetDetailsWidget_ToggleSkillDetails_Params
{
};

// Function FrontiersUI.PetDetailsWidget.Swap
struct UPetDetailsWidget_Swap_Params
{
};

// Function FrontiersUI.PetDetailsWidget.Release
struct UPetDetailsWidget_Release_Params
{
};

// Function FrontiersUI.PetDetailsWidget.RandomizePetName
struct UPetDetailsWidget_RandomizePetName_Params
{
};

// Function FrontiersUI.PetDetailsWidget.OnSubmit
struct UPetDetailsWidget_OnSubmit_Params
{
};

// Function FrontiersUI.PetDetailsWidget.OnNameTextChanged
struct UPetDetailsWidget_OnNameTextChanged_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetDetailsWidget.GoBack
struct UPetDetailsWidget_GoBack_Params
{
};

// Function FrontiersUI.PetDetailsWidget.GetSkillDetailsSwitcher
struct UPetDetailsWidget_GetSkillDetailsSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetDetailsWidget.GetPetSkillSimpleList
struct UPetDetailsWidget_GetPetSkillSimpleList_Params
{
	class USkillDisplayListWidget*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetDetailsWidget.GetPetSkillDescriptionList
struct UPetDetailsWidget_GetPetSkillDescriptionList_Params
{
	class USkillDescriptionListWidget*                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetDetailsWidget.GetPetNameField
struct UPetDetailsWidget_GetPetNameField_Params
{
	class UTLEditableTextBox*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetDetailsWidget.GetPetIconWidget
struct UPetDetailsWidget_GetPetIconWidget_Params
{
	class UPetIconWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetDetailsWidget.EditPetName
struct UPetDetailsWidget_EditPetName_Params
{
};

// Function FrontiersUI.PetDetailsWidget.CanSwap
struct UPetDetailsWidget_CanSwap_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetDetailsWidget.CanRelease
struct UPetDetailsWidget_CanRelease_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetAcquiredWidget.GetPetsStoredWidget
struct UPetAcquiredWidget_GetPetsStoredWidget_Params
{
	class UPetStoredInventoryWidget*                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredInventoryWidgetBase.UpdateSectionVisibility
struct UPetStoredInventoryWidgetBase_UpdateSectionVisibility_Params
{
	bool                                               bHasActivePets;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasInactivePets;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredInventoryWidgetBase.SortPets
struct UPetStoredInventoryWidgetBase_SortPets_Params
{
};

// Function FrontiersUI.PetStoredInventoryWidgetBase.GetStoredPetScrollBox
struct UPetStoredInventoryWidgetBase_GetStoredPetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredInventoryWidgetBase.GetSortText
struct UPetStoredInventoryWidgetBase_GetSortText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredInventoryWidgetBase.GetSortedAnimation
struct UPetStoredInventoryWidgetBase_GetSortedAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredInventoryWidgetBase.GetPetStoredListWidget
struct UPetStoredInventoryWidgetBase_GetPetStoredListWidget_Params
{
	class UPetStoredListWidget*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredInventoryWidgetBase.GetListedPets
struct UPetStoredInventoryWidgetBase_GetListedPets_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredInventoryWidgetBase.GetActivePetStoredListWidget
struct UPetStoredInventoryWidgetBase_GetActivePetStoredListWidget_Params
{
	class UPetStoredListWidget*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredInventoryWidgetBase.GetActivePetScrollBox
struct UPetStoredInventoryWidgetBase_GetActivePetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetIconWidget.UpdateComparisonWidget
struct UPetIconWidget_UpdateComparisonWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetIconWidget.GetSkillDisplay
struct UPetIconWidget_GetSkillDisplay_Params
{
	class USkillDisplayWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetIconWidget.GetPetIconImage
struct UPetIconWidget_GetPetIconImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetIconWidget.GetItemIconBorder
struct UPetIconWidget_GetItemIconBorder_Params
{
	class UTLBorder*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetIconWidget.GetComparisonMenuAnchor
struct UPetIconWidget_GetComparisonMenuAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetInfoWidget.SendToTown
struct UPetInfoWidget_SendToTown_Params
{
};

// Function FrontiersUI.PetInfoWidget.GetSendToTownVisibility
struct UPetInfoWidget_GetSendToTownVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetInfoWidget.GetSendHomeButton
struct UPetInfoWidget_GetSendHomeButton_Params
{
	class UTLButton*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetInfoWidget.GetPetInventoryProgressWidgets
struct UPetInfoWidget_GetPetInventoryProgressWidgets_Params
{
	TArray<class UProgressBar*>                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetInfoWidget.GetCountdownTextBlock
struct UPetInfoWidget_GetCountdownTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetInfoWidget.GetCountdownContainer
struct UPetInfoWidget_GetCountdownContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetInfoWidget.CanSendToTown
struct UPetInfoWidget_CanSendToTown_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetInfoWidget.BlueprintUpdateHealthStatus
struct UPetInfoWidget_BlueprintUpdateHealthStatus_Params
{
	FrontiersUI_EAllyHealthStatus                      InStatus;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetRenameWidget.SetNameValid
struct UPetRenameWidget_SetNameValid_Params
{
	bool                                               bIsValid;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetRenameWidget.OnSubmit
struct UPetRenameWidget_OnSubmit_Params
{
};

// Function FrontiersUI.PetRenameWidget.GetPetNameField
struct UPetRenameWidget_GetPetNameField_Params
{
	class UTLEditableTextBox*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetRenameWidget.GetPetIconWidget
struct UPetRenameWidget_GetPetIconWidget_Params
{
	class UPetIconWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetRenameWidget.CheckNameValid
struct UPetRenameWidget_CheckNameValid_Params
{
};

// Function FrontiersUI.PetShoppingListModal.PurchaseCountChanged
struct UPetShoppingListModal_PurchaseCountChanged_Params
{
};

// Function FrontiersUI.PetShoppingListModal.GetShoppingEntryListWidget
struct UPetShoppingListModal_GetShoppingEntryListWidget_Params
{
	class UPetShoppingEntryListWidget*                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetShoppingListModal.GetGoldCostWidget
struct UPetShoppingListModal_GetGoldCostWidget_Params
{
	class UGenericResourceWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetShoppingListModal.GetFetchButton
struct UPetShoppingListModal_GetFetchButton_Params
{
	class UTLButton*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetShoppingEntryCounterWidget.IncrementRequestedPurchaseCount
struct UPetShoppingEntryCounterWidget_IncrementRequestedPurchaseCount_Params
{
};

// Function FrontiersUI.PetShoppingEntryCounterWidget.GetPurchaseCountTextBlock
struct UPetShoppingEntryCounterWidget_GetPurchaseCountTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetShoppingEntryCounterWidget.GetMaxAvailableTextBlock
struct UPetShoppingEntryCounterWidget_GetMaxAvailableTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetShoppingEntryCounterWidget.GetIncrementButton
struct UPetShoppingEntryCounterWidget_GetIncrementButton_Params
{
	class UTLButton*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetShoppingEntryCounterWidget.GetDecrementButton
struct UPetShoppingEntryCounterWidget_GetDecrementButton_Params
{
	class UTLButton*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetShoppingEntryCounterWidget.GetCatalogEntryWidget
struct UPetShoppingEntryCounterWidget_GetCatalogEntryWidget_Params
{
	class UCatalogEntryWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetShoppingEntryCounterWidget.DecrementRequestedPurchaseCount
struct UPetShoppingEntryCounterWidget_DecrementRequestedPurchaseCount_Params
{
};

// Function FrontiersUI.PetStoredInventoryWidget.GoBack
struct UPetStoredInventoryWidget_GoBack_Params
{
};

// Function FrontiersUI.PetStoredInventoryWidget.GetSwitcher
struct UPetStoredInventoryWidget_GetSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredInventoryWidget.GetDetailsWidget
struct UPetStoredInventoryWidget_GetDetailsWidget_Params
{
	class UPetDetailsWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredInventoryWidget.BlueprintSetIsFull
struct UPetStoredInventoryWidget_BlueprintSetIsFull_Params
{
	bool                                               bIsFull;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredWidget.TryToReleasePet
struct UPetStoredWidget_TryToReleasePet_Params
{
};

// Function FrontiersUI.PetStoredWidget.PlayChangedAnimation
struct UPetStoredWidget_PlayChangedAnimation_Params
{
};

// Function FrontiersUI.PetStoredWidget.GetReleaseButtonWidget
struct UPetStoredWidget_GetReleaseButtonWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredWidget.GetRarityTextBlock
struct UPetStoredWidget_GetRarityTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredWidget.GetPetTypeTextBlock
struct UPetStoredWidget_GetPetTypeTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredWidget.GetPetSkillList
struct UPetStoredWidget_GetPetSkillList_Params
{
	class USkillDisplayListWidget*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredWidget.GetPetName
struct UPetStoredWidget_GetPetName_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredWidget.GetPetIconWidget
struct UPetStoredWidget_GetPetIconWidget_Params
{
	class UPetIconWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PetStoredWidget.Focus
struct UPetStoredWidget_Focus_Params
{
};

// Function FrontiersUI.PetStoredWidget.CanReleasePet
struct UPetStoredWidget_CanReleasePet_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlaceNameMessageWidget.ShowText
struct UPlaceNameMessageWidget_ShowText_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlaceNameMessageWidget.OnAreaChanged
struct UPlaceNameMessageWidget_OnAreaChanged_Params
{
	struct FGuid                                       NewAreaGuid;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewAreaName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetHardcoreWidget
struct UPlayerInfoWidget_GetHardcoreWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetEnergyRegenBlock
struct UPlayerInfoWidget_GetEnergyRegenBlock_Params
{
	class UTraitTextBlock*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetEnergyMaxBlock
struct UPlayerInfoWidget_GetEnergyMaxBlock_Params
{
	class UTraitTextBlock*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetEmberWeaponWrapper
struct UPlayerInfoWidget_GetEmberWeaponWrapper_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetEmberWeaponTextBlock
struct UPlayerInfoWidget_GetEmberWeaponTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetEmberWeaponImage
struct UPlayerInfoWidget_GetEmberWeaponImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetElementalDefenseTextBlock
struct UPlayerInfoWidget_GetElementalDefenseTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetDPSTextBlock
struct UPlayerInfoWidget_GetDPSTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetDifficultyTextBlock
struct UPlayerInfoWidget_GetDifficultyTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetDifficultyIcon
struct UPlayerInfoWidget_GetDifficultyIcon_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetDefenseTextBlock
struct UPlayerInfoWidget_GetDefenseTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetDefenseElement
struct UPlayerInfoWidget_GetDefenseElement_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetDamageOverTimeTextBlock
struct UPlayerInfoWidget_GetDamageOverTimeTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetCharacterNameTextBlock
struct UPlayerInfoWidget_GetCharacterNameTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetCharacterLevelText
struct UPlayerInfoWidget_GetCharacterLevelText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetChangeDifficultyButton
struct UPlayerInfoWidget_GetChangeDifficultyButton_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerInfoWidget.GetAverageItemLevelTextBlock
struct UPlayerInfoWidget_GetAverageItemLevelTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PlayerNotificationWidget.GetPortraitImage
struct UPlayerNotificationWidget_GetPortraitImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillWidgetBase.UpdateDescriptionWidget
struct USkillWidgetBase_UpdateDescriptionWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillWidgetBase.ShowDelayedGamepadDescription
struct USkillWidgetBase_ShowDelayedGamepadDescription_Params
{
};

// Function FrontiersUI.SkillWidgetBase.GetSkillIcon
struct USkillWidgetBase_GetSkillIcon_Params
{
};

// Function FrontiersUI.SkillWidgetBase.GetIconImage
struct USkillWidgetBase_GetIconImage_Params
{
	class UAsyncImage*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillWidgetBase.GetDescriptionAnchor
struct USkillWidgetBase_GetDescriptionAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillWidget.OnSkillCooldown
struct USkillWidget_OnSkillCooldown_Params
{
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillWidget.OnChargesActiveTraitChanged
struct USkillWidget_OnChargesActiveTraitChanged_Params
{
	class UActiveTrait*                                InActiveTrait;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillWidget.GetSkillHotkey
struct USkillWidget_GetSkillHotkey_Params
{
	class USkillHotkey*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillWidget.GetSkillActiveWidget
struct USkillWidget_GetSkillActiveWidget_Params
{
	class USkillActiveWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillWidget.GetDisabledByHotkeyOverlay
struct USkillWidget_GetDisabledByHotkeyOverlay_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillWidget.GetCannotUseSkillOverlay
struct USkillWidget_GetCannotUseSkillOverlay_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PotionWidget.SetProgressBarColor
struct UPotionWidget_SetProgressBarColor_Params
{
	class UClass*                                      Potion;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PotionWidget.GetUsePotionAnimation
struct UPotionWidget_GetUsePotionAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PotionWidget.GetUseLastPotionAnimation
struct UPotionWidget_GetUseLastPotionAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PotionWidget.GetNumPotionsText
struct UPotionWidget_GetNumPotionsText_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestWidget.TogglePinned
struct UQuestWidget_TogglePinned_Params
{
};

// Function FrontiersUI.QuestWidget.SetPinnedTint
struct UQuestWidget_SetPinnedTint_Params
{
	bool                                               bIsPinned;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestWidget.PlayPinnedAnimation
struct UQuestWidget_PlayPinnedAnimation_Params
{
};

// Function FrontiersUI.QuestWidget.GetSpokeIcon
struct UQuestWidget_GetSpokeIcon_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestWidget.GetQuestTitleBlock
struct UQuestWidget_GetQuestTitleBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestWidget.GetQuestTaskList
struct UQuestWidget_GetQuestTaskList_Params
{
	class UQuestTaskListWidget*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestWidget.GetFailedAnimation
struct UQuestWidget_GetFailedAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestWidget.GetCompletionAnimation
struct UQuestWidget_GetCompletionAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestWidget.BlueprintSetData
struct UQuestWidget_BlueprintSetData_Params
{
};

// Function FrontiersUI.QuestDetailsWidget.GetRewardPrefixWidget
struct UQuestDetailsWidget_GetRewardPrefixWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestDetailsWidget.GetRewardListWidget
struct UQuestDetailsWidget_GetRewardListWidget_Params
{
	class UQuestRewardListWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestDetailsWidget.GetQuestName
struct UQuestDetailsWidget_GetQuestName_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestDialogueWidget.RemoveCurrentDialogue
struct UQuestDialogueWidget_RemoveCurrentDialogue_Params
{
};

// Function FrontiersUI.QuestDialogueWidget.OpenRewardContainer
struct UQuestDialogueWidget_OpenRewardContainer_Params
{
};

// Function FrontiersUI.QuestDialogueWidget.GetRewardPrefixWidget
struct UQuestDialogueWidget_GetRewardPrefixWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestDialogueWidget.GetRewardListWidget
struct UQuestDialogueWidget_GetRewardListWidget_Params
{
	class UQuestRewardListWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestDialogueWidget.GetRewardChoiceWidget
struct UQuestDialogueWidget_GetRewardChoiceWidget_Params
{
	class UQuestRewardListWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestDialogueWidget.GetRewardButton
struct UQuestDialogueWidget_GetRewardButton_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestDialogueWidget.GetQuestIcon
struct UQuestDialogueWidget_GetQuestIcon_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestDialogueWidget.GetQuestButton
struct UQuestDialogueWidget_GetQuestButton_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestDialogueWidget.GetInteractiveSectionWidget
struct UQuestDialogueWidget_GetInteractiveSectionWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestDialogueWidget.GetButtonSwitcher
struct UQuestDialogueWidget_GetButtonSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestDialogueWidget.ConfirmQuestDialogue
struct UQuestDialogueWidget_ConfirmQuestDialogue_Params
{
};

// Function FrontiersUI.QuestDialogueWidget.CanAcceptRewards
struct UQuestDialogueWidget_CanAcceptRewards_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestDialogueWidget.AcceptRewards
struct UQuestDialogueWidget_AcceptRewards_Params
{
};

// Function FrontiersUI.QuestLogWidgetBase.GetTutorialQuestsWrapper
struct UQuestLogWidgetBase_GetTutorialQuestsWrapper_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestLogWidgetBase.GetTutorialQuestsWidget
struct UQuestLogWidgetBase_GetTutorialQuestsWidget_Params
{
	class UQuestListWidget*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestLogWidgetBase.GetStoryQuestsWrapper
struct UQuestLogWidgetBase_GetStoryQuestsWrapper_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestLogWidgetBase.GetStoryQuestsWidget
struct UQuestLogWidgetBase_GetStoryQuestsWidget_Params
{
	class UQuestListWidget*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestLogWidgetBase.GetQuestScrollBox
struct UQuestLogWidgetBase_GetQuestScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestLogWidgetBase.GetAdventureQuestsWrapper
struct UQuestLogWidgetBase_GetAdventureQuestsWrapper_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestLogWidgetBase.GetAdventureQuestsWidget
struct UQuestLogWidgetBase_GetAdventureQuestsWidget_Params
{
	class UQuestListWidget*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestLogWidget.GetNextListWidget
struct UQuestLogWidget_GetNextListWidget_Params
{
	SlateCore_EUINavigation                            Direction;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UListWidget*                                 CurrentListWidget;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestRewardWidget.UpdateSelectedUI
struct UQuestRewardWidget_UpdateSelectedUI_Params
{
	bool                                               bCanSelect;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestRewardWidget.PropagateChosenReward
struct UQuestRewardWidget_PropagateChosenReward_Params
{
};

// Function FrontiersUI.QuestRewardWidget.GetGenericResourceWidget
struct UQuestRewardWidget_GetGenericResourceWidget_Params
{
	class UGenericResourceWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestTaskWidget.GetTaskTextBlock
struct UQuestTaskWidget_GetTaskTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestTaskWidget.GetShowProgressAnimation
struct UQuestTaskWidget_GetShowProgressAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestTrackerWidget.GetTrackerOverlay
struct UQuestTrackerWidget_GetTrackerOverlay_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestTrackerWidget.GetQuestFailedAnimation
struct UQuestTrackerWidget_GetQuestFailedAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestTrackerWidget.GetQuestCompletedAnimation
struct UQuestTrackerWidget_GetQuestCompletedAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestTrackerWidget.GetNothingPinnedWidget
struct UQuestTrackerWidget_GetNothingPinnedWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.QuestTrackerWidget.BlueprintSetupQuestsOverMaxLabel
struct UQuestTrackerWidget_BlueprintSetupQuestsOverMaxLabel_Params
{
	int                                                MaxQuests;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumOverMax;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.RadialListWidget.SetSelectionWedge
struct URadialListWidget_SetSelectionWedge_Params
{
	class UWidget*                                     WedgeWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.RecipesWidget.OnRecipeWidgetSelected
struct URecipesWidget_OnRecipeWidgetSelected_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.RecipesWidget.GetDetailsWidget
struct URecipesWidget_GetDetailsWidget_Params
{
	class UCraftingRecipeDetailWidget*                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.RecipesWidget.GetCraftingQueueWidget
struct URecipesWidget_GetCraftingQueueWidget_Params
{
	class UCraftingQueueWidget*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillAssignWidget.GetSelectionHighlightVisibility
struct USkillAssignWidget_GetSelectionHighlightVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillAssignWidget.Assign
struct USkillAssignWidget_Assign_Params
{
};

// Function FrontiersUI.SkillDescriptionWidget.UpdateWidget
struct USkillDescriptionWidget_UpdateWidget_Params
{
};

// Function FrontiersUI.SkillDescriptionWidget.HasRequiredSkillPoints
struct USkillDescriptionWidget_HasRequiredSkillPoints_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetTierBonusWidgets
struct USkillDescriptionWidget_GetTierBonusWidgets_Params
{
	TArray<class USkillTierBonusWidget*>               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetSkillTagTextWidget
struct USkillDescriptionWidget_GetSkillTagTextWidget_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetSkillPoints
struct USkillDescriptionWidget_GetSkillPoints_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetSkillLevelState
struct USkillDescriptionWidget_GetSkillLevelState_Params
{
	Frontiers_ESkillLevelState                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetSkillDisplayWidget
struct USkillDescriptionWidget_GetSkillDisplayWidget_Params
{
	class USkillDisplayWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetSkillDescription
struct USkillDescriptionWidget_GetSkillDescription_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetSkillAssignedState
struct USkillDescriptionWidget_GetSkillAssignedState_Params
{
	Frontiers_ESkillAssignedState                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetSelectedSlot
struct USkillDescriptionWidget_GetSelectedSlot_Params
{
	Frontiers_ESkillSlot                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetRequirementsWidget
struct USkillDescriptionWidget_GetRequirementsWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetRequiredLevelWidget
struct USkillDescriptionWidget_GetRequiredLevelWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetNextLevelTextWidget
struct USkillDescriptionWidget_GetNextLevelTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetMaxLevelTextWidget
struct USkillDescriptionWidget_GetMaxLevelTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetLevelBonusListWidget
struct USkillDescriptionWidget_GetLevelBonusListWidget_Params
{
	class USkillLevelBonusListWidget*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetEnergyCostText
struct USkillDescriptionWidget_GetEnergyCostText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetCurrentLevelTextWidget
struct USkillDescriptionWidget_GetCurrentLevelTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetCooldownText
struct USkillDescriptionWidget_GetCooldownText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetBonusLevelsTextWidget
struct USkillDescriptionWidget_GetBonusLevelsTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDescriptionWidget.GetActivePassiveText
struct USkillDescriptionWidget_GetActivePassiveText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillTierBonusWidget.GetTitleTextBlock
struct USkillTierBonusWidget_GetTitleTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillTierBonusWidget.GetPointsRemainingTextBlock
struct USkillTierBonusWidget_GetPointsRemainingTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillTierBonusWidget.GetLockImage
struct USkillTierBonusWidget_GetLockImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillTierBonusWidget.GetDescriptionTextBlock
struct USkillTierBonusWidget_GetDescriptionTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillLevelBonusWidget.GetZebraStripeBackground
struct USkillLevelBonusWidget_GetZebraStripeBackground_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillLevelBonusWidget.GetNextBonusNumberTextWidget
struct USkillLevelBonusWidget_GetNextBonusNumberTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillLevelBonusWidget.GetBonusNumberTextWidget
struct USkillLevelBonusWidget_GetBonusNumberTextWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillLevelBonusWidget.GetBonusDescriptionWidget
struct USkillLevelBonusWidget_GetBonusDescriptionWidget_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillLevelBonusWrapper.UpdateSkillLockedSwitcher
struct USkillLevelBonusWrapper_UpdateSkillLockedSwitcher_Params
{
};

// Function FrontiersUI.SkillLevelBonusWrapper.GetSkillLevelText
struct USkillLevelBonusWrapper_GetSkillLevelText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillLevelBonusWrapper.GetBonusList
struct USkillLevelBonusWrapper_GetBonusList_Params
{
	class USkillLevelBonusListWidget*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillDisplayWidget.GetIconImage
struct USkillDisplayWidget_GetIconImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillActiveWidget.GetSkillDisplay
struct USkillActiveWidget_GetSkillDisplay_Params
{
	class USkillDisplayWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillActiveWidget.GetOnCooldownWidget
struct USkillActiveWidget_GetOnCooldownWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillActiveWidget.GetOffCooldownWidget
struct USkillActiveWidget_GetOffCooldownWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillActiveWidget.GetOffCooldownAnimation
struct USkillActiveWidget_GetOffCooldownAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillActiveWidget.GetDisabledWidget
struct USkillActiveWidget_GetDisabledWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillActiveWidget.GetCooldownTextBlock
struct USkillActiveWidget_GetCooldownTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillActiveWidget.GetCooldownProgress
struct USkillActiveWidget_GetCooldownProgress_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillActiveWidget.GetChargesWidget
struct USkillActiveWidget_GetChargesWidget_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillHelpers.OnUnstuckComplete
struct USkillHelpers_OnUnstuckComplete_Params
{
	class ATLCharacter*                                PlayerCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillHelpers.GetSkillLevelBonusTraitByIndex
struct USkillHelpers_GetSkillLevelBonusTraitByIndex_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsTableRowHandle                       SkillRowHandle;                                            // (Parm, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.UpdateStatus
struct USkillInTabWidget_UpdateStatus_Params
{
	bool                                               bSuccess;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SkillName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.UnlockSkill
struct USkillInTabWidget_UnlockSkill_Params
{
};

// Function FrontiersUI.SkillInTabWidget.RegretSkill
struct USkillInTabWidget_RegretSkill_Params
{
};

// Function FrontiersUI.SkillInTabWidget.GetUpgradeProgressBar
struct USkillInTabWidget_GetUpgradeProgressBar_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetUpgradeContainer
struct USkillInTabWidget_GetUpgradeContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetUpgradeButton
struct USkillInTabWidget_GetUpgradeButton_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetUnlockUpgradeWrapper
struct USkillInTabWidget_GetUnlockUpgradeWrapper_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetUnlockButton
struct USkillInTabWidget_GetUnlockButton_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetUnlockAnimation
struct USkillInTabWidget_GetUnlockAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetTierFilledWidgets
struct USkillInTabWidget_GetTierFilledWidgets_Params
{
	TArray<class UWidget*>                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetSkillLevelText
struct USkillInTabWidget_GetSkillLevelText_Params
{
	class USkillLevelTextBlock*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetSkillHotkey
struct USkillInTabWidget_GetSkillHotkey_Params
{
	class USkillHotkey*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetSelectedBorder
struct USkillInTabWidget_GetSelectedBorder_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetSelectAnimation
struct USkillInTabWidget_GetSelectAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetRegretButton
struct USkillInTabWidget_GetRegretButton_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetRegretAnimation
struct USkillInTabWidget_GetRegretAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetLockWidget
struct USkillInTabWidget_GetLockWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetLevelWidget
struct USkillInTabWidget_GetLevelWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetLevelUpgradeBackground
struct USkillInTabWidget_GetLevelUpgradeBackground_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetDeselectAnimation
struct USkillInTabWidget_GetDeselectAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.GetBuyAnimation
struct USkillInTabWidget_GetBuyAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillInTabWidget.BuySkill
struct USkillInTabWidget_BuySkill_Params
{
};

// Function FrontiersUI.SkillListAssignmentWidget.GetSkillSlotListWidget
struct USkillListAssignmentWidget_GetSkillSlotListWidget_Params
{
	class USkillListWidget*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillPurchaseConfirmationModalContent.GetSkillWidget
struct USkillPurchaseConfirmationModalContent_GetSkillWidget_Params
{
	class USkillInTabWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillSlotPickerWidget.StartAssign
struct USkillSlotPickerWidget_StartAssign_Params
{
};

// Function FrontiersUI.SkillSlotPickerWidget.IsSkillSlotUnlocked
struct USkillSlotPickerWidget_IsSkillSlotUnlocked_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillSlotPickerWidget.GetSkillName
struct USkillSlotPickerWidget_GetSkillName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillSlotPickerWidget.GetSkillCategory
struct USkillSlotPickerWidget_GetSkillCategory_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillSlotPickerWidget.GetSelectionHighlightVisibility
struct USkillSlotPickerWidget_GetSelectionHighlightVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillSlotPickerWidget.GetLockedSkillVisibility
struct USkillSlotPickerWidget_GetLockedSkillVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillSlotPickerWidget.GetAssignAnimation
struct USkillSlotPickerWidget_GetAssignAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.ShowInfo
struct USkillsMenuWidget_ShowInfo_Params
{
};

// Function FrontiersUI.SkillsMenuWidget.SetupSkillRegretMode
struct USkillsMenuWidget_SetupSkillRegretMode_Params
{
};

// Function FrontiersUI.SkillsMenuWidget.SetSlotListToFocus
struct USkillsMenuWidget_SetSlotListToFocus_Params
{
};

// Function FrontiersUI.SkillsMenuWidget.RespecSkills
struct USkillsMenuWidget_RespecSkills_Params
{
};

// Function FrontiersUI.SkillsMenuWidget.PreviousCategory
struct USkillsMenuWidget_PreviousCategory_Params
{
};

// Function FrontiersUI.SkillsMenuWidget.OnWardrobeItemsChange
struct USkillsMenuWidget_OnWardrobeItemsChange_Params
{
	TArray<struct FItemReplicatedData>                 Items;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.OnSkillTabChanged
struct USkillsMenuWidget_OnSkillTabChanged_Params
{
	struct FTabbedMenuOption                           Option;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.NextCategory
struct USkillsMenuWidget_NextCategory_Params
{
};

// Function FrontiersUI.SkillsMenuWidget.HideInfo
struct USkillsMenuWidget_HideInfo_Params
{
};

// Function FrontiersUI.SkillsMenuWidget.GetWidgetInSwitcherBySkillTabType
struct USkillsMenuWidget_GetWidgetInSwitcherBySkillTabType_Params
{
	Frontiers_ESkillTabType                            TabType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetTotalSkillPointsText
struct USkillsMenuWidget_GetTotalSkillPointsText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetTotalSkillPointsProgressBar
struct USkillsMenuWidget_GetTotalSkillPointsProgressBar_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetTabTierWidgets
struct USkillsMenuWidget_GetTabTierWidgets_Params
{
	TArray<class USkillTabTierWidget*>                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetTabSwitcher
struct USkillsMenuWidget_GetTabSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillTabMenu
struct USkillsMenuWidget_GetSkillTabMenu_Params
{
	class USkillsTabbedMenuWidget*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillTabList
struct USkillsMenuWidget_GetSkillTabList_Params
{
	class USkillInTabListWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillTabBackground
struct USkillsMenuWidget_GetSkillTabBackground_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillSlotListSwitcher
struct USkillsMenuWidget_GetSkillSlotListSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillPointsText
struct USkillsMenuWidget_GetSkillPointsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillPointsTabProgressBar
struct USkillsMenuWidget_GetSkillPointsTabProgressBar_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillPointsSecondTabText
struct USkillsMenuWidget_GetSkillPointsSecondTabText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillPointsSecondTabNameText
struct USkillsMenuWidget_GetSkillPointsSecondTabNameText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillPointsSecondImage
struct USkillsMenuWidget_GetSkillPointsSecondImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillPointsFirstTabText
struct USkillsMenuWidget_GetSkillPointsFirstTabText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillPointsFirstTabNameText
struct USkillsMenuWidget_GetSkillPointsFirstTabNameText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillPointsFirstImage
struct USkillsMenuWidget_GetSkillPointsFirstImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillPointsEmberWeaponTabText
struct USkillsMenuWidget_GetSkillPointsEmberWeaponTabText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillPointsEmberWeaponTabNameText
struct USkillsMenuWidget_GetSkillPointsEmberWeaponTabNameText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillPointsEmberWeaponImage
struct USkillsMenuWidget_GetSkillPointsEmberWeaponImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillPointsAvailableText
struct USkillsMenuWidget_GetSkillPointsAvailableText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillLegendWrapper
struct USkillsMenuWidget_GetSkillLegendWrapper_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillCategoryTextBlock
struct USkillsMenuWidget_GetSkillCategoryTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillAssignList
struct USkillsMenuWidget_GetSkillAssignList_Params
{
	class USkillAssignListWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetSkillAssignContainer
struct USkillsMenuWidget_GetSkillAssignContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetRespecButton
struct USkillsMenuWidget_GetRespecButton_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetPlayerInfoWidget
struct USkillsMenuWidget_GetPlayerInfoWidget_Params
{
	class UPlayerInfoWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetLegendaryAffixCollectionWidget
struct USkillsMenuWidget_GetLegendaryAffixCollectionWidget_Params
{
	class ULegendaryAffixCollectionEquippedWidget*     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetDescriptionWidgetPanel
struct USkillsMenuWidget_GetDescriptionWidgetPanel_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.GetCategoryNameTextBlock
struct USkillsMenuWidget_GetCategoryNameTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.CanToggleInfo
struct USkillsMenuWidget_CanToggleInfo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsMenuWidget.CancelAssign
struct USkillsMenuWidget_CancelAssign_Params
{
};

// Function FrontiersUI.SkillsMenuWidget.BlueprintUpdateCurrentTab
struct USkillsMenuWidget_BlueprintUpdateCurrentTab_Params
{
};

// Function FrontiersUI.SkillsMenuWidget.BlueprintSetupSkillRegretMode
struct USkillsMenuWidget_BlueprintSetupSkillRegretMode_Params
{
};

// Function FrontiersUI.SkillsMenuWidget.BlueprintSetInfoVisibility
struct USkillsMenuWidget_BlueprintSetInfoVisibility_Params
{
	bool                                               bIsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsRespecModal.RejectRespecSkills
struct USkillsRespecModal_RejectRespecSkills_Params
{
};

// Function FrontiersUI.SkillsTabbedMenuWidget.GetSkillAlertVisibility
struct USkillsTabbedMenuWidget_GetSkillAlertVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillsTabbedMenuWidget.GetLegendaryCollectionAlertVisibility
struct USkillsTabbedMenuWidget_GetLegendaryCollectionAlertVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillTabTierWidget.BlueprintRefresh
struct USkillTabTierWidget_BlueprintRefresh_Params
{
	bool                                               bIsNewTab;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TierIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsUnlocked;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelsGainedInTier;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelForTab;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelsRequiredForPreviousTier;                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelsRequiredForCurrentTier;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillHotkey.SetSkillSlot
struct USkillHotkey_SetSkillSlot_Params
{
	Frontiers_ESkillSlot                               InSkillSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SkillHotkey.PlayCooldownPulseAnimation
struct USkillHotkey_PlayCooldownPulseAnimation_Params
{
};

// Function FrontiersUI.SkillHotkey.HideCooldownPulseIndicator
struct USkillHotkey_HideCooldownPulseIndicator_Params
{
};

// Function FrontiersUI.SocialContextMenuWidget.ReportAbuse
struct USocialContextMenuWidget_ReportAbuse_Params
{
};

// Function FrontiersUI.SocialContextMenuWidget.GetLevelTextBox
struct USocialContextMenuWidget_GetLevelTextBox_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SocialContextMenuWidget.GetDifficultyWidget
struct USocialContextMenuWidget_GetDifficultyWidget_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SocialContextMenuWidget.GetButtonList
struct USocialContextMenuWidget_GetButtonList_Params
{
	class UButtonListWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SocialContextWidgetInterface.Whisper
struct USocialContextWidgetInterface_Whisper_Params
{
};

// Function FrontiersUI.SocialContextWidgetInterface.SendFriendRequest
struct USocialContextWidgetInterface_SendFriendRequest_Params
{
};

// Function FrontiersUI.SocialContextWidgetInterface.RejectFriendRequest
struct USocialContextWidgetInterface_RejectFriendRequest_Params
{
};

// Function FrontiersUI.SocialContextWidgetInterface.Invite
struct USocialContextWidgetInterface_Invite_Params
{
};

// Function FrontiersUI.SocialContextWidgetInterface.AcceptFriendRequest
struct USocialContextWidgetInterface_AcceptFriendRequest_Params
{
};

// Function FrontiersUI.SocialMenuWidget.GetSocialTabs
struct USocialMenuWidget_GetSocialTabs_Params
{
	class UTabbedMenuWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SocialMenuWidget.GetSocialPanelSwitcher
struct USocialMenuWidget_GetSocialPanelSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SocialMenuWidget.GetPartyWidget
struct USocialMenuWidget_GetPartyWidget_Params
{
	class UPartyWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SocialMenuWidget.GetOtherPlayersWidget
struct USocialMenuWidget_GetOtherPlayersWidget_Params
{
	class UOtherPlayerMenuWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SocialMenuWidget.GetNextListWidget
struct USocialMenuWidget_GetNextListWidget_Params
{
	class UListWidget*                                 CurrentListWidget;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EUINavigation                            Direction;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SocialMenuWidget.GetFriendsWidget
struct USocialMenuWidget_GetFriendsWidget_Params
{
	class UFriendsWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SocialMenuWidget.GetActiveSwitcherListWidget
struct USocialMenuWidget_GetActiveSwitcherListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SpokeLevelWidget.GetWidgetVisibility
struct USpokeLevelWidget_GetWidgetVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.SpokeLevelWidget.GetExperiencePercent
struct USpokeLevelWidget_GetExperiencePercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatRowListWidget.IsEmpty
struct UStatRowListWidget_IsEmpty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatCategoryWidget.GetStatRowList
struct UStatCategoryWidget_GetStatRowList_Params
{
	class UStatRowListWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatRowWidget.GetTraitTextBlock
struct UStatRowWidget_GetTraitTextBlock_Params
{
	class UTraitTextBlock*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatRowWidget.GetSecondTraitTextBlock
struct UStatRowWidget_GetSecondTraitTextBlock_Params
{
	class UTraitTextBlock*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatRowWidget.GetIconImage
struct UStatRowWidget_GetIconImage_Params
{
	class UImage*                                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatDamageRowWidget.GetDamageTextBlock
struct UStatDamageRowWidget_GetDamageTextBlock_Params
{
	class UDamageTraitTextBlock*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetSkillTraitsList
struct UStatSheetPanel_GetSkillTraitsList_Params
{
	class UStatCategoryListWidget*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetPetSkillTraitsList
struct UStatSheetPanel_GetPetSkillTraitsList_Params
{
	class UStatCategoryListWidget*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetPetMiscTraitsList
struct UStatSheetPanel_GetPetMiscTraitsList_Params
{
	class UStatRowListWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetPetDefenseTypeTraitsList
struct UStatSheetPanel_GetPetDefenseTypeTraitsList_Params
{
	class UStatRowListWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetPetDefenseTraitsList
struct UStatSheetPanel_GetPetDefenseTraitsList_Params
{
	class UStatRowListWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetPetAttackTypeTraitsList
struct UStatSheetPanel_GetPetAttackTypeTraitsList_Params
{
	class UStatDamageRowListWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetPetAttackTraitsList
struct UStatSheetPanel_GetPetAttackTraitsList_Params
{
	class UStatRowListWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetMiscTraitsList
struct UStatSheetPanel_GetMiscTraitsList_Params
{
	class UStatRowListWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetMainHandAttackTypeList
struct UStatSheetPanel_GetMainHandAttackTypeList_Params
{
	class UStatDamageRowListWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetDefenseTypeList
struct UStatSheetPanel_GetDefenseTypeList_Params
{
	class UStatRowListWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetDefenseMiscTraitsList
struct UStatSheetPanel_GetDefenseMiscTraitsList_Params
{
	class UStatRowListWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetCharacterName
struct UStatSheetPanel_GetCharacterName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetCannonMiscTraitsList
struct UStatSheetPanel_GetCannonMiscTraitsList_Params
{
	class UStatRowListWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetCannonAttackTypeList
struct UStatSheetPanel_GetCannonAttackTypeList_Params
{
	class UStatDamageRowListWidget*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.GetAttackMiscTraitsList
struct UStatSheetPanel_GetAttackMiscTraitsList_Params
{
	class UStatRowListWidget*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatSheetPanel.BlueprintOnCharacterChanged
struct UStatSheetPanel_BlueprintOnCharacterChanged_Params
{
	class ATLCharacter*                                Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatusEffectBar.UpdateStatusEffects
struct UStatusEffectBar_UpdateStatusEffects_Params
{
};

// Function FrontiersUI.StatusEffectBar.SetTargetActor
struct UStatusEffectBar_SetTargetActor_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatusEffectBar.GetStatusEffectListWidget
struct UStatusEffectBar_GetStatusEffectListWidget_Params
{
	class UStatusEffectListWidget*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatusEffectToolipWidget.GetStatusEffectName
struct UStatusEffectToolipWidget_GetStatusEffectName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatusEffectToolipWidget.GetStatusEffectDescription
struct UStatusEffectToolipWidget_GetStatusEffectDescription_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatusEffectWidget.GetTooltipWidget
struct UStatusEffectWidget_GetTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatusEffectWidget.GetStatusEffectProportionRemaining
struct UStatusEffectWidget_GetStatusEffectProportionRemaining_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatusEffectWidget.GetStatusEffectName
struct UStatusEffectWidget_GetStatusEffectName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatusEffectWidget.GetStatusEffectDescription
struct UStatusEffectWidget_GetStatusEffectDescription_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatusEffectWidget.GetStackCountTextBlock
struct UStatusEffectWidget_GetStackCountTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatusEffectWidget.GetIconImage
struct UStatusEffectWidget_GetIconImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StatusEffectWidget.GetCountdownTextBlock
struct UStatusEffectWidget_GetCountdownTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreCelebrationWidget.GetProductList
struct UStoreCelebrationWidget_GetProductList_Params
{
	class UCraftingProductListWidget*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.PurchaseConfirmationWidget.GetStoreEntryList
struct UPurchaseConfirmationWidget_GetStoreEntryList_Params
{
	class UOnlineStoreEntryListWidget*                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreDetailsWidget.GetShimVisible
struct UStoreDetailsWidget_GetShimVisible_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreDetailsWidget.GetQuantityLockedWidget
struct UStoreDetailsWidget_GetQuantityLockedWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreDetailsWidget.GetPurchaseSelectionWidget
struct UStoreDetailsWidget_GetPurchaseSelectionWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreDetailsWidget.GetPurchaseButtonText
struct UStoreDetailsWidget_GetPurchaseButtonText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreDetailsWidget.GetPurchaseAvailabilitySwitcher
struct UStoreDetailsWidget_GetPurchaseAvailabilitySwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreGridWidget.GetTimeText
struct UStoreGridWidget_GetTimeText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreGridWidget.GetTimeDisplay
struct UStoreGridWidget_GetTimeDisplay_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreGridWidget.GetNoItemsWidget
struct UStoreGridWidget_GetNoItemsWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreGridWidget.GetNextSlotList
struct UStoreGridWidget_GetNextSlotList_Params
{
	class UListWidget*                                 CurrentList;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EUINavigation                            NavDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreGridWidget.GetEntryListWidget
struct UStoreGridWidget_GetEntryListWidget_Params
{
	class UOnlineStoreEntryListWidget*                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreWidget.UpdateCatalog
struct UStoreWidget_UpdateCatalog_Params
{
	TArray<struct FCatalogData>                        InCatalog;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreWidget.GetStoreGridListWidget
struct UStoreWidget_GetStoreGridListWidget_Params
{
	class UStoreGridListWidget*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreWidget.GetSellPanel
struct UStoreWidget_GetSellPanel_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreWidget.GetMainPanelSwitcher
struct UStoreWidget_GetMainPanelSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreWidget.GetItemDetailsWidget
struct UStoreWidget_GetItemDetailsWidget_Params
{
	class UStoreDetailsWidget*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreWidget.GetInventoryWidget
struct UStoreWidget_GetInventoryWidget_Params
{
	class UInventoryGridWithTabsWidget*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.StoreWidget.GetCurrencyWidget
struct UStoreWidget_GetCurrencyWidget_Params
{
	class UCurrencyWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.OnlineStoreWidget.OpenExternalPurchaseWindow
struct UOnlineStoreWidget_OpenExternalPurchaseWindow_Params
{
};

// Function FrontiersUI.OnlineStoreWidget.OnUnpromptedChargeUp
struct UOnlineStoreWidget_OnUnpromptedChargeUp_Params
{
	class AActor*                                      Context;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VendorStoreWidget.SetStoreName
struct UVendorStoreWidget_SetStoreName_Params
{
	struct FText                                       StoreName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VendorStoreWidget.GetInventoryGridWidget
struct UVendorStoreWidget_GetInventoryGridWidget_Params
{
	class UInventoryGridWithTabsWidget*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VendorStoreWidget.GetCategoryWidgetSwitcher
struct UVendorStoreWidget_GetCategoryWidgetSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VendorStoreWidget.GetCategoryTabbedMenuWidget
struct UVendorStoreWidget_GetCategoryTabbedMenuWidget_Params
{
	class UTabbedMenuWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VendorStoreWidget.GetCategoryHeaderText
struct UVendorStoreWidget_GetCategoryHeaderText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VendorStoreWidget.GetBuybackListWidget
struct UVendorStoreWidget_GetBuybackListWidget_Params
{
	class UBuybackItemListWidget*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuButton.ShowMenu
struct UTabbedMenuButton_ShowMenu_Params
{
};

// Function FrontiersUI.TabbedMenuButton.ShowAlert
struct UTabbedMenuButton_ShowAlert_Params
{
	UMG_ESlateVisibility                               AlertVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       AlertText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuButton.ReopenMenu
struct UTabbedMenuButton_ReopenMenu_Params
{
};

// Function FrontiersUI.TabbedMenuButton.OnMenuWidgetClosed
struct UTabbedMenuButton_OnMenuWidgetClosed_Params
{
};

// Function FrontiersUI.TabbedMenuButton.OnDataSet
struct UTabbedMenuButton_OnDataSet_Params
{
};

// Function FrontiersUI.TabbedMenuButton.GetSelectionVisibility
struct UTabbedMenuButton_GetSelectionVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuButton.GetNotSelectedVisibility
struct UTabbedMenuButton_GetNotSelectedVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuButton.GetNativeAlertVisibility
struct UTabbedMenuButton_GetNativeAlertVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuButton.GetNativeAlertText
struct UTabbedMenuButton_GetNativeAlertText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuButton.GetAlertPanel
struct UTabbedMenuButton_GetAlertPanel_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TabbedMenuButton.CloseWidgets
struct UTabbedMenuButton_CloseWidgets_Params
{
};

// Function FrontiersUI.HPBarFragment.Setup
struct UHPBarFragment_Setup_Params
{
	float                                              FromPercent;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToPercent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.HPBarFragment.MatchProgressBar
struct UHPBarFragment_MatchProgressBar_Params
{
	class UProgressBar*                                InProgressBar;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.HPBarFragment.GetSizeBox
struct UHPBarFragment_GetSizeBox_Params
{
	class USizeBox*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.HPBarFragment.GetProgressBar
struct UHPBarFragment_GetProgressBar_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TextInputWidget.OnMessageTextCommitted
struct UTextInputWidget_OnMessageTextCommitted_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TextInputWidget.GetInputValue
struct UTextInputWidget_GetInputValue_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TextInputWidget.GetEditableText
struct UTextInputWidget_GetEditableText_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLBorder.SetStyleClass
struct UTLBorder_SetStyleClass_Params
{
	class UClass*                                      InStyleClass;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLButton.SetStyleClass
struct UTLButton_SetStyleClass_Params
{
	class UClass*                                      InStyleClass;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLButton.SetMaterial
struct UTLButton_SetMaterial_Params
{
	class UMaterial*                                   InMaterial;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLButton.PlayReleasedSound
struct UTLButton_PlayReleasedSound_Params
{
};

// Function FrontiersUI.TLButton.PlayPressedSound
struct UTLButton_PlayPressedSound_Params
{
};

// Function FrontiersUI.TLButton.PlayAudioEvent
struct UTLButton_PlayAudioEvent_Params
{
	FrontiersUI_EUIAudioSlot                           FMODSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLStyle.PlayAudioEvent
struct UTLStyle_PlayAudioEvent_Params
{
	FrontiersUI_EUIAudioSlot                           FMODSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLCheckBox.OnCheckboxTicked
struct UTLCheckBox_OnCheckboxTicked_Params
{
	bool                                               InState;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLComboBox.OnSelectionChanged_Internal
struct UTLComboBox_OnSelectionChanged_Internal_Params
{
	struct FString                                     inString;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESelectInfo>                 InSelectInfo;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLComboBox.MakeComboBoxItemWidget
struct UTLComboBox_MakeComboBoxItemWidget_Params
{
	struct FString                                     inString;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLCustomCursor.GetImage
struct UTLCustomCursor_GetImage_Params
{
	class UImage*                                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetZoneId
struct UTLDebugPanel_GetZoneId_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetWorldTimestamp
struct UTLDebugPanel_GetWorldTimestamp_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetSessionID
struct UTLDebugPanel_GetSessionID_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetRegion
struct UTLDebugPanel_GetRegion_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetPlayerLocation
struct UTLDebugPanel_GetPlayerLocation_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetPlayerDungeonVisibility
struct UTLDebugPanel_GetPlayerDungeonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetPlayerDungeonInfo
struct UTLDebugPanel_GetPlayerDungeonInfo_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetPlatformVisibility
struct UTLDebugPanel_GetPlatformVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetPlatformName
struct UTLDebugPanel_GetPlatformName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetPlatformId
struct UTLDebugPanel_GetPlatformId_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetPing
struct UTLDebugPanel_GetPing_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetOfflineMode
struct UTLDebugPanel_GetOfflineMode_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetLevelInstanceName
struct UTLDebugPanel_GetLevelInstanceName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetLanguage
struct UTLDebugPanel_GetLanguage_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetHardcoreStatus
struct UTLDebugPanel_GetHardcoreStatus_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetFrameRate
struct UTLDebugPanel_GetFrameRate_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetDRLGSeedNumber
struct UTLDebugPanel_GetDRLGSeedNumber_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetDifficulty
struct UTLDebugPanel_GetDifficulty_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetConnectionStatus
struct UTLDebugPanel_GetConnectionStatus_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetCharacterName
struct UTLDebugPanel_GetCharacterName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetCharacterLevel
struct UTLDebugPanel_GetCharacterLevel_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetCharacterID
struct UTLDebugPanel_GetCharacterID_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetBuildAndEnvironment
struct UTLDebugPanel_GetBuildAndEnvironment_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetAreaLevelRange
struct UTLDebugPanel_GetAreaLevelRange_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetAreaDungeonVisibility
struct UTLDebugPanel_GetAreaDungeonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetAreaDungeonInfo
struct UTLDebugPanel_GetAreaDungeonInfo_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetAreaDataName
struct UTLDebugPanel_GetAreaDataName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetAreaCameraYaw
struct UTLDebugPanel_GetAreaCameraYaw_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetAccountNickname
struct UTLDebugPanel_GetAccountNickname_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLDebugPanel.GetAccountID
struct UTLDebugPanel_GetAccountID_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLEditableTextBox.ClampText
struct UTLEditableTextBox_ClampText_Params
{
	struct FText                                       NewText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLHUD.UpdateChat
struct UTLHUD_UpdateChat_Params
{
};

// Function FrontiersUI.TLHUD.ShowCenterScreenMessage
struct UTLHUD_ShowCenterScreenMessage_Params
{
	struct FText                                       InMessage;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FrontiersUI_EUIMessageType                         Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowOverLoadingScreen;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideExisting;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLHUD.HideChat
struct UTLHUD_HideChat_Params
{
};

// Function FrontiersUI.TLHUD.HideCenterScreenMessage
struct UTLHUD_HideCenterScreenMessage_Params
{
};

// Function FrontiersUI.TLHUD.GetHUD
struct UTLHUD_GetHUD_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTLHUD*                                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLHUD.FocusChat
struct UTLHUD_FocusChat_Params
{
	struct FString                                     StartingCharacters;                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLProgressBar.SetBorderPadding
struct UTLProgressBar_SetBorderPadding_Params
{
	struct FVector2D                                   InBorderPadding;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLScrollBox.SetStyleClass
struct UTLScrollBox_SetStyleClass_Params
{
	class UClass*                                      Style;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLTextBlock.SetStyleClass
struct UTLTextBlock_SetStyleClass_Params
{
	class UClass*                                      Style;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TLVideo.Stop
struct UTLVideo_Stop_Params
{
};

// Function FrontiersUI.TLVideo.FinishPlayback
struct UTLVideo_FinishPlayback_Params
{
};

// Function FrontiersUI.FullscreenVideoWidget.GetTLVideo
struct UFullscreenVideoWidget_GetTLVideo_Params
{
	class UTLVideo*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.DescriptionTooltipWidget.SetDescription
struct UDescriptionTooltipWidget_SetDescription_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TraitNotificationWidget.GetTextBlock
struct UTraitNotificationWidget_GetTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TraitNotificationWidget.GetImage
struct UTraitNotificationWidget_GetImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TraitsTableHelpers.UnlockActiveTrait
struct UTraitsTableHelpers_UnlockActiveTrait_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActiveTraitName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TraitsTableHelpers.MakeTraitKeyWithTag
struct UTraitsTableHelpers_MakeTraitKeyWithTag_Params
{
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                Tag;                                                       // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTraitKey                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TraitsTableHelpers.MakeTraitKeyForParameterRow
struct UTraitsTableHelpers_MakeTraitKeyForParameterRow_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParameterRowName;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTraitKey                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TraitsTableHelpers.MakeTraitKey
struct UTraitsTableHelpers_MakeTraitKey_Params
{
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ETraitSlot                               PrimarySlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESecondaryTraitSlot                      SecondarySlot;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Param;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTraitKey                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TraitsTableHelpers.LockActiveTrait
struct UTraitsTableHelpers_LockActiveTrait_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActiveTraitName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TraitsTableHelpers.GetTraitWithTag
struct UTraitsTableHelpers_GetTraitWithTag_Params
{
	class UUserWidget*                                 Widget;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                Tag;                                                       // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TraitsTableHelpers.GetTraitName
struct UTraitsTableHelpers_GetTraitName_Params
{
	struct FTraitKey                                   Key;                                                       // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TraitsTableHelpers.GetTrait
struct UTraitsTableHelpers_GetTrait_Params
{
	class UUserWidget*                                 Widget;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TraitsTableHelpers.GetPlayerEnergyTraitName
struct UTraitsTableHelpers_GetPlayerEnergyTraitName_Params
{
	class ATLCharacter*                                Character;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TraitsTableHelpers.GetActiveTraitPercent
struct UTraitsTableHelpers_GetActiveTraitPercent_Params
{
	class UUserWidget*                                 Widget;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActiveTraitName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TraitTextBlock.GetTraitTextValue
struct UTraitTextBlock_GetTraitTextValue_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeStylesWidget.SetUnlockedHeaderVisibility
struct UTransmogDyeStylesWidget_SetUnlockedHeaderVisibility_Params
{
	UMG_ESlateVisibility                               InVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeStylesWidget.SetLockedHeaderVisibility
struct UTransmogDyeStylesWidget_SetLockedHeaderVisibility_Params
{
	UMG_ESlateVisibility                               InVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeStylesWidget.GetWeaponHeader
struct UTransmogDyeStylesWidget_GetWeaponHeader_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeStylesWidget.GetUnlockedItemList
struct UTransmogDyeStylesWidget_GetUnlockedItemList_Params
{
	class UTransmogDyeItemListWidget*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeStylesWidget.GetScrollBox
struct UTransmogDyeStylesWidget_GetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeStylesWidget.GetLockedItemList
struct UTransmogDyeStylesWidget_GetLockedItemList_Params
{
	class UTransmogDyeItemListWidget*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeStylesWidget.GetLoadingSpinner
struct UTransmogDyeStylesWidget_GetLoadingSpinner_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeStylesWidget.GetCountText
struct UTransmogDyeStylesWidget_GetCountText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeStylesWidget.GetArmorHeader
struct UTransmogDyeStylesWidget_GetArmorHeader_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TransmogDyeStylesWidget.DisplayError
struct UTransmogDyeStylesWidget_DisplayError_Params
{
	struct FText                                       ErrorText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelToPartyMemberWidget.PortalToPartyMemberFort
struct UTravelToPartyMemberWidget_PortalToPartyMemberFort_Params
{
};

// Function FrontiersUI.TravelToPartyMemberWidget.PortalToPartyMember
struct UTravelToPartyMemberWidget_PortalToPartyMember_Params
{
};

// Function FrontiersUI.TravelToPartyMemberWidget.GetPortraitIcon
struct UTravelToPartyMemberWidget_GetPortraitIcon_Params
{
	class UAllyInfoWidget*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelToPartyMemberWidget.GetPortalToPartyMemberFortButton
struct UTravelToPartyMemberWidget_GetPortalToPartyMemberFortButton_Params
{
	class UTLButton*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelToPartyMemberWidget.GetPortalToPartyMemberButton
struct UTravelToPartyMemberWidget_GetPortalToPartyMemberButton_Params
{
	class UTLButton*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelToPartyMemberWidget.GetPartyMemberNameTextBlock
struct UTravelToPartyMemberWidget_GetPartyMemberNameTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelToPartyMemberWidget.GetCurrentAreaTextBlock
struct UTravelToPartyMemberWidget_GetCurrentAreaTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelToPartyMemberWidget.GetCurrentAreaText
struct UTravelToPartyMemberWidget_GetCurrentAreaText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelToPartyMemberWidget.CanPortalToPartyMember
struct UTravelToPartyMemberWidget_CanPortalToPartyMember_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelToKnownDestinationWidget.PortalToDestination
struct UTravelToKnownDestinationWidget_PortalToDestination_Params
{
};

// Function FrontiersUI.TravelToKnownDestinationWidget.GetIcon
struct UTravelToKnownDestinationWidget_GetIcon_Params
{
	class UTLImage*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelToKnownDestinationWidget.GetButtonLabel
struct UTravelToKnownDestinationWidget_GetButtonLabel_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelMapWidget.GetTravelToTownWidget
struct UTravelMapWidget_GetTravelToTownWidget_Params
{
	class UTravelToKnownDestinationWidget*             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelMapWidget.GetTravelToFortWidget
struct UTravelMapWidget_GetTravelToFortWidget_Params
{
	class UTravelToKnownDestinationWidget*             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelMapWidget.GetPartyWidgetContainer
struct UTravelMapWidget_GetPartyWidgetContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelMapWidget.GetPartyTravelWidgets
struct UTravelMapWidget_GetPartyTravelWidgets_Params
{
	TArray<class UTravelToPartyMemberWidget*>          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelMapWidget.GetPartyMemberListWidget
struct UTravelMapWidget_GetPartyMemberListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelMapWidget.GetOptionsBackgroundWidgetSwitcher
struct UTravelMapWidget_GetOptionsBackgroundWidgetSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelMapWidget.GetDefaultGamepadListWidget
struct UTravelMapWidget_GetDefaultGamepadListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.TravelMapWidget.GetDefaultDestinationsListWidget
struct UTravelMapWidget_GetDefaultDestinationsListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UIBlueprintFunctionLibrary.ShowLevelUpToast
struct UUIBlueprintFunctionLibrary_ShowLevelUpToast_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Message;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UIBlueprintFunctionLibrary.SetTLTextStyle
struct UUIBlueprintFunctionLibrary_SetTLTextStyle_Params
{
	class UTextLayoutWidget*                           TextLayoutWidget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StyleClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UIBlueprintFunctionLibrary.SetTLText
struct UUIBlueprintFunctionLibrary_SetTLText_Params
{
	class UTextLayoutWidget*                           TextLayoutWidget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UIBlueprintFunctionLibrary.NumberToText
struct UUIBlueprintFunctionLibrary_NumberToText_Params
{
	float                                              Number;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaximumFractionalDigits;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ERoundingMode>                  RoundingMode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UIBlueprintFunctionLibrary.MakeTooltipForWidget
struct UUIBlueprintFunctionLibrary_MakeTooltipForWidget_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TooltipClass;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTooltipWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UIBlueprintFunctionLibrary.MakeTextTooltipForWidget
struct UUIBlueprintFunctionLibrary_MakeTextTooltipForWidget_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTooltipWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UIBlueprintFunctionLibrary.MakeDescriptionTooltipForWidget
struct UUIBlueprintFunctionLibrary_MakeDescriptionTooltipForWidget_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UTooltipWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UIBlueprintFunctionLibrary.GetTLTextColor
struct UUIBlueprintFunctionLibrary_GetTLTextColor_Params
{
	class UTextLayoutWidget*                           TextLayoutWidget;                                          // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UIBlueprintFunctionLibrary.GetTLText
struct UUIBlueprintFunctionLibrary_GetTLText_Params
{
	class UTextLayoutWidget*                           TextLayoutWidget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UIBlueprintFunctionLibrary.GetSpokeNameForActor
struct UUIBlueprintFunctionLibrary_GetSpokeNameForActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UIBlueprintFunctionLibrary.ChangeTypefaceFontName
struct UUIBlueprintFunctionLibrary_ChangeTypefaceFontName_Params
{
	class UTextBlock*                                  TextBlock;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InTypefaceFontName;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UIBlueprintFunctionLibrary.ChangeProgressBarFillImage
struct UUIBlueprintFunctionLibrary_ChangeProgressBarFillImage_Params
{
	class UProgressBar*                                ProgressBar;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     TextureAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UIBlueprintFunctionLibrary.ChangeImageAsset
struct UUIBlueprintFunctionLibrary_ChangeImageAsset_Params
{
	class UImage*                                      Image;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     TextureAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESlateBrushDrawType>         DrawType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.UITextConstants.AsPercent
struct UUITextConstants_AsPercent_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ERoundingMode>                  RoundingMode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysSign;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseGrouping;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinimumIntegralDigits;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaximumIntegralDigits;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ResolutionConfirmationWidget.TimerElapsed
struct UResolutionConfirmationWidget_TimerElapsed_Params
{
};

// Function FrontiersUI.ResolutionConfirmationWidget.GetProgressBarWidget
struct UResolutionConfirmationWidget_GetProgressBarWidget_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ResolutionConfirmationWidget.Close
struct UResolutionConfirmationWidget_Close_Params
{
	bool                                               Accepted;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.ResolutionConfirmationWidget.Accept
struct UResolutionConfirmationWidget_Accept_Params
{
};

// Function FrontiersUI.VideoSettingsWidget.SetGamepadFocus
struct UVideoSettingsWidget_SetGamepadFocus_Params
{
	class APlayerController*                           Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VideoSettingsWidget.ResetToDefault
struct UVideoSettingsWidget_ResetToDefault_Params
{
};

// Function FrontiersUI.VideoSettingsWidget.PromptSaveAndClose
struct UVideoSettingsWidget_PromptSaveAndClose_Params
{
};

// Function FrontiersUI.VideoSettingsWidget.GetOptionListWidget
struct UVideoSettingsWidget_GetOptionListWidget_Params
{
	class UOptionListWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VideoSettingsWidget.GetDetectDefaultsButton
struct UVideoSettingsWidget_GetDetectDefaultsButton_Params
{
	class UButton*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VideoSettingsWidget.DetectDefaults
struct UVideoSettingsWidget_DetectDefaults_Params
{
};

// Function FrontiersUI.VitalsStatWidget.GetTraitTextBlock
struct UVitalsStatWidget_GetTraitTextBlock_Params
{
	class UTraitTextBlock*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VitalsStatWidget.GetIconImage
struct UVitalsStatWidget_GetIconImage_Params
{
	class UImage*                                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VoiceChatWidget.OnChatChannelsChanged
struct UVoiceChatWidget_OnChatChannelsChanged_Params
{
	TArray<class UChatChannel*>                        Channels;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VoiceChatWidget.GetAccountNameText
struct UVoiceChatWidget_GetAccountNameText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VoiceChatWidget.BlueprintToggle
struct UVoiceChatWidget_BlueprintToggle_Params
{
	bool                                               bSpeaking;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.VoiceChatOverlay.GetVoiceChatListWidget
struct UVoiceChatOverlay_GetVoiceChatListWidget_Params
{
	class UVoiceChatListWidget*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.WardrobePropWidget.ToggleGender
struct UWardrobePropWidget_ToggleGender_Params
{
};

// Function FrontiersUI.WardrobePropWidget.SwapWeapons
struct UWardrobePropWidget_SwapWeapons_Params
{
};

// Function FrontiersUI.WardrobePropWidget.SwapArmor
struct UWardrobePropWidget_SwapArmor_Params
{
};

// Function FrontiersUI.WardrobePropWidget.SwapAll
struct UWardrobePropWidget_SwapAll_Params
{
};

// Function FrontiersUI.WardrobePropWidget.SelectMale
struct UWardrobePropWidget_SelectMale_Params
{
};

// Function FrontiersUI.WardrobePropWidget.SelectFemale
struct UWardrobePropWidget_SelectFemale_Params
{
};

// Function FrontiersUI.WardrobePropWidget.GetWardrobePropName
struct UWardrobePropWidget_GetWardrobePropName_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.WardrobePropWidget.CanSwapWeapons
struct UWardrobePropWidget_CanSwapWeapons_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.WardrobePropWidget.CanSwapArmor
struct UWardrobePropWidget_CanSwapArmor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.WardrobePropWidget.CanSwapAll
struct UWardrobePropWidget_CanSwapAll_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FrontiersUI.WidgetConstants.BlueprintGetWidgetConstants
struct UWidgetConstants_BlueprintGetWidgetConstants_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetConstants*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
