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

// Enum Frontiers.EWeaponSlot
enum class Frontiers_EWeaponSlot : uint8_t
{
	EWeaponSlot__Default           = 0,
	EWeaponSlot__WeaponRight       = 1,
	EWeaponSlot__WeaponLeft        = 2,
	EWeaponSlot__Cannon            = 3,
	EWeaponSlot__Pet               = 4,
	EWeaponSlot__AllItems          = 5,
	EWeaponSlot__Count             = 6,
	EWeaponSlot__EWeaponSlot_MAX   = 7,

};

// Enum Frontiers.EBossFightState
enum class Frontiers_EBossFightState : uint8_t
{
	EBossFightState__Active        = 0,
	EBossFightState__NeedsCleanUp  = 1,
	EBossFightState__NeedsReset    = 2,
	EBossFightState__Finished      = 3,
	EBossFightState__EBossFightState_MAX = 4,

};

// Enum Frontiers.EAchievementManagerQueryStatus
enum class Frontiers_EAchievementManagerQueryStatus : uint8_t
{
	EAchievementManagerQueryStatus__Invalid = 0,
	EAchievementManagerQueryStatus__InProgress = 1,
	EAchievementManagerQueryStatus__Completed = 2,
	EAchievementManagerQueryStatus__Failed = 3,
	EAchievementManagerQueryStatus__EAchievementManagerQueryStatus_MAX = 4,

};

// Enum Frontiers.EPendingAchievementPriority
enum class Frontiers_EPendingAchievementPriority : uint8_t
{
	EPendingAchievementPriority__Invalid = 0,
	EPendingAchievementPriority__Error = 1,
	EPendingAchievementPriority__Resolved = 2,
	EPendingAchievementPriority__Updated = 3,
	EPendingAchievementPriority__Completed = 4,
	EPendingAchievementPriority__EPendingAchievementPriority_MAX = 5,

};

// Enum Frontiers.EActiveTraitLockType
enum class Frontiers_EActiveTraitLockType : uint8_t
{
	EActiveTraitLockType__All      = 0,
	EActiveTraitLockType__Increasing = 1,
	EActiveTraitLockType__Decreasing = 2,
	EActiveTraitLockType__EActiveTraitLockType_MAX = 3,

};

// Enum Frontiers.EActiveTraitMonitorRuleType
enum class Frontiers_EActiveTraitMonitorRuleType : uint8_t
{
	EActiveTraitMonitorRuleType__PercentGreater = 0,
	EActiveTraitMonitorRuleType__PercentLess = 1,
	EActiveTraitMonitorRuleType__AtMax = 2,
	EActiveTraitMonitorRuleType__AtMin = 3,
	EActiveTraitMonitorRuleType__EActiveTraitMonitorRuleType_MAX = 4,

};

// Enum Frontiers.EActiveTraitReplicateType
enum class Frontiers_EActiveTraitReplicateType : uint8_t
{
	EActiveTraitReplicateType__Replicate = 0,
	EActiveTraitReplicateType__NoReplicate = 1,
	EActiveTraitReplicateType__ReplicateCheap_OnMonsters = 2,
	EActiveTraitReplicateType__EActiveTraitReplicateType_MAX = 3,

};

// Enum Frontiers.EActiveTraitValueType
enum class Frontiers_EActiveTraitValueType : uint8_t
{
	EActiveTraitValueType__Continuous = 0,
	EActiveTraitValueType__Discrete = 1,
	EActiveTraitValueType__EActiveTraitValueType_MAX = 2,

};

// Enum Frontiers.EActiveTraitResetType
enum class Frontiers_EActiveTraitResetType : uint8_t
{
	EActiveTraitResetType__None    = 0,
	EActiveTraitResetType__ResetToMax = 1,
	EActiveTraitResetType__ResetToDeltaMax = 2,
	EActiveTraitResetType__ResetToMin = 3,
	EActiveTraitResetType__EActiveTraitResetType_MAX = 4,

};

// Enum Frontiers.EDeathType
enum class Frontiers_EDeathType : uint8_t
{
	EDeathType__Default            = 0,
	EDeathType__NoCorpse           = 1,
	EDeathType__Banished           = 2,
	EDeathType__EDeathType_MAX     = 3,

};

// Enum Frontiers.EAffixTraitType
enum class Frontiers_EAffixTraitType : uint8_t
{
	EAffixTraitType__Default       = 0,
	EAffixTraitType__Weapon        = 1,
	EAffixTraitType__Always        = 2,
	EAffixTraitType__NoTraits      = 3,
	EAffixTraitType__SetBonus      = 4,
	EAffixTraitType__Count         = 5,
	EAffixTraitType__EAffixTraitType_MAX = 6,

};

// Enum Frontiers.EAllowedType
enum class Frontiers_EAllowedType : uint8_t
{
	EAllowedType__ClientOnly       = 0,
	EAllowedType__ServerOnly       = 1,
	EAllowedType__ServerAndClient  = 2,
	EAllowedType__EAllowedType_MAX = 3,

};

// Enum Frontiers.EActorLimitType
enum class Frontiers_EActorLimitType : uint8_t
{
	EActorLimitType__AtLeast       = 0,
	EActorLimitType__EqualTo       = 1,
	EActorLimitType__AtMost        = 2,
	EActorLimitType__EActorLimitType_MAX = 3,

};

// Enum Frontiers.EDRLGRuleSetMethod
enum class Frontiers_EDRLGRuleSetMethod : uint8_t
{
	EDRLGRuleSetMethod__Random     = 0,
	EDRLGRuleSetMethod__InOrder    = 1,
	EDRLGRuleSetMethod__EveryRuleEverywhere = 2,
	EDRLGRuleSetMethod__EDRLGRuleSetMethod_MAX = 3,

};

// Enum Frontiers.EWarpToIndex
enum class Frontiers_EWarpToIndex : uint8_t
{
	EWarpToIndex__PrevArea0        = 0,
	EWarpToIndex__NextArea1        = 1,
	EWarpToIndex__NextArea2        = 2,
	EWarpToIndex__NextArea3        = 3,
	EWarpToIndex__NextArea4        = 4,
	EWarpToIndex__NextArea5        = 5,
	EWarpToIndex__NextArea6        = 6,
	EWarpToIndex__TownPortal       = 7,
	EWarpToIndex__FortPortal       = 8,
	EWarpToIndex__WaypointPortal   = 9,
	EWarpToIndex__WarpBack         = 10,
	EWarpToIndex__FortReturnPortal = 11,
	EWarpToIndex__TownReturnPortal = 12,
	EWarpToIndex__OtherPlayer      = 13,
	EWarpToIndex__Count            = 14,
	EWarpToIndex__NextAreaMax      = 15,
	EWarpToIndex__EWarpToIndex_MAX = 16,

};

// Enum Frontiers.EAreaGroupType
enum class Frontiers_EAreaGroupType : uint8_t
{
	EAreaGroupType__Town           = 0,
	EAreaGroupType__Progressive    = 1,
	EAreaGroupType__Open           = 2,
	EAreaGroupType__Fort           = 3,
	EAreaGroupType__Unknown        = 4,
	EAreaGroupType__Count          = 5,
	EAreaGroupType__EAreaGroupType_MAX = 6,

};

// Enum Frontiers.EFindPortalToPlayerSpawnResult
enum class Frontiers_EFindPortalToPlayerSpawnResult : uint8_t
{
	EFindPortalToPlayerSpawnResult__Failure = 0,
	EFindPortalToPlayerSpawnResult__Success = 1,
	EFindPortalToPlayerSpawnResult__UsedPrecomputedSpawnLocation = 2,
	EFindPortalToPlayerSpawnResult__NotPortalToPlayerSpawnLocation = 3,
	EFindPortalToPlayerSpawnResult__InvalidAreaGuid = 4,
	EFindPortalToPlayerSpawnResult__PawnLocationNotNavigable = 5,
	EFindPortalToPlayerSpawnResult__PawnNotOnServer = 6,
	EFindPortalToPlayerSpawnResult__EFindPortalToPlayerSpawnResult_MAX = 7,

};

// Enum Frontiers.EAreaLoadError
enum class Frontiers_EAreaLoadError : uint8_t
{
	EAreaLoadError__Success        = 0,
	EAreaLoadError__FailCanRetry   = 1,
	EAreaLoadError__FailNoRetry    = 2,
	EAreaLoadError__EAreaLoadError_MAX = 3,

};

// Enum Frontiers.EAreaState
enum class Frontiers_EAreaState : uint8_t
{
	EAreaState__Invalid            = 0,
	EAreaState__Active             = 1,
	EAreaState__Sleeping           = 2,
	EAreaState__Unloaded           = 3,
	EAreaState__EAreaState_MAX     = 4,

};

// Enum Frontiers.EContainsRules
enum class Frontiers_EContainsRules : uint8_t
{
	EContainsRules__Any            = 0,
	EContainsRules__All            = 1,
	EContainsRules__None           = 2,
	EContainsRules__EContainsRules_MAX = 3,

};

// Enum Frontiers.EMusicIntensity
enum class Frontiers_EMusicIntensity : uint8_t
{
	EMusicIntensity__Low           = 0,
	EMusicIntensity__Medium        = 1,
	EMusicIntensity__High          = 2,
	EMusicIntensity__Count         = 3,
	EMusicIntensity__EMusicIntensity_MAX = 4,

};

// Enum Frontiers.EDeliveryType
enum class Frontiers_EDeliveryType : uint8_t
{
	EDeliveryType__PerAccount      = 0,
	EDeliveryType__PerCharacter    = 1,
	EDeliveryType__EDeliveryType_MAX = 2,

};

// Enum Frontiers.EWardrobeAttachmentSlot
enum class Frontiers_EWardrobeAttachmentSlot : uint8_t
{
	EWardrobeAttachmentSlot__WeaponRight = 0,
	EWardrobeAttachmentSlot__WeaponLeft = 1,
	EWardrobeAttachmentSlot__Count = 2,
	EWardrobeAttachmentSlot__EWardrobeAttachmentSlot_MAX = 3,

};

// Enum Frontiers.ECharacterCustomizationItem
enum class Frontiers_ECharacterCustomizationItem : uint8_t
{
	ECharacterCustomizationItem__Head = 0,
	ECharacterCustomizationItem__Hair = 1,
	ECharacterCustomizationItem__ECharacterCustomizationItem_MAX = 2,

};

// Enum Frontiers.ECharacterCustomizationDye
enum class Frontiers_ECharacterCustomizationDye : uint8_t
{
	ECharacterCustomizationDye__Skin = 0,
	ECharacterCustomizationDye__Hair = 1,
	ECharacterCustomizationDye__ECharacterCustomizationDye_MAX = 2,

};

// Enum Frontiers.ECharacterCreateAnimState
enum class Frontiers_ECharacterCreateAnimState : uint8_t
{
	ECharacterCreateAnimState__None = 0,
	ECharacterCreateAnimState__Wait = 1,
	ECharacterCreateAnimState__PickMe = 2,
	ECharacterCreateAnimState__PickMeHighlighted = 3,
	ECharacterCreateAnimState__Picked = 4,
	ECharacterCreateAnimState__Unpicked = 5,
	ECharacterCreateAnimState__PickPet = 6,
	ECharacterCreateAnimState__Background = 7,
	ECharacterCreateAnimState__Ready = 8,
	ECharacterCreateAnimState__Count = 9,
	ECharacterCreateAnimState__ECharacterCreateAnimState_MAX = 10,

};

// Enum Frontiers.EParticipantBlockedState
enum class Frontiers_EParticipantBlockedState : uint8_t
{
	EParticipantBlockedState__Unknown = 0,
	EParticipantBlockedState__Blocked = 1,
	EParticipantBlockedState__BlockingThisUser = 2,
	EParticipantBlockedState__NotBlocked = 3,
	EParticipantBlockedState__EParticipantBlockedState_MAX = 4,

};

// Enum Frontiers.EChatChannelSpace
enum class Frontiers_EChatChannelSpace : uint8_t
{
	EChatChannelSpace__Invalid     = 0,
	EChatChannelSpace__NonPositional = 1,
	EChatChannelSpace__Positional  = 2,
	EChatChannelSpace__Echo        = 3,
	EChatChannelSpace__EChatChannelSpace_MAX = 4,

};

// Enum Frontiers.EChatChannelMediaType
enum class Frontiers_EChatChannelMediaType : uint8_t
{
	EChatChannelMediaType__None    = 0,
	EChatChannelMediaType__Text    = 1,
	EChatChannelMediaType__Audio   = 2,
	EChatChannelMediaType__EChatChannelMediaType_MAX = 3,

};

// Enum Frontiers.EChatChannelType
enum class Frontiers_EChatChannelType : uint8_t
{
	EChatChannelType__Unknown      = 0,
	EChatChannelType__AreaGroup    = 1,
	EChatChannelType__SameServer   = 2,
	EChatChannelType__Party        = 3,
	EChatChannelType__Whisper      = 4,
	EChatChannelType__SystemMessage = 5,
	EChatChannelType__EChatChannelType_MAX = 6,

};

// Enum Frontiers.EAudioDuckState
enum class Frontiers_EAudioDuckState : uint8_t
{
	EAudioDuckState__Off           = 0,
	EAudioDuckState__TurningOn     = 1,
	EAudioDuckState__On            = 2,
	EAudioDuckState__EAudioDuckState_MAX = 3,

};

// Enum Frontiers.EContractRewardState
enum class Frontiers_EContractRewardState : uint8_t
{
	EContractRewardState__Empty    = 0,
	EContractRewardState__Locked   = 1,
	EContractRewardState__Earned   = 2,
	EContractRewardState__Claimed  = 3,
	EContractRewardState__EContractRewardState_MAX = 4,

};

// Enum Frontiers.ECraftingTraitLimitBehavior
enum class Frontiers_ECraftingTraitLimitBehavior : uint8_t
{
	ECraftingTraitLimitBehavior__FailIfExceedsLimit = 0,
	ECraftingTraitLimitBehavior__DisplayOnlyUpToLimit = 1,
	ECraftingTraitLimitBehavior__ECraftingTraitLimitBehavior_MAX = 2,

};

// Enum Frontiers.ECraftingTraitParameterSource
enum class Frontiers_ECraftingTraitParameterSource : uint8_t
{
	ECraftingTraitParameterSource__CustomRowName = 0,
	ECraftingTraitParameterSource__FirstPaidCostItem = 1,
	ECraftingTraitParameterSource__ECraftingTraitParameterSource_MAX = 2,

};

// Enum Frontiers.ECraftingConfirmationType
enum class Frontiers_ECraftingConfirmationType : uint8_t
{
	ECraftingConfirmationType__None = 0,
	ECraftingConfirmationType__Modal = 1,
	ECraftingConfirmationType__Toast = 2,
	ECraftingConfirmationType__ECraftingConfirmationType_MAX = 3,

};

// Enum Frontiers.ECanStartCraftingResult
enum class Frontiers_ECanStartCraftingResult : uint8_t
{
	ECanStartCraftingResult__CanStart = 0,
	ECanStartCraftingResult__InvalidData = 1,
	ECanStartCraftingResult__QueueFull = 2,
	ECanStartCraftingResult__CannotAfford = 3,
	ECanStartCraftingResult__IncorrectProp = 4,
	ECanStartCraftingResult__PropCannotCraft = 5,
	ECanStartCraftingResult__RestrictedRecipe = 6,
	ECanStartCraftingResult__IncorrectVendor = 7,
	ECanStartCraftingResult__InvalidVendor = 8,
	ECanStartCraftingResult__ECanStartCraftingResult_MAX = 9,

};

// Enum Frontiers.ECraftingResult
enum class Frontiers_ECraftingResult : uint8_t
{
	ECraftingResult__Success       = 0,
	ECraftingResult__UnknownFailure = 1,
	ECraftingResult__InventoryFull = 2,
	ECraftingResult__InventoryFullPet = 3,
	ECraftingResult__InventoryFullEmberWeapon = 4,
	ECraftingResult__InappropriateInventory = 5,
	ECraftingResult__CannotAddToInventory = 6,
	ECraftingResult__NotFinished   = 7,
	ECraftingResult__CannotLoadContainers = 8,
	ECraftingResult__TraitExceededMax = 9,
	ECraftingResult__InvalidData   = 10,
	ECraftingResult__CannotAfford  = 11,
	ECraftingResult__InsufficientEnchantingSlots = 12,
	ECraftingResult__RestrictedRecipe = 13,
	ECraftingResult__NoValidChildRecipe = 14,
	ECraftingResult__ECraftingResult_MAX = 15,

};

// Enum Frontiers.ECraftingUpdateType
enum class Frontiers_ECraftingUpdateType : uint8_t
{
	ECraftingUpdateType__Started   = 0,
	ECraftingUpdateType__ReadyToClaim = 1,
	ECraftingUpdateType__Claimed   = 2,
	ECraftingUpdateType__ECraftingUpdateType_MAX = 3,

};

// Enum Frontiers.ECraftingUnitLevelSource
enum class Frontiers_ECraftingUnitLevelSource : uint8_t
{
	ECraftingUnitLevelSource__Fixed = 0,
	ECraftingUnitLevelSource__AverageOfCosts = 1,
	ECraftingUnitLevelSource__FirstCost = 2,
	ECraftingUnitLevelSource__PlayerAverage = 3,
	ECraftingUnitLevelSource__PlayerHighest = 4,
	ECraftingUnitLevelSource__Area = 5,
	ECraftingUnitLevelSource__CurrentPlayerSpokeLevel = 6,
	ECraftingUnitLevelSource__ECraftingUnitLevelSource_MAX = 7,

};

// Enum Frontiers.ECraftingUnitQuery
enum class Frontiers_ECraftingUnitQuery : uint8_t
{
	ECraftingUnitQuery__None       = 0,
	ECraftingUnitQuery__Name       = 1,
	ECraftingUnitQuery__TagAny     = 2,
	ECraftingUnitQuery__TagAll     = 3,
	ECraftingUnitQuery__Custom     = 4,
	ECraftingUnitQuery__ECraftingUnitQuery_MAX = 5,

};

// Enum Frontiers.ECraftingUnitType
enum class Frontiers_ECraftingUnitType : uint8_t
{
	ECraftingUnitType__None        = 0,
	ECraftingUnitType__Trait       = 1,
	ECraftingUnitType__Item        = 2,
	ECraftingUnitType__FortProp    = 3,
	ECraftingUnitType__FortPropSpawn = 4,
	ECraftingUnitType__Currency    = 5,
	ECraftingUnitType__RandomDrop  = 6,
	ECraftingUnitType__Pet         = 7,
	ECraftingUnitType__PetSpawn    = 8,
	ECraftingUnitType__AffixSpawn  = 9,
	ECraftingUnitType__ModifiedItem = 10,
	ECraftingUnitType__ItemModifySpawn = 11,
	ECraftingUnitType__BulkItem    = 12,
	ECraftingUnitType__StatusEffect = 13,
	ECraftingUnitType__PrecreatedItem = 14,
	ECraftingUnitType__PrecreatedPet = 15,
	ECraftingUnitType__PrecreatedFortProp = 16,
	ECraftingUnitType__ECraftingUnitType_MAX = 17,

};

// Enum Frontiers.ETraitDecoratorComparison
enum class Frontiers_ETraitDecoratorComparison : uint8_t
{
	ETraitDecoratorComparison__LessThan = 0,
	ETraitDecoratorComparison__LessThanOrEqualTo = 1,
	ETraitDecoratorComparison__GreaterThan = 2,
	ETraitDecoratorComparison__GreaterThanOrEqualTo = 3,
	ETraitDecoratorComparison__EqualTo = 4,
	ETraitDecoratorComparison__ETraitDecoratorComparison_MAX = 5,

};

// Enum Frontiers.EDialogueContext
enum class Frontiers_EDialogueContext : uint8_t
{
	EDialogueContext__None         = 0,
	EDialogueContext__QuestActive  = 1,
	EDialogueContext__QuestComplete = 2,
	EDialogueContext__EDialogueContext_MAX = 3,

};

// Enum Frontiers.EDialogueType
enum class Frontiers_EDialogueType : uint8_t
{
	EDialogueType__Modal           = 0,
	EDialogueType__Bubble          = 1,
	EDialogueType__Quest           = 2,
	EDialogueType__Lore            = 3,
	EDialogueType__EDialogueType_MAX = 4,

};

// Enum Frontiers.EDungeonPlayingStatus
enum class Frontiers_EDungeonPlayingStatus : uint8_t
{
	EDungeonPlayingStatus__None    = 0,
	EDungeonPlayingStatus__Playing = 1,
	EDungeonPlayingStatus__Cleared = 2,
	EDungeonPlayingStatus__Failed  = 3,
	EDungeonPlayingStatus__EDungeonPlayingStatus_MAX = 4,

};

// Enum Frontiers.EDyeMatrixRow
enum class Frontiers_EDyeMatrixRow : uint8_t
{
	EDyeMatrixRow__RowA            = 0,
	EDyeMatrixRow__RowB            = 1,
	EDyeMatrixRow__RowC            = 2,
	EDyeMatrixRow__RowD            = 3,
	EDyeMatrixRow__RowE            = 4,
	EDyeMatrixRow__RowF            = 5,
	EDyeMatrixRow__RowG            = 6,
	EDyeMatrixRow__Max             = 7,

};

// Enum Frontiers.EDyeType
enum class Frontiers_EDyeType : uint8_t
{
	EDyeType__GearDye              = 0,
	EDyeType__SkinDye              = 1,
	EDyeType__HairDye              = 2,
	EDyeType__EDyeType_MAX         = 3,

};

// Enum Frontiers.EVFXScaleMethod
enum class Frontiers_EVFXScaleMethod : uint8_t
{
	EVFXScaleMethod__None          = 0,
	EVFXScaleMethod__MeshBounds    = 1,
	EVFXScaleMethod__MeshScaleOnly = 2,
	EVFXScaleMethod__EVFXScaleMethod_MAX = 3,

};

// Enum Frontiers.EEffectDefaultSettings
enum class Frontiers_EEffectDefaultSettings : uint8_t
{
	EEffectDefaultSettings__NoScaleMethod = 0,
	EEffectDefaultSettings__WithMeshBounds = 1,
	EEffectDefaultSettings__WithMeshScaleOnly = 2,
	EEffectDefaultSettings__EEffectDefaultSettings_MAX = 3,

};

// Enum Frontiers.EPropHeightAdjustMode
enum class Frontiers_EPropHeightAdjustMode : uint8_t
{
	EPropHeightAdjustMode__Up      = 0,
	EPropHeightAdjustMode__Down    = 1,
	EPropHeightAdjustMode__EPropHeightAdjustMode_MAX = 2,

};

// Enum Frontiers.EPropRotationMode
enum class Frontiers_EPropRotationMode : uint8_t
{
	EPropRotationMode__Left        = 0,
	EPropRotationMode__Right       = 1,
	EPropRotationMode__EPropRotationMode_MAX = 2,

};

// Enum Frontiers.EFortEditMode
enum class Frontiers_EFortEditMode : uint8_t
{
	EFortEditMode__NotInFort       = 0,
	EFortEditMode__Default         = 1,
	EFortEditMode__Select          = 2,
	EFortEditMode__Place           = 3,
	EFortEditMode__EFortEditMode_MAX = 4,

};

// Enum Frontiers.EFortPropType
enum class Frontiers_EFortPropType : uint8_t
{
	EFortPropType__None            = 0,
	EFortPropType__FortDecor       = 1,
	EFortPropType__CraftingStation = 2,
	EFortPropType__SkillStation    = 3,
	EFortPropType__Wardrobe        = 4,
	EFortPropType__EFortPropType_MAX = 5,

};

// Enum Frontiers.EGadgetOperateSuccess
enum class Frontiers_EGadgetOperateSuccess : uint8_t
{
	EGadgetOperateSuccess__Success = 0,
	EGadgetOperateSuccess__Failure = 1,
	EGadgetOperateSuccess__EGadgetOperateSuccess_MAX = 2,

};

// Enum Frontiers.EGadgetSharing
enum class Frontiers_EGadgetSharing : uint8_t
{
	EGadgetSharing__Public         = 0,
	EGadgetSharing__Party          = 1,
	EGadgetSharing__Private        = 2,
	EGadgetSharing__Character      = 3,
	EGadgetSharing__EGadgetSharing_MAX = 4,

};

// Enum Frontiers.ELifeStatus
enum class Frontiers_ELifeStatus : uint8_t
{
	ELifeStatus__Alive             = 0,
	ELifeStatus__Dead              = 1,
	ELifeStatus__Any               = 2,
	ELifeStatus__ELifeStatus_MAX   = 3,

};

// Enum Frontiers.EAllegiance
enum class Frontiers_EAllegiance : uint8_t
{
	EAllegiance__None              = 0,
	EAllegiance__Ally              = 1,
	EAllegiance__Enemy             = 2,
	EAllegiance__Any               = 3,
	EAllegiance__EAllegiance_MAX   = 4,

};

// Enum Frontiers.EInventorySortOptions
enum class Frontiers_EInventorySortOptions : uint8_t
{
	EInventorySortOptions__DefaultOnly = 0,
	EInventorySortOptions__Name    = 1,
	EInventorySortOptions__Wardrobe = 2,
	EInventorySortOptions__Level   = 3,
	EInventorySortOptions__Quality = 4,
	EInventorySortOptions__Max     = 5,
	EInventorySortOptions__PetType = 6,

};

// Enum Frontiers.ESwapWardrobeOption
enum class Frontiers_ESwapWardrobeOption : uint8_t
{
	ESwapWardrobeOption__All       = 0,
	ESwapWardrobeOption__Armor     = 1,
	ESwapWardrobeOption__Weapons   = 2,
	ESwapWardrobeOption__ESwapWardrobeOption_MAX = 3,

};

// Enum Frontiers.EUIPetToTown
enum class Frontiers_EUIPetToTown : uint8_t
{
	EUIPetToTown__None             = 0,
	EUIPetToTown__CanSendAway      = 1,
	EUIPetToTown__CanSendAwayInTown = 2,
	EUIPetToTown__CanNotSendAway   = 3,
	EUIPetToTown__PetGoingToTown   = 4,
	EUIPetToTown__PetHasFled       = 5,
	EUIPetToTown__InventoryError   = 6,
	EUIPetToTown__InventoryLocked  = 7,
	EUIPetToTown__InventoryIsEmpty = 8,
	EUIPetToTown__EUIPetToTown_MAX = 9,

};

// Enum Frontiers.EAffixSource
enum class Frontiers_EAffixSource : uint8_t
{
	EAffixSource__Invalid          = 0,
	EAffixSource__StartingAffixes  = 1,
	EAffixSource__Enchanting       = 2,
	EAffixSource__EAffixSource_MAX = 3,

};

// Enum Frontiers.EAccountStashType
enum class Frontiers_EAccountStashType : uint8_t
{
	EAccountStashType__SharedStash = 0,
	EAccountStashType__EAccountStashType_MAX = 1,

};

// Enum Frontiers.ETransactionEventType
enum class Frontiers_ETransactionEventType : uint8_t
{
	ETransactionEventType__PetSentToTown = 0,
	ETransactionEventType__VendorInTown = 1,
	ETransactionEventType__FortPropCraft = 2,
	ETransactionEventType__Mailbox = 3,
	ETransactionEventType__ETransactionEventType_MAX = 4,

};

// Enum Frontiers.ECanSellResult
enum class Frontiers_ECanSellResult : uint8_t
{
	ECanSellResult__CanSell        = 0,
	ECanSellResult__WrongContext   = 1,
	ECanSellResult__ItemCannotBeSold = 2,
	ECanSellResult__RequiresConfirmation = 3,
	ECanSellResult__InventoryLocked = 4,
	ECanSellResult__ECanSellResult_MAX = 5,

};

// Enum Frontiers.ECanEquipResult
enum class Frontiers_ECanEquipResult : uint8_t
{
	ECanEquipResult__CanEquip      = 0,
	ECanEquipResult__OffHandFull   = 1,
	ECanEquipResult__AlreadyEquipped = 2,
	ECanEquipResult__InvalidSlot   = 3,
	ECanEquipResult__InvalidContainer = 4,
	ECanEquipResult__InvalidData   = 5,
	ECanEquipResult__InventoryFull = 6,
	ECanEquipResult__InsufficientLevel = 7,
	ECanEquipResult__WrongPlayerClass = 8,
	ECanEquipResult__InventoryLocked = 9,
	ECanEquipResult__Unidentified  = 10,
	ECanEquipResult__NotWardrobeItem = 11,
	ECanEquipResult__ECanEquipResult_MAX = 12,

};

// Enum Frontiers.EItemOnGroundPickupAction
enum class Frontiers_EItemOnGroundPickupAction : uint8_t
{
	EItemOnGroundPickupAction__AddToInventory = 0,
	EItemOnGroundPickupAction__AddToTrait = 1,
	EItemOnGroundPickupAction__AddToActiveTrait = 2,
	EItemOnGroundPickupAction__JustPickup = 3,
	EItemOnGroundPickupAction__Count = 4,
	EItemOnGroundPickupAction__EItemOnGroundPickupAction_MAX = 5,

};

// Enum Frontiers.ELevelRewardType
enum class Frontiers_ELevelRewardType : uint8_t
{
	ELevelRewardType__Spoke        = 0,
	ELevelRewardType__Contract     = 1,
	ELevelRewardType__ELevelRewardType_MAX = 2,

};

// Enum Frontiers.SessionUpdateType
enum class Frontiers_ESessionUpdateType : uint8_t
{
	SessionUpdateType__CreateSession = 0,
	SessionUpdateType__JoinSession = 1,
	SessionUpdateType__LeaveSession = 2,
	SessionUpdateType__SessionUpdateType_MAX = 3,

};

// Enum Frontiers.ELoadingScreenPlatform
enum class Frontiers_ELoadingScreenPlatform : uint8_t
{
	ELoadingScreenPlatform__Any    = 0,
	ELoadingScreenPlatform__PC     = 1,
	ELoadingScreenPlatform__Console = 2,
	ELoadingScreenPlatform__XBoxOne = 3,
	ELoadingScreenPlatform__PlayStation4 = 4,
	ELoadingScreenPlatform__Switch = 5,
	ELoadingScreenPlatform__ELoadingScreenPlatform_MAX = 6,

};

// Enum Frontiers.EBackgroundSaveMode
enum class Frontiers_EBackgroundSaveMode : uint8_t
{
	EBackgroundSaveMode__Stopped   = 0,
	EBackgroundSaveMode__Ready     = 1,
	EBackgroundSaveMode__Working   = 2,
	EBackgroundSaveMode__EBackgroundSaveMode_MAX = 3,

};

// Enum Frontiers.EAccountCharactersLoadResult
enum class Frontiers_EAccountCharactersLoadResult : uint8_t
{
	EAccountCharactersLoadResult__Failed = 0,
	EAccountCharactersLoadResult__Success = 1,
	EAccountCharactersLoadResult__CharactersOutOfDate = 2,
	EAccountCharactersLoadResult__EAccountCharactersLoadResult_MAX = 3,

};

// Enum Frontiers.EMainMenuState
enum class Frontiers_EMainMenuState : uint8_t
{
	EMainMenuState__Invalid        = 0,
	EMainMenuState__TitleScreenStart = 1,
	EMainMenuState__PlatformSignOn = 2,
	EMainMenuState__DownloadContent = 3,
	EMainMenuState__TermsOfService = 4,
	EMainMenuState__PrivacyPolicy  = 5,
	EMainMenuState__Login          = 6,
	EMainMenuState__Welcome        = 7,
	EMainMenuState__IntroCinematic = 8,
	EMainMenuState__CharacterSelect = 9,
	EMainMenuState__CharacterCreateLoading = 10,
	EMainMenuState__CharacterCreatePickClass = 11,
	EMainMenuState__CharacterCreateCustomizePlayer = 12,
	EMainMenuState__CharacterCreatePickEmberWeapon = 13,
	EMainMenuState__CharacterCreateShowSkillTrees = 14,
	EMainMenuState__CharacterCreatePickPet = 15,
	EMainMenuState__CharacterCreateCustomizePet = 16,
	EMainMenuState__CharacterCreateReadyToDeploy = 17,
	EMainMenuState__CharacterCreateDeploy = 18,
	EMainMenuState__CharacterCreateClass = 19,
	EMainMenuState__CharacterCreatePet = 20,
	EMainMenuState__CharacterCreateCustomizeName = 21,
	EMainMenuState__CharacterCreateCustomizeSkinColor = 22,
	EMainMenuState__EMainMenuState_MAX = 23,

};

// Enum Frontiers.EMainMenuLevel
enum class Frontiers_EMainMenuLevel : uint8_t
{
	EMainMenuLevel__None           = 0,
	EMainMenuLevel__TitleScreen    = 1,
	EMainMenuLevel__CharacterCreate = 2,
	EMainMenuLevel__EMainMenuLevel_MAX = 3,

};

// Enum Frontiers.ETLNameState
enum class Frontiers_ETLNameState : uint8_t
{
	ETLNameState__Ok               = 0,
	ETLNameState__Restricted       = 1,
	ETLNameState__Validating       = 2,
	ETLNameState__ETLNameState_MAX = 3,

};

// Enum Frontiers.EValidateState
enum class Frontiers_EValidateState : uint8_t
{
	EValidateState__Success        = 0,
	EValidateState__Restricted     = 1,
	EValidateState__WaitingForPrivileges = 2,
	EValidateState__EValidateState_MAX = 3,

};

// Enum Frontiers.EMapWorksDataType
enum class Frontiers_EMapWorksDataType : uint8_t
{
	EMapWorksDataType__Pick        = 0,
	EMapWorksDataType__Pick_Curve  = 1,
	EMapWorksDataType__All         = 2,
	EMapWorksDataType__Range       = 3,
	EMapWorksDataType__PerArea     = 4,
	EMapWorksDataType__EMapWorksDataType_MAX = 5,

};

// Enum Frontiers.EMapWorksEntryType
enum class Frontiers_EMapWorksEntryType : uint8_t
{
	EMapWorksEntryType__None       = 0,
	EMapWorksEntryType__GotoRow    = 1,
	EMapWorksEntryType__AdjustLevel = 2,
	EMapWorksEntryType__SetProperty = 3,
	EMapWorksEntryType__AppendProperty = 4,
	EMapWorksEntryType__SetGameplayTag = 5,
	EMapWorksEntryType__SetGameplayTagContainer = 6,
	EMapWorksEntryType__AddGameplayTag = 7,
	EMapWorksEntryType__RemoveGameplayTag = 8,
	EMapWorksEntryType__RemoveStemGameplayTags = 9,
	EMapWorksEntryType__SetProbabilisticGameplayTag = 10,
	EMapWorksEntryType__AddAreaChain = 11,
	EMapWorksEntryType__AddAreaChainByFilter = 12,
	EMapWorksEntryType__AddMonsterAffixByName = 13,
	EMapWorksEntryType__AddMonsterAffixByTags = 14,
	EMapWorksEntryType__AddPlayerPetAffixByName = 15,
	EMapWorksEntryType__AddPlayerPetAffixByTags = 16,
	EMapWorksEntryType__DebugLogProperty = 17,
	EMapWorksEntryType__EMapWorksEntryType_MAX = 18,

};

// Enum Frontiers.EMissileInstanceCollisionSettings
enum class Frontiers_EMissileInstanceCollisionSettings : uint8_t
{
	EMissileInstanceCollisionSettings__AllowAllHits = 0,
	EMissileInstanceCollisionSettings__SecondaryPassThrough = 1,
	EMissileInstanceCollisionSettings__SecondaryBlock = 2,
	EMissileInstanceCollisionSettings__EMissileInstanceCollisionSettings_MAX = 3,

};

// Enum Frontiers.EMissileImpactMode
enum class Frontiers_EMissileImpactMode : uint8_t
{
	EMissileImpactMode__ServerAckRequired = 0,
	EMissileImpactMode__ClientPredicted = 1,
	EMissileImpactMode__EMissileImpactMode_MAX = 2,

};

// Enum Frontiers.EMonsterAudioCategory
enum class Frontiers_EMonsterAudioCategory : uint8_t
{
	EMonsterAudioCategory__Friendly = 0,
	EMonsterAudioCategory__Popcorn = 1,
	EMonsterAudioCategory__Medium  = 2,
	EMonsterAudioCategory__Brute   = 3,
	EMonsterAudioCategory__Champion = 4,
	EMonsterAudioCategory__Count   = 5,
	EMonsterAudioCategory__EMonsterAudioCategory_MAX = 6,

};

// Enum Frontiers.EMonsterPackSize
enum class Frontiers_EMonsterPackSize : uint8_t
{
	EMonsterPackSize__Small        = 0,
	EMonsterPackSize__Medium       = 1,
	EMonsterPackSize__Large        = 2,
	EMonsterPackSize__ExtraLarge   = 3,
	EMonsterPackSize__Count        = 4,
	EMonsterPackSize__EMonsterPackSize_MAX = 5,

};

// Enum Frontiers.EMonsterManagerState
enum class Frontiers_EMonsterManagerState : uint8_t
{
	EMonsterManagerState__BuildUp  = 0,
	EMonsterManagerState__SustainPeak = 1,
	EMonsterManagerState__PeakFade = 2,
	EMonsterManagerState__Relax    = 3,
	EMonsterManagerState__Count    = 4,
	EMonsterManagerState__EMonsterManagerState_MAX = 5,

};

// Enum Frontiers.EMonsterSpawnRequestType
enum class Frontiers_EMonsterSpawnRequestType : uint8_t
{
	EMonsterSpawnRequestType__Monster = 0,
	EMonsterSpawnRequestType__Minion = 1,
	EMonsterSpawnRequestType__EMonsterSpawnRequestType_MAX = 2,

};

// Enum Frontiers.ENarratorQuipDelayBehaviorNoInterrupt
enum class Frontiers_ENarratorQuipDelayBehaviorNoInterrupt : uint8_t
{
	ENarratorQuipDelayBehaviorNoInterrupt__Wait = 0,
	ENarratorQuipDelayBehaviorNoInterrupt__CancelPlayback = 1,
	ENarratorQuipDelayBehaviorNoInterrupt__ENarratorQuipDelayBehaviorNoInterrupt_MAX = 2,

};

// Enum Frontiers.ENarratorQuipDelayBehavior
enum class Frontiers_ENarratorQuipDelayBehavior : uint8_t
{
	ENarratorQuipDelayBehavior__Wait = 0,
	ENarratorQuipDelayBehavior__Interrupt = 1,
	ENarratorQuipDelayBehavior__InterruptWait = 2,
	ENarratorQuipDelayBehavior__CancelPlayback = 3,
	ENarratorQuipDelayBehavior__ENarratorQuipDelayBehavior_MAX = 4,

};

// Enum Frontiers.ENarratorQuip
enum class Frontiers_ENarratorQuip : uint8_t
{
	ENarratorQuip__None            = 0,
	ENarratorQuip__AttackIsEffective = 1,
	ENarratorQuip__AttackIsIneffective = 2,
	ENarratorQuip__CantCast        = 3,
	ENarratorQuip__CraftingReadyToClaim = 4,
	ENarratorQuip__Died            = 5,
	ENarratorQuip__FortExpand      = 6,
	ENarratorQuip__Fortune         = 7,
	ENarratorQuip__FortUpgrade     = 8,
	ENarratorQuip__GainedSkill     = 9,
	ENarratorQuip__HealthLow       = 10,
	ENarratorQuip__HealthNoLongerLow = 11,
	ENarratorQuip__InventoryFull   = 12,
	ENarratorQuip__LowEndurance    = 13,
	ENarratorQuip__LowMana         = 14,
	ENarratorQuip__Mail            = 15,
	ENarratorQuip__NotEnoughEndurance = 16,
	ENarratorQuip__NotEnoughGold   = 17,
	ENarratorQuip__NotEnoughHeat   = 18,
	ENarratorQuip__NotEnoughMana   = 19,
	ENarratorQuip__NotEnoughAmmo   = 20,
	ENarratorQuip__NotPossible     = 21,
	ENarratorQuip__Overheating     = 22,
	ENarratorQuip__PetFlee         = 23,
	ENarratorQuip__PetSentToTown   = 24,
	ENarratorQuip__PetReturned     = 25,
	ENarratorQuip__PetInventoryFull = 26,
	ENarratorQuip__QuestStarted    = 27,
	ENarratorQuip__QuestComplete   = 28,
	ENarratorQuip__Sick            = 29,
	ENarratorQuip__CanSpendSkillPoints = 30,
	ENarratorQuip__TrapAlert       = 31,
	ENarratorQuip__TurretDestroyed = 32,
	ENarratorQuip__FrontierLevelUp = 33,
	ENarratorQuip__FameLevelUp     = 34,
	ENarratorQuip__ENarratorQuip_MAX = 35,

};

// Enum Frontiers.EStaticContentSource
enum class Frontiers_EStaticContentSource : uint8_t
{
	EStaticContentSource__Invalid  = 0,
	EStaticContentSource__Profile  = 1,
	EStaticContentSource__Build    = 2,
	EStaticContentSource__EStaticContentSource_MAX = 3,

};

// Enum Frontiers.EVoiceChatRole
enum class Frontiers_EVoiceChatRole : uint8_t
{
	EVoiceChatRole__None           = 0,
	EVoiceChatRole__Listener       = 1,
	EVoiceChatRole__ListenerAndSpeaker = 2,
	EVoiceChatRole__EVoiceChatRole_MAX = 3,

};

// Enum Frontiers.ETLScalabilityQuality
enum class Frontiers_ETLScalabilityQuality : uint8_t
{
	ETLScalabilityQuality__Off     = 0,
	ETLScalabilityQuality__Low     = 1,
	ETLScalabilityQuality__Medium  = 2,
	ETLScalabilityQuality__High    = 3,
	ETLScalabilityQuality__VeryHigh = 4,
	ETLScalabilityQuality__NotSupported = 5,
	ETLScalabilityQuality__ETLScalabilityQuality_MAX = 6,

};

// Enum Frontiers.ETLFullscreenMode
enum class Frontiers_ETLFullscreenMode : uint8_t
{
	ETLFullscreenMode__Fullscreen  = 0,
	ETLFullscreenMode__WindowedFullscreen = 1,
	ETLFullscreenMode__Windowed    = 2,
	ETLFullscreenMode__NotSupported = 3,
	ETLFullscreenMode__ETLFullscreenMode_MAX = 4,

};

// Enum Frontiers.EOptionAction
enum class Frontiers_EOptionAction : uint8_t
{
	EOptionAction__None            = 0,
	EOptionAction__MuteMaster      = 1,
	EOptionAction__MuteMusic       = 2,
	EOptionAction__DisableCameraShake = 3,
	EOptionAction__EnableVsync     = 4,
	EOptionAction__EnableBlood     = 5,
	EOptionAction__EnableDamageNumbers = 6,
	EOptionAction__ShowAccountNamesOverhead = 7,
	EOptionAction__DisableMouseMovement = 8,
	EOptionAction__EnableSkillRetargeting = 9,
	EOptionAction__DisableRevertToMovement = 10,
	EOptionAction__AlwaysShowItemNameplates = 11,
	EOptionAction__EnableTextChatUI = 12,
	EOptionAction__EnableCustomAspectRatio = 13,
	EOptionAction__SetMasterVolume = 14,
	EOptionAction__SetMusicVolume  = 15,
	EOptionAction__SetAudioInputVolume = 16,
	EOptionAction__SetUIScale      = 17,
	EOptionAction__SetSafeZonePercent = 18,
	EOptionAction__SetColorSeverityPercent = 19,
	EOptionAction__SetResolutionQuality = 20,
	EOptionAction__SetCustomAspectRatio = 21,
	EOptionAction__SetTargetDisplay = 22,
	EOptionAction__SetFullscreenMode = 23,
	EOptionAction__SetScreenResolution = 24,
	EOptionAction__SetShadowQuality = 25,
	EOptionAction__SetPostProcessingQuality = 26,
	EOptionAction__SetTextureQuality = 27,
	EOptionAction__SetEffectsQuality = 28,
	EOptionAction__SetAntiAliasingQuality = 29,
	EOptionAction__SetGameLanguage = 30,
	EOptionAction__SetAudioInputDevice = 31,
	EOptionAction__SetVoiceChatRole = 32,
	EOptionAction__SetColorMode    = 33,
	EOptionAction__EOptionAction_MAX = 34,

};

// Enum Frontiers.EOrthoRotation
enum class Frontiers_EOrthoRotation : uint8_t
{
	EOrthoRotation__Rotate0        = 0,
	EOrthoRotation__Rotate90       = 1,
	EOrthoRotation__Rotate180      = 2,
	EOrthoRotation__Rotate270      = 3,
	EOrthoRotation__Count          = 4,
	EOrthoRotation__EOrthoRotation_MAX = 5,

};

// Enum Frontiers.EPartyStatusUpdate
enum class Frontiers_EPartyStatusUpdate : uint8_t
{
	EPartyStatusUpdate__Unknown    = 0,
	EPartyStatusUpdate__InviteDeclinedInAPartySendingInvite = 1,
	EPartyStatusUpdate__InviteDeclinedAlreadyInAParty = 2,
	EPartyStatusUpdate__InviteAccepted = 3,
	EPartyStatusUpdate__InviteDeclined = 4,
	EPartyStatusUpdate__InviteDeclinedHardcoreIncompatible = 5,
	EPartyStatusUpdate__InviteDeclinedDifficultyIncompatible = 6,
	EPartyStatusUpdate__InviteDeclinedBlocked = 7,
	EPartyStatusUpdate__InviteDeclinedMuted = 8,
	EPartyStatusUpdate__Kicked     = 9,
	EPartyStatusUpdate__LeftParty  = 10,
	EPartyStatusUpdate__NewLeader  = 11,
	EPartyStatusUpdate__InviteFailed = 12,
	EPartyStatusUpdate__InviteFailedPlayerOffline = 13,
	EPartyStatusUpdate__InviteSent = 14,
	EPartyStatusUpdate__CouldNotAcceptInvite = 15,
	EPartyStatusUpdate__InviteDeclinedMaxParty = 16,
	EPartyStatusUpdate__InviteDeclinedMissingRequiredMember = 17,
	EPartyStatusUpdate__EPartyStatusUpdate_MAX = 18,

};

// Enum Frontiers.EPartyAllowedResult
enum class Frontiers_EPartyAllowedResult : uint8_t
{
	EPartyAllowedResult__Invalid   = 0,
	EPartyAllowedResult__Ok        = 1,
	EPartyAllowedResult__PartyFull = 2,
	EPartyAllowedResult__DifficultyMismatch = 3,
	EPartyAllowedResult__HardcoreMismatch = 4,
	EPartyAllowedResult__JoiningPlayerAlreadyInParty = 5,
	EPartyAllowedResult__PermissionDenied = 6,
	EPartyAllowedResult__EPartyAllowedResult_MAX = 7,

};

// Enum Frontiers.PlayerGender
enum class Frontiers_EPlayerGender : uint8_t
{
	PlayerGender__Male             = 0,
	PlayerGender__Female           = 1,
	PlayerGender__Neuter           = 2,
	PlayerGender__Invalid          = 3,
	PlayerGender__PlayerGender_MAX = 4,

};

// Enum Frontiers.EPlayerPortalDestinationType
enum class Frontiers_EPlayerPortalDestinationType : uint8_t
{
	EPlayerPortalDestinationType__None = 0,
	EPlayerPortalDestinationType__TownPortalReturn = 1,
	EPlayerPortalDestinationType__OwnPortalReturn = 2,
	EPlayerPortalDestinationType__PlayerFort = 3,
	EPlayerPortalDestinationType__OtherPlayerFort = 4,
	EPlayerPortalDestinationType__NearestTown = 5,
	EPlayerPortalDestinationType__BoundWaypoint = 6,
	EPlayerPortalDestinationType__MapWorks = 7,
	EPlayerPortalDestinationType__PhaseBeast = 8,
	EPlayerPortalDestinationType__SavedMapWorks = 9,
	EPlayerPortalDestinationType__WarpBack = 10,
	EPlayerPortalDestinationType__OtherPlayer = 11,
	EPlayerPortalDestinationType__Dungeon = 12,
	EPlayerPortalDestinationType__NextArea = 13,
	EPlayerPortalDestinationType__Count = 14,
	EPlayerPortalDestinationType__EPlayerPortalDestinationType_MAX = 15,

};

// Enum Frontiers.ETLPostProcessFlag
enum class Frontiers_ETLPostProcessFlag : uint8_t
{
	ETLPostProcessFlag__None       = 0,
	ETLPostProcessFlag__Player     = 1,
	ETLPostProcessFlag__Ally       = 2,
	ETLPostProcessFlag__Monster    = 3,
	ETLPostProcessFlag__NPC        = 4,
	ETLPostProcessFlag__Minion     = 5,
	ETLPostProcessFlag__Item_Normal = 6,
	ETLPostProcessFlag__Item_Magic = 7,
	ETLPostProcessFlag__Item_Rare  = 8,
	ETLPostProcessFlag__Item_Legendary = 9,
	ETLPostProcessFlag__Item_Unique = 10,
	ETLPostProcessFlag__Item_Quest = 11,
	ETLPostProcessFlag__NoSelect   = 12,
	ETLPostProcessFlag__NoOcclusion = 13,
	ETLPostProcessFlag__ResetOcclusion = 14,
	ETLPostProcessFlag__ResetSelect = 15,
	ETLPostProcessFlag__ResetAll   = 16,
	ETLPostProcessFlag__Invalid    = 17,
	ETLPostProcessFlag__Ignored    = 18,
	ETLPostProcessFlag__ETLPostProcessFlag_MAX = 19,

};

// Enum Frontiers.EProcTriggerEvent
enum class Frontiers_EProcTriggerEvent : uint8_t
{
	EProcTriggerEvent__TakeDamage  = 0,
	EProcTriggerEvent__DoDamage    = 1,
	EProcTriggerEvent__DidKill     = 2,
	EProcTriggerEvent__Died        = 3,
	EProcTriggerEvent__ActiveTraitAtMax = 4,
	EProcTriggerEvent__ActiveTraitAtMin = 5,
	EProcTriggerEvent__SkillStart  = 6,
	EProcTriggerEvent__SkillDamage = 7,
	EProcTriggerEvent__TakeCritical = 8,
	EProcTriggerEvent__DoCritical  = 9,
	EProcTriggerEvent__Block       = 10,
	EProcTriggerEvent__Evade       = 11,
	EProcTriggerEvent__Count       = 12,
	EProcTriggerEvent__EProcTriggerEvent_MAX = 13,

};

// Enum Frontiers.EProcTriggerType
enum class Frontiers_EProcTriggerType : uint8_t
{
	EProcTriggerType__Always       = 0,
	EProcTriggerType__Random       = 1,
	EProcTriggerType__Accumulated  = 2,
	EProcTriggerType__AccumulatedRandom = 3,
	EProcTriggerType__Count        = 4,
	EProcTriggerType__EProcTriggerType_MAX = 5,

};

// Enum Frontiers.EQuestRequirementType
enum class Frontiers_EQuestRequirementType : uint8_t
{
	EQuestRequirementType__Completed = 0,
	EQuestRequirementType__Item    = 1,
	EQuestRequirementType__Class   = 2,
	EQuestRequirementType__PlayerLevel = 3,
	EQuestRequirementType__TimeOfDay = 4,
	EQuestRequirementType__Date    = 5,
	EQuestRequirementType__Area    = 6,
	EQuestRequirementType__IsEnabled = 7,
	EQuestRequirementType__NoAutoActivation = 8,
	EQuestRequirementType__EQuestRequirementType_MAX = 9,

};

// Enum Frontiers.EQuestProgressTrackingType
enum class Frontiers_EQuestProgressTrackingType : uint8_t
{
	EQuestProgressTrackingType__None = 0,
	EQuestProgressTrackingType__UseProgressPoints = 1,
	EQuestProgressTrackingType__EQuestProgressTrackingType_MAX = 2,

};

// Enum Frontiers.EQuestMapMarkerType
enum class Frontiers_EQuestMapMarkerType : uint8_t
{
	EQuestMapMarkerType__QuestObjective = 0,
	EQuestMapMarkerType__QuestGiver = 1,
	EQuestMapMarkerType__QuestTurnIn = 2,
	EQuestMapMarkerType__EQuestMapMarkerType_MAX = 3,

};

// Enum Frontiers.EQuestRewardType
enum class Frontiers_EQuestRewardType : uint8_t
{
	EQuestRewardType__Gold         = 0,
	EQuestRewardType__ItemInInventoryByName = 1,
	EQuestRewardType__ItemInInventoryByItemSpawn = 2,
	EQuestRewardType__ItemOnGroundByName = 3,
	EQuestRewardType__ItemOnGroundByItemSpawn = 4,
	EQuestRewardType__UseItemImmediatelyByName = 5,
	EQuestRewardType__XP           = 6,
	EQuestRewardType__RecipeUnit   = 7,
	EQuestRewardType__EQuestRewardType_MAX = 8,

};

// Enum Frontiers.EQuestTaskType
enum class Frontiers_EQuestTaskType : uint8_t
{
	EQuestTaskType__Empty          = 0,
	EQuestTaskType__Goto           = 1,
	EQuestTaskType__GotoNext       = 2,
	EQuestTaskType__KillMonster    = 3,
	EQuestTaskType__KillMonsterWithSkill = 4,
	EQuestTaskType__SeeBoss        = 5,
	EQuestTaskType__KillBoss       = 6,
	EQuestTaskType__PickUpItemAddToTrait = 7,
	EQuestTaskType__PickUpItemAddToInventory = 8,
	EQuestTaskType__Interact       = 9,
	EQuestTaskType__EquipItems     = 10,
	EQuestTaskType__EquipItemsEachWithTraitGreaterThan = 11,
	EQuestTaskType__EquipItemsWithTraitGreaterThan = 12,
	EQuestTaskType__EquipItemSet   = 13,
	EQuestTaskType__DoEvent        = 14,
	EQuestTaskType__ShowWidget     = 15,
	EQuestTaskType__PlaceFortProp  = 16,
	EQuestTaskType__TraitGreaterThan = 17,
	EQuestTaskType__TraitIncrement = 18,
	EQuestTaskType__CompleteQuest  = 19,
	EQuestTaskType__CompleteQuestTask = 20,
	EQuestTaskType__AddQuest       = 21,
	EQuestTaskType__StartQuest     = 22,
	EQuestTaskType__StartCrafting  = 23,
	EQuestTaskType__BindWaypoint   = 24,
	EQuestTaskType__SpendSkillPoints = 25,
	EQuestTaskType__SkillPointsAtLeast = 26,
	EQuestTaskType__AlwaysSucceed  = 27,
	EQuestTaskType__SwapPet        = 28,
	EQuestTaskType__PlayLoreLine   = 29,
	EQuestTaskType__PlayRandomLoreLine = 30,
	EQuestTaskType__UnlockWaypoint = 31,
	EQuestTaskType__TurnIn         = 32,
	EQuestTaskType__PlayCinematic  = 33,
	EQuestTaskType__WarpToNext     = 34,
	EQuestTaskType__EQuestTaskType_MAX = 35,

};

// Enum Frontiers.EQuestType
enum class Frontiers_EQuestType : uint8_t
{
	EQuestType__Invalid            = 0,
	EQuestType__Public             = 1,
	EQuestType__Private            = 2,
	EQuestType__Area               = 3,
	EQuestType__AreaPool           = 4,
	EQuestType__Daily              = 5,
	EQuestType__Weekly             = 6,
	EQuestType__Tutorial           = 7,
	EQuestType__Achievement        = 8,
	EQuestType__EQuestType_MAX     = 9,

};

// Enum Frontiers.ELocationType
enum class Frontiers_ELocationType : uint8_t
{
	ELocationType__ActorFeetLocation = 0,
	ELocationType__ActorLocation   = 1,
	ELocationType__ELocationType_MAX = 2,

};

// Enum Frontiers.ServiceType
enum class Frontiers_EServiceType : uint8_t
{
	ServiceType__ZoneController    = 0,
	ServiceType__ZoneLookup        = 1,
	ServiceType__Matchmaker        = 2,
	ServiceType__Authentication    = 3,
	ServiceType__Quests            = 4,
	ServiceType__Characters        = 5,
	ServiceType__Forts             = 6,
	ServiceType__Parties           = 7,
	ServiceType__Switchboard       = 8,
	ServiceType__Content           = 9,
	ServiceType__Commerce          = 10,
	ServiceType__Feedback          = 11,
	ServiceType__Director          = 12,
	ServiceType__ClientMetrics     = 13,
	ServiceType__RegionCheck       = 14,
	ServiceType__MailLedger        = 15,
	ServiceType__Count             = 16,
	ServiceType__ServiceType_MAX   = 17,

};

// Enum Frontiers.HttpVerb
enum class Frontiers_EHttpVerb : uint8_t
{
	HttpVerb__Post                 = 0,
	HttpVerb__Put                  = 1,
	HttpVerb__Get                  = 2,
	HttpVerb__Head                 = 3,
	HttpVerb__Delete               = 4,
	HttpVerb__HttpVerb_MAX         = 5,

};

// Enum Frontiers.ETargetPreference
enum class Frontiers_ETargetPreference : uint8_t
{
	ETargetPreference__LastTarget  = 0,
	ETargetPreference__NotLastTarget = 1,
	ETargetPreference__WithinChaseRadius = 2,
	ETargetPreference__NotMinion   = 3,
	ETargetPreference__RecentlyDamaged = 4,
	ETargetPreference__AllyRecentlyDamaged = 5,
	ETargetPreference__Taunter     = 6,
	ETargetPreference__Count       = 7,
	ETargetPreference__ETargetPreference_MAX = 8,

};

// Enum Frontiers.ETraitConditionType
enum class Frontiers_ETraitConditionType : uint8_t
{
	ETraitConditionType__GreaterThan = 0,
	ETraitConditionType__GreaterThanOrEqual = 1,
	ETraitConditionType__LessThan  = 2,
	ETraitConditionType__LessThanOrEqual = 3,
	ETraitConditionType__Equal     = 4,
	ETraitConditionType__NotEqual  = 5,
	ETraitConditionType__ETraitConditionType_MAX = 6,

};

// Enum Frontiers.EBeamDirection
enum class Frontiers_EBeamDirection : uint8_t
{
	EBeamDirection__MeshRotation   = 0,
	EBeamDirection__ToSkillTarget  = 1,
	EBeamDirection__ToTargetActor  = 2,
	EBeamDirection__EBeamDirection_MAX = 3,

};

// Enum Frontiers.ECombatFxElementType
enum class Frontiers_ECombatFxElementType : uint8_t
{
	ECombatFxElementType__Unknown  = 0,
	ECombatFxElementType__Cold     = 1,
	ECombatFxElementType__Dark     = 2,
	ECombatFxElementType__Electric = 3,
	ECombatFxElementType__Fire     = 4,
	ECombatFxElementType__Light    = 5,
	ECombatFxElementType__Physical = 6,
	ECombatFxElementType__Poison   = 7,
	ECombatFxElementType__Water    = 8,
	ECombatFxElementType__ECombatFxElementType_MAX = 9,

};

// Enum Frontiers.ECombatWidgetNotifyType
enum class Frontiers_ECombatWidgetNotifyType : uint8_t
{
	ECombatWidgetNotifyType__Blocked = 0,
	ECombatWidgetNotifyType__Invulnerable = 1,
	ECombatWidgetNotifyType__Evade = 2,
	ECombatWidgetNotifyType__Critical = 3,
	ECombatWidgetNotifyType__CriticalDamage = 4,
	ECombatWidgetNotifyType__Damage = 5,
	ECombatWidgetNotifyType__ECombatWidgetNotifyType_MAX = 6,

};

// Enum Frontiers.EActorTargetType
enum class Frontiers_EActorTargetType : uint8_t
{
	EActorTargetType__None         = 0,
	EActorTargetType__Enemy        = 1,
	EActorTargetType__Ally         = 2,
	EActorTargetType__Item         = 3,
	EActorTargetType__Gadget       = 4,
	EActorTargetType__QuestObject  = 5,
	EActorTargetType__Unknown      = 6,
	EActorTargetType__EActorTargetType_MAX = 7,

};

// Enum Frontiers.EDeathReviveOption
enum class Frontiers_EDeathReviveOption : uint8_t
{
	EDeathReviveOption__None       = 0,
	EDeathReviveOption__ReviveInTown = 1,
	EDeathReviveOption__ReviveAtLevelEntrance = 2,
	EDeathReviveOption__ReviveInPlace = 3,
	EDeathReviveOption__ReviveInParentArea = 4,
	EDeathReviveOption__Count      = 5,
	EDeathReviveOption__EDeathReviveOption_MAX = 6,

};

// Enum Frontiers.ESkillAnimationCancelMode
enum class Frontiers_ESkillAnimationCancelMode : uint8_t
{
	ESkillAnimationCancelMode__DeferToMontage = 0,
	ESkillAnimationCancelMode__AlwaysCancel = 1,
	ESkillAnimationCancelMode__NeverCancel = 2,
	ESkillAnimationCancelMode__ESkillAnimationCancelMode_MAX = 3,

};

// Enum Frontiers.ESkillAnimSource
enum class Frontiers_ESkillAnimSource : uint8_t
{
	ESkillAnimSource__None         = 0,
	ESkillAnimSource__Instant      = 1,
	ESkillAnimSource__Default      = 2,
	ESkillAnimSource__Override     = 3,
	ESkillAnimSource__ESkillAnimSource_MAX = 4,

};

// Enum Frontiers.ESkillTarget
enum class Frontiers_ESkillTarget : uint8_t
{
	ESkillTarget__None             = 0,
	ESkillTarget__Self             = 1,
	ESkillTarget__Direction        = 2,
	ESkillTarget__Location         = 3,
	ESkillTarget__Actor            = 4,
	ESkillTarget__Any              = 5,
	ESkillTarget__StartLocation    = 6,
	ESkillTarget__ESkillTarget_MAX = 7,

};

// Enum Frontiers.ESkillResult
enum class Frontiers_ESkillResult : uint8_t
{
	ESkillResult__Success          = 0,
	ESkillResult__OwnerIsDead      = 1,
	ESkillResult__InvalidSkill     = 2,
	ESkillResult__OwnerIsBusy      = 3,
	ESkillResult__OnCooldown       = 4,
	ESkillResult__InvalidTarget    = 5,
	ESkillResult__InsufficientResources = 6,
	ESkillResult__InsufficientItems = 7,
	ESkillResult__OutOfRange       = 8,
	ESkillResult__NotAvailable     = 9,
	ESkillResult__CannotUseSkills  = 10,
	ESkillResult__SkillDisabled    = 11,
	ESkillResult__LockedSkillSlot  = 12,
	ESkillResult__InvalidArea      = 13,
	ESkillResult__InvalidEmberWeapon = 14,
	ESkillResult__InvalidSource    = 15,
	ESkillResult__FailedCustomRule = 16,
	ESkillResult__Invalid          = 17,
	ESkillResult__ESkillResult_MAX = 18,

};

// Enum Frontiers.ETLBlendSpaceTypes
enum class Frontiers_ETLBlendSpaceTypes : uint8_t
{
	ETLBlendSpaceTypes__None       = 0,
	ETLBlendSpaceTypes__IdleMove   = 1,
	ETLBlendSpaceTypes__IdleMoveAlt = 2,
	ETLBlendSpaceTypes__Hidden     = 3,
	ETLBlendSpaceTypes__HiddenAlt  = 4,
	ETLBlendSpaceTypes__Fear       = 5,
	ETLBlendSpaceTypes__LayRail    = 6,
	ETLBlendSpaceTypes__ETLBlendSpaceTypes_MAX = 7,

};

// Enum Frontiers.EWeaponAnimationHandedness
enum class Frontiers_EWeaponAnimationHandedness : uint8_t
{
	EWeaponAnimationHandedness__MainHand = 0,
	EWeaponAnimationHandedness__OffHand = 1,
	EWeaponAnimationHandedness__TwoHand = 2,
	EWeaponAnimationHandedness__NotHanded = 3,
	EWeaponAnimationHandedness__EWeaponAnimationHandedness_MAX = 4,

};

// Enum Frontiers.EWeaponSuite
enum class Frontiers_EWeaponSuite : uint8_t
{
	EWeaponSuite__None             = 0,
	EWeaponSuite__Main             = 1,
	EWeaponSuite__Count            = 2,
	EWeaponSuite__EWeaponSuite_MAX = 3,

};

// Enum Frontiers.ESkillEvent
enum class Frontiers_ESkillEvent : uint8_t
{
	ESkillEvent__None              = 0,
	ESkillEvent__AnimStart         = 1,
	ESkillEvent__Hit01             = 2,
	ESkillEvent__Hit02             = 3,
	ESkillEvent__AnimEnd           = 4,
	ESkillEvent__AllowInterrupt    = 5,
	ESkillEvent__Count             = 6,
	ESkillEvent__ESkillEvent_MAX   = 7,

};

// Enum Frontiers.ESkillSet
enum class Frontiers_ESkillSet : uint8_t
{
	ESkillSet__None                = 0,
	ESkillSet__Default             = 1,
	ESkillSet__Alternate           = 2,
	ESkillSet__BuildSelectMode     = 3,
	ESkillSet__BuildPlaceMode      = 4,
	ESkillSet__RailSkillSet        = 5,
	ESkillSet__Pet                 = 6,
	ESkillSet__ESkillSet_MAX       = 7,

};

// Enum Frontiers.ESkillSlot
enum class Frontiers_ESkillSlot : uint8_t
{
	ESkillSlot__None               = 0,
	ESkillSlot__Move               = 1,
	ESkillSlot__Skill00            = 2,
	ESkillSlot__Skill01            = 3,
	ESkillSlot__Skill02            = 4,
	ESkillSlot__Skill03            = 5,
	ESkillSlot__Skill04            = 6,
	ESkillSlot__Skill05            = 7,
	ESkillSlot__Skill06            = 8,
	ESkillSlot__Skill07            = 9,
	ESkillSlot__Skill08            = 10,
	ESkillSlot__Operate            = 11,
	ESkillSlot__GetHit             = 12,
	ESkillSlot__Potion             = 13,
	ESkillSlot__Portal             = 14,
	ESkillSlot__Travel             = 15,
	ESkillSlot__Mount              = 16,
	ESkillSlot__Spawn              = 17,
	ESkillSlot__Death              = 18,
	ESkillSlot__Knockback          = 19,
	ESkillSlot__Hide               = 20,
	ESkillSlot__Spawn_Walk         = 21,
	ESkillSlot__Spawn_Emerge       = 22,
	ESkillSlot__Spawn_Drop_Low     = 23,
	ESkillSlot__Spawn_Exit         = 24,
	ESkillSlot__Spawn_Climb        = 25,
	ESkillSlot__Harvest            = 26,
	ESkillSlot__HarvestStone       = 27,
	ESkillSlot__HarvestWood        = 28,
	ESkillSlot__Spawn_Drop_Medium  = 29,
	ESkillSlot__Spawn_Drop_High    = 30,
	ESkillSlot__Weapon_Right_Flourish = 31,
	ESkillSlot__Weapon_Left_Flourish = 32,
	ESkillSlot__Weapon_Cannon_Flourish = 33,
	ESkillSlot__Dismount           = 34,
	ESkillSlot__Basic_Attack       = 35,
	ESkillSlot__Spawn_Special      = 36,
	ESkillSlot__Basic_Attack_Offhand = 37,
	ESkillSlot__Unstuck            = 38,
	ESkillSlot__MonsterExtraSkill00 = 39,
	ESkillSlot__MonsterExtraSkill01 = 40,
	ESkillSlot__MonsterExtraSkill02 = 41,
	ESkillSlot__MonsterExtraSkill03 = 42,
	ESkillSlot__MonsterExtraSkill04 = 43,
	ESkillSlot__MonsterExtraSkill05 = 44,
	ESkillSlot__Revive             = 45,
	ESkillSlot__PortalToWaypoint   = 46,
	ESkillSlot__Count              = 47,
	ESkillSlot__ESkillSlot_MAX     = 48,

};

// Enum Frontiers.ESkillTraitMode
enum class Frontiers_ESkillTraitMode : uint8_t
{
	ESkillTraitMode__Default       = 0,
	ESkillTraitMode__StatusEffect  = 1,
	ESkillTraitMode__Count         = 2,
	ESkillTraitMode__ESkillTraitMode_MAX = 3,

};

// Enum Frontiers.ESkillType
enum class Frontiers_ESkillType : uint8_t
{
	ESkillType__None               = 0,
	ESkillType__Primary            = 1,
	ESkillType__Secondary          = 2,
	ESkillType__Proc               = 3,
	ESkillType__Operate            = 4,
	ESkillType__Count              = 5,
	ESkillType__ESkillType_MAX     = 6,

};

// Enum Frontiers.ESkillPriorityType
enum class Frontiers_ESkillPriorityType : uint8_t
{
	ESkillPriorityType__NonPriority = 0,
	ESkillPriorityType__Priority   = 1,
	ESkillPriorityType__ESkillPriorityType_MAX = 2,

};

// Enum Frontiers.ESkillRootMotionType
enum class Frontiers_ESkillRootMotionType : uint8_t
{
	ESkillRootMotionType__AllowRootMotion = 0,
	ESkillRootMotionType__NoRootMotion = 1,
	ESkillRootMotionType__ESkillRootMotionType_MAX = 2,

};

// Enum Frontiers.ESkillStartType
enum class Frontiers_ESkillStartType : uint8_t
{
	ESkillStartType__Primary       = 0,
	ESkillStartType__Secondary     = 1,
	ESkillStartType__ESkillStartType_MAX = 2,

};

// Enum Frontiers.ESkillAssignedState
enum class Frontiers_ESkillAssignedState : uint8_t
{
	ESkillAssignedState__NotAssigned = 0,
	ESkillAssignedState__Assigned  = 1,
	ESkillAssignedState__Unassignable = 2,
	ESkillAssignedState__ESkillAssignedState_MAX = 3,

};

// Enum Frontiers.ESkillLevelState
enum class Frontiers_ESkillLevelState : uint8_t
{
	ESkillLevelState__LockedCanNeverBeUnlocked = 0,
	ESkillLevelState__LockedInsufficientPoints = 1,
	ESkillLevelState__LockedSufficientPoints = 2,
	ESkillLevelState__LockedRequiresPointsInTab = 3,
	ESkillLevelState__LockedEmberWeaponSkill = 4,
	ESkillLevelState__LockedPetSkill = 5,
	ESkillLevelState__LockedMaxSkillPointsSpent = 6,
	ESkillLevelState__UnlockedSufficientPoints = 7,
	ESkillLevelState__UnlockedInsufficientPoints = 8,
	ESkillLevelState__UnlockedOnlyOneLevel = 9,
	ESkillLevelState__UnlockedMaxLevel = 10,
	ESkillLevelState__UnlockedMaxSkillPointsSpent = 11,
	ESkillLevelState__ESkillLevelState_MAX = 12,

};

// Enum Frontiers.EMinionSpawnQueueMode
enum class Frontiers_EMinionSpawnQueueMode : uint8_t
{
	EMinionSpawnQueueMode__SpawnImmediate = 0,
	EMinionSpawnQueueMode__SpawnNextFramesQueue = 1,
	EMinionSpawnQueueMode__EMinionSpawnQueueMode_MAX = 2,

};

// Enum Frontiers.EFindMinionResult
enum class Frontiers_EFindMinionResult : uint8_t
{
	EFindMinionResult__MinionFound = 0,
	EFindMinionResult__MinionNotFound = 1,
	EFindMinionResult__EFindMinionResult_MAX = 2,

};

// Enum Frontiers.ESkillTabType
enum class Frontiers_ESkillTabType : uint8_t
{
	ESkillTabType__PlayerClass     = 0,
	ESkillTabType__Pet             = 1,
	ESkillTabType__NoEmberWeapon   = 2,
	ESkillTabType__LegendaryCollection = 3,
	ESkillTabType__ESkillTabType_MAX = 4,

};

// Enum Frontiers.EUIFriendStatus
enum class Frontiers_EUIFriendStatus : uint8_t
{
	EUIFriendStatus__NoRelationship = 0,
	EUIFriendStatus__PendingInbound = 1,
	EUIFriendStatus__PendingOutbound = 2,
	EUIFriendStatus__AcceptedFriendOnlineAndPlaying = 3,
	EUIFriendStatus__AcceptedFriendOnline = 4,
	EUIFriendStatus__AcceptedFriendOffline = 5,
	EUIFriendStatus__EUIFriendStatus_MAX = 6,

};

// Enum Frontiers.EMonsterSpawnType
enum class Frontiers_EMonsterSpawnType : uint8_t
{
	EMonsterSpawnType__Normal      = 0,
	EMonsterSpawnType__Minion      = 1,
	EMonsterSpawnType__Champion    = 2,
	EMonsterSpawnType__Unique      = 3,
	EMonsterSpawnType__Boss        = 4,
	EMonsterSpawnType__Legendary   = 5,
	EMonsterSpawnType__EMonsterSpawnType_MAX = 6,

};

// Enum Frontiers.ESpawnLogType
enum class Frontiers_ESpawnLogType : uint8_t
{
	ESpawnLogType__Item            = 0,
	ESpawnLogType__ItemModify      = 1,
	ESpawnLogType__Monster         = 2,
	ESpawnLogType__Minion          = 3,
	ESpawnLogType__Name            = 4,
	ESpawnLogType__FortProp        = 5,
	ESpawnLogType__Trap            = 6,
	ESpawnLogType__Dungeon         = 7,
	ESpawnLogType__ESpawnLogType_MAX = 8,

};

// Enum Frontiers.ESpawnRowType
enum class Frontiers_ESpawnRowType : uint8_t
{
	ESpawnRowType__Pick            = 0,
	ESpawnRowType__Pick_Each       = 1,
	ESpawnRowType__Pick_Curve      = 2,
	ESpawnRowType__Pick_Curve_Each = 3,
	ESpawnRowType__All             = 4,
	ESpawnRowType__Each            = 5,
	ESpawnRowType__Range           = 6,
	ESpawnRowType__ESpawnRowType_MAX = 7,

};

// Enum Frontiers.ESpawnEntryType
enum class Frontiers_ESpawnEntryType : uint8_t
{
	ESpawnEntryType__None          = 0,
	ESpawnEntryType__GotoItemSpawnRow = 1,
	ESpawnEntryType__AddItemByFilter = 2,
	ESpawnEntryType__AddItemByName = 3,
	ESpawnEntryType__ItemAddCurrency = 4,
	ESpawnEntryType__ItemAddAffix  = 5,
	ESpawnEntryType__ItemRemoveAffix = 6,
	ESpawnEntryType__GotoItemModifySpawnRow = 7,
	ESpawnEntryType__ModifyItemSetDye = 8,
	ESpawnEntryType__ModifyItemSetDyeFromReagent = 9,
	ESpawnEntryType__ModifyItemTransmogFromReagent = 10,
	ESpawnEntryType__ModifyItemAddAffix = 11,
	ESpawnEntryType__ModifyItemRemoveAffix = 12,
	ESpawnEntryType__GotoAffixSpawnRow = 13,
	ESpawnEntryType__AddAffixByName = 14,
	ESpawnEntryType__AddAffixByFilter = 15,
	ESpawnEntryType__GotoMonsterSpawnRow = 16,
	ESpawnEntryType__SetMonsterPackSize = 17,
	ESpawnEntryType__SetMonsterPackSizeDirect = 18,
	ESpawnEntryType__SetMonsterChampions = 19,
	ESpawnEntryType__AddMonsterByFilter = 20,
	ESpawnEntryType__AddMonsterByName = 21,
	ESpawnEntryType__AddChampionMonsterByName = 22,
	ESpawnEntryType__IncrementMonsterPackSize = 23,
	ESpawnEntryType__GoToNameSpawnRow = 24,
	ESpawnEntryType__GoToNameSpawnRowByPackSize = 25,
	ESpawnEntryType__InitializeName = 26,
	ESpawnEntryType__SetNameParameter = 27,
	ESpawnEntryType__GoToMinionSpawnRow = 28,
	ESpawnEntryType__AddMinionByName = 29,
	ESpawnEntryType__AddMinionByFilter = 30,
	ESpawnEntryType__AddSkillByName = 31,
	ESpawnEntryType__GoToFortPropSpawnRow = 32,
	ESpawnEntryType__AddFortPropByName = 33,
	ESpawnEntryType__AddFortPropByFilter = 34,
	ESpawnEntryType__GoToTrapSpawnRow = 35,
	ESpawnEntryType__AddTrapMonsterSpawner = 36,
	ESpawnEntryType__AddTrapHazard = 37,
	ESpawnEntryType__SetTrapDelay  = 38,
	ESpawnEntryType__GoToDungeonSpawnRow = 39,
	ESpawnEntryType__GoToDungeonSpawnRowByQuality = 40,
	ESpawnEntryType__GoToDungeonSpawnRowByChallengeLevel = 41,
	ESpawnEntryType__GoToDungeonSpawnRowIfEndOfCluster = 42,
	ESpawnEntryType__AddUniqueMapworksRowByName = 43,
	ESpawnEntryType__AddUniqueMapworksRowByFilter = 44,
	ESpawnEntryType__LevelDelta    = 45,
	ESpawnEntryType__AddAreaTagsToAny = 46,
	ESpawnEntryType__AddAreaTagsToAll = 47,
	ESpawnEntryType__AddMatchingAreaTagsToAny = 48,
	ESpawnEntryType__AddMatchingAreaTagsToAll = 49,
	ESpawnEntryType__RemoveAreaTagsFromAny = 50,
	ESpawnEntryType__RemoveAreaTagsFromAll = 51,
	ESpawnEntryType__GameplayTagAll = 52,
	ESpawnEntryType__GameplayTagAny = 53,
	ESpawnEntryType__GameplayTagExclude = 54,
	ESpawnEntryType__RemoveGameplayTagAll = 55,
	ESpawnEntryType__RemoveStemGameplayTagAll = 56,
	ESpawnEntryType__RemoveGameplayTagAny = 57,
	ESpawnEntryType__RemoveStemGameplayTagAny = 58,
	ESpawnEntryType__RemoveGameplayTagExclude = 59,
	ESpawnEntryType__RemoveStemGameplayTagExclude = 60,
	ESpawnEntryType__ESpawnEntryType_MAX = 61,

};

// Enum Frontiers.EStoreAvailability
enum class Frontiers_EStoreAvailability : uint8_t
{
	EStoreAvailability__Open       = 0,
	EStoreAvailability__VersionMismatch = 1,
	EStoreAvailability__InDanger   = 2,
	EStoreAvailability__BuildDisabled = 3,
	EStoreAvailability__EStoreAvailability_MAX = 4,

};

// Enum Frontiers.EBroadcastEventResponse
enum class Frontiers_EBroadcastEventResponse : uint8_t
{
	EBroadcastEventResponse__Succeeded = 0,
	EBroadcastEventResponse__Failed = 1,
	EBroadcastEventResponse__RecipientOffline = 2,
	EBroadcastEventResponse__EBroadcastEventResponse_MAX = 3,

};

// Enum Frontiers.EPlayerSessionStatus
enum class Frontiers_EPlayerSessionStatus : uint8_t
{
	EPlayerSessionStatus__Unknown  = 0,
	EPlayerSessionStatus__MainMenu = 1,
	EPlayerSessionStatus__Loading  = 2,
	EPlayerSessionStatus__InGame   = 3,
	EPlayerSessionStatus__EPlayerSessionStatus_MAX = 4,

};

// Enum Frontiers.ETLTeam
enum class Frontiers_ETLTeam : uint8_t
{
	ETLTeam__Player                = 0,
	ETLTeam__Monster               = 1,
	ETLTeam__Neutral               = 2,
	ETLTeam__Unknown               = 3,
	ETLTeam__ETLTeam_MAX           = 4,

};

// Enum Frontiers.ETermsResponse
enum class Frontiers_ETermsResponse : uint8_t
{
	ETermsResponse__Accepted       = 0,
	ETermsResponse__Rejected       = 1,
	ETermsResponse__ETermsResponse_MAX = 2,

};

// Enum Frontiers.ETLTermsType
enum class Frontiers_ETLTermsType : uint8_t
{
	ETLTermsType__TermsOfService   = 0,
	ETLTermsType__PrivacyPolicy    = 1,
	ETLTermsType__ETLTermsType_MAX = 2,

};

// Enum Frontiers.ELightStripRow
enum class Frontiers_ELightStripRow : uint8_t
{
	ELightStripRow__Directional    = 0,
	ELightStripRow__Sky            = 1,
	ELightStripRow__Shadow         = 2,
	ELightStripRow__VFX            = 3,
	ELightStripRow__Count          = 4,
	ELightStripRow__ELightStripRow_MAX = 5,

};

// Enum Frontiers.ELightAccentTint
enum class Frontiers_ELightAccentTint : uint8_t
{
	ELightAccentTint__LightColorA  = 0,
	ELightAccentTint__LightColorB  = 1,
	ELightAccentTint__LightColorC  = 2,
	ELightAccentTint__LightColorD  = 3,
	ELightAccentTint__ELightAccentTint_MAX = 4,

};

// Enum Frontiers.ELightRotationType
enum class Frontiers_ELightRotationType : uint8_t
{
	LongShadows                    = 0,
	ShortShadows                   = 1,
	ELightRotationType_MAX         = 2,

};

// Enum Frontiers.ETimeOfDayPeriod
enum class Frontiers_ETimeOfDayPeriod : uint8_t
{
	ETimeOfDayPeriod__Dawn         = 0,
	ETimeOfDayPeriod__Day          = 1,
	ETimeOfDayPeriod__Dusk         = 2,
	ETimeOfDayPeriod__Night        = 3,
	ETimeOfDayPeriod__Count        = 4,
	ETimeOfDayPeriod__ETimeOfDayPeriod_MAX = 5,

};

// Enum Frontiers.EMontageSection
enum class Frontiers_EMontageSection : uint8_t
{
	EMontageSection__Start         = 0,
	EMontageSection__Loop          = 1,
	EMontageSection__End           = 2,
	EMontageSection__EMontageSection_MAX = 3,

};

// Enum Frontiers.ECreateItemMode
enum class Frontiers_ECreateItemMode : uint8_t
{
	ECreateItemMode__ByNameOnGround = 0,
	ECreateItemMode__ByNameGiveToPlayer = 1,
	ECreateItemMode__BySpawnDataOnGround = 2,
	ECreateItemMode__BySpawnDataInLog = 3,
	ECreateItemMode__ECreateItemMode_MAX = 4,

};

// Enum Frontiers.ETLDataConvertType
enum class Frontiers_ETLDataConvertType : uint8_t
{
	ETLDataConvertType__Character  = 0,
	ETLDataConvertType__Accountwide = 1,
	ETLDataConvertType__Quest      = 2,
	ETLDataConvertType__StashTab   = 3,
	ETLDataConvertType__Fort       = 4,
	ETLDataConvertType__FortStash  = 5,
	ETLDataConvertType__ETLDataConvertType_MAX = 6,

};

// Enum Frontiers.ETLDataConvertResult
enum class Frontiers_ETLDataConvertResult : uint8_t
{
	ETLDataConvertResult__Success  = 0,
	ETLDataConvertResult__NoDataMigrationFound = 1,
	ETLDataConvertResult__InvalidDataConvert = 2,
	ETLDataConvertResult__StructToJsonError = 3,
	ETLDataConvertResult__JsonToStructError = 4,
	ETLDataConvertResult__ParseJsonError = 5,
	ETLDataConvertResult__ETLDataConvertResult_MAX = 6,

};

// Enum Frontiers.ETLPlayMode
enum class Frontiers_ETLPlayMode : uint8_t
{
	ETLPlayMode__Invalid           = 0,
	ETLPlayMode__Singleplayer      = 1,
	ETLPlayMode__OnlineMultiplayer = 2,
	ETLPlayMode__ETLPlayMode_MAX   = 3,

};

// Enum Frontiers.EExitReason
enum class Frontiers_EExitReason : uint8_t
{
	EExitReason__None              = 0,
	EExitReason__UserRequest       = 1,
	EExitReason__ConnectionLost    = 2,
	EExitReason__ApplicationSuspended = 3,
	EExitReason__PlatformLoggedOut = 4,
	EExitReason__AccountCreateError = 5,
	EExitReason__JoinMultiplayerSession = 6,
	EExitReason__AccountUpgradeRequired = 7,
	EExitReason__OnlinePlayerInactivity = 8,
	EExitReason__SaveGameFailed    = 9,
	EExitReason__EExitReason_MAX   = 10,

};

// Enum Frontiers.EMinionDeadOrDestroyedBehavior
enum class Frontiers_EMinionDeadOrDestroyedBehavior : uint8_t
{
	EMinionDeadOrDestroyedBehavior__None = 0,
	EMinionDeadOrDestroyedBehavior__InvalidateInventorySlot = 1,
	EMinionDeadOrDestroyedBehavior__EMinionDeadOrDestroyedBehavior_MAX = 2,

};

// Enum Frontiers.EMinionInventoryFullBehavior
enum class Frontiers_EMinionInventoryFullBehavior : uint8_t
{
	EMinionInventoryFullBehavior__PreventAdd = 0,
	EMinionInventoryFullBehavior__KillOldest = 1,
	EMinionInventoryFullBehavior__DestroyOldest = 2,
	EMinionInventoryFullBehavior__EMinionInventoryFullBehavior_MAX = 3,

};

// Enum Frontiers.EBlockedUserContext
enum class Frontiers_EBlockedUserContext : uint8_t
{
	EBlockedUserContext__Matchmaking = 0,
	EBlockedUserContext__CommunicationAndMatchmaking = 1,
	EBlockedUserContext__EBlockedUserContext_MAX = 2,

};

// Enum Frontiers.ELoginContext
enum class Frontiers_ELoginContext : uint8_t
{
	ELoginContext__Multiplayer     = 0,
	ELoginContext__GetSessionOnly  = 1,
	ELoginContext__ELoginContext_MAX = 2,

};

// Enum Frontiers.ETLCanPlayResult
enum class Frontiers_ETLCanPlayResult : uint8_t
{
	ETLCanPlayResult__Success      = 0,
	ETLCanPlayResult__NoPriviledge = 1,
	ETLCanPlayResult__PrivilegesLoadInProgress = 2,
	ETLCanPlayResult__ETLCanPlayResult_MAX = 3,

};

// Enum Frontiers.ETLLoginStatus
enum class Frontiers_ETLLoginStatus : uint8_t
{
	ETLLoginStatus__LoggedOut      = 0,
	ETLLoginStatus__LoggingIn      = 1,
	ETLLoginStatus__LoggedIn       = 2,
	ETLLoginStatus__LoggingOut     = 3,
	ETLLoginStatus__ETLLoginStatus_MAX = 4,

};

// Enum Frontiers.ETLDisplaySize
enum class Frontiers_ETLDisplaySize : uint8_t
{
	ETLDisplaySize__Large          = 0,
	ETLDisplaySize__Medium         = 1,
	ETLDisplaySize__Small          = 2,
	ETLDisplaySize__Tiny           = 3,
	ETLDisplaySize__ETLDisplaySize_MAX = 4,

};

// Enum Frontiers.ETLServicePlatform
enum class Frontiers_ETLServicePlatform : uint8_t
{
	ETLServicePlatform__invalid    = 0,
	ETLServicePlatform__arc        = 1,
	ETLServicePlatform__steam      = 2,
	ETLServicePlatform__sony       = 3,
	ETLServicePlatform__xbox       = 4,
	ETLServicePlatform__nintendo   = 5,
	ETLServicePlatform__ETLServicePlatform_MAX = 6,

};

// Enum Frontiers.ETLPlatform
enum class Frontiers_ETLPlatform : uint8_t
{
	ETLPlatform__Invalid           = 0,
	ETLPlatform__Linux             = 1,
	ETLPlatform__Arc               = 2,
	ETLPlatform__Steam             = 3,
	ETLPlatform__Playstation4      = 4,
	ETLPlatform__XboxOne           = 5,
	ETLPlatform__Switch            = 6,
	ETLPlatform__WinGDK            = 7,
	ETLPlatform__XboxOneGDK        = 8,
	ETLPlatform__ETLPlatform_MAX   = 9,

};

// Enum Frontiers.ENameplateState
enum class Frontiers_ENameplateState : uint8_t
{
	ENameplateState__HideAll       = 0,
	ENameplateState__ShowItems     = 1,
	ENameplateState__ShowAll       = 2,
	ENameplateState__ENameplateState_MAX = 3,

};

// Enum Frontiers.ESkillMovementStatus
enum class Frontiers_ESkillMovementStatus : uint8_t
{
	ESkillMovementStatus__NotMoving = 0,
	ESkillMovementStatus__MovingFromInput = 1,
	ESkillMovementStatus__MovingIntoRange = 2,
	ESkillMovementStatus__ESkillMovementStatus_MAX = 3,

};

// Enum Frontiers.EPostFeedbackAction
enum class Frontiers_EPostFeedbackAction : uint8_t
{
	EPostFeedbackAction__None      = 0,
	EPostFeedbackAction__ExitToTitle = 1,
	EPostFeedbackAction__ExitToDesktop = 2,
	EPostFeedbackAction__EPostFeedbackAction_MAX = 3,

};

// Enum Frontiers.EMenuState
enum class Frontiers_EMenuState : uint8_t
{
	EMenuState__Title              = 0,
	EMenuState__CharacterSelect    = 1,
	EMenuState__Playing            = 2,
	EMenuState__None               = 3,
	EMenuState__EMenuState_MAX     = 4,

};

// Enum Frontiers.EMissileMovementTransitionType
enum class Frontiers_EMissileMovementTransitionType : uint8_t
{
	EMissileMovementTransitionType__Linear = 0,
	EMissileMovementTransitionType__Sinerp = 1,
	EMissileMovementTransitionType__Coserp = 2,
	EMissileMovementTransitionType__Exponential = 3,
	EMissileMovementTransitionType__Smoothstep = 4,
	EMissileMovementTransitionType__Smootherstep = 5,
	EMissileMovementTransitionType__EMissileMovementTransitionType_MAX = 6,

};

// Enum Frontiers.EMissileMovementType
enum class Frontiers_EMissileMovementType : uint8_t
{
	EMissileMovementType__Physics  = 0,
	EMissileMovementType__Sine     = 1,
	EMissileMovementType__Curve    = 2,
	EMissileMovementType__RadialCurve = 3,
	EMissileMovementType__EMissileMovementType_MAX = 4,

};

// Enum Frontiers.ETLClassRepNodeMapping
enum class Frontiers_ETLClassRepNodeMapping : uint8_t
{
	ETLClassRepNodeMapping__NotRouted = 0,
	ETLClassRepNodeMapping__RelevantAllConnections = 1,
	ETLClassRepNodeMapping__RelevantOwnerOnly = 2,
	ETLClassRepNodeMapping__Spatialize_Static = 3,
	ETLClassRepNodeMapping__Spatialize_Dynamic = 4,
	ETLClassRepNodeMapping__Spatialize_Dormancy = 5,
	ETLClassRepNodeMapping__ETLClassRepNodeMapping_MAX = 6,

};

// Enum Frontiers.ESaveGameSlot
enum class Frontiers_ESaveGameSlot : uint8_t
{
	ESaveGameSlot__Invalid         = 0,
	ESaveGameSlot__AccountInfo     = 1,
	ESaveGameSlot__AccountWide     = 2,
	ESaveGameSlot__AccountQuests   = 3,
	ESaveGameSlot__FortInventory   = 4,
	ESaveGameSlot__FortStash       = 5,
	ESaveGameSlot__SharedStash     = 6,
	ESaveGameSlot__CharacterData   = 7,
	ESaveGameSlot__QuestData       = 8,
	ESaveGameSlot__EditorOnlyAchievements = 9,
	ESaveGameSlot__StaticContent   = 10,
	ESaveGameSlot__UserSettings    = 11,
	ESaveGameSlot__ESaveGameSlot_MAX = 12,

};

// Enum Frontiers.ESaveWriteMode
enum class Frontiers_ESaveWriteMode : uint8_t
{
	ESaveWriteMode__Invalid        = 0,
	ESaveWriteMode__Synchronous    = 1,
	ESaveWriteMode__Asynchronous   = 2,
	ESaveWriteMode__ESaveWriteMode_MAX = 3,

};

// Enum Frontiers.ETransmogOperation
enum class Frontiers_ETransmogOperation : uint8_t
{
	ETransmogOperation__Transmog   = 0,
	ETransmogOperation__Dye        = 1,
	ETransmogOperation__Count      = 2,
	ETransmogOperation__ETransmogOperation_MAX = 3,

};

// Enum Frontiers.ETrapTriggerType
enum class Frontiers_ETrapTriggerType : uint8_t
{
	ETrapTriggerType__Code         = 0,
	ETrapTriggerType__Blueprint    = 1,
	ETrapTriggerType__AnimNotify   = 2,
	ETrapTriggerType__Force        = 3,
	ETrapTriggerType__ETrapTriggerType_MAX = 4,

};

// Enum Frontiers.ETravelOptions
enum class Frontiers_ETravelOptions : uint8_t
{
	ETravelOptions__None           = 0,
	ETravelOptions__FromMainMenu   = 1,
	ETravelOptions__ETravelOptions_MAX = 2,

};

// Enum Frontiers.ECanUseWarp
enum class Frontiers_ECanUseWarp : uint8_t
{
	ECanUseWarp__Success           = 0,
	ECanUseWarp__FailureNoAreaData = 1,
	ECanUseWarp__FailureQuestRequirement = 2,
	ECanUseWarp__FailureWarpToSelf = 3,
	ECanUseWarp__ECanUseWarp_MAX   = 4,

};

// Enum Frontiers.ETravelConfirmationType
enum class Frontiers_ETravelConfirmationType : uint8_t
{
	ETravelConfirmationType__Quest = 0,
	ETravelConfirmationType__MapworksLeave = 1,
	ETravelConfirmationType__DungeonEnter = 2,
	ETravelConfirmationType__DungeonLeave = 3,
	ETravelConfirmationType__ETravelConfirmationType_MAX = 4,

};

// Enum Frontiers.EServerTravelDebugMessage
enum class Frontiers_EServerTravelDebugMessage : uint8_t
{
	EServerTravelDebugMessage__None = 0,
	EServerTravelDebugMessage__SavingCharacter = 1,
	EServerTravelDebugMessage__LookingUpAreaServer = 2,
	EServerTravelDebugMessage__ClientTravelling = 3,
	EServerTravelDebugMessage__EServerTravelDebugMessage_MAX = 4,

};

// Enum Frontiers.ETravelState
enum class Frontiers_ETravelState : uint8_t
{
	ETravelState__TravelingToThisServer = 0,
	ETravelState__TravelingToNewServer = 1,
	ETravelState__WaitForPlayerReady = 2,
	ETravelState__WaitForSpawnLocation = 3,
	ETravelState__WaitForLevelList = 4,
	ETravelState__WaitForLevelLoad = 5,
	ETravelState__WaitForPartnerLoad = 6,
	ETravelState__WaitForWarpComplete = 7,
	ETravelState__WaitForActorCount = 8,
	ETravelState__WaitForActorLoad = 9,
	ETravelState__Playing          = 10,
	ETravelState__TravelToThisServerRequested = 11,
	ETravelState__WaitForNavmeshRebuild = 12,
	ETravelState__ETravelState_MAX = 13,

};

// Enum Frontiers.ETraitDisplayCategory
enum class Frontiers_ETraitDisplayCategory : uint8_t
{
	ETraitDisplayCategory__None    = 0,
	ETraitDisplayCategory__Defense = 1,
	ETraitDisplayCategory__Attack  = 2,
	ETraitDisplayCategory__AttackTypes = 3,
	ETraitDisplayCategory__DefenseTypes = 4,
	ETraitDisplayCategory__SkillModifier = 5,
	ETraitDisplayCategory__Misc    = 6,
	ETraitDisplayCategory__ETraitDisplayCategory_MAX = 7,

};

// Enum Frontiers.ETraitTextFormat
enum class Frontiers_ETraitTextFormat : uint8_t
{
	ETraitTextFormat__None         = 0,
	ETraitTextFormat__Percentage   = 1,
	ETraitTextFormat__Seconds      = 2,
	ETraitTextFormat__BonusPercentage = 3,
	ETraitTextFormat__Bonus        = 4,
	ETraitTextFormat__ETraitTextFormat_MAX = 5,

};

// Enum Frontiers.ETraitParam
enum class Frontiers_ETraitParam : uint8_t
{
	ETraitParam__None              = 0,
	ETraitParam__GameplayTag       = 1,
	ETraitParam__Skill             = 2,
	ETraitParam__Currency          = 3,
	ETraitParam__Proc              = 4,
	ETraitParam__Mapworks          = 5,
	ETraitParam__Contract          = 6,
	ETraitParam__Minion            = 7,
	ETraitParam__Recipe            = 8,
	ETraitParam__Dialogue          = 9,
	ETraitParam__StatusEffect      = 10,
	ETraitParam__Item              = 11,
	ETraitParam__Entitlement       = 12,
	ETraitParam__Dye               = 13,
	ETraitParam__Count             = 14,
	ETraitParam__ETraitParam_MAX   = 15,

};

// Enum Frontiers.ESecondaryTraitSlot
enum class Frontiers_ESecondaryTraitSlot : uint8_t
{
	ESecondaryTraitSlot__None      = 0,
	ESecondaryTraitSlot__Multiplier = 1,
	ESecondaryTraitSlot__Count     = 2,
	ESecondaryTraitSlot__ESecondaryTraitSlot_MAX = 3,

};

// Enum Frontiers.ETraitSlot
enum class Frontiers_ETraitSlot : uint8_t
{
	ETraitSlot__Value              = 0,
	ETraitSlot__Min                = 1,
	ETraitSlot__Max                = 2,
	ETraitSlot__Regen              = 3,
	ETraitSlot__RegenMax           = 4,
	ETraitSlot__Drain              = 5,
	ETraitSlot__Accumulator        = 6,
	ETraitSlot__Timestamp          = 7,
	ETraitSlot__Count              = 8,

};

// Enum Frontiers.ETraitReplicateType
enum class Frontiers_ETraitReplicateType : uint8_t
{
	ETraitReplicateType__ReplicateToAll = 0,
	ETraitReplicateType__ReplicateToPlayersOnly = 1,
	ETraitReplicateType__ReplicateToMyPlayerOnly = 2,
	ETraitReplicateType__DontReplicate = 3,
	ETraitReplicateType__Count     = 4,
	ETraitReplicateType__ETraitReplicateType_MAX = 5,

};

// Enum Frontiers.ETraitType
enum class Frontiers_ETraitType : uint8_t
{
	ETraitType__Value              = 0,
	ETraitType__ActiveTrait        = 1,
	ETraitType__Proc               = 2,
	ETraitType__BaseWithMult       = 3,
	ETraitType__MaxValue           = 4,
	ETraitType__Flag               = 5,
	ETraitType__Count              = 6,
	ETraitType__ETraitType_MAX     = 7,

};

// Enum Frontiers.EUseItemResult
enum class Frontiers_EUseItemResult : uint8_t
{
	EUseItemResult__Success        = 0,
	EUseItemResult__Failure        = 1,
	EUseItemResult__Pending        = 2,
	EUseItemResult__EUseItemResult_MAX = 3,

};

// Enum Frontiers.ECanUseItemResult
enum class Frontiers_ECanUseItemResult : uint8_t
{
	ECanUseItemResult__CanUse      = 0,
	ECanUseItemResult__WrongArea   = 1,
	ECanUseItemResult__ECanUseItemResult_MAX = 2,

};

// Enum Frontiers.EFortBlockedStatus
enum class Frontiers_EFortBlockedStatus : uint8_t
{
	EFortBlockedStatus__NotBlocked = 0,
	EFortBlockedStatus__UGCPermissionsRestricted = 1,
	EFortBlockedStatus__BlockedFort = 2,
	EFortBlockedStatus__OwnerUGCPermissionsRestricted = 3,
	EFortBlockedStatus__EFortBlockedStatus_MAX = 4,

};

// Enum Frontiers.EShowBloodOptions
enum class Frontiers_EShowBloodOptions : uint8_t
{
	EShowBloodOptions__AlwaysShow  = 0,
	EShowBloodOptions__HideIfShowBlood = 1,
	EShowBloodOptions__OnlyIfShowBlood = 2,
	EShowBloodOptions__EShowBloodOptions_MAX = 3,

};

// Enum Frontiers.EToStringLevel
enum class Frontiers_EToStringLevel : uint8_t
{
	EToStringLevel__Default        = 0,
	EToStringLevel__Verbose        = 1,
	EToStringLevel__EToStringLevel_MAX = 2,

};

// Enum Frontiers.EToggle
enum class Frontiers_EToggle : uint8_t
{
	EToggle__On                    = 0,
	EToggle__Off                   = 1,
	EToggle__EToggle_MAX           = 2,

};

// Enum Frontiers.EPropertyMod
enum class Frontiers_EPropertyMod : uint8_t
{
	EPropertyMod__None             = 0,
	EPropertyMod__Visibility       = 1,
	EPropertyMod__AttachOffset     = 2,
	EPropertyMod__EPropertyMod_MAX = 3,

};

// Enum Frontiers.EXboxEncounterType
enum class Frontiers_EXboxEncounterType : uint8_t
{
	EXboxEncounterType__Default    = 0,
	EXboxEncounterType__Opponent   = 1,
	EXboxEncounterType__Teammate   = 2,
	EXboxEncounterType__EXboxEncounterType_MAX = 3,

};

// Enum Frontiers.EXboxMultiplayerActivityJoinRestriction
enum class Frontiers_EXboxMultiplayerActivityJoinRestriction : uint8_t
{
	EXboxMultiplayerActivityJoinRestriction__Public = 0,
	EXboxMultiplayerActivityJoinRestriction__InviteOnly = 1,
	EXboxMultiplayerActivityJoinRestriction__Followed = 2,
	EXboxMultiplayerActivityJoinRestriction__EXboxMultiplayerActivityJoinRestriction_MAX = 3,

};

// Enum Frontiers.EZoneInstanceState
enum class Frontiers_EZoneInstanceState : uint8_t
{
	EZoneInstanceState__Playing    = 0,
	EZoneInstanceState__ReadyToClose = 1,
	EZoneInstanceState__Closed     = 2,
	EZoneInstanceState__EZoneInstanceState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Frontiers.CommerceError
// 0x0028
struct FCommerceError
{
	int                                                Code;                                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IV8C[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Message;                                                   // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Detail;                                                    // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.CommerceBalance
// 0x000C
struct FCommerceBalance
{
	int                                                CashReal;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CashBonus;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CashTotal;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.CommerceProduct
// 0x0038
struct FCommerceProduct
{
	struct FString                                     TransactionId;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Sku;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PurchaseDate;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Claimed;                                                   // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QMLK[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CommerceResponseData
// 0x0020
struct FCommerceResponseData
{
	struct FCommerceBalance                            Wallet;                                                    // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GI94[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCommerceProduct>                    Purchases;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.CommerceResponse
// 0x0058
struct FCommerceResponse
{
	struct FString                                     Status;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCommerceError                              Error;                                                     // 0x0010(0x0028) (NativeAccessSpecifierPublic)
	struct FCommerceResponseData                       Data;                                                      // 0x0038(0x0020) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.UnclaimedReward
// 0x0018
struct FUnclaimedReward
{
	unsigned char                                      UnknownData_0YNZ[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.TLTableRowBase
// 0x0010 (0x0018 - 0x0008)
struct FTLTableRowBase : public FTableRowBase
{
	struct FString                                     Notes;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Frontiers.TLDataTableRowHandle
// 0x0010
struct FTLDataTableRowHandle
{
	unsigned char                                      UnknownData_7H3D[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RowName;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.CatalogTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FCatalogTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.ContractData
// 0x0148 (0x0160 - 0x0018)
struct FContractData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_OJZ8[0x28];                                    // 0x0018(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       LockedDescription;                                         // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       WelcomeText;                                               // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                NonLoopedLevels;                                           // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LoopedLevels;                                              // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LevelUpSkill[0x28];                                        // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FCatalogTableRowHandle                      PaidStoreItem;                                             // 0x00D0(0x0010) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      ContractStorePreview[0x28];                                // 0x00E0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      BannerImage[0x28];                                         // 0x0108(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      ContractPickerBackground[0x28];                            // 0x0130(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bIsDefaultContract;                                        // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEnabled;                                                // 0x0159(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                 // 0x015A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4U09[0x5];                                     // 0x015B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.TLText
// 0x0018
struct FTLText
{
	struct FText                                       Text;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ItemTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FItemTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.FortPropTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FFortPropTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.FortPropSpawnTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FFortPropSpawnTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.TraitsTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FTraitsTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.CurrencyTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FCurrencyTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.MinionTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FMinionTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.MinionSpawnTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FMinionSpawnTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.ItemSpawnTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FItemSpawnTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.AffixSpawnTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FAffixSpawnTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.ItemModifyTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FItemModifyTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.CraftingRecipeUnit
// 0x01D8 (0x01F0 - 0x0018)
struct FCraftingRecipeUnit : public FTLTableRowBase
{
	Frontiers_ECraftingUnitType                        Type;                                                      // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RKTR[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemTableRowHandle                         Item;                                                      // 0x0020(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FFortPropTableRowHandle                     Prop;                                                      // 0x0030(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FFortPropSpawnTableRowHandle                PropSpawn;                                                 // 0x0040(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FTraitsTableRowHandle                       Trait;                                                     // 0x0050(0x0010) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurrencyTableRowHandle                     Currency;                                                  // 0x0060(0x0010) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinionTableRowHandle                       Pet;                                                       // 0x0070(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMinionSpawnTableRowHandle                  PetSpawn;                                                  // 0x0080(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FItemSpawnTableRowHandle                    Spawn;                                                     // 0x0090(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FAffixSpawnTableRowHandle                   AffixSpawn;                                                // 0x00A0(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FItemModifyTableRowHandle                   ItemModifySpawn;                                           // 0x00B0(0x0010) (Edit, NativeAccessSpecifierPublic)
	Frontiers_ECraftingUnitLevelSource                 SpawnLevelFrom;                                            // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SLEX[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnLevelFixed;                                           // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnLevelAdd;                                             // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnLevelMult;                                            // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ECraftingUnitQuery                       Query;                                                     // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7A7N[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RequiredItemLevel;                                         // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       Tags;                                                      // 0x00D8(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           TagQuery;                                                  // 0x00F8(0x0048) (Edit, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDropOnGround;                                             // 0x0144(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHidden;                                                   // 0x0145(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZD5H[0x2];                                     // 0x0146(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       TraitParameterRowName;                                     // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ECraftingTraitParameterSource            TraitParameterSource;                                      // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ECraftingTraitLimitBehavior              TraitLimitBehavior;                                        // 0x0151(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLimitedTime;                                              // 0x0152(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyToFortProp;                                          // 0x0153(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0KYL[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      StatusEffectClass[0x28];                                   // 0x0154(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	float                                              StatusEffectDuration;                                      // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_38BT[0x6C];                                    // 0x0184(0x006C) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CraftingRecipe
// 0x00C0
struct FCraftingRecipe
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SLR5[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTLText                                     Description;                                               // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FTLText                                     DescriptionLong;                                           // 0x0028(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FTLText                                     DisplayName;                                               // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                               bUseSortIndex;                                             // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LGYE[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SortIndex;                                                 // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4UP1[0x4];                                     // 0x0060(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                Category;                                                  // 0x0064(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                Rarity;                                                    // 0x006C(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CraftingTimeSeconds;                                       // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCraftingRecipeUnit>                 Costs;                                                     // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCraftingRecipeUnit>                 Products;                                                  // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortPropTableRowHandle>             Props;                                                     // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bRequiresUnlock;                                           // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IA3A[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               ChildRecipes;                                              // 0x00B0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.InventoryIdsToPay
// 0x0018
struct FInventoryIdsToPay
{
	int                                                CostIndex;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YYRE[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        InventoryIds;                                              // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TraitKey
// 0x0008
struct FTraitKey
{
	uint64_t                                           Value;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.TraitPair
// 0x0010
struct FTraitPair
{
	struct FTraitKey                                   Key;                                                       // 0x0000(0x0008) (Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7CMS[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.InventoryEntry
// 0x0020
struct FInventoryEntry
{
	unsigned char                                      UnknownData_NGA8[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InventoryEntryId;                                          // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       InventoryEntryGuid;                                        // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3KO6[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.AppliedAffix
// 0x0010
struct FAppliedAffix
{
	struct FName                                       RowName;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AppliedWeight;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EAffixSource                             Source;                                                    // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_13TL[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.InventoryItemEntry
// 0x00A8 (0x00C8 - 0x0020)
struct FInventoryItemEntry : public FInventoryEntry
{
	unsigned char                                      UnknownData_NKKN[0x60];                                    // 0x0020(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAppliedAffix>                       Affixes;                                                   // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsEquipped;                                               // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KXWU[0x1];                                     // 0x0091(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsNewThisSession;                                         // 0x0092(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HMSM[0x9];                                     // 0x0093(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                SpokeTag;                                                  // 0x009C(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StackSize;                                                 // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ChallengeLevel;                                            // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                DyeRowIndex;                                               // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ItemRowIndex;                                              // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                TransmogItemRowIndex;                                      // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                TransmogDyeRowIndex;                                       // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                                TransmogClassTag;                                          // 0x00C0(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.CraftingCostOutput
// 0x00F8
struct FCraftingCostOutput
{
	int                                                CostIndex;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8PQB[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTraitPair                                  Trait;                                                     // 0x0008(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	Frontiers_ECraftingUnitType                        CostType;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O96I[0xF];                                     // 0x0019(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      InventoryContainerClass;                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryItemEntry                         Item;                                                      // 0x0030(0x00C8) (Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.CraftingProductOutput
// 0x0070
struct FCraftingProductOutput
{
	struct FTraitPair                                  Trait;                                                     // 0x0000(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	TArray<int>                                        InventoryEntryIds;                                         // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               FortStashRowNames;                                         // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAppliedAffix>                       AffixesApplied;                                            // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                AffixesAppliedToInventoryId;                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QBZ4[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        ModifiedItemIds;                                           // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInventoryItemEntry>                 PremodifiedItems;                                          // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bHidden;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QWYH[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CraftingRequest
// 0x0078
struct FCraftingRequest
{
	struct FName                                       RecipeName;                                                // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SourceProp;                                                // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SourceVendor;                                              // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CraftCount;                                                // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RIRM[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FInventoryIdsToPay>                  InventoryIdsToPay;                                         // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       SpokeRowName;                                              // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPrivilegedRequest;                                        // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U9GM[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCraftingCostOutput>                 PaidCosts;                                                 // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCraftingProductOutput>              Outputs;                                                   // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	Frontiers_ECraftingConfirmationType                ConfirmationType;                                          // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowErrorModals;                                          // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QXUM[0x16];                                    // 0x0062(0x0016) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CraftingQueueEntry
// 0x00A0
struct FCraftingQueueEntry
{
	struct FDateTime                                   StartTime;                                                 // 0x0000(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   FinishTime;                                                // 0x0008(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingRequest                            Request;                                                   // 0x0010(0x0078) (NativeAccessSpecifierPublic)
	struct FGuid                                       JobId;                                                     // 0x0088(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                CraftingFinishedTimer;                                     // 0x0098(0x0008) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.CraftingQueue
// 0x0018
struct FCraftingQueue
{
	TArray<struct FCraftingQueueEntry>                 Entries;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MaxNumSlots;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3J1E[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CraftableTableRowBase
// 0x0000 (0x0018 - 0x0018)
struct FCraftableTableRowBase : public FTLTableRowBase
{

};

// ScriptStruct Frontiers.CurrencyData
// 0x0128 (0x0140 - 0x0018)
struct FCurrencyData : public FCraftableTableRowBase
{
	unsigned char                                      UnknownData_TJP5[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bShouldDrop;                                               // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowInResources;                                          // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSavePerAccount;                                           // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M8QT[0x5];                                     // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       IconText;                                                  // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              PickUpUIDuration;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NBJE[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Icon[0x28];                                                // 0x0074(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TArray<struct FItemTableRowHandle>                 Items;                                                     // 0x00A0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ValueMin;                                                  // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ValueMax;                                                  // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowAddToAllCheat;                                       // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8JFN[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                Tag;                                                       // 0x00BC(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4RVO[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       QualityTags;                                               // 0x00C8(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       TypeText;                                                  // 0x00E8(0x0018) (Edit, NativeAccessSpecifierPublic)
	bool                                               bUseItemFrame;                                             // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DRNO[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      PreviewActor[0x28];                                        // 0x0101(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      UnknownData_JZDT[0x10];                                    // 0x0130(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CurrencyItemDropData
// 0x0018
struct FCurrencyItemDropData
{
	struct FItemTableRowHandle                         ItemRow;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TG6D[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.StaticDataVersion
// 0x0010
struct FStaticDataVersion
{
	struct FString                                     Version;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.DeathOptionCost
// 0x000C
struct FDeathOptionCost
{
	Frontiers_EDeathReviveOption                       DeathReviveOption;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WW2W[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PercentOfCurrentGold;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinimumCost;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.QuestObjectTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FQuestObjectTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.DialogueContextEntry
// 0x0014
struct FDialogueContextEntry
{
	Frontiers_EDialogueContext                         Type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D151[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       QuestId;                                                   // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskId;                                                    // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.DialogueData
// 0x0100 (0x0118 - 0x0018)
struct FDialogueData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_2ZZ4[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FQuestObjectTableRowHandle>          Speakers;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	Frontiers_EDialogueType                            Type;                                                      // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LRLP[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TitleText;                                                 // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                      // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ButtonText;                                                // 0x0068(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         Voiceover;                                                 // 0x0080(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODLocalizedEventAudioTableEntry          AudioTableEntry;                                           // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	Frontiers_EDialogueContext                         ContextType1;                                              // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E3PZ[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ContextParam1;                                             // 0x00AC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EDialogueContext                         ContextType2;                                              // 0x00B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YL9X[0x3];                                     // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ContextParam2;                                             // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EDialogueContext                         ContextType3;                                              // 0x00C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WODP[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ContextParam3;                                             // 0x00C4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                IconPortraitTag;                                           // 0x00CC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q8CH[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       Tags;                                                      // 0x00D8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                Weight;                                                    // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_633R[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDialogueContextEntry>               ContextEntries;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                               bDefaultSet;                                               // 0x0110(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y7LS[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ProbabilisticTagSet
// 0x0050
struct FProbabilisticTagSet
{
	TMap<struct FGameplayTag, float>                   Map;                                                       // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.DifficultyData
// 0x0208 (0x0220 - 0x0018)
struct FDifficultyData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_X40G[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Index;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R61B[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       DeathMessage;                                              // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              AvailableAtLevel;                                          // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MonsterHealthCurve;                                        // 0x0074(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MonsterDamageCurve;                                        // 0x007C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerDamage;                                              // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerVsChampionDamage;                                    // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerVsBossDamage;                                        // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MonsterDamage;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChampionDamage;                                            // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BossDamage;                                                // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBossesResetOnDefeat;                                      // 0x009C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PC34[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PlayerCountBonusInMonsterSpawn;                            // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G9QO[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FProbabilisticTagSet                        MonsterLuck;                                               // 0x00A8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              MonsterMoveSpeedBonus;                                     // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowInHUD;                                                // 0x00FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5YKM[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ShieldIcon[0x28];                                          // 0x00FD(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      HighlightShieldIcon[0x28];                                 // 0x0128(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      FrameIcon[0x28];                                           // 0x0150(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      ShoulderIcon[0x28];                                        // 0x0178(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      BackgroundIcon[0x28];                                      // 0x01A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FLinearColor                                DifficultyColor;                                           // 0x01C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     TraitString;                                               // 0x01E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     MonsterTraitString;                                        // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EF7Q[0x20];                                    // 0x0200(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ResistanceEffect
// 0x0018
struct FResistanceEffect
{
	class UClass*                                      StatusEffect;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ResistanceEffect;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2YQE[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.DRLGLevelInstance
// 0x0068
struct FDRLGLevelInstance
{
	int                                                InstanceId;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldMin;                                                  // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldMax;                                                  // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EOrthoRotation                           YawRotation;                                               // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L8HA[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LevelProxy;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LevelAsset[0x28];                                          // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FName                                       Name;                                                      // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.DRLGLevelProxyEntry
// 0x0030
struct FDRLGLevelProxyEntry
{
	unsigned char                                      WorldAsset[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	int                                                Weight;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2E0D[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.DRLGSubLevelData
// 0x0040
struct FDRLGSubLevelData
{
	class UClass*                                      LevelProxy;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S3KO[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_EOrthoRotation                           YawRotation;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M4FX[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Origin;                                                    // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MinBounds;                                                 // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MaxBounds;                                                 // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnyRotation;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WKD5[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.DRLSubLevelSet
// 0x0018
struct FDRLSubLevelSet
{
	TArray<struct FDRLGSubLevelData>                   Levels;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Weight;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KZ7Q[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.DRLGRuleData
// 0x0030
struct FDRLGRuleData
{
	struct FName                                       RuleName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDRLSubLevelSet>                     Replacements;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDRLGSubLevelData>                   Pattern;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsPurelyAdditive;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QDOS[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.DRLGRules
// 0x0010
struct FDRLGRules
{
	TArray<struct FDRLGRuleData>                       Rules;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.MapWorksTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FMapWorksTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.DungeonChallengeData
// 0x0028 (0x0040 - 0x0018)
struct FDungeonChallengeData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_UI7I[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMapWorksTableRowHandle>             MapworksAffixRows;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                NumChallenges;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBonusCluster;                                           // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QW1G[0xB];                                     // 0x0035(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SpawnDataBase
// 0x0160 (0x0178 - 0x0018)
struct FSpawnDataBase : public FCraftableTableRowBase
{
	unsigned char                                      UnknownData_RWH7[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_ESpawnRowType                            RowType;                                                   // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZHXV[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NoPickWeight;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinLevel;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bErrorIfOutputIsEmpty;                                     // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRetryIfPickIsEmpty;                                       // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESpawnEntryType                          EntryType1;                                                // 0x002E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MS4F[0x1];                                     // 0x002F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry1;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeightOrCount1;                                            // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESpawnEntryType                          EntryType2;                                                // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LBV3[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry2;                                                    // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeightOrCount2;                                            // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESpawnEntryType                          EntryType3;                                                // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N34I[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry3;                                                    // 0x0060(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeightOrCount3;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESpawnEntryType                          EntryType4;                                                // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3IVT[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry4;                                                    // 0x0078(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeightOrCount4;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESpawnEntryType                          EntryType5;                                                // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O7H1[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry5;                                                    // 0x0090(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeightOrCount5;                                            // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESpawnEntryType                          EntryType6;                                                // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_685E[0x3];                                     // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry6;                                                    // 0x00A8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeightOrCount6;                                            // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESpawnEntryType                          EntryType7;                                                // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FE6X[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry7;                                                    // 0x00C0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeightOrCount7;                                            // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESpawnEntryType                          EntryType8;                                                // 0x00D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1M0Z[0x3];                                     // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry8;                                                    // 0x00D8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeightOrCount8;                                            // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESpawnEntryType                          EntryType9;                                                // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CHBD[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry9;                                                    // 0x00F0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeightOrCount9;                                            // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESpawnEntryType                          EntryType10;                                               // 0x0104(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J5QL[0x3];                                     // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry10;                                                   // 0x0108(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeightOrCount10;                                           // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESpawnEntryType                          EntryType11;                                               // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YYW9[0x3];                                     // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry11;                                                   // 0x0120(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeightOrCount11;                                           // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESpawnEntryType                          EntryType12;                                               // 0x0134(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZTJJ[0x3];                                     // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry12;                                                   // 0x0138(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeightOrCount12;                                           // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DataCurves;                                                // 0x014C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BYT1[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USpawnEntryBase*>                     Entries;                                                   // 0x0158(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A6ZN[0x10];                                    // 0x0168(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.DungeonSpawnData
// 0x0000 (0x0178 - 0x0178)
struct FDungeonSpawnData : public FSpawnDataBase
{

};

// ScriptStruct Frontiers.BossTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FBossTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.DungeonChallengeSelection
// 0x0048
struct FDungeonChallengeSelection
{
	int                                                ChallengeLevel;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Quality;                                                   // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GKX8[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       StartingAreaText;                                          // 0x0010(0x0018) (NativeAccessSpecifierPublic)
	struct FGameplayTag                                PrimaryElementTag;                                         // 0x0028(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                MonsterPopulationTag;                                      // 0x0030(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBossTableRowHandle                         BossRow;                                                   // 0x0038(0x0010) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.GradientData
// 0x0078
struct FGradientData
{
	unsigned char                                      Dark[0x28];                                                // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Medium[0x28];                                              // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Light[0x28];                                               // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Frontiers.DyeData
// 0x00F8 (0x0110 - 0x0018)
struct FDyeData : public FTLTableRowBase
{
	struct FText                                       DisplayName;                                               // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	Frontiers_EDyeType                                 Type;                                                      // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UG5E[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Dye[0x28];                                                 // 0x0031(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	class UTexture2D*                                  SkinHairGradient;                                          // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Icon[0x28];                                                // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              MinLevel;                                                  // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLevel;                                                  // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ItemHasAnyTags;                                            // 0x0098(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       PlayerClassTags;                                           // 0x00B8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bIsPlayerDye;                                              // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideInDyeList;                                            // 0x00D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_091I[0x2];                                     // 0x00DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           DropWeight;                                                // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AreaTags;                                                  // 0x00E0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       MainRowName;                                               // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R6Y2[0x8];                                     // 0x0108(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.EffectDefinition
// 0x00D0
struct FEffectDefinition
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleSystem;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseCensoredParticle;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DX9E[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             CensoredParticleSystem;                                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         SoundEvent;                                                // 0x0020(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODLocalizedEventAudioTableEntry          AudioTableEntry;                                           // 0x0038(0x0010) (Edit, NativeAccessSpecifierPublic)
	class UClass*                                      TLEffect;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseCensoredTLEffect;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WXCW[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CensoredTLEffect;                                          // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttach;                                                   // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                AttachLocationType;                                        // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A6DB[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SocketName;                                                // 0x0064(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnAtBase;                                              // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AN9R[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LocationOffset;                                            // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRotateInDirectionOfAttack;                                // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAbsoluteRotation;                                         // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ALXL[0x2];                                     // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ScaleMultiplier;                                           // 0x008C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EVFXScaleMethod                          ScaleMethod;                                               // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLegacyScaling;                                         // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F7UD[0x2];                                     // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TranslucencySortPriorityToAdd;                             // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInitializedWithDefaultSettings;                           // 0x00A0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XUK6[0x20];                                    // 0x00A1(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bRandomizeTLEffectLifespan;                                // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WCNX[0x2];                                     // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinTLEffectLifespan;                                       // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxTLEffectLifespan;                                       // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LHE4[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.EffectCollection
// 0x0018
struct FEffectCollection
{
	TArray<struct FEffectDefinition>                   Effects;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	Frontiers_EEffectDefaultSettings                   DefaultSetting;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K0HN[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.WeaponElementalEffect
// 0x0010
struct FWeaponElementalEffect
{
	struct FName                                       SocketName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             AffixEffect;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.WeaponAffixEffect
// 0x0018
struct FWeaponAffixEffect
{
	Frontiers_ECombatFxElementType                     FxType;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AJQX[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeaponElementalEffect                      Effect;                                                    // 0x0008(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SkillsTabTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FSkillsTabTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.IconAsset
// 0x0038
struct FIconAsset
{
	bool                                               bUseAutoGeneratedIconMaterial;                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T7OU[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    Texture;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      TexturePtr[0x28];                                          // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Frontiers.EmberWeaponData
// 0x0070 (0x0088 - 0x0018)
struct FEmberWeaponData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_JUNQ[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           PlayTestNPCsWeight;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeTimeSeconds;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrainTimeSeconds;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IIPS[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSkillsTabTableRowHandle                    SkillTab;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SkillTag;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIconAsset                                  CharacterCreateIcon;                                       // 0x0048(0x0038) (Edit, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RXVB[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CatalogArray
// 0x0018
struct FCatalogArray
{
	Frontiers_ETLPlatform                              TargetPlatform;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R5CV[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCatalogTableRowHandle>              Exclusives;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.HideableObjectMaterials
// 0x0028
struct FHideableObjectMaterials
{
	TWeakObjectPtr<class UMeshComponent>               StaticMeshComponent;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMaterialInterface*>                  OpaqueMaterials;                                           // 0x0008(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UMaterialInterface*>                  TranslucentMaterials;                                      // 0x0018(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.ReportUserContext
// 0x0060
struct FReportUserContext
{
	struct FString                                     TlAccountID;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformAccountName;                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformAccountId;                                         // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformName;                                              // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterID;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterName;                                             // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.FoliageSoundData
// 0x0048 (0x0060 - 0x0018)
struct FFoliageSoundData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_PCSO[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      StaticMesh[0x28];                                          // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FFMODEventReference                         FMODEventReference;                                        // 0x0048(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.FootstepEntry
// 0x0020
struct FFootstepEntry
{
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          SurfaceType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RY7O[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         FootstepSound;                                             // 0x0008(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.FortPropToPlaceData
// 0x0028
struct FFortPropToPlaceData
{
	struct FFortPropTableRowHandle                     Prop;                                                      // 0x0000(0x0010) (NativeAccessSpecifierPublic)
	bool                                               bOriginalLocationSet;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DOJI[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     OriginalLocation;                                          // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OriginalRotationDegrees;                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BEN8[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.FortPropGroupTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FFortPropGroupTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.FortPropData
// 0x0238 (0x0250 - 0x0018)
struct FFortPropData : public FCraftableTableRowBase
{
	struct FFortPropGroupTableRowHandle                Group;                                                     // 0x0018(0x0010) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortPropGroupTableRowHandle                SubGroup;                                                  // 0x0028(0x0010) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCount;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5WGC[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      Icon[0x28];                                                // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bIsEnabled;                                                // 0x0098(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanCraftDirectly;                                         // 0x0099(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequiresUnlock;                                           // 0x009A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVisibleWhenLocked;                                        // 0x009B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequired;                                                 // 0x009C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W69K[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Prop[0x28];                                                // 0x009D(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Vendor[0x28];                                              // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	bool                                               bAffectsGameplay;                                          // 0x00F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NO4S[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      StatusEffect;                                              // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       GameplayTagContainer;                                      // 0x0100(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       UpgradeTo;                                                 // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowCraftingConfirmation;                                 // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowStorageTab;                                           // 0x0129(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EFortPropType                            PropType;                                                  // 0x012A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GQRQ[0x5];                                     // 0x012B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CustomCraftingVerb;                                        // 0x0130(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      CustomCraftingUI[0x28];                                    // 0x0148(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	bool                                               bCanCraftInOtherPlayersForts;                              // 0x0170(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_04PW[0x3];                                     // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PropComplexity;                                            // 0x0174(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UpgradeChainIndex;                                         // 0x0178(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           DropWeight;                                                // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_46OL[0x8];                                     // 0x0180(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       QualityTags;                                               // 0x0188(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	Frontiers_ECraftingUnitType                        CostType1;                                                 // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ECraftingUnitQuery                       CostQuery1;                                                // 0x01A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ID6L[0x2];                                     // 0x01AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Cost1;                                                     // 0x01AC(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CostQuantity1;                                             // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       CostText1;                                                 // 0x01B8(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      CostIcon1[0x28];                                           // 0x01D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bApplyCost1ToFortProp;                                     // 0x01F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ECraftingUnitType                        CostType2;                                                 // 0x01F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ECraftingUnitQuery                       CostQuery2;                                                // 0x01FA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MJLK[0x1];                                     // 0x01FB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Cost2;                                                     // 0x01FC(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CostQuantity2;                                             // 0x0204(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       CostText2;                                                 // 0x0208(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      CostIcon2[0x28];                                           // 0x0220(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bApplyCost2ToFortProp;                                     // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WSQT[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.FortPropGroupData
// 0x0028 (0x0040 - 0x0018)
struct FFortPropGroupData : public FTLTableRowBase
{
	struct FText                                       DisplayName;                                               // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                MaxCount;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SortOrder;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U8AY[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.FortPropSpawnData
// 0x0000 (0x0178 - 0x0178)
struct FFortPropSpawnData : public FSpawnDataBase
{

};

// ScriptStruct Frontiers.SpawnPickerEntryBase
// 0x0028
struct FSpawnPickerEntryBase
{
	struct FGameplayTagContainer                       GameplayTagFilter;                                         // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                Weight;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WL2P[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.FortPropSpawnEntry
// 0x0010 (0x0038 - 0x0028)
struct FFortPropSpawnEntry : public FSpawnPickerEntryBase
{
	struct FFortPropSpawnTableRowHandle                FortPropSpawnRow;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceAppliedAffixEntry
// 0x0018
struct FPersistenceAppliedAffixEntry
{
	struct FString                                     AffixName;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AppliedWeight;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EAffixSource                             Source;                                                    // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XQL3[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.PersistenceTraitEntry
// 0x0040
struct FPersistenceTraitEntry
{
	struct FString                                     TraitName;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PrimarySlot;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SecondarySlot;                                             // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Param;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KW5R[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.PersistenceInventoryItemEntry
// 0x00A8
struct FPersistenceInventoryItemEntry
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemDataRow;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LCJM[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DyeDataRow;                                                // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TransmogItemDataRow;                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TransmogDyeDataRow;                                        // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TransmogClass;                                             // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Spoke;                                                     // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPersistenceAppliedAffixEntry>       Affixes;                                                   // 0x0078(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPersistenceTraitEntry>              StoredTraits;                                              // 0x0088(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChallengeLevel;                                            // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            LastSkillRespecTime;                                       // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceInventory
// 0x0030
struct FPersistenceInventory
{
	TArray<struct FPersistenceInventoryItemEntry>      Entries;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	Frontiers_EWeaponSuite                             CurrentWeaponSuite;                                        // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SMD9[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DataVersion;                                               // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2JVR[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.FortInventoryEntry
// 0x0090
struct FFortInventoryEntry
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativePosition;                                          // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Extents;                                                   // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EOrthoRotation                           Rotation;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9A9R[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PropRotationDegrees;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPersistenceInventory                       ItemInventory;                                             // 0x0038(0x0030) (NativeAccessSpecifierPublic)
	TArray<struct FPersistenceTraitEntry>              Traits;                                                    // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                       AssignedPetGuid;                                           // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AssignedPetRow;                                            // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.DefaultFortData
// 0x0010
struct FDefaultFortData
{
	TArray<struct FFortInventoryEntry>                 InventoryEntries;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.FortInventoryResponse
// 0x0020
struct FFortInventoryResponse
{
	TArray<struct FFortInventoryEntry>                 InventoryEntries;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.FortBothInventoriesResponse
// 0x0040
struct FFortBothInventoriesResponse
{
	struct FFortInventoryResponse                      Active;                                                    // 0x0000(0x0020) (NativeAccessSpecifierPublic)
	struct FFortInventoryResponse                      Stash;                                                     // 0x0020(0x0020) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.GeneratedIcon
// 0x0010
struct FGeneratedIcon
{
	class UTexture*                                    Texture;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8VQJ[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.PendingGeneratedIcon
// 0x0120
struct FPendingGeneratedIcon
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K3LX[0x118];                                   // 0x0008(0x0118) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.GradientColorSample
// 0x0018
struct FGradientColorSample
{
	struct FLinearColor                                GradientColor;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ColorPosition;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDirty;                                                  // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WFB1[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.GradientAlphaSample
// 0x0008
struct FGradientAlphaSample
{
	float                                              Alpha;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AlphaPosition;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.GradientColors
// 0x0048
struct FGradientColors
{
	TArray<struct FGradientColorSample>                ColorGradientArray;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGradientAlphaSample>                AlphaGradientArray;                                        // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Gamma;                                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Saturation;                                                // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseGradientTexture;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X2P3[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  GradientTextureOverride;                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          GradientBuiderMatInst;                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          PassThruMatInst;                                           // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.MaterialArray
// 0x0020
struct FMaterialArray
{
	TArray<class UMaterialInterface*>                  MaterialsAssigned;                                         // 0x0000(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UMaterialInstanceDynamic*>            DynamicInstanceMat;                                        // 0x0010(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.MeshMaterialInfo
// 0x0030
struct FMeshMaterialInfo
{
	class UMaterialInterface*                          OriginalMaterial;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    HighlightMaterial;                                         // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    DeactivatedMaterial;                                       // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MeshName;                                                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MatIndex;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EOYT[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.MeshMaterials
// 0x0010
struct FMeshMaterials
{
	TArray<struct FMeshMaterialInfo>                   Materials;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.InteractionFilter
// 0x00F0
struct FInteractionFilter
{
	struct FGameplayTagContainer                       RequireAll;                                                // 0x0000(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequireAny;                                                // 0x0020(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ExcludeAny;                                                // 0x0040(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              RequiredStatusEffects;                                     // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ExcludeStatusEffects;                                      // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>               RequiredStatusEffectGameplayTags;                          // 0x0080(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>               ExcludedStatusEffectGameplayTags;                          // 0x0090(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bSelf;                                                     // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAffectsOwner;                                             // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequireSelectable;                                        // 0x00A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EAllegiance                              Allegiance;                                                // 0x00A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ELifeStatus                              LifeStatus;                                                // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SKJI[0x4B];                                    // 0x00A5(0x004B) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SetBonusTrait
// 0x0020
struct FSetBonusTrait
{
	struct FGameplayTag                                RequiredTag;                                               // 0x0000(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredTagCount;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YNNV[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTraitPair                                  TraitPair;                                                 // 0x0010(0x0010) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.InventoryEntryFortProp
// 0x00A0 (0x00C0 - 0x0020)
struct FInventoryEntryFortProp : public FInventoryEntry
{
	struct FVector                                     RelativePosition;                                          // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RotationDegrees;                                           // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Extents;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CSM5[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTraitPair>                          Traits;                                                    // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTraitPair>                          SavedTraits;                                               // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                       AssignedPetGuid;                                           // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinionTableRowHandle                       AssignedPetRow;                                            // 0x0070(0x0010) (RepSkip, NativeAccessSpecifierPublic)
	struct FPersistenceInventory                       ItemInventory;                                             // 0x0080(0x0030) (RepSkip, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PHI9[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           PropRowIndex;                                              // 0x00B8(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O73D[0x6];                                     // 0x00BA(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SkillAssignedEntry
// 0x000C
struct FSkillAssignedEntry
{
	Frontiers_ESkillSet                                Set;                                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               Slot;                                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TWKR[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RowName;                                                   // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SkillLevelEntry
// 0x000C
struct FSkillLevelEntry
{
	struct FName                                       SkillRowName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistencePetSkills
// 0x0020
struct FPersistencePetSkills
{
	TArray<struct FSkillAssignedEntry>                 Entries;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSkillLevelEntry>                    Levels;                                                    // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistencePetData
// 0x0048
struct FPersistencePetData
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MinionRowName;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PetName;                                                   // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPersistencePetSkills                       Skills;                                                    // 0x0028(0x0020) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.InventoryEntryInbox
// 0x00B8 (0x00D8 - 0x0020)
struct FInventoryEntryInbox : public FInventoryEntry
{
	struct FString                                     RecipientId;                                               // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0030(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     ExpirationTime;                                            // 0x0040(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     Subject;                                                   // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPersistenceInventoryItemEntry>      Items;                                                     // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPersistencePetData>                 pets;                                                      // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortInventoryEntry>                 FortProps;                                                 // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPersistenceTraitEntry>              Traits;                                                    // 0x0090(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCommerceProduct                            Purchase;                                                  // 0x00A0(0x0038) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.UnixNanoTime
// 0x0008
struct FUnixNanoTime
{
	int64_t                                            Value;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.InventoryStatusEffectEntry
// 0x0050 (0x0070 - 0x0020)
struct FInventoryStatusEffectEntry : public FInventoryEntry
{
	class UClass*                                      StatusEffectClass;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Inflictor;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QTSN[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkill*                                      Skill;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExpireTime;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JTP0[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTraitPair>                          InstigatorTraitSnapshot;                                   // 0x0050(0x0010) (ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	TArray<struct FTraitPair>                          BlueprintRelevantInstigatorTraits;                         // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.RepInventoryStatusEffect
// 0x0074 (0x0080 - 0x000C)
struct FRepInventoryStatusEffect : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_U5KV[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInventoryStatusEffectEntry                 Entry;                                                     // 0x0010(0x0070) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.RepStatusEffectArray
// 0x0010 (0x0118 - 0x0108)
struct FRepStatusEffectArray : public FFastArraySerializer
{
	TArray<struct FRepInventoryStatusEffect>           Items;                                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ItemElementalEffect
// 0x0010
struct FItemElementalEffect
{
	struct FName                                       SocketName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleAsset;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ItemAppearanceData
// 0x0030
struct FItemAppearanceData
{
	int                                                PostProcessingStencilValue;                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CUCJ[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ItemClass;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DyeOverride;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAffixData;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CULJ[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemElementalEffect                        AffixEffectData;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.EmberWeaponTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FEmberWeaponTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.ItemWardrobeTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FItemWardrobeTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.RecipeUnitTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FRecipeUnitTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.DyeTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FDyeTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.ItemData
// 0x0298 (0x02B0 - 0x0018)
struct FItemData : public FCraftableTableRowBase
{
	struct FText                                       DisplayName;                                               // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       Description;                                               // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       DescriptionLong;                                           // 0x0048(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       FlavorText;                                                // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       CustomTypeText;                                            // 0x0078(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FEmberWeaponTableRowHandle                  EmberWeaponData;                                           // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FItemTableRowHandle                         OffHandWeaponToEquip;                                      // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bUseAffixWithName;                                         // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WQ6I[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LevelRangeString;                                          // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinLevel;                                                  // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxLevel;                                                  // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_851S[0x10];                                    // 0x00D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           DropWeight;                                                // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GoldValue;                                                 // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemWardrobeTableRowHandle                 ItemWardrobe;                                              // 0x00E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bCanBeDyed;                                                // 0x00F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A8Y8[0x7];                                     // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDyeTableRowHandle                          DyeRow;                                                    // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       GameplayTagContainer;                                      // 0x0110(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AffixAnyTagContainer;                                      // 0x0130(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AffixAllTagContainer;                                      // 0x0150(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       AffixSpawnRowName;                                         // 0x0170(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ItemQuality;                                               // 0x0178(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemSpawnTableRowHandle                    LootContent;                                               // 0x0180(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FName                                       LootContentRecipe;                                         // 0x0190(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRecipeUnitTableRowHandle                   LootContentRecipeUnit;                                     // 0x0198(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTag                                DamageTypeTag;                                             // 0x01A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       SpokeTags;                                                 // 0x01B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       PlayerClassTags;                                           // 0x01D0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ItemSetTag;                                                // 0x01F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AnimSlotPrefix;                                            // 0x01F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AnimSlotSuffix;                                            // 0x0200(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTwoHanded;                                              // 0x0208(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanSell;                                                  // 0x0209(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanDestroy;                                               // 0x020A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeUsed;                                                // 0x020B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBulkBuy;                                               // 0x020C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreLevel;                                              // 0x020D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSaveOnGround;                                             // 0x020E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreSpoke;                                              // 0x020F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreDroppedArea;                                        // 0x0210(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideInLegendaryCollection;                                // 0x0211(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideInTransmogList;                                       // 0x0212(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4BII[0x1];                                     // 0x0213(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttackSpeedIndex;                                          // 0x0214(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsStatStick;                                              // 0x021C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EItemOnGroundPickupAction                PickupAction;                                              // 0x021D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CQ9O[0x2];                                     // 0x021E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       PickUpTraitString;                                         // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxStackSize;                                              // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZXWP[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      IconOverride[0x28];                                        // 0x022C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      UnknownData_EDVG[0x30];                                    // 0x0258(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ItemClass[0x28];                                           // 0x0258(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Frontiers.ItemModifyData
// 0x0000 (0x0178 - 0x0178)
struct FItemModifyData : public FSpawnDataBase
{

};

// ScriptStruct Frontiers.ItemQualityData
// 0x00C8 (0x00E0 - 0x0018)
struct FItemQualityData : public FTLTableRowBase
{
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0018(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ItemOnGroundParticleSystem;                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ItemOnGroundSelectedParticleSystem;                        // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ItemNameColor;                                             // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowElementalEffects;                                     // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F4CI[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                SortIndex;                                                 // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ETLPostProcessFlag                       OcclusionColorIndex;                                       // 0x007C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4EEJ[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PickUpWidgetDuration;                                      // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U46J[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPaperSprite*                                IconBackground;                                            // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperSprite*                                IconBorder;                                                // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               MultiplayerPickUpMessages;                                 // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      MapMarkerComponentClass[0x28];                             // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	float                                              DestroyHoldTime;                                           // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AudioParameterValue;                                       // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5U0I[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ItemSpawnData
// 0x0050 (0x01C8 - 0x0178)
struct FItemSpawnData : public FSpawnDataBase
{
	struct FText                                       QuestRewardText;                                           // 0x0178(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTag                                QuestRewardIconGameplayTag;                                // 0x0190(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequiredPlayerGameplayTags;                                // 0x0198(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FQuestObjectTableRowHandle                  QuestObjectFilter;                                         // 0x01B8(0x0010) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ItemRequest
// 0x00D8
struct FItemRequest
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZMWT[0x30];                                    // 0x0008(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ContextString;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemTableRowHandle                         ItemRow;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8ZTZ[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDyeTableRowHandle                          DyeOverride;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ExtraAffixes;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      LoadedItemActorClass;                                      // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3WLE[0x50];                                    // 0x0088(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ItemWardrobeEntry
// 0x0070 (0x0088 - 0x0018)
struct FItemWardrobeEntry : public FTLTableRowBase
{
	unsigned char                                      UnknownData_EPPG[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemWardrobeTableRowHandle                 ItemWardrobeRow;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTag                                GameplayTag;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       NameOverride;                                              // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FDyeTableRowHandle                          DyeOverride;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      ItemClass[0x28];                                           // 0x0060(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Frontiers.ItemWardrobe
// 0x0018 (0x0030 - 0x0018)
struct FItemWardrobe : public FTLTableRowBase
{
	unsigned char                                      UnknownData_36BW[0x18];                                    // 0x0018(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.DynamicMaterials
// 0x0010
struct FDynamicMaterials
{
	class UMaterialInstanceDynamic*                    InstancedDynMaterial;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      AppliedSkeletalMesh;                                       // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SlumberingActor
// 0x0018
struct FSlumberingActor
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActorComponent*>                     TickingComponents;                                         // 0x0008(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TLStreamingLevelWrapper
// 0x00B0
struct FTLStreamingLevelWrapper
{
	struct FDRLGLevelInstance                          LevelInstance;                                             // 0x0000(0x0068) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSlumberingActor>                    SlumberingActors;                                          // 0x0068(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ECEA[0x38];                                    // 0x0078(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.BlendTexture
// 0x0010
struct FBlendTexture
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Texture;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.LevelRange
// 0x0010
struct FLevelRange
{
	unsigned char                                      UnknownData_APBO[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.LevelRewardData
// 0x00A8 (0x00C0 - 0x0018)
struct FLevelRewardData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_1NWE[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_ELevelRewardType                         Type;                                                      // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YCJX[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParameterName;                                             // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9XGB[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Level;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPaid;                                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFeatured;                                                 // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9VLA[0x1E];                                    // 0x0042(0x001E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRecipeUnitTableRowHandle                   RewardRecipe1;                                             // 0x0060(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FRecipeUnitTableRowHandle                   RewardRecipe2;                                             // 0x0070(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FRecipeUnitTableRowHandle                   RewardRecipe3;                                             // 0x0080(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FRecipeUnitTableRowHandle                   RewardRecipe4;                                             // 0x0090(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FRecipeUnitTableRowHandle                   RewardRecipe5;                                             // 0x00A0(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FRecipeUnitTableRowHandle                   RewardRecipe6;                                             // 0x00B0(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.ClientLevelSequenceRequest
// 0x0040
struct FClientLevelSequenceRequest
{
	class ULevelSequenceWrapper*                       SequenceWrapper;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALevelSequenceActor*                         SequenceActor;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Video[0x28];                                               // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bPlayOverLoadingScreen;                                    // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HNJ0[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ServerLevelSequenceRequest
// 0x0058
struct FServerLevelSequenceRequest
{
	struct FClientLevelSequenceRequest                 ClientRequest;                                             // 0x0000(0x0040) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W9X3[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.LifetimeEventsInfo
// 0x0008
struct FLifetimeEventsInfo
{
	float                                              BeginPlayTime;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OwnerLifespan;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PlayerTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FPlayerTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.AreaTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FAreaTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.LoadingScreenData
// 0x0170 (0x0188 - 0x0018)
struct FLoadingScreenData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_WNMN[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      BackgroundWidget[0x28];                                    // 0x0018(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      ForegroundWidget[0x28];                                    // 0x0048(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FText                                       Text;                                                      // 0x0070(0x0018) (Edit, NativeAccessSpecifierPublic)
	Frontiers_ELoadingScreenPlatform                   Platform;                                                  // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OEMF[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerTableRowHandle>               PlayerClassAny;                                            // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAreaTableRowHandle>                 AreaAny;                                                   // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       SpokeTagsAny;                                              // 0x00B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RegionTagsAny;                                             // 0x00D0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       PrimaryElementTagsAny;                                     // 0x00F0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AreaLoadingScreenTagsAny;                                  // 0x0110(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CompletedQuestsAny;                                        // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               UncompletedQuestsAny;                                      // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               HasQuestsAny;                                              // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CompletedQuestTasksAny;                                    // 0x0160(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               HasQuestTasksAny;                                          // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Weight;                                                    // 0x0180(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X6PD[0x4];                                     // 0x0184(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.PersistenceMinionEntry
// 0x0050
struct FPersistenceMinionEntry
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MinionDataRow;                                             // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MinionName;                                                // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            PetReturnTime;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSellPetItemsOnReturn;                                     // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SGXQ[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             ShoppingList;                                              // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceMinions
// 0x0010
struct FPersistenceMinions
{
	TArray<struct FPersistenceMinionEntry>             Minions;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceCharacterCustomization
// 0x0020
struct FPersistenceCharacterCustomization
{
	struct FName                                       SkinDyeName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HairDyeName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HeadItemName;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HairItemName;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.FrontiersNewCharacterDataField
// 0x0060
struct FFrontiersNewCharacterDataField
{
	struct FName                                       PlayerClassRowName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     char_name;                                                 // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Hardcore;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IDD0[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPersistenceMinions                         Minions;                                                   // 0x0020(0x0010) (NativeAccessSpecifierPublic)
	struct FPersistenceCharacterCustomization          Customization;                                             // 0x0030(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                Difficulty;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EmberWeaponRowName;                                        // 0x0054(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UXKW[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.MailLedgerEntry
// 0x0060
struct FMailLedgerEntry
{
	struct FString                                     MessageId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RecipientId;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExpirationTime;                                            // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Subject;                                                   // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     JsonData;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PetOption
// 0x0038
struct FPetOption
{
	unsigned char                                      UnknownData_5R8G[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0OX6[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ClassOption
// 0x0048
struct FClassOption
{
	unsigned char                                      UnknownData_CGB9[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_32QK[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.MainMenuLevelSequenceMap
// 0x0058
struct FMainMenuLevelSequenceMap
{
	TMap<struct FGameplayTag, class ULevelSequence*>   IntroSequences;                                            // 0x0000(0x0050) (Edit, NativeAccessSpecifierPublic)
	float                                              UIEntranceTimeSeconds;                                     // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UK1S[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CharacterCreateSelection
// 0x00A8
struct FCharacterCreateSelection
{
	unsigned char                                      UnknownData_F2X8[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SkinDyeName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HairDyeName;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemTableRowHandle                         HeadItemRow;                                               // 0x0018(0x0010) (NativeAccessSpecifierPublic)
	struct FItemTableRowHandle                         HairItemRow;                                               // 0x0028(0x0010) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UVSH[0x28];                                    // 0x0038(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMinionTableRowHandle                       Pet;                                                       // 0x0060(0x0010) (NativeAccessSpecifierPublic)
	struct FItemTableRowHandle                         EmberWeapon;                                               // 0x0070(0x0010) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IF8I[0x28];                                    // 0x0080(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.NameSelection
// 0x0020
struct FNameSelection
{
	unsigned char                                      UnknownData_Z3WU[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.MapMarkerIcon
// 0x0018
struct FMapMarkerIcon
{
	struct FVector2D                                   Pivot;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Icon;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                                     LargeIcon;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.MapMarker
// 0x0048
struct FMapMarker
{
	bool                                               bIsStatic;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FrontiersUI_EMapMarkerType                         Type;                                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J107[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMapMarkerIcon                              CustomIcon;                                                // 0x0008(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       CustomText;                                                // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bLocalPlayerOnly;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowPersistentLabel;                                      // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C9PF[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AreaSize;                                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YAJI[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.MapMarkerRecord
// 0x0098
struct FMapMarkerRecord
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       AreaGuid;                                                  // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N3X8[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMapMarker                                  MarkerData;                                                // 0x0020(0x0048) (NativeAccessSpecifierPublic)
	struct FText                                       CachedText;                                                // 0x0068(0x0018) (NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        AreaMarker;                                                // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DCPU[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.LevelInstanceArray
// 0x0010
struct FLevelInstanceArray
{
	TArray<struct FDRLGLevelInstance>                  Array;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.MapWorksData
// 0x0370 (0x0388 - 0x0018)
struct FMapWorksData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_7X56[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       AffixText;                                                 // 0x0020(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       AffixTextDescription;                                      // 0x0038(0x0018) (Edit, NativeAccessSpecifierPublic)
	bool                                               bRequiresAreas;                                            // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMapWorksDataType                        RowType;                                                   // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_28LI[0x2];                                     // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NoPickWeight;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMapWorksEntryType                       EntryType1;                                                // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_US6W[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry1;                                                    // 0x0060(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EntryTags1;                                                // 0x0070(0x0020) (Edit, NativeAccessSpecifierPublic)
	int                                                WeightOrCount1;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_42MW[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RequireQuest1;                                             // 0x0098(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMapWorksEntryType                       EntryType2;                                                // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PA8H[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry2;                                                    // 0x00B0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EntryTags2;                                                // 0x00C0(0x0020) (Edit, NativeAccessSpecifierPublic)
	int                                                WeightOrCount2;                                            // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_43OJ[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RequireQuest2;                                             // 0x00E8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMapWorksEntryType                       EntryType3;                                                // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FPZ2[0x7];                                     // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry3;                                                    // 0x0100(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EntryTags3;                                                // 0x0110(0x0020) (Edit, NativeAccessSpecifierPublic)
	int                                                WeightOrCount3;                                            // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LLXH[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RequireQuest3;                                             // 0x0138(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMapWorksEntryType                       EntryType4;                                                // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0R9Y[0x7];                                     // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry4;                                                    // 0x0150(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EntryTags4;                                                // 0x0160(0x0020) (Edit, NativeAccessSpecifierPublic)
	int                                                WeightOrCount4;                                            // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GHF8[0x4];                                     // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RequireQuest4;                                             // 0x0188(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMapWorksEntryType                       EntryType5;                                                // 0x0198(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UWBN[0x7];                                     // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry5;                                                    // 0x01A0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EntryTags5;                                                // 0x01B0(0x0020) (Edit, NativeAccessSpecifierPublic)
	int                                                WeightOrCount5;                                            // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8WJD[0x4];                                     // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RequireQuest5;                                             // 0x01D8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMapWorksEntryType                       EntryType6;                                                // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N6WZ[0x7];                                     // 0x01E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry6;                                                    // 0x01F0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EntryTags6;                                                // 0x0200(0x0020) (Edit, NativeAccessSpecifierPublic)
	int                                                WeightOrCount6;                                            // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AJ0E[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RequireQuest6;                                             // 0x0228(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMapWorksEntryType                       EntryType7;                                                // 0x0238(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FVPO[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry7;                                                    // 0x0240(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EntryTags7;                                                // 0x0250(0x0020) (Edit, NativeAccessSpecifierPublic)
	int                                                WeightOrCount7;                                            // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z7GQ[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RequireQuest7;                                             // 0x0278(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMapWorksEntryType                       EntryType8;                                                // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_15PV[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Entry8;                                                    // 0x0290(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EntryTags8;                                                // 0x02A0(0x0020) (Edit, NativeAccessSpecifierPublic)
	int                                                WeightOrCount8;                                            // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q20B[0x4];                                     // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RequireQuest8;                                             // 0x02C8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DataCurves;                                                // 0x02D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Weight;                                                    // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z1SJ[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       OwnedGameplayTags;                                         // 0x02E8(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       DungeonRequireAllTags;                                     // 0x0308(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       DungeonRequireAnyTags;                                     // 0x0328(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       DungeonExcludeAnyTags;                                     // 0x0348(0x0020) (Edit, NativeAccessSpecifierPublic)
	TArray<class UMapWorksEntryBase*>                  Entries;                                                   // 0x0368(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XSMJ[0x10];                                    // 0x0378(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.AttachMeshInfo
// 0x0030
struct FAttachMeshInfo
{
	class UStaticMesh*                                 Mesh;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PositionOffset;                                            // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAttachToNearestBone;                                      // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LZ7L[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Duration;                                                  // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CF3I[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.LODAutomationTargetSetting
// 0x0028
struct FLODAutomationTargetSetting
{
	struct FString                                     DevNotes;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             MeshNameStrings;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USkeletalMeshLODSettings*                    LODSettingsFile;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.MeshShellParameters
// 0x0030
struct FMeshShellParameters
{
	class UMaterialInstance*                           MaterialOverride;                                          // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnDuplicates;                                          // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9L1H[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DuplicateInterstice;                                       // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DuplicateDuration;                                         // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FadeOverLifetime;                                          // 0x0014(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ScaleOverLifetime;                                         // 0x0015(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q8LO[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ShellScaleOffsetStart;                                     // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShellScaleOffsetEnd;                                       // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InflateOverLifetime;                                       // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VI5M[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ShellInflateOffsetStart;                                   // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShellInflateOffsetEnd;                                     // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WMPB[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ActorMetrics
// 0x0018
struct FActorMetrics
{
	struct FName                                       SourceName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceType;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceGUID;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SkillsTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FSkillsTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.MinionData
// 0x01D8 (0x01F0 - 0x0018)
struct FMinionData : public FCraftableTableRowBase
{
	unsigned char                                      UnknownData_TAID[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0020(0x0018) (Edit, NativeAccessSpecifierPublic)
	bool                                               bSave;                                                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartingPet;                                              // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreSpawnCollision;                                     // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GA2R[0x1];                                     // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     MinionOffset;                                              // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinionScaleMultiplier;                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PES9[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Description;                                               // 0x0050(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FSkillsTableRowHandle                       DefaultSkill;                                              // 0x0068(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      MinionClass[0x28];                                         // 0x0078(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      CharacterCreateMinionClass[0x28];                          // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FDyeTableRowHandle                          ClosestDyeColor;                                           // 0x00C8(0x0010) (Edit, NativeAccessSpecifierPublic)
	bool                                               bIsFlying;                                                 // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AN4U[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      CharacterSelectIdle[0x28];                                 // 0x00D9(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              Hitpoints;                                                 // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifetimeSeconds;                                           // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UOV7[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       QualityTags;                                               // 0x0118(0x0020) (Edit, NativeAccessSpecifierPublic)
	uint32_t                                           DropWeight;                                                // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1CAI[0x24];                                    // 0x013C(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0160(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTag                                MinionTypeTag;                                             // 0x0180(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AggroRadius;                                               // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MinionGameplayTags;                                        // 0x018C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       MinionTypeGameplayTag;                                     // 0x0194(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TRE2[0x4];                                     // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TraitString1;                                              // 0x01A0(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     TraitString2;                                              // 0x01B0(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     TraitString3;                                              // 0x01C0(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     TraitString4;                                              // 0x01D0(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     TraitString5;                                              // 0x01E0(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.MinionSpawnData
// 0x0000 (0x0178 - 0x0178)
struct FMinionSpawnData : public FSpawnDataBase
{

};

// ScriptStruct Frontiers.FireMissilesData
// 0x0070
struct FFireMissilesData
{
	class UClass*                                      MissileClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     RandomOffset;                                              // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForwardOffset;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTurnOffsetTowardsTarget;                                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QHD6[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Count;                                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCluster;                                                  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YSHI[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Spread;                                                    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistance;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInFrontOnly;                                              // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoTrajectory;                                           // 0x0045(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEvenDistribution;                                         // 0x0046(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnAtTargetWithOffset;                                  // 0x0047(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTargetOffsetHeight;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VYZR[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              ActorsToIgnore;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bUseOffsetAsSpawnLocation;                                 // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShootTowardActorFacing;                                   // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9AUZ[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SkillInstanceId;                                           // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMissileInstanceCollisionSettings        InstanceCollisionSettings;                                 // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_59K2[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.MonsterAffixData
// 0x0108 (0x0120 - 0x0018)
struct FMonsterAffixData : public FTLTableRowBase
{
	unsigned char                                      StatusEffect[0x28];                                        // 0x0018(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	int                                                Weight;                                                    // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumMonsterLevel;                                       // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumMonsterLevel;                                       // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AreaApplyPercent;                                          // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KKWQ[0x50];                                    // 0x0050(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       RequireSpokeTags;                                          // 0x00A0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       RequireAny;                                                // 0x00C0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       RequireAll;                                                // 0x00E0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       ExcludeAny;                                                // 0x0100(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.MonsterData
// 0x0248 (0x0260 - 0x0018)
struct FMonsterData : public FTLTableRowBase
{
	unsigned char                                      MonsterClass[0x28];                                        // 0x0018(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FName                                       MonsterGroup;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0048(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     LevelRangeString;                                          // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     ChampionLevelRangeString;                                  // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HitpointPercent;                                           // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DamagePercent;                                             // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_51AJ[0x20];                                    // 0x0088(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           PickWeight;                                                // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ItemSpawn;                                                 // 0x00AC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChampionScaleMultiplier;                                   // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChampionDamage;                                            // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChampionSpeedBonusPercent;                                 // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChampionNameSpawnRow;                                      // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChampionPackNameSpawnRow;                                  // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChampionIgnoreMinionsChance;                               // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RecentDamageDecayRate;                                     // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GetHitThreshold;                                           // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GetHitCooldown;                                            // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GetHitChance;                                              // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GetHitChanceMelee;                                         // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AggroRadius;                                               // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldTether;                                             // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S0Q5[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Drama;                                                     // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AudioDrama;                                                // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMonsterAudioCategory                    AudioCategory;                                             // 0x00F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZR84[0x7];                                     // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TraitString1;                                              // 0x0100(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TraitString2;                                              // 0x0110(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TraitString3;                                              // 0x0120(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       MonsterTags;                                               // 0x0130(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ItemSpawnGameplayTagFilter;                                // 0x0150(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ChampionItemSpawnGameplayTagFilter;                        // 0x0170(0x0020) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SKGM[0x8];                                     // 0x0190(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExperiencePercent;                                         // 0x0198(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       DamageElement;                                             // 0x019C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ScaleMultiplier;                                           // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      PackSizeSmall;                                             // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      PackSizeMedium;                                            // 0x01A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      PackSizeLarge;                                             // 0x01AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      PackSizeExtraLarge;                                        // 0x01AB(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Defense;                                                   // 0x01AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefensePhysical;                                           // 0x01B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefenseWater;                                              // 0x01B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefenseFire;                                               // 0x01B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefenseCold;                                               // 0x01BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefensePoison;                                             // 0x01C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefenseElectric;                                           // 0x01C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Skill00Cooldown;                                           // 0x01C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Skill00DamageFactor;                                       // 0x01CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Skill01Cooldown;                                           // 0x01D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Skill01DamageFactor;                                       // 0x01D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Skill02Cooldown;                                           // 0x01D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Skill02DamageFactor;                                       // 0x01DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Skill03Cooldown;                                           // 0x01E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Skill03DamageFactor;                                       // 0x01E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Skill04Cooldown;                                           // 0x01E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Skill04DamageFactor;                                       // 0x01EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Skill05Cooldown;                                           // 0x01F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Skill05DamageFactor;                                       // 0x01F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSkill00Cooldown;                                      // 0x01F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSkill00DamageFactor;                                  // 0x01FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSkill01Cooldown;                                      // 0x0200(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSkill01DamageFactor;                                  // 0x0204(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSkill02Cooldown;                                      // 0x0208(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSkill02DamageFactor;                                  // 0x020C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSkill03Cooldown;                                      // 0x0210(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSkill03DamageFactor;                                  // 0x0214(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSkill04Cooldown;                                      // 0x0218(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSkill04DamageFactor;                                  // 0x021C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSkill05Cooldown;                                      // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSkill05DamageFactor;                                  // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePlayerCount;                                           // 0x0228(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CM9H[0x7];                                     // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       MonsterDescription;                                        // 0x0230(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFMODBankReference                          Bank;                                                      // 0x0248(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.MonsterManagerPerSpawnerData
// 0x0028
struct FMonsterManagerPerSpawnerData
{
	unsigned char                                      UnknownData_TSZW[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.MonsterSpawnData
// 0x0000 (0x0178 - 0x0178)
struct FMonsterSpawnData : public FSpawnDataBase
{

};

// ScriptStruct Frontiers.MonsterSpawnRequest
// 0x0048
struct FMonsterSpawnRequest
{
	unsigned char                                      UnknownData_RHNM[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RowName;                                                   // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMonsterSpawnRequestType                 Type;                                                      // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMonsterSpawnType                        MonsterSpawnType;                                          // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z5EM[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               AffixNames;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AcceptanceRadius;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreSpawnCollision;                                     // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPawnIsOwner;                                              // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               SpawnSkillSlot;                                            // 0x0036(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z8ZD[0x1];                                     // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              StatusEffects;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.NameSpawnData
// 0x0000 (0x0178 - 0x0178)
struct FNameSpawnData : public FSpawnDataBase
{

};

// ScriptStruct Frontiers.NarratorQuipEntry
// 0x0030
struct FNarratorQuipEntry
{
	Frontiers_ENarratorQuip                            Quip;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PC96[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         QuipEvent;                                                 // 0x0008(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODLocalizedEventAudioTableEntry          AudioTableEntry;                                           // 0x0020(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.NarratorQuipGroup
// 0x0030
struct FNarratorQuipGroup
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Cooldown;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDelay;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ENarratorQuipDelayBehaviorNoInterrupt    WhenLoadingScreenIsShowing;                                // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ENarratorQuipDelayBehaviorNoInterrupt    WhenSequenceOrCinematicIsPlaying;                          // 0x0011(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ENarratorQuipDelayBehavior               WhenLoreLineIsPlaying;                                     // 0x0012(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ENarratorQuipDelayBehavior               WhenNarratorQuipIsPlaying;                                 // 0x0013(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JQ0R[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNarratorQuipEntry>                  Quips;                                                     // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NX8W[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ActorPool
// 0x0018
struct FActorPool
{
	TArray<class AActor*>                              Actors;                                                    // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KS0A[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.OtherPlayerContext
// 0x0088
struct FOtherPlayerContext
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AccountNickname;                                           // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       CharacterName;                                             // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ClassTag;                                                  // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EPlayerGender                            Gender;                                                    // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHardcore;                                                 // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_URUA[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentDifficulty;                                         // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCurrentlyOnline;                                        // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ETLPlatform                              HostPlatform;                                              // 0x0049(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RQ43[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlatformAccountId;                                         // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_756W[0x28];                                    // 0x0060(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.TLSessionUserData
// 0x0020
struct FTLSessionUserData
{
	struct FString                                     ReferralPlatformAccountName;                               // 0x0000(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     ReferralPlatformAccountId;                                 // 0x0010(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.JoinSessionResultEvent
// 0x0028
struct FJoinSessionResultEvent
{
	struct FTLSessionUserData                          SessionToJoin;                                             // 0x0000(0x0020) (NativeAccessSpecifierPublic)
	Frontiers_EPartyAllowedResult                      Result;                                                    // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E6HO[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.PartyMemberMetadata
// 0x00C0
struct FPartyMemberMetadata
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformAccountId;                                         // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ETLPlatform                              HostPlatform;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HAAI[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       CharacterName;                                             // 0x0038(0x0018) (NativeAccessSpecifierPublic)
	struct FString                                     ClassTag;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EPlayerGender                            Gender;                                                    // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NFHE[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrentArea;                                               // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentHealthPercent;                                      // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaRandomNameSeed;                                        // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAreaIsMapworks;                                           // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsingMicrophone;                                          // 0x0081(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasUnlockedFort;                                          // 0x0082(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanUseUGC;                                                // 0x0083(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHardcore;                                                 // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X3EO[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Difficulty;                                                // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaChallengeLevel;                                        // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaDungeonSeed;                                           // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L89R[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AreaDungeonQuality;                                        // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDead;                                                   // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EO0L[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             BlockedPartyMemberTLAccountIds;                            // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.JoinSessionEvent
// 0x00E0
struct FJoinSessionEvent
{
	struct FPartyMemberMetadata                        JoiningPlayer;                                             // 0x0000(0x00C0) (NativeAccessSpecifierPublic)
	struct FTLSessionUserData                          SessionToJoin;                                             // 0x00C0(0x0020) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PartySwitchboardInvite
// 0x00D0
struct FPartySwitchboardInvite
{
	int                                                PartySize;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H354[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPartyMemberMetadata                        MetaData;                                                  // 0x0008(0x00C0) (NativeAccessSpecifierPublic)
	bool                                               bAutoAccept;                                               // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A7F5[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.PartyInstanceResetConfirmation
// 0x0010
struct FPartyInstanceResetConfirmation
{
	TArray<struct FPartyMemberMetadata>                KickedPartyMemberMetadata;                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PartyInstanceResetRequest
// 0x00D0
struct FPartyInstanceResetRequest
{
	struct FPartyMemberMetadata                        InstigatorMetadata;                                        // 0x0000(0x00C0) (NativeAccessSpecifierPublic)
	struct FString                                     TravelToArea;                                              // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ServicePartyMember
// 0x00E0
struct FServicePartyMember
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Data;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPartyMemberMetadata                        MetaData;                                                  // 0x0020(0x00C0) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PartyResponse
// 0x0030
struct FPartyResponse
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Leader;                                                    // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FServicePartyMember>                 Members;                                                   // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PartyFailedResponse
// 0x0040
struct FPartyFailedResponse
{
	struct FString                                     ErrorCode;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPartyResponse                              Party;                                                     // 0x0010(0x0030) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.FrontiersAccountFlags
// 0x0001
struct FFrontiersAccountFlags
{
	bool                                               admin;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.AccountPrivileges
// 0x0003
struct FAccountPrivileges
{
	bool                                               can_communiate;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               can_use_ugc;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               can_cross_play;                                            // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.FrontiersAccount
// 0x0090
struct FFrontiersAccount
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     nickname;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     platform_id;                                               // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     platform_environment;                                      // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     platform_name;                                             // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     arc_id;                                                    // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     email;                                                     // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isEmailValidated;                                          // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N0AG[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     shadowArcUserId;                                           // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrontiersAccountFlags                      access_flags;                                              // 0x0088(0x0001) (NoDestructor, NativeAccessSpecifierPublic)
	struct FAccountPrivileges                          privileges;                                                // 0x0089(0x0003) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CS20[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.FrontiersCharacterLite
// 0x0090
struct FFrontiersCharacterLite
{
	struct FString                                     char_id;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PlayerClassRowName;                                        // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPersistenceInventory                       WardrobeInventory;                                         // 0x0018(0x0030) (NativeAccessSpecifierPublic)
	struct FPersistenceMinions                         Minions;                                                   // 0x0048(0x0010) (NativeAccessSpecifierPublic)
	struct FPersistenceCharacterCustomization          Customization;                                             // 0x0058(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	int64_t                                            LastPlayed;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPersistenceTraitEntry>              Traits;                                                    // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.FrontiersCharacter
// 0x0128
struct FFrontiersCharacter
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     account_id;                                                // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrontiersCharacterLite                     character_lite;                                            // 0x0030(0x0090) (NativeAccessSpecifierPublic)
	struct FFrontiersNewCharacterDataField             Data;                                                      // 0x00C0(0x0060) (NativeAccessSpecifierPublic)
	bool                                               bOffline;                                                  // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCharacterVersionValid;                                    // 0x0121(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2SLP[0x6];                                     // 0x0122(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.FrontiersSession
// 0x0238
struct FFrontiersSession
{
	struct FFrontiersAccount                           account;                                                   // 0x0000(0x0090) (NativeAccessSpecifierPublic)
	struct FString                                     session_id;                                                // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     client_platform;                                           // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrontiersCharacter                         Character;                                                 // 0x00C0(0x0128) (NativeAccessSpecifierPublic)
	TArray<struct FFrontiersCharacter>                 characters;                                                // 0x01E8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        dlc;                                                       // 0x01F8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D10C[0x30];                                    // 0x0208(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.PersistenceCraftingItemCost
// 0x00B0
struct FPersistenceCraftingItemCost
{
	int                                                CostIndex;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D44A[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPersistenceInventoryItemEntry              Item;                                                      // 0x0008(0x00A8) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceCraftingInputs
// 0x0018
struct FPersistenceCraftingInputs
{
	TArray<struct FPersistenceCraftingItemCost>        ItemCosts;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       SpokeRowName;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceCraftingEntry
// 0x0048
struct FPersistenceCraftingEntry
{
	uint64_t                                           StartTime;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           FinishTime;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RecipeName;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPersistenceCraftingInputs                  Inputs;                                                    // 0x0018(0x0018) (NativeAccessSpecifierPublic)
	struct FName                                       QueueName;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     JobId;                                                     // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceCraftingData
// 0x0020
struct FPersistenceCraftingData
{
	TArray<struct FPersistenceCraftingEntry>           InProgress;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SeenUnlockableRecipeNames;                                 // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceContractEntryData
// 0x0014
struct FPersistenceContractEntryData
{
	struct FName                                       ContractName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxClaimedFreeLevel;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxClaimedPaidLevel;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastSeenContractLevel;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceContractData
// 0x0018
struct FPersistenceContractData
{
	TArray<struct FPersistenceContractEntryData>       ContractStates;                                            // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       CurrentContract;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceInboxData
// 0x0020
struct FPersistenceInboxData
{
	TArray<struct FInventoryEntryInbox>                Entries;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     LastSyncedEntryTime;                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceSocialData
// 0x0010
struct FPersistenceSocialData
{
	TArray<struct FString>                             BlockedFortTLAccountIds;                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceAccountwideData
// 0x00A8
struct FPersistenceAccountwideData
{
	struct FPersistenceCraftingData                    Crafting;                                                  // 0x0000(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FPersistenceTraitEntry>              Traits;                                                    // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPersistenceContractData                    Contracts;                                                 // 0x0030(0x0018) (NativeAccessSpecifierPublic)
	TArray<struct FPersistencePetData>                 pets;                                                      // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               GameplayFortProps;                                         // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPersistenceInboxData                       Inbox;                                                     // 0x0068(0x0020) (NativeAccessSpecifierPublic)
	struct FPersistenceSocialData                      Social;                                                    // 0x0088(0x0010) (NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.LoginRequestResponse
// 0x02F0
struct FLoginRequestResponse
{
	struct FFrontiersSession                           session;                                                   // 0x0000(0x0238) (NativeAccessSpecifierPublic)
	struct FPersistenceAccountwideData                 account_gamedata;                                          // 0x0238(0x00A8) (NativeAccessSpecifierPublic)
	TArray<struct FFrontiersCharacter>                 characters;                                                // 0x02E0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceSkills
// 0x0028
struct FPersistenceSkills
{
	TArray<struct FSkillAssignedEntry>                 Entries;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSkillLevelEntry>                    Levels;                                                    // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int64_t                                            LastSkillRespecUnixSeconds;                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TravelParams
// 0x0040
struct FTravelParams
{
	struct FName                                       AreaDataName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AccountId;                                                 // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ZoneSessionId;                                             // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequestedFortAccountId;                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTravelToPartyMember;                                      // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_765V[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.DungeonParams
// 0x0018
struct FDungeonParams
{
	int                                                ChallengeLevel;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Quality;                                                   // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DungeonSeed;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           OwnerAccountIdHash;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.MapWorksParams
// 0x00A8
struct FMapWorksParams
{
	float                                              Level;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SpokeTag;                                                  // 0x0004(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JV1M[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTravelParams                               OriginArea;                                                // 0x0010(0x0040) (NativeAccessSpecifierPublic)
	TArray<struct FName>                               MapWorksDataRows;                                          // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MapWorksRandomSeed;                                        // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IT7J[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MapWorksGuid;                                              // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDungeonParams                              DungeonParams;                                             // 0x0078(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AreaGroupNameOverride;                                     // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOpen;                                                   // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5Y6M[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AActor>                       Activator;                                                 // 0x009C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3XPI[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.PersistenceTravelData
// 0x00D0
struct FPersistenceTravelData
{
	TArray<struct FName>                               WaypointAreaDataNames;                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SeenAreaNames;                                             // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               CompletedTutorial;                                         // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5CQO[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ContentVersion;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMapWorksParams                             SavedMapworksParams;                                       // 0x0028(0x00A8) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SkillCooldownPersistenceData
// 0x000C
struct FSkillCooldownPersistenceData
{
	struct FName                                       SkillRowName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownSecondsRemaining;                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceItemOnGround
// 0x0058
struct FPersistenceItemOnGround
{
	struct FName                                       RowName;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LAIR[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               ExtraAffixes;                                              // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnOrigin;                                               // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DyeDataRowName;                                            // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ActorLocation;                                             // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActorMetrics                               ItemSourceMetrics;                                         // 0x0040(0x0018) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceItemsOnGround
// 0x0030
struct FPersistenceItemsOnGround
{
	struct FString                                     Zid;                                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AreaGroupName;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           Timestamp;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPersistenceItemOnGround>            Items;                                                     // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.StatusEffectPersistenceData
// 0x0020
struct FStatusEffectPersistenceData
{
	struct FName                                       StatusEffectRowName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SecondsRemaining;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LFBD[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPersistenceTraitEntry>              InstigatorTraitSnapshot;                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.DungeonTransientPersistenceData
// 0x0028
struct FDungeonTransientPersistenceData
{
	int                                                DungeonSeed;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingChallengeLevel;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PlayingQuality;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EDungeonPlayingStatus                    PlayingStatus;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3ADR[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           PlayingAccountIdHash;                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangedProgress;                                          // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NP0O[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.PersistenceTransientData
// 0x00B8
struct FPersistenceTransientData
{
	struct FName                                       OwnPortalAreaDataName;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OwnPortalSpawnLocationName;                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OwnPortalZoneId;                                           // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OwnPortalZoneSessionId;                                    // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PortalReturnAreaDataName;                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PortalReturnSpawnLocationName;                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PortalReturnOwnerName;                                     // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TravelDestinationLocationName;                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EmberWeaponChargePercent;                                  // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EmberWeaponDrainPercent;                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSkillCooldownPersistenceData>       SkillCooldowns;                                            // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPersistenceItemsOnGround>           ItemsOnGround;                                             // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStatusEffectPersistenceData>        StatusEffects;                                             // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDungeonTransientPersistenceData            Dungeon;                                                   // 0x0090(0x0028) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceServerRequest
// 0x0450
struct FPersistenceServerRequest
{
	struct FName                                       PlayerClassRowName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPersistenceTraitEntry>              Traits;                                                    // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPersistenceInventory>               WardrobeInventories;                                       // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                WardrobeIndex;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SMKU[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPersistenceInventory                       WardrobeInventory;                                         // 0x0030(0x0030) (NativeAccessSpecifierPublic)
	struct FPersistenceInventory                       ItemInventory;                                             // 0x0060(0x0030) (NativeAccessSpecifierPublic)
	struct FPersistenceInventory                       ConsumableInventory;                                       // 0x0090(0x0030) (NativeAccessSpecifierPublic)
	struct FPersistenceInventory                       PotionInventory;                                           // 0x00C0(0x0030) (NativeAccessSpecifierPublic)
	struct FPersistenceInventory                       PetInventory;                                              // 0x00F0(0x0030) (NativeAccessSpecifierPublic)
	struct FPersistenceInventory                       QuestInventory;                                            // 0x0120(0x0030) (NativeAccessSpecifierPublic)
	struct FPersistenceInventory                       EquippedLegendaryAffixInventory;                           // 0x0150(0x0030) (NativeAccessSpecifierPublic)
	struct FPersistenceInventory                       BuybackInventory;                                          // 0x0180(0x0030) (NativeAccessSpecifierPublic)
	struct FPersistenceSkills                          Skills;                                                    // 0x01B0(0x0028) (NativeAccessSpecifierPublic)
	struct FPersistenceMinions                         Minions;                                                   // 0x01D8(0x0010) (NativeAccessSpecifierPublic)
	struct FPersistenceCharacterCustomization          Customization;                                             // 0x01E8(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	struct FPersistenceTravelData                      Travel;                                                    // 0x0208(0x00D0) (NativeAccessSpecifierPublic)
	struct FPersistenceAccountwideData                 Accountwide;                                               // 0x02D8(0x00A8) (NativeAccessSpecifierPublic)
	struct FPersistenceTransientData                   Transient;                                                 // 0x0380(0x00B8) (NativeAccessSpecifierPublic)
	struct FName                                       StartingAreaName;                                          // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0440(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PlayerAffixData
// 0x0108 (0x0120 - 0x0018)
struct FPlayerAffixData : public FTLTableRowBase
{
	unsigned char                                      PlayerStatusEffect[0x28];                                  // 0x0018(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      PetStatusEffect[0x28];                                     // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	int                                                Weight;                                                    // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3YM5[0x54];                                    // 0x006C(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       RequireAny;                                                // 0x00C0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       RequireAll;                                                // 0x00E0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       ExcludeAny;                                                // 0x0100(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.ActiveTraitsTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FActiveTraitsTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.PlayerData
// 0x02C8 (0x02E0 - 0x0018)
struct FPlayerData : public FTLTableRowBase
{
	struct FText                                       DisplayName;                                               // 0x0018(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0030(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ClassTag;                                                  // 0x0048(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ItemWardrobeTag;                                           // 0x0050(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ItemAffixTagFilter;                                        // 0x0058(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FActiveTraitsTableRowHandle                 EnergyActiveTrait;                                         // 0x0078(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FFortPropTableRowHandle                     ClassSkillObjectProp;                                      // 0x0088(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       SkillBuildingTags;                                         // 0x0098(0x0020) (Edit, NativeAccessSpecifierPublic)
	float                                              CriticalChance;                                            // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CriticalDamage;                                            // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEnabled;                                                // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_57ME[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               RandomNames;                                               // 0x00C8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      DefaultIcon[0x28];                                         // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FDyeTableRowHandle                          DefaultSkinDye;                                            // 0x0100(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FDyeTableRowHandle                          DefaultHairDye;                                            // 0x0110(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FItemTableRowHandle                         DefaultHead;                                               // 0x0120(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FItemTableRowHandle                         DefaultHair;                                               // 0x0130(0x0010) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FItemTableRowHandle>                 CustomizationHeads;                                        // 0x0140(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FItemTableRowHandle>                 CustomizationHairs;                                        // 0x0150(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   ClassLastSkillRespecTime;                                  // 0x0160(0x0008) (Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   ClassLastForceSkillRespecTime;                             // 0x0168(0x0008) (Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ComboData[0x28];                                           // 0x0170(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FString                                     CharacterAssetPrefix;                                      // 0x0198(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AnimationFolder;                                           // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsTableRowHandle                       DefaultSkill;                                              // 0x01B0(0x0010) (Edit, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               DefaultSkillSlot;                                          // 0x01C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JUHH[0x3];                                     // 0x01C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AudioParameterValue;                                       // 0x01C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V2Q3[0x8];                                     // 0x01C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      PlayerClass[0x28];                                         // 0x01C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      CharacterCreateClass[0x28];                                // 0x01F8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	Frontiers_EPlayerGender                            Gender;                                                    // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_F6Y6[0x3];                                     // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Hitpoints;                                                 // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HarvestingProcValue;                                       // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RecentDamageDecayRate;                                     // 0x022C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GetHitThreshold;                                           // 0x0230(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GetHitCooldown;                                            // 0x0234(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GetHitChance;                                              // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8D66[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TraitString1;                                              // 0x0240(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     TraitString2;                                              // 0x0250(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     TraitString3;                                              // 0x0260(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     TraitString4;                                              // 0x0270(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     TraitString5;                                              // 0x0280(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSkillsTabTableRowHandle                    Tab0;                                                      // 0x0290(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FSkillsTabTableRowHandle                    Tab1;                                                      // 0x02A0(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FSkillsTabTableRowHandle                    Tab2;                                                      // 0x02B0(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FSkillsTabTableRowHandle                    Tab3;                                                      // 0x02C0(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CZLZ[0x10];                                    // 0x02D0(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.PreviewActorData
// 0x0018
struct FPreviewActorData
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemTableRowHandle                         ItemDataRow;                                               // 0x0008(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ProcData
// 0x00C8 (0x00E0 - 0x0018)
struct FProcData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_CKD0[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_EProcTriggerType                         TriggerType;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EProcTriggerEvent                        TriggerEvent;                                              // 0x0021(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y0CT[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       TagFilter;                                                 // 0x0028(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       SkillTagFilter;                                            // 0x0048(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequiredStatusEffectTags;                                  // 0x0068(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       EventNameParam;                                            // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Trait;                                                     // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulateRandomChance;                                    // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M6XN[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TriggerSkill[0x28];                                        // 0x009C(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	float                                              CooldownTimeSeconds;                                       // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMinionsCanTrigger;                                        // 0x00CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z7D4[0x13];                                    // 0x00CD(0x0013) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.QuestPoolEntry
// 0x000C
struct FQuestPoolEntry
{
	struct FName                                       QuestId;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Weight;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.AchievementQuestCompletedMsg
// 0x0008
struct FAchievementQuestCompletedMsg
{
	uint32_t                                           QuestDefinitionId;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowCompletion;                                           // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_57F7[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.AchievementQuestProgressMsg
// 0x0008
struct FAchievementQuestProgressMsg
{
	uint32_t                                           QuestDefinitionId;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProgressPointsComplete;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.QuestInstanceDataCompletedMsg
// 0x0020
struct FQuestInstanceDataCompletedMsg
{
	uint32_t                                           ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B5TR[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            Start;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            Completed;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowCompletion;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OTI0[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.QuestTaskInstanceDataMsg
// 0x0018
struct FQuestTaskInstanceDataMsg
{
	uint32_t                                           ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCompleted;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasActivated;                                             // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowProgress;                                             // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8IZL[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Counter;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ICSG[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   TimeActivated;                                             // 0x0010(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.QuestInstanceDataMsg
// 0x0030
struct FQuestInstanceDataMsg
{
	uint32_t                                           ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9S00[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            Start;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            Completed;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowAdded;                                                // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPinned;                                                   // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TV6W[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FQuestTaskInstanceDataMsg>           Tasks;                                                     // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.QuestTaskInstanceData
// 0x0020
struct FQuestTaskInstanceData
{
	struct FName                                       ID;                                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCompleted;                                              // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasActivated;                                             // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowProgress;                                             // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bQuestTurnInTask;                                          // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Counter;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   TimeActivated;                                             // 0x0010(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                Timer;                                                     // 0x0018(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.QuestObjectData
// 0x0088 (0x00A0 - 0x0018)
struct FQuestObjectData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_BCFL[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CompletableTasks;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               OfferedQuests;                                             // 0x0048(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ActivatingTasks;                                           // 0x0058(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ActivatingCompletedTasks;                                  // 0x0068(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               DeactivatingTasks;                                         // 0x0078(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               DeactivatingCompletedTasks;                                // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bAlwaysActive;                                             // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMapMarkerIsArea;                                          // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EBL0[0x2];                                     // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AreaSize;                                                  // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceQuestTask
// 0x0018
struct FPersistenceQuestTask
{
	struct FName                                       TaskId;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActivated;                                                // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9OE0[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            TimeActivated;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceQuestEntry
// 0x0070
struct FPersistenceQuestEntry
{
	struct FName                                       QuestId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            StartTime;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCompleted;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A4GG[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            CompletedTime;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CompletedCount;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FailedCount;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FailedLast;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPinned;                                                   // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F8LY[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     QuestInstanceId;                                           // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EpochTag;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPersistenceQuestTask>               Progress;                                                  // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     FrontiersDataVersion;                                      // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceQuestFile
// 0x0010
struct FPersistenceQuestFile
{
	TArray<struct FPersistenceQuestEntry>              Quests;                                                    // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SampleFortInventoryEntry_6001
// 0x0080
struct FSampleFortInventoryEntry_6001
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativePosition;                                          // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Extents;                                                   // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Rotation;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PropRotationDegrees;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A1M5[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FJsonObjectWrapper                          ItemInventory;                                             // 0x0048(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  Traits;                                                    // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Coolness;                                                  // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_01KD[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SampleFortInventoryResponse_6001
// 0x0020
struct FSampleFortInventoryResponse_6001
{
	TArray<struct FSampleFortInventoryEntry_6001>      InventoryEntries;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SampleFortInventoryEntry_5001
// 0x0078
struct FSampleFortInventoryEntry_5001
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativePosition;                                          // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Extents;                                                   // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Rotation;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PropRotationDegrees;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5PDO[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FJsonObjectWrapper                          ItemInventory;                                             // 0x0048(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  Traits;                                                    // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SampleFortInventoryResponse_5001
// 0x0020
struct FSampleFortInventoryResponse_5001
{
	TArray<struct FSampleFortInventoryEntry_5001>      InventoryEntries;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SampleQuestInstance_6001
// 0x0078
struct FSampleQuestInstance_6001
{
	struct FName                                       QuestId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            StartTime;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCompleted;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IW70[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            CompletedTime;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CompletedCount;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FailedCount;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FailedLast;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPinned;                                                   // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LFUT[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     QuestInstanceId;                                           // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EpochTag;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  Progress;                                                  // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCool;                                                   // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CGL9[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SampleQuestInstance_5001
// 0x0030
struct FSampleQuestInstance_5001
{
	uint32_t                                           ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WTXK[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            Start;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            Completed;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowCompletion;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPinned;                                                   // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TJC0[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FJsonObjectWrapper>                  Tasks;                                                     // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SampleTrait_5001
// 0x0040
struct FSampleTrait_5001
{
	struct FString                                     TraitName;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PrimarySlot;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SecondarySlot;                                             // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Param;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GFC1[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SampleCharacterCustomization_5001
// 0x0020
struct FSampleCharacterCustomization_5001
{
	struct FName                                       SkinDyeName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HairDyeName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HeadItemName;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HairItemName;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SampleAccountwide_6001
// 0x00A0
struct FSampleAccountwide_6001
{
	struct FJsonObjectWrapper                          Crafting;                                                  // 0x0000(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FSampleTrait_5001>                   Traits;                                                    // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Contracts;                                                 // 0x0030(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  pets;                                                      // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               GameplayFortProps;                                         // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Inbox;                                                     // 0x0070(0x0020) (NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SamplePersistenceServerRequest_6001
// 0x0250
struct FSamplePersistenceServerRequest_6001
{
	struct FName                                       PlayerClassRowName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSampleTrait_5001>                   Traits;                                                    // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     WardrobeInventories;                                       // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WardrobeIndex;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q3TF[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FJsonObjectWrapper                          WardrobeInventory;                                         // 0x0030(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          ItemInventory;                                             // 0x0050(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          ConsumableInventory;                                       // 0x0070(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          PotionInventory;                                           // 0x0090(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          PetInventory;                                              // 0x00B0(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          QuestInventory;                                            // 0x00D0(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Skills;                                                    // 0x00F0(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Minions;                                                   // 0x0110(0x0020) (NativeAccessSpecifierPublic)
	struct FSampleCharacterCustomization_5001          Customization;                                             // 0x0130(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Travel;                                                    // 0x0150(0x0020) (NativeAccessSpecifierPublic)
	struct FSampleAccountwide_6001                     Accountwide;                                               // 0x0170(0x00A0) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Transient;                                                 // 0x0210(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FName>                               StartingAreaNames;                                         // 0x0230(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0240(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SampleAccountwide_5001
// 0x00B0
struct FSampleAccountwide_5001
{
	struct FJsonObjectWrapper                          Crafting;                                                  // 0x0000(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FSampleTrait_5001>                   Traits;                                                    // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Contracts;                                                 // 0x0030(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  pets;                                                      // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               GameplayFortProps;                                         // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Inbox;                                                     // 0x0070(0x0020) (NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Coolness;                                                  // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SamplePersistenceServerRequest_5001
// 0x0258
struct FSamplePersistenceServerRequest_5001
{
	struct FName                                       PlayerClassRowName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSampleTrait_5001>                   Traits;                                                    // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     WardrobeInventories;                                       // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WardrobeIndex;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CERY[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FJsonObjectWrapper                          WardrobeInventory;                                         // 0x0030(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          ItemInventory;                                             // 0x0050(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          ConsumableInventory;                                       // 0x0070(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          PotionInventory;                                           // 0x0090(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          PetInventory;                                              // 0x00B0(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          QuestInventory;                                            // 0x00D0(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Skills;                                                    // 0x00F0(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Minions;                                                   // 0x0110(0x0020) (NativeAccessSpecifierPublic)
	struct FSampleCharacterCustomization_5001          Customization;                                             // 0x0130(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Travel;                                                    // 0x0150(0x0020) (NativeAccessSpecifierPublic)
	struct FSampleAccountwide_5001                     Accountwide;                                               // 0x0170(0x00B0) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Transient;                                                 // 0x0220(0x0020) (NativeAccessSpecifierPublic)
	struct FName                                       StartingAreaName;                                          // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0248(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.FortInventoryEntry_5001
// 0x0068
struct FFortInventoryEntry_5001
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativePosition;                                          // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Extents;                                                   // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EOrthoRotation                           Rotation;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TH1X[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PropRotationDegrees;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          ItemInventory;                                             // 0x0038(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  Traits;                                                    // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.FortInventoryResponse_5001
// 0x0010
struct FFortInventoryResponse_5001
{
	TArray<struct FFortInventoryEntry_5001>            InventoryEntries;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.QuestInstance_5001
// 0x0070
struct FQuestInstance_5001
{
	struct FName                                       QuestId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            StartTime;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCompleted;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AP73[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            CompletedTime;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CompletedCount;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FailedCount;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FailedLast;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPinned;                                                   // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D2RV[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     QuestInstanceId;                                           // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EpochTag;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  Progress;                                                  // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceCraftingData_6001
// 0x0020
struct FPersistenceCraftingData_6001
{
	TArray<struct FJsonObjectWrapper>                  InProgress;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SeenUnlockableRecipeNames;                                 // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.AccountwideData_6001
// 0x00A0
struct FAccountwideData_6001
{
	struct FPersistenceCraftingData_6001               Crafting;                                                  // 0x0000(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  Traits;                                                    // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Contracts;                                                 // 0x0030(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  pets;                                                      // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               GameplayFortProps;                                         // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Inbox;                                                     // 0x0070(0x0020) (NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceCraftingData_5001
// 0x0020
struct FPersistenceCraftingData_5001
{
	TArray<struct FJsonObjectWrapper>                  InProgress;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SeenUnlockableRecipes;                                     // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.AccountwideData_5001
// 0x00A0
struct FAccountwideData_5001
{
	struct FPersistenceCraftingData_5001               Crafting;                                                  // 0x0000(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  Traits;                                                    // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Contracts;                                                 // 0x0030(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  pets;                                                      // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               GameplayFortProps;                                         // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Inbox;                                                     // 0x0070(0x0020) (NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceSkills_6001
// 0x0028
struct FPersistenceSkills_6001
{
	TArray<struct FJsonObjectWrapper>                  Entries;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  Levels;                                                    // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int64_t                                            LastSkillRespecUnixSeconds;                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceServerRequest_6001
// 0x01D0
struct FPersistenceServerRequest_6001
{
	struct FName                                       PlayerClassRowName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  Traits;                                                    // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  WardrobeInventories;                                       // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                WardrobeIndex;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5HTT[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FJsonObjectWrapper                          WardrobeInventory;                                         // 0x0030(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          ItemInventory;                                             // 0x0050(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          ConsumableInventory;                                       // 0x0070(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          PotionInventory;                                           // 0x0090(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          PetInventory;                                              // 0x00B0(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          QuestInventory;                                            // 0x00D0(0x0020) (NativeAccessSpecifierPublic)
	struct FPersistenceSkills_6001                     Skills;                                                    // 0x00F0(0x0028) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Minions;                                                   // 0x0118(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Customization;                                             // 0x0138(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Travel;                                                    // 0x0158(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Accountwide;                                               // 0x0178(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Transient;                                                 // 0x0198(0x0020) (NativeAccessSpecifierPublic)
	struct FName                                       StartingAreaName;                                          // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x01C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceSkills_5001
// 0x0028
struct FPersistenceSkills_5001
{
	TArray<struct FJsonObjectWrapper>                  Entries;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  Levels;                                                    // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int64_t                                            LastSkillRespec;                                           // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PersistenceServerRequest_5001
// 0x01D0
struct FPersistenceServerRequest_5001
{
	struct FName                                       PlayerClassRowName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  Traits;                                                    // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  WardrobeInventories;                                       // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                WardrobeIndex;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WZJJ[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FJsonObjectWrapper                          WardrobeInventory;                                         // 0x0030(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          ItemInventory;                                             // 0x0050(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          ConsumableInventory;                                       // 0x0070(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          PotionInventory;                                           // 0x0090(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          PetInventory;                                              // 0x00B0(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          QuestInventory;                                            // 0x00D0(0x0020) (NativeAccessSpecifierPublic)
	struct FPersistenceSkills_5001                     Skills;                                                    // 0x00F0(0x0028) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Minions;                                                   // 0x0118(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Customization;                                             // 0x0138(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Travel;                                                    // 0x0158(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Accountwide;                                               // 0x0178(0x0020) (NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Transient;                                                 // 0x0198(0x0020) (NativeAccessSpecifierPublic)
	struct FName                                       StartingAreaName;                                          // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x01C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SkillStartParams
// 0x0010
struct FSkillStartParams
{
	Frontiers_ESkillStartType                          SkillStartType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillRootMotionType                     RootMotionType;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillPriorityType                       PriorityType;                                              // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillResult                             OverrideCanSkillStart;                                     // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Param;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTimeOffset;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SkillInstanceId;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SkillHitHistory
// 0x0040
struct FSkillHitHistory
{
	unsigned char                                      SourceType[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      UnknownData_PH22[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TWeakObjectPtr<class AActor>>               HitTargets;                                                // 0x0030(0x0010) (ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SpawnMinionParams
// 0x0030
struct FSpawnMinionParams
{
	bool                                               bSaveCharacterOnSpawn;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YCK5[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MinionName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AcceptableRadius;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChampion;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPawnIsOwner;                                              // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFindRandomPointNearTarget;                                // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               SpawnSkillSlot;                                            // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UTLInventoryContainer>        InventoryContainer;                                        // 0x0024(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YDPE[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SkillRepArrayEntry
// 0x0060
struct FSkillRepArrayEntry
{
	Frontiers_ESkillSet                                Set;                                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               Slot;                                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0GIX[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SkillClass[0x28];                                          // 0x0002(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	Frontiers_ESkillAnimSource                         Animation;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KCGT[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AnimationOverride[0x28];                                   // 0x0031(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Frontiers.SkillsBalanceData
// 0x0010 (0x0028 - 0x0018)
struct FSkillsBalanceData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_5H6Z[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageMultiplier;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IVFN[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SkillData
// 0x0298 (0x02B0 - 0x0018)
struct FSkillData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_KMM3[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SkillClass[0x28];                                          // 0x0018(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FString                                     CharacterTag;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	Frontiers_ESkillAnimSource                         Animation;                                                 // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W6SA[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequenceBase*                           AnimationOverride;                                         // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaximumSkillLevel;                                         // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinimumSkillLevel;                                         // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowSkillLevel;                                           // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TT1T[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0090(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ExclusiveTags;                                             // 0x00B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSkillsTabTableRowHandle                    RequiredSkillTab;                                          // 0x00D0(0x0010) (Edit, NativeAccessSpecifierPublic)
	int                                                RequiredLevelInSkillTab;                                   // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillTraitMode                          TraitMode;                                                 // 0x00E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R189[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       RequiredItemTags;                                          // 0x00E8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     TraitString;                                               // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               PerLevelDisplayTexts;                                      // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FText>                               PerLevelDisplayCategories;                                 // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       TraitCurve1;                                               // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TraitCurve2;                                               // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TraitCurve3;                                               // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TraitCurve4;                                               // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K4SO[0x40];                                    // 0x0158(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Tier1TraitString;                                          // 0x0198(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Tier1DisplayText;                                          // 0x01A8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     Tier2TraitString;                                          // 0x01C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Tier2DisplayText;                                          // 0x01D0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     Tier3TraitString;                                          // 0x01E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Tier3DisplayText;                                          // 0x01F8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bCanNeverBeUnlocked;                                       // 0x0210(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHiddenBehindCheats;                                       // 0x0211(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LQ4A[0x2];                                     // 0x0212(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SkillPanelRow;                                             // 0x0214(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillPanelColumn;                                          // 0x0218(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFactor;                                              // 0x021C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Cooldown;                                                  // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyCost;                                                // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Param1;                                                    // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2MDC[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Param1_DevNote;                                            // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Param2;                                                    // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZL47[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Param2_DevNote;                                            // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Param3;                                                    // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_41UH[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Param3_DevNote;                                            // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                DefaultSkillSet;                                           // 0x0270(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               DefaultSkillSlot;                                          // 0x0271(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZU6X[0x6];                                     // 0x0272(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Icon[0x28];                                                // 0x0272(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TArray<float>                                      SecondaryEnergyCosts;                                      // 0x02A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SkillsTabData
// 0x0140 (0x0158 - 0x0018)
struct FSkillsTabData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_MCZD[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_ESkillSet                                AssignableSkillSet;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z01E[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UPaperSprite*                                Icon;                                                      // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    Background;                                                // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    EmberWeaponHeaderBackground;                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    EmberWeaponIcon;                                           // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       EmberWeaponFlavorText;                                     // 0x0078(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                                UIColor;                                                   // 0x0090(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillTabType                            SkillTabType;                                              // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W1HE[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      DescriptionClass[0x28];                                    // 0x00A1(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      UnknownData_APT3[0x48];                                    // 0x00D0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTagRequireAny;                                     // 0x0118(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       GameplayTagExcludeAny;                                     // 0x0138(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.SpokeData
// 0x0078 (0x0090 - 0x0018)
struct FSpokeData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_TCMC[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SpokeName;                                                 // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTag                                GameplayTag;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                PrimaryMonsterGameplayTag;                                 // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                PrimaryElementGameplayTag;                                 // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         TownAreaRow;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      TownAreaLevel[0x28];                                       // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bHiddenBehindCheats;                                       // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K6A1[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.StatusEffectData
// 0x0038 (0x0050 - 0x0018)
struct FStatusEffectData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_LL7Q[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      StatusEffectClass[0x28];                                   // 0x0018(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	bool                                               bPersistAcrossTravel;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CFP5[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ServerPublisherPlayer
// 0x0070
struct FServerPublisherPlayer
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformNickname;                                          // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformAccountId;                                         // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterID;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterName;                                             // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PartyId;                                                   // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SwitchboardUpdateInfo
// 0x0030
struct FSwitchboardUpdateInfo
{
	struct FString                                     ZoneId;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FServerPublisherPlayer>              Players;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     Platform;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SwitchboardEvent
// 0x00A8
struct FSwitchboardEvent
{
	struct FString                                     EventType;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ForCharacterId;                                            // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ForAccountId;                                              // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ForPlatformNickname;                                       // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ForPlatformAccountId;                                      // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ForZoneId;                                                 // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ForPartyId;                                                // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ForSessionId;                                              // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForEveryone;                                               // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TB9F[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EventJsonData;                                             // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SwitchboardEventMessageBody
// 0x0020
struct FSwitchboardEventMessageBody
{
	struct FString                                     Language;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SwitchboardEventMessageDetails
// 0x0028
struct FSwitchboardEventMessageDetails
{
	struct FString                                     MessageType;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowInChat;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2WAV[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Duration;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSwitchboardEventMessageBody>        Message;                                                   // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TermsOfServiceStaticData
// 0x0018
struct FTermsOfServiceStaticData
{
	uint32_t                                           Version;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2DS3[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Content;                                                   // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TermsTarget
// 0x0070 (0x0088 - 0x0018)
struct FTermsTarget : public FTLTableRowBase
{
	unsigned char                                      UnknownData_EYU7[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<Frontiers_ETLPlatform>                      Platforms;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FString                                     LocaleString;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ETLTermsType                             TermsType;                                                 // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ANL8[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LanguageString;                                            // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TermsAddress;                                              // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H0AA[0x20];                                    // 0x0068(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.FuseSourceData
// 0x0020
struct FFuseSourceData
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZD7A[0x18];                                    // 0x0008(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.FuserRect
// 0x0014
struct FFuserRect
{
	unsigned char                                      UnknownData_6VSV[0x14];                                    // 0x0000(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.TimeOfDayMonsterManagerSettings
// 0x0010
struct FTimeOfDayMonsterManagerSettings
{
	float                                              PeakDramaMultiplier;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PeakDramaAdded;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RelaxStateLengthMultiplier;                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RelaxStateLengthAdded;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.LightAccentSetting
// 0x0020
struct FLightAccentSetting
{
	struct FLinearColor                                Tint;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Notes;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.BlendSpaceList
// 0x0010
struct FBlendSpaceList
{
	unsigned char                                      BlendSpaces[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty

};

// ScriptStruct Frontiers.InventoryBasedAnimGroup
// 0x0048
struct FInventoryBasedAnimGroup
{
	TArray<struct FGameplayTagContainer>               RequireAnyGameplayTags;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      IdleMoveBlendSpace[0x28];                                  // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      UnknownData_LQNQ[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SkillAnimationData
// 0x0020
struct FSkillAnimationData
{
	class USkill*                                      Skill;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DMXD[0x18];                                    // 0x0008(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.InventoryCombo
// 0x001C
struct FInventoryCombo
{
	unsigned char                                      UnknownData_VYD2[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.TLAnimInstanceProxy
// 0x0000 (0x0760 - 0x0760)
struct FTLAnimInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct Frontiers.TLAnimNode_Slot
// 0x0008 (0x0050 - 0x0048)
struct FTLAnimNode_Slot : public FAnimNode_Slot
{
	struct FName                                       SlotNameOverride;                                          // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.RunScript
// 0x0050
struct FFrontiers_FRunScript
{
	unsigned char                                      UnknownData_HTCM[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.TraitDisplayTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FTraitDisplayTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.StatusEffectTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FStatusEffectTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.NameSpawnTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FNameSpawnTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.ItemQualityTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FItemQualityTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.FoliageSoundTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FFoliageSoundTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.DungeonChallengeTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FDungeonChallengeTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.DifficultyTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FDifficultyTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.CinematicTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FCinematicTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.DecalCurveBase
// 0x000C
struct FDecalCurveBase
{
	float                                              LoopStart;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoopEnd;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNormalizeToLifespan;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIKB[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.DecalCurveColor
// 0x020C (0x0218 - 0x000C)
struct FDecalCurveColor : public FDecalCurveBase
{
	unsigned char                                      UnknownData_CADX[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeCurveLinearColor                    Curve;                                                     // 0x0010(0x0208) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.DecalCurveColorEntry
// 0x0220
struct FDecalCurveColorEntry
{
	struct FName                                       Parameter;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDecalCurveColor                            Curve;                                                     // 0x0008(0x0218) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.DecalCurveFloat
// 0x008C (0x0098 - 0x000C)
struct FDecalCurveFloat : public FDecalCurveBase
{
	unsigned char                                      UnknownData_RC4N[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          Curve;                                                     // 0x0010(0x0088) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.DecalCurveFloatEntry
// 0x00A0
struct FDecalCurveFloatEntry
{
	struct FName                                       Parameter;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDecalCurveFloat                            Curve;                                                     // 0x0008(0x0098) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.DecalTextureEntry
// 0x0010
struct FDecalTextureEntry
{
	struct FName                                       Parameter;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    Texture;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ClientFortStashEntry
// 0x0004
struct FClientFortStashEntry
{
	uint16_t                                           PropRowIndex;                                              // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           PropCount;                                                 // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.InventoryEntryMinion
// 0x0040 (0x0060 - 0x0020)
struct FInventoryEntryMinion : public FInventoryEntry
{
	struct FGuid                                       PetStoredGuid;                                             // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Minion;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PetRowName;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       PetName;                                                   // 0x0040(0x0018) (NativeAccessSpecifierPublic)
	float                                              ServerTimeAddedToInventory;                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_46N7[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ActivatePetResult
// 0x0008
struct FActivatePetResult
{
	unsigned char                                      UnknownData_8AL8[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.InventoryEntryPetStored
// 0x0088 (0x00A8 - 0x0020)
struct FInventoryEntryPetStored : public FInventoryEntry
{
	struct FName                                       MinionRowName;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PetName;                                                   // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSkillAssignedEntry>                 AssignedSkills;                                            // 0x0038(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSkillLevelEntry>                    SkillLevels;                                               // 0x0048(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FTraitKey, float>                      Traits;                                                    // 0x0058(0x0050) (RepSkip, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.InventorySlotData
// 0x00D8
struct FInventorySlotData
{
	struct FGameplayTagContainer                       RequireAll;                                                // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequireAny;                                                // 0x0020(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ExcludeAny;                                                // 0x0040(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_87CA[0x48];                                    // 0x0060(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_EWardrobeAttachmentSlot                  AttachmentSlot;                                            // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D0JW[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SlotName;                                                  // 0x00B0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bDisplayInInventory;                                       // 0x00C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreInWardrobe;                                         // 0x00C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EWeaponSuite                             WeaponSuite;                                               // 0x00CA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EWeaponSlot                              WeaponSlot;                                                // 0x00CB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEmberWeapon;                                            // 0x00CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RDFT[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     SlotIcon;                                                  // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.Vector2D_NetQuantizeDirection
// 0x0000 (0x0008 - 0x0008)
struct FVector2D_NetQuantizeDirection : public FVector2D
{

};

// ScriptStruct Frontiers.Rotator_NetQuantizeByte
// 0x0000 (0x000C - 0x000C)
struct FRotator_NetQuantizeByte : public FRotator
{

};

// ScriptStruct Frontiers.ActivateSkillRequest
// 0x0028
struct FActivateSkillRequest
{
	Frontiers_ESkillSlot                               Slot;                                                      // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O9U7[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TargetActor;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2D24[0x6];                                     // 0x0018(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bCommitted;                                                // 0x001E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C2PR[0x9];                                     // 0x001F(0x0009) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.MaterialOverrideRequest
// 0x0020
struct FMaterialOverrideRequest
{
	class UMaterialInterface*                          OverrideMaterial;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ParentGuid;                                                // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                 // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIV6[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CachedMaterialArray
// 0x0010
struct FCachedMaterialArray
{
	TArray<class UMaterialInterface*>                  CachedMaterials;                                           // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TLNetViewer
// 0x0000 (0x0030 - 0x0030)
struct FTLNetViewer : public FNetViewer
{

};

// ScriptStruct Frontiers.TLConnectionAlwaysRelevantNodePair
// 0x0010
struct FTLConnectionAlwaysRelevantNodePair
{
	class UNetConnection*                              NetConnection;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ServerPerformanceData
// 0x0010
struct FServerPerformanceData
{
	int                                                FrameTimeMilliSeconds;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameThreadTimeMilliSeconds;                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UsedPhysicalMemory;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AvailablePhysicalMemory;                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ServerPublisherData
// 0x0038
struct FServerPublisherData
{
	struct FServerPerformanceData                      Performance;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FServerPublisherPlayer>              PlayerData;                                                // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FText>                               LoadedAreaNames;                                           // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                ContentVersion;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5M2G[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.EnvironmentMapping
// 0x0020
struct FEnvironmentMapping
{
	struct FString                                     Version;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Environment;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.DirectorPlatforms
// 0x0020
struct FDirectorPlatforms
{
	struct FString                                     Platform;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnvironmentMapping>                 EnvironmentMappings;                                       // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.DirectorData
// 0x0010
struct FDirectorData
{
	TArray<struct FDirectorPlatforms>                  Platforms;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.LoginServiceAccountIds
// 0x0020
struct FLoginServiceAccountIds
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     platform_id;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.LinkCodeResponse
// 0x0010
struct FLinkCodeResponse
{
	struct FString                                     LinkCode;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PickCharacterResponse
// 0x0080
struct FPickCharacterResponse
{
	struct FString                                     Address;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Area;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Players;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     session;                                                   // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Spawned;                                                   // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MuxerToken;                                                // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ContentVersion;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OTFI[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ServerAddress
// 0x0018
struct FServerAddress
{
	struct FString                                     Address;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U07M[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CameraRequest
// 0x0028
struct FCameraRequest
{
	FrontiersUI_ECameraType                            CameraType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TSM2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Length;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerFaceYaw;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZoomRate;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetOffset;                                              // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OffsetRate;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_07X3[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.TrapSpawnData
// 0x0000 (0x0178 - 0x0178)
struct FTrapSpawnData : public FSpawnDataBase
{

};

// ScriptStruct Frontiers.TrackFollowingData
// 0x0010
struct FTrackFollowingData
{
	uint32_t                                           ControlPointId;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ControlPointParameter;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsStopped;                                                // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJ55[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.TraitDisplayData
// 0x0088 (0x00A0 - 0x0018)
struct FTraitDisplayData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_4DWX[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_ETraitTextFormat                         TraitTextFormat;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DED4[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Icon[0x28];                                                // 0x0021(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	Frontiers_ETraitDisplayCategory                    DisplayCategory;                                           // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowAsNegative;                                           // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EMKI[0x2];                                     // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Trait;                                                     // 0x0054(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ETraitSlot                               DisplayPrimarySlot;                                        // 0x005C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ESecondaryTraitSlot                      DisplaySecondarySlot;                                      // 0x005D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A7BH[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DisplayNameSingular;                                       // 0x0078(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FName                                       CategoryName;                                              // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0EG0[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.RepTraitPair
// 0x0014 (0x0020 - 0x000C)
struct FRepTraitPair : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_UXZ3[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTraitPair                                  TraitPair;                                                 // 0x0010(0x0010) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.RepTraitPairArray
// 0x0010 (0x0118 - 0x0108)
struct FRepTraitPairArray : public FFastArraySerializer
{
	TArray<struct FRepTraitPair>                       Items;                                                     // 0x0108(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.TraitData
// 0x0090 (0x00A8 - 0x0018)
struct FTraitData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_6Z5K[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TwoCC;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ETraitType                               TraitType;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ERLY[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       ParamTagParents;                                           // 0x0040(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     ValueMin;                                                  // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ValueMax;                                                  // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ETraitParam                              ParamType;                                                 // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ETraitReplicateType                      ReplicateType;                                             // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BIJJ[0x6];                                     // 0x0082(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCurrencyTableRowHandle                     ShowAsCurrency;                                            // 0x0088(0x0010) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldPersist;                                            // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPerAccount;                                               // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCombatTrait;                                            // 0x009A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInheritFromInstigator;                                    // 0x009B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveFromTraitsIfZero;                                   // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4C14[0xB];                                     // 0x009D(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.GearModData
// 0x0018
struct FGearModData
{
	struct FGameplayTag                                GearToModify;                                              // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EPropertyMod                             ModType;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P9LW[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     AttachOffset;                                              // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.WardrobePart
// 0x00C0
struct FWardrobePart
{
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttachmentsCanOverride;                                   // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsedAsParentMesh;                                         // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RBOE[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Dye;                                                       // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DyePreviewOverride;                                        // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DefaultSkinTone;                                           // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DefaultHair;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DefaultEye;                                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          KeyableMaterial;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               MaterialParameters;                                        // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      CustomSkinColorTextures[0x50];                             // 0x0050(0x0050) UNKNOWN PROPERTY: MapProperty
	TArray<struct FGearModData>                        CustomOverrides;                                           // 0x00A0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ItemTag;                                                   // 0x00B0(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OIX9[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.AreaQueryResponse
// 0x0120
struct FAreaQueryResponse
{
	struct FString                                     Area;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Forts;                                                     // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     session;                                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Platform;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Data;                                                      // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HBMQ[0xC0];                                    // 0x0060(0x00C0) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.AreaQueryResponseData
// 0x00C0
struct FAreaQueryResponseData
{
	struct FName                                       AreaDataName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceSetSeed;                                             // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3FJ2[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RandomSeed;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLegacyFractions;                                       // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5M7D[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMapWorksParams                             MapWorks;                                                  // 0x0018(0x00A8) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.AreaLookupResponse
// 0x0030
struct FAreaLookupResponse
{
	unsigned char                                      UnknownData_6QZK[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Address;                                                   // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ContentVersion;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MuxerToken;                                                // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TravelSessionLookupResponse
// 0x0010
struct FTravelSessionLookupResponse
{
	struct FString                                     Zone;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.XboxUnidirectionalRecentPlayer
// 0x0038
struct FXboxUnidirectionalRecentPlayer
{
	Frontiers_EXboxEncounterType                       encounterType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5RZH[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ID;                                                        // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     network;                                                   // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.XboxRecentPlayersByXuid
// 0x0020
struct FXboxRecentPlayersByXuid
{
	struct FString                                     xuid;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FXboxUnidirectionalRecentPlayer>     recentPlayers;                                             // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.XboxMultiplayerActivityServerRecentPlayers
// 0x0010
struct FXboxMultiplayerActivityServerRecentPlayers
{
	TArray<struct FXboxRecentPlayersByXuid>            recentPlayersByXuid;                                       // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.XboxBidirectionalRecentPlayer
// 0x0020
struct FXboxBidirectionalRecentPlayer
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     network;                                                   // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.XboxRecentPlayerGroup
// 0x0028
struct FXboxRecentPlayerGroup
{
	Frontiers_EXboxEncounterType                       encounterType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XQMV[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FXboxBidirectionalRecentPlayer>      recentPlayers;                                             // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.XboxMultiplayerActivityServerRecentPlayerGroups
// 0x0010
struct FXboxMultiplayerActivityServerRecentPlayerGroups
{
	TArray<struct FXboxRecentPlayerGroup>              recentPlayerGroups;                                        // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.XboxMultiplayerActivityDelete
// 0x0010
struct FXboxMultiplayerActivityDelete
{
	struct FString                                     sequenceNumber;                                            // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.XboxMultiplayerActivityUpdate
// 0x0028
struct FXboxMultiplayerActivityUpdate
{
	struct FString                                     connectionString;                                          // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EXboxMultiplayerActivityJoinRestriction  joinRestriction;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VI64[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     sequenceNumber;                                            // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ActiveTraitValue
// 0x000C
struct FActiveTraitValue
{
	float                                              Value;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ActiveTraitMonitorRule
// 0x0018
struct FActiveTraitMonitorRule
{
	struct FActiveTraitsTableRowHandle                 ActiveTrait;                                               // 0x0000(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	Frontiers_EActiveTraitMonitorRuleType              Condition;                                                 // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F59Y[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ActiveTraitMonitorAction
// 0x0040
struct FActiveTraitMonitorAction
{
	struct FActiveTraitMonitorRule                     Prerequisite;                                              // 0x0000(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FActiveTraitMonitorRule                     Rule;                                                      // 0x0018(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FName                                       Data;                                                      // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2WH2[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.PrePickedActorClass
// 0x0028
struct FPrePickedActorClass
{
	unsigned char                                      ActorClass[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Frontiers.DeathInfo
// 0x0018
struct FDeathInfo
{
	bool                                               bIsAlive;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_49DV[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Killer;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EDeathType                               DeathType;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ERU0[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ActorProxyEntryBase
// 0x0040
struct FActorProxyEntryBase
{
	unsigned char                                      UnknownData_Y5IL[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Weight;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CURZ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0010(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ClassLineage;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.ActorProxyEntry
// 0x0028 (0x0068 - 0x0040)
struct FActorProxyEntry : public FActorProxyEntryBase
{
	unsigned char                                      Proxy[0x28];                                               // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Frontiers.ActorProxyNodeMonsterSpawnerEntry
// 0x0028 (0x0068 - 0x0040)
struct FActorProxyNodeMonsterSpawnerEntry : public FActorProxyEntryBase
{
	unsigned char                                      Proxy[0x28];                                               // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Frontiers.ActorProxyNodeGadgetEntry
// 0x0028 (0x0068 - 0x0040)
struct FActorProxyNodeGadgetEntry : public FActorProxyEntryBase
{
	unsigned char                                      Proxy[0x28];                                               // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Frontiers.ActorProxyNodeBreakableEntry
// 0x0028 (0x0068 - 0x0040)
struct FActorProxyNodeBreakableEntry : public FActorProxyEntryBase
{
	unsigned char                                      Proxy[0x28];                                               // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Frontiers.ActorProxyNodeHazardEntry
// 0x0028 (0x0068 - 0x0040)
struct FActorProxyNodeHazardEntry : public FActorProxyEntryBase
{
	unsigned char                                      Proxy[0x28];                                               // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Frontiers.ActorProxyNodeGameplayTagEntry
// 0x0000 (0x0040 - 0x0040)
struct FActorProxyNodeGameplayTagEntry : public FActorProxyEntryBase
{

};

// ScriptStruct Frontiers.ActorStatusEffectPair
// 0x0010
struct FActorStatusEffectPair
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStatusEffect*                               StatusEffect;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TLCurveTableRowHandle
// 0x0030
struct FTLCurveTableRowHandle
{
	struct FName                                       RowName;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CurveTable[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Frontiers.TraitInitializer
// 0x0068
struct FTraitInitializer
{
	struct FTraitsTableRowHandle                       Trait;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ETraitSlot                               PrimarySlot;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESecondaryTraitSlot                      SecondarySlot;                                             // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K7ZD[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                GameplayTag;                                               // 0x0014(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParamRowName;                                              // 0x001C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Param;                                                     // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DCCI[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FMEB[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTLCurveTableRowHandle                      PerLevelCurveRowHandle;                                    // 0x0030(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              PerLevelMultiplier;                                        // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PRTS[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.NotifyCondition
// 0x0070
struct FNotifyCondition
{
	struct FTraitInitializer                           TraitRequirement;                                          // 0x0000(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	Frontiers_ETraitConditionType                      TraitCondition;                                            // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QPOJ[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CameraShakeData
// 0x0020
struct FCameraShakeData
{
	class UClass*                                      Shake;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseSourceAsEpicenter;                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJH0[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InnerRadius;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterRadius;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOrientShakeTowardsEpicenter;                              // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyForOwner;                                             // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V75U[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.AnimNotifyFMODEventContextData
// 0x0038
struct FAnimNotifyFMODEventContextData
{
	struct FFMODEventReference                         Event;                                                     // 0x0000(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     SourceOffset;                                              // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttached;                                                 // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A2IN[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SocketName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7VHU[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.MapWorksSpawnEntry
// 0x0010 (0x0038 - 0x0028)
struct FMapWorksSpawnEntry : public FSpawnPickerEntryBase
{
	TArray<struct FMapWorksTableRowHandle>             MapWorksDataRows;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.MinionSpawnEntry
// 0x0010 (0x0038 - 0x0028)
struct FMinionSpawnEntry : public FSpawnPickerEntryBase
{
	struct FMinionSpawnTableRowHandle                  MinionSpawnRow;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ActorLimit
// 0x00D0
struct FActorLimit
{
	Frontiers_EActorLimitType                          Type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4B42[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ActorClass[0x28];                                          // 0x0001(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	bool                                               bMatchChildClasses;                                        // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BERS[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       TagsToMatch;                                               // 0x0038(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                Number;                                                    // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9KWX[0x74];                                    // 0x005C(0x0074) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.RuleSetMetaData
// 0x0038
struct FRuleSetMetaData
{
	struct FString                                     Notes;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      RuleSetClass;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XZUN[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_EDRLGRuleSetMethod                       Method;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AN6C[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Attempts;                                                  // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredSuccessfulAttempts;                                // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipToNextAfterRequiredRuleSuccess;                       // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttemptsTimesSize;                                        // 0x002D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequiredTimesSize;                                        // 0x002E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttemptsTimesForts;                                       // 0x002F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequiredTimesFortCount;                                   // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EWarpToIndex                             WarpAddedByRuleSet;                                        // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopHere;                                                 // 0x0032(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5BWX[0x5];                                     // 0x0033(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.TLLevelInstance
// 0x0070
struct FTLLevelInstance
{
	unsigned char                                      LevelAsset[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class ADRLGLevelProxy*                             LevelProxy;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K3PY[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.FortInventoryWithOwner
// 0x0050
struct FFortInventoryWithOwner
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AccountName;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformAccountId;                                         // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortInventoryResponse                      Value;                                                     // 0x0030(0x0020) (RepSkip, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.MissingFortInventory
// 0x0020
struct FMissingFortInventory
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AccountName;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.FortInventoriesResponse
// 0x0020
struct FFortInventoriesResponse
{
	TArray<struct FFortInventoryWithOwner>             Result;                                                    // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMissingFortInventory>               Missing;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.AreaRecord
// 0x0030
struct FAreaRecord
{
	class AAreaLoader*                                 Loader;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastActiveTime;                                            // 0x0008(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seed;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YTJB[0x1C];                                    // 0x0014(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.RulesFilter
// 0x0038
struct FRulesFilter
{
	TArray<struct FString>                             ContainsElements;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	Frontiers_EContainsRules                           ContainsRule;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PADU[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EndsWith;                                                  // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StartsWith;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TextureRules
// 0x0050
struct FTextureRules
{
	struct FRulesFilter                                NameFilter;                                                // 0x0000(0x0038) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureCompressionSettings>    Compression;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSRGBEnabled;                                              // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureFilter>                 TextureFilterType;                                         // 0x003A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureMipGenSettings>         MipGenSettings;                                            // 0x003B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureGroup>                  Group;                                                     // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FQDP[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxTextureSize;                                            // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODBias;                                                   // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureAddress>                XAddress;                                                  // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureAddress>                YAddress;                                                  // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BSOZ[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.FBXRules
// 0x0038
struct FFBXRules
{
	struct FRulesFilter                                NameFilter;                                                // 0x0000(0x0038) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.FMODBanks
// 0x0040
struct FFMODBanks
{
	struct FGameplayTagContainer                       MonsterGameplayTags;                                       // 0x0000(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFMODBankReference>                  Banks;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              BankSets;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.AudioAmbianceMonsterValues
// 0x000C
struct FAudioAmbianceMonsterValues
{
	int                                                PopcornMonsterValue;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MediumMonsterValue;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BruteMonsterValue;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.AudioEventEntry
// 0x0020
struct FAudioEventEntry
{
	struct FName                                       EventName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         FMODReference;                                             // 0x0008(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.CharacterCustomization
// 0x0020
struct FCharacterCustomization
{
	class UTexture2D*                                  HairGradient;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  EyeGradient;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  SkinGradient;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeadItemRowIndex;                                          // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HairItemRowIndex;                                          // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.CharacterSelectAnimations
// 0x0078
struct FCharacterSelectAnimations
{
	unsigned char                                      Idle[0x28];                                                // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Transitions[0x50];                                         // 0x0028(0x0050) UNKNOWN PROPERTY: MapProperty

};

// ScriptStruct Frontiers.LerpArray
// 0x0008
struct FLerpArray
{
	unsigned char                                      UnknownData_41YM[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CombatDamageSetting
// 0x0010 (0x0018 - 0x0008)
struct FCombatDamageSetting : public FLerpArray
{
	float                                              HealthPercent;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VignetteIntensity;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      VignetteColor;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ALKT[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CombatNotifyWidgetComponentArray
// 0x0010
struct FCombatNotifyWidgetComponentArray
{
	TArray<class UCombatNotifyWidgetComponent*>        Components;                                                // 0x0000(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ContractTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FContractTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.DungeonSpawnTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FDungeonSpawnTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.DepthOfFieldOverrideRequest
// 0x000C
struct FDepthOfFieldOverrideRequest
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ETLD[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FocalDistance;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Fstop;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TLUserAccount
// 0x0030
struct FTLUserAccount
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlatformAccountName;                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlatformAccountId;                                         // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Frontiers.AffixTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FAffixTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.CharacterSave
// 0x00A8
struct FCharacterSave
{
	struct FString                                     CharacterName;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsHardcore;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNewCharacter;                                           // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J9IC[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                OriginalDifficulty;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ContentVersion;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D1M3[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            LastPlayedTime;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrontiersNewCharacterDataField             NewCharacterData;                                          // 0x0028(0x0060) (NativeAccessSpecifierPublic)
	struct FString                                     CharacterData;                                             // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterQuests;                                           // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.DialogueTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FDialogueTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.MainMenuPlayerData
// 0x0180
struct FMainMenuPlayerData
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_40FD[0x178];                                   // 0x0008(0x0178) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.LoadingScreenRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FLoadingScreenRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.MonsterSpawnTypeTuning
// 0x0048
struct FMonsterSpawnTypeTuning
{
	Frontiers_EMonsterSpawnType                        SpawnType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UPMZ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageMultiplier;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitpointMultiplier;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExperienceMultiplier;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DramaMultiplier;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CRHP[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FItemSpawnTableRowHandle                    ItemSpawn;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.MonsterSpawnComponentData
// 0x0018
struct FMonsterSpawnComponentData
{
	uint32_t                                           Weight;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaximumSpawns;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnDelayMin;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnDelayMax;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               Skill;                                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q489[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.MonsterSpawnTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FMonsterSpawnTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.MonsterSpawnEntry
// 0x0010 (0x0038 - 0x0028)
struct FMonsterSpawnEntry : public FSpawnPickerEntryBase
{
	struct FMonsterSpawnTableRowHandle                 MonsterSpawnRowName;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PartyMember
// 0x00E0
struct FPartyMember
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPartyMemberMetadata                        MetaData;                                                  // 0x0010(0x00C0) (NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ATLCharacter>                 Character;                                                 // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastHeartbeat;                                             // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I3CW[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.Party
// 0x0030
struct FParty
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LeaderAccountId;                                           // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPartyMember>                        Members;                                                   // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PartyInvite
// 0x00B0
struct FPartyInvite
{
	struct FString                                     PartyId;                                                   // 0x0000(0x0010) (ZeroConstructor, RepSkip, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOtherPlayerContext                         InviterInfo;                                               // 0x0010(0x0088) (NativeAccessSpecifierPublic)
	struct FString                                     InviterName;                                               // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2U2N[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.PlayerPortalDestination
// 0x0048
struct FPlayerPortalDestination
{
	Frontiers_EPlayerPortalDestinationType             Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UKOI[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WQ3N[0x28];                                    // 0x0020(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.TLRepMovement
// 0x001C
struct FTLRepMovement
{
	struct FVector_NetQuantize                         LinearVelocity;                                            // 0x0000(0x000C) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Location;                                                  // 0x000C(0x000C) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationYaw;                                               // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ChildPortalEntry
// 0x0010
struct FChildPortalEntry
{
	class APortal*                                     Portal;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           AccountIdHash;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ActiveProcKey
// 0x000C
struct FActiveProcKey
{
	unsigned char                                      UnknownData_8MLQ[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ActiveProcData
// 0x0010
struct FActiveProcData
{
	unsigned char                                      UnknownData_RGN2[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      SkillClass;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ProcTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FProcTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.SpokeTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FSpokeTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.QuestActivationRequirement
// 0x0078
struct FQuestActivationRequirement
{
	Frontiers_EQuestRequirementType                    Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GC7C[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RowName;                                                   // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTimeOfDayIsDay;                                           // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y629[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StartDate;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EndDate;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DayOfWeek;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerLevel;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         AreaRow;                                                   // 0x0038(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AreaTags;                                                  // 0x0048(0x0020) (Edit, NativeAccessSpecifierPublic)
	bool                                               bOnlyShowIfRequirementMet;                                 // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddQuestWhenRequirementMet;                               // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyUseToAddQuest;                                        // 0x006A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EMEW[0xD];                                     // 0x006B(0x000D) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.QuestActivationRequirementArray
// 0x0010
struct FQuestActivationRequirementArray
{
	TArray<struct FQuestActivationRequirement>         ActivationRequirements;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.MonstersTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FMonstersTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.QuestReward
// 0x0050
struct FQuestReward
{
	Frontiers_EQuestRewardType                         Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YZRI[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       PlayerGameplayTags;                                        // 0x0008(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         RewardArea;                                                // 0x0028(0x0010) (Edit, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ItemLevel;                                                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePlayerLevel;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0YWH[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RowName;                                                   // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRewardChoice;                                             // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CXWS[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.QuestTask
// 0x02F8
struct FQuestTask
{
	Frontiers_EQuestTaskType                           Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9K0A[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ID;                                                        // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N3PX[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTLText                                     Name;                                                      // 0x0010(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       PlayerRequireAllGameplayTags;                              // 0x0028(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       PlayerRequireAnyGameplayTags;                              // 0x0048(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       PlayerExcludeAnyGameplayTags;                              // 0x0068(0x0020) (Edit, NativeAccessSpecifierPublic)
	bool                                               bConsiderCompleteIfNotApplicable;                          // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NAMQ[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagQuery                           PlayerGameplayTagQuery;                                    // 0x0090(0x0048) (NativeAccessSpecifierPublic)
	struct FDialogueTableRowHandle                     DialogueRow;                                               // 0x00D8(0x0010) (Edit, NativeAccessSpecifierPublic)
	int                                                RequiredCount;                                             // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredChallengeLevel;                                    // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         AreaTableRowHandle;                                        // 0x00F8(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMonstersTableRowHandle                     MonsterTableRowHandle;                                     // 0x0108(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FBossTableRowHandle                         BossTableRowHandle;                                        // 0x0118(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FItemTableRowHandle                         ItemTableRowHandle;                                        // 0x0128(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FTraitsTableRowHandle                       TraitTableRowHandle;                                       // 0x0138(0x0010) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       GameplayTagContainer;                                      // 0x0148(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FSkillsTableRowHandle                       SkillsTableRowHandle;                                      // 0x0168(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FName                                       QuestName;                                                 // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RecipeName;                                                // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TraitsString;                                              // 0x0188(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseChildTraits;                                           // 0x0198(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WSMO[0x3];                                     // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RequiredLevel;                                             // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMustCompleteInArea;                                       // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnTimerFailQuest;                                         // 0x01A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnTimerCompleteTask;                                      // 0x01A2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KMOV[0x1];                                     // 0x01A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimerSeconds;                                              // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ActorClass[0x28];                                          // 0x01A8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      QuestEvent[0x28];                                          // 0x01D0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Widget[0x28];                                              // 0x01F8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Video[0x28];                                               // 0x0220(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      CinematicStatusEffect[0x28];                               // 0x0248(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	float                                              CinematicDelay;                                            // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WidgetDelay;                                               // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQuestReward>                        Rewards;                                                   // 0x0278(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bHideInUI;                                                 // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowAsPercent;                                            // 0x0289(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOptional;                                               // 0x028A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipCleanup;                                              // 0x028B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCountProgressAfterActivationOnly;                         // 0x028C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KID6[0x3];                                     // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               Prerequisites;                                             // 0x0290(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      CompletedWithTasks[0x50];                                  // 0x02A0(0x0050) UNKNOWN PROPERTY: SetProperty
	Frontiers_EQuestMapMarkerType                      MapMarkerType;                                             // 0x02F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I83C[0x3];                                     // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnerOverrideChance;                                     // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.QuestItemDrop
// 0x00B8
struct FQuestItemDrop
{
	struct FName                                       TaskId;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         AreaRequired;                                              // 0x0008(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ItemSourceFilter;                                          // 0x0018(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FMonstersTableRowHandle                     MonsterSourceRow;                                          // 0x0038(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FBossTableRowHandle                         BossSourceRow;                                             // 0x0048(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FItemTableRowHandle                         ItemTableRow;                                              // 0x0058(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FItemSpawnTableRowHandle                    ItemSpawnTableRow;                                         // 0x0068(0x0010) (Edit, NativeAccessSpecifierPublic)
	bool                                               bOverrideAreaQuestDropChance;                              // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CPDW[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DropChance;                                                // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DropChanceDelta;                                           // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAdjustChanceByPlayers;                                    // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_97GX[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      GadgetSource[0x28];                                        // 0x0085(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	bool                                               bFilterByPlayerWardrobe;                                   // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6EJM[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.QuestDefinition
// 0x03C8
struct FQuestDefinition
{
	struct FName                                       ID;                                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTLText                                     Name;                                                      // 0x0008(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FSpokeTableRowHandle                        SpokeOverrideRow;                                          // 0x0020(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FDialogueTableRowHandle                     OfferDialogueRow;                                          // 0x0030(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     Notes;                                                     // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EQuestType                               Type;                                                      // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WUMO[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FQuestActivationRequirement>         ActivationRequirements;                                    // 0x0058(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuestActivationRequirementArray>    AlternateActivationRequirements;                           // 0x0068(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuestTask>                          Tasks;                                                     // 0x0078(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuestItemDrop>                      QuestItemDrops;                                            // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuestReward>                        Rewards;                                                   // 0x0098(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                                QuestPoolTag;                                              // 0x00A8(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuestPoolWeight;                                           // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEnabled;                                                // 0x00B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRepeatable;                                             // 0x00B5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSavePerAccount;                                           // 0x00B6(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideAllOtherQuests;                                       // 0x00B7(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsStoryQuest;                                             // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChooseReward;                                             // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EQuestProgressTrackingType               ProgressTrackingType;                                      // 0x00BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRewardSpawnsQuestChest;                                   // 0x00BB(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideInUI;                                                 // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayNarratorVO;                                           // 0x00BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3VEG[0x30A];                                   // 0x00BE(0x030A) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ObjectArrayHolder
// 0x0010
struct FObjectArrayHolder
{
	TArray<class UObject*>                             Array;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SplineMeshData
// 0x0010
struct FSplineMeshData
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           SplinePointId;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WW7D[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ReplicatedSplinePoint
// 0x0018
struct FReplicatedSplinePoint
{
	struct FVector                                     Point;                                                     // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           ID;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MXVY[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SkillsBalanceTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FSkillsBalanceTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.SkillEffectEntry
// 0x0020
struct FSkillEffectEntry
{
	class UParticleSystem*                             Effect;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z41T[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SkillCostEntry
// 0x0020
struct FSkillCostEntry
{
	float                                              EnergyCost;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PL17[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FActiveTraitsTableRowHandle                 EnergyPool;                                                // 0x0008(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              EnergyRequirement;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseSoftEnergyCost;                                        // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MYMX[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.BeamImpactEffectRecord
// 0x0048
struct FBeamImpactEffectRecord
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactPoint;                                               // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NGZP[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             EffectClass;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    Effect;                                                    // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         ImpactSoundEvent;                                          // 0x0028(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODEventInstance                          ImpactSoundInstance;                                       // 0x0040(0x0004) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8W7F[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.FireSkillBeamData
// 0x0058
struct FFireSkillBeamData
{
	class UClass*                                      SkillBeamClass;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxHits;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCosmeticOnly;                                           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1EKC[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttachSocket;                                              // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRotationForDirection;                                  // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EBeamDirection                           BeamDirection;                                             // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BFJ7[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      AlternateSourceActor;                                      // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SourceOffset;                                              // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetOffset;                                              // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TargetAttachSocket;                                        // 0x0040(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetActor;                                               // 0x0048(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseBeamPulse;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_15WE[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BeamPulseInterval;                                         // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SkillOverride
// 0x0018
struct FSkillOverride
{
	Frontiers_ESkillAnimSource                         AnimSource;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DVX6[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequenceBase*                           Animation;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAsFallback;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OU1T[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SkillListEntry
// 0x0010 (0x0028 - 0x0018)
struct FSkillListEntry : public FSkillOverride
{
	Frontiers_ESkillSlot                               SkillSlot;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2M1V[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      SkillClass;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.UnlockSlotLevelContainer
// 0x0050
struct FUnlockSlotLevelContainer
{
	TMap<Frontiers_ESkillSlot, int>                    SlotLevelMap;                                              // 0x0000(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SkillActivationParams
// 0x0010 (0x0028 - 0x0018)
struct FSkillActivationParams : public FSkillOverride
{
	struct FName                                       RowName;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ActivationParamsMap
// 0x0050
struct FActivationParamsMap
{
	TMap<Frontiers_ESkillSlot, struct FSkillActivationParams> Map;                                                       // 0x0000(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.StatusEffectCounter
// 0x0020
struct FStatusEffectCounter
{
	int                                                Count;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XZPH[0x1C];                                    // 0x0004(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SkillReplicationData
// 0x0020
struct FSkillReplicationData
{
	class AActor*                                      TargetActor;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       TargetLocation;                                            // 0x0008(0x000C) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               Slot;                                                      // 0x0014(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // 0x0015(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y6A0[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SkillInstanceId;                                           // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTimestamp;                                            // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SkillEventData
// 0x0068
struct FSkillEventData
{
	class UWorld*                                      World;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SourceActor;                                               // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      CharacterMeshComponent;                                    // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetActor;                                               // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1H3N[0xC];                                     // 0x0020(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     TargetLocation;                                            // 0x002C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6C3X[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequenceBase*                           Animation;                                                 // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UPQZ[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.SkillCooldownEntry
// 0x0018
struct FSkillCooldownEntry
{
	class USkill*                                      Skill;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownEndTime;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeRemaining;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LockedRefCount;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R4Z6[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.DisabledSkillSlotEntry
// 0x0028
struct FDisabledSkillSlotEntry
{
	Frontiers_ESkillSlot                               Slot;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M6UP[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStatusEffectCounter                        Counter;                                                   // 0x0008(0x0020) (NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.SkillAssetsToLoad
// 0x0010
struct FSkillAssetsToLoad
{
	TArray<class UObject*>                             AssetsLoaded;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PlaceSkillShapeData
// 0x0050
struct FPlaceSkillShapeData
{
	class UClass*                                      ShapeClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTurnTowardsTarget;                                        // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P4BT[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    Rotation;                                                  // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAttached;                                                 // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DYJK[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      AttachActor;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomRange;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnOnClient;                                            // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowSecondaryOverlaps;                                   // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartActive;                                              // 0x0036(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnAtSkillTarget;                                       // 0x0037(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondaryOverlapMax;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnOnGround;                                            // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplySourceActorScale;                                    // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScaleOffsetBySourceActorScale;                            // 0x003E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1JUI[0x1];                                     // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ScaleMultiplier;                                           // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N76J[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.DataTableDefinition
// 0x0050
struct FDataTableDefinition
{
	unsigned char                                      Table[0x28];                                               // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bIsCurveTable;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D4XM[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RowStruct;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PropertyName;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlsoSaveAsJSON;                                           // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PC8B[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.PurchaseHistoryItem
// 0x000C
struct FPurchaseHistoryItem
{
	struct FName                                       CatalogRowName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.StartRandomSkillData
// 0x0008
struct FStartRandomSkillData
{
	Frontiers_ESkillSlot                               SkillSlot;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1AUZ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           Weight;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TimeOfDaySetting
// 0x0008 (0x0010 - 0x0008)
struct FTimeOfDaySetting : public FLerpArray
{
	int                                                Hour;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Minute;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TimeOfDayRotationSetting
// 0x0010 (0x0020 - 0x0010)
struct FTimeOfDayRotationSetting : public FTimeOfDaySetting
{
	struct FVector                                     RotationVector;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OHOL[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.TimeOfDayFogSetting
// 0x0018 (0x0028 - 0x0010)
struct FTimeOfDayFogSetting : public FTimeOfDaySetting
{
	struct FColor                                      Color;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Density;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloorHeight;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightFalloff;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxOpacity;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartDistance;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ItemReplicatedData
// 0x0018
struct FItemReplicatedData
{
	struct FName                                       ItemDataRow;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DyeDataRow;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ElementTag;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.WeaponSlotData
// 0x0010
struct FWeaponSlotData
{
	Frontiers_EWeaponSlot                              EquipSlot;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_899H[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ItemDataRow;                                               // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InventoryId;                                               // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TrapSpawnTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FTrapSpawnTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.EditorOnlyAchievementEntry
// 0x000C
struct FEditorOnlyAchievementEntry
{
	struct FName                                       AchievementName;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Progress;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.EditorOnlyAchievementData
// 0x0010
struct FEditorOnlyAchievementData
{
	TArray<struct FEditorOnlyAchievementEntry>         Achievements;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ActiveTraitData
// 0x0048 (0x0060 - 0x0018)
struct FActiveTraitData : public FTLTableRowBase
{
	struct FName                                       Trait;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       SkillCostFormat;                                           // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bHideSkillCost;                                            // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNegateSkillCostInUI;                                      // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EActiveTraitReplicateType                ReplicateType;                                             // 0x0052(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SupportsMin;                                               // 0x0053(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SupportsMax;                                               // 0x0054(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SupportsRegen;                                             // 0x0055(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SupportsRegenMax;                                          // 0x0056(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EActiveTraitResetType                    ResetType;                                                 // 0x0057(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EActiveTraitValueType                    ValueType;                                                 // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ENarratorQuip                            NoResourceNarratorQuip;                                    // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockOnDeath;                                              // 0x005A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResetOnRevive;                                            // 0x005B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JUZN[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.AffixData
// 0x0340 (0x0358 - 0x0018)
struct FAffixData : public FTLTableRowBase
{
	struct FString                                     LevelRangeString;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LHWW[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           DropWeight;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCount;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       TextFormat;                                                // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ItemTextFormat;                                            // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bAlwaysShowAffixName;                                      // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPrimaryAffix;                                           // 0x0071(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EAffixTraitType                          TraitType;                                                 // 0x0072(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_43JK[0x5];                                     // 0x0073(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       AffixTags;                                                 // 0x0078(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SkillNameTag;                                              // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ElementTag;                                                // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HRTN[0x50];                                    // 0x00A8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AffixCurveValue1;                                          // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMinCurve1;                                        // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMaxCurve1;                                        // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AffixCurveValue2;                                          // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMinCurve2;                                        // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMaxCurve2;                                        // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AffixCurveValue3;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMinCurve3;                                        // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMaxCurve3;                                        // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AffixCurveValue4;                                          // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMinCurve4;                                        // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMaxCurve4;                                        // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AffixCurveValue5;                                          // 0x0158(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMinCurve5;                                        // 0x0160(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMaxCurve5;                                        // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AffixCurveValue6;                                          // 0x0170(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMinCurve6;                                        // 0x0178(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMaxCurve6;                                        // 0x0180(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AffixCurveValue7;                                          // 0x0188(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMinCurve7;                                        // 0x0190(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMaxCurve7;                                        // 0x0198(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AffixCurveValue8;                                          // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMinCurve8;                                        // 0x01A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMaxCurve8;                                        // 0x01B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AffixCurveValue9;                                          // 0x01B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMinCurve9;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMaxCurve9;                                        // 0x01C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AffixCurveValue10;                                         // 0x01D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMinCurve10;                                       // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChallengeMaxCurve10;                                       // 0x01E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TraitString;                                               // 0x01E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Normal;                                                    // 0x01F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Magic;                                                     // 0x0208(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Rare;                                                      // 0x0218(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Legendary;                                                 // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Unique;                                                    // 0x0238(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SetBonusTag;                                               // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SetBonusCountRequired;                                     // 0x0250(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O9BV[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EnchantingMagicMultipliers;                                // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EnchantingRareMultipliers;                                 // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EnchantingLegendaryMultipliers;                            // 0x0278(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeboundMultiplier;                                       // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRound;                                                    // 0x028C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FSMR[0x3];                                     // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TextOnDrop;                                                // 0x0290(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JL6R[0xB0];                                    // 0x02A8(0x00B0) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.AffixSpawnData
// 0x0000 (0x0178 - 0x0178)
struct FAffixSpawnData : public FSpawnDataBase
{

};

// ScriptStruct Frontiers.SpawnAnimatedMeshParams
// 0x0070
struct FSpawnAnimatedMeshParams
{
	bool                                               bWorldSpace;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S47Y[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlayRateMultiplier;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               MeshToSpawn;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           Material;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           AnimationToPlay;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      OwnerSkeletalMesh;                                         // 0x0028(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  TransformOverride;                                         // 0x0030(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	Frontiers_EVFXScaleMethod                          ScaleMethod;                                               // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NO5K[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ScaleMultiplier;                                           // 0x0064(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ActorLimitActorProxyEntry
// 0x0030 (0x0070 - 0x0040)
struct FActorLimitActorProxyEntry : public FActorProxyEntryBase
{
	unsigned char                                      UnknownData_SCD3[0x30];                                    // 0x0040(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.MonsterAffixTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FMonsterAffixTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.PlayerAffixTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FPlayerAffixTableRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.AreaData
// 0x06F8 (0x0710 - 0x0018)
struct FAreaData : public FTLTableRowBase
{
	struct FText                                       AreaName;                                                  // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       AreaName_MapWorks;                                         // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       NameSpawn_MapWorks;                                        // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WO09[0x4];                                     // 0x0050(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AreaGroup;                                                 // 0x0054(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EAreaGroupType                           AreaGroupType;                                             // 0x005C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XQ1Q[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AreaClass[0x28];                                           // 0x005D(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	float                                              AreaSize;                                                  // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L1QJ[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAreaTableRowHandle                         PrevAreaRow0;                                              // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         NextAreaRow1;                                              // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         NextAreaRow2;                                              // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         NextAreaRow3;                                              // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         NextAreaRow4;                                              // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         NextAreaRow5;                                              // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         NextAreaRow6;                                              // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FQuestObjectTableRowHandle                  QuestObjectFilterNextArea1;                                // 0x0100(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         AltNextAreaRow1;                                           // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FQuestObjectTableRowHandle                  QuestObjectFilterNextArea2;                                // 0x0120(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         AltNextAreaRow2;                                           // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FQuestObjectTableRowHandle                  QuestObjectFilterNextArea3;                                // 0x0140(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         AltNextAreaRow3;                                           // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FQuestObjectTableRowHandle                  QuestObjectFilterNextArea4;                                // 0x0160(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         AltNextAreaRow4;                                           // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FQuestObjectTableRowHandle                  QuestObjectFilterNextArea5;                                // 0x0180(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         AltNextAreaRow5;                                           // 0x0190(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FQuestObjectTableRowHandle                  QuestObjectFilterNextArea6;                                // 0x01A0(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         AltNextAreaRow6;                                           // 0x01B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         OverrideYouAreHere;                                        // 0x01C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       RequiredQuestTask;                                         // 0x01D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequireCompletingAreaQuestToProceed;                      // 0x01D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TDIZ[0x3];                                     // 0x01D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FortCount;                                                 // 0x01DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanDestroyItems;                                          // 0x01E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequirePartyLeadersFort;                                  // 0x01E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowClockUI;                                              // 0x01E2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOutdoors;                                               // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBossArea;                                               // 0x01E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowOnFrontierMap;                                        // 0x01E5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMonstersCanTargetNPC;                                     // 0x01E6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BT79[0x1];                                     // 0x01E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MonsterLevel;                                              // 0x01E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MonsterLevelDelta;                                         // 0x01EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MonstersRespawn;                                           // 0x01F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MonstersDisabledByDistance;                                // 0x01F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGadgetsReset;                                             // 0x01F2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsWarpBackArea;                                           // 0x01F3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KEE9[0x4];                                     // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      DefaultWarpBackClass[0x28];                                // 0x01F4(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	bool                                               bShutdownQuicklyWithNoPlayers;                             // 0x0220(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShutdownQuicklyAfterBeingCleared;                         // 0x0221(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5U63[0x6];                                     // 0x0222(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBossTableRowHandle>                 BossMonsters;                                              // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bTriggerSpawnersHelpDrama;                                 // 0x0238(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggerSpawnersCheckDrama;                                // 0x0239(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WI4L[0x6];                                     // 0x023A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMonsterAffixTableRowHandle>         MonsterAffixes;                                            // 0x0240(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMonsterSpawnTableRowHandle                 MonsterSpawnRow;                                           // 0x0250(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FPlayerAffixTableRowHandle>          PlayerAffixes;                                             // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTrapSpawnTableRowHandle                    DefaultTrap;                                               // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMonsterSpawnTableRowHandle                 TrapDefaultMonsterSpawnRow;                                // 0x0280(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      TrapDefaultMonsterSpawner[0x28];                           // 0x0290(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	float                                              GadgetItemLevel;                                           // 0x02B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GadgetItemLevelDelta;                                      // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ItemLevelBonus;                                            // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HazardDamageMultiplier;                                    // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ItemSpokeMaxDelta;                                         // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideQuestDropChance;                                  // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5H81[0x3];                                     // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              QuestItemDropChance;                                       // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              QuestItemDropChanceDelta;                                  // 0x02D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreCameraDistanceVolumes;                              // 0x02D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2N43[0x3];                                     // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CameraDistance;                                            // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldDistance;                                      // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                PrimaryElement;                                            // 0x02E4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SpokeTag;                                                  // 0x02EC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TPF0[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BossAffixOverrides;                                        // 0x02F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OXFK[0x10];                                    // 0x0308(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       MapworksMonsterAffixTags;                                  // 0x0318(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       MonsterManagerDaytimeTags;                                 // 0x0338(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       MonsterManagerNighttimeTags;                               // 0x0358(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FProbabilisticTagSet                        MonsterLuck;                                               // 0x0378(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ThemedPropTags;                                            // 0x03C8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       QuestPoolTags;                                             // 0x03E8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FProbabilisticTagSet                        LootLuck;                                                  // 0x0408(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              CritterDensity;                                            // 0x0458(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GFJ9[0x4];                                     // 0x045C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Critter1[0x28];                                            // 0x045C(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Critter2[0x28];                                            // 0x0488(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Critter3[0x28];                                            // 0x04B0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FSkillsTableRowHandle                       AreaSkill1;                                                // 0x04D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSkillsTableRowHandle                       AreaSkill2;                                                // 0x04E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSkillsTableRowHandle                       AreaSkill3;                                                // 0x04F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   CameraYawRandomRange;                                      // 0x0508(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HandheldTonemapperGamma;                                   // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanSendPetToTown;                                         // 0x0514(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReviveInTown;                                             // 0x0515(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanReviveInPlace;                                         // 0x0516(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanReviveAtLevelEntrance;                                 // 0x0517(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanReviveInTown;                                          // 0x0518(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanReviveInPreviousArea;                                  // 0x0519(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLifeBoundItemsOnly;                                       // 0x051A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FDTR[0x5];                                     // 0x051B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       DisallowedSkillTags;                                       // 0x0520(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLoadingScreenRowHandle                     LoadingScreenBackgroundOverride;                           // 0x0540(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLoadingScreenRowHandle                     LoadingScreenForegroundOverride;                           // 0x0550(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLoadingScreenRowHandle                     LoadingScreenTextOverride;                                 // 0x0560(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       LoadingScreenTags;                                         // 0x0570(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                ItemQualityLevelBoost;                                     // 0x0590(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J1DC[0x4];                                     // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       MapworksTags;                                              // 0x0598(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                SelectionWeight;                                           // 0x05B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T84D[0x4];                                     // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       QuestTags;                                                 // 0x05C0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6EOM[0x58];                                    // 0x05E0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayTagContainer>               ItemTags;                                                  // 0x0638(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ItemExcludeTags;                                           // 0x0648(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>               AffixTags;                                                 // 0x0668(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>               MonsterTags;                                               // 0x0678(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                                MonsterPopulationTag;                                      // 0x0688(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RegionTag;                                                 // 0x0690(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bCanPlayCutscenes;                                         // 0x06B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FR7Y[0x4F];                                    // 0x06B1(0x004F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MonsterSpawnerActiveChance;                                // 0x0700(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MonsterSpawnerNightActiveChance;                           // 0x0704(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPvPEnabled;                                               // 0x0708(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YDQ4[0x7];                                     // 0x0709(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.AudioInputDevice
// 0x0020
struct FAudioInputDevice
{
	unsigned char                                      UnknownData_8NVH[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.BossData
// 0x0100 (0x0118 - 0x0018)
struct FBossData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_PWWQ[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0020(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FMonstersTableRowHandle                     BaseMonster;                                               // 0x0038(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     AffixString;                                               // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldSpawnReturnPortal;                                   // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DestroyAllMonstersOnDie;                                   // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_95F2[0x2];                                     // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ScaleMultiplier;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitpointBonusMultiplier;                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageBonusMultiplier;                                     // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpeedBonusMultiplier;                                      // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExperienceBonusMultiplier;                                 // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AggroRadius;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldTether;                                             // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YQRA[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChaseRadius;                                               // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IgnoreMinionChance;                                        // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      StatusEffect[0x28];                                        // 0x0080(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FName                                       ItemSpawn;                                                 // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TraitString1;                                              // 0x00B0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TraitString2;                                              // 0x00C0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TraitString3;                                              // 0x00D0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K1JU[0x30];                                    // 0x00E0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ItemSpawnGameplayTags;                                     // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Frontiers.ActorKeyPair
// 0x0010
struct FActorKeyPair
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Key;                                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VC3J[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.RotationGroupRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FRotationGroupRowHandle : public FTLDataTableRowHandle
{

};

// ScriptStruct Frontiers.CatalogData
// 0x00B8 (0x00D0 - 0x0018)
struct FCatalogData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_J3EZ[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                Category;                                                  // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InternalDescription;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDisplayed;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IUKB[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemTableRowHandle                         ItemTableRowHandle;                                        // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortPropTableRowHandle                     FortPropTableRowHandle;                                    // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       RecipeName;                                                // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GrantedByDlcId;                                            // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XYS6[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       MailboxFrom;                                               // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       MailboxBody;                                               // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       PurchaseDetails;                                           // 0x00A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FRotationGroupRowHandle                     RotationGroup;                                             // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                RealMoneyCost;                                             // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EDeliveryType                            DeliveryType;                                              // 0x00CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SyncToCommerce;                                            // 0x00CD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F5X7[0x2];                                     // 0x00CE(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.RotationGroupData
// 0x0028 (0x0040 - 0x0018)
struct FRotationGroupData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_MOEB[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Description;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   StartDate;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   EditDate;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.TLChatMessage
// 0x00B8
struct FTLChatMessage
{
	unsigned char                                      UnknownData_8VXY[0xB8];                                    // 0x0000(0x00B8) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.TLChatMessageMetadata
// 0x0040
struct FTLChatMessageMetadata
{
	struct FString                                     CharacterName;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OnlinePlatform;                                            // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformId;                                                // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentDifficultyIndex;                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LowestDifficultyIndex;                                     // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentLevel;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_96O7[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.ChatHandle
// 0x0028
struct FChatHandle
{
	struct FString                                     PlatformAccountId;                                         // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlatformAccountName;                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Frontiers_ETLPlatform                              HostPlatform;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_45J6[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.CinematicData
// 0x0030 (0x0048 - 0x0018)
struct FCinematicData : public FTLTableRowBase
{
	unsigned char                                      UnknownData_R7HO[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      VideoSource[0x28];                                         // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Frontiers.TLBulkDataWrapper
// 0x0008
struct FTLBulkDataWrapper
{
	unsigned char                                      UnknownData_VEEA[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.StateResponse
// 0x0018
struct FStateResponse
{
	struct FString                                     GameCode;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinimumContentVersion;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7V4P[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Frontiers.AddBonus
// 0x0028
struct FAddBonus
{
	struct FString                                     Currency;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyAmount;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ELIH[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     reason;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ClaimPurchase
// 0x0070
struct FClaimPurchase
{
	struct FString                                     Transaction_Id;                                            // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     User_Id;                                                   // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Sku;                                                       // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Creation_Reason;                                           // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     External_Id;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Status;                                                    // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Fullfilled_Date;                                           // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.PurchaseTransaction
// 0x0030
struct FPurchaseTransaction
{
	struct FString                                     IpAddress;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterName;                                             // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ItemId;                                                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemQuantity;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyAmount;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ItemListResponseItem
// 0x0048
struct FItemListResponseItem
{
	struct FName                                       ProdItemName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           ProdItemNo;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OrgPrice;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Price;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CategoryName;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAllowedPurchases;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_72KY[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AvailabilityStartDate;                                     // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AvailabilityEndDate;                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ItemListResponseData
// 0x0010
struct FItemListResponseData
{
	TArray<struct FItemListResponseItem>               Items;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Frontiers.ItemListResponse
// 0x0020
struct FItemListResponse
{
	struct FString                                     Status;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemListResponseData                       Data;                                                      // 0x0010(0x0010) (NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
