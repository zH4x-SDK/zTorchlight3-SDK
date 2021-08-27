#pragma once

// Name: Torchlight3, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum FrontiersUI.ESpecialKey
enum class FrontiersUI_ESpecialKey : uint8_t
{
	ESpecialKey__None              = 0,
	ESpecialKey__DPadLeftRight     = 1,
	ESpecialKey__ESpecialKey_MAX   = 2,

};

// Enum FrontiersUI.EStandardUIButtonAction
enum class FrontiersUI_EStandardUIButtonAction : uint8_t
{
	EStandardUIButtonAction__None  = 0,
	EStandardUIButtonAction__Select = 1,
	EStandardUIButtonAction__Continue = 2,
	EStandardUIButtonAction__OK    = 3,
	EStandardUIButtonAction__Back  = 4,
	EStandardUIButtonAction__Cancel = 5,
	EStandardUIButtonAction__Close = 6,
	EStandardUIButtonAction__Confirm = 7,
	EStandardUIButtonAction__Sort  = 8,
	EStandardUIButtonAction__EStandardUIButtonAction_MAX = 9,

};

// Enum FrontiersUI.EUIAudioSlot
enum class FrontiersUI_EUIAudioSlot : uint8_t
{
	EUIAudioSlot__None             = 0,
	EUIAudioSlot__MouseDown        = 1,
	EUIAudioSlot__MouseUp          = 2,
	EUIAudioSlot__Click            = 3,
	EUIAudioSlot__OpenWidget       = 4,
	EUIAudioSlot__CloseWidget      = 5,
	EUIAudioSlot__Alert            = 6,
	EUIAudioSlot__Error            = 7,
	EUIAudioSlot__GenericCelebration = 8,
	EUIAudioSlot__BeginDrag        = 9,
	EUIAudioSlot__Drop             = 10,
	EUIAudioSlot__EUIAudioSlot_MAX = 11,

};

// Enum FrontiersUI.EUINavigationScheme
enum class FrontiersUI_EUINavigationScheme : uint8_t
{
	EUINavigationScheme__DPadAndThumbstick = 0,
	EUINavigationScheme__DPadOnly  = 1,
	EUINavigationScheme__ThumbstickOnly = 2,
	EUINavigationScheme__DPadThumbstickAndArrowKeys = 3,
	EUINavigationScheme__DPadAndArrowKeys = 4,
	EUINavigationScheme__ThumbstickAndArrowKeys = 5,
	EUINavigationScheme__ArrowKeysOnly = 6,
	EUINavigationScheme__Disabled  = 7,
	EUINavigationScheme__EUINavigationScheme_MAX = 8,

};

// Enum FrontiersUI.ERejectButtonType
enum class FrontiersUI_ERejectButtonType : uint8_t
{
	ERejectButtonType__RejectButton = 0,
	ERejectButtonType__CloseButton = 1,
	ERejectButtonType__None        = 2,
	ERejectButtonType__ERejectButtonType_MAX = 3,

};

// Enum FrontiersUI.EListDirection
enum class FrontiersUI_EListDirection : uint8_t
{
	EListDirection__Vertical       = 0,
	EListDirection__Horizontal     = 1,
	EListDirection__Grid           = 2,
	EListDirection__EListDirection_MAX = 3,

};

// Enum FrontiersUI.EAccountCreatePanelStep
enum class FrontiersUI_EAccountCreatePanelStep : uint8_t
{
	InvalidStep                    = 0,
	GettingAccountData             = 1,
	RetrievingLinkCode             = 2,
	EAccountCreatePanelStep_MAX    = 3,

};

// Enum FrontiersUI.EAllyHealthStatus
enum class FrontiersUI_EAllyHealthStatus : uint8_t
{
	EAllyHealthStatus__Normal      = 0,
	EAllyHealthStatus__LowHealth   = 1,
	EAllyHealthStatus__Dead        = 2,
	EAllyHealthStatus__NotAvailable = 3,
	EAllyHealthStatus__EAllyHealthStatus_MAX = 4,

};

// Enum FrontiersUI.EDungeonRulesCardState
enum class FrontiersUI_EDungeonRulesCardState : uint8_t
{
	EDungeonRulesCardState__CardBack = 0,
	EDungeonRulesCardState__CardFront = 1,
	EDungeonRulesCardState__EDungeonRulesCardState_MAX = 2,

};

// Enum FrontiersUI.EDungeonLevelCardState
enum class FrontiersUI_EDungeonLevelCardState : uint8_t
{
	EDungeonLevelCardState__RegularChallenge = 0,
	EDungeonLevelCardState__RegularChallengeLocked = 1,
	EDungeonLevelCardState__RegularChallengeCleared = 2,
	EDungeonLevelCardState__BossChallenge = 3,
	EDungeonLevelCardState__BossChallengeLocked = 4,
	EDungeonLevelCardState__BossChallengeCleared = 5,
	EDungeonLevelCardState__EDungeonLevelCardState_MAX = 6,

};

// Enum FrontiersUI.EDungeonUIState
enum class FrontiersUI_EDungeonUIState : uint8_t
{
	EDungeonUIState__None          = 0,
	EDungeonUIState__ChallengeSelect = 1,
	EDungeonUIState__ChallengeConfirm = 2,
	EDungeonUIState__ChallengeResult = 3,
	EDungeonUIState__NewClusterReveal = 4,
	EDungeonUIState__ExitingToPlay = 5,
	EDungeonUIState__CancelAndExit = 6,
	EDungeonUIState__Count         = 7,
	EDungeonUIState__EDungeonUIState_MAX = 8,

};

// Enum FrontiersUI.EDungeonUIAction
enum class FrontiersUI_EDungeonUIAction : uint8_t
{
	EDungeonUIAction__StateChanged = 0,
	EDungeonUIAction__ChallengeLevelSelected = 1,
	EDungeonUIAction__ChallengeRulesRevealed = 2,
	EDungeonUIAction__ClusterAffixesRevealed = 3,
	EDungeonUIAction__ClusterSelected = 4,
	EDungeonUIAction__EDungeonUIAction_MAX = 5,

};

// Enum FrontiersUI.EDyeAndTransmogError
enum class FrontiersUI_EDyeAndTransmogError : uint8_t
{
	EDyeAndTransmogError__Legendary = 0,
	EDyeAndTransmogError__NotDyeOrTransmoggable = 1,
	EDyeAndTransmogError__NotTransmoggable = 2,
	EDyeAndTransmogError__NotDyeable = 3,
	EDyeAndTransmogError__EDyeAndTransmogError_MAX = 4,

};

// Enum FrontiersUI.EDyeAndTransmogState
enum class FrontiersUI_EDyeAndTransmogState : uint8_t
{
	EDyeAndTransmogState__SelectItem = 0,
	EDyeAndTransmogState__SelectStyle = 1,
	EDyeAndTransmogState__ReadyToPay = 2,
	EDyeAndTransmogState__EDyeAndTransmogState_MAX = 3,

};

// Enum FrontiersUI.EEnchantActionStatus
enum class FrontiersUI_EEnchantActionStatus : uint8_t
{
	EEnchantActionStatus__CanEnchant = 0,
	EEnchantActionStatus__CannotAfford = 1,
	EEnchantActionStatus__ItemIsFull = 2,
	EEnchantActionStatus__Unknown  = 3,
	EEnchantActionStatus__EEnchantActionStatus_MAX = 4,

};

// Enum FrontiersUI.EEnchantingMenuState
enum class FrontiersUI_EEnchantingMenuState : uint8_t
{
	EEnchantingMenuState__SelectItem = 0,
	EEnchantingMenuState__SelectEnchant = 1,
	EEnchantingMenuState__PerformEnchant = 2,
	EEnchantingMenuState__EEnchantingMenuState_MAX = 3,

};

// Enum FrontiersUI.EFeedbackOptionType
enum class FrontiersUI_EFeedbackOptionType : uint8_t
{
	EFeedbackOptionType__None      = 0,
	EFeedbackOptionType__Checkbox  = 1,
	EFeedbackOptionType__Dropdown  = 2,
	EFeedbackOptionType__EditableText = 3,
	EFeedbackOptionType__EFeedbackOptionType_MAX = 4,

};

// Enum FrontiersUI.ETLFeedbackType
enum class FrontiersUI_ETLFeedbackType : uint8_t
{
	ETLFeedbackType__Feedback      = 0,
	ETLFeedbackType__Bug           = 1,
	ETLFeedbackType__ETLFeedbackType_MAX = 2,

};

// Enum FrontiersUI.ECanSacrificeState
enum class FrontiersUI_ECanSacrificeState : uint8_t
{
	ECanSacrificeState__CanSacrifice = 0,
	ECanSacrificeState__NotEnoughCurrency = 1,
	ECanSacrificeState__AlreadyHaveBuff = 2,
	ECanSacrificeState__MaxedOut   = 3,
	ECanSacrificeState__Unknown    = 4,
	ECanSacrificeState__ECanSacrificeState_MAX = 5,

};

// Enum FrontiersUI.EIconSwitcherState
enum class FrontiersUI_EIconSwitcherState : uint8_t
{
	EIconSwitcherState__Inactive   = 0,
	EIconSwitcherState__InProgress = 1,
	EIconSwitcherState__Active     = 2,
	EIconSwitcherState__EIconSwitcherState_MAX = 3,

};

// Enum FrontiersUI.EInventoryCompareType
enum class FrontiersUI_EInventoryCompareType : uint8_t
{
	EInventoryCompareType__Item    = 0,
	EInventoryCompareType__Pet     = 1,
	EInventoryCompareType__EInventoryCompareType_MAX = 2,

};

// Enum FrontiersUI.EUIItemPrimaryActionType
enum class FrontiersUI_EUIItemPrimaryActionType : uint8_t
{
	EUIItemPrimaryActionType__None = 0,
	EUIItemPrimaryActionType__EquipOrUse = 1,
	EUIItemPrimaryActionType__Sell = 2,
	EUIItemPrimaryActionType__MoveByClick = 3,
	EUIItemPrimaryActionType__Select = 4,
	EUIItemPrimaryActionType__Sacrifice = 5,
	EUIItemPrimaryActionType__EUIItemPrimaryActionType_MAX = 6,

};

// Enum FrontiersUI.EUIInventoryCategory
enum class FrontiersUI_EUIInventoryCategory : uint8_t
{
	EUIInventoryCategory__EquippedItems = 0,
	EUIInventoryCategory__BackpackItems = 1,
	EUIInventoryCategory__Currency = 2,
	EUIInventoryCategory__Pet      = 3,
	EUIInventoryCategory__Consumable = 4,
	EUIInventoryCategory__Count    = 5,
	EUIInventoryCategory__EquippedPotions = 6,
	EUIInventoryCategory__None     = 7,
	EUIInventoryCategory__EUIInventoryCategory_MAX = 8,

};

// Enum FrontiersUI.ELegendaryAffixEquippedState
enum class FrontiersUI_ELegendaryAffixEquippedState : uint8_t
{
	ELegendaryAffixEquippedState__NotEquipped = 0,
	ELegendaryAffixEquippedState__ActiveInCurrentSlot = 1,
	ELegendaryAffixEquippedState__ActiveInCollectionWeapon = 2,
	ELegendaryAffixEquippedState__ActiveInCollectionArmor = 3,
	ELegendaryAffixEquippedState__ActiveInCollectionPet = 4,
	ELegendaryAffixEquippedState__ActiveInWardrobeWeapon = 5,
	ELegendaryAffixEquippedState__ActiveInWardrobeArmor = 6,
	ELegendaryAffixEquippedState__ActiveInWardrobePet = 7,
	ELegendaryAffixEquippedState__ELegendaryAffixEquippedState_MAX = 8,

};

// Enum FrontiersUI.ELegendaryAffixCollectionCategory
enum class FrontiersUI_ELegendaryAffixCollectionCategory : uint8_t
{
	ELegendaryAffixCollectionCategory__All = 0,
	ELegendaryAffixCollectionCategory__ActiveClass = 1,
	ELegendaryAffixCollectionCategory__Weapon = 2,
	ELegendaryAffixCollectionCategory__Armor = 3,
	ELegendaryAffixCollectionCategory__Pet = 4,
	ELegendaryAffixCollectionCategory__ELegendaryAffixCollectionCategory_MAX = 5,

};

// Enum FrontiersUI.ELoadingScreenState
enum class FrontiersUI_ELoadingScreenState : uint8_t
{
	ELoadingScreenState__Invalid   = 0,
	ELoadingScreenState__Shown     = 1,
	ELoadingScreenState__Hidden    = 2,
	ELoadingScreenState__ELoadingScreenState_MAX = 3,

};

// Enum FrontiersUI.EMapPanelState
enum class FrontiersUI_EMapPanelState : uint8_t
{
	EMapPanelState__Sidebar        = 0,
	EMapPanelState__Map            = 1,
	EMapPanelState__Quests         = 2,
	EMapPanelState__Count          = 3,
	EMapPanelState__EMapPanelState_MAX = 4,

};

// Enum FrontiersUI.EMessageContainerWidgetType
enum class FrontiersUI_EMessageContainerWidgetType : uint8_t
{
	EMessageContainerWidgetType__None = 0,
	EMessageContainerWidgetType__InventoryItemPickup = 1,
	EMessageContainerWidgetType__CurrencyPickup = 2,
	EMessageContainerWidgetType__TraitNotification = 3,
	EMessageContainerWidgetType__EmberWeaponLevelUp = 4,
	EMessageContainerWidgetType__PlayerNotification = 5,
	EMessageContainerWidgetType__Lore = 6,
	EMessageContainerWidgetType__EMessageContainerWidgetType_MAX = 7,

};

// Enum FrontiersUI.EUIMessageType
enum class FrontiersUI_EUIMessageType : uint8_t
{
	EUIMessageType__Message        = 0,
	EUIMessageType__Error          = 1,
	EUIMessageType__EUIMessageType_MAX = 2,

};

// Enum FrontiersUI.EUINotification
enum class FrontiersUI_EUINotification : uint8_t
{
	EUINotification__InventoryFull = 0,
	EUINotification__SkillAvailable = 1,
	EUINotification__UnreadInboxMail = 2,
	EUINotification__ClaimableCrafting = 3,
	EUINotification__UnclaimedContractReward = 4,
	EUINotification__SocialNotification = 5,
	EUINotification__NewLegendaryAffixes = 6,
	EUINotification__Count         = 7,
	EUINotification__EUINotification_MAX = 8,

};

// Enum FrontiersUI.EOptionWidgetType
enum class FrontiersUI_EOptionWidgetType : uint8_t
{
	EOptionWidgetType__None        = 0,
	EOptionWidgetType__Slider      = 1,
	EOptionWidgetType__Checkbox    = 2,
	EOptionWidgetType__Dropdown    = 3,
	EOptionWidgetType__EOptionWidgetType_MAX = 4,

};

// Enum FrontiersUI.EPartyMemberWidgetState
enum class FrontiersUI_EPartyMemberWidgetState : uint8_t
{
	EPartyMemberWidgetState__SlotFilled = 0,
	EPartyMemberWidgetState__SlotEmpty = 1,
	EPartyMemberWidgetState__PendingInvite = 2,
	EPartyMemberWidgetState__EPartyMemberWidgetState_MAX = 3,

};

// Enum FrontiersUI.EBackgroundBehavior
enum class FrontiersUI_EBackgroundBehavior : uint8_t
{
	EBackgroundBehavior__ZoomIn    = 0,
	EBackgroundBehavior__PreviewActor = 1,
	EBackgroundBehavior__EBackgroundBehavior_MAX = 2,

};

// Enum FrontiersUI.EAvailabilityType
enum class FrontiersUI_EAvailabilityType : uint8_t
{
	CanPurchase                    = 0,
	CannotAfford                   = 1,
	Free                           = 2,
	EAvailabilityType_MAX          = 3,

};

// Enum FrontiersUI.EAlertWidgetType
enum class FrontiersUI_EAlertWidgetType : uint8_t
{
	EAlertWidgetType__None         = 0,
	EAlertWidgetType__Alert        = 1,
	EAlertWidgetType__Custom       = 2,
	EAlertWidgetType__ShineMaterial = 3,
	EAlertWidgetType__EAlertWidgetType_MAX = 4,

};

// Enum FrontiersUI.ETargetInfoWidgetElement
enum class FrontiersUI_ETargetInfoWidgetElement : uint8_t
{
	ETargetInfoWidgetElement__NameTextBlock = 0,
	ETargetInfoWidgetElement__ColorLikeName = 1,
	ETargetInfoWidgetElement__HealthBar = 2,
	ETargetInfoWidgetElement__HealthBarCap = 3,
	ETargetInfoWidgetElement__Description = 4,
	ETargetInfoWidgetElement__Affix = 5,
	ETargetInfoWidgetElement__Restriction = 6,
	ETargetInfoWidgetElement__SpawnType = 7,
	ETargetInfoWidgetElement__HealthLabel = 8,
	ETargetInfoWidgetElement__TargetLevel = 9,
	ETargetInfoWidgetElement__TargetElementIcon = 10,
	ETargetInfoWidgetElement__Filigree = 11,
	ETargetInfoWidgetElement__GlowBorder = 12,
	ETargetInfoWidgetElement__BarBackground = 13,
	ETargetInfoWidgetElement__ETargetInfoWidgetElement_MAX = 14,

};

// Enum FrontiersUI.EVisibilityOverride
enum class FrontiersUI_EVisibilityOverride : uint8_t
{
	EVisibilityOverride__Default   = 0,
	EVisibilityOverride__Visible   = 1,
	EVisibilityOverride__Invisible = 2,
	EVisibilityOverride__EVisibilityOverride_MAX = 3,

};

// Enum FrontiersUI.ETargetWidgetType
enum class FrontiersUI_ETargetWidgetType : uint8_t
{
	ETargetWidgetType__None        = 0,
	ETargetWidgetType__Basic       = 1,
	ETargetWidgetType__Harvestable = 2,
	ETargetWidgetType__Warp        = 3,
	ETargetWidgetType__Monster     = 4,
	ETargetWidgetType__Champion    = 5,
	ETargetWidgetType__Boss        = 6,
	ETargetWidgetType__ETargetWidgetType_MAX = 7,

};

// Enum FrontiersUI.ETransmogDyeListType
enum class FrontiersUI_ETransmogDyeListType : uint8_t
{
	ETransmogDyeListType__Locked   = 0,
	ETransmogDyeListType__Unlocked = 1,
	ETransmogDyeListType__ETransmogDyeListType_MAX = 2,

};

// Enum FrontiersUI.EUserReportCategory
enum class FrontiersUI_EUserReportCategory : uint8_t
{
	EUserReportCategory__Default   = 0,
	EUserReportCategory__Fort      = 1,
	EUserReportCategory__Chat      = 2,
	EUserReportCategory__EUserReportCategory_MAX = 3,

};

// Enum FrontiersUI.EQuestMapMode
enum class FrontiersUI_EQuestMapMode : uint8_t
{
	EQuestMapMode__MinimapAndQuests = 0,
	EQuestMapMode__QuestsAndOverlay = 1,
	EQuestMapMode__NoQuestsAndOverlay = 2,
	EQuestMapMode__NoQuestsNoMap   = 3,
	EQuestMapMode__NoQuestsAndMiniMap = 4,
	EQuestMapMode__Count           = 5,
	EQuestMapMode__EQuestMapMode_MAX = 6,

};

// Enum FrontiersUI.EUIQuestTask
enum class FrontiersUI_EUIQuestTask : uint8_t
{
	EUIQuestTask__Main             = 0,
	EUIQuestTask__AreaHint         = 1,
	EUIQuestTask__EUIQuestTask_MAX = 2,

};

// Enum FrontiersUI.ECharacterMenuTab
enum class FrontiersUI_ECharacterMenuTab : uint8_t
{
	ECharacterMenuTab__Inventory   = 0,
	ECharacterMenuTab__Skills      = 1,
	ECharacterMenuTab__Party       = 2,
	ECharacterMenuTab__Map         = 3,
	ECharacterMenuTab__Contract    = 4,
	ECharacterMenuTab__ECharacterMenuTab_MAX = 5,

};

// Enum FrontiersUI.EDisconnectReason
enum class FrontiersUI_EDisconnectReason : uint8_t
{
	EDisconnectReason__Unknown     = 0,
	EDisconnectReason__Inactivity  = 1,
	EDisconnectReason__EDisconnectReason_MAX = 2,

};

// Enum FrontiersUI.EGameplayError
enum class FrontiersUI_EGameplayError : uint8_t
{
	EGameplayError__None           = 0,
	EGameplayError__InventoryCannotEquipOffhandFull = 1,
	EGameplayError__InventoryCannotEquipInventoryFull = 2,
	EGameplayError__InventoryCannotEquipInsufficientLevel = 3,
	EGameplayError__InventoryCannotEquipInventoryLocked = 4,
	EGameplayError__InventoryCannotEquipPetItemsLocked = 5,
	EGameplayError__CraftQueueFull = 6,
	EGameplayError__CraftGenericError = 7,
	EGameplayError__OutOfEnergy    = 8,
	EGameplayError__TooMuchEnergy  = 9,
	EGameplayError__CantCast       = 10,
	EGameplayError__CantCastInsufficientItems = 11,
	EGameplayError__EmberWeaponSkillFailed = 12,
	EGameplayError__InventoryCannotMoveInventoryFull = 13,
	EGameplayError__InventoryCannotMovePetInventoryFull = 14,
	EGameplayError__PetIsAway      = 15,
	EGameplayError__NoDamageDealtWithoutWeapon = 16,
	EGameplayError__NoDamageDealt  = 17,
	EGameplayError__CantUsePotionAtFullHealth = 18,
	EGameplayError__NoMorePotions  = 19,
	EGameplayError__CannotUseWarpQuestRequirement = 20,
	EGameplayError__CannotUseWarpToSelf = 21,
	EGameplayError__InactivityWarning = 22,
	EGameplayError__EGameplayError_MAX = 23,

};

// Enum FrontiersUI.ECameraType
enum class FrontiersUI_ECameraType : uint8_t
{
	ECameraType__Isometric         = 0,
	ECameraType__IsoPlayerOnLeft   = 1,
	ECameraType__CameraDistanceVolume = 2,
	ECameraType__VanityPlayerInCenter = 3,
	ECameraType__VanityPlayerOnLeft = 4,
	ECameraType__Custom            = 5,
	ECameraType__Count             = 6,
	ECameraType__ECameraType_MAX   = 7,

};

// Enum FrontiersUI.EMapMarkerType
enum class FrontiersUI_EMapMarkerType : uint8_t
{
	EMapMarkerType__None           = 0,
	EMapMarkerType__Warp           = 1,
	EMapMarkerType__BossWarp       = 2,
	EMapMarkerType__DeactiveWarp   = 3,
	EMapMarkerType__Waypoint       = 4,
	EMapMarkerType__Player         = 5,
	EMapMarkerType__LocalPlayer    = 6,
	EMapMarkerType__StoryQuestGiver = 7,
	EMapMarkerType__StoryQuestObjective = 8,
	EMapMarkerType__QuestGiver     = 9,
	EMapMarkerType__QuestObjective = 10,
	EMapMarkerType__ChallengeQuestGiver = 11,
	EMapMarkerType__ChallengeQuestObjective = 12,
	EMapMarkerType__QuestTurnIn    = 13,
	EMapMarkerType__Vendor         = 14,
	EMapMarkerType__Portal         = 15,
	EMapMarkerType__Shrine         = 16,
	EMapMarkerType__Minion         = 17,
	EMapMarkerType__PartyMember1   = 18,
	EMapMarkerType__PartyMember2   = 19,
	EMapMarkerType__PartyMember3   = 20,
	EMapMarkerType__Harvestable    = 21,
	EMapMarkerType__Area           = 22,
	EMapMarkerType__ValuableItem   = 23,
	EMapMarkerType__EMapMarkerType_MAX = 24,

};

// Enum FrontiersUI.ETLWidget
enum class FrontiersUI_ETLWidget : uint8_t
{
	ETLWidget__None                = 0,
	ETLWidget__Party               = 1,
	ETLWidget__Pet                 = 2,
	ETLWidget__Chat                = 3,
	ETLWidget__SkillBar            = 4,
	ETLWidget__DebugPanelOverlay   = 5,
	ETLWidget__QuestTrackerOverlay = 6,
	ETLWidget__Minimap             = 7,
	ETLWidget__OverlayMap          = 8,
	ETLWidget__PlaceNameOverlay    = 9,
	ETLWidget__TargetInfo          = 10,
	ETLWidget__AButtonInteractPrompt = 11,
	ETLWidget__HitpointBars        = 12,
	ETLWidget__Notifications       = 13,
	ETLWidget__GameMessages        = 14,
	ETLWidget__FameBar             = 15,
	ETLWidget__WorldWidgets        = 16,
	ETLWidget__ToastsPanel         = 17,
	ETLWidget__CharacterMenu       = 18,
	ETLWidget__InGameMenu          = 19,
	ETLWidget__InGameMenu_MainMenu = 20,
	ETLWidget__Help                = 21,
	ETLWidget__FortEdit            = 22,
	ETLWidget__QuestTracker        = 23,
	ETLWidget__PlaceNameMessage    = 24,
	ETLWidget__DebugPanel          = 25,
	ETLWidget__DebugActorInfoPanel = 26,
	ETLWidget__DebugInteraction    = 27,
	ETLWidget__CraftingConfirmation = 28,
	ETLWidget__AccountStash        = 29,
	ETLWidget__KeyBindingsMenu     = 30,
	ETLWidget__VendorStore         = 31,
	ETLWidget__StoreDetails        = 32,
	ETLWidget__SkillObject         = 33,
	ETLWidget__VideoSettingsMenu   = 34,
	ETLWidget__WardrobeProp        = 35,
	ETLWidget__PetStorage          = 36,
	ETLWidget__Options             = 37,
	ETLWidget__WaypointMap         = 38,
	ETLWidget__Difficulty          = 39,
	ETLWidget__Inbox               = 40,
	ETLWidget__LevelSequenceCinematic = 41,
	ETLWidget__TravelPortal        = 42,
	ETLWidget__LegendaryAffixCollectionEquipModal = 43,
	ETLWidget__MiniHelpPrompts     = 44,
	ETLWidget__Credits             = 45,
	ETLWidget__PetDisplay          = 46,
	ETLWidget__Feedback            = 47,
	ETLWidget__InstanceResetModal  = 48,
	ETLWidget__AccountOptionsModal = 49,
	ETLWidget__Count               = 50,
	ETLWidget__ETLWidget_MAX       = 51,

};

// Enum FrontiersUI.EUserFacingQuery
enum class FrontiersUI_EUserFacingQuery : uint8_t
{
	EUserFacingQuery__None         = 0,
	EUserFacingQuery__ReplaceMapworksPortal = 1,
	EUserFacingQuery__EUserFacingQuery_MAX = 2,

};

// Enum FrontiersUI.EUserFacingError
enum class FrontiersUI_EUserFacingError : uint8_t
{
	EUserFacingError__None         = 0,
	EUserFacingError__GameServerDisconnected = 1,
	EUserFacingError__LoginFailed  = 2,
	EUserFacingError__LoginFailedServersLocked = 3,
	EUserFacingError__LoginFailedNoArcToken = 4,
	EUserFacingError__EnterGameFailed = 5,
	EUserFacingError__SetDifficultyFailed = 6,
	EUserFacingError__TooManyCharacters = 7,
	EUserFacingError__TooManyPets  = 8,
	EUserFacingError__TooManyEmberWeapons = 9,
	EUserFacingError__PurchaseFailed = 10,
	EUserFacingError__SpreadsheetLoadFailedOnline = 11,
	EUserFacingError__Deprecated_SpreadsheetLoadFailedOffline = 12,
	EUserFacingError__SpreadsheetLoadFailedOfflineFatal = 13,
	EUserFacingError__ContractPurchaseFailed = 14,
	EUserFacingError__GenericCraftFailed = 15,
	EUserFacingError__GenericCraftFailedTraitExceededMax = 16,
	EUserFacingError__GenericCraftFailedInventoryFull = 17,
	EUserFacingError__OfflineCharactersContentOutOfDate = 18,
	EUserFacingError__WardrobeWrongClass = 19,
	EUserFacingError__WardrobeHardcore = 20,
	EUserFacingError__WardrobeNotYourFort = 21,
	EUserFacingError__ChatRestricted = 22,
	EUserFacingError__EUserFacingError_MAX = 23,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FrontiersUI.UIButtonAction
// 0x00F8
struct FUIButtonAction
{
	unsigned char                                      UnknownData_FIZ7[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bEnabled;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCustomText;                                               // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FrontiersUI_EStandardUIButtonAction                StandardActionText;                                        // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BKN5[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Text;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               HiddenVisibility;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CGUT[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         AudioEvent;                                                // 0x0030(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         HoldAudioEvent;                                            // 0x0048(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              HoldTime;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideInChildWidgets;                                       // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BKWP[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ActionDelegate;                                            // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VZ45[0x40];                                    // 0x0078(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKey>                                Keys;                                                      // 0x00B8(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1O1W[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	FrontiersUI_ESpecialKey                            SpecialKey;                                                // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CGII[0x17];                                    // 0x00E1(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.WidgetTickHandle
// 0x0028
struct FWidgetTickHandle
{
	unsigned char                                      UnknownData_AND9[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TickInterval;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VE1O[0x20];                                    // 0x0008(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.ModalWidgetDefinition
// 0x0260
struct FModalWidgetDefinition
{
	struct FText                                       Title;                                                     // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	class UClass*                                      TitleStyle;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Body;                                                      // 0x0020(0x0018) (Edit, NativeAccessSpecifierPublic)
	class UClass*                                      BodyStyle;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCustomAcceptAction;                                       // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BE5Z[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             AcceptAction;                                              // 0x0048(0x00F8) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bCustomRejectAction;                                       // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DV77[0x7];                                     // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIButtonAction                             RejectAction;                                              // 0x0148(0x00F8) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bShowOverLoadingScreen;                                    // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_THD6[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FrameWidgetClass;                                          // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ContentWidgetClass;                                        // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFocusContent;                                             // 0x0258(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FrontiersUI_ERejectButtonType                      RejectButtonType;                                          // 0x0259(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S5B9[0x2];                                     // 0x025A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AutoCloseTimer;                                            // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.ClassSkillBarDefinition
// 0x0010
struct FClassSkillBarDefinition
{
	class UClass*                                      ResourceBarWidgetClass;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ClassGameplayTag;                                          // 0x0008(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.WidgetElementArray
// 0x0010
struct FWidgetElementArray
{
	TArray<class UWidget*>                             Widgets;                                                   // 0x0000(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.ChampionTargetDisplayData
// 0x03D0
struct FChampionTargetDisplayData
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProgressBarStyle                           ProgressBarStyle;                                          // 0x0010(0x01A0) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BGBrush;                                                   // 0x01B0(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FiligreeBrush;                                             // 0x0238(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 EndcapBrush;                                               // 0x02C0(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 GlowBrush;                                                 // 0x0348(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.CanvasWidget
// 0x0038
struct FCanvasWidget
{
	class UClass*                                      WidgetClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                                 Widget;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnchors                                    Anchors;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Alignment;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoSize;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L96D[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ManualSize;                                                // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZOrder;                                                    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.TabbedMenuOption
// 0x0070
struct FTabbedMenuOption
{
	TArray<struct FCanvasWidget>                       Widgets;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FText                                       Name;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       TabId;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParentTabId;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Icon;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AlertTextDelegateName;                                     // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AlertVisibilityDelegateName;                               // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CustomAlertWidget;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FrontiersUI_EAlertWidgetType                       AlertType;                                                 // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeCamera;                                             // 0x0069(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FrontiersUI_ECameraType                            CameraType;                                                // 0x006A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x006B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YKVX[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.ChannelUIDefinition
// 0x0070
struct FChannelUIDefinition
{
	Frontiers_EChatChannelType                         ChannelType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLBD[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             Commands;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XTAU[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ChannelMessageFormat;                                      // 0x0020(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       ChannelOwnMessageFormat;                                   // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       ChannelHeader;                                             // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                Order;                                                     // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeCycledTo;                                            // 0x006C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JMRE[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.SharpshooterTrinketAppearanceData
// 0x0030
struct FSharpshooterTrinketAppearanceData
{
	class UPaperSprite*                                TrinketSprite;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 TrinketBackgroundColor;                                    // 0x0008(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.KeyUIData
// 0x02B0
struct FKeyUIData
{
	bool                                               bFlipBG;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowText;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VPAS[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ShortName;                                                 // 0x0008(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               bUseCustomTextColor;                                       // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_974G[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                CustomTextColor;                                           // 0x0024(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseCustomButtonBG;                                        // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BW7Z[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FButtonStyle                                CustomButtonBG;                                            // 0x0038(0x0278) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct FrontiersUI.SpecialKeyPlatformMapping
// 0x0050
struct FSpecialKeyPlatformMapping
{
	TMap<Frontiers_ETLPlatform, struct FKeyUIData>     KeyMapping;                                                // 0x0000(0x0050) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.PlatformUIKeyMapping
// 0x0058
struct FPlatformUIKeyMapping
{
	struct FName                                       MappingName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FKey, struct FKey>                     KeyMapping;                                                // 0x0008(0x0050) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.InventoryGridCategoryData
// 0x0030
struct FInventoryGridCategoryData
{
	class UClass*                                      ContainerClass;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     WidgetToSelect;                                            // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UListWidget*>                         ListWidgets;                                               // 0x0010(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P90W[0x10];                                    // 0x0020(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.DeathOption
// 0x0020
struct FDeathOption
{
	struct FText                                       Label;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UObject*                                     ButtonImage;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.DungeonUIResponse
// 0x0038
struct FDungeonUIResponse
{
	struct FString                                     AnimationName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         AudioEvent;                                                // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     CustomEventName;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.MCDialogueInteraction
// 0x0030
struct FMCDialogueInteraction
{
	struct FDialogueTableRowHandle                     DialogueRow;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FString                                     CustomEventOnStarted;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CustomEventOnEnded;                                        // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.MCDialogueChoices
// 0x0010
struct FMCDialogueChoices
{
	TArray<struct FMCDialogueInteraction>              Dialogues;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.DungeonUIStateTransition
// 0x0002
struct FDungeonUIStateTransition
{
	FrontiersUI_EDungeonUIState                        OldState;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FrontiersUI_EDungeonUIState                        NewState;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.MCIdleAnimation
// 0x0018
struct FMCIdleAnimation
{
	struct FString                                     AnimationName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinWaitTime;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxWaitTime;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.MCIdleAnimationGroup
// 0x0020
struct FMCIdleAnimationGroup
{
	TArray<struct FMCIdleAnimation>                    MutuallyExclusiveAnimations;                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4VCQ[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.DungeonCachedStateWidget
// 0x0010
struct FDungeonCachedStateWidget
{
	FrontiersUI_EDungeonUIState                        State;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TSRV[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLUserWidget*                               Widget;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.SpringArmRequestOverride
// 0x0010
struct FSpringArmRequestOverride
{
	bool                                               bActive;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JHLF[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Length;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZoomRate;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.DebugTextKeyCombo
// 0x0020
struct FDebugTextKeyCombo
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q61F[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.KeyBindingData
// 0x0020
struct FKeyBindingData
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0008(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.LegendaryAffixItemSubCategory
// 0x0028
struct FLegendaryAffixItemSubCategory
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTag                                GameplayTag;                                               // 0x0018(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C0NH[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.CustomizeSection
// 0x0020
struct FCustomizeSection
{
	struct FName                                       SectionId;                                                 // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     WidgetToFocus;                                             // 0x0008(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     HighlightWidget;                                           // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     DimWidget;                                                 // 0x0018(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.MapMarkerConstraint
// 0x002C
struct FMapMarkerConstraint
{
	bool                                               bConstrainInWorldSpace;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowOnMinimap;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L5PW[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Padding;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius2D;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WorldSpaceRadius;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BumpPastEdge;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationAdjust;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ETTV[0x14];                                    // 0x0018(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.OptionWidgetData
// 0x0090
struct FOptionWidgetData
{
	Frontiers_EOptionAction                            OptionAction;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CS7J[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Frontiers_ETLPlatform, struct FText>          PlatformOverrideText;                                      // 0x0008(0x0050) (Edit, NativeAccessSpecifierPublic)
	TArray<Frontiers_ETLPlatform>                      DisabledPlatforms;                                         // 0x0058(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<Frontiers_ETLPlayMode>                      DisabledPlayModes;                                         // 0x0068(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FText                                       OptionName;                                                // 0x0078(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct FrontiersUI.ListedButton
// 0x0040
struct FListedButton
{
	struct FText                                       Text;                                                      // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	class UObject*                                     Icon;                                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0020(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JDSA[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.StoreCategory
// 0x0060
struct FStoreCategory
{
	struct FText                                       CategoryName;                                              // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTag                                GameplayTag;                                               // 0x0018(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rows;                                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Columns;                                                   // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplaySubCategoryContents;                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayTime;                                              // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D7S0[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      NPCClass[0x28];                                            // 0x002A(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      UnknownData_HOC9[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.UserFacingText
// 0x0020
struct FUserFacingText
{
	struct FText                                       Text;                                                      // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AH2B[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.UserFacingError
// 0x0030
struct FUserFacingError
{
	struct FText                                       ModalTitle;                                                // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       ModalBody;                                                 // 0x0018(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.UserFacingQuery
// 0x0060
struct FUserFacingQuery
{
	struct FText                                       ModalTitle;                                                // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       ModalBody;                                                 // 0x0018(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       AcceptText;                                                // 0x0030(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       RejectText;                                                // 0x0048(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.CraftingEntryData
// 0x0178
struct FCraftingEntryData
{
	class AActor*                                      Prop;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PropName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingRecipe                             Recipe;                                                    // 0x0010(0x00C0) (NativeAccessSpecifierPublic)
	struct FCraftingQueueEntry                         QueueEntry;                                                // 0x00D0(0x00A0) (NativeAccessSpecifierPublic)
	bool                                               bIsEnabled;                                                // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NOJ5[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.DungeonChallengeCardData
// 0x0058
struct FDungeonChallengeCardData
{
	struct FName                                       Quality;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       StartingAreaText;                                          // 0x0008(0x0018) (NativeAccessSpecifierPublic)
	struct FGameplayTag                                PrimaryElementTag;                                         // 0x0020(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                MonsterPopulationTag;                                      // 0x0028(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBossTableRowHandle                         BossRow;                                                   // 0x0030(0x0010) (NativeAccessSpecifierPublic)
	bool                                               bIsBossLevel;                                              // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N8TM[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMapWorksTableRowHandle>             DungeonSpawnOutput;                                        // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.DungeonChallengeCardParams
// 0x0014
struct FDungeonChallengeCardParams
{
	struct FName                                       Quality;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChallengeLevel;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DungeonSeed;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBossLevel;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GQI3[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.DungeonUIStateMetadata
// 0x0002
struct FDungeonUIStateMetadata
{
	FrontiersUI_EDungeonUIState                        State;                                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBossCardSelected;                                       // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersUI.DungeonUIActionMetadata
// 0x0010
struct FDungeonUIActionMetadata
{
	FrontiersUI_EDungeonUIAction                       ActionType;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDungeonUIStateMetadata                     OldState;                                                  // 0x0001(0x0002) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FDungeonUIStateMetadata                     NewState;                                                  // 0x0003(0x0002) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TOU4[0xB];                                     // 0x0005(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.StatusEffectWidgetEntry
// 0x0008
struct FStatusEffectWidgetEntry
{
	unsigned char                                      UnknownData_TRME[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersUI.WidgetSet
// 0x0018
struct FWidgetSet
{
	bool                                               bBlacklist;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A2WH[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<FrontiersUI_ETLWidget>                      Widgets;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
