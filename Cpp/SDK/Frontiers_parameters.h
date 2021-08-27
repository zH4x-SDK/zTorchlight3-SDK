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

// Function Frontiers.PlayerComponent.GetTLPlayerController
struct UPlayerComponent_GetTLPlayerController_Params
{
	class ATLPlayerController*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerComponent.GetTLCharacter
struct UPlayerComponent_GetTLCharacter_Params
{
	class ATLCharacter*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerComponent.GetPlayerController
struct UPlayerComponent_GetPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerComponent.GetPawn
struct UPlayerComponent_GetPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerComponent.GetController
struct UPlayerComponent_GetController_Params
{
	class AController*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.Store
struct UActiveTrait_Store_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.SetMaxValue
struct UActiveTrait_SetMaxValue_Params
{
};

// Function Frontiers.ActiveTrait.Set
struct UActiveTrait_Set_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.Reset
struct UActiveTrait_Reset_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.OnRep_Value
struct UActiveTrait_OnRep_Value_Params
{
};

// Function Frontiers.ActiveTrait.OnRep_RowName
struct UActiveTrait_OnRep_RowName_Params
{
};

// Function Frontiers.ActiveTrait.OnRep_MaxValue
struct UActiveTrait_OnRep_MaxValue_Params
{
};

// Function Frontiers.ActiveTrait.GetUIPercentDiscrete
struct UActiveTrait_GetUIPercentDiscrete_Params
{
	class UActiveTrait*                                ActiveTrait;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.GetUIPercent
struct UActiveTrait_GetUIPercent_Params
{
	class UActiveTrait*                                ActiveTrait;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.GetUILabel
struct UActiveTrait_GetUILabel_Params
{
	class UActiveTrait*                                ActiveTrait;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.GetMin
struct UActiveTrait_GetMin_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.GetMax
struct UActiveTrait_GetMax_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.GetDisplayName
struct UActiveTrait_GetDisplayName_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActiveTraitName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.GetDeltaMax
struct UActiveTrait_GetDeltaMax_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.GetDelta
struct UActiveTrait_GetDelta_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.GetActiveTrait
struct UActiveTrait_GetActiveTrait_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActiveTraitName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActiveTrait*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.Get
struct UActiveTrait_Get_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTrait.Add
struct UActiveTrait_Add_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActiveTraitReplicateCheap.OnRep_Fraction
struct UActiveTraitReplicateCheap_OnRep_Fraction_Params
{
};

// Function Frontiers.ActiveTraitMonitorComponent.OnRuleTriggered
struct UActiveTraitMonitorComponent_OnRuleTriggered_Params
{
	struct FName                                       Data;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibraryShared.GetClassDefaultObject
struct UActorFunctionLibraryShared_GetClassDefaultObject_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.TeleportTowardsPathable
struct UActorFunctionLibrary_TeleportTowardsPathable_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.TeleportTo
struct UActorFunctionLibrary_TeleportTo_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequirePathable;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.TeleportNearTo
struct UActorFunctionLibrary_TeleportNearTo_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistance;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAttempts;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.SortActorsByDistance
struct UActorFunctionLibrary_SortActorsByDistance_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsToSort;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.SetSelectedByMeshParameter
struct UActorFunctionLibrary_SetSelectedByMeshParameter_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSet;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.SetSelectedByCustomDepthStencil
struct UActorFunctionLibrary_SetSelectedByCustomDepthStencil_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSet;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.ResetPlayerClickTrace
struct UActorFunctionLibrary_ResetPlayerClickTrace_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.RandomIntegerFromStreamFullRange
struct UActorFunctionLibrary_RandomIntegerFromStreamFullRange_Params
{
	struct FRandomStream                               RandomStream;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.PickRandomArrayIndex
struct UActorFunctionLibrary_PickRandomArrayIndex_Params
{
	TArray<int>                                        TargetArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Item;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.IsPawnInMapworks
struct UActorFunctionLibrary_IsPawnInMapworks_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.IsHardcore
struct UActorFunctionLibrary_IsHardcore_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.IsActorWithinRange
struct UActorFunctionLibrary_IsActorWithinRange_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistance;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.IsActorWithinAngleRange
struct UActorFunctionLibrary_IsActorWithinAngleRange_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngleDegrees;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.IsActorOwnerLocal
struct UActorFunctionLibrary_IsActorOwnerLocal_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.GetPlayerInSameArea
struct UActorFunctionLibrary_GetPlayerInSameArea_Params
{
	class AActor*                                      AreaContextActor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.GetLocationInFrontOfActor
struct UActorFunctionLibrary_GetLocationInFrontOfActor_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.GetFeetLocation
struct UActorFunctionLibrary_GetFeetLocation_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.GetAreaActorsByType
struct UActorFunctionLibrary_GetAreaActorsByType_Params
{
	class AActor*                                      ReferenceActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ActorClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.ForceDestroyComponent
struct UActorFunctionLibrary_ForceDestroyComponent_Params
{
	class UActorComponent*                             Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.DisablePlayerClickTrace
struct UActorFunctionLibrary_DisablePlayerClickTrace_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.DisableCollisionAndNavigation
struct UActorFunctionLibrary_DisableCollisionAndNavigation_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.AreActorsWithinRange
struct UActorFunctionLibrary_AreActorsWithinRange_Params
{
	class AActor*                                      First;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Second;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistance;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorFunctionLibrary.AreActorsWithinAngleRange
struct UActorFunctionLibrary_AreActorsWithinAngleRange_Params
{
	class AActor*                                      Source;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngleDegrees;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorMortalityComponent.ServerGiveUpOnAllyRevive
struct UActorMortalityComponent_ServerGiveUpOnAllyRevive_Params
{
};

// Function Frontiers.ActorMortalityComponent.ReviveActor
struct UActorMortalityComponent_ReviveActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorMortalityComponent.OnRep_DeathInfo
struct UActorMortalityComponent_OnRep_DeathInfo_Params
{
};

// Function Frontiers.ActorMortalityComponent.MulticastReviveActorInternal
struct UActorMortalityComponent_MulticastReviveActorInternal_Params
{
};

// Function Frontiers.ActorMortalityComponent.MarkAllyReviveExpired
struct UActorMortalityComponent_MarkAllyReviveExpired_Params
{
};

// Function Frontiers.ActorMortalityComponent.KillActor
struct UActorMortalityComponent_KillActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOverkill;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorMortalityComponent.IsDyingOrDead
struct UActorMortalityComponent_IsDyingOrDead_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorMortalityComponent.GetTimeSinceActorDeath
struct UActorMortalityComponent_GetTimeSinceActorDeath_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorMortalityComponent.GetActorDeathTimestamp
struct UActorMortalityComponent_GetActorDeathTimestamp_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ActorMortalityComponent.ClientAllyReviveExpired
struct UActorMortalityComponent_ClientAllyReviveExpired_Params
{
};

// Function Frontiers.ActorMortalityComponent.ActorIsDyingOrDead
struct UActorMortalityComponent_ActorIsDyingOrDead_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AllowedTypeFunctionLibrary.IsAllowedOnServer
struct UAllowedTypeFunctionLibrary_IsAllowedOnServer_Params
{
	Frontiers_EAllowedType                             Allowed;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AllowedTypeFunctionLibrary.IsAllowedOnClient
struct UAllowedTypeFunctionLibrary_IsAllowedOnClient_Params
{
	Frontiers_EAllowedType                             Allowed;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AllowedTypeFunctionLibrary.IsAllowed
struct UAllowedTypeFunctionLibrary_IsAllowed_Params
{
	class UObject*                                     Context;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EAllowedType                             Allowed;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillShape.RequestActivation
struct ASkillShape_RequestActivation_Params
{
};

// Function Frontiers.AllyReviveShape.OnRevived
struct AAllyReviveShape_OnRevived_Params
{
	class APawn*                                       Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AllyReviveShape.GetRevivingDecal
struct AAllyReviveShape_GetRevivingDecal_Params
{
	class UTLDecalComponent*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AllyReviveShape.GetReviveRangeDecal
struct AAllyReviveShape_GetReviveRangeDecal_Params
{
	class UTLDecalComponent*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AllyReviveShape.GetReviveExpireDecal
struct AAllyReviveShape_GetReviveExpireDecal_Params
{
	class UTLDecalComponent*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AllyReviveShape.CanBeRevivedByAlly
struct AAllyReviveShape_CanBeRevivedByAlly_Params
{
	class AActor*                                      DeadActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AnimatedMesh.SpawnAnimatedMesh
struct AAnimatedMesh_SpawnAnimatedMesh_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpawnAnimatedMeshParams                    InParams;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FString                                     DebugContext;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAnimatedMesh*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AnimNotify_AttachActor.DestroyAttachment
struct UAnimNotify_AttachActor_DestroyAttachment_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AnimNotify_CameraShake.TLPlayWorldCameraShake
struct UAnimNotify_CameraShake_TLPlayWorldCameraShake_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Shake;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Epicenter;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InnerRadius;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterRadius;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OwnerRequired;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOrientShakeTowardsEpicenter;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Area.CompileRules
struct UArea_CompileRules_Params
{
};

// Function Frontiers.Area.CompileAreaBlueprintRules
struct UArea_CompileAreaBlueprintRules_Params
{
	class UBlueprint*                                  TargetArea;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Area.AddRuleFromMetadata
struct UArea_AddRuleFromMetadata_Params
{
	struct FRuleSetMetaData                            MetaData;                                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.Area.AddRule
struct UArea_AddRule_Params
{
	class UClass*                                      RuleSetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADRLGRuleSet*                                RuleSetOverride;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EDRLGRuleSetMethod                       Method;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Attempts;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredSuccessfulAttempts;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipToNextAfterRequiredRuleSuccess;                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttemptsTimesSize;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequiredTimesSize;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttemptsTimesForts;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequiredTimesFortCount;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EWarpToIndex                             WarpAddedByRuleSet;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopHere;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.UpdateBaseMovementSpeed
struct ATLCharacter_UpdateBaseMovementSpeed_Params
{
	float                                              NewBaseMovementSpeed;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.ShouldDoGetHit
struct ATLCharacter_ShouldDoGetHit_Params
{
	class UActiveTrait*                                RecentDamageActiveTrait;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.RemoveGameplayTag
struct ATLCharacter_RemoveGameplayTag_Params
{
	struct FGameplayTag                                Tag;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.RecalculateMovement
struct ATLCharacter_RecalculateMovement_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTraitKey                                   Key;                                                       // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.OnWardrobeItemsChange
struct ATLCharacter_OnWardrobeItemsChange_Params
{
	TArray<struct FItemReplicatedData>                 Items;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.OnRep_TLReplicatedMovement
struct ATLCharacter_OnRep_TLReplicatedMovement_Params
{
};

// Function Frontiers.TLCharacter.OnHitpointsHitZero
struct ATLCharacter_OnHitpointsHitZero_Params
{
	class UActiveTrait*                                Trait;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.OnExitLimbo
struct ATLCharacter_OnExitLimbo_Params
{
};

// Function Frontiers.TLCharacter.OnEnterLimbo
struct ATLCharacter_OnEnterLimbo_Params
{
};

// Function Frontiers.TLCharacter.OnControllerReplicated
struct ATLCharacter_OnControllerReplicated_Params
{
};

// Function Frontiers.TLCharacter.OnClientDeadCharacterDestroyed
struct ATLCharacter_OnClientDeadCharacterDestroyed_Params
{
	class AActor*                                      SelfActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.OnCharacterResurrect
struct ATLCharacter_OnCharacterResurrect_Params
{
};

// Function Frontiers.TLCharacter.OnCharacterDeath
struct ATLCharacter_OnCharacterDeath_Params
{
	class AActor*                                      Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.NativeOnCharacterResurrect
struct ATLCharacter_NativeOnCharacterResurrect_Params
{
	class APawn*                                       RevivedPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.NativeOnCharacterDeath
struct ATLCharacter_NativeOnCharacterDeath_Params
{
	class APawn*                                       DeadPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.IsPlayer
struct ATLCharacter_IsPlayer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.IsNPC
struct ATLCharacter_IsNPC_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.IsMonster
struct ATLCharacter_IsMonster_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.IsMinion
struct ATLCharacter_IsMinion_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.InvulnerabilityChanged
struct ATLCharacter_InvulnerabilityChanged_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTraitKey                                   Key;                                                       // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.GiveItem
struct ATLCharacter_GiveItem_Params
{
	struct FName                                       ItemName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ItemLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Context;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowCelebration;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.GetPlayerRowHandle
struct ATLCharacter_GetPlayerRowHandle_Params
{
	struct FPlayerTableRowHandle                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.GetOwnedGameplayTags
struct ATLCharacter_GetOwnedGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.GetMonsterRowHandle
struct ATLCharacter_GetMonsterRowHandle_Params
{
	struct FMonstersTableRowHandle                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.GetMinionRowHandle
struct ATLCharacter_GetMinionRowHandle_Params
{
	struct FMinionTableRowHandle                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.GetDisplayName
struct ATLCharacter_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.EndRootMotionForce
struct ATLCharacter_EndRootMotionForce_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.DestroyLightRig
struct ATLCharacter_DestroyLightRig_Params
{
	class AActor*                                      DestroyedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.ClientWarpLocal
struct ATLCharacter_ClientWarpLocal_Params
{
	struct FVector                                     ModifiedTargetLocation;                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoCameraLag;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayCameraFade;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.BlueprintGetHitboxCapsuleComponent
struct ATLCharacter_BlueprintGetHitboxCapsuleComponent_Params
{
	class UCapsuleComponent*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.AddGameplayTags
struct ATLCharacter_AddGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacter.AddGameplayTag
struct ATLCharacter_AddGameplayTag_Params
{
	struct FGameplayTag                                Tag;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PortalProxy.SpawnPortalProxyAtLocation
struct APortalProxy_SpawnPortalProxyAtLocation_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PortalClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EPlayerPortalDestinationType             DestinationType;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOneWay;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortalProxy*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PortalProxy.SpawnPortalProxy
struct APortalProxy_SpawnPortalProxy_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PortalClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EPlayerPortalDestinationType             DestinationType;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOneWay;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortalProxy*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLActorShared.GetOwnedGameplayTags
struct ATLActorShared_GetOwnedGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLActor.TLGetDisplayName
struct ATLActor_TLGetDisplayName_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLActor.OnOperatedClient
struct ATLActor_OnOperatedClient_Params
{
	class AActor*                                      Other;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLActor.OnOperated
struct ATLActor_OnOperated_Params
{
	class AActor*                                      Operator;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLActor.ClientOperate
struct ATLActor_ClientOperate_Params
{
	class AActor*                                      Other;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLActor.BlueprintServerOnTakeDamage
struct ATLActor_BlueprintServerOnTakeDamage_Params
{
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Gadget.SpawnItem
struct AGadget_SpawnItem_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       TargetPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Gadget.SetQuestId
struct AGadget_SetQuestId_Params
{
	struct FName                                       QuestId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Gadget.SetCanBeOperated
struct AGadget_SetCanBeOperated_Params
{
	bool                                               bStatus;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Gadget.OnStatusChanged
struct AGadget_OnStatusChanged_Params
{
};

// Function Frontiers.Gadget.OnAnimationHitEvent
struct AGadget_OnAnimationHitEvent_Params
{
	int                                                HitIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Gadget.IsAtLastOperationalStatus
struct AGadget_IsAtLastOperationalStatus_Params
{
	class AActor*                                      Other;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Gadget.HasOperateHitNotify
struct AGadget_HasOperateHitNotify_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Gadget.GetOperationalStatus
struct AGadget_GetOperationalStatus_Params
{
	class AActor*                                      Other;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Gadget.FindSkeletalMesh
struct AGadget_FindSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Gadget.CheckOperateFailed
struct AGadget_CheckOperateFailed_Params
{
	class AActor*                                      Other;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Gadget.CanBeOperated
struct AGadget_CanBeOperated_Params
{
	class AActor*                                      Operator;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Gadget.BlueprintGetOperatorActor
struct AGadget_BlueprintGetOperatorActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Gadget.AdvanceOperationalStatus
struct AGadget_AdvanceOperationalStatus_Params
{
	class AActor*                                      Operator;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.WarpGadget.SetWarpMapMarker
struct AWarpGadget_SetWarpMapMarker_Params
{
	FrontiersUI_EMapMarkerType                         Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.WarpGadget.IsBossWarpGadget
struct AWarpGadget_IsBossWarpGadget_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.WarpGadget.InitialClientActivateWarp
struct AWarpGadget_InitialClientActivateWarp_Params
{
};

// Function Frontiers.WarpGadget.GetMapMarkerComponent
struct AWarpGadget_GetMapMarkerComponent_Params
{
	class UMapMarkerComponent*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.WarpGadget.ActivateWarpGadgetVFX
struct AWarpGadget_ActivateWarpGadgetVFX_Params
{
};

// Function Frontiers.PortraitLighting.GetKeyLight
struct APortraitLighting_GetKeyLight_Params
{
	class ULightComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PortraitLighting.GetFillLight
struct APortraitLighting_GetFillLight_Params
{
	class ULightComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PortraitLighting.GetCamera
struct APortraitLighting_GetCamera_Params
{
	class USceneCaptureComponent2D*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PostProcessFlagInterface.SetPostProcessFlag
struct UPostProcessFlagInterface_SetPostProcessFlag_Params
{
	Frontiers_ETLPostProcessFlag                       Flag;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ProcComponent.RemoveProc
struct UProcComponent_RemoveProc_Params
{
	struct FProcTableRowHandle                         RowHandle;                                                 // (Parm, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ProcComponent.OnSkillStart
struct UProcComponent_OnSkillStart_Params
{
	struct FSkillEventData                             SkillEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Frontiers.ProcComponent.OnSkillDidDamage
struct UProcComponent_OnSkillDidDamage_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DeliveryActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ProcComponent.OnHitActiveTraitMin
struct UProcComponent_OnHitActiveTraitMin_Params
{
	class UActiveTrait*                                ActiveTrait;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ProcComponent.OnHitActiveTraitMax
struct UProcComponent_OnHitActiveTraitMax_Params
{
	class UActiveTrait*                                ActiveTrait;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ProcComponent.AddProc
struct UProcComponent_AddProc_Params
{
	struct FProcTableRowHandle                         RowHandle;                                                 // (Parm, NativeAccessSpecifierPublic)
	int                                                RequiredSkillInstanceId;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.QuestEvent.ActivateTask
struct UQuestEvent_ActivateTask_Params
{
	class ACharacter*                                  Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillTargeting.ProjectPointToNavigation
struct USkillTargeting_ProjectPointToNavigation_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillTargeting.ProjectLocationToActorFeet
struct USkillTargeting_ProjectLocationToActorFeet_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InLocation;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillTargeting.IsValidTarget
struct USkillTargeting_IsValidTarget_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillTargeting.IsTargetInRange
struct USkillTargeting_IsTargetInRange_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Tolerance;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillTargeting.IsEnemy
struct USkillTargeting_IsEnemy_Params
{
	class AActor*                                      Attacker;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Victim;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillTargeting.IsAlly
struct USkillTargeting_IsAlly_Params
{
	class AActor*                                      Attacker;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Victim;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillTargeting.GetTargetTraceType
struct USkillTargeting_GetTargetTraceType_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillTargeting.GetRandomPointInNavigableRadius
struct USkillTargeting_GetRandomPointInNavigableRadius_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillTargeting.FindTarget
struct USkillTargeting_FindTarget_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SpreadsheetLoader.BlueprintGetSpreadsheetLoader
struct USpreadsheetLoader_BlueprintGetSpreadsheetLoader_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpreadsheetLoader*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StorePlayerComponent.ServerRequestPurchases
struct UStorePlayerComponent_ServerRequestPurchases_Params
{
};

// Function Frontiers.StorePlayerComponent.ServerRequestBalances
struct UStorePlayerComponent_ServerRequestBalances_Params
{
};

// Function Frontiers.StorePlayerComponent.ServerPurchaseOnlineStoreItem
struct UStorePlayerComponent_ServerPurchaseOnlineStoreItem_Params
{
	struct FCatalogTableRowHandle                      CatalogRowHandle;                                          // (Parm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StorePlayerComponent.RequestPurchases
struct UStorePlayerComponent_RequestPurchases_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StorePlayerComponent.RequestBalances
struct UStorePlayerComponent_RequestBalances_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StorePlayerComponent.OnRep_Balances
struct UStorePlayerComponent_OnRep_Balances_Params
{
};

// Function Frontiers.StorePlayerComponent.ClientTransactionSucceeded
struct UStorePlayerComponent_ClientTransactionSucceeded_Params
{
	struct FCatalogData                                CatalogData;                                               // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StorePlayerComponent.ClientTransactionFailed
struct UStorePlayerComponent_ClientTransactionFailed_Params
{
};

// Function Frontiers.StorePlayerComponent.ClientClaimSucceeded
struct UStorePlayerComponent_ClientClaimSucceeded_Params
{
	TArray<struct FCraftingProductOutput>              Products;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.SwitchboardClient.UpdateServerInfo
struct USwitchboardClient_UpdateServerInfo_Params
{
	struct FString                                     ZoneId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Platform;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FServerPublisherPlayer>              Players;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.SwitchboardClient.Start
struct USwitchboardClient_Start_Params
{
	class UTLGameInstance*                             InGameInstance;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SwitchboardClient.ProcessSwitchboardEvent
struct USwitchboardClient_ProcessSwitchboardEvent_Params
{
	struct FSwitchboardEvent                           Event;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.SwitchboardClient.OnData
struct USwitchboardClient_OnData_Params
{
	struct FString                                     Data;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SwitchboardClient.Broadcast
struct USwitchboardClient_Broadcast_Params
{
	struct FSwitchboardEvent                           Event;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TeamInterface.SetTeam
struct UTeamInterface_SetTeam_Params
{
	Frontiers_ETLTeam                                  InTeam;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TeamInterface.GetTeam
struct UTeamInterface_GetTeam_Params
{
	Frontiers_ETLTeam                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayComponent.OnTimeOfDayPeriodStarted
struct UTimeOfDayComponent_OnTimeOfDayPeriodStarted_Params
{
};

// Function Frontiers.TimeOfDayComponent.OnTimeOfDayPeriodEnded
struct UTimeOfDayComponent_OnTimeOfDayPeriodEnded_Params
{
};

// Function Frontiers.TimeOfDayGadget.TriggerExit
struct ATimeOfDayGadget_TriggerExit_Params
{
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayGadget.Trigger
struct ATimeOfDayGadget_Trigger_Params
{
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ConductorHandler.PreHandleObjects
struct UConductorHandler_PreHandleObjects_Params
{
};

// Function Frontiers.ConductorHandler.PostHandleObjects
struct UConductorHandler_PostHandleObjects_Params
{
};

// Function Frontiers.ConductorHandler.IsAreaHandler
struct UConductorHandler_IsAreaHandler_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ConductorHandler.HandleObject
struct UConductorHandler_HandleObject_Params
{
	class ATLCharacter*                                Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayHandler.UpdateMaterialTimeOfDayGlobals_LightDirection
struct UTimeOfDayHandler_UpdateMaterialTimeOfDayGlobals_LightDirection_Params
{
	class UMaterialParameterCollection*                MaterialGlobals;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayHandler.UpdateMaterialTimeOfDayGlobals
struct UTimeOfDayHandler_UpdateMaterialTimeOfDayGlobals_Params
{
	class UMaterialParameterCollection*                MaterialGlobals;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayHandler.SetLocalLightTint
struct UTimeOfDayHandler_SetLocalLightTint_Params
{
	struct FLinearColor                                NewTint;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ELightAccentTint                         TintType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayHandler.GetTimeOfDayPlayerLightIntensity
struct UTimeOfDayHandler_GetTimeOfDayPlayerLightIntensity_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayHandler.GetLocalAccentLightColor
struct UTimeOfDayHandler_GetLocalAccentLightColor_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ELightAccentTint                         TintType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayHandler.GetFogTimeOfDaySettings
struct UTimeOfDayHandler_GetFogTimeOfDaySettings_Params
{
	float                                              TimeOfDayPercent;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimeOfDayFogSetting                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayHandler.GetDirectionalLightTransform
struct UTimeOfDayHandler_GetDirectionalLightTransform_Params
{
	float                                              TimeOfDayPercent;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayHandler.GetCurrentTimeOfDayColor
struct UTimeOfDayHandler_GetCurrentTimeOfDayColor_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ToggleSceneComponent.ToggleEnabled
struct UToggleSceneComponent_ToggleEnabled_Params
{
};

// Function Frontiers.ToggleSceneComponent.SetEnabled
struct UToggleSceneComponent_SetEnabled_Params
{
	bool                                               bNewStatus;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ToggleSceneComponent.Enable
struct UToggleSceneComponent_Enable_Params
{
};

// Function Frontiers.ToggleSceneComponent.Disable
struct UToggleSceneComponent_Disable_Params
{
};

// Function Frontiers.TimeOfDayLight.TriggerExit
struct UTimeOfDayLight_TriggerExit_Params
{
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayLight.Trigger
struct UTimeOfDayLight_Trigger_Params
{
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayParticle.TriggerExit
struct UTimeOfDayParticle_TriggerExit_Params
{
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayParticle.Trigger
struct UTimeOfDayParticle_Trigger_Params
{
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ToggleShape.NativeOnShapeEndOverlap
struct UToggleShape_NativeOnShapeEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ToggleShape.NativeOnShapeBeginOverlap
struct UToggleShape_NativeOnShapeBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayShape.TriggerExit
struct UTimeOfDayShape_TriggerExit_Params
{
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayShape.Trigger
struct UTimeOfDayShape_Trigger_Params
{
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayTriggerInterface.TriggerExit
struct UTimeOfDayTriggerInterface_TriggerExit_Params
{
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TimeOfDayTriggerInterface.Trigger
struct UTimeOfDayTriggerInterface_Trigger_Params
{
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLAIController.SetupBlackboard
struct ATLAIController_SetupBlackboard_Params
{
};

// Function Frontiers.TLAIHelpers.FindNamedTargetPoint
struct UTLAIHelpers_FindNamedTargetPoint_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TargetName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OutTargetPointActor;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLAnimInstance.OnWeaponsUpdated
struct UTLAnimInstance_OnWeaponsUpdated_Params
{
	TArray<struct FWeaponSlotData>                     TraitModes;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLAnimInstance.OnWardrobeItemsChange
struct UTLAnimInstance_OnWardrobeItemsChange_Params
{
	TArray<struct FItemReplicatedData>                 Items;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLAnimInstance.OnMontageStarted_Implementation
struct UTLAnimInstance_OnMontageStarted_Implementation_Params
{
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLAnimInstance.OnIdleAnimationLoaded
struct UTLAnimInstance_OnIdleAnimationLoaded_Params
{
};

// Function Frontiers.TLAnimInstance.IsMontageInSection
struct UTLAnimInstance_IsMontageInSection_Params
{
	class UAnimMontage*                                Montage;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMontageSection                          Section;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLAnimInstance.EndLoopingAnimationImmediately
struct UTLAnimInstance_EndLoopingAnimationImmediately_Params
{
};

// Function Frontiers.TLAnimInstance.EndLoopingAnimation
struct UTLAnimInstance_EndLoopingAnimation_Params
{
};

// Function Frontiers.TLAnimInstance.AnimNotify_ShowWeapons
struct UTLAnimInstance_AnimNotify_ShowWeapons_Params
{
};

// Function Frontiers.TLAnimInstance.AnimNotify_ShowActor
struct UTLAnimInstance_AnimNotify_ShowActor_Params
{
};

// Function Frontiers.TLAnimInstance.AnimNotify_ResourceLoop
struct UTLAnimInstance_AnimNotify_ResourceLoop_Params
{
};

// Function Frontiers.TLAnimInstance.AnimNotify_HideWeapons
struct UTLAnimInstance_AnimNotify_HideWeapons_Params
{
};

// Function Frontiers.TLAnimInstance.AnimNotify_HideActor
struct UTLAnimInstance_AnimNotify_HideActor_Params
{
};

// Function Frontiers.TLAnimInstance.AnimNotify_GetHitFinish
struct UTLAnimInstance_AnimNotify_GetHitFinish_Params
{
};

// Function Frontiers.TLAnimInstance.AnimNotify_Footstep
struct UTLAnimInstance_AnimNotify_Footstep_Params
{
};

// Function Frontiers.TLAnimInstance.AnimNotify_ChannelLoop
struct UTLAnimInstance_AnimNotify_ChannelLoop_Params
{
};

// Function Frontiers.TLBreakable.SpawnItemsForEachNearbyPlayer
struct ATLBreakable_SpawnItemsForEachNearbyPlayer_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLBreakable.SpawnItems
struct ATLBreakable_SpawnItems_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       TargetPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLBreakable.OnBreakableDestroyed
struct ATLBreakable_OnBreakableDestroyed_Params
{
	class APawn*                                       Dying;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLBreakable.OnBreak
struct ATLBreakable_OnBreak_Params
{
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLBreakable.IsAliveUpdated
struct ATLBreakable_IsAliveUpdated_Params
{
};

// Function Frontiers.TLBreakable.GetDestructibleComponent
struct ATLBreakable_GetDestructibleComponent_Params
{
	class UDestructibleComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacterMovementComponent.EnableEaseToStop
struct UTLCharacterMovementComponent_EnableEaseToStop_Params
{
	float                                              BrakingDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BrakingDeceleration;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacterMovementComponent.DisableEaseToStop
struct UTLCharacterMovementComponent_DisableEaseToStop_Params
{
};

// Function Frontiers.TLCheatManager.ZoneInstanceEnableClientDebug
struct UTLCheatManager_ZoneInstanceEnableClientDebug_Params
{
};

// Function Frontiers.TLCheatManager.XboxLiveS2S
struct UTLCheatManager_XboxLiveS2S_Params
{
};

// Function Frontiers.TLCheatManager.XboxLiveRecentPlayers
struct UTLCheatManager_XboxLiveRecentPlayers_Params
{
};

// Function Frontiers.TLCheatManager.XboxLiveActivitySet
struct UTLCheatManager_XboxLiveActivitySet_Params
{
};

// Function Frontiers.TLCheatManager.XboxLiveActivityDelete
struct UTLCheatManager_XboxLiveActivityDelete_Params
{
};

// Function Frontiers.TLCheatManager.WaypointsUnlockAll
struct UTLCheatManager_WaypointsUnlockAll_Params
{
};

// Function Frontiers.TLCheatManager.WaypointsClear
struct UTLCheatManager_WaypointsClear_Params
{
};

// Function Frontiers.TLCheatManager.WarpsUnlock
struct UTLCheatManager_WarpsUnlock_Params
{
	bool                                               bUnlocked;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.WakeUpArea
struct UTLCheatManager_WakeUpArea_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.UnloadArea
struct UTLCheatManager_UnloadArea_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.TransmogUnlockAll
struct UTLCheatManager_TransmogUnlockAll_Params
{
};

// Function Frontiers.TLCheatManager.Traits
struct UTLCheatManager_Traits_Params
{
	struct FString                                     TraitString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ToggleWidget
struct UTLCheatManager_ToggleWidget_Params
{
	FrontiersUI_ETLWidget                              Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ToggleNameplates
struct UTLCheatManager_ToggleNameplates_Params
{
};

// Function Frontiers.TLCheatManager.TimeDilation
struct UTLCheatManager_TimeDilation_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.TermsOfServiceReset
struct UTLCheatManager_TermsOfServiceReset_Params
{
};

// Function Frontiers.TLCheatManager.TeleportPlayerAbsolute
struct UTLCheatManager_TeleportPlayerAbsolute_Params
{
	float                                              X;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.TeleportPlayer
struct UTLCheatManager_TeleportPlayer_Params
{
	float                                              X;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.Stuck
struct UTLCheatManager_Stuck_Params
{
};

// Function Frontiers.TLCheatManager.SteamDataSuiteReset
struct UTLCheatManager_SteamDataSuiteReset_Params
{
};

// Function Frontiers.TLCheatManager.StatusEffect
struct UTLCheatManager_StatusEffect_Params
{
	struct FString                                     RowName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseSelectedActor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.Speed
struct UTLCheatManager_Speed_Params
{
	float                                              MetersPerSecond;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SpawnerDeactivate
struct UTLCheatManager_SpawnerDeactivate_Params
{
};

// Function Frontiers.TLCheatManager.SpawnerActivate
struct UTLCheatManager_SpawnerActivate_Params
{
};

// Function Frontiers.TLCheatManager.SoundStopAll
struct UTLCheatManager_SoundStopAll_Params
{
};

// Function Frontiers.TLCheatManager.SoundPlayEvent
struct UTLCheatManager_SoundPlayEvent_Params
{
	struct FString                                     EventName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SocialPreview
struct UTLCheatManager_SocialPreview_Params
{
	struct FString                                     PreviewPlatformAccountName;                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SleepArea
struct UTLCheatManager_SleepArea_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SkinDye
struct UTLCheatManager_SkinDye_Params
{
	struct FString                                     DyeRowName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SkillsRespecTest
struct UTLCheatManager_SkillsRespecTest_Params
{
};

// Function Frontiers.TLCheatManager.SkillsRespec
struct UTLCheatManager_SkillsRespec_Params
{
};

// Function Frontiers.TLCheatManager.SkillsForceRespec
struct UTLCheatManager_SkillsForceRespec_Params
{
	struct FString                                     TimestampUTC;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SkillSetLevel
struct UTLCheatManager_SkillSetLevel_Params
{
	struct FString                                     SkillName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SkillsClear
struct UTLCheatManager_SkillsClear_Params
{
};

// Function Frontiers.TLCheatManager.SkillsByRPCMode
struct UTLCheatManager_SkillsByRPCMode_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SkillsAll
struct UTLCheatManager_SkillsAll_Params
{
	struct FString                                     Params;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ShutdownServer
struct UTLCheatManager_ShutdownServer_Params
{
};

// Function Frontiers.TLCheatManager.ShowBlockedUGC
struct UTLCheatManager_ShowBlockedUGC_Params
{
};

// Function Frontiers.TLCheatManager.ShowBlockedCommunication
struct UTLCheatManager_ShowBlockedCommunication_Params
{
};

// Function Frontiers.TLCheatManager.SetTimeOfDay
struct UTLCheatManager_SetTimeOfDay_Params
{
	float                                              TimeOfDayPercent;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SetLinkCode
struct UTLCheatManager_SetLinkCode_Params
{
	struct FString                                     TestLinkCode;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SetLegacyFractions
struct UTLCheatManager_SetLegacyFractions_Params
{
	bool                                               bUseLegacyFractions;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SetEnvironment
struct UTLCheatManager_SetEnvironment_Params
{
	struct FString                                     InEnvironment;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SetBuild
struct UTLCheatManager_SetBuild_Params
{
	struct FString                                     InBuild;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SetActiveTrait
struct UTLCheatManager_SetActiveTrait_Params
{
	struct FName                                       TraitName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.SessionJoinTest
struct UTLCheatManager_SessionJoinTest_Params
{
};

// Function Frontiers.TLCheatManager.ServerSetLogLevel
struct UTLCheatManager_ServerSetLogLevel_Params
{
	struct FString                                     LogName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Verbosity;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ServerProfileSnapshot
struct UTLCheatManager_ServerProfileSnapshot_Params
{
	uint32_t                                           Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ServerProfileEnd
struct UTLCheatManager_ServerProfileEnd_Params
{
};

// Function Frontiers.TLCheatManager.ServerProfileBegin
struct UTLCheatManager_ServerProfileBegin_Params
{
};

// Function Frontiers.TLCheatManager.ServerNote
struct UTLCheatManager_ServerNote_Params
{
	struct FString                                     NoteText;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ServerNetProfileEnd
struct UTLCheatManager_ServerNetProfileEnd_Params
{
};

// Function Frontiers.TLCheatManager.ServerNetProfileBegin
struct UTLCheatManager_ServerNetProfileBegin_Params
{
};

// Function Frontiers.TLCheatManager.ServerMemoryReport
struct UTLCheatManager_ServerMemoryReport_Params
{
};

// Function Frontiers.TLCheatManager.ServerFakeNetworkingFailureChance
struct UTLCheatManager_ServerFakeNetworkingFailureChance_Params
{
	Frontiers_EServiceType                             Service;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FailureChance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ServerFakeNetworkingDelay
struct UTLCheatManager_ServerFakeNetworkingDelay_Params
{
	Frontiers_EServiceType                             Service;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Delay;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ServerExec
struct UTLCheatManager_ServerExec_Params
{
	struct FString                                     ExecString;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ServerEnableBotCommands
struct UTLCheatManager_ServerEnableBotCommands_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ServerConfigSetEntry
struct UTLCheatManager_ServerConfigSetEntry_Params
{
	struct FString                                     Section;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ServerConfigGetEntry
struct UTLCheatManager_ServerConfigGetEntry_Params
{
	struct FString                                     Section;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ServerAreaManagerList
struct UTLCheatManager_ServerAreaManagerList_Params
{
};

// Function Frontiers.TLCheatManager.SendHeartbeat
struct UTLCheatManager_SendHeartbeat_Params
{
};

// Function Frontiers.TLCheatManager.RunScript
struct UTLCheatManager_RunScript_Params
{
	struct FString                                     ScriptName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ResetAreaInstances
struct UTLCheatManager_ResetAreaInstances_Params
{
};

// Function Frontiers.TLCheatManager.RepGraphLog
struct UTLCheatManager_RepGraphLog_Params
{
};

// Function Frontiers.TLCheatManager.ReloadRecipes
struct UTLCheatManager_ReloadRecipes_Params
{
};

// Function Frontiers.TLCheatManager.RefillEnergy
struct UTLCheatManager_RefillEnergy_Params
{
};

// Function Frontiers.TLCheatManager.RecipeUnitGrant
struct UTLCheatManager_RecipeUnitGrant_Params
{
	struct FString                                     RecipeUnit;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.QuestStop
struct UTLCheatManager_QuestStop_Params
{
	struct FString                                     QuestId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.QuestStartOnAll
struct UTLCheatManager_QuestStartOnAll_Params
{
	struct FString                                     QuestId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.QuestStart
struct UTLCheatManager_QuestStart_Params
{
	struct FString                                     QuestId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.QuestsReload
struct UTLCheatManager_QuestsReload_Params
{
};

// Function Frontiers.TLCheatManager.QuestsListCompleted
struct UTLCheatManager_QuestsListCompleted_Params
{
};

// Function Frontiers.TLCheatManager.QuestsListAvailable
struct UTLCheatManager_QuestsListAvailable_Params
{
};

// Function Frontiers.TLCheatManager.QuestsListAll
struct UTLCheatManager_QuestsListAll_Params
{
};

// Function Frontiers.TLCheatManager.QuestsListActiveDailiesWeeklies
struct UTLCheatManager_QuestsListActiveDailiesWeeklies_Params
{
};

// Function Frontiers.TLCheatManager.QuestsListActive
struct UTLCheatManager_QuestsListActive_Params
{
};

// Function Frontiers.TLCheatManager.QuestsClearCompleted
struct UTLCheatManager_QuestsClearCompleted_Params
{
};

// Function Frontiers.TLCheatManager.QuestsClearAll
struct UTLCheatManager_QuestsClearAll_Params
{
};

// Function Frontiers.TLCheatManager.QuestsClearActive
struct UTLCheatManager_QuestsClearActive_Params
{
};

// Function Frontiers.TLCheatManager.QuestSchedule
struct UTLCheatManager_QuestSchedule_Params
{
	struct FString                                     QuestId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.QuestOffer
struct UTLCheatManager_QuestOffer_Params
{
	struct FString                                     QuestId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TaskId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.QuestCompleteTask
struct UTLCheatManager_QuestCompleteTask_Params
{
	struct FString                                     QuestId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TaskId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.QuestComplete
struct UTLCheatManager_QuestComplete_Params
{
	struct FString                                     QuestId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.PvPEnabled
struct UTLCheatManager_PvPEnabled_Params
{
};

// Function Frontiers.TLCheatManager.PurchaseMenu
struct UTLCheatManager_PurchaseMenu_Params
{
};

// Function Frontiers.TLCheatManager.PortalSetReturn
struct UTLCheatManager_PortalSetReturn_Params
{
	struct FString                                     AccountId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AreaDataName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SpawnLocationName;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.PortalDataLog
struct UTLCheatManager_PortalDataLog_Params
{
};

// Function Frontiers.TLCheatManager.PlayTestHere
struct UTLCheatManager_PlayTestHere_Params
{
};

// Function Frontiers.TLCheatManager.PlayTest
struct UTLCheatManager_PlayTest_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.PlayerSave
struct UTLCheatManager_PlayerSave_Params
{
};

// Function Frontiers.TLCheatManager.PlayerLoad
struct UTLCheatManager_PlayerLoad_Params
{
	struct FString                                     PlayerName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.PlayerInfo
struct UTLCheatManager_PlayerInfo_Params
{
};

// Function Frontiers.TLCheatManager.PlayerCount
struct UTLCheatManager_PlayerCount_Params
{
	unsigned char                                      Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.Player
struct UTLCheatManager_Player_Params
{
	struct FString                                     PlayerClass;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldSave;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.PlatformProfile
struct UTLCheatManager_PlatformProfile_Params
{
};

// Function Frontiers.TLCheatManager.PickUpAllItems
struct UTLCheatManager_PickUpAllItems_Params
{
};

// Function Frontiers.TLCheatManager.PetStoreList
struct UTLCheatManager_PetStoreList_Params
{
};

// Function Frontiers.TLCheatManager.PetSkill
struct UTLCheatManager_PetSkill_Params
{
	struct FString                                     PetSkillRow;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.PetShoppingListClear
struct UTLCheatManager_PetShoppingListClear_Params
{
};

// Function Frontiers.TLCheatManager.PetShoppingListAdd
struct UTLCheatManager_PetShoppingListAdd_Params
{
	struct FString                                     CatalogRow;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.PetSendToTown
struct UTLCheatManager_PetSendToTown_Params
{
};

// Function Frontiers.TLCheatManager.PetReturn
struct UTLCheatManager_PetReturn_Params
{
};

// Function Frontiers.TLCheatManager.PetRemoveAll
struct UTLCheatManager_PetRemoveAll_Params
{
};

// Function Frontiers.TLCheatManager.PetRemove
struct UTLCheatManager_PetRemove_Params
{
	struct FString                                     OptionalPetName;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.PetInfo
struct UTLCheatManager_PetInfo_Params
{
};

// Function Frontiers.TLCheatManager.Pet
struct UTLCheatManager_Pet_Params
{
	struct FString                                     MinionTableRow;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.PartyWith
struct UTLCheatManager_PartyWith_Params
{
	struct FString                                     CharName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.PartyInfo
struct UTLCheatManager_PartyInfo_Params
{
};

// Function Frontiers.TLCheatManager.PartyForceFailJoin
struct UTLCheatManager_PartyForceFailJoin_Params
{
	bool                                               bFailJoin;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.PartyFindAndJoin
struct UTLCheatManager_PartyFindAndJoin_Params
{
	struct FString                                     AccountId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.PartyCancelOverride
struct UTLCheatManager_PartyCancelOverride_Params
{
};

// Function Frontiers.TLCheatManager.OSSSimulateNetworkConnectionStatusChanged
struct UTLCheatManager_OSSSimulateNetworkConnectionStatusChanged_Params
{
	unsigned char                                      OldStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NewStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.OcclusionShader
struct UTLCheatManager_OcclusionShader_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.Note
struct UTLCheatManager_Note_Params
{
	struct FString                                     NoteText;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.NoMonsters
struct UTLCheatManager_NoMonsters_Params
{
};

// Function Frontiers.TLCheatManager.NoCritters
struct UTLCheatManager_NoCritters_Params
{
};

// Function Frontiers.TLCheatManager.NoCooldown
struct UTLCheatManager_NoCooldown_Params
{
};

// Function Frontiers.TLCheatManager.NameSpawnLog
struct UTLCheatManager_NameSpawnLog_Params
{
	struct FString                                     NameSpawnRow;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PackName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PackCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.MusicOverrideIntensity
struct UTLCheatManager_MusicOverrideIntensity_Params
{
	Frontiers_EMusicIntensity                          Intensity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.MonsterSpawnLog
struct UTLCheatManager_MonsterSpawnLog_Params
{
	struct FString                                     MonsterSpawnRow;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.MonsterSpawn
struct UTLCheatManager_MonsterSpawn_Params
{
	struct FString                                     MonsterSpawnRow;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.MonsterMovementCapsuleScale
struct UTLCheatManager_MonsterMovementCapsuleScale_Params
{
	float                                              Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.MonsterInvulnerable
struct UTLCheatManager_MonsterInvulnerable_Params
{
};

// Function Frontiers.TLCheatManager.Monster
struct UTLCheatManager_Monster_Params
{
	struct FString                                     MonsterSpawnParams;                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAtCursor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.MapWorks
struct UTLCheatManager_MapWorks_Params
{
	struct FString                                     MapWorksRow;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.LoreLogPlay
struct UTLCheatManager_LoreLogPlay_Params
{
	struct FString                                     DialogRow;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.LogTickingSlateWidgets
struct UTLCheatManager_LogTickingSlateWidgets_Params
{
};

// Function Frontiers.TLCheatManager.LogNavigationComponents
struct UTLCheatManager_LogNavigationComponents_Params
{
};

// Function Frontiers.TLCheatManager.LoginSessionInfo
struct UTLCheatManager_LoginSessionInfo_Params
{
};

// Function Frontiers.TLCheatManager.Login
struct UTLCheatManager_Login_Params
{
	struct FString                                     Token;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuthCode;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserHash;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformAccountId;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.LoadingScreenShowForArea
struct UTLCheatManager_LoadingScreenShowForArea_Params
{
	struct FName                                       AreaName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.LoadingScreenShow
struct UTLCheatManager_LoadingScreenShow_Params
{
	struct FName                                       Background;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Foreground;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Text;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.LoadingScreenClear
struct UTLCheatManager_LoadingScreenClear_Params
{
};

// Function Frontiers.TLCheatManager.ListTraits
struct UTLCheatManager_ListTraits_Params
{
};

// Function Frontiers.TLCheatManager.LevelSet
struct UTLCheatManager_LevelSet_Params
{
	float                                              LevelToSet;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.LevelAddExperience
struct UTLCheatManager_LevelAddExperience_Params
{
	float                                              AmountToAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.LegendaryCollectionUnlockAll
struct UTLCheatManager_LegendaryCollectionUnlockAll_Params
{
	bool                                               bUnlock;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.KillPet
struct UTLCheatManager_KillPet_Params
{
};

// Function Frontiers.TLCheatManager.KillMe
struct UTLCheatManager_KillMe_Params
{
};

// Function Frontiers.TLCheatManager.KillAll
struct UTLCheatManager_KillAll_Params
{
};

// Function Frontiers.TLCheatManager.ItemWithEnchants
struct UTLCheatManager_ItemWithEnchants_Params
{
	struct FString                                     AffixString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemClass;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ItemWithAffixes
struct UTLCheatManager_ItemWithAffixes_Params
{
	struct FString                                     AffixString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemClass;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ItemSpawnLog
struct UTLCheatManager_ItemSpawnLog_Params
{
	struct FString                                     ItemClass;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter1;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter2;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter3;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ItemSpawn
struct UTLCheatManager_ItemSpawn_Params
{
	struct FString                                     ItemSpawnRowName;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter1;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter2;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter3;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ItemGive
struct UTLCheatManager_ItemGive_Params
{
	struct FString                                     ItemClass;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter1;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter2;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter3;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ItemDropsDisable
struct UTLCheatManager_ItemDropsDisable_Params
{
};

// Function Frontiers.TLCheatManager.Item
struct UTLCheatManager_Item_Params
{
	struct FString                                     ItemClass;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter1;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter2;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter3;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.InventoryRemove
struct UTLCheatManager_InventoryRemove_Params
{
	int                                                InventoryId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.InventoryList
struct UTLCheatManager_InventoryList_Params
{
};

// Function Frontiers.TLCheatManager.InventoryClearItems
struct UTLCheatManager_InventoryClearItems_Params
{
};

// Function Frontiers.TLCheatManager.InboxSyncLedger
struct UTLCheatManager_InboxSyncLedger_Params
{
	struct FString                                     SinceUUIDTimestamp;                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.InboxReset
struct UTLCheatManager_InboxReset_Params
{
};

// Function Frontiers.TLCheatManager.InboxPostLedgerGold
struct UTLCheatManager_InboxPostLedgerGold_Params
{
	int                                                AmountGold;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MessageSubject;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.InboxLog
struct UTLCheatManager_InboxLog_Params
{
};

// Function Frontiers.TLCheatManager.Inbox
struct UTLCheatManager_Inbox_Params
{
};

// Function Frontiers.TLCheatManager.HUDToggle
struct UTLCheatManager_HUDToggle_Params
{
};

// Function Frontiers.TLCheatManager.HttpTest
struct UTLCheatManager_HttpTest_Params
{
	struct FString                                     URL;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Verb;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.Head
struct UTLCheatManager_Head_Params
{
	struct FString                                     ItemRowName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.HairDye
struct UTLCheatManager_HairDye_Params
{
	struct FString                                     DyeRowName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.Hair
struct UTLCheatManager_Hair_Params
{
	struct FString                                     ItemRowName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.GSomberg
struct UTLCheatManager_GSomberg_Params
{
	struct FString                                     Params;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.GrantDLCItems
struct UTLCheatManager_GrantDLCItems_Params
{
	int                                                DLCId;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.GotoUrl
struct UTLCheatManager_GotoUrl_Params
{
	struct FString                                     URL;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.GodMode
struct UTLCheatManager_GodMode_Params
{
};

// Function Frontiers.TLCheatManager.GetBalance
struct UTLCheatManager_GetBalance_Params
{
};

// Function Frontiers.TLCheatManager.FriendsRefresh
struct UTLCheatManager_FriendsRefresh_Params
{
};

// Function Frontiers.TLCheatManager.FriendsList
struct UTLCheatManager_FriendsList_Params
{
};

// Function Frontiers.TLCheatManager.FriendsDummyName
struct UTLCheatManager_FriendsDummyName_Params
{
	int                                                NumFriends;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DummyName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.FriendsDummy
struct UTLCheatManager_FriendsDummy_Params
{
	int                                                NumFriends;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.FriendsDelete
struct UTLCheatManager_FriendsDelete_Params
{
};

// Function Frontiers.TLCheatManager.FortUnlockAll
struct UTLCheatManager_FortUnlockAll_Params
{
};

// Function Frontiers.TLCheatManager.FortSaveDefault
struct UTLCheatManager_FortSaveDefault_Params
{
};

// Function Frontiers.TLCheatManager.FortReset
struct UTLCheatManager_FortReset_Params
{
};

// Function Frontiers.TLCheatManager.FortProp
struct UTLCheatManager_FortProp_Params
{
	struct FString                                     PropRowName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.FortDelete
struct UTLCheatManager_FortDelete_Params
{
};

// Function Frontiers.TLCheatManager.FortChangeOwner
struct UTLCheatManager_FortChangeOwner_Params
{
	struct FString                                     AccountId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.FogOfWarToggleCheatFlag
struct UTLCheatManager_FogOfWarToggleCheatFlag_Params
{
};

// Function Frontiers.TLCheatManager.EnsureServer
struct UTLCheatManager_EnsureServer_Params
{
};

// Function Frontiers.TLCheatManager.Enchant
struct UTLCheatManager_Enchant_Params
{
	struct FString                                     RecipeName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.EmberWeaponSetDrain
struct UTLCheatManager_EmberWeaponSetDrain_Params
{
	float                                              PercentOfMax;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.EmberWeaponSetCharge
struct UTLCheatManager_EmberWeaponSetCharge_Params
{
	float                                              PercentOfMax;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.EmberWeaponClear
struct UTLCheatManager_EmberWeaponClear_Params
{
};

// Function Frontiers.TLCheatManager.EmberWeapon
struct UTLCheatManager_EmberWeapon_Params
{
	struct FName                                       EmberWeaponName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.DungeonStateLog
struct UTLCheatManager_DungeonStateLog_Params
{
};

// Function Frontiers.TLCheatManager.DungeonSetSeed
struct UTLCheatManager_DungeonSetSeed_Params
{
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.DungeonSetRandomSeed
struct UTLCheatManager_DungeonSetRandomSeed_Params
{
};

// Function Frontiers.TLCheatManager.DungeonSetHighestChallengeLevel
struct UTLCheatManager_DungeonSetHighestChallengeLevel_Params
{
	int                                                ChallengeLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.DungeonOpenMenu
struct UTLCheatManager_DungeonOpenMenu_Params
{
};

// Function Frontiers.TLCheatManager.DungeonFailed
struct UTLCheatManager_DungeonFailed_Params
{
};

// Function Frontiers.TLCheatManager.DungeonClustersAll
struct UTLCheatManager_DungeonClustersAll_Params
{
};

// Function Frontiers.TLCheatManager.DungeonClusterLookup
struct UTLCheatManager_DungeonClusterLookup_Params
{
	int                                                ChallengeLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.DungeonCleared
struct UTLCheatManager_DungeonCleared_Params
{
};

// Function Frontiers.TLCheatManager.DungeonChallengeRare
struct UTLCheatManager_DungeonChallengeRare_Params
{
	int                                                ChallengeLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.DungeonChallengeNormal
struct UTLCheatManager_DungeonChallengeNormal_Params
{
	int                                                ChallengeLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.DungeonChallengeMagic
struct UTLCheatManager_DungeonChallengeMagic_Params
{
	int                                                ChallengeLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.Disenchant
struct UTLCheatManager_Disenchant_Params
{
	int                                                ItemId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.DisconnectClient
struct UTLCheatManager_DisconnectClient_Params
{
};

// Function Frontiers.TLCheatManager.DifficultySet
struct UTLCheatManager_DifficultySet_Params
{
	struct FString                                     Difficulty;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.DebugPanelToggle
struct UTLCheatManager_DebugPanelToggle_Params
{
};

// Function Frontiers.TLCheatManager.DamageActor
struct UTLCheatManager_DamageActor_Params
{
	struct FString                                     ActorName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.CutscenesEnabled
struct UTLCheatManager_CutscenesEnabled_Params
{
};

// Function Frontiers.TLCheatManager.CurrencySetEnabled
struct UTLCheatManager_CurrencySetEnabled_Params
{
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.CurrencyAddToAll
struct UTLCheatManager_CurrencyAddToAll_Params
{
	int                                                Amount;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.CultureReset
struct UTLCheatManager_CultureReset_Params
{
};

// Function Frontiers.TLCheatManager.CrashServer
struct UTLCheatManager_CrashServer_Params
{
};

// Function Frontiers.TLCheatManager.Crash
struct UTLCheatManager_Crash_Params
{
};

// Function Frontiers.TLCheatManager.CraftingSetTime
struct UTLCheatManager_CraftingSetTime_Params
{
	int                                                SecondsLeft;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.CraftingQueueClear
struct UTLCheatManager_CraftingQueueClear_Params
{
};

// Function Frontiers.TLCheatManager.CraftingNoCosts
struct UTLCheatManager_CraftingNoCosts_Params
{
	bool                                               bNoCostsEnabled;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ContractReset
struct UTLCheatManager_ContractReset_Params
{
};

// Function Frontiers.TLCheatManager.ContractMakeActive
struct UTLCheatManager_ContractMakeActive_Params
{
	struct FString                                     Contract;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ContractLevelSet
struct UTLCheatManager_ContractLevelSet_Params
{
	float                                              LevelToSet;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ContractLevelAddFame
struct UTLCheatManager_ContractLevelAddFame_Params
{
	float                                              AmountToAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ConfigSetEntry
struct UTLCheatManager_ConfigSetEntry_Params
{
	struct FString                                     Section;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ConfigGetEntry
struct UTLCheatManager_ConfigGetEntry_Params
{
	struct FString                                     Section;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ClientSideRootMotion
struct UTLCheatManager_ClientSideRootMotion_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ClientFakeNetworkingDelay
struct UTLCheatManager_ClientFakeNetworkingDelay_Params
{
	int                                                Delay;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ClientBotMode
struct UTLCheatManager_ClientBotMode_Params
{
	struct FString                                     Behavior;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ClearWaypointBinding
struct UTLCheatManager_ClearWaypointBinding_Params
{
};

// Function Frontiers.TLCheatManager.ClearNavigationComponents
struct UTLCheatManager_ClearNavigationComponents_Params
{
};

// Function Frontiers.TLCheatManager.CinematicPlay
struct UTLCheatManager_CinematicPlay_Params
{
	struct FString                                     CinematicTableRowName;                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ChatSetUsingMicrophone
struct UTLCheatManager_ChatSetUsingMicrophone_Params
{
	bool                                               bUsingMicrophone;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ChatSessionInfo
struct UTLCheatManager_ChatSessionInfo_Params
{
};

// Function Frontiers.TLCheatManager.ChatPartyMemberThreshold
struct UTLCheatManager_ChatPartyMemberThreshold_Params
{
	int                                                MinimumMembers;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ChatHandleInfo
struct UTLCheatManager_ChatHandleInfo_Params
{
};

// Function Frontiers.TLCheatManager.ChatAreaEchoOn
struct UTLCheatManager_ChatAreaEchoOn_Params
{
};

// Function Frontiers.TLCheatManager.ChatAreaEchoOff
struct UTLCheatManager_ChatAreaEchoOff_Params
{
};

// Function Frontiers.TLCheatManager.Character
struct UTLCheatManager_Character_Params
{
	struct FString                                     CharID;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.BotMode
struct UTLCheatManager_BotMode_Params
{
};

// Function Frontiers.TLCheatManager.Bot_OperateWarp
struct UTLCheatManager_Bot_OperateWarp_Params
{
};

// Function Frontiers.TLCheatManager.Boss
struct UTLCheatManager_Boss_Params
{
	struct FString                                     BossSpawnParams;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.BlockedUserCheck
struct UTLCheatManager_BlockedUserCheck_Params
{
	struct FString                                     Identifier;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.AudioSetDebugPlayActor
struct UTLCheatManager_AudioSetDebugPlayActor_Params
{
};

// Function Frontiers.TLCheatManager.AudioSetDebugDisplayActor
struct UTLCheatManager_AudioSetDebugDisplayActor_Params
{
};

// Function Frontiers.TLCheatManager.AudioInputInfo
struct UTLCheatManager_AudioInputInfo_Params
{
};

// Function Frontiers.TLCheatManager.AudioClearDebugPlayActor
struct UTLCheatManager_AudioClearDebugPlayActor_Params
{
};

// Function Frontiers.TLCheatManager.AudioClearDebugDisplayActor
struct UTLCheatManager_AudioClearDebugDisplayActor_Params
{
};

// Function Frontiers.TLCheatManager.AreaSeed
struct UTLCheatManager_AreaSeed_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.AreaNext
struct UTLCheatManager_AreaNext_Params
{
	struct FString                                     ExitName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.AreaMapReveal
struct UTLCheatManager_AreaMapReveal_Params
{
};

// Function Frontiers.TLCheatManager.AreaManagerList
struct UTLCheatManager_AreaManagerList_Params
{
};

// Function Frontiers.TLCheatManager.AreaLogProxies
struct UTLCheatManager_AreaLogProxies_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProxySearch;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.AreaLogLevels
struct UTLCheatManager_AreaLogLevels_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.Area
struct UTLCheatManager_Area_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.ArcLogin
struct UTLCheatManager_ArcLogin_Params
{
	struct FString                                     ArcAccount;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.AlwaysKill
struct UTLCheatManager_AlwaysKill_Params
{
};

// Function Frontiers.TLCheatManager.AINoTarget
struct UTLCheatManager_AINoTarget_Params
{
};

// Function Frontiers.TLCheatManager.AIFreeze
struct UTLCheatManager_AIFreeze_Params
{
};

// Function Frontiers.TLCheatManager.AffixSpawnLog
struct UTLCheatManager_AffixSpawnLog_Params
{
	struct FString                                     ItemClass;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter1;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter2;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter3;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.AchievementsReset
struct UTLCheatManager_AchievementsReset_Params
{
};

// Function Frontiers.TLCheatManager.AchievementProgressAdd
struct UTLCheatManager_AchievementProgressAdd_Params
{
	struct FString                                     AchievementIdString;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatManager.AchievementComplete
struct UTLCheatManager_AchievementComplete_Params
{
	struct FString                                     AchievementIdString;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatPlayTest.AllocateSkills
struct UTLCheatPlayTest_AllocateSkills_Params
{
	class APawn*                                       Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BaseSkillWeight;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillWeightPerLevel;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RegretPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatPlayTest.AddPet
struct UTLCheatPlayTest_AddPet_Params
{
	class APawn*                                       Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatPlayTest.AddItemsForArea
struct UTLCheatPlayTest_AddItemsForArea_Params
{
	class APawn*                                       Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         AreaRow;                                                   // (Parm, NativeAccessSpecifierPublic)
	struct FItemSpawnTableRowHandle                    ItemSpawnRow;                                              // (Parm, NativeAccessSpecifierPublic)
	float                                              InItemLevelBias;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.XboxLiveS2S
struct ATLCheatRunner_XboxLiveS2S_Params
{
	Frontiers_EHttpVerb                                Verb;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Domain;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     URI;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Body;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerZoomTimeOfDay
struct ATLCheatRunner_ServerZoomTimeOfDay_Params
{
	bool                                               bForward;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerZoneInstanceEnableClientDebug
struct ATLCheatRunner_ServerZoneInstanceEnableClientDebug_Params
{
};

// Function Frontiers.TLCheatRunner.ServerWaypointsUnlockOrClear
struct ATLCheatRunner_ServerWaypointsUnlockOrClear_Params
{
	bool                                               bUnlocked;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerWarpsUnlock
struct ATLCheatRunner_ServerWarpsUnlock_Params
{
	bool                                               bUnlocked;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerWakeUpArea
struct ATLCheatRunner_ServerWakeUpArea_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerUnloadArea
struct ATLCheatRunner_ServerUnloadArea_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerTransmogUnlockAll
struct ATLCheatRunner_ServerTransmogUnlockAll_Params
{
};

// Function Frontiers.TLCheatRunner.ServerTraits
struct ATLCheatRunner_ServerTraits_Params
{
	struct FString                                     TraitString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerToggleNoMonsters
struct ATLCheatRunner_ServerToggleNoMonsters_Params
{
};

// Function Frontiers.TLCheatRunner.ServerToggleLevelSequencesEnabled
struct ATLCheatRunner_ServerToggleLevelSequencesEnabled_Params
{
};

// Function Frontiers.TLCheatRunner.ServerTimeDilation
struct ATLCheatRunner_ServerTimeDilation_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerTeleportPlayerAbsolute
struct ATLCheatRunner_ServerTeleportPlayerAbsolute_Params
{
	float                                              X;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerTeleportPlayer
struct ATLCheatRunner_ServerTeleportPlayer_Params
{
	float                                              X;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerStuck
struct ATLCheatRunner_ServerStuck_Params
{
};

// Function Frontiers.TLCheatRunner.ServerStatusEffect
struct ATLCheatRunner_ServerStatusEffect_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EffectRowName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSpeed
struct ATLCheatRunner_ServerSpeed_Params
{
	float                                              MetersPerSecond;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSpawnerDeactivate
struct ATLCheatRunner_ServerSpawnerDeactivate_Params
{
};

// Function Frontiers.TLCheatRunner.ServerSpawnerActivate
struct ATLCheatRunner_ServerSpawnerActivate_Params
{
};

// Function Frontiers.TLCheatRunner.ServerSocialPreview
struct ATLCheatRunner_ServerSocialPreview_Params
{
	struct FString                                     PreviewPlatformAccountName;                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSleepArea
struct ATLCheatRunner_ServerSleepArea_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSkinDye
struct ATLCheatRunner_ServerSkinDye_Params
{
	struct FString                                     RowName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSkillsRespecTest
struct ATLCheatRunner_ServerSkillsRespecTest_Params
{
};

// Function Frontiers.TLCheatRunner.ServerSkillsRespec
struct ATLCheatRunner_ServerSkillsRespec_Params
{
};

// Function Frontiers.TLCheatRunner.ServerSkillsForceRespec
struct ATLCheatRunner_ServerSkillsForceRespec_Params
{
	struct FString                                     TimestampUTC;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSkillSetLevel
struct ATLCheatRunner_ServerSkillSetLevel_Params
{
	struct FString                                     SkillName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSkillsClear
struct ATLCheatRunner_ServerSkillsClear_Params
{
};

// Function Frontiers.TLCheatRunner.ServerSkillsByRPC
struct ATLCheatRunner_ServerSkillsByRPC_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSkillsAll
struct ATLCheatRunner_ServerSkillsAll_Params
{
	struct FString                                     Params;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerShutdown
struct ATLCheatRunner_ServerShutdown_Params
{
};

// Function Frontiers.TLCheatRunner.ServerSetTimeOfDay
struct ATLCheatRunner_ServerSetTimeOfDay_Params
{
	float                                              TimeOfDayPercent;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSetPortalToPartyMemberAreaDataName
struct ATLCheatRunner_ServerSetPortalToPartyMemberAreaDataName_Params
{
	struct FString                                     AreaGroup;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSetOcclusionShader
struct ATLCheatRunner_ServerSetOcclusionShader_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSetLogLevel
struct ATLCheatRunner_ServerSetLogLevel_Params
{
	struct FString                                     LogName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Verbosity;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSetLegacyFractions
struct ATLCheatRunner_ServerSetLegacyFractions_Params
{
	bool                                               bUseLegacyFractions;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSetCharacter
struct ATLCheatRunner_ServerSetCharacter_Params
{
	struct FString                                     CharID;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSetActiveTrait
struct ATLCheatRunner_ServerSetActiveTrait_Params
{
	struct FName                                       ActiveTraitName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerSendHeartbeat
struct ATLCheatRunner_ServerSendHeartbeat_Params
{
};

// Function Frontiers.TLCheatRunner.ServerResumeTimeOfDay
struct ATLCheatRunner_ServerResumeTimeOfDay_Params
{
};

// Function Frontiers.TLCheatRunner.ServerResetInstances
struct ATLCheatRunner_ServerResetInstances_Params
{
};

// Function Frontiers.TLCheatRunner.ServerResetFort
struct ATLCheatRunner_ServerResetFort_Params
{
};

// Function Frontiers.TLCheatRunner.ServerRepGraphLog
struct ATLCheatRunner_ServerRepGraphLog_Params
{
};

// Function Frontiers.TLCheatRunner.ServerReloadRecipes
struct ATLCheatRunner_ServerReloadRecipes_Params
{
};

// Function Frontiers.TLCheatRunner.ServerRefillEnergy
struct ATLCheatRunner_ServerRefillEnergy_Params
{
};

// Function Frontiers.TLCheatRunner.ServerRecipeUnitGrant
struct ATLCheatRunner_ServerRecipeUnitGrant_Params
{
	struct FString                                     RecipeUnit;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerQuestStop
struct ATLCheatRunner_ServerQuestStop_Params
{
	struct FString                                     QuestId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerQuestStartOnAll
struct ATLCheatRunner_ServerQuestStartOnAll_Params
{
	struct FString                                     QuestId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerQuestStart
struct ATLCheatRunner_ServerQuestStart_Params
{
	struct FString                                     QuestId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerQuestsReload
struct ATLCheatRunner_ServerQuestsReload_Params
{
};

// Function Frontiers.TLCheatRunner.ServerQuestsClearCompleted
struct ATLCheatRunner_ServerQuestsClearCompleted_Params
{
};

// Function Frontiers.TLCheatRunner.ServerQuestsClearAll
struct ATLCheatRunner_ServerQuestsClearAll_Params
{
};

// Function Frontiers.TLCheatRunner.ServerQuestsClearActive
struct ATLCheatRunner_ServerQuestsClearActive_Params
{
};

// Function Frontiers.TLCheatRunner.ServerQuestSchedule
struct ATLCheatRunner_ServerQuestSchedule_Params
{
	struct FString                                     QuestId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerQuestCompleteTask
struct ATLCheatRunner_ServerQuestCompleteTask_Params
{
	struct FString                                     QuestId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TaskId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerQuestComplete
struct ATLCheatRunner_ServerQuestComplete_Params
{
	struct FString                                     QuestId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerPvPEnabled
struct ATLCheatRunner_ServerPvPEnabled_Params
{
};

// Function Frontiers.TLCheatRunner.ServerProfileSnapshot
struct ATLCheatRunner_ServerProfileSnapshot_Params
{
	uint32_t                                           Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerProfileEnd
struct ATLCheatRunner_ServerProfileEnd_Params
{
};

// Function Frontiers.TLCheatRunner.ServerProfileBegin
struct ATLCheatRunner_ServerProfileBegin_Params
{
};

// Function Frontiers.TLCheatRunner.ServerPortalSetReturn
struct ATLCheatRunner_ServerPortalSetReturn_Params
{
	struct FString                                     AccountId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SpawnLocation;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerPlayTestHere
struct ATLCheatRunner_ServerPlayTestHere_Params
{
};

// Function Frontiers.TLCheatRunner.ServerPlayTest
struct ATLCheatRunner_ServerPlayTest_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerPlayerLoad
struct ATLCheatRunner_ServerPlayerLoad_Params
{
	struct FString                                     PlayerName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerPlayerCount
struct ATLCheatRunner_ServerPlayerCount_Params
{
	unsigned char                                      PlayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerPlayer
struct ATLCheatRunner_ServerPlayer_Params
{
	struct FString                                     PlayerClass;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldSave;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerPickUpAllItems
struct ATLCheatRunner_ServerPickUpAllItems_Params
{
};

// Function Frontiers.TLCheatRunner.ServerPetSkill
struct ATLCheatRunner_ServerPetSkill_Params
{
	struct FString                                     PetSkillTableRow;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerPetReturn
struct ATLCheatRunner_ServerPetReturn_Params
{
};

// Function Frontiers.TLCheatRunner.ServerPetRemoveAll
struct ATLCheatRunner_ServerPetRemoveAll_Params
{
};

// Function Frontiers.TLCheatRunner.ServerPetRemove
struct ATLCheatRunner_ServerPetRemove_Params
{
	struct FString                                     MinionName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerPet
struct ATLCheatRunner_ServerPet_Params
{
	struct FString                                     MinionTableRow;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerPartyWith
struct ATLCheatRunner_ServerPartyWith_Params
{
	struct FString                                     CharName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerPartyForceFailJoin
struct ATLCheatRunner_ServerPartyForceFailJoin_Params
{
	bool                                               bFailJoin;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerPartyCancelOverride
struct ATLCheatRunner_ServerPartyCancelOverride_Params
{
};

// Function Frontiers.TLCheatRunner.ServerNote
struct ATLCheatRunner_ServerNote_Params
{
	struct FString                                     NoteText;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerNoCooldown
struct ATLCheatRunner_ServerNoCooldown_Params
{
};

// Function Frontiers.TLCheatRunner.ServerNetProfileEnd
struct ATLCheatRunner_ServerNetProfileEnd_Params
{
};

// Function Frontiers.TLCheatRunner.ServerNetProfileBegin
struct ATLCheatRunner_ServerNetProfileBegin_Params
{
};

// Function Frontiers.TLCheatRunner.ServerNameSpawnLog
struct ATLCheatRunner_ServerNameSpawnLog_Params
{
	struct FString                                     NameRowName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PackName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PackCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerMonsterSpawnLog
struct ATLCheatRunner_ServerMonsterSpawnLog_Params
{
	struct FString                                     MonsterClass;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerMonsterSpawn
struct ATLCheatRunner_ServerMonsterSpawn_Params
{
	struct FString                                     MonsterClass;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerMonsterMovementCapsuleScale
struct ATLCheatRunner_ServerMonsterMovementCapsuleScale_Params
{
	float                                              Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerMonsterInvulnerable
struct ATLCheatRunner_ServerMonsterInvulnerable_Params
{
};

// Function Frontiers.TLCheatRunner.ServerMonster
struct ATLCheatRunner_ServerMonster_Params
{
	struct FString                                     MonsterSpawnParams;                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerMemoryReport
struct ATLCheatRunner_ServerMemoryReport_Params
{
};

// Function Frontiers.TLCheatRunner.ServerMapWorks
struct ATLCheatRunner_ServerMapWorks_Params
{
	struct FString                                     MapWorksRow;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerLogNavigationComponents
struct ATLCheatRunner_ServerLogNavigationComponents_Params
{
};

// Function Frontiers.TLCheatRunner.ServerLevelSet
struct ATLCheatRunner_ServerLevelSet_Params
{
	float                                              LevelToSet;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerLevelAddExperience
struct ATLCheatRunner_ServerLevelAddExperience_Params
{
	float                                              AmountToAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerLegendaryCollectionUnlockAll
struct ATLCheatRunner_ServerLegendaryCollectionUnlockAll_Params
{
	bool                                               bUnlock;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerKillPet
struct ATLCheatRunner_ServerKillPet_Params
{
};

// Function Frontiers.TLCheatRunner.ServerKillMe
struct ATLCheatRunner_ServerKillMe_Params
{
};

// Function Frontiers.TLCheatRunner.ServerKillAll
struct ATLCheatRunner_ServerKillAll_Params
{
};

// Function Frontiers.TLCheatRunner.ServerItemWithAffixes
struct ATLCheatRunner_ServerItemWithAffixes_Params
{
	struct FString                                     AffixString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemClassString;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EAffixSource                             Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerItemDropsDisable
struct ATLCheatRunner_ServerItemDropsDisable_Params
{
};

// Function Frontiers.TLCheatRunner.ServerInventoryRemove
struct ATLCheatRunner_ServerInventoryRemove_Params
{
	int                                                InventoryId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerInventoryClearItems
struct ATLCheatRunner_ServerInventoryClearItems_Params
{
};

// Function Frontiers.TLCheatRunner.ServerInboxSync
struct ATLCheatRunner_ServerInboxSync_Params
{
	struct FString                                     SinceTimestamp;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerInboxReset
struct ATLCheatRunner_ServerInboxReset_Params
{
};

// Function Frontiers.TLCheatRunner.ServerInboxPostGold
struct ATLCheatRunner_ServerInboxPostGold_Params
{
	int                                                GoldAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MessageSubject;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerHead
struct ATLCheatRunner_ServerHead_Params
{
	struct FString                                     RowName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerHairDye
struct ATLCheatRunner_ServerHairDye_Params
{
	struct FString                                     RowName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerHair
struct ATLCheatRunner_ServerHair_Params
{
	struct FString                                     RowName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerGSomberg
struct ATLCheatRunner_ServerGSomberg_Params
{
	struct FString                                     Params;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerGodMode
struct ATLCheatRunner_ServerGodMode_Params
{
};

// Function Frontiers.TLCheatRunner.ServerFortUnlockAll
struct ATLCheatRunner_ServerFortUnlockAll_Params
{
};

// Function Frontiers.TLCheatRunner.ServerFortSaveDefault
struct ATLCheatRunner_ServerFortSaveDefault_Params
{
};

// Function Frontiers.TLCheatRunner.ServerFortProp
struct ATLCheatRunner_ServerFortProp_Params
{
	struct FString                                     PropRow;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerFortChangeOwner
struct ATLCheatRunner_ServerFortChangeOwner_Params
{
	struct FString                                     AccountId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerFakeNetworkingFailureChance
struct ATLCheatRunner_ServerFakeNetworkingFailureChance_Params
{
	Frontiers_EServiceType                             Service;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FailureChance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerFakeNetworkingDelay
struct ATLCheatRunner_ServerFakeNetworkingDelay_Params
{
	Frontiers_EServiceType                             Service;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Delay;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerExec
struct ATLCheatRunner_ServerExec_Params
{
	struct FString                                     ExecString;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerEnsure
struct ATLCheatRunner_ServerEnsure_Params
{
};

// Function Frontiers.TLCheatRunner.ServerEnchant
struct ATLCheatRunner_ServerEnchant_Params
{
	struct FString                                     RecipeName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerEnableBotCommands
struct ATLCheatRunner_ServerEnableBotCommands_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerEmberWeaponSetDrain
struct ATLCheatRunner_ServerEmberWeaponSetDrain_Params
{
	float                                              PercentOfMax;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerEmberWeaponSetCharge
struct ATLCheatRunner_ServerEmberWeaponSetCharge_Params
{
	float                                              PercentOfMax;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerEmberWeaponClear
struct ATLCheatRunner_ServerEmberWeaponClear_Params
{
};

// Function Frontiers.TLCheatRunner.ServerEmberWeapon
struct ATLCheatRunner_ServerEmberWeapon_Params
{
	struct FName                                       EmberWeaponName;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerDungeonSetSeed
struct ATLCheatRunner_ServerDungeonSetSeed_Params
{
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerDungeonSetHighestChallengeLevel
struct ATLCheatRunner_ServerDungeonSetHighestChallengeLevel_Params
{
	int                                                HighestClearedChallengeLevel;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerDungeonFailed
struct ATLCheatRunner_ServerDungeonFailed_Params
{
};

// Function Frontiers.TLCheatRunner.ServerDungeonCleared
struct ATLCheatRunner_ServerDungeonCleared_Params
{
};

// Function Frontiers.TLCheatRunner.ServerDungeonChallengeRare
struct ATLCheatRunner_ServerDungeonChallengeRare_Params
{
	int                                                ChallengeLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerDungeonChallengeNormal
struct ATLCheatRunner_ServerDungeonChallengeNormal_Params
{
	int                                                ChallengeLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerDungeonChallengeMagic
struct ATLCheatRunner_ServerDungeonChallengeMagic_Params
{
	int                                                ChallengeLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerDisenchant
struct ATLCheatRunner_ServerDisenchant_Params
{
	int                                                ItemId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerDifficultySet
struct ATLCheatRunner_ServerDifficultySet_Params
{
	struct FString                                     Difficulty;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerDeleteFort
struct ATLCheatRunner_ServerDeleteFort_Params
{
};

// Function Frontiers.TLCheatRunner.ServerDamageActor
struct ATLCheatRunner_ServerDamageActor_Params
{
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ActorName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerCurrencySetEnabled
struct ATLCheatRunner_ServerCurrencySetEnabled_Params
{
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerCurrencyAddToAll
struct ATLCheatRunner_ServerCurrencyAddToAll_Params
{
	int                                                Amount;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerCreateItems
struct ATLCheatRunner_ServerCreateItems_Params
{
	Frontiers_ECreateItemMode                          Mode;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemClassString;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter1;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter2;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter3;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerCrash
struct ATLCheatRunner_ServerCrash_Params
{
};

// Function Frontiers.TLCheatRunner.ServerCraftingSetTime
struct ATLCheatRunner_ServerCraftingSetTime_Params
{
	float                                              SecondsLeft;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerCraftingQueueClear
struct ATLCheatRunner_ServerCraftingQueueClear_Params
{
};

// Function Frontiers.TLCheatRunner.ServerCraftingNoCosts
struct ATLCheatRunner_ServerCraftingNoCosts_Params
{
	bool                                               bNoCostsEnabled;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerContractReset
struct ATLCheatRunner_ServerContractReset_Params
{
};

// Function Frontiers.TLCheatRunner.ServerContractMakeActive
struct ATLCheatRunner_ServerContractMakeActive_Params
{
	struct FString                                     Contract;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerContractLevelSet
struct ATLCheatRunner_ServerContractLevelSet_Params
{
	float                                              LevelToSet;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerContractLevelAddFame
struct ATLCheatRunner_ServerContractLevelAddFame_Params
{
	float                                              AmountToAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerConfigSetEntry
struct ATLCheatRunner_ServerConfigSetEntry_Params
{
	struct FString                                     Section;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerConfigGetEntry
struct ATLCheatRunner_ServerConfigGetEntry_Params
{
	struct FString                                     Section;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerClientSideRootMotion
struct ATLCheatRunner_ServerClientSideRootMotion_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerClearWaypointBinding
struct ATLCheatRunner_ServerClearWaypointBinding_Params
{
};

// Function Frontiers.TLCheatRunner.ServerClearNavigationComponentHistory
struct ATLCheatRunner_ServerClearNavigationComponentHistory_Params
{
};

// Function Frontiers.TLCheatRunner.ServerChatPartyMemberThreshold
struct ATLCheatRunner_ServerChatPartyMemberThreshold_Params
{
	int                                                MinimumMembers;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerBotMode
struct ATLCheatRunner_ServerBotMode_Params
{
};

// Function Frontiers.TLCheatRunner.ServerBot_OperateWarp
struct ATLCheatRunner_ServerBot_OperateWarp_Params
{
};

// Function Frontiers.TLCheatRunner.ServerBoss
struct ATLCheatRunner_ServerBoss_Params
{
	struct FString                                     BossSpawnParams;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerAreaNext
struct ATLCheatRunner_ServerAreaNext_Params
{
	struct FString                                     ExitName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerAreaMapReveal
struct ATLCheatRunner_ServerAreaMapReveal_Params
{
};

// Function Frontiers.TLCheatRunner.ServerAreaManagerList
struct ATLCheatRunner_ServerAreaManagerList_Params
{
};

// Function Frontiers.TLCheatRunner.ServerAreaLogProxies
struct ATLCheatRunner_ServerAreaLogProxies_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProxySearch;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerAreaLogLevels
struct ATLCheatRunner_ServerAreaLogLevels_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerAreaChatEchoOn
struct ATLCheatRunner_ServerAreaChatEchoOn_Params
{
};

// Function Frontiers.TLCheatRunner.ServerAreaChatEchoOff
struct ATLCheatRunner_ServerAreaChatEchoOff_Params
{
};

// Function Frontiers.TLCheatRunner.ServerArea
struct ATLCheatRunner_ServerArea_Params
{
	struct FString                                     AreaName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRandomSeed;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerAlwaysKill
struct ATLCheatRunner_ServerAlwaysKill_Params
{
};

// Function Frontiers.TLCheatRunner.ServerAINoTarget
struct ATLCheatRunner_ServerAINoTarget_Params
{
};

// Function Frontiers.TLCheatRunner.ServerAIFreeze
struct ATLCheatRunner_ServerAIFreeze_Params
{
};

// Function Frontiers.TLCheatRunner.ServerAffixSpawnLog
struct ATLCheatRunner_ServerAffixSpawnLog_Params
{
	struct FString                                     ItemClassString;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter1;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter2;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter3;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCheatRunner.ServerAchievementsReset
struct ATLCheatRunner_ServerAchievementsReset_Params
{
};

// Function Frontiers.TLCombat.Resurrect
struct UTLCombat_Resurrect_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.GetTotalDamage
struct UTLCombat_GetTotalDamage_Params
{
	class UObject*                                     Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreDefense;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFactorOverride;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.GetNearbyPlayers
struct UTLCombat_GetNearbyPlayers_Params
{
	class AActor*                                      DamageTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeOverride;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APawn*>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.GetCriticalChance
struct UTLCombat_GetCriticalChance_Params
{
	class AActor*                                      Source;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.GetBaseDamage
struct UTLCombat_GetBaseDamage_Params
{
	class UObject*                                     Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EWeaponSlot                              WeaponSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.GetAllAttackableInRadius
struct UTLCombat_GetAllAttackableInRadius_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.GetAffectAreaTargets
struct UTLCombat_GetAffectAreaTargets_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInteractionFilter                          Filter;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTargetWorldLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.GetActorsWithKillCredit
struct UTLCombat_GetActorsWithKillCredit_Params
{
	class AActor*                                      Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ATLCharacter*>                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.DoHealingByPercent
struct UTLCombat_DoHealingByPercent_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.DoHealing
struct UTLCombat_DoHealing_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.DoDamage
struct UTLCombat_DoDamage_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      SourceSkill;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Fraction;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreAttackDefense;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.ApplyStun
struct UTLCombat_ApplyStun_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StunDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.ApplyKnockback
struct UTLCombat_ApplyKnockback_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KnockbackFactor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.ApplyDamage
struct UTLCombat_ApplyDamage_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      SourceSkill;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCritical;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombat.AffectArea
struct UTLCombat_AffectArea_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInteractionFilter                          Filter;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USkill*                                      SourceSkill;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTargetWorldLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCombatActorComponent.ClientDidNoDamage
struct UTLCombatActorComponent_ClientDidNoDamage_Params
{
	class AActor*                                      OriginalAttacker;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Defender;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLEffect.ParticleSystemFinished
struct ATLEffect_ParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    System;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.MakeObjectFullFileName
struct UTLFile_MakeObjectFullFileName_Params
{
	struct FName                                       Folder;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Filename;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FullFileName;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.MakeIconPathFromClassName
struct UTLFile_MakeIconPathFromClassName_Params
{
	struct FName                                       ClassName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutPath;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.MakeIconPackagePathFromClassName
struct UTLFile_MakeIconPackagePathFromClassName_Params
{
	struct FName                                       ClassName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutPath;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.MakeGeneratedIconNameFromClassName
struct UTLFile_MakeGeneratedIconNameFromClassName_Params
{
	struct FName                                       ClassName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutName;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.MakeClassFullFileNameFromPackageName
struct UTLFile_MakeClassFullFileNameFromPackageName_Params
{
	struct FName                                       PackageName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FullFileName;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.MakeClassFullFileName
struct UTLFile_MakeClassFullFileName_Params
{
	struct FName                                       Folder;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Filename;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FullFileName;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetUEFileNameFromAssetPath
struct UTLFile_GetUEFileNameFromAssetPath_Params
{
	struct FName                                       InPath;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetStaticSpreadsheetsFolder
struct UTLFile_GetStaticSpreadsheetsFolder_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetStaticDataVersionFolder
struct UTLFile_GetStaticDataVersionFolder_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetStaticCurvesFolder
struct UTLFile_GetStaticCurvesFolder_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetStaticContentFolder
struct UTLFile_GetStaticContentFolder_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetMiniMapPathForLevel
struct UTLFile_GetMiniMapPathForLevel_Params
{
	struct FString                                     LevelName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderVFXTest
struct UTLFile_GetFolderVFXTest_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderVFX
struct UTLFile_GetFolderVFX_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderUITest
struct UTLFile_GetFolderUITest_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderThumbnailStyles
struct UTLFile_GetFolderThumbnailStyles_Params
{
	bool                                               bIncludeContentFolder;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderSkillsTest
struct UTLFile_GetFolderSkillsTest_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderRecipes
struct UTLFile_GetFolderRecipes_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderQuestsTest
struct UTLFile_GetFolderQuestsTest_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderQuests
struct UTLFile_GetFolderQuests_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderPlayerTest
struct UTLFile_GetFolderPlayerTest_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderPlayer
struct UTLFile_GetFolderPlayer_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderNPC
struct UTLFile_GetFolderNPC_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderMonsters
struct UTLFile_GetFolderMonsters_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderMonsterBlueprints
struct UTLFile_GetFolderMonsterBlueprints_Params
{
	struct FName                                       SubFolder;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderMonster
struct UTLFile_GetFolderMonster_Params
{
	struct FName                                       MonsterName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderLevels
struct UTLFile_GetFolderLevels_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderLevel
struct UTLFile_GetFolderLevel_Params
{
	struct FName                                       LevelName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderItemsWeapons
struct UTLFile_GetFolderItemsWeapons_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderItemsDyes
struct UTLFile_GetFolderItemsDyes_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderItemsDyeGradients
struct UTLFile_GetFolderItemsDyeGradients_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderItemsDyeExports
struct UTLFile_GetFolderItemsDyeExports_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderItemsArmour
struct UTLFile_GetFolderItemsArmour_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderItems
struct UTLFile_GetFolderItems_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderGeneratedIconTools
struct UTLFile_GetFolderGeneratedIconTools_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderGeneratedIcons
struct UTLFile_GetFolderGeneratedIcons_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderFortProps
struct UTLFile_GetFolderFortProps_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderEnvironmentTest
struct UTLFile_GetFolderEnvironmentTest_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderEnvironments
struct UTLFile_GetFolderEnvironments_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderDRLGElements
struct UTLFile_GetFolderDRLGElements_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetFolderDefaultForts
struct UTLFile_GetFolderDefaultForts_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLFile.GetAllFilesInDirectory
struct UTLFile_GetAllFilesInDirectory_Params
{
	TArray<struct FName>                               OutFiles;                                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     RootDirectory;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             NameContains;                                              // (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ExtensionIncludes;                                         // (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bFileNamesOnly;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecursive;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAbsolute;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLGameInstance.TryToOpenLevel
struct UTLGameInstance_TryToOpenLevel_Params
{
};

// Function Frontiers.TLGameInstance.ToggleVisualLogger
struct UTLGameInstance_ToggleVisualLogger_Params
{
};

// Function Frontiers.TLGameInstance.MissingEnvironment
struct UTLGameInstance_MissingEnvironment_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLGameInstance.IsVisualLoggerRecording
struct UTLGameInstance_IsVisualLoggerRecording_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLGameInstance.IsOfflineMode
struct UTLGameInstance_IsOfflineMode_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLGameInstance.IsLocalEnvironment
struct UTLGameInstance_IsLocalEnvironment_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLGameInstance.IsEditorGameMode
struct UTLGameInstance_IsEditorGameMode_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLGameInstance.GetReleaseTag
struct UTLGameInstance_GetReleaseTag_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLGameInstance.GetEnvironment
struct UTLGameInstance_GetEnvironment_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLGameInstance.GetConnectionState
struct UTLGameInstance_GetConnectionState_Params
{
	class APlayerController*                           Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLGameInstance.GetBuild
struct UTLGameInstance_GetBuild_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLGameState.OnTimeOfDayUpdated
struct ATLGameState_OnTimeOfDayUpdated_Params
{
};

// Function Frontiers.TLGameState.OnDifficultyUpdated
struct ATLGameState_OnDifficultyUpdated_Params
{
};

// Function Frontiers.TLGameState.GetTimeOfDayPeriod
struct ATLGameState_GetTimeOfDayPeriod_Params
{
	Frontiers_ETimeOfDayPeriod                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLGameState.GetTimeOfDayPercent
struct ATLGameState_GetTimeOfDayPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLGameViewportClient.AddVoiceChatOverlay
struct UTLGameViewportClient_AddVoiceChatOverlay_Params
{
};

// Function Frontiers.TLGameViewportClient.AddLoadingScreen
struct UTLGameViewportClient_AddLoadingScreen_Params
{
};

// Function Frontiers.TLInventory.SwapToWeaponSuite
struct UTLInventory_SwapToWeaponSuite_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EWeaponSuite                             WeaponSuite;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ServerUseItem
struct UTLInventory_ServerUseItem_Params
{
	struct FInventoryItemEntry                         Item;                                                      // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                TargetItemId;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ServerUnequipLegendaryAffix
struct UTLInventory_ServerUnequipLegendaryAffix_Params
{
	int                                                SlotIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ServerSwapToWeaponSuite
struct UTLInventory_ServerSwapToWeaponSuite_Params
{
	Frontiers_EWeaponSuite                             NextSuite;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ServerSwapToWardrobeProp
struct UTLInventory_ServerSwapToWardrobeProp_Params
{
	class UTLInventory*                                OtherInventory;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESwapWardrobeOption                      SwapWardrobeOption;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ServerSortContainer
struct UTLInventory_ServerSortContainer_Params
{
	class UClass*                                      ContainerClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EInventorySortOptions                    SortOptions;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ServerSellItem
struct UTLInventory_ServerSellItem_Params
{
	int                                                InventoryEntryId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ServerSellAllPetItemsInTown
struct UTLInventory_ServerSellAllPetItemsInTown_Params
{
};

// Function Frontiers.TLInventory.ServerOpenAccountStashTab
struct UTLInventory_ServerOpenAccountStashTab_Params
{
	Frontiers_EAccountStashType                        StashType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TabIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ServerMoveItem
struct UTLInventory_ServerMoveItem_Params
{
	class UTLInventory*                                SourceInventory;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTLInventory*                                TargetInventory;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TargetContainerId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InventoryEntryId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MoveToIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ServerMarkAllLegendaryAffixesSeen
struct UTLInventory_ServerMarkAllLegendaryAffixesSeen_Params
{
};

// Function Frontiers.TLInventory.ServerEquipLegendaryAffix
struct UTLInventory_ServerEquipLegendaryAffix_Params
{
	struct FItemTableRowHandle                         Item;                                                      // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                SlotIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ServerDyeItem
struct UTLInventory_ServerDyeItem_Params
{
	int                                                TargetItemEntryId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DyeSetEntryId;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ServerDestroyItem
struct UTLInventory_ServerDestroyItem_Params
{
	int                                                InventoryEntryId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ServerBuybackItem
struct UTLInventory_ServerBuybackItem_Params
{
	int                                                InventoryEntryId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ServerBreakDownItem
struct UTLInventory_ServerBreakDownItem_Params
{
	int                                                InventoryEntryId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.RemoveItemById
struct UTLInventory_RemoveItemById_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.Remove
struct UTLInventory_Remove_Params
{
	int                                                InventoryItemId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSaveCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.PickUpAndDestroy
struct UTLInventory_PickUpAndDestroy_Params
{
	class AActor*                                      ItemOnGround;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.OnRep_WardrobeItems
struct UTLInventory_OnRep_WardrobeItems_Params
{
};

// Function Frontiers.TLInventory.OnRep_EquippedWeapons
struct UTLInventory_OnRep_EquippedWeapons_Params
{
};

// Function Frontiers.TLInventory.OnRep_Containers
struct UTLInventory_OnRep_Containers_Params
{
};

// Function Frontiers.TLInventory.OnPlayerWarped
struct UTLInventory_OnPlayerWarped_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.OnPlayerDied
struct UTLInventory_OnPlayerDied_Params
{
	class APawn*                                       Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.OnAreaChanged
struct UTLInventory_OnAreaChanged_Params
{
	struct FGuid                                       NewAreaId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewAreaName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.NumPotions
struct UTLInventory_NumPotions_Params
{
	class AActor*                                      Owner;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.HasAppliedAffix
struct UTLInventory_HasAppliedAffix_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InventoryId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AffixRowName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.GetDetailedString
struct UTLInventory_GetDetailedString_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.EmptyItems
struct UTLInventory_EmptyItems_Params
{
};

// Function Frontiers.TLInventory.Empty
struct UTLInventory_Empty_Params
{
};

// Function Frontiers.TLInventory.DyeItem
struct UTLInventory_DyeItem_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TargetItemEntryId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DyeSetEntryId;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.CraftItemContents
struct UTLInventory_CraftItemContents_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InventoryId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ReagentInventoryIds;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	Frontiers_EUseItemResult                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ClientPickupItem
struct UTLInventory_ClientPickupItem_Params
{
	struct FName                                       ItemDataRow;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InventoryId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ClientOnItemUsed
struct UTLInventory_ClientOnItemUsed_Params
{
	bool                                               bResult;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ClientInventoryOperationCompleted
struct UTLInventory_ClientInventoryOperationCompleted_Params
{
	bool                                               bSuccess;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ClientInventoryFull
struct UTLInventory_ClientInventoryFull_Params
{
	class AActor*                                      ItemOnGround;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ErrorMessage;                                              // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.ClientAccountStashFailedToLoad
struct UTLInventory_ClientAccountStashFailedToLoad_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   NextRetryTime;                                             // (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.CanBeIdentified
struct UTLInventory_CanBeIdentified_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InventoryId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.CanBeDyed
struct UTLInventory_CanBeDyed_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InventoryId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventory.AddItem
struct UTLInventory_AddItem_Params
{
	struct FName                                       RowName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ItemLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Context;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSaveCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowCelebration;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainer.MarkEntriesChanged
struct UTLInventoryContainer_MarkEntriesChanged_Params
{
};

// Function Frontiers.TLInventoryContainer.IsLocked
struct UTLInventoryContainer_IsLocked_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerItems.OnItemsReplicated
struct UTLInventoryContainerItems_OnItemsReplicated_Params
{
};

// Function Frontiers.TLInventoryContainerUnequippedItems.IsFull
struct UTLInventoryContainerUnequippedItems_IsFull_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerEquippedLegendaryAffixes.HasNewSlots
struct UTLInventoryContainerEquippedLegendaryAffixes_HasNewSlots_Params
{
	class AActor*                                      Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AreaLoader.SetupAreaLevels
struct AAreaLoader_SetupAreaLevels_Params
{
};

// Function Frontiers.AreaLoader.BeginLoad
struct AAreaLoader_BeginLoad_Params
{
	Frontiers_EAreaLoadError                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AreaManagerComponent.ShouldShowClock
struct UAreaManagerComponent_ShouldShowClock_Params
{
	class AController*                                 Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AreaManagerComponent.OnRep_Areas
struct UAreaManagerComponent_OnRep_Areas_Params
{
};

// Function Frontiers.AreaManagerComponent.GetSpokeTagByLocation
struct UAreaManagerComponent_GetSpokeTagByLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AreaManagerComponent.GetAreaName
struct UAreaManagerComponent_GetAreaName_Params
{
	class AController*                                 Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.QuestUpdater.OnTimeOfDayPeriod
struct UQuestUpdater_OnTimeOfDayPeriod_Params
{
	Frontiers_ETimeOfDayPeriod                         Period;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.QuestUpdater.OnParentQuestComponentReplicated
struct UQuestUpdater_OnParentQuestComponentReplicated_Params
{
};

// Function Frontiers.QuestUpdater.OnEquippedItemsChanged
struct UQuestUpdater_OnEquippedItemsChanged_Params
{
	TArray<struct FItemReplicatedData>                 Items;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.QuestUpdater.OnAreaChanged
struct UQuestUpdater_OnAreaChanged_Params
{
	struct FGuid                                       NewAreaId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewAreaName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.QuestUpdater.ClientRemoveQuest
struct UQuestUpdater_ClientRemoveQuest_Params
{
	struct FName                                       QuestId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.QuestUpdater.ClientClearCompletedQuests
struct UQuestUpdater_ClientClearCompletedQuests_Params
{
	Frontiers_EQuestType                               Filter;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.QuestUpdater.ClientClearActiveQuests
struct UQuestUpdater_ClientClearActiveQuests_Params
{
	Frontiers_EQuestType                               Filter;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AudioEffectMap.GetFmodEventReferenceForEventName
struct UAudioEffectMap_GetFmodEventReferenceForEventName_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.AudioFunctionLibrary.VolumePercentToControl
struct UAudioFunctionLibrary_VolumePercentToControl_Params
{
	float                                              VolumePercent;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DynamicRange;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AudioFunctionLibrary.ControlToVolumePercent
struct UAudioFunctionLibrary_ControlToVolumePercent_Params
{
	float                                              ControlPercent;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DynamicRange;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AutoOperateSphereComponent.OnAutoOperateEndOverlap
struct UAutoOperateSphereComponent_OnAutoOperateEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.AutoOperateSphereComponent.OnAutoOperateBeginOverlap
struct UAutoOperateSphereComponent_OnAutoOperateBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossFightObserverComponent.GetBossFightSpawnsWarpBack
struct UBossFightObserverComponent_GetBossFightSpawnsWarpBack_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossMonsterComponent.OnRowHandleChanged
struct UBossMonsterComponent_OnRowHandleChanged_Params
{
};

// Function Frontiers.BossMonsterComponent.OnBossDied
struct UBossMonsterComponent_OnBossDied_Params
{
	class APawn*                                       Dying;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossMonsterInfoVolume.OnEndOverlap
struct UBossMonsterInfoVolume_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossMonsterInfoVolume.OnBeginOverlap
struct UBossMonsterInfoVolume_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossFightManager.ShowBossNameUI
struct UBossFightManager_ShowBossNameUI_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossFightManager.ShowBossHP
struct UBossFightManager_ShowBossHP_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossFightManager.ShouldShowSelectedTarget
struct UBossFightManager_ShouldShowSelectedTarget_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossFightManager.ShouldShowBossHP
struct UBossFightManager_ShouldShowBossHP_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossFightManager.IsBossMonster
struct UBossFightManager_IsBossMonster_Params
{
	class AActor*                                      Monster;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossFightManager.HideBossHP
struct UBossFightManager_HideBossHP_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossFightManager.GetBossMonster
struct UBossFightManager_GetBossMonster_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossFightManager.GetBossFightManager
struct UBossFightManager_GetBossFightManager_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBossFightManager*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossFightShape.OnRep_BossFightState
struct ABossFightShape_OnRep_BossFightState_Params
{
};

// Function Frontiers.BossFightShape.OnPlayerRevived
struct ABossFightShape_OnPlayerRevived_Params
{
	class APawn*                                       Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossFightShape.OnPlayerDied
struct ABossFightShape_OnPlayerDied_Params
{
	class APawn*                                       Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.BossFightShape.OnBossDied
struct ABossFightShape_OnBossDied_Params
{
	class APawn*                                       Dying;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacterCreateBaseActor.SetNameplateVisible
struct ATLCharacterCreateBaseActor_SetNameplateVisible_Params
{
	bool                                               bNameplateVisible;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacterCreateBaseActor.GetOwnedGameplayTags
struct ATLCharacterCreateBaseActor_GetOwnedGameplayTags_Params
{
	struct FGameplayTagContainer                       OutTagContainer;                                           // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacterCreateBaseActor.GetDisplayName
struct ATLCharacterCreateBaseActor_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacterCreateBaseActor.GetComponentsToHide
struct ATLCharacterCreateBaseActor_GetComponentsToHide_Params
{
	TArray<class USkeletalMeshComponent*>              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLCharacterCreateBaseActor.GetBaseMesh
struct ATLCharacterCreateBaseActor_GetBaseMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.CharacterCustomizationComponent.OnRep_CharacterCustomization
struct UCharacterCustomizationComponent_OnRep_CharacterCustomization_Params
{
};

// Function Frontiers.TLCharacterSelectAnimInstance.GetAnimation
struct UTLCharacterSelectAnimInstance_GetAnimation_Params
{
	Frontiers_ECharacterCreateAnimState                From;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ECharacterCreateAnimState                To;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldLoop;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ChatComponent.ServerSetUsingMicrophone
struct UChatComponent_ServerSetUsingMicrophone_Params
{
	bool                                               bInUsingMicrophone;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ChatComponent.ServerRejoinAllChannels
struct UChatComponent_ServerRejoinAllChannels_Params
{
};

// Function Frontiers.ChatComponent.ServerOnClientLoggedIn
struct UChatComponent_ServerOnClientLoggedIn_Params
{
	bool                                               bInUsingMicrophone;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ChatComponent.OnLoggedIntoChatSession
struct UChatComponent_OnLoggedIntoChatSession_Params
{
};

// Function Frontiers.ChatComponent.ClientReceiveSystemMessage
struct UChatComponent_ClientReceiveSystemMessage_Params
{
	TArray<struct FSwitchboardEventMessageBody>        Message;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FrontiersUI_EUIMessageType                         MessageType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowInChat;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DurationSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ChatComponent.ClientLogin
struct UChatComponent_ClientLogin_Params
{
	struct FChatHandle                                 ChatHandle;                                                // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     LoginToken;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ChatComponent.ClientLeaveChannel
struct UChatComponent_ClientLeaveChannel_Params
{
	Frontiers_EChatChannelType                         ChannelType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ChatComponent.ClientJoinOrUpdateChannel
struct UChatComponent_ClientJoinOrUpdateChannel_Params
{
	struct FString                                     ChannelName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EChatChannelType                         ChannelType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EChatChannelSpace                        ChannelSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ChannelToken;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EChatChannelMediaType                    ChannelMediaTypes;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ColorRange.GetColorFromTextureStrip
struct UColorRange_GetColorFromTextureStrip_Params
{
	class UTexture2D*                                  Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextureRow;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWrap;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ColorRange.ColorLerp
struct UColorRange_ColorLerp_Params
{
	struct FColor                                      First;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Second;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ConductorComponent.OnAreaChanged
struct UConductorComponent_OnAreaChanged_Params
{
	struct FGuid                                       NewAreaId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewAreaName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ConsoleUtility.GetCvarStringValue
struct UConsoleUtility_GetCvarStringValue_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ConsoleUtility.GetCvarIntValue
struct UConsoleUtility_GetCvarIntValue_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ConsoleUtility.GetCvarFloatValue
struct UConsoleUtility_GetCvarFloatValue_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ContractComponent.ServerUpdateLastSeenContractLevel
struct UContractComponent_ServerUpdateLastSeenContractLevel_Params
{
};

// Function Frontiers.ContractComponent.ServerSwitchContract
struct UContractComponent_ServerSwitchContract_Params
{
	struct FName                                       NewContractName;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ContractComponent.ServerClaimNext
struct UContractComponent_ServerClaimNext_Params
{
};

// Function Frontiers.ContractComponent.OnRep_CurrentContract
struct UContractComponent_OnRep_CurrentContract_Params
{
};

// Function Frontiers.ContractComponent.IsContractUIEnabled
struct UContractComponent_IsContractUIEnabled_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ContractComponent.ClientOnRewardClaimed
struct UContractComponent_ClientOnRewardClaimed_Params
{
	Frontiers_ECraftingResult                          Result;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContractTableRowHandle                     Contract;                                                  // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                LevelClaimed;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPaid;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumUnclaimedRewards;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.DifficultyDataHelpers.GetDifficultyTraitArray
struct UDifficultyDataHelpers_GetDifficultyTraitArray_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDifficultyTableRowHandle                   DifficultyRow;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FTraitPair>                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.DRLGLevelProxy.GetLevelProxyName
struct ADRLGLevelProxy_GetLevelProxyName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.DungeonMaster.SetDungeonFailed
struct UDungeonMaster_SetDungeonFailed_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.DungeonMaster.SetDungeonCleared
struct UDungeonMaster_SetDungeonCleared_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.DungeonMaster.OnParticipantDiedInDungeon
struct UDungeonMaster_OnParticipantDiedInDungeon_Params
{
	class APawn*                                       PlayerPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.DungeonMaster.IsActorInEndlessDungeon
struct UDungeonMaster_IsActorInEndlessDungeon_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.DungeonPlayerComponent.ServerRequestDungeonPortal
struct UDungeonPlayerComponent_ServerRequestDungeonPortal_Params
{
	int                                                RequestedChallengeLevel;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RequestedQuality;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      PortalSourceActor;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.DungeonPlayerComponent.ServerAcknowledgeChallengeResult
struct UDungeonPlayerComponent_ServerAcknowledgeChallengeResult_Params
{
};

// Function Frontiers.DungeonPlayerComponent.ClientFailedDungeon
struct UDungeonPlayerComponent_ClientFailedDungeon_Params
{
	bool                                               bProgressReset;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewHighestClearedLevel;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Dye.ApplyToSkeletalMesh
struct UDye_ApplyToSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterCustomization                     Customization;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.EmberWeaponBlueprintLibrary.GetEmberWeaponDrainValueFromTime
struct UEmberWeaponBlueprintLibrary_GetEmberWeaponDrainValueFromTime_Params
{
	class AActor*                                      Owner;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeSeconds;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.EmberWeaponBlueprintLibrary.GetEmberWeaponChargeValueFromTime
struct UEmberWeaponBlueprintLibrary_GetEmberWeaponChargeValueFromTime_Params
{
	class AActor*                                      Owner;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeSeconds;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.ShowPetDisplayUIForProp
struct UFortEditComponent_ShowPetDisplayUIForProp_Params
{
	class AActor*                                      Prop;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.ShowCraftingUIForProp
struct UFortEditComponent_ShowCraftingUIForProp_Params
{
	int                                                PropInventoryEntryId;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Prop;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.ServerUpgradeProp
struct UFortEditComponent_ServerUpgradeProp_Params
{
	int                                                InventoryEntryId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.ServerTogglePropGender
struct UFortEditComponent_ServerTogglePropGender_Params
{
	class AActor*                                      WardrobeProp;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.ServerToggleEditMode
struct UFortEditComponent_ServerToggleEditMode_Params
{
};

// Function Frontiers.FortEditComponent.ServerStoreAll
struct UFortEditComponent_ServerStoreAll_Params
{
};

// Function Frontiers.FortEditComponent.ServerSelectProp
struct UFortEditComponent_ServerSelectProp_Params
{
	struct FFortPropTableRowHandle                     Prop;                                                      // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.ServerRotateProp
struct UFortEditComponent_ServerRotateProp_Params
{
	Frontiers_EPropRotationMode                        RotateMode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.ServerPlaceProp
struct UFortEditComponent_ServerPlaceProp_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.ServerPickupProp
struct UFortEditComponent_ServerPickupProp_Params
{
	class AActor*                                      Prop;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.ServerEndEditMode
struct UFortEditComponent_ServerEndEditMode_Params
{
};

// Function Frontiers.FortEditComponent.ServerEjectPlayerFromFort
struct UFortEditComponent_ServerEjectPlayerFromFort_Params
{
};

// Function Frontiers.FortEditComponent.ServerCraftProp
struct UFortEditComponent_ServerCraftProp_Params
{
	struct FFortPropTableRowHandle                     Prop;                                                      // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.ServerCancelPlace
struct UFortEditComponent_ServerCancelPlace_Params
{
	bool                                               bSendToStorage;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.ServerAssignPetToProp
struct UFortEditComponent_ServerAssignPetToProp_Params
{
	class UFortPropComponent*                          Prop;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       PetGuid;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.OnRep_PropToPlace
struct UFortEditComponent_OnRep_PropToPlace_Params
{
};

// Function Frontiers.FortEditComponent.OnRep_PropRotationDegrees
struct UFortEditComponent_OnRep_PropRotationDegrees_Params
{
};

// Function Frontiers.FortEditComponent.OnRep_IsInOwnFortArea
struct UFortEditComponent_OnRep_IsInOwnFortArea_Params
{
};

// Function Frontiers.FortEditComponent.OnRep_IsBlockedFort
struct UFortEditComponent_OnRep_IsBlockedFort_Params
{
};

// Function Frontiers.FortEditComponent.OnRep_FortEditMode
struct UFortEditComponent_OnRep_FortEditMode_Params
{
};

// Function Frontiers.FortEditComponent.Get
struct UFortEditComponent_Get_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortEditComponent*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.CraftProp
struct UFortEditComponent_CraftProp_Params
{
	struct FFortPropTableRowHandle                     Prop;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bSave;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.ClientShowPetDisplayUIForProp
struct UFortEditComponent_ClientShowPetDisplayUIForProp_Params
{
	int                                                PropInventoryEntryId;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Prop;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortEditComponent.ClientShowCraftingUIForProp
struct UFortEditComponent_ClientShowCraftingUIForProp_Params
{
	int                                                PropInventoryEntryId;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Prop;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortPropComponent.SpawnAttachedActor
struct UFortPropComponent_SpawnAttachedActor_Params
{
	class UClass*                                      ActorClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachTo;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortPropComponent.PlayClosedAudio
struct UFortPropComponent_PlayClosedAudio_Params
{
};

// Function Frontiers.FortPropComponent.OnRep_AssignedPetRow
struct UFortPropComponent_OnRep_AssignedPetRow_Params
{
};

// Function Frontiers.FortPropComponent.OnRep_AssignedPetInventoryGuid
struct UFortPropComponent_OnRep_AssignedPetInventoryGuid_Params
{
};

// Function Frontiers.FortPropComponent.IsOwner
struct UFortPropComponent_IsOwner_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortPropComponent.GetInventoryIdForActor
struct UFortPropComponent_GetInventoryIdForActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortPropComponent.ClientOnUpgraded
struct UFortPropComponent_ClientOnUpgraded_Params
{
	int                                                InventoryEntryId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortEditComponent*                          FortEditComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FortVolume.OnRepFortOwner
struct AFortVolume_OnRepFortOwner_Params
{
};

// Function Frontiers.FriendsComponent.ServerSetNumFriendsInParty
struct UFriendsComponent_ServerSetNumFriendsInParty_Params
{
	unsigned char                                      NumFriends;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerGadgetComponent.ServerRequestGadgetStatus
struct UPlayerGadgetComponent_ServerRequestGadgetStatus_Params
{
	class AGadget*                                     Gadget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerGadgetComponent.ClientPlayAudioForGadget
struct UPlayerGadgetComponent_ClientPlayAudioForGadget_Params
{
	class AGadget*                                     Gadget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EGadgetOperateSuccess                    GadgetOperateSuccess;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.GamePadComponent.IsInGamepadMode
struct UGamePadComponent_IsInGamepadMode_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.TauntMinions
struct UStatusEffect_TauntMinions_Params
{
	class AActor*                                      Taunter;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      MinionOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequiredMinionTags;                                        // (Parm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.Taunt
struct UStatusEffect_Taunt_Params
{
	class AActor*                                      Taunter;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SwapAttachment
struct UStatusEffect_SwapAttachment_Params
{
	struct FName                                       ToAttachRight;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ToAttachLeft;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SpawnSkillBeam
struct UStatusEffect_SpawnSkillBeam_Params
{
	struct FFireSkillBeamData                          FireBeamData;                                              // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SpawnParticles
struct UStatusEffect_SpawnParticles_Params
{
	TArray<struct FEffectDefinition>                   ParticleInfo;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SpawnActorToAttach
struct UStatusEffect_SpawnActorToAttach_Params
{
	class UClass*                                      ActorClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ShowVignette
struct UStatusEffect_ShowVignette_Params
{
	class UTexture*                                    Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ShowUI
struct UStatusEffect_ShowUI_Params
{
	FrontiersUI_ETLWidget                              Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCloseWidgetWhenDone;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCloseOtherOpenWindows;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ShowMessage
struct UStatusEffect_ShowMessage_Params
{
	struct FSlateColor                                 InColor;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ShowLoadingScreen
struct UStatusEffect_ShowLoadingScreen_Params
{
};

// Function Frontiers.StatusEffect.ShowHudPanel
struct UStatusEffect_ShowHudPanel_Params
{
	FrontiersUI_ECharacterMenuTab                      Tab;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SetTimer
struct UStatusEffect_SetTimer_Params
{
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SetSkillSlotForTrainCar
struct UStatusEffect_SetSkillSlotForTrainCar_Params
{
	struct FGameplayTagContainer                       InGameplayTags;                                            // (Parm, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               InSkillSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SetNotTargetable
struct UStatusEffect_SetNotTargetable_Params
{
};

// Function Frontiers.StatusEffect.SetMusicOverrideForArea
struct UStatusEffect_SetMusicOverrideForArea_Params
{
	struct FFMODEventReference                         Event;                                                     // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SetMusicIntensityOverrideForArea
struct UStatusEffect_SetMusicIntensityOverrideForArea_Params
{
	Frontiers_EMusicIntensity                          Intensity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SetMonsterManagerStateOverride
struct UStatusEffect_SetMonsterManagerStateOverride_Params
{
	Frontiers_EMonsterManagerState                     State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SetMinionForTrainCar
struct UStatusEffect_SetMinionForTrainCar_Params
{
	struct FGameplayTagContainer                       InGameplayTags;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FMinionTableRowHandle                       MinionRowHandle;                                           // (Parm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SetMaterialInstance
struct UStatusEffect_SetMaterialInstance_Params
{
	class UMaterialInstance*                           Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyToAttachedActors;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSwapParentMaterial;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipUnlitMeshes;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SetMaterial
struct UStatusEffect_SetMaterial_Params
{
	class UMaterial*                                   Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SetIdleMoveBlendspace
struct UStatusEffect_SetIdleMoveBlendspace_Params
{
	Frontiers_ETLBlendSpaceTypes                       Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SetFallbackSelectedActor
struct UStatusEffect_SetFallbackSelectedActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SetAnimInstanceClass
struct UStatusEffect_SetAnimInstanceClass_Params
{
	class UClass*                                      AnimInstanceClass;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.SetAmbienceOverrideForArea
struct UStatusEffect_SetAmbienceOverrideForArea_Params
{
	struct FFMODEventReference                         Event;                                                     // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ScheduleTrigger
struct UStatusEffect_ScheduleTrigger_Params
{
	float                                              DelaySeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.RunBehaviorTree
struct UStatusEffect_RunBehaviorTree_Params
{
	class UBehaviorTree*                               BehaviorTree;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopActiveSkill;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.RemoveStatusEffect
struct UStatusEffect_RemoveStatusEffect_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.PreventSkillUse
struct UStatusEffect_PreventSkillUse_Params
{
};

// Function Frontiers.StatusEffect.PlayWidgetAnim
struct UStatusEffect_PlayWidgetAnim_Params
{
	class UUserWidget*                                 InWidget;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WidgetAnimName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumLoops;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.PlaySequenceOnRemove
struct UStatusEffect_PlaySequenceOnRemove_Params
{
	class UClass*                                      TriggerClass;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SequenceActorClass;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.PlayLoopedSoundEventReference
struct UStatusEffect_PlayLoopedSoundEventReference_Params
{
	struct FFMODEventReference                         Event;                                                     // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePriority;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.PlayClientSequenceOnRemove
struct UStatusEffect_PlayClientSequenceOnRemove_Params
{
	class UClass*                                      SequenceActorClass;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.PauseSoundsFromAnimations
struct UStatusEffect_PauseSoundsFromAnimations_Params
{
};

// Function Frontiers.StatusEffect.OverrideSkillSet
struct UStatusEffect_OverrideSkillSet_Params
{
	Frontiers_ESkillSet                                SkillSet;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.OverrideDisplayName
struct UStatusEffect_OverrideDisplayName_Params
{
	struct FText                                       DisplayNameOverride;                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       DescriptionOverride;                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.OverrideAnimationForSkill
struct UStatusEffect_OverrideAnimationForSkill_Params
{
	class UClass*                                      SkillClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Animation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.OnWarped
struct UStatusEffect_OnWarped_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.OnTriggered
struct UStatusEffect_OnTriggered_Params
{
};

// Function Frontiers.StatusEffect.OnSkillStart
struct UStatusEffect_OnSkillStart_Params
{
	struct FSkillEventData                             SkillEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.OnPreDeath
struct UStatusEffect_OnPreDeath_Params
{
};

// Function Frontiers.StatusEffect.OnPreApply
struct UStatusEffect_OnPreApply_Params
{
};

// Function Frontiers.StatusEffect.OnPostDeath
struct UStatusEffect_OnPostDeath_Params
{
};

// Function Frontiers.StatusEffect.OnPostApply
struct UStatusEffect_OnPostApply_Params
{
};

// Function Frontiers.StatusEffect.OnExpired
struct UStatusEffect_OnExpired_Params
{
};

// Function Frontiers.StatusEffect.OnEventTimerTick
struct UStatusEffect_OnEventTimerTick_Params
{
};

// Function Frontiers.StatusEffect.OnCleared
struct UStatusEffect_OnCleared_Params
{
};

// Function Frontiers.StatusEffect.OnAreaChanged
struct UStatusEffect_OnAreaChanged_Params
{
};

// Function Frontiers.StatusEffect.MoveCamera
struct UStatusEffect_MoveCamera_Params
{
	float                                              CameraDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraPitch;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ManageComponentLifetime
struct UStatusEffect_ManageComponentLifetime_Params
{
	class UActorComponent*                             Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ManageActorLifetime
struct UStatusEffect_ManageActorLifetime_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GracePeriod;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.LockTargetWidget
struct UStatusEffect_LockTargetWidget_Params
{
	class AActor*                                      LockedTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.LockSkillCooldownsByTags
struct UStatusEffect_LockSkillCooldownsByTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.LockInventoryContainer
struct UStatusEffect_LockInventoryContainer_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ContainerClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.LockIncreaseActiveTrait
struct UStatusEffect_LockIncreaseActiveTrait_Params
{
	struct FActiveTraitsTableRowHandle                 ActiveTraitRowName;                                        // (Parm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.LockDecreaseActiveTrait
struct UStatusEffect_LockDecreaseActiveTrait_Params
{
	struct FActiveTraitsTableRowHandle                 ActiveTraitRowName;                                        // (Parm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.LockActiveTrait
struct UStatusEffect_LockActiveTrait_Params
{
	struct FActiveTraitsTableRowHandle                 ActiveTraitRowName;                                        // (Parm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.IncreasePeakDrama
struct UStatusEffect_IncreasePeakDrama_Params
{
	float                                              Drama;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.HideInGame
struct UStatusEffect_HideInGame_Params
{
};

// Function Frontiers.StatusEffect.HasStatusEffectWithTags
struct UStatusEffect_HasStatusEffectWithTags_Params
{
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       Tags;                                                      // (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.HasStatusEffect
struct UStatusEffect_HasStatusEffect_Params
{
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.GetStatusEffectTraits
struct UStatusEffect_GetStatusEffectTraits_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InSkillLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.GetStatusEffectsWithTags
struct UStatusEffect_GetStatusEffectsWithTags_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       Tags;                                                      // (Parm, NativeAccessSpecifierPublic)
	TArray<class UStatusEffect*>                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.GetStatusEffectsOfType
struct UStatusEffect_GetStatusEffectsOfType_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UStatusEffect*>                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.GetOwner
struct UStatusEffect_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.GetMaxInstancesPerActor
struct UStatusEffect_GetMaxInstancesPerActor_Params
{
	class AActor*                                      TargetActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.GetInflictor
struct UStatusEffect_GetInflictor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.GetDescription
struct UStatusEffect_GetDescription_Params
{
	class AActor*                                      ActorOwner;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.GetBlueprintRelevantInstigatorTraitKeys
struct UStatusEffect_GetBlueprintRelevantInstigatorTraitKeys_Params
{
	TArray<struct FTraitKey>                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ForceHoldPosition
struct UStatusEffect_ForceHoldPosition_Params
{
};

// Function Frontiers.StatusEffect.Expire
struct UStatusEffect_Expire_Params
{
};

// Function Frontiers.StatusEffect.EnableComponentTick
struct UStatusEffect_EnableComponentTick_Params
{
	class UActorComponent*                             Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.DisableSkillsByTag
struct UStatusEffect_DisableSkillsByTag_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.DisableSkillsBySlot
struct UStatusEffect_DisableSkillsBySlot_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.DisableRootMotion
struct UStatusEffect_DisableRootMotion_Params
{
};

// Function Frontiers.StatusEffect.DisableOperate
struct UStatusEffect_DisableOperate_Params
{
};

// Function Frontiers.StatusEffect.DisableOcclusionShader
struct UStatusEffect_DisableOcclusionShader_Params
{
};

// Function Frontiers.StatusEffect.DisableLootDrop
struct UStatusEffect_DisableLootDrop_Params
{
};

// Function Frontiers.StatusEffect.DisableHoverClick
struct UStatusEffect_DisableHoverClick_Params
{
};

// Function Frontiers.StatusEffect.DisableCharacterCollision
struct UStatusEffect_DisableCharacterCollision_Params
{
};

// Function Frontiers.StatusEffect.CreateMeshShell
struct UStatusEffect_CreateMeshShell_Params
{
	struct FMeshShellParameters                        Params;                                                    // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.CreateComponent
struct UStatusEffect_CreateComponent_Params
{
	class UClass*                                      ComponentClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ClearStatusEffectFromInflictor
struct UStatusEffect_ClearStatusEffectFromInflictor_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Inflictor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ClearStatusEffectByGameplayTag
struct UStatusEffect_ClearStatusEffectByGameplayTag_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                Tag;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ClearStatusEffect
struct UStatusEffect_ClearStatusEffect_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ChangeTeam
struct UStatusEffect_ChangeTeam_Params
{
	Frontiers_ETLTeam                                  NewTeam;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ChangeHealthBarColor
struct UStatusEffect_ChangeHealthBarColor_Params
{
	struct FSlateColor                                 Color;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ChainBeam
struct UStatusEffect_ChainBeam_Params
{
	class AActor*                                      SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ChainStartActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChainStartSocket;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChainHitSocket;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SkillBeamClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BounceCount;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChainRadius;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      InStatusEffectClass;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StatusDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFraction;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.AudioSetGlobalParameter
struct UStatusEffect_AudioSetGlobalParameter_Params
{
	struct FString                                     ParameterName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParameterValue;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.AttachHazardToOwner
struct UStatusEffect_AttachHazardToOwner_Params
{
	class AActor*                                      SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      HazardClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.AsyncLoadAndHoldAsset
struct UStatusEffect_AsyncLoadAndHoldAsset_Params
{
	struct FSoftObjectPath                             ObjectPath;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ApplyTraits
struct UStatusEffect_ApplyTraits_Params
{
	TArray<struct FTraitInitializer>                   TraitList;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ApplyTraitPairs
struct UStatusEffect_ApplyTraitPairs_Params
{
	TArray<struct FTraitPair>                          TraitList;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ApplyStatusEffectByProximity
struct UStatusEffect_ApplyStatusEffectByProximity_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Inflictor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkillShape*                                 Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStatusEffect*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ApplyStatusEffect
struct UStatusEffect_ApplyStatusEffect_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Inflictor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStatusEffect*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ApplyProcStatusEffect
struct UStatusEffect_ApplyProcStatusEffect_Params
{
	class AActor*                                      Inflictor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ProcTag;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParameterRowName;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStatusEffect*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ApplyAssetStatusEffect
struct UStatusEffect_ApplyAssetStatusEffect_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Inflictor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStatusEffect*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.AdjustMonsterAwarenessRadiusInArea
struct UStatusEffect_AdjustMonsterAwarenessRadiusInArea_Params
{
	float                                              Centimeters;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.AddSkill
struct UStatusEffect_AddSkill_Params
{
	struct FName                                       SkillRowName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.AddProc
struct UStatusEffect_AddProc_Params
{
	struct FProcTableRowHandle                         ProcRow;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                InRequiredSkillInstanceId;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.AddPlayerEnergyRegen
struct UStatusEffect_AddPlayerEnergyRegen_Params
{
	float                                              SecondsToRefillEnergy;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.AddItemNameplate
struct UStatusEffect_AddItemNameplate_Params
{
};

// Function Frontiers.StatusEffect.AddInventoryContainer
struct UStatusEffect_AddInventoryContainer_Params
{
	class UClass*                                      ContainerClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.StatusEffect.ActivateHazard
struct UStatusEffect_ActivateHazard_Params
{
	class AHazard*                                     Hazard;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldBeActive;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.GradientColorComponent.UpdateMaterialFromSamplerMap
struct UGradientColorComponent_UpdateMaterialFromSamplerMap_Params
{
	struct FName                                       PropertyChangedName;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.GradientColorComponent.UpdateAllMaterials
struct UGradientColorComponent_UpdateAllMaterials_Params
{
};

// Function Frontiers.GradientColorComponent.InitWardrobeComponents
struct UGradientColorComponent_InitWardrobeComponents_Params
{
};

// Function Frontiers.GradientColorComponent.ImportDyeBaseForEdit
struct UGradientColorComponent_ImportDyeBaseForEdit_Params
{
};

// Function Frontiers.GradientColorComponent.GetGradientRowByName
struct UGradientColorComponent_GetGradientRowByName_Params
{
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.HandledComponentInterface.PreHandleComponent
struct UHandledComponentInterface_PreHandleComponent_Params
{
};

// Function Frontiers.HandledComponentInterface.PostHandleComponent
struct UHandledComponentInterface_PostHandleComponent_Params
{
};

// Function Frontiers.HarvestGadget.GetHarvestPercent
struct AHarvestGadget_GetHarvestPercent_Params
{
	class APawn*                                       Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Hazard.SpawnHazard
struct AHazard_SpawnHazard_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      HazardClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HazardDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttached;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      AttachActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActiveOnSpawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnOnClient;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnOnGround;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AHazard*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Hazard.OnPulse
struct AHazard_OnPulse_Params
{
};

// Function Frontiers.Hazard.OnHitTarget
struct AHazard_OnHitTarget_Params
{
	class AActor*                                      ActorInContact;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Hazard.GetFilteredOverlappingActors
struct AHazard_GetFilteredOverlappingActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.Hazard.Deactivate
struct AHazard_Deactivate_Params
{
};

// Function Frontiers.Hazard.ActivateHazard
struct AHazard_ActivateHazard_Params
{
	class AActor*                                      HazardActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldActivate;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.HighlightMaterialComponent.SetVectorParameterValueOnMaterial
struct UHighlightMaterialComponent_SetVectorParameterValueOnMaterial_Params
{
	struct FName                                       ParameterName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                VectorVal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.HighlightMaterialComponent.SetupMaterials
struct UHighlightMaterialComponent_SetupMaterials_Params
{
	bool                                               bUseHighlightMat;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.HighlightMaterialComponent.SetScalarParameterOnMaterial
struct UHighlightMaterialComponent_SetScalarParameterOnMaterial_Params
{
	struct FName                                       ParameterName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScalarVal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.HighlightMaterialComponent.SetDeactivateMaterial
struct UHighlightMaterialComponent_SetDeactivateMaterial_Params
{
	struct FName                                       ParameterName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScalarVal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ItemOnGround.OnRep_SpawnOrigin
struct UItemOnGround_OnRep_SpawnOrigin_Params
{
};

// Function Frontiers.ItemOnGround.OnRep_ItemDataRow
struct UItemOnGround_OnRep_ItemDataRow_Params
{
};

// Function Frontiers.ItemOnGround.OnRep_ExtraAffixes
struct UItemOnGround_OnRep_ExtraAffixes_Params
{
};

// Function Frontiers.ItemOnGround.ClientItemPickedUp
struct UItemOnGround_ClientItemPickedUp_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ItemOnGround.AutoPickup
struct UItemOnGround_AutoPickup_Params
{
	class AActor*                                      Activator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ItemQualityFunctionLibrary.GetItemQuality
struct UItemQualityFunctionLibrary_GetItemQuality_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryItemEntry                         InventoryEntry;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ItemQualityFunctionLibrary.GetItemOnGroundSelectedParticleSystem
struct UItemQualityFunctionLibrary_GetItemOnGroundSelectedParticleSystem_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ItemQualityFunctionLibrary.GetItemOnGroundParticleSystem
struct UItemQualityFunctionLibrary_GetItemOnGroundParticleSystem_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ItemQualityFunctionLibrary.GetItemOnGroundMapMarkerComponentClass
struct UItemQualityFunctionLibrary_GetItemOnGroundMapMarkerComponentClass_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ItemQualityFunctionLibrary.GetItemOnGroundDisplayNameColor
struct UItemQualityFunctionLibrary_GetItemOnGroundDisplayNameColor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DefaultColor;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ItemQualityFunctionLibrary.GetItemOcclusionColorIndex
struct UItemQualityFunctionLibrary_GetItemOcclusionColorIndex_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ETLPostProcessFlag                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ItemQualityFunctionLibrary.GetItemDisplayNameColor
struct UItemQualityFunctionLibrary_GetItemDisplayNameColor_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemData                                   ItemData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ItemSpawner.SpawnItemOnGround
struct AItemSpawner_SpawnItemOnGround_Params
{
	struct FItemRequest                                ItemRequest;                                               // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.ItemSpawner.SetSourceActor
struct AItemSpawner_SetSourceActor_Params
{
	struct FItemRequest                                ItemRequest;                                               // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                      SourceActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OffsetToRotate;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ItemSpawner.GiveRandomItem
struct AItemSpawner_GiveRandomItem_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ItemTags;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ItemLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextString;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.KeyablePlayerMaterial.SetScalarParameterOnMaterial
struct UKeyablePlayerMaterial_SetScalarParameterOnMaterial_Params
{
	float                                              Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParameterName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.LevelManager.OnNavigationGenerationFinished
struct ULevelManager_OnNavigationGenerationFinished_Params
{
	class ANavigationData*                             NavData;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.LevelManager.OnLevelRemoved
struct ULevelManager_OnLevelRemoved_Params
{
	class ULevel*                                      InLevel;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                      InWorld;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.LevelManager.OnLevelAdded
struct ULevelManager_OnLevelAdded_Params
{
	class ULevel*                                      InLevel;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                      InWorld;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerLevelSequenceWrapper.ServerSequenceStop
struct UPlayerLevelSequenceWrapper_ServerSequenceStop_Params
{
};

// Function Frontiers.PlayerLevelSequenceWrapper.PlayClientOnlyLevelSequence
struct UPlayerLevelSequenceWrapper_PlayClientOnlyLevelSequence_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SequenceActorClass;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      AttachToActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALevelSequenceActor*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerLevelSequenceWrapper.ClientSequenceStop
struct UPlayerLevelSequenceWrapper_ClientSequenceStop_Params
{
};

// Function Frontiers.PlayerLevelSequenceWrapper.ClientSequenceStart
struct UPlayerLevelSequenceWrapper_ClientSequenceStart_Params
{
	struct FClientLevelSequenceRequest                 Request;                                                   // (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Frontiers.LifetimeEventsComponent.TimerNearLifetimeEnd
struct ULifetimeEventsComponent_TimerNearLifetimeEnd_Params
{
};

// Function Frontiers.LifetimeEventsComponent.OnRep_ServerLifetimeInfo
struct ULifetimeEventsComponent_OnRep_ServerLifetimeInfo_Params
{
};

// Function Frontiers.LoreLineComponent.PlayLoreLine
struct ULoreLineComponent_PlayLoreLine_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.LoreLineComponent.OnOwnerOverlap
struct ULoreLineComponent_OnOwnerOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.LorePlayerComponent.StopPlayingLoreLine
struct ULorePlayerComponent_StopPlayingLoreLine_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.LorePlayerComponent.PlayLoreLine
struct ULorePlayerComponent_PlayLoreLine_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogueTableRowHandle                     LoreLine;                                                  // (Parm, NativeAccessSpecifierPublic)
};

// Function Frontiers.MainMenuEmberWeaponHolder.GetAttachComponent
struct AMainMenuEmberWeaponHolder_GetAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MainMenuActorCoordinator.SequenceFinished
struct AMainMenuActorCoordinator_SequenceFinished_Params
{
};

// Function Frontiers.TLBasePlayerController.ServerSpawnCheats
struct ATLBasePlayerController_ServerSpawnCheats_Params
{
};

// Function Frontiers.TLBasePlayerController.OnRep_CheatRunner
struct ATLBasePlayerController_OnRep_CheatRunner_Params
{
};

// Function Frontiers.MainMenuPlayerController.ServerTravel
struct AMainMenuPlayerController_ServerTravel_Params
{
	struct FString                                     URL;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MainMenuPlayerController.ClickHoveredActor
struct AMainMenuPlayerController_ClickHoveredActor_Params
{
};

// Function Frontiers.MainMenuState.GoBack
struct UMainMenuState_GoBack_Params
{
};

// Function Frontiers.MainMenuStateCharacterCreate.ConfirmPet
struct UMainMenuStateCharacterCreate_ConfirmPet_Params
{
};

// Function Frontiers.MainMenuStateCharacterCreate.ConfirmCustomization
struct UMainMenuStateCharacterCreate_ConfirmCustomization_Params
{
};

// Function Frontiers.MainMenuStateCharacterCreate.ConfirmClass
struct UMainMenuStateCharacterCreate_ConfirmClass_Params
{
};

// Function Frontiers.MainMenuStateCharacterCreate.CanChangeSkinHairColor
struct UMainMenuStateCharacterCreate_CanChangeSkinHairColor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MainMenuStateCharacterCreate.CanChangeGender
struct UMainMenuStateCharacterCreate_CanChangeGender_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MainMenuStateCharacterCreatePickPet.SelectHighlightedPet
struct UMainMenuStateCharacterCreatePickPet_SelectHighlightedPet_Params
{
};

// Function Frontiers.MainMenuStateCharacterCreateShowSkillTrees.ContinueToNextState
struct UMainMenuStateCharacterCreateShowSkillTrees_ContinueToNextState_Params
{
};

// Function Frontiers.MainMenuStateLogin.Login
struct UMainMenuStateLogin_Login_Params
{
};

// Function Frontiers.MainMenuStateLogin.Cancel
struct UMainMenuStateLogin_Cancel_Params
{
};

// Function Frontiers.MainMenuStateWelcome.ContinueToNextState
struct UMainMenuStateWelcome_ContinueToNextState_Params
{
};

// Function Frontiers.MapProxy.OnMapTilesLoaded
struct AMapProxy_OnMapTilesLoaded_Params
{
};

// Function Frontiers.MapWorksManager.OnRepMapWorksParams
struct UMapWorksManager_OnRepMapWorksParams_Params
{
};

// Function Frontiers.MapWorksObjectComponent.QueryReplaceMapworksPortal
struct UMapWorksObjectComponent_QueryReplaceMapworksPortal_Params
{
	class AActor*                                      Operator;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryItemEntry                         Item;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MapWorksObjectComponent.MakePortalFromMapworksRowsAtLocation
struct UMapWorksObjectComponent_MakePortalFromMapworksRowsAtLocation_Params
{
	TArray<class AActor*>                              Operators;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMapWorksTableRowHandle>             MapworksRowNames;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	Frontiers_EPlayerPortalDestinationType             DestinationType;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SpokeTag;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MapWorksObjectComponent.MakePortalFromMapworksRows
struct UMapWorksObjectComponent_MakePortalFromMapworksRows_Params
{
	TArray<class AActor*>                              Operators;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMapWorksTableRowHandle>             MapworksRowNames;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	Frontiers_EPlayerPortalDestinationType             DestinationType;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SpokeTag;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MapWorksObjectComponent.MakePortal
struct UMapWorksObjectComponent_MakePortal_Params
{
	TArray<class AActor*>                              Operators;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                      MapWorksObjectOwner;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EPlayerPortalDestinationType             DestinationType;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MapWorksObjectComponent.MakeItemPortal
struct UMapWorksObjectComponent_MakeItemPortal_Params
{
	class AActor*                                      Operator;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryItemEntry                         Item;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MeshAttachmentComponent.AttachToTarget
struct UMeshAttachmentComponent_AttachToTarget_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttachMeshInfo                             AttachmentInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.MeshShellComponent.SpawnShellUsingParams
struct UMeshShellComponent_SpawnShellUsingParams_Params
{
	struct FMeshShellParameters                        InParams;                                                  // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.MeshShellComponent.CreateShellOnTarget
struct UMeshShellComponent_CreateShellOnTarget_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshShellComponent*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MetricsLoggerComponent.HasTakenDamageSinceTime
struct UMetricsLoggerComponent_HasTakenDamageSinceTime_Params
{
	class AActor*                                      Owner;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SinceSecondsAgo;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AtLeastDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Missile.SpawnProjectiles
struct AMissile_SpawnProjectiles_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFireMissilesData                           FireMissileData;                                           // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AMissile*>                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.Missile.SimulateComponentHit
struct AMissile_SimulateComponentHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlockingHit;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Missile.SetCollisionProfile
struct AMissile_SetCollisionProfile_Params
{
	struct FName                                       CollisionProfileName;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Missile.OnMissileLaunched
struct AMissile_OnMissileLaunched_Params
{
};

// Function Frontiers.Missile.OnMissileExploded
struct AMissile_OnMissileExploded_Params
{
	struct FVector                                     ExplodeLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Missile.OnMissileDidDamage
struct AMissile_OnMissileDidDamage_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Missile.OnComponentHit
struct AMissile_OnComponentHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Frontiers.Missile.OnComponentBeginOverlap
struct AMissile_OnComponentBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Frontiers.Missile.OnClientMissileHit
struct AMissile_OnClientMissileHit_Params
{
	class AActor*                                      MissileInstigator;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              HitActors;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotator;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAffectedArea;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Missile.MissileStopped
struct AMissile_MissileStopped_Params
{
};

// Function Frontiers.Missile.GetSkillInstanceId
struct AMissile_GetSkillInstanceId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Missile.DoHit
struct AMissile_DoHit_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlockingHit;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ModalWidgetComponent.WidgetReject
struct UModalWidgetComponent_WidgetReject_Params
{
	class AActor*                                      Operator;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ModalWidgetComponent.WidgetAccept
struct UModalWidgetComponent_WidgetAccept_Params
{
	class AActor*                                      Operator;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ModalWidgetComponent.ShowWidget
struct UModalWidgetComponent_ShowWidget_Params
{
	class AActor*                                      Operator;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterChampionComponent.RemoveMonsterFromChampionPack
struct UMonsterChampionComponent_RemoveMonsterFromChampionPack_Params
{
	class AActor*                                      Monster;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterChampionComponent.OnOwnerDied
struct UMonsterChampionComponent_OnOwnerDied_Params
{
	class APawn*                                       Dying;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterChampionComponent.MakeIntoChampionWithAffixes
struct UMonsterChampionComponent_MakeIntoChampionWithAffixes_Params
{
	class AActor*                                      Monster;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMonsterSpawnType                        MonsterSpawnType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMonsterAffixTableRowHandle>         Affixes;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bPlaySpawnEffects;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayDeathEffects;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterChampionComponent.GetSelectedAffixes
struct UMonsterChampionComponent_GetSelectedAffixes_Params
{
	TArray<struct FMonsterAffixTableRowHandle>         ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterChampionComponent.GetPackSize
struct UMonsterChampionComponent_GetPackSize_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterChampionComponent.GetNumAliveInPack
struct UMonsterChampionComponent_GetNumAliveInPack_Params
{
	bool                                               bSameSpawnType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterChampionComponent.GetMonsterType
struct UMonsterChampionComponent_GetMonsterType_Params
{
	class AActor*                                      Monster;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMonsterSpawnType                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterChampionComponent.GetMonsterChampionComponent
struct UMonsterChampionComponent_GetMonsterChampionComponent_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMonsterChampionComponent*                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterChampionComponent.GetLivingPackMembers
struct UMonsterChampionComponent_GetLivingPackMembers_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterChampionComponent.AddNewMonsterToPack
struct UMonsterChampionComponent_AddNewMonsterToPack_Params
{
	class AActor*                                      Monster;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMonsterSpawnType                        MonsterSpawnType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMonsterAffixTableRowHandle>         IgnoredAffixes;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bReplace;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlaySpawnEffects;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayDeathEffects;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterManagerPlayerComponent.PreHandleComponent
struct UMonsterManagerPlayerComponent_PreHandleComponent_Params
{
};

// Function Frontiers.MonsterManagerPlayerComponent.PostHandleComponent
struct UMonsterManagerPlayerComponent_PostHandleComponent_Params
{
};

// Function Frontiers.MonsterManagerComponent.TriggerNearbySpawners
struct UMonsterManagerComponent_TriggerNearbySpawners_Params
{
	class AActor*                                      ReferenceActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MonsterSpawnerClass;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllSpawnersInArea;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterManagerComponent.ForceActivateNearbySpawners
struct UMonsterManagerComponent_ForceActivateNearbySpawners_Params
{
	class AActor*                                      ReferenceActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MonsterSpawnerClass;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllSpawnersInArea;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterManagerComponent.EmptyPendingMonstersNearby
struct UMonsterManagerComponent_EmptyPendingMonstersNearby_Params
{
	class AActor*                                      ReferenceActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MonsterSpawnerClass;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllSpawnersInArea;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterSpawner.SpawnMonsterNear
struct AMonsterSpawner_SpawnMonsterNear_Params
{
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMonstersTableRowHandle                     TableRow;                                                  // (Parm, NativeAccessSpecifierPublic)
	struct FVector                                     LocationIn;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AcceptanceRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChampion;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPawnIsOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               SpawnSkillSlot;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInIgnoreSpawnCollision;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterSpawner.SpawnMonster
struct AMonsterSpawner_SpawnMonster_Params
{
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMonsterSpawnRequest                        Request;                                                   // (Parm, NativeAccessSpecifierPublic)
	struct FMonstersTableRowHandle                     TableRow;                                                  // (Parm, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterSpawner.OnMonsterCountChanged
struct AMonsterSpawner_OnMonsterCountChanged_Params
{
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterSpawner.OnAllMonstersKilled
struct AMonsterSpawner_OnAllMonstersKilled_Params
{
};

// Function Frontiers.MonsterSpawnerBoss.OnMonsterSpawned
struct UMonsterSpawnerBoss_OnMonsterSpawned_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MonsterSpawnerTrigger.ResetTrigger
struct UMonsterSpawnerTrigger_ResetTrigger_Params
{
};

// Function Frontiers.MonsterSpawnerTrigger.OnOverlap
struct UMonsterSpawnerTrigger_OnOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.UpdateGadgetState
struct UMulticastFunctionComponent_UpdateGadgetState_Params
{
	class AGadget*                                     Gadget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           ObserverId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInCanBeOperated;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InOperationalStatus;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.UpdateAreaQuestStatus
struct UMulticastFunctionComponent_UpdateAreaQuestStatus_Params
{
	class UAreaQuestComponent*                         Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuestInstanceDataMsg                       Msg;                                                       // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.UpdateAreaQuestCompleteStatus
struct UMulticastFunctionComponent_UpdateAreaQuestCompleteStatus_Params
{
	class UAreaQuestComponent*                         Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuestInstanceDataCompletedMsg              Msg;                                                       // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.TrapTriggered
struct UMulticastFunctionComponent_TrapTriggered_Params
{
	class UTrapComponent*                              TrapComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TriggeredBy;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.StartSkill
struct UMulticastFunctionComponent_StartSkill_Params
{
	class USkillManager*                               SkillManager;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillReplicationData                       SkillActiveData;                                           // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.StartSecondarySkill
struct UMulticastFunctionComponent_StartSecondarySkill_Params
{
	class USkillManager*                               SkillManager;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SkillClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       TargetLocation;                                            // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.RootMotionEndedOnServer
struct UMulticastFunctionComponent_RootMotionEndedOnServer_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.PlayTLEffectAttached
struct UMulticastFunctionComponent_PlayTLEffectAttached_Params
{
	class AActor*                                      EffectOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      EffectTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                AttachLocationType;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Offset;                                                    // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeSpan;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EVFXScaleMethod                          ScaleMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLegacyScale;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.PlayTLEffectAtLocation
struct UMulticastFunctionComponent_PlayTLEffectAtLocation_Params
{
	class AActor*                                      EffectOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      EffectTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Location;                                                  // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeSpan;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EVFXScaleMethod                          ScaleMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLegacyScale;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.PlaySkillDamageEffectWithNumbers
struct UMulticastFunctionComponent_PlaySkillDamageEffectWithNumbers_Params
{
	class UTLCombatActorComponent*                     CombatFX;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D_NetQuantizeDirection              DirectionOfAttackNormalized;                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ECombatFxElementType                     Element;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCritical;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLethal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOverkill;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.PlaySkillDamageEffect
struct UMulticastFunctionComponent_PlaySkillDamageEffect_Params
{
	class UTLCombatActorComponent*                     CombatFX;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D_NetQuantizeDirection              DirectionOfAttackNormalized;                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ECombatFxElementType                     Element;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCritical;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLethal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOverkill;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.PlayRecoverHealthEffect
struct UMulticastFunctionComponent_PlayRecoverHealthEffect_Params
{
	class UTLCombatActorComponent*                     CombatFX;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.PlayEffectAttached
struct UMulticastFunctionComponent_PlayEffectAttached_Params
{
	class AActor*                                      EffectOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             EffectTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         EventReference;                                            // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AttachPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                AttachLocationType;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Offset;                                                    // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EVFXScaleMethod                          ScaleMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLegacyScale;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.PlayEffectAtLocation
struct UMulticastFunctionComponent_PlayEffectAtLocation_Params
{
	class AActor*                                      EffectOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             EffectTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         EventReference;                                            // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Location;                                                  // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator_NetQuantizeByte                    Rotation;                                                  // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EVFXScaleMethod                          ScaleMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLegacyScale;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.PlayDamageEffectWithNumbers
struct UMulticastFunctionComponent_PlayDamageEffectWithNumbers_Params
{
	class UTLCombatActorComponent*                     CombatFX;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D_NetQuantizeDirection              DirectionOfAttackNormalized;                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ECombatFxElementType                     Element;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCritical;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLethal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOverkill;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.PlayDamageEffect
struct UMulticastFunctionComponent_PlayDamageEffect_Params
{
	class UTLCombatActorComponent*                     CombatFX;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D_NetQuantizeDirection              DirectionOfAttackNormalized;                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ECombatFxElementType                     Element;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCritical;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLethal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOverkill;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.PlayDamageAvoidedEffect
struct UMulticastFunctionComponent_PlayDamageAvoidedEffect_Params
{
	class UTLCombatActorComponent*                     CombatFX;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D_NetQuantizeDirection              DirectionOfAttackNormalized;                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ECombatWidgetNotifyType                  NotifyType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.MissileStoppedOnServer
struct UMulticastFunctionComponent_MissileStoppedOnServer_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      MissileInstigator;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MissileClass;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Location;                                                  // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator_NetQuantizeByte                    Rotator;                                                   // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint32_t                                           SyncId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExpired;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitSomething;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      HitActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.MissileHitOnServer
struct UMulticastFunctionComponent_MissileHitOnServer_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      MissileInstigator;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MissileClass;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              HitActors;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Location;                                                  // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator_NetQuantizeByte                    Rotator;                                                   // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExploded;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.MissileFoundTargetOnServer
struct UMulticastFunctionComponent_MissileFoundTargetOnServer_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           SyncId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.EndRootMotionForce
struct UMulticastFunctionComponent_EndRootMotionForce_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.EndPortalSkillAnimation
struct UMulticastFunctionComponent_EndPortalSkillAnimation_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MulticastFunctionComponent.ApplyRadialRootMotionForce
struct UMulticastFunctionComponent_ApplyRadialRootMotionForce_Params
{
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Origin;                                                    // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Speed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPush;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.NarratorComponent.TriggerQuip
struct UNarratorComponent_TriggerQuip_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ENarratorQuip                            Quip;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.NarratorComponent.ParseNarratorQuip
struct UNarratorComponent_ParseNarratorQuip_Params
{
	struct FName                                       QuipName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ENarratorQuip                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.OperableComponent.OnOperateClient
struct UOperableComponent_OnOperateClient_Params
{
	class AActor*                                      Operator;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.OperableComponent.OnOperate
struct UOperableComponent_OnOperate_Params
{
	class AActor*                                      Operator;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.OperableComponent.IsActorOperable
struct UOperableComponent_IsActorOperable_Params
{
	class AActor*                                      Operator;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.OperableComponent.Enable
struct UOperableComponent_Enable_Params
{
};

// Function Frontiers.OperableComponent.Disable
struct UOperableComponent_Disable_Params
{
};

// Function Frontiers.OperableComponent.ClientOperate
struct UOperableComponent_ClientOperate_Params
{
	class AActor*                                      Operator;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.ServerUpdateBlockedPartyMemberTLAccountIds
struct UPartyComponent_ServerUpdateBlockedPartyMemberTLAccountIds_Params
{
	TArray<struct FString>                             InBlockedPartyMemberTLAccountIds;                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.ServerSendInstanceResetRequest
struct UPartyComponent_ServerSendInstanceResetRequest_Params
{
};

// Function Frontiers.PartyComponent.ServerSendInstanceResetNotification
struct UPartyComponent_ServerSendInstanceResetNotification_Params
{
	TArray<struct FPartyMember>                        KickedPartyMembers;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.ServerRespondToInvite
struct UPartyComponent_ServerRespondToInvite_Params
{
	struct FString                                     InviterId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EPartyStatusUpdate                       Status;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.ServerKickPartyMember
struct UPartyComponent_ServerKickPartyMember_Params
{
	struct FString                                     MemberId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.ServerJoinSession
struct UPartyComponent_ServerJoinSession_Params
{
	struct FString                                     ToJoinPlatformAccountId;                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ToJoinPlatformAccountName;                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.ServerInvitePartyMember
struct UPartyComponent_ServerInvitePartyMember_Params
{
	struct FString                                     ToInvitePlatformAccountId;                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ToInvitePlatformAccountName;                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.ServerDoPartyInstanceReset
struct UPartyComponent_ServerDoPartyInstanceReset_Params
{
};

// Function Frontiers.PartyComponent.ServerCanAcceptJoiningPlayerResponse
struct UPartyComponent_ServerCanAcceptJoiningPlayerResponse_Params
{
	bool                                               bCanAccept;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJoinSessionEvent                           JoinSessionEvent;                                          // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                RequestID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.ServerAcceptInstanceResetRequest
struct UPartyComponent_ServerAcceptInstanceResetRequest_Params
{
	struct FString                                     TravelToArea;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.OnRep_PendingInvites
struct UPartyComponent_OnRep_PendingInvites_Params
{
	TArray<struct FPartyInvite>                        OldPendingInvites;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.OnRep_Party
struct UPartyComponent_OnRep_Party_Params
{
	struct FParty                                      OldParty;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.ClientShowInstanceResetNotification
struct UPartyComponent_ClientShowInstanceResetNotification_Params
{
	TArray<struct FString>                             KickedMemberNames;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.ClientReceiveMemberStatusUpdate
struct UPartyComponent_ClientReceiveMemberStatusUpdate_Params
{
	struct FString                                     MemberPlatformAccountName;                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MemberTLAccountId;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EPartyStatusUpdate                       Status;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.ClientReceiveInstanceResetRequest
struct UPartyComponent_ClientReceiveInstanceResetRequest_Params
{
	struct FPartyInstanceResetRequest                  PartyInstanceResetRequest;                                 // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.ClientLeavingPartyInstance
struct UPartyComponent_ClientLeavingPartyInstance_Params
{
};

// Function Frontiers.PartyComponent.ClientJoinSessionProcessResult
struct UPartyComponent_ClientJoinSessionProcessResult_Params
{
	struct FJoinSessionResultEvent                     JoinSessionResultEvent;                                    // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PartyComponent.ClientCanAcceptJoiningPlayer
struct UPartyComponent_ClientCanAcceptJoiningPlayer_Params
{
	struct FJoinSessionEvent                           JoinSessionEvent;                                          // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                RequestID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PersistenceServerComm.DisableCharacterPersistence
struct UPersistenceServerComm_DisableCharacterPersistence_Params
{
};

// Function Frontiers.PersistentEffectsActor.OnSystemFinished
struct APersistentEffectsActor_OnSystemFinished_Params
{
	class UParticleSystemComponent*                    PSComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PersistentEffectsActor.OnAttachParentDestroyed
struct APersistentEffectsActor_OnAttachParentDestroyed_Params
{
	class AActor*                                      Parent;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PersistentEffectsActor.CreatePersistentParticles
struct APersistentEffectsActor_CreatePersistentParticles_Params
{
	class UParticleSystem*                             EmitterTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      AttachToActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                LocationType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoDestroy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Scale3D;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APersistentEffectsActor*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Photobooth.GetMesh
struct APhotobooth_GetMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Photobooth.GetIconCaptureLocator
struct APhotobooth_GetIconCaptureLocator_Params
{
	class UArrowComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerAffixComponent.OnPlayerRevived_Delegate
struct UPlayerAffixComponent_OnPlayerRevived_Delegate_Params
{
	class APawn*                                       Revived;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerBotBehaviorComponent.GetServerBotBehavior
struct UPlayerBotBehaviorComponent_GetServerBotBehavior_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerBotBehaviorComponent.GetClientBotBehavior
struct UPlayerBotBehaviorComponent_GetClientBotBehavior_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.NameDataComponent.OnRep_DisplayName
struct UNameDataComponent_OnRep_DisplayName_Params
{
};

// Function Frontiers.PlayerCharacterDataComponent.OnRep_AccountName
struct UPlayerCharacterDataComponent_OnRep_AccountName_Params
{
};

// Function Frontiers.PlayerCraftingComponent.ServerSacrificeItem
struct UPlayerCraftingComponent_ServerSacrificeItem_Params
{
	struct FCraftingRequest                            Request;                                                   // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerCraftingComponent.ServerMarkRecipeSeen
struct UPlayerCraftingComponent_ServerMarkRecipeSeen_Params
{
	int                                                RecipeIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerCraftingComponent.ServerDisenchantItem
struct UPlayerCraftingComponent_ServerDisenchantItem_Params
{
	struct FCraftingRequest                            Request;                                                   // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerCraftingComponent.ServerCraftingRequest
struct UPlayerCraftingComponent_ServerCraftingRequest_Params
{
	struct FCraftingRequest                            Request;                                                   // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerCraftingComponent.ServerClaim
struct UPlayerCraftingComponent_ServerClaim_Params
{
	struct FName                                       QueueName;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     JobId;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerCraftingComponent.ClientStartCraftingEntry
struct UPlayerCraftingComponent_ClientStartCraftingEntry_Params
{
	struct FName                                       QueueName;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingQueueEntry                         InEntry;                                                   // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerCraftingComponent.ClientCraftingCompleted
struct UPlayerCraftingComponent_ClientCraftingCompleted_Params
{
	Frontiers_ECraftingResult                          Result;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingRequest                            Request;                                                   // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerCraftingComponent.ClientClaimCraftingEntry
struct UPlayerCraftingComponent_ClientClaimCraftingEntry_Params
{
	struct FName                                       QueueName;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     JobId;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerDialogueComponent.ClientStartQuestDialogue
struct UPlayerDialogueComponent_ClientStartQuestDialogue_Params
{
	struct FName                                       QuestId;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskId;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SpeakerActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerDialogueComponent.ClientStartModalDialogue
struct UPlayerDialogueComponent_ClientStartModalDialogue_Params
{
	struct FName                                       DialogueRowName;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SpeakerActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerDialogueComponent.ClientStartBubbleDialogue
struct UPlayerDialogueComponent_ClientStartBubbleDialogue_Params
{
	class AActor*                                      SpeakerActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerLevelManagerComponent.ClientLearnLevels
struct UPlayerLevelManagerComponent_ClientLearnLevels_Params
{
	struct FGuid                                       NewAreaGuid;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDRLGLevelInstance>                  NewLevels;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerLevelManagerComponent.ClientForgetLevels
struct UPlayerLevelManagerComponent_ClientForgetLevels_Params
{
	struct FGuid                                       OldAreaGuid;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDRLGLevelInstance>                  OldLevels;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.SpawnPortal
struct UPlayerPortalComponent_SpawnPortal_Params
{
	class APortalProxy*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.ServerSetPortalDestination
struct UPlayerPortalComponent_ServerSetPortalDestination_Params
{
	Frontiers_EPlayerPortalDestinationType             Destination;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BindIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OtherPlayerAccountId;                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.ServerRequestReplaceMapworksPortalProxyFromItem
struct UPlayerPortalComponent_ServerRequestReplaceMapworksPortalProxyFromItem_Params
{
	int                                                InventoryEntryId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.ServerRequestImmediateTravelTo
struct UPlayerPortalComponent_ServerRequestImmediateTravelTo_Params
{
	Frontiers_EPlayerPortalDestinationType             Destination;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BindIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      GadgetInUse;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.ServerCancelPortalSkill
struct UPlayerPortalComponent_ServerCancelPortalSkill_Params
{
};

// Function Frontiers.PlayerPortalComponent.IsWaypointUnlocked
struct UPlayerPortalComponent_IsWaypointUnlocked_Params
{
	class AActor*                                      Waypoint;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.IsWaypointBoundToCurrentArea
struct UPlayerPortalComponent_IsWaypointBoundToCurrentArea_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.IsWaypointBoundToArea
struct UPlayerPortalComponent_IsWaypointBoundToArea_Params
{
	struct FName                                       AreaName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.IsWaypointBound
struct UPlayerPortalComponent_IsWaypointBound_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.HasMapWorksPortal
struct UPlayerPortalComponent_HasMapWorksPortal_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.HasAvailableDestinationFromList
struct UPlayerPortalComponent_HasAvailableDestinationFromList_Params
{
	TArray<Frontiers_EPlayerPortalDestinationType>     InDestinations;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.GetPlayerPortalComponent
struct UPlayerPortalComponent_GetPlayerPortalComponent_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerPortalComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.GetDestinations
struct UPlayerPortalComponent_GetDestinations_Params
{
	TArray<struct FPlayerPortalDestination>            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.BindWaypointToCurrentArea
struct UPlayerPortalComponent_BindWaypointToCurrentArea_Params
{
};

// Function Frontiers.PlayerPortalComponent.BindWaypointToArea
struct UPlayerPortalComponent_BindWaypointToArea_Params
{
	struct FName                                       AreaName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerPortalComponent.AttemptTravel
struct UPlayerPortalComponent_AttemptTravel_Params
{
	class APawn*                                       Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      GadgetInUse;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.SpawnQuestRewards
struct UPlayerQuestComponent_SpawnQuestRewards_Params
{
	class AActor*                                      SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       QuestId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.ServerSetPinned
struct UPlayerQuestComponent_ServerSetPinned_Params
{
	struct FName                                       QuestId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPinned;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.ServerSeeBoss
struct UPlayerQuestComponent_ServerSeeBoss_Params
{
	class AActor*                                      Boss;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.ServerConfirmQuestRewardChoice
struct UPlayerQuestComponent_ServerConfirmQuestRewardChoice_Params
{
	struct FName                                       QuestId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RewardIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.ServerConfirmQuestDialogue
struct UPlayerQuestComponent_ServerConfirmQuestDialogue_Params
{
	struct FName                                       QuestId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.ServerAcceptQuestOffer
struct UPlayerQuestComponent_ServerAcceptQuestOffer_Params
{
	struct FName                                       QuestId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.ClientUpdateQuestStatusToPlayer
struct UPlayerQuestComponent_ClientUpdateQuestStatusToPlayer_Params
{
	struct FQuestInstanceDataMsg                       Msg;                                                       // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.ClientUpdateQuestCompletedToPlayer
struct UPlayerQuestComponent_ClientUpdateQuestCompletedToPlayer_Params
{
	struct FQuestInstanceDataCompletedMsg              Msg;                                                       // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.ClientUpdateAchievementProgressToPlayer
struct UPlayerQuestComponent_ClientUpdateAchievementProgressToPlayer_Params
{
	struct FAchievementQuestProgressMsg                Msg;                                                       // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.ClientUpdateAchievementCompletedToPlayer
struct UPlayerQuestComponent_ClientUpdateAchievementCompletedToPlayer_Params
{
	struct FAchievementQuestCompletedMsg               Msg;                                                       // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.ClientPlayRandomLoreLine
struct UPlayerQuestComponent_ClientPlayRandomLoreLine_Params
{
	struct FGameplayTagContainer                       GameplayTags;                                              // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.ClientPlayLoreLine
struct UPlayerQuestComponent_ClientPlayLoreLine_Params
{
	struct FDialogueTableRowHandle                     DialogueRowHandle;                                         // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.ClientOnQuestAdded
struct UPlayerQuestComponent_ClientOnQuestAdded_Params
{
	struct FName                                       QuestId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerQuestComponent.ClientAddWidgetToHUDFullscreen
struct UPlayerQuestComponent_ClientAddWidgetToHUDFullscreen_Params
{
	class UClass*                                      Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.PlayerSaveComponent.NextTickSaveTimer
struct UPlayerSaveComponent_NextTickSaveTimer_Params
{
};

// Function Frontiers.PlayerSaveComponent.NextConvenientSaveTimer
struct UPlayerSaveComponent_NextConvenientSaveTimer_Params
{
};

// Function Frontiers.QuestObjectComponent.OnInteract
struct UQuestObjectComponent_OnInteract_Params
{
	class AActor*                                      Other;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.QuestObjectComponent.OffersQuestForPlayer
struct UQuestObjectComponent_OffersQuestForPlayer_Params
{
	class AActor*                                      Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.QuestObjectComponent.HasRelevantTaskForActor
struct UQuestObjectComponent_HasRelevantTaskForActor_Params
{
	class AActor*                                      Other;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLRandomFunctionLibrary.RandPointsInBox
struct UTLRandomFunctionLibrary_RandPointsInBox_Params
{
	struct FBox                                        Box;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRandomStream                               RandomStream;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                NumPoints;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistBetween;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLRandomFunctionLibrary.RandPointInBox
struct UTLRandomFunctionLibrary_RandPointInBox_Params
{
	struct FBox                                        Box;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRandomStream                               RandomStream;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLRandomFunctionLibrary.RandFloatFromGlobalStream
struct UTLRandomFunctionLibrary_RandFloatFromGlobalStream_Params
{
	float                                              Min;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLRandomFunctionLibrary.GetGlobalRandomStream
struct UTLRandomFunctionLibrary_GetGlobalRandomStream_Params
{
	struct FRandomStream                               ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.SplineEmitterFollowerComponent.GetParticleSystem
struct USplineEmitterFollowerComponent_GetParticleSystem_Params
{
	class UParticleSystem*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SplineActorFollowerComponent.GetActorClass
struct USplineActorFollowerComponent_GetActorClass_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SplineFollowerAudioComponent.SetSplineFollowerToTrack
struct USplineFollowerAudioComponent_SetSplineFollowerToTrack_Params
{
	class USplineFollowerComponent*                    InSplineFollower;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ReplicatedSplineComponent.SetFollowActor
struct UReplicatedSplineComponent_SetFollowActor_Params
{
	class AActor*                                      InFollowActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ELocationType                            InLocationType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.ReplicatedSplineComponent.OnRep_SplinePoints
struct UReplicatedSplineComponent_OnRep_SplinePoints_Params
{
};

// Function Frontiers.ReplicatedSplineComponent.AddReplicatedPoint
struct UReplicatedSplineComponent_AddReplicatedPoint_Params
{
	struct FVector                                     WorldLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SelectableInterface.ShouldDisplayName
struct USelectableInterface_ShouldDisplayName_Params
{
	class AActor*                                      Other;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SelectableInterface.Operate
struct USelectableInterface_Operate_Params
{
	class AActor*                                      Operator;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SelectableInterface.MarkUnselected
struct USelectableInterface_MarkUnselected_Params
{
};

// Function Frontiers.SelectableInterface.MarkSelected
struct USelectableInterface_MarkSelected_Params
{
};

// Function Frontiers.SelectableInterface.IsSelected
struct USelectableInterface_IsSelected_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SelectableInterface.IsOperable
struct USelectableInterface_IsOperable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SelectableInterface.IsHoverable
struct USelectableInterface_IsHoverable_Params
{
	class AActor*                                      Other;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SelectableInterface.GetOperateSkillSlot
struct USelectableInterface_GetOperateSkillSlot_Params
{
	Frontiers_ESkillSlot                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SelectableInterface.ClientOperate
struct USelectableInterface_ClientOperate_Params
{
	class AActor*                                      Operator;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SelectableInterface.CanOperate
struct USelectableInterface_CanOperate_Params
{
	class AActor*                                      Operator;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SelectableInterface.CanBeSelected
struct USelectableInterface_CanBeSelected_Params
{
	class AActor*                                      Other;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.SpawnSkillShape
struct USkill_SpawnSkillShape_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ShapeClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShapeDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttached;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomRange;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnOnClient;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnAtTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    CustomRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAllowSecondaryOverlaps;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondaryOverlapsMax;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ScaleMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkillShape*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.SkillStart
struct USkill_SkillStart_Params
{
	class UClass*                                      SkillClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SkillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Param;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.SetUIVisible
struct USkill_SetUIVisible_Params
{
	class APawn*                                       Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      UIClass;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.Operate
struct USkill_Operate_Params
{
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillUnequipped
struct USkill_OnSkillUnequipped_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillTick
struct USkill_OnSkillTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillStop
struct USkill_OnSkillStop_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillStart
struct USkill_OnSkillStart_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SkillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Param;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillRemoved
struct USkill_OnSkillRemoved_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillLevelUpdated
struct USkill_OnSkillLevelUpdated_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillEventHit02
struct USkill_OnSkillEventHit02_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillEventHit01
struct USkill_OnSkillEventHit01_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillEventAnimStart
struct USkill_OnSkillEventAnimStart_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillEventAnimEnd
struct USkill_OnSkillEventAnimEnd_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillEquipped
struct USkill_OnSkillEquipped_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillDidDamage
struct USkill_OnSkillDidDamage_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DeliveryActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKilledTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCritical;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillBeamPulse
struct USkill_OnSkillBeamPulse_Params
{
	class AActor*                                      Instigator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BeamEnd;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitTerrain;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillActorOverlap
struct USkill_OnSkillActorOverlap_Params
{
	class AActor*                                      Instigator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkillShape*                                 Shape;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPrimaryTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnSkillActorEndOverlap
struct USkill_OnSkillActorEndOverlap_Params
{
	class AActor*                                      Instigator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkillShape*                                 Shape;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnActorRevived
struct USkill_OnActorRevived_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.OnActorDeath
struct USkill_OnActorDeath_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.GetSkillPerLevelBonus
struct USkill_GetSkillPerLevelBonus_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTLCurveTableRowHandle                      CurveRow;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.GetSkillDescription
struct USkill_GetSkillDescription_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.GetSkillDamageFactor
struct USkill_GetSkillDamageFactor_Params
{
	class AActor*                                      Source;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFactorOverride;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.GetOverrideSkill
struct USkill_GetOverrideSkill_Params
{
	Frontiers_ESkillSlot                               InSkillSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                InSkillSet;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               OutSkillSlot;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                OutSkillSet;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.GetOriginActor
struct USkill_GetOriginActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.GetDurationPercent
struct USkill_GetDurationPercent_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.GetCooldown
struct USkill_GetCooldown_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.GetAllTags
struct USkill_GetAllTags_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.FindAITargetLocation
struct USkill_FindAITargetLocation_Params
{
	class AActor*                                      Pawn;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InOptionalTarget;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutTargetLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.DetachSkillActor
struct USkill_DetachSkillActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AttachedActorClass;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLogErrorIfNotFound;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.BlueprintCanSkillStart
struct USkill_BlueprintCanSkillStart_Params
{
	class AActor*                                      SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.Attack
struct USkill_Attack_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFindTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayMeleeHitSound;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Fraction;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Skill.AttachSkillActor
struct USkill_AttachSkillActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AttachedActorClass;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillBeam.SpawnBeam
struct ASkillBeam_SpawnBeam_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SourceActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFireSkillBeamData                          BeamData;                                                  // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class ASkillBeam*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillDelegate.CanInteractWith
struct USkillDelegate_CanInteractWith_Params
{
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreMortality;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillDelegateInterface.CanInteractWith
struct USkillDelegateInterface_CanInteractWith_Params
{
	class AActor*                                      Target;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreMortality;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillEffects.PlayEffectsOnActor
struct USkillEffects_PlayEffectsOnActor_Params
{
	class AActor*                                      EffectOwner;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DirectionOfAttack;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEffectDefinition                           Effects;                                                   // (Parm, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillEffects.PlayEffectsAtLocation
struct USkillEffects_PlayEffectsAtLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      EffectOwner;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DirectionOfAttack;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEffectDefinition                           Effects;                                                   // (Parm, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillEffects.PlayAudioEffectOnBone
struct USkillEffects_PlayAudioEffectOnBone_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AudioEffect;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillEffects.NetPlayTLEffectAttached
struct USkillEffects_NetPlayTLEffectAttached_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      EffectTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocationOffset;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeSpan;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                AttachLocationType;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EVFXScaleMethod                          ScaleMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLegacyScale;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillEffects.NetPlayTLEffectAtLocation
struct USkillEffects_NetPlayTLEffectAtLocation_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      EffectTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeSpan;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EVFXScaleMethod                          ScaleMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLegacyScale;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillEffects.NetPlayEffectAttached
struct USkillEffects_NetPlayEffectAttached_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             EffectTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         EventReference;                                            // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LocationOffset;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                AttachLocationType;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EVFXScaleMethod                          ScaleMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLegacyScale;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillEffects.NetPlayEffectAtLocation
struct USkillEffects_NetPlayEffectAtLocation_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             EffectTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         EventReference;                                            // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EVFXScaleMethod                          ScaleMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLegacyScale;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillEffects.DeactivateParticles
struct USkillEffects_DeactivateParticles_Params
{
	class AActor*                                      ActorWithParticles;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDetachParticles;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.WeaponEquipped
struct USkillManager_WeaponEquipped_Params
{
	Frontiers_EWeaponSlot                              TraitMode;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.UnlockCooldownsByTags
struct USkillManager_UnlockCooldownsByTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.SwitchBasicAttackHands
struct USkillManager_SwitchBasicAttackHands_Params
{
};

// Function Frontiers.SkillManager.StopActiveSkill
struct USkillManager_StopActiveSkill_Params
{
};

// Function Frontiers.SkillManager.SkillSlotHasSkill
struct USkillManager_SkillSlotHasSkill_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.SetCooldownBySkill
struct USkillManager_SetCooldownBySkill_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.SetCooldown
struct USkillManager_SetCooldown_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.ServerUpdateInputState
struct USkillManager_ServerUpdateInputState_Params
{
	struct FVector_NetQuantize10                       Location;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               Pressed;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.ServerStopCurrentSkill
struct USkillManager_ServerStopCurrentSkill_Params
{
};

// Function Frontiers.SkillManager.ServerSkillTryToStart
struct USkillManager_ServerSkillTryToStart_Params
{
	class AActor*                                      SkillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Location;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillStartParams                           SkillStartParams;                                          // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.ServerSetSkill
struct USkillManager_ServerSetSkill_Params
{
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.ServerRespecSkills
struct USkillManager_ServerRespecSkills_Params
{
};

// Function Frontiers.SkillManager.ServerRejectRespecSkills
struct USkillManager_ServerRejectRespecSkills_Params
{
};

// Function Frontiers.SkillManager.ServerRegretSkillLevel
struct USkillManager_ServerRegretSkillLevel_Params
{
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.ServerBuySkillLevel
struct USkillManager_ServerBuySkillLevel_Params
{
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.ResumeSkills
struct USkillManager_ResumeSkills_Params
{
};

// Function Frontiers.SkillManager.ResetCooldownBySkill
struct USkillManager_ResetCooldownBySkill_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.ReduceCooldownBySkill
struct USkillManager_ReduceCooldownBySkill_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DurationReduced;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.PauseSkills
struct USkillManager_PauseSkills_Params
{
};

// Function Frontiers.SkillManager.OnSkillEvent
struct USkillManager_OnSkillEvent_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillEvent                              SkillEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstanceId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.OnRevive
struct USkillManager_OnRevive_Params
{
	class APawn*                                       Revived;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.OnRep_SkillCooldowns
struct USkillManager_OnRep_SkillCooldowns_Params
{
};

// Function Frontiers.SkillManager.OnRep_ServerSkillTargetLocation
struct USkillManager_OnRep_ServerSkillTargetLocation_Params
{
};

// Function Frontiers.SkillManager.OnRep_ServerSkillActiveData
struct USkillManager_OnRep_ServerSkillActiveData_Params
{
};

// Function Frontiers.SkillManager.OnRep_ServerInitialSkillActiveData
struct USkillManager_OnRep_ServerInitialSkillActiveData_Params
{
};

// Function Frontiers.SkillManager.OnRep_LastSkillRespecTime
struct USkillManager_OnRep_LastSkillRespecTime_Params
{
};

// Function Frontiers.SkillManager.OnEquippedItemsChanged
struct USkillManager_OnEquippedItemsChanged_Params
{
	TArray<struct FItemReplicatedData>                 ItemSlotData;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.OnDeath
struct USkillManager_OnDeath_Params
{
	class APawn*                                       Dying;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.MulticastSkillListUpdated
struct USkillManager_MulticastSkillListUpdated_Params
{
	TArray<struct FSkillRepArrayEntry>                 SkillList;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.LockCooldownsByTags
struct USkillManager_LockCooldownsByTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.K2_SkillTryToStart
struct USkillManager_K2_SkillTryToStart_Params
{
	class AActor*                                      SkillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAsSecondarySkill;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoRootMotion;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Param;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPriority;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillResult                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.K2_SkillStart
struct USkillManager_K2_SkillStart_Params
{
	class AActor*                                      SkillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Param;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.IsValidTarget
struct USkillManager_IsValidTarget_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Victim;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.IsThisSkillUnlocked
struct USkillManager_IsThisSkillUnlocked_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.IsThisSkillActive
struct USkillManager_IsThisSkillActive_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.IsTargetInRange
struct USkillManager_IsTargetInRange_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.IsSkillUnlocked
struct USkillManager_IsSkillUnlocked_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.IsSkillSlotUnlocked
struct USkillManager_IsSkillSlotUnlocked_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.IsSkillActive
struct USkillManager_IsSkillActive_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.IsLockedInAction
struct USkillManager_IsLockedInAction_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.IsEmberWeaponAffixUnlocked
struct USkillManager_IsEmberWeaponAffixUnlocked_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AffixRowName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.HasSkillInAssignableSlot
struct USkillManager_HasSkillInAssignableSlot_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.HasSkillAssigned
struct USkillManager_HasSkillAssigned_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SkillDataRowName;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetTargetTraceType
struct USkillManager_GetTargetTraceType_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetSlotUnlockLevel
struct USkillManager_GetSlotUnlockLevel_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetSkillPointsAvailable
struct USkillManager_GetSkillPointsAvailable_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetSkillNameFromSlot
struct USkillManager_GetSkillNameFromSlot_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetSkillMoveToRangeFromSlot
struct USkillManager_GetSkillMoveToRangeFromSlot_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetSkillLevel
struct USkillManager_GetSkillLevel_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SkillRowName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetSkillIconFromSlot
struct USkillManager_GetSkillIconFromSlot_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetSkillGamepadTargetRange
struct USkillManager_GetSkillGamepadTargetRange_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetNextBasicWeaponSlot
struct USkillManager_GetNextBasicWeaponSlot_Params
{
	Frontiers_EWeaponSlot                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetDebugSkillString
struct USkillManager_GetDebugSkillString_Params
{
	class AActor*                                      DebugActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetCooldownRemainingFromSlot
struct USkillManager_GetCooldownRemainingFromSlot_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetCooldownPercentFromSlot
struct USkillManager_GetCooldownPercentFromSlot_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetCooldownPercentForSkill
struct USkillManager_GetCooldownPercentForSkill_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetCooldownEndTimeFromSkill
struct USkillManager_GetCooldownEndTimeFromSkill_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetCooldownDurationFromSlot
struct USkillManager_GetCooldownDurationFromSlot_Params
{
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetBaseSkillLevel
struct USkillManager_GetBaseSkillLevel_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SkillRowName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.GetActiveSkillWeaponSlot
struct USkillManager_GetActiveSkillWeaponSlot_Params
{
	Frontiers_EWeaponSlot                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.EnableSkillsByTags
struct USkillManager_EnableSkillsByTags_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       Tags;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.DisableSkillsByTags
struct USkillManager_DisableSkillsByTags_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       Tags;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.ClientStopActiveSkill
struct USkillManager_ClientStopActiveSkill_Params
{
};

// Function Frontiers.SkillManager.ClientSkillPurchaseCompleted
struct USkillManager_ClientSkillPurchaseCompleted_Params
{
	bool                                               bSuccess;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewLevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.ClientSetSkill
struct USkillManager_ClientSetSkill_Params
{
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.ClientResetCooldownBySkill
struct USkillManager_ClientResetCooldownBySkill_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.ClientRequestedSkillFailedToStart
struct USkillManager_ClientRequestedSkillFailedToStart_Params
{
	int                                                ClientActiveSkillInstanceId;                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                ServerSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               ServerSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServerInstanceId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ServerTimestamp;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.ClientReduceCooldownBySkill
struct USkillManager_ClientReduceCooldownBySkill_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DurationReduced;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.CanSpendSkillPoints
struct USkillManager_CanSpendSkillPoints_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillManager.CanSkillStart
struct USkillManager_CanSkillStart_Params
{
	class AActor*                                      SkillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                Set;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPriority;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValidateTargetAndRange;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValidateCooldown;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillResult                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMinions.ReplaceMonster
struct USkillMinions_ReplaceMonster_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SpawnFacingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMonstersTableRowHandle                     MonsterRow;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               SpawnSkillSlot;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMinions.RemoveMinions
struct USkillMinions_RemoveMinions_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      InventoryContainerClass;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMinions.FindNearestTrackBufferWithinRadius
struct USkillMinions_FindNearestTrackBufferWithinRadius_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      InventoryContainerClass;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EFindMinionResult                        OutExecPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATrackBuffer*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMinions.FindNearestTrackBufferFromLocation
struct USkillMinions_FindNearestTrackBufferFromLocation_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      InventoryContainerClass;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EFindMinionResult                        OutExecPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATrackBuffer*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMinions.FindMinionsWithinRadius
struct USkillMinions_FindMinionsWithinRadius_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      InventoryContainerClass;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PetClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EFindMinionResult                        OutExecPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMinions.FindInventoryContainerForMinion
struct USkillMinions_FindInventoryContainerForMinion_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinionTableRowHandle                       MinionRow;                                                 // (Parm, NativeAccessSpecifierPublic)
	struct FName                                       TraitTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTLInventoryContainer*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMinions.BlueprintSpawnMinionOnNextFrames
struct USkillMinions_BlueprintSpawnMinionOnNextFrames_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinionTableRowHandle                       MinionRow;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                                     Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    TargetRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSpawnMinionParams                          Params;                                                    // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMinions.BlueprintSpawnMinion
struct USkillMinions_BlueprintSpawnMinion_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinionTableRowHandle                       MinionRow;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                                     Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpawnMinionParams                          Params;                                                    // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMovement.StopMoving
struct USkillMovement_StopMoving_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMovement.StartMoving
struct USkillMovement_StartMoving_Params
{
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      MoveTargetActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MoveTargetLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMovement.MulticastEndRootMotionForce
struct USkillMovement_MulticastEndRootMotionForce_Params
{
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMovement.HasRootMotionForceFinished
struct USkillMovement_HasRootMotionForceFinished_Params
{
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMovement.FaceTarget
struct USkillMovement_FaceTarget_Params
{
	class APawn*                                       Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceInstant;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMovement.EndRootMotionForce
struct USkillMovement_EndRootMotionForce_Params
{
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMovement.EndAnimationIfRootMotionFinished
struct USkillMovement_EndAnimationIfRootMotionFinished_Params
{
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMovement.ApplyRadialRootMotionForce
struct USkillMovement_ApplyRadialRootMotionForce_Params
{
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Speed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPush;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMovement.ApplyMoveToRootMotionForceWithDuration
struct USkillMovement_ApplyMoveToRootMotionForceWithDuration_Params
{
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMovement.ApplyMoveToRootMotionForce
struct USkillMovement_ApplyMoveToRootMotionForce_Params
{
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Speed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMovement.ApplyKnockbackRootMotionForce
struct USkillMovement_ApplyKnockbackRootMotionForce_Params
{
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Inflictor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VelocityMultiplier;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPush;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.SkillMovement.ApplyConstantRootMotionForce
struct USkillMovement_ApplyConstantRootMotionForce_Params
{
	class AActor*                                      Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkill*                                      Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Speed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerFortStash.OnRep_ClientStashEntries
struct UTLInventoryContainerFortStash_OnRep_ClientStashEntries_Params
{
};

// Function Frontiers.TLInventoryContainerInbox.ServerClaim
struct UTLInventoryContainerInbox_ServerClaim_Params
{
	struct FGuid                                       MessageId;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerInbox.OnRep_Entries
struct UTLInventoryContainerInbox_OnRep_Entries_Params
{
};

// Function Frontiers.TLInventoryContainerInbox.ClientOnReceivedNewMail
struct UTLInventoryContainerInbox_ClientOnReceivedNewMail_Params
{
	TArray<int>                                        NewInventoryIdEntries;                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerMinions.RemoveMinionsOfType
struct UTLInventoryContainerMinions_RemoveMinionsOfType_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ContainerClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MinionClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowRemovePlayerPet;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerMinions.OnRep_Minions
struct UTLInventoryContainerMinions_OnRep_Minions_Params
{
};

// Function Frontiers.TLInventoryContainerMinions.GetMinionsFromCharacterByTag
struct UTLInventoryContainerMinions_GetMinionsFromCharacterByTag_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       Tags;                                                      // (Parm, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerMinions.GetMinionsFromCharacter
struct UTLInventoryContainerMinions_GetMinionsFromCharacter_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ContainerClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MinionClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerMinions.GetMinionFromCharacter
struct UTLInventoryContainerMinions_GetMinionFromCharacter_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ContainerClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MinionClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerMinions.GetMaxMinions
struct UTLInventoryContainerMinions_GetMaxMinions_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MinionClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerPet.Recall
struct UTLInventoryContainerPet_Recall_Params
{
};

// Function Frontiers.TLInventoryContainerPet.OnRep_PetReturnTimestamp
struct UTLInventoryContainerPet_OnRep_PetReturnTimestamp_Params
{
};

// Function Frontiers.TLInventoryContainerPet.OnOwnerRevived
struct UTLInventoryContainerPet_OnOwnerRevived_Params
{
	class APawn*                                       Revived;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerPet.OnOwnerDied
struct UTLInventoryContainerPet_OnOwnerDied_Params
{
	class APawn*                                       Dying;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerPet.ClientPetReturned
struct UTLInventoryContainerPet_ClientPetReturned_Params
{
};

// Function Frontiers.TLInventoryContainerPet.CanSendAway
struct UTLInventoryContainerPet_CanSendAway_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerPet.CanRecall
struct UTLInventoryContainerPet_CanRecall_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerPet.BlueprintSendPetAway
struct UTLInventoryContainerPet_BlueprintSendPetAway_Params
{
	class AActor*                                      Pet;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVoluntary;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerPetsStored.ServerTryToAddOverflowPet
struct UTLInventoryContainerPetsStored_ServerTryToAddOverflowPet_Params
{
};

// Function Frontiers.TLInventoryContainerPetsStored.ServerSwapToPet
struct UTLInventoryContainerPetsStored_ServerSwapToPet_Params
{
	int                                                InventoryEntryId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerPetsStored.ServerSetOverflowPet
struct UTLInventoryContainerPetsStored_ServerSetOverflowPet_Params
{
	struct FInventoryEntryPetStored                    InOverflowPet;                                             // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerPetsStored.ServerReleasePet
struct UTLInventoryContainerPetsStored_ServerReleasePet_Params
{
	int                                                InventoryEntryId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerPetsStored.ServerChangePetName
struct UTLInventoryContainerPetsStored_ServerChangePetName_Params
{
	int                                                InventoryEntryId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerPetsStored.OnRep_Pets
struct UTLInventoryContainerPetsStored_OnRep_Pets_Params
{
};

// Function Frontiers.TLInventoryContainerPetsStored.OnRep_OverflowPet
struct UTLInventoryContainerPetsStored_OnRep_OverflowPet_Params
{
};

// Function Frontiers.TLInventoryContainerPetsStored.ClientPetAcquired
struct UTLInventoryContainerPetsStored_ClientPetAcquired_Params
{
	struct FGuid                                       Guid;                                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNewPetSkillUnlocked;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerStatusEffects.OnStatusEffectsReplicated
struct UTLInventoryContainerStatusEffects_OnStatusEffectsReplicated_Params
{
};

// Function Frontiers.TLInventoryContainerStatusEffects.OnPreDeath
struct UTLInventoryContainerStatusEffects_OnPreDeath_Params
{
	class APawn*                                       Dying;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerStatusEffects.OnPostDeath
struct UTLInventoryContainerStatusEffects_OnPostDeath_Params
{
	class APawn*                                       Dying;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerStatusEffects.OnPlayerWarped
struct UTLInventoryContainerStatusEffects_OnPlayerWarped_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerStatusEffects.OnAreaChanged
struct UTLInventoryContainerStatusEffects_OnAreaChanged_Params
{
	struct FGuid                                       NewAreaId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewAreaName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Traits.SkillPointsAvailable
struct UTraits_SkillPointsAvailable_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Traits.OnTraitUpdated
struct UTraits_OnTraitUpdated_Params
{
};

// Function Frontiers.Traits.GetDetailedTraitString
struct UTraits_GetDetailedTraitString_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.Traits.ClientTraitPickup
struct UTraits_ClientTraitPickup_Params
{
	struct FTraitKey                                   TraitKey;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TraitsInterface.SetTrait
struct UTraitsInterface_SetTrait_Params
{
	struct FTraitKey                                   Key;                                                       // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TraitsInterface.GetTraitKeys
struct UTraitsInterface_GetTraitKeys_Params
{
	TArray<struct FTraitKey>                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TraitsInterface.GetTraitFromKey
struct UTraitsInterface_GetTraitFromKey_Params
{
	struct FTraitKey                                   Key;                                                       // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TraitsInterface.GetTrait
struct UTraitsInterface_GetTrait_Params
{
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TraitsInterface.ExecuteTraitCallback
struct UTraitsInterface_ExecuteTraitCallback_Params
{
	struct FTraitKey                                   Key;                                                       // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TraitsInterface.AddToTrait
struct UTraitsInterface_AddToTrait_Params
{
	struct FTraitKey                                   Key;                                                       // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.UsableItemInterface.RequiresTargetItem
struct UUsableItemInterface_RequiresTargetItem_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.UsableItemInterface.OnActivationConfirmedClient
struct UUsableItemInterface_OnActivationConfirmedClient_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.UsableItemInterface.OnActivatedServer
struct UUsableItemInterface_OnActivatedServer_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryItemEntry                         Item;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                TargetItemId;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EUseItemResult                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.UsableItemInterface.OnActivatedClient
struct UUsableItemInterface_OnActivatedClient_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryItemEntry                         Item;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                TargetItemId;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.UsableItemInterface.IsValidTarget
struct UUsableItemInterface_IsValidTarget_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryItemEntry                         Target;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.UsableItemInterface.GetDescription
struct UUsableItemInterface_GetDescription_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.UsableItemInterface.CanUse
struct UUsableItemInterface_CanUse_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ECanUseItemResult                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.UserGeneratedContentBlocker.OnOverlapInnerBlocker
struct AUserGeneratedContentBlocker_OnOverlapInnerBlocker_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Frontiers.UserGeneratedContentBlocker.GetInnerBlocker
struct AUserGeneratedContentBlocker_GetInnerBlocker_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.UserSettings.IsBloodEnabled
struct UUserSettings_IsBloodEnabled_Params
{
	class UObject*                                     Context;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.VendorComponent.ShowShopWidget
struct UVendorComponent_ShowShopWidget_Params
{
	class APawn*                                       Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Vendor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLInventoryContainerWardrobe.OnRep_WeaponSuiteCurrent
struct UTLInventoryContainerWardrobe_OnRep_WeaponSuiteCurrent_Params
{
};

// Function Frontiers.TLParticleSystemComponent.OnRevive
struct UTLParticleSystemComponent_OnRevive_Params
{
	class APawn*                                       Revived;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLParticleSystemComponent.OnDeath
struct UTLParticleSystemComponent_OnDeath_Params
{
	class APawn*                                       Dying;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLParticleSystemComponent.GetOwnedGameplayTags
struct UTLParticleSystemComponent_GetOwnedGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ZoomCam
struct ATLPlayerController_ZoomCam_Params
{
	float                                              Zoom;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ToggleVanityCam
struct ATLPlayerController_ToggleVanityCam_Params
{
};

// Function Frontiers.TLPlayerController.ToggleMap
struct ATLPlayerController_ToggleMap_Params
{
};

// Function Frontiers.TLPlayerController.ToggleInterface
struct ATLPlayerController_ToggleInterface_Params
{
};

// Function Frontiers.TLPlayerController.ToggleFortEditMenu
struct ATLPlayerController_ToggleFortEditMenu_Params
{
};

// Function Frontiers.TLPlayerController.ToggleAreaMap
struct ATLPlayerController_ToggleAreaMap_Params
{
};

// Function Frontiers.TLPlayerController.TLClientTravel
struct ATLPlayerController_TLClientTravel_Params
{
	struct FString                                     URL;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MuxerToken;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ServerUpdateSession
struct ATLPlayerController_ServerUpdateSession_Params
{
	struct FString                                     ChangedSessionId;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ServerUpdateMovementStatus
struct ATLPlayerController_ServerUpdateMovementStatus_Params
{
	bool                                               bRequestingMove;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ServerSetDifficulty
struct ATLPlayerController_ServerSetDifficulty_Params
{
	int                                                Difficulty;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ServerSetCharacterCheat
struct ATLPlayerController_ServerSetCharacterCheat_Params
{
	struct FString                                     CharID;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ServerSendPetToTown
struct ATLPlayerController_ServerSendPetToTown_Params
{
	TArray<struct FCatalogTableRowHandle>              ShoppingList;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ServerResurrect
struct ATLPlayerController_ServerResurrect_Params
{
	Frontiers_EDeathReviveOption                       ReviveOption;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ServerRequestCharacterSkillList
struct ATLPlayerController_ServerRequestCharacterSkillList_Params
{
	class ATLCharacter*                                TargetCharacter;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ServerReportUser
struct ATLPlayerController_ServerReportUser_Params
{
	struct FTLUserAccount                              ReportedPlayer;                                            // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	FrontiersUI_EUserReportCategory                    ReportCategory;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientLanguage;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserText;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ChatMessage;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DebugInfo;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ServerOperate
struct ATLPlayerController_ServerOperate_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ServerKeepAlive
struct ATLPlayerController_ServerKeepAlive_Params
{
};

// Function Frontiers.TLPlayerController.ServerHandleSavedMovesOverflow
struct ATLPlayerController_ServerHandleSavedMovesOverflow_Params
{
	uint32_t                                           EventId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ServerDebugKillPlayer
struct ATLPlayerController_ServerDebugKillPlayer_Params
{
};

// Function Frontiers.TLPlayerController.OnTraitUpdated
struct ATLPlayerController_OnTraitUpdated_Params
{
};

// Function Frontiers.TLPlayerController.IsCorrectNetMode
struct ATLPlayerController_IsCorrectNetMode_Params
{
	class APlayerController*                           Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.GetWardrobeListing
struct ATLPlayerController_GetWardrobeListing_Params
{
	class APawn*                                       InPawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.GetTLCharacter
struct ATLPlayerController_GetTLCharacter_Params
{
	class ATLCharacter*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.GetSkillManagerFromController
struct ATLPlayerController_GetSkillManagerFromController_Params
{
	class USkillManager*                               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.GetSelectedActor
struct ATLPlayerController_GetSelectedActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.GetLocalTLPlayerController
struct ATLPlayerController_GetLocalTLPlayerController_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATLPlayerController*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.GetLocalTLCharacter
struct ATLPlayerController_GetLocalTLCharacter_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATLCharacter*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.GetDebugInteractionString
struct ATLPlayerController_GetDebugInteractionString_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.GetActiveSkillSet
struct ATLPlayerController_GetActiveSkillSet_Params
{
	Frontiers_ESkillSet                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.DebugServerSetAndLoadPlayer
struct ATLPlayerController_DebugServerSetAndLoadPlayer_Params
{
	struct FString                                     AccountName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharID;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanAppendDevIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DebugAccountSuffix;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrontiersSession                           DebugSession;                                              // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ClientSetDebugAccountSuffix
struct ATLPlayerController_ClientSetDebugAccountSuffix_Params
{
	int                                                Suffix;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ClientSendInactivityWarning
struct ATLPlayerController_ClientSendInactivityWarning_Params
{
	float                                              SecondsTilDisconnect;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ClientSendDisconnect
struct ATLPlayerController_ClientSendDisconnect_Params
{
	FrontiersUI_EDisconnectReason                      reason;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ClientReceiveCharacterSkillList
struct ATLPlayerController_ClientReceiveCharacterSkillList_Params
{
	class ATLCharacter*                                TargetCharacter;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSkillRepArrayEntry>                 SkillList;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ClientPlayQuip
struct ATLPlayerController_ClientPlayQuip_Params
{
	Frontiers_ENarratorQuip                            Quip;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.ClientJoinLiveSession
struct ATLPlayerController_ClientJoinLiveSession_Params
{
	struct FName                                       SessionName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerController.CheckPlayerActivity
struct ATLPlayerController_CheckPlayerActivity_Params
{
};

// Function Frontiers.TLPlayerState.OnDeath
struct ATLPlayerState_OnDeath_Params
{
	class APawn*                                       Dying;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Attacker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerState.MulticastPlayerPickedUpItem
struct ATLPlayerState_MulticastPlayerPickedUpItem_Params
{
	struct FName                                       ItemRowName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLPlayerState.MulticastPlayerDied
struct ATLPlayerState_MulticastPlayerDied_Params
{
	struct FText                                       KillerName;                                                // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.MaterialManagerComponent.RestoreMaterials
struct UMaterialManagerComponent_RestoreMaterials_Params
{
};

// Function Frontiers.MaterialManagerComponent.ResolveOverrideRequest
struct UMaterialManagerComponent_ResolveOverrideRequest_Params
{
	struct FGuid                                       RequestID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.MaterialManagerComponent.OverrideParentMaterials
struct UMaterialManagerComponent_OverrideParentMaterials_Params
{
	class UMaterialInterface*                          OverrideParent;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       RequestID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLMaterialUtils.SetScalarParameterValueOnAllMeshes
struct UTLMaterialUtils_SetScalarParameterValueOnAllMeshes_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParameterName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParameterValue;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLMaterialUtils.CreateDynamicMaterialOfType
struct UTLMaterialUtils_CreateDynamicMaterialOfType_Params
{
	class UMaterialInterface*                          InOriginalMaterial;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          InNewParent;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ObjectOuter;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLSpringArmComponent.RequestArmMove
struct UTLSpringArmComponent_RequestArmMove_Params
{
	float                                              NewLength;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewPitch;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLSpringArmComponent.ClearArmMoveRequest
struct UTLSpringArmComponent_ClearArmMoveRequest_Params
{
	int                                                Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLTransmogDye.ServerTransmog
struct UTLTransmogDye_ServerTransmog_Params
{
	int                                                InventoryEntryId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewItemRowName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewDyeRowName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLTransmogDye.ServerMarkAllTransmogDyesSeen
struct UTLTransmogDye_ServerMarkAllTransmogDyesSeen_Params
{
};

// Function Frontiers.TLTransmogDye.ClientTransmogCompleted
struct UTLTransmogDye_ClientTransmogCompleted_Params
{
	int                                                InventoryEntryId;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ETransmogOperation                       Operation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrapComponent.TrapTriggeredOnClient
struct UTrapComponent_TrapTriggeredOnClient_Params
{
	class AActor*                                      TriggeredBy;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrapComponent.BlueprintTriggerTrap
struct UTrapComponent_BlueprintTriggerTrap_Params
{
	class AActor*                                      TriggeredBy;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLTravelComponent.SetStartingAreaName
struct UTLTravelComponent_SetStartingAreaName_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InStartingAreaName;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLTravelComponent.ServerInformWarpComplete
struct UTLTravelComponent_ServerInformWarpComplete_Params
{
};

// Function Frontiers.TLTravelComponent.ServerInformLoadComplete
struct UTLTravelComponent_ServerInformLoadComplete_Params
{
};

// Function Frontiers.TLTravelComponent.ServerInformClientTravelStateChanged
struct UTLTravelComponent_ServerInformClientTravelStateChanged_Params
{
	Frontiers_ETravelState                             InClientTravelState;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLTravelComponent.ServerInformActorCountReached
struct UTLTravelComponent_ServerInformActorCountReached_Params
{
};

// Function Frontiers.TLTravelComponent.ServerExecuteBotTravel
struct UTLTravelComponent_ServerExecuteBotTravel_Params
{
};

// Function Frontiers.TLTravelComponent.ServerConfirmWarp
struct UTLTravelComponent_ServerConfirmWarp_Params
{
};

// Function Frontiers.TLTravelComponent.ServerCancelWarp
struct UTLTravelComponent_ServerCancelWarp_Params
{
};

// Function Frontiers.TLTravelComponent.OnRep_UnlockAllWarps
struct UTLTravelComponent_OnRep_UnlockAllWarps_Params
{
};

// Function Frontiers.TLTravelComponent.ClientTravelRequested
struct UTLTravelComponent_ClientTravelRequested_Params
{
	struct FName                                       AreaRowName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLTravelComponent.ClientTravelCanceled
struct UTLTravelComponent_ClientTravelCanceled_Params
{
};

// Function Frontiers.TLTravelComponent.ClientShowWarpError
struct UTLTravelComponent_ClientShowWarpError_Params
{
	Frontiers_ECanUseWarp                              WarpResult;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLTravelComponent.ClientSetToPlaying
struct UTLTravelComponent_ClientSetToPlaying_Params
{
};

// Function Frontiers.TLTravelComponent.ClientSetSpawnLocation
struct UTLTravelComponent_ClientSetSpawnLocation_Params
{
	struct FVector                                     InSpawnLocation;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLTravelComponent.ClientSetPendingContentVersion
struct UTLTravelComponent_ClientSetPendingContentVersion_Params
{
	int                                                InPendingContentVersion;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLTravelComponent.ClientSetAreaGuid
struct UTLTravelComponent_ClientSetAreaGuid_Params
{
	struct FGuid                                       InAreaGuid;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLTravelComponent.ClientSetActorLoadInfo
struct UTLTravelComponent_ClientSetActorLoadInfo_Params
{
	int                                                InExpectedActorCount;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       InConductorHandlerGuid;                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InConductorHandlerCount;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLTravelComponent.ClientOnWarpConfirmationRequested
struct UTLTravelComponent_ClientOnWarpConfirmationRequested_Params
{
	class AWarpGadget*                                 DesiredWarpGadget;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ETravelConfirmationType                  ConfirmationType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLTravelComponent.ClientLevelLoadSucceeded
struct UTLTravelComponent_ClientLevelLoadSucceeded_Params
{
	struct FVector                                     InActualSpawnLocation;                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TLTravelComponent.ClientActorLoadTimedOut
struct UTLTravelComponent_ClientActorLoadTimedOut_Params
{
};

// Function Frontiers.FrontiersFunctionLibrary.IsEditor
struct UFrontiersFunctionLibrary_IsEditor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.FrontiersFunctionLibrary.GetHostPlatform
struct UFrontiersFunctionLibrary_GetHostPlatform_Params
{
	Frontiers_ETLPlatform                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackFollowingComponent.OnRep_TrackFollowingData
struct UTrackFollowingComponent_OnRep_TrackFollowingData_Params
{
};

// Function Frontiers.TrackFollowingComponent.OnRep_CurrentNode
struct UTrackFollowingComponent_OnRep_CurrentNode_Params
{
};

// Function Frontiers.TrackFollowingComponent.GetAttachedTrackFromActor
struct UTrackFollowingComponent_GetAttachedTrackFromActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATrackNode*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackFollowingComponent.AttachActorToTrack
struct UTrackFollowingComponent_AttachActorToTrack_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATrackNode*                                  Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackNode.SpawnTrackNode
struct ATrackNode_SpawnTrackNode_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Start;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TrackNodeClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATrackNode*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackNode.SetEndBufferActor
struct ATrackNode_SetEndBufferActor_Params
{
	class ATrackBuffer*                                Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackNode.RequestExtendTrack
struct ATrackNode_RequestExtendTrack_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LookAheadSeconds;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExtendIfStationary;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackNode.OnRep_TrackHazardActive
struct ATrackNode_OnRep_TrackHazardActive_Params
{
	bool                                               bTrackHazardWasActive;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackNode.GetStartTangent
struct ATrackNode_GetStartTangent_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackNode.GetStartPoint
struct ATrackNode_GetStartPoint_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackNode.GetEndTangent
struct ATrackNode_GetEndTangent_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackNode.GetEndPoint
struct ATrackNode_GetEndPoint_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackNode.ExtendTrack
struct ATrackNode_ExtendTrack_Params
{
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NewLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackBuffer.ShowTurretHighlight
struct ATrackBuffer_ShowTurretHighlight_Params
{
};

// Function Frontiers.TrackBuffer.ShowTrackHighlight
struct ATrackBuffer_ShowTrackHighlight_Params
{
};

// Function Frontiers.TrackBuffer.RemoveTracks
struct ATrackBuffer_RemoveTracks_Params
{
	class APawn*                                       BufferOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BufferContainerClass;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TurretContainerClass;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackBuffer.GetOwnedGameplayTags
struct ATrackBuffer_GetOwnedGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrackBuffer.ClearHighlights
struct ATrackBuffer_ClearHighlights_Params
{
};

// Function Frontiers.TrainCarDataComponent.SpawnTrainCar
struct UTrainCarDataComponent_SpawnTrainCar_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       InGameplayTags;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATurretActor*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrainCarDataComponent.GetTrainCarSkillSlot
struct UTrainCarDataComponent_GetTrainCarSkillSlot_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       InGameplayTags;                                            // (Parm, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrainCarDataComponent.GetTrainCarMatchingGameplayTag
struct UTrainCarDataComponent_GetTrainCarMatchingGameplayTag_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       InGameplayTags;                                            // (Parm, NativeAccessSpecifierPublic)
	class ATurretActor*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrainCarDataComponent.GetOwnedGameplayTags
struct UTrainCarDataComponent_GetOwnedGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.TrainCarDataComponent.GetFirstTrainCarRowHandle
struct UTrainCarDataComponent_GetFirstTrainCarRowHandle_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinionTableRowHandle                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Frontiers.WardrobeComponent.OnRep_WardrobePart
struct UWardrobeComponent_OnRep_WardrobePart_Params
{
};

// Function Frontiers.Wardrobe.OnAssetLoadFinished
struct UWardrobe_OnAssetLoadFinished_Params
{
	int                                                InAsyncIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.WardrobePropComponent.OnRep_Gender
struct UWardrobePropComponent_OnRep_Gender_Params
{
};

// Function Frontiers.WarpBack.SpawnWarpBack
struct AWarpBack_SpawnWarpBack_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WarpClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWarpBack*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.WarpBack.SpawnDefaultWarpBack
struct AWarpBack_SpawnDefaultWarpBack_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWarpBack*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.WaypointGadget.UpdateStatus
struct AWaypointGadget_UpdateStatus_Params
{
	bool                                               bIsUnlocked;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Frontiers.WaypointGadget.PlayUnlockEvent
struct AWaypointGadget_PlayUnlockEvent_Params
{
	class AActor*                                      Operator;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
