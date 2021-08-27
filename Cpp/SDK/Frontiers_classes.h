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

// Class Frontiers.PlayerComponent
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UPlayerComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerComponent");
		return ptr;
	}



	class ATLPlayerController* GetTLPlayerController();
	class ATLCharacter* GetTLCharacter();
	class APlayerController* GetPlayerController();
	class APawn* GetPawn();
	class AController* GetController();
};

// Class Frontiers.AchievementManager
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UAchievementManager : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_G0JU[0x60];                                    // 0x00B0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AchievementManager");
		return ptr;
	}



};

// Class Frontiers.ActiveTrait
// 0x0108 (FullSize[0x01B8] - InheritedSize[0x00B0])
class UActiveTrait : public UActorComponent
{
public:
	unsigned char                                      UnknownData_PJW2[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRepValue;                                                // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRepMaxValue;                                             // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHitMin;                                                  // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHitMax;                                                  // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRateChanged;                                             // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GFP4[0x8];                                     // 0x0108(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FActiveTraitValue                           ActiveTraitValue;                                          // 0x0110(0x000C) (Edit, Net, DisableEditOnTemplate, EditConst, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              MaxValue;                                                  // 0x011C(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       ActiveTraitRowName;                                        // 0x0120(0x0008) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                LockedRefCount;                                            // 0x0128(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                IncreaseLockedRefCount;                                    // 0x012C(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                DecreaseLockedRefCount;                                    // 0x0130(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ITP3[0x84];                                    // 0x0134(0x0084) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ActiveTrait");
		return ptr;
	}



	float Store();
	void SetMaxValue();
	float Set(float NewValue);
	float Reset();
	void OnRep_Value();
	void OnRep_RowName();
	void OnRep_MaxValue();
	float STATIC_GetUIPercentDiscrete(class UActiveTrait* ActiveTrait);
	float STATIC_GetUIPercent(class UActiveTrait* ActiveTrait);
	struct FText STATIC_GetUILabel(class UActiveTrait* ActiveTrait);
	float GetMin();
	float GetMax();
	struct FText STATIC_GetDisplayName(class AActor* Actor, const struct FName& ActiveTraitName);
	float GetDeltaMax();
	float GetDelta();
	class UActiveTrait* STATIC_GetActiveTrait(class AActor* Actor, const struct FName& ActiveTraitName);
	float Get();
	float Add(float NewValue);
};

// Class Frontiers.ActiveTraitNoReplicate
// 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
class UActiveTraitNoReplicate : public UActiveTrait
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ActiveTraitNoReplicate");
		return ptr;
	}



};

// Class Frontiers.ActiveTraitReplicateCheap
// 0x0008 (FullSize[0x01C0] - InheritedSize[0x01B8])
class UActiveTraitReplicateCheap : public UActiveTrait
{
public:
	unsigned char                                      ValueFraction;                                             // 0x01B8(0x0001) (Edit, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FGVC[0x7];                                     // 0x01B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ActiveTraitReplicateCheap");
		return ptr;
	}



	void OnRep_Fraction();
};

// Class Frontiers.ActiveTraitMonitorComponent
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class UActiveTraitMonitorComponent : public UPlayerComponent
{
public:
	TArray<struct FActiveTraitMonitorAction>           Actions;                                                   // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bOnlyLocalPlayerOnClient;                                  // 0x00C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PQS7[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TriggerCooldown;                                           // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EAllowedType                             AllowedTickType;                                           // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7FUL[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ActiveTraitMonitorComponent");
		return ptr;
	}



	void OnRuleTriggered(const struct FName& Data);
};

// Class Frontiers.ActorChainInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActorChainInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ActorChainInterface");
		return ptr;
	}



};

// Class Frontiers.ActorFunctionLibraryShared
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActorFunctionLibraryShared : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ActorFunctionLibraryShared");
		return ptr;
	}



	class UObject* STATIC_GetClassDefaultObject(class UClass* Class);
};

// Class Frontiers.ActorFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActorFunctionLibrary : public UActorFunctionLibraryShared
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ActorFunctionLibrary");
		return ptr;
	}



	bool STATIC_TeleportTowardsPathable(class AActor* Actor, const struct FVector& Location, float MaxDistance);
	bool STATIC_TeleportTo(class AActor* Actor, const struct FVector& Location, bool bRequirePathable);
	bool STATIC_TeleportNearTo(class AActor* Actor, class AActor* Target, float MaxRadius, float MinDistance, int MaxAttempts);
	void STATIC_SortActorsByDistance(const struct FVector& Location, TArray<class AActor*>* ActorsToSort);
	void STATIC_SetSelectedByMeshParameter(class AActor* Actor, bool bSet);
	void STATIC_SetSelectedByCustomDepthStencil(class AActor* Actor, bool bSet);
	void STATIC_ResetPlayerClickTrace(class AActor* Actor);
	int STATIC_RandomIntegerFromStreamFullRange(const struct FRandomStream& RandomStream);
	void STATIC_PickRandomArrayIndex(TArray<int> TargetArray, int* Item);
	bool STATIC_IsPawnInMapworks(class AActor* Actor);
	bool STATIC_IsHardcore(class AActor* Actor);
	bool STATIC_IsActorWithinRange(class AActor* Actor, const struct FVector& Location, float Distance, float MinDistance);
	bool STATIC_IsActorWithinAngleRange(class AActor* Actor, const struct FVector& Location, float AngleDegrees);
	bool STATIC_IsActorOwnerLocal(class AActor* Actor);
	class AActor* STATIC_GetPlayerInSameArea(class AActor* AreaContextActor);
	struct FVector STATIC_GetLocationInFrontOfActor(class AActor* Actor, const struct FVector& Offset);
	struct FVector STATIC_GetFeetLocation(class AActor* Actor);
	TArray<class AActor*> STATIC_GetAreaActorsByType(class AActor* ReferenceActor, class UClass* ActorClass);
	void STATIC_ForceDestroyComponent(class UActorComponent* Component);
	void STATIC_DisablePlayerClickTrace(class AActor* Actor);
	void STATIC_DisableCollisionAndNavigation(class AActor* InActor);
	bool STATIC_AreActorsWithinRange(class AActor* First, class AActor* Second, float Distance, float MinDistance);
	bool STATIC_AreActorsWithinAngleRange(class AActor* Source, class AActor* Target, float AngleDegrees);
};

// Class Frontiers.ActorLimiter
// 0x00A0 (FullSize[0x0150] - InheritedSize[0x00B0])
class UActorLimiter : public UActorComponent
{
public:
	unsigned char                                      UnknownData_1D38[0x20];                                    // 0x00B0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FVector, struct FPrePickedActorClass>  PrePickedClasses;                                          // 0x00D0(0x0050) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RXJ6[0x30];                                    // 0x0120(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ActorLimiter");
		return ptr;
	}



};

// Class Frontiers.ActorMortalityComponent
// 0x00D8 (FullSize[0x0188] - InheritedSize[0x00B0])
class UActorMortalityComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    PreDeathDelegate;                                          // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDeathDelegate;                                           // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    PostDeathDelegate;                                         // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ClientDestroyDeadDelegate;                                 // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReviveDelegate;                                          // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              AllyReviveStatusEffects;                                   // 0x0100(0x0010) (Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BB97[0x40];                                    // 0x0110(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDeathInfo                                  DeathInfo;                                                 // 0x0150(0x0018) (Edit, Net, DisableEditOnTemplate, EditConst, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_ECollisionChannel>              DeadCollisionChannel;                                      // 0x0168(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BAMC[0x3];                                     // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DeadCollisionProfileName;                                  // 0x016C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H480[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      OnReviveStatusEffect;                                      // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ReviveStatusDuration;                                      // 0x0180(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C43S[0x4];                                     // 0x0184(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ActorMortalityComponent");
		return ptr;
	}



	void ServerGiveUpOnAllyRevive();
	void STATIC_ReviveActor(class AActor* Actor);
	void OnRep_DeathInfo();
	void MulticastReviveActorInternal();
	void MarkAllyReviveExpired();
	void STATIC_KillActor(class AActor* Actor, class AActor* Attacker, class USkill* Skill, bool bIsOverkill);
	bool IsDyingOrDead();
	float STATIC_GetTimeSinceActorDeath(class AActor* Actor);
	float STATIC_GetActorDeathTimestamp(class AActor* Actor);
	void ClientAllyReviveExpired();
	bool STATIC_ActorIsDyingOrDead(class AActor* Actor);
};

// Class Frontiers.ActorProxy
// 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
class AActorProxy : public AActor
{
public:
	unsigned char                                      UnknownData_HWGW[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0228(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ActorProxy");
		return ptr;
	}



};

// Class Frontiers.ActorProxyNode
// 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
class AActorProxyNode : public AActor
{
public:
	TArray<class AActor*>                              SpawnedActors;                                             // 0x0220(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	bool                                               bSpawnWithRandomRotation;                                  // 0x0230(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_603X[0x3];                                     // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxYawRotation;                                            // 0x0234(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActorProxyEntry>                    ActorProxies;                                              // 0x0238(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FActorProxyNodeMonsterSpawnerEntry>  MonsterSpawners;                                           // 0x0248(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FActorProxyNodeGadgetEntry>          Gadgets;                                                   // 0x0258(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FActorProxyNodeBreakableEntry>       Breakables;                                                // 0x0268(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FActorProxyNodeHazardEntry>          Hazards;                                                   // 0x0278(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FActorProxyNodeGameplayTagEntry>     ActorLimitGameplayTags;                                    // 0x0288(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_46IR[0x8];                                     // 0x0298(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ActorProxyNode");
		return ptr;
	}



};

// Class Frontiers.SpawnEntryBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USpawnEntryBase : public UObject
{
public:
	unsigned char                                      UnknownData_G5L5[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnEntryBase");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGotoSpawnRowBase
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USpawnDataEntryGotoSpawnRowBase : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_IX6S[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGotoSpawnRowBase");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGotoAffixSpawnRow
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryGotoAffixSpawnRow : public USpawnDataEntryGotoSpawnRowBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGotoAffixSpawnRow");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddAffixByName
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USpawnDataEntryAddAffixByName : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_B465[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddAffixByName");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGameplayTags
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class USpawnDataEntryGameplayTags : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_CM3F[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGameplayTags");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddAffixByFilter
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USpawnDataEntryAddAffixByFilter : public USpawnDataEntryGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddAffixByFilter");
		return ptr;
	}



};

// Class Frontiers.AllowedTypeFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAllowedTypeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AllowedTypeFunctionLibrary");
		return ptr;
	}



	bool STATIC_IsAllowedOnServer(Frontiers_EAllowedType Allowed);
	bool STATIC_IsAllowedOnClient(Frontiers_EAllowedType Allowed);
	bool STATIC_IsAllowed(class UObject* Context, Frontiers_EAllowedType Allowed);
};

// Class Frontiers.SkillShape
// 0x0068 (FullSize[0x0288] - InheritedSize[0x0220])
class ASkillShape : public AActor
{
public:
	unsigned char                                      UnknownData_2EKF[0x28];                                    // 0x0220(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              OverlappedActors;                                          // 0x0248(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class USkillDelegate*                              SkillDelegate;                                             // 0x0258(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDestroySelfOnOverlap;                                     // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAllowDeadActorNotifyOnEndOverlap;                         // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSortTargetsByDistanceToOwner;                             // 0x0262(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCheckLineOfSight;                                         // 0x0263(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WASI[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FActorStatusEffectPair>              StatusEffects;                                             // 0x0268(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0KF1[0x10];                                    // 0x0278(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillShape");
		return ptr;
	}



	void RequestActivation();
};

// Class Frontiers.AllyReviveShape
// 0x0058 (FullSize[0x02E0] - InheritedSize[0x0288])
class AAllyReviveShape : public ASkillShape
{
public:
	class UTLDecalComponent*                           ReviveExpireTimerDecal;                                    // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTLDecalComponent*                           RevivingTimerDecal;                                        // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ReviveExpireStatusEffectClass;                             // 0x0298(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      RevivingStatusEffectClass;                                 // 0x02A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CanBeRevivedStatusEffectClass;                             // 0x02A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ReviveDuration;                                            // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ReviveExpireDuration;                                      // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                            _;                                                        // 0x02B8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentReviveExpireDuration;                               // 0x02C0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OVTI[0x1C];                                    // 0x02C4(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AllyReviveShape");
		return ptr;
	}



	void OnRevived(class APawn* Pawn);
	class UTLDecalComponent* GetRevivingDecal();
	class UTLDecalComponent* GetReviveRangeDecal();
	class UTLDecalComponent* GetReviveExpireDecal();
	bool STATIC_CanBeRevivedByAlly(class AActor* DeadActor);
};

// Class Frontiers.AnimatedMesh
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class AAnimatedMesh : public AActor
{
public:
	class UFXSkeletalMeshComponent*                    FXMesh;                                                    // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimatedMesh");
		return ptr;
	}



	class AAnimatedMesh* STATIC_SpawnAnimatedMesh(class UObject* WorldContextObject, const struct FSpawnAnimatedMeshParams& InParams, const struct FString& DebugContext);
};

// Class Frontiers.AnimNotify_AttachActor
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UAnimNotify_AttachActor : public UAnimNotifyState
{
public:
	class UClass*                                      ActorClass;                                                // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EAllowedType                             Allowed;                                                   // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LTLM[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttachmentBone;                                            // 0x003C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // 0x0044(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0050(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZYJI[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_AttachActor");
		return ptr;
	}



	void DestroyAttachment(class AActor* Owner);
};

// Class Frontiers.AnimNotify_HideAttachedActors
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAnimNotify_HideAttachedActors : public UAnimNotifyState
{
public:
	Frontiers_EAllowedType                             Allowed;                                                   // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PCPS[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_HideAttachedActors");
		return ptr;
	}



};

// Class Frontiers.SkillAnimNotify
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class USkillAnimNotify : public UAnimNotify
{
public:
	unsigned char                                      UnknownData_3Z7O[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNotifyCondition>                    Conditions;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bPlayInEditorPreview;                                      // 0x0050(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9YUB[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillAnimNotify");
		return ptr;
	}



};

// Class Frontiers.SkillAnimNotify_Cosmetic
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class USkillAnimNotify_Cosmetic : public USkillAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillAnimNotify_Cosmetic");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_CameraShake
// 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
class UAnimNotify_CameraShake : public USkillAnimNotify_Cosmetic
{
public:
	struct FCameraShakeData                            ShakeData;                                                 // 0x0058(0x0020) (Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_CameraShake");
		return ptr;
	}



	void STATIC_TLPlayWorldCameraShake(class UObject* WorldContextObject, class UClass* Shake, const struct FVector& Epicenter, float InnerRadius, float OuterRadius, class AActor* OwnerRequired, float Falloff, bool bOrientShakeTowardsEpicenter);
};

// Class Frontiers.AnimNotify_DeactivateParticles
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAnimNotify_DeactivateParticles : public UAnimNotify
{
public:
	bool                                               bDetachParticles;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YMHW[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_DeactivateParticles");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_DebugDraw
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UAnimNotify_DebugDraw : public USkillAnimNotify_Cosmetic
{
public:
	float                                              Radius;                                                    // 0x0058(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x005C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAtSource;                                                 // 0x0060(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5JXR[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_DebugDraw");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_DisableOcclusion
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UAnimNotify_DisableOcclusion : public USkillAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_DisableOcclusion");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_DropLoot
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnimNotify_DropLoot : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_DropLoot");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_EndSlot
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UAnimNotify_EndSlot : public UAnimNotify
{
public:
	struct FName                                       SlotName;                                                  // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                 // 0x0040(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B72S[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_EndSlot");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_Harvest
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UAnimNotify_Harvest : public USkillAnimNotify
{
public:
	float                                              HarvestPoints;                                             // 0x0058(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5D1U[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_Harvest");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_Pause
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnimNotify_Pause : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_Pause");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_PlayAnimationOnChildMesh
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UAnimNotify_PlayAnimationOnChildMesh : public UAnimNotify
{
public:
	struct FGameplayTag                                AnimInstanceTag;                                           // 0x0038(0x0008) (Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                AnimToPlayTag;                                             // 0x0040(0x0008) (Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BasePlayRate;                                              // 0x0048(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SC39[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_PlayAnimationOnChildMesh");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_Selectable
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAnimNotify_Selectable : public UAnimNotify
{
public:
	bool                                               bSelectable;                                               // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7POG[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_Selectable");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_SetMeshVisibility
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAnimNotify_SetMeshVisibility : public UAnimNotify
{
public:
	bool                                               bVisible;                                                  // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3OSZ[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_SetMeshVisibility");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_SetScalarMaterialParamter
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
class UAnimNotify_SetScalarMaterialParamter : public USkillAnimNotify
{
public:
	TArray<struct FName>                               MaterialParameter;                                         // 0x0058(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ScalarValue;                                               // 0x0068(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9MQP[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_SetScalarMaterialParamter");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_SpawnAnimatedMesh
// 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
class UAnimNotify_SpawnAnimatedMesh : public USkillAnimNotify_Cosmetic
{
public:
	bool                                               bWorldSpace;                                               // 0x0058(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseCharacterAnimPlayRate;                                 // 0x0059(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TPCU[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               MeshToSpawn;                                               // 0x0060(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           Material;                                                  // 0x0068(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           AnimationToPlay;                                           // 0x0070(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_SpawnAnimatedMesh");
		return ptr;
	}



};

// Class Frontiers.Area
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UArea : public UObject
{
public:
	int                                                MaxAttempts;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6IJO[0x8];                                     // 0x002C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Seed;                                                      // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomSeed;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8AQX[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      TemplateClass;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ConductorHandlers;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ENGP[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMapWorksSpawnEntry>                 DefaultMapWorksSpawnEntries;                               // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FMinionSpawnEntry>                   DefaultPetSpawnEntries;                                    // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FActorLimit>                         ActorLimits;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bAllowFogOfWar;                                            // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMonsterLevelsIncreaseToCenter;                            // 0x0091(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q2VH[0x6];                                     // 0x0092(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRuleSetMetaData>                    GraphRulesetReferences;                                    // 0x0098(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, NativeAccessSpecifierPrivate)
	TArray<struct FRuleSetMetaData>                    RulesetReferences;                                         // 0x00A8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Area");
		return ptr;
	}



	void CompileRules();
	void STATIC_CompileAreaBlueprintRules(class UBlueprint* TargetArea);
	void AddRuleFromMetadata(struct FRuleSetMetaData* MetaData);
	void AddRule(class UClass* RuleSetClass, class ADRLGRuleSet* RuleSetOverride, Frontiers_EDRLGRuleSetMethod Method, int Attempts, int RequiredSuccessfulAttempts, bool bSkipToNextAfterRequiredRuleSuccess, bool bAttemptsTimesSize, bool bRequiredTimesSize, bool bAttemptsTimesForts, bool bRequiredTimesFortCount, Frontiers_EWarpToIndex WarpAddedByRuleSet, bool bStopHere);
};

// Class Frontiers.TLCharacter
// 0x0278 (FullSize[0x0730] - InheritedSize[0x04B8])
class ATLCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_WNOT[0x8];                                     // 0x04B8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_8O0N[0x50];                                    // 0x04C0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               NeverShowOcclusionShader;                                  // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H6GU[0x3];                                     // 0x0511(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnTime;                                                 // 0x0514(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseMovementSpeed;                                         // 0x0518(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreEnergyCosts;                                        // 0x051C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ON16[0x1];                                     // 0x051D(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsTargetable;                                             // 0x051E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JWCG[0x1];                                     // 0x051F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTree*                               BehaviorTree;                                              // 0x0520(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkillManager*                               SkillManager;                                              // 0x0528(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     DefaultPortrait;                                           // 0x0530(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LightRigBlueprint;                                         // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PhotoboothClass;                                           // 0x0540(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LegacyCapsuleRadius;                                       // 0x0548(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XRBB[0xAC];                                    // 0x054C(0x00AC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bSaveCharacter;                                            // 0x05F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DEC5[0x17];                                    // 0x05F9(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APlayerLight*                                SpawnedLightRig;                                           // 0x0610(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMonsterSpawner*                             SpawnedFrom;                                               // 0x0618(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorMortalityComponent*                    ActorMortalityComponent;                                   // 0x0620(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBossMonsterComponent*                       BossMonsterComponent;                                      // 0x0628(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMonsterChampionComponent*                   MonsterChampionComponent;                                  // 0x0630(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActiveTraitsTableRowHandle>         ActiveTraitRows;                                           // 0x0638(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	Frontiers_ETLTeam                                  Team;                                                      // 0x0648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XTJQ[0x7];                                     // 0x0649(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTraits*                                     Traits;                                                    // 0x0650(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTLInventory*                                Inventory;                                                 // 0x0658(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTLCombatActorComponent*                     CombatFX;                                                  // 0x0660(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0668(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9NAZ[0x4];                                     // 0x0688(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DataRowName;                                               // 0x068C(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XZ7R[0x4];                                     // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         FootstepEvent;                                             // 0x0698(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bAllowMeshOffsetFromRoot;                                  // 0x06B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NY86[0x7];                                     // 0x06B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TWeakObjectPtr<class UPrimitiveComponent>>  TempCollisionIgnores;                                      // 0x06B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BDZD[0x8];                                     // 0x06C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTLRepMovement                              TLReplicatedMovement;                                      // 0x06D0(0x001C) (Edit, Net, DisableEditOnInstance, RepNotify, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4L9P[0x4];                                     // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCapsuleComponent*                           CachedHitboxCapsule;                                       // 0x06F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YTI0[0x4];                                     // 0x06F8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MovementReplicationPerSecond;                              // 0x06FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MovementReplicationToleranceSquared;                       // 0x0700(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NV9Y[0x1C];                                    // 0x0704(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GroundZOffsetOverride;                                     // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsSelected;                                               // 0x0724(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_02V7[0xB];                                     // 0x0725(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLCharacter");
		return ptr;
	}



	void UpdateBaseMovementSpeed(float NewBaseMovementSpeed);
	bool ShouldDoGetHit(class UActiveTrait* RecentDamageActiveTrait, class USkill* Skill);
	void RemoveGameplayTag(const struct FGameplayTag& Tag);
	void RecalculateMovement(class AActor* Actor, const struct FTraitKey& Key);
	void OnWardrobeItemsChange(TArray<struct FItemReplicatedData> Items);
	void OnRep_TLReplicatedMovement();
	void OnHitpointsHitZero(class UActiveTrait* Trait);
	void OnExitLimbo();
	void OnEnterLimbo();
	void OnControllerReplicated();
	void OnClientDeadCharacterDestroyed(class AActor* SelfActor);
	void OnCharacterResurrect();
	void OnCharacterDeath(class AActor* Killer);
	void NativeOnCharacterResurrect(class APawn* RevivedPawn);
	void NativeOnCharacterDeath(class APawn* DeadPawn, class AActor* Attacker);
	bool IsPlayer();
	bool IsNPC();
	bool IsMonster();
	bool IsMinion();
	void InvulnerabilityChanged(class AActor* Actor, const struct FTraitKey& Key);
	int GiveItem(const struct FName& ItemName, float ItemLevel, const struct FString& Context, bool bShowCelebration);
	struct FPlayerTableRowHandle GetPlayerRowHandle();
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
	struct FMonstersTableRowHandle GetMonsterRowHandle();
	struct FMinionTableRowHandle GetMinionRowHandle();
	struct FText GetDisplayName();
	void EndRootMotionForce(class USkill* Skill);
	void DestroyLightRig(class AActor* DestroyedActor);
	void ClientWarpLocal(const struct FVector& ModifiedTargetLocation, bool bNoCameraLag, bool bPlayCameraFade);
	class UCapsuleComponent* BlueprintGetHitboxCapsuleComponent();
	void AddGameplayTags(const struct FGameplayTagContainer& TagContainer);
	void AddGameplayTag(const struct FGameplayTag& Tag);
};

// Class Frontiers.WaitForLoadPawn
// 0x0000 (FullSize[0x0730] - InheritedSize[0x0730])
class AWaitForLoadPawn : public ATLCharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.WaitForLoadPawn");
		return ptr;
	}



};

// Class Frontiers.PlayerUINotificationComponent
// 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
class UPlayerUINotificationComponent : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_BI48[0x38];                                    // 0x00B0(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerUINotificationComponent");
		return ptr;
	}



};

// Class Frontiers.PlayerVisibility
// 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
class UPlayerVisibility : public UActorComponent
{
public:
	unsigned char                                      UnknownData_JXOE[0xC];                                     // 0x00B0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CylinderRadius;                                            // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AngleToPlayerThreshold;                                    // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     OffsetTowardsCamera;                                       // 0x00C4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                              OverlappedActors;                                          // 0x00D0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class USceneComponent*                             CameraComponent;                                           // 0x00E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerVisibility");
		return ptr;
	}



};

// Class Frontiers.PortalProxy
// 0x0160 (FullSize[0x0380] - InheritedSize[0x0220])
class APortalProxy : public AActor
{
public:
	unsigned char                                      UnknownData_SLRP[0x150];                                   // 0x0220(0x0150) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FChildPortalEntry>                   ChildPortalEntries;                                        // 0x0370(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PortalProxy");
		return ptr;
	}



	class APortalProxy* STATIC_SpawnPortalProxyAtLocation(class AActor* Player, class UClass* PortalClass, Frontiers_EPlayerPortalDestinationType DestinationType, const struct FVector& SpawnLocation, bool bOneWay);
	class APortalProxy* STATIC_SpawnPortalProxy(class AActor* Player, class UClass* PortalClass, Frontiers_EPlayerPortalDestinationType DestinationType, bool bOneWay);
};

// Class Frontiers.PlayerPortalProxy
// 0x0008 (FullSize[0x0388] - InheritedSize[0x0380])
class APlayerPortalProxy : public APortalProxy
{
public:
	unsigned char                                      UnknownData_FJLB[0x8];                                     // 0x0380(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerPortalProxy");
		return ptr;
	}



};

// Class Frontiers.MapWorksPortalProxy
// 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
class AMapWorksPortalProxy : public APortalProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksPortalProxy");
		return ptr;
	}



};

// Class Frontiers.TLActorShared
// 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
class ATLActorShared : public AActor
{
public:
	unsigned char                                      UnknownData_XEBO[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0228(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLActorShared");
		return ptr;
	}



	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
};

// Class Frontiers.TLActor
// 0x0140 (FullSize[0x0388] - InheritedSize[0x0248])
class ATLActor : public ATLActorShared
{
public:
	unsigned char                                      UnknownData_0GQV[0x50];                                    // 0x0248(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bAutoOperateEnabled;                                       // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L72D[0x3];                                     // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AutoOperateDelay;                                          // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKillOnTakeDamage;                                         // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CVX5[0xF];                                     // 0x02A1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectDefinition                           PickupEffects;                                             // 0x02B0(0x00D0) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	Frontiers_ETLTeam                                  Team;                                                      // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowAltNameplate;                                         // 0x0381(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NeverShowOcclusionShader;                                  // 0x0382(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSelectable;                                             // 0x0383(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QFQ5[0x4];                                     // 0x0384(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLActor");
		return ptr;
	}



	struct FText STATIC_TLGetDisplayName(class AActor* Actor);
	void OnOperatedClient(class AActor* Other);
	void OnOperated(class AActor* Operator);
	void ClientOperate(class AActor* Other);
	void BlueprintServerOnTakeDamage(class AActor* Attacker, float TotalDamage);
};

// Class Frontiers.Gadget
// 0x0118 (FullSize[0x04A0] - InheritedSize[0x0388])
class AGadget : public ATLActor
{
public:
	unsigned char                                      UnknownData_2FVS[0x8];                                     // 0x0388(0x0008) Fix Super Size
	unsigned char                                      UnknownData_ZUCM[0x8];                                     // 0x0390(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemSpawnTableRowHandle                    ItemSpawnRow;                                              // 0x0398(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               OperateSkillSlot;                                          // 0x03A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EVisibilityBasedAnimTickOption              PreviousAnimTickOption;                                    // 0x03A9(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SP4V[0x6];                                     // 0x03AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequenceBase*                           IdleAnim;                                                  // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           OperateAnim;                                               // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           IdleAnimWhenAlreadyOperated;                               // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           ResetAnim;                                                 // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         OperateSound;                                              // 0x03D0(0x0018) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         OperateFailedSound;                                        // 0x03E8(0x0018) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_55C5[0x10];                                    // 0x0400(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLoopOperateAnim;                                          // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A6NQ[0x3];                                     // 0x0411(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     SpawnOffset;                                               // 0x0414(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumOperationalStatuses;                                    // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLoopOperationalStatus;                                    // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bResetEverywhere;                                          // 0x0425(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BGZT[0x2];                                     // 0x0426(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OperationalStatusResetDelay;                               // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BZTN[0x4];                                     // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0430(0x0018) (Edit, BlueprintVisible, Net, Protected, NativeAccessSpecifierProtected)
	Frontiers_EGadgetSharing                           Sharing;                                                   // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bForceIntoPersistentLevel;                                 // 0x0449(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCanBeOperated;                                            // 0x044A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VRT9[0x1];                                     // 0x044B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InitialOperationalStatus;                                  // 0x044C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_61K3[0x50];                                    // 0x0450(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Gadget");
		return ptr;
	}



	void SpawnItem(class AActor* Source, class APawn* TargetPlayer);
	void SetQuestId(const struct FName& QuestId);
	void SetCanBeOperated(bool bStatus);
	void OnStatusChanged();
	void OnAnimationHitEvent(int HitIndex);
	bool IsAtLastOperationalStatus(class AActor* Other);
	bool HasOperateHitNotify();
	int GetOperationalStatus(class AActor* Other);
	class USkeletalMeshComponent* FindSkeletalMesh();
	bool CheckOperateFailed(class AActor* Other);
	bool CanBeOperated(class AActor* Operator);
	class AActor* BlueprintGetOperatorActor();
	void AdvanceOperationalStatus(class AActor* Operator);
};

// Class Frontiers.WarpGadget
// 0x0020 (FullSize[0x04C0] - InheritedSize[0x04A0])
class AWarpGadget : public AGadget
{
public:
	struct FName                                       QuestForDeactiveWarp;                                      // 0x04A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WarpIndex;                                                 // 0x04A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHideWithInvalidDestination;                               // 0x04AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0J0U[0x3];                                     // 0x04AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     SpawnLocation;                                             // 0x04B0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DBTX[0x4];                                     // 0x04BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.WarpGadget");
		return ptr;
	}



	void SetWarpMapMarker(FrontiersUI_EMapMarkerType Type);
	bool IsBossWarpGadget(class APlayerController* PlayerController);
	void InitialClientActivateWarp();
	class UMapMarkerComponent* GetMapMarkerComponent();
	void ActivateWarpGadgetVFX();
};

// Class Frontiers.Portal
// 0x0180 (FullSize[0x0640] - InheritedSize[0x04C0])
class APortal : public AWarpGadget
{
public:
	struct FText                                       PlayerDisplayName;                                         // 0x04C0(0x0018) (Net, Protected, NativeAccessSpecifierProtected)
	uint64_t                                           OwnerAccountIdHash;                                        // 0x04D8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_EWarpToIndex                             WarpToIndex;                                               // 0x04E0(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DEOP[0x3];                                     // 0x04E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DestinationAreaName;                                       // 0x04E4(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_EPlayerPortalDestinationType             PortalDestinationType;                                     // 0x04EC(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YKGA[0x3];                                     // 0x04ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMapWorksParams                             MapWorks;                                                  // 0x04F0(0x00A8) (Net, Protected, NativeAccessSpecifierProtected)
	class APortalProxy*                                OwnerProxy;                                                // 0x0598(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DestinationAccountId;                                      // 0x05A0(0x0010) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDestinationPlayerIsInMapworks;                            // 0x05B0(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H5OD[0x3];                                     // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DestinationPlayerMapworksBaseAreaName;                     // 0x05B4(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                DestinationPlayerMapworksNameSeed;                         // 0x05BC(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDungeonChallengeSelection                  DungeonSelection;                                          // 0x05C0(0x0048) (Net, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NQOB[0x38];                                    // 0x0608(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Portal");
		return ptr;
	}



};

// Class Frontiers.PortraitLighting
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class APortraitLighting : public AActor
{
public:
	float                                              KeyLightBoost;                                             // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FillLightBoost;                                            // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PortraitLighting");
		return ptr;
	}



	class ULightComponent* GetKeyLight();
	class ULightComponent* GetFillLight();
	class USceneCaptureComponent2D* GetCamera();
};

// Class Frontiers.PostProcessFlagInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPostProcessFlagInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PostProcessFlagInterface");
		return ptr;
	}



	void SetPostProcessFlag(Frontiers_ETLPostProcessFlag Flag);
};

// Class Frontiers.PrecreatedInventoryEntryInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPrecreatedInventoryEntryInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PrecreatedInventoryEntryInterface");
		return ptr;
	}



};

// Class Frontiers.PreviewActorComponent
// 0x00C8 (FullSize[0x02C0] - InheritedSize[0x01F8])
class UPreviewActorComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_OS4J[0x8];                                     // 0x01F8(0x0008) Fix Super Size
	class UMaterialInterface*                          BaseTransparentMaterial;                                   // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          TransparentMaterialOverride;                               // 0x0208(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          RotationCurve;                                             // 0x0210(0x0088) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6JU4[0x8];                                     // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              PreviewActors;                                             // 0x02A0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BFE1[0x10];                                    // 0x02B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PreviewActorComponent");
		return ptr;
	}



};

// Class Frontiers.PreviewActorPositionComponent
// 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
class UPreviewActorPositionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_BR9P[0x8];                                     // 0x01F8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PreviewActorPositionComponent");
		return ptr;
	}



};

// Class Frontiers.PreviewAnchorWidget
// 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
class UPreviewAnchorWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PreviewAnchorWidget");
		return ptr;
	}



};

// Class Frontiers.PreviewSizeComponent
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class UPreviewSizeComponent : public UActorComponent
{
public:
	float                                              Scale;                                                     // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PositionOffset;                                            // 0x00B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x00C0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_21ZJ[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PreviewSizeComponent");
		return ptr;
	}



};

// Class Frontiers.ProcComponent
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UProcComponent : public UActorComponent
{
public:
	TMap<struct FActiveProcKey, struct FActiveProcData> ActiveProcs;                                               // 0x00B0(0x0050) (Protected, NativeAccessSpecifierProtected)
	TArray<struct FProcTableRowHandle>                 DefaultProcs;                                              // 0x0100(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ProcComponent");
		return ptr;
	}



	void RemoveProc(const struct FProcTableRowHandle& RowHandle, int SkillInstanceId);
	void OnSkillStart(const struct FSkillEventData& SkillEventData);
	void OnSkillDidDamage(class AActor* Source, class AActor* DeliveryActor, class AActor* Target, class USkill* Skill, float Amount, int SkillInstanceId);
	void OnHitActiveTraitMin(class UActiveTrait* ActiveTrait);
	void OnHitActiveTraitMax(class UActiveTrait* ActiveTrait);
	void AddProc(const struct FProcTableRowHandle& RowHandle, int RequiredSkillInstanceId);
};

// Class Frontiers.QuestEvent
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UQuestEvent : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.QuestEvent");
		return ptr;
	}



	void ActivateTask(class ACharacter* Player);
};

// Class Frontiers.SkillAnimNotify_ConfigurableActivationCost
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class USkillAnimNotify_ConfigurableActivationCost : public USkillAnimNotify
{
public:
	bool                                               bPayActivationCost;                                        // 0x0058(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZAAZ[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillAnimNotify_ConfigurableActivationCost");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_SkillShape
// 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
class UAnimNotify_SkillShape : public USkillAnimNotify_ConfigurableActivationCost
{
public:
	struct FPlaceSkillShapeData                        PlaceShapeData;                                            // 0x0060(0x0050) (Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ShapeDuration;                                             // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D0O3[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_SkillShape");
		return ptr;
	}



};

// Class Frontiers.SkillAnimNotifyState
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class USkillAnimNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData_B9IJ[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNotifyCondition>                    Conditions;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bPlayInEditorPreview;                                      // 0x0048(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8QCN[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillAnimNotifyState");
		return ptr;
	}



};

// Class Frontiers.AnimNotifyState_SkillShape
// 0x0050 (FullSize[0x00A0] - InheritedSize[0x0050])
class UAnimNotifyState_SkillShape : public USkillAnimNotifyState
{
public:
	struct FPlaceSkillShapeData                        PlaceShapeData;                                            // 0x0050(0x0050) (Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotifyState_SkillShape");
		return ptr;
	}



};

// Class Frontiers.SkillSlotDisableBox
// 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
class ASkillSlotDisableBox : public ATriggerBox
{
public:
	TArray<Frontiers_ESkillSlot>                       DisabledSkillSlots;                                        // 0x0228(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillSlotDisableBox");
		return ptr;
	}



};

// Class Frontiers.SkillTargeting
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USkillTargeting : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillTargeting");
		return ptr;
	}



	bool STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Location, struct FVector* OutLocation);
	struct FVector STATIC_ProjectLocationToActorFeet(class AActor* Actor, const struct FVector& InLocation);
	bool STATIC_IsValidTarget(class USkill* Skill, class AActor* Source, class AActor* Target);
	bool STATIC_IsTargetInRange(class USkill* Skill, class AActor* Attacker, class AActor* Target, const struct FVector& Location, float Tolerance);
	bool STATIC_IsEnemy(class AActor* Attacker, class AActor* Victim);
	bool STATIC_IsAlly(class AActor* Attacker, class AActor* Victim);
	TEnumAsByte<Engine_ECollisionChannel> STATIC_GetTargetTraceType(class USkill* Skill);
	bool STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, struct FVector* OutLocation);
	class AActor* STATIC_FindTarget(class USkill* Skill, class APawn* Attacker);
};

// Class Frontiers.SpawnDataEntryGameplayTagStems
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class USpawnDataEntryGameplayTagStems : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_TAN5[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGameplayTagStems");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryLevelDelta
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USpawnDataEntryLevelDelta : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_NBEK[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryLevelDelta");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGameplayTagAll
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USpawnDataEntryGameplayTagAll : public USpawnDataEntryGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGameplayTagAll");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGameplayTagAny
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USpawnDataEntryGameplayTagAny : public USpawnDataEntryGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGameplayTagAny");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGameplayTagExclude
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USpawnDataEntryGameplayTagExclude : public USpawnDataEntryGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGameplayTagExclude");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryRemoveGameplayTagAll
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USpawnDataEntryRemoveGameplayTagAll : public USpawnDataEntryGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryRemoveGameplayTagAll");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryRemoveStemGameplayTagAll
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class USpawnDataEntryRemoveStemGameplayTagAll : public USpawnDataEntryGameplayTagStems
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryRemoveStemGameplayTagAll");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryRemoveGameplayTagAny
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USpawnDataEntryRemoveGameplayTagAny : public USpawnDataEntryGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryRemoveGameplayTagAny");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryRemoveStemGameplayTagAny
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class USpawnDataEntryRemoveStemGameplayTagAny : public USpawnDataEntryGameplayTagStems
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryRemoveStemGameplayTagAny");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryRemoveGameplayTagExclude
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USpawnDataEntryRemoveGameplayTagExclude : public USpawnDataEntryGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryRemoveGameplayTagExclude");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryRemoveStemGameplayTagExclude
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class USpawnDataEntryRemoveStemGameplayTagExclude : public USpawnDataEntryGameplayTagStems
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryRemoveStemGameplayTagExclude");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddAreaGameplayTags
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USpawnDataEntryAddAreaGameplayTags : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_7QTE[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddAreaGameplayTags");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddAreaGameplayTagsToAny
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryAddAreaGameplayTagsToAny : public USpawnDataEntryAddAreaGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddAreaGameplayTagsToAny");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddAreaGameplayTagsToAll
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryAddAreaGameplayTagsToAll : public USpawnDataEntryAddAreaGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddAreaGameplayTagsToAll");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddMatchingAreaGameplayTags
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USpawnDataEntryAddMatchingAreaGameplayTags : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_UP9B[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddMatchingAreaGameplayTags");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddMatchingAreaGameplayTagsToAny
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryAddMatchingAreaGameplayTagsToAny : public USpawnDataEntryAddMatchingAreaGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddMatchingAreaGameplayTagsToAny");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddMatchingAreaGameplayTagsToAll
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryAddMatchingAreaGameplayTagsToAll : public USpawnDataEntryAddMatchingAreaGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddMatchingAreaGameplayTagsToAll");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryRemoveAreaGameplayTags
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USpawnDataEntryRemoveAreaGameplayTags : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_KOXW[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryRemoveAreaGameplayTags");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryRemoveAreaGameplayTagsFromAny
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryRemoveAreaGameplayTagsFromAny : public USpawnDataEntryRemoveAreaGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryRemoveAreaGameplayTagsFromAny");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryRemoveAreaGameplayTagsFromAll
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryRemoveAreaGameplayTagsFromAll : public USpawnDataEntryRemoveAreaGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryRemoveAreaGameplayTagsFromAll");
		return ptr;
	}



};

// Class Frontiers.SpreadsheetLoader
// 0x0358 (FullSize[0x0380] - InheritedSize[0x0028])
class USpreadsheetLoader : public UObject
{
public:
	class UDataTable*                                  ActiveTraitTable;                                          // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  AffixTable;                                                // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  AffixSpawnTable;                                           // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  AreaTable;                                                 // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  BossTable;                                                 // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  CatalogTable;                                              // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ContractTable;                                             // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  CurrencyTable;                                             // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  DialogueTable;                                             // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  DifficultyTable;                                           // 0x0070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  DungeonChallengeTable;                                     // 0x0078(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  DungeonSpawnTable;                                         // 0x0080(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  DyeTable;                                                  // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  EmberWeaponTable;                                          // 0x0090(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  FortPropsTable;                                            // 0x0098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  FortPropGroupsTable;                                       // 0x00A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  FortPropSpawnTable;                                        // 0x00A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ItemSpawnTable;                                            // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ItemModifyTable;                                           // 0x00B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ItemsTable;                                                // 0x00C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ItemQualityTable;                                          // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ItemWardrobeTable;                                         // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ItemWardrobeEntryTable;                                    // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  LevelRewardTable;                                          // 0x00E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  LoadingScreenTable;                                        // 0x00E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  MapWorksTable;                                             // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  MinionTable;                                               // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  MinionSpawnTable;                                          // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  MonsterAffixTable;                                         // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  MonsterSpawnTable;                                         // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  MonstersTable;                                             // 0x0118(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  NameSpawnTable;                                            // 0x0120(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  PlayerTable;                                               // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  PlayerAffixTable;                                          // 0x0130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ProcTable;                                                 // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  QuestObjectTable;                                          // 0x0140(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  QuestScheduleTable;                                        // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  RecipeUnitTable;                                           // 0x0150(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  RotationGroupTable;                                        // 0x0158(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  SkillsTable;                                               // 0x0160(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  SkillsTabTable;                                            // 0x0168(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  SkillsBalanceTable;                                        // 0x0170(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  SpokeTable;                                                // 0x0178(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  StatusEffectTable;                                         // 0x0180(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  TraitDisplayTable;                                         // 0x0188(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  TraitsTable;                                               // 0x0190(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  TrapSpawnTable;                                            // 0x0198(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  FoliageSoundTable;                                         // 0x01A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  CinematicTable;                                            // 0x01A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 AffixLevelCurves;                                          // 0x01B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 SkillCurves;                                               // 0x01B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 MonsterLevelCurves;                                        // 0x01C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 PlayerCountCurves;                                         // 0x01C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 PlayerCurves;                                              // 0x01D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 LevelComparisonCurves;                                     // 0x01D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 ItemSpawnPickCurves;                                       // 0x01E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 FortPropSpawnCurves;                                       // 0x01E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 EmberWeaponCurves;                                         // 0x01F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 ContractFameCurves;                                        // 0x01F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 RatioCurves;                                               // 0x0200(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 DungeonChallengeCurves;                                    // 0x0208(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  TermsTargetsTable;                                         // 0x0210(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_37X2[0x90];                                    // 0x0218(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDataTableDefinition>                DataTables;                                                // 0x02A8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      TableMap[0x50];                                            // 0x02B8(0x0050) UNKNOWN PROPERTY: MapProperty
	unsigned char                                      UnknownData_TNTH[0x78];                                    // 0x0308(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpreadsheetLoader");
		return ptr;
	}



	class USpreadsheetLoader* STATIC_BlueprintGetSpreadsheetLoader(class UObject* WorldContextObject);
};

// Class Frontiers.StandaloneFunctionDeferrer
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UStandaloneFunctionDeferrer : public UObject
{
public:
	unsigned char                                      UnknownData_Y64B[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.StandaloneFunctionDeferrer");
		return ptr;
	}



};

// Class Frontiers.StoreManager
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStoreManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.StoreManager");
		return ptr;
	}



};

// Class Frontiers.StorePlayerComponent
// 0x0548 (FullSize[0x05F8] - InheritedSize[0x00B0])
class UStorePlayerComponent : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_02S4[0x60];                                    // 0x00B0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FModalWidgetDefinition                      CelebrationModal;                                          // 0x0110(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FCommerceBalance                            Balances;                                                  // 0x0370(0x000C) (Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q51R[0x4];                                     // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPurchaseHistoryItem>                PurchaseHistory;                                           // 0x0380(0x0010) (Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      SuccessModal;                                              // 0x0390(0x0260) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int                                                CommerceMinimumContentVersion;                             // 0x05F0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9S4E[0x4];                                     // 0x05F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.StorePlayerComponent");
		return ptr;
	}



	void ServerRequestPurchases();
	void ServerRequestBalances();
	void ServerPurchaseOnlineStoreItem(const struct FCatalogTableRowHandle& CatalogRowHandle);
	void STATIC_RequestPurchases(class AActor* Actor);
	void STATIC_RequestBalances(class AActor* Actor);
	void OnRep_Balances();
	void ClientTransactionSucceeded(const struct FCatalogData& CatalogData);
	void ClientTransactionFailed();
	void ClientClaimSucceeded(TArray<struct FCraftingProductOutput> Products);
};

// Class Frontiers.SwitchboardClient
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class USwitchboardClient : public UObject
{
public:
	unsigned char                                      UnknownData_0M3S[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SwitchboardClient");
		return ptr;
	}



	void UpdateServerInfo(const struct FString& ZoneId, const struct FString& Platform, TArray<struct FServerPublisherPlayer> Players);
	void Start(class UTLGameInstance* InGameInstance);
	void ProcessSwitchboardEvent(const struct FSwitchboardEvent& Event);
	void OnData(const struct FString& Data);
	void Broadcast(const struct FSwitchboardEvent& Event);
};

// Class Frontiers.SwitchboardEventInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USwitchboardEventInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SwitchboardEventInterface");
		return ptr;
	}



};

// Class Frontiers.Decorator_CheckGlobalCooldown
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UDecorator_CheckGlobalCooldown : public UBTDecorator_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Decorator_CheckGlobalCooldown");
		return ptr;
	}



};

// Class Frontiers.Task_AddGlobalCooldown
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UTask_AddGlobalCooldown : public UBTTask_BlackboardBase
{
public:
	float                                              CooldownSecondsToAdd;                                      // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_72TK[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_AddGlobalCooldown");
		return ptr;
	}



};

// Class Frontiers.Task_Blinded
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UTask_Blinded : public UBTTaskNode
{
public:
	float                                              WanderRadius;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DSCG[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_Blinded");
		return ptr;
	}



};

// Class Frontiers.Task_PlayerBot_Base
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UTask_PlayerBot_Base : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_PlayerBot_Base");
		return ptr;
	}



};

// Class Frontiers.Task_BotQuest
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UTask_BotQuest : public UTask_PlayerBot_Base
{
public:
	float                                              Interval;                                                  // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UAWN[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_BotQuest");
		return ptr;
	}



};

// Class Frontiers.Task_ChooseRandomLocation
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UTask_ChooseRandomLocation : public UBTTaskNode
{
public:
	float                                              MaxDistance;                                               // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinDistance;                                               // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       BlackboardKeyTargetLocation;                               // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_ChooseRandomLocation");
		return ptr;
	}



};

// Class Frontiers.Task_CircleTarget
// 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
class UTask_CircleTarget : public UBTTaskNode
{
public:
	struct FName                                       BlackboardKeyTargetObject;                                 // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       BlackboardKeyTargetLocation;                               // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxRadius;                                                 // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinRadius;                                                 // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MoveTolerance;                                             // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DegreesToCircle;                                           // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RandomDegreeDeviation;                                     // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CircleTime;                                                // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YM05[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_CircleTarget");
		return ptr;
	}



};

// Class Frontiers.Decorator_PlayerSessionStatus
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UDecorator_PlayerSessionStatus : public UBTDecorator
{
public:
	Frontiers_EPlayerSessionStatus                     DesiredState;                                              // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_39BA[0x3];                                     // 0x0068(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_40H1[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Decorator_PlayerSessionStatus");
		return ptr;
	}



};

// Class Frontiers.Task_Login
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UTask_Login : public UTask_PlayerBot_Base
{
public:
	float                                              RetryInterval;                                             // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C8XQ[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_Login");
		return ptr;
	}



};

// Class Frontiers.Task_Logout
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UTask_Logout : public UTask_PlayerBot_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_Logout");
		return ptr;
	}



};

// Class Frontiers.Task_SelectCharacter
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UTask_SelectCharacter : public UTask_PlayerBot_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_SelectCharacter");
		return ptr;
	}



};

// Class Frontiers.Task_CreateCharacter
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UTask_CreateCharacter : public UTask_PlayerBot_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_CreateCharacter");
		return ptr;
	}



};

// Class Frontiers.Task_MoveToLocation
// 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
class UTask_MoveToLocation : public UBTTaskNode
{
public:
	bool                                               bRelativeToTarget;                                         // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAwayFromTarget;                                           // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LHTS[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BlackboardTargetKey;                                       // 0x0074(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       BlackboardSpawnLocationKey;                                // 0x007C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WanderRadius;                                              // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinWanderRadius;                                           // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPollTargetLocation;                                       // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAllowPanic;                                               // 0x008D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LYPJ[0x2];                                     // 0x008E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConeSearchHalfAngle;                                       // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DesiredTargetDistance;                                     // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinTimeBeforePanic;                                        // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bFaceTargetAfterMove;                                      // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N4QJ[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDistanceToStart;                                    // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PanicThreshold;                                            // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GoalThreshold;                                             // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxAttempts;                                               // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TaskTimeout;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TaskTimeoutDeviation;                                      // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ArrivalWaitTime;                                           // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseTargetVelocity;                                        // 0x00BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UDGE[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetVelocityUpdateInterval;                              // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LookAheadSeconds;                                          // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseTargetOffset;                                          // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseAreaSpawnLocation;                                     // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseMonsterSpawnLocation;                                  // 0x00CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SE8K[0x5];                                     // 0x00CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      WanderLocationFilter;                                      // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_MoveToLocation");
		return ptr;
	}



};

// Class Frontiers.Task_Flee
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UTask_Flee : public UTask_MoveToLocation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_Flee");
		return ptr;
	}



};

// Class Frontiers.Task_Wander
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UTask_Wander : public UTask_MoveToLocation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_Wander");
		return ptr;
	}



};

// Class Frontiers.Task_MoveTowardsTarget
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UTask_MoveTowardsTarget : public UTask_MoveToLocation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_MoveTowardsTarget");
		return ptr;
	}



};

// Class Frontiers.Task_MoveToAreaLocation
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UTask_MoveToAreaLocation : public UTask_MoveToLocation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_MoveToAreaLocation");
		return ptr;
	}



};

// Class Frontiers.Task_MoveToMonsterSpawnLocation
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UTask_MoveToMonsterSpawnLocation : public UTask_MoveToLocation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_MoveToMonsterSpawnLocation");
		return ptr;
	}



};

// Class Frontiers.Task_PlayerBot_Move
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UTask_PlayerBot_Move : public UTask_PlayerBot_Base
{
public:
	bool                                               bTimeLimitToMove;                                          // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_28BR[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SecondsAllowedToMove;                                      // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRandomLocation;                                           // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2ITF[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RandomLocationRadius;                                      // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_PlayerBot_Move");
		return ptr;
	}



};

// Class Frontiers.Task_PlayerBotWander
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UTask_PlayerBotWander : public UTask_PlayerBot_Move
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_PlayerBotWander");
		return ptr;
	}



};

// Class Frontiers.Task_PlayerBotSkill
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UTask_PlayerBotSkill : public UTask_PlayerBot_Base
{
public:
	struct FName                                       BlackboardKeyTargetActor;                                  // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       BlackboardKeyTargetLocation;                               // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRandomAssignableSkillSlot;                                // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ESkillSlot                               SkillSlot;                                                 // 0x0081(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMoveIntoRangeForSkill;                                    // 0x0082(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K7H9[0x1];                                     // 0x0083(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SecondsAllowedToMove;                                      // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_PlayerBotSkill");
		return ptr;
	}



};

// Class Frontiers.Task_PlayerBotTravel
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UTask_PlayerBotTravel : public UTask_PlayerBot_Base
{
public:
	float                                              TravelInterval;                                            // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1S7H[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_PlayerBotTravel");
		return ptr;
	}



};

// Class Frontiers.Task_StartSkill_Base
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UTask_StartSkill_Base : public UBTTaskNode
{
public:
	struct FName                                       BlackboardKeyTargetActor;                                  // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       BlackboardKeyTargetLocation;                               // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ESkillSlot                               SkillSlot;                                                 // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D83M[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_StartSkill_Base");
		return ptr;
	}



};

// Class Frontiers.Task_StartSkill
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTask_StartSkill : public UTask_StartSkill_Base
{
public:
	bool                                               bMoveToRange;                                              // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CM7U[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_StartSkill");
		return ptr;
	}



};

// Class Frontiers.Task_StartRandomSkill
// 0x0060 (FullSize[0x00F0] - InheritedSize[0x0090])
class UTask_StartRandomSkill : public UTask_StartSkill
{
public:
	TArray<struct FStartRandomSkillData>               RandomSkillSlots;                                          // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                      AllyTargetObjectKey;                                       // 0x00A0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                      AllyTargetLocationKey;                                     // 0x00C8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_StartRandomSkill");
		return ptr;
	}



};

// Class Frontiers.Decorator_MoveToTimeLimit
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UDecorator_MoveToTimeLimit : public UBTDecorator_TimeLimit
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Decorator_MoveToTimeLimit");
		return ptr;
	}



};

// Class Frontiers.Task_StartSkill_Simple
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UTask_StartSkill_Simple : public UTask_StartSkill_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_StartSkill_Simple");
		return ptr;
	}



};

// Class Frontiers.Task_StartSkillChanneled
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UTask_StartSkillChanneled : public UTask_StartSkill
{
public:
	bool                                               bMaintainRangeWhileCasting;                                // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseMaxTargetAdjustmentSpeed;                              // 0x0091(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BZLK[0x2];                                     // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxTargetAdjustmentSpeed;                                  // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              InputUpdateInterval;                                       // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAllowTargetSwitching;                                     // 0x009C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V21D[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Task_StartSkillChanneled");
		return ptr;
	}



};

// Class Frontiers.TeamInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTeamInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TeamInterface");
		return ptr;
	}



	void SetTeam(Frontiers_ETLTeam InTeam);
	Frontiers_ETLTeam GetTeam();
};

// Class Frontiers.TermsManager
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UTermsManager : public UObject
{
public:
	class UClass*                                      StandardTermsModal;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ME7X[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  LoadedTermsTable;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TermsManager");
		return ptr;
	}



};

// Class Frontiers.TextValidator
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTextValidator : public UGameInstanceSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TextValidator");
		return ptr;
	}



};

// Class Frontiers.TimeOfDayComponent
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UTimeOfDayComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_UINN[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_ETimeOfDayPeriod                         TimeOfDayPeriod;                                           // 0x00C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bTriggerIfDead;                                            // 0x00C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YXO3[0x6];                                     // 0x00C2(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TimeOfDayComponent");
		return ptr;
	}



	void OnTimeOfDayPeriodStarted();
	void OnTimeOfDayPeriodEnded();
};

// Class Frontiers.TimeOfDayGadget
// 0x0050 (FullSize[0x04F0] - InheritedSize[0x04A0])
class ATimeOfDayGadget : public AGadget
{
public:
	unsigned char                                      UnknownData_EYPQ[0x48];                                    // 0x04A0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_ETimeOfDayPeriod                         TimeOfDayPeriod;                                           // 0x04E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L8ZI[0x7];                                     // 0x04E9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TimeOfDayGadget");
		return ptr;
	}



	void TriggerExit(float StartTime, float EndTime);
	void Trigger(float StartTime, float EndTime);
};

// Class Frontiers.ConductorHandler
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UConductorHandler : public UActorComponent
{
public:
	struct FGuid                                       GenerationGuid;                                            // 0x00B0(0x0010) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ConductorHandler");
		return ptr;
	}



	void PreHandleObjects();
	void PostHandleObjects();
	bool IsAreaHandler();
	bool HandleObject(class ATLCharacter* Player, class UObject* Object);
};

// Class Frontiers.TimeOfDayHandler
// 0x09A0 (FullSize[0x0A60] - InheritedSize[0x00C0])
class UTimeOfDayHandler : public UConductorHandler
{
public:
	unsigned char                                      UnknownData_PU7C[0x1];                                     // 0x00C0(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUseLightRotation;                                         // 0x00C1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Frontiers_ELightRotationType>          LightRotationType;                                         // 0x00C2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GXVK[0x1];                                     // 0x00C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     StaticLightDirection;                                      // 0x00C4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FTimeOfDayRotationSetting>           WideCycleRotators;                                         // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTimeOfDayRotationSetting>           ShallowCycleRotators;                                      // 0x00E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	float                                              MaxDirectionalIntensity;                                   // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ShadowBias;                                                // 0x00F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DynamicShadowDistanceMovableLight;                         // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumberDynamicShadowCascades;                               // 0x00FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                FarShadowCascadeCount;                                     // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FarShadowDistance;                                         // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DistanceFieldShadowDistance;                               // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ShadowTraceDistance;                                       // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RayStartOffsetDepthScale;                                  // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LightSourceAngle;                                          // 0x0114(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G0A7[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IndirectLightingIntensity;                                 // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxSkyIntensity;                                           // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SkyIndirectLightingIntensity;                              // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PJAH[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   SkyLightMaterial;                                          // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  LightColorLookup;                                          // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRuntimeCurveLinearColor                    DirectionalLightTintAndIntensity;                          // 0x0140(0x0208) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FRuntimeCurveLinearColor                    SkyTintAndIntensity;                                       // 0x0348(0x0208) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FRuntimeCurveLinearColor                    ShadowTintAndIntensity;                                    // 0x0550(0x0208) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FRuntimeCurveLinearColor                    VFXTint;                                                   // 0x0758(0x0208) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                                  LUTTexture;                                                // 0x0960(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LUTContribution;                                           // 0x0968(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7ACL[0x4];                                     // 0x096C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextureCube*                                RegionCubemap;                                             // 0x0970(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseFogInscatteringCubemap;                                // 0x0978(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TXRN[0x7];                                     // 0x0979(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextureCube*                                FogInscatteringColorCubemap;                               // 0x0980(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FTimeOfDayFogSetting>                AreaFogSettings;                                           // 0x0988(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                              PlayerLightIntensity;                                      // 0x0998(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J58W[0x4];                                     // 0x099C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLightAccentSetting                         LocalLightTintA;                                           // 0x09A0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FLightAccentSetting                         LocalLightTintB;                                           // 0x09C0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FLightAccentSetting                         LocalLightTintC;                                           // 0x09E0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FLightAccentSetting                         LocalLightTintD;                                           // 0x0A00(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FTimeOfDayMonsterManagerSettings            NighttimeMonsterManagerSettings;                           // 0x0A20(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTimeOfDayMonsterManagerSettings            DaytimeMonsterManagerSettings;                             // 0x0A30(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bKeepMonstersOnTransition;                                 // 0x0A40(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDespawnBossesOnTransition;                                // 0x0A41(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DS0Q[0x6];                                     // 0x0A42(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTimeOfDayRotationSetting>           ActiveRotators;                                            // 0x0A48(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DVH9[0x8];                                     // 0x0A58(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TimeOfDayHandler");
		return ptr;
	}



	bool UpdateMaterialTimeOfDayGlobals_LightDirection(class UMaterialParameterCollection* MaterialGlobals);
	bool UpdateMaterialTimeOfDayGlobals(class UMaterialParameterCollection* MaterialGlobals);
	void SetLocalLightTint(const struct FLinearColor& NewTint, Frontiers_ELightAccentTint TintType);
	float GetTimeOfDayPlayerLightIntensity();
	struct FLinearColor STATIC_GetLocalAccentLightColor(class UObject* WorldContextObject, Frontiers_ELightAccentTint TintType);
	struct FTimeOfDayFogSetting GetFogTimeOfDaySettings(float TimeOfDayPercent);
	struct FTransform GetDirectionalLightTransform(float TimeOfDayPercent);
	struct FLinearColor STATIC_GetCurrentTimeOfDayColor(class UObject* WorldContextObject);
};

// Class Frontiers.ToggleSceneComponent
// 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
class UToggleSceneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_VOFC[0x8];                                     // 0x01F8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ToggleSceneComponent");
		return ptr;
	}



	void ToggleEnabled();
	void SetEnabled(bool bNewStatus);
	void Enable();
	void Disable();
};

// Class Frontiers.ToggleLight
// 0x0050 (FullSize[0x0250] - InheritedSize[0x0200])
class UToggleLight : public UToggleSceneComponent
{
public:
	bool                                               bAnimateLightFlicker;                                      // 0x0200(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LKGA[0x3];                                     // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IntensityMin;                                              // 0x0204(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              IntensityMax;                                              // 0x0208(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FlickerMaxDelay;                                           // 0x020C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LightJiggleIntensity;                                      // 0x0210(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BDWO[0x4];                                     // 0x0214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULightComponent*                             Light;                                                     // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FadeInSpeed;                                               // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FadeOutSpeed;                                              // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YRBB[0x28];                                    // 0x0228(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ToggleLight");
		return ptr;
	}



};

// Class Frontiers.TimeOfDayLight
// 0x0020 (FullSize[0x0270] - InheritedSize[0x0250])
class UTimeOfDayLight : public UToggleLight
{
public:
	unsigned char                                      UnknownData_8SKM[0x10];                                    // 0x0250(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_ETimeOfDayPeriod                         TimeOfDayPeriod;                                           // 0x0260(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3Z32[0xF];                                     // 0x0261(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TimeOfDayLight");
		return ptr;
	}



	void TriggerExit(float StartTime, float EndTime);
	void Trigger(float StartTime, float EndTime);
};

// Class Frontiers.ToggleParticle
// 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
class UToggleParticle : public UToggleSceneComponent
{
public:
	class UParticleSystem*                             ParticleSystem;                                            // 0x0200(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CU2K[0x8];                                     // 0x0208(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ToggleParticle");
		return ptr;
	}



};

// Class Frontiers.TimeOfDayParticle
// 0x0010 (FullSize[0x0220] - InheritedSize[0x0210])
class UTimeOfDayParticle : public UToggleParticle
{
public:
	unsigned char                                      UnknownData_Y9HY[0x8];                                     // 0x0210(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_ETimeOfDayPeriod                         TimeOfDayPeriod;                                           // 0x0218(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AU34[0x7];                                     // 0x0219(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TimeOfDayParticle");
		return ptr;
	}



	void TriggerExit(float StartTime, float EndTime);
	void Trigger(float StartTime, float EndTime);
};

// Class Frontiers.ToggleShape
// 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
class UToggleShape : public UToggleSceneComponent
{
public:
	class UShapeComponent*                             Shape;                                                     // 0x0200(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMulticastSparseDelegate                    OnShapeBeginOverlap;                                       // 0x0208(0x0001) (InstancedReference, BlueprintAssignable, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMulticastSparseDelegate                    OnShapeEndOverlap;                                         // 0x0209(0x0001) (InstancedReference, BlueprintAssignable, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BA5W[0x6];                                     // 0x020A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ToggleShape");
		return ptr;
	}



	void NativeOnShapeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void NativeOnShapeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class Frontiers.TimeOfDayShape
// 0x0020 (FullSize[0x0230] - InheritedSize[0x0210])
class UTimeOfDayShape : public UToggleShape
{
public:
	unsigned char                                      UnknownData_4BKP[0x10];                                    // 0x0210(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_ETimeOfDayPeriod                         TimeOfDayPeriod;                                           // 0x0220(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ADY2[0xF];                                     // 0x0221(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TimeOfDayShape");
		return ptr;
	}



	void TriggerExit(float StartTime, float EndTime);
	void Trigger(float StartTime, float EndTime);
};

// Class Frontiers.TimeOfDaySpawner
// 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
class ATimeOfDaySpawner : public AActor
{
public:
	TArray<class UClass*>                              ActorsToSpawn;                                             // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              TimeRangeStart;                                            // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeRangeEnd;                                              // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_46XU[0x8];                                     // 0x0238(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TimeOfDaySpawner");
		return ptr;
	}



};

// Class Frontiers.TimeOfDayTriggerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTimeOfDayTriggerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TimeOfDayTriggerInterface");
		return ptr;
	}



	void TriggerExit(float StartTime, float EndTime);
	void Trigger(float StartTime, float EndTime);
};

// Class Frontiers.ItemActorFollowComponent
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class UItemActorFollowComponent : public UActorComponent
{
public:
	class USkeletalMeshComponent*                      TargetSkeletalMesh;                                        // 0x00B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TargetSocket;                                              // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolationSpeedMin;                                     // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolationSpeedMax;                                     // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VarianceSpeed;                                             // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SnapDistance;                                              // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ItemActorFollowComponent");
		return ptr;
	}



};

// Class Frontiers.TLAIController
// 0x0070 (FullSize[0x0398] - InheritedSize[0x0328])
class ATLAIController : public AAIController
{
public:
	float                                              MinionChaseRadius;                                         // 0x0328(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SecondsBetweenTargetSwitches;                              // 0x032C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DamageAggroDuration;                                       // 0x0330(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TetherCheckTickInterval;                                   // 0x0334(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              NormalChaseRadius;                                         // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ChampionChaseRadius;                                       // 0x033C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      TetherStatusEffectClass;                                   // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      MinionTetherStatusEffectClass;                             // 0x0348(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      PetTetherStatusEffectClass;                                // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ImmobileTetherStatusEffectClass;                           // 0x0358(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBehaviorTree*                               PendingBehaviorTree;                                       // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XHA8[0x30];                                    // 0x0368(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLAIController");
		return ptr;
	}



	void SetupBlackboard();
};

// Class Frontiers.TLAIHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTLAIHelpers : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLAIHelpers");
		return ptr;
	}



	bool STATIC_FindNamedTargetPoint(class UObject* WorldContextObject, const struct FName& TargetName, struct FVector* OutLocation, class AActor** OutTargetPointActor);
};

// Class Frontiers.TLInventorySlotData
// 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
class UTLInventorySlotData : public UDataAsset
{
public:
	TMap<struct FName, struct FString>                 WeaponNameToGroupString;                                   // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FString>                 WeaponNameToWeaponString;                                  // 0x0080(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FString>                 LocomotionNameToString;                                    // 0x00D0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventorySlotData");
		return ptr;
	}



};

// Class Frontiers.TLInventoryComboData
// 0x0148 (FullSize[0x0178] - InheritedSize[0x0030])
class UTLInventoryComboData : public UDataAsset
{
public:
	class UTLInventorySlotData*                        InventorySlotData;                                         // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ExtraLocomotionNames[0x50];                                // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      MainHandEquipmentNames[0x50];                              // 0x0088(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      OffHandEquipmentNames[0x50];                               // 0x00D8(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      TwoHandEquipmentNames[0x50];                               // 0x0128(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryComboData");
		return ptr;
	}



};

// Class Frontiers.TLAnimInstance
// 0x0358 (FullSize[0x0610] - InheritedSize[0x02B8])
class UTLAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_G64R[0x4];                                     // 0x02B8(0x0004) Fix Super Size
	float                                              MinPlayRateMultiplier;                                     // 0x02BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPlayRateMultiplier;                                     // 0x02C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DefaultSlotName;                                           // 0x02C4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DefaultAnimSlotPrefix;                                     // 0x02CC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRandomStream                               RandomStream;                                              // 0x02D4(0x0008) (ZeroConstructor, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LWQW[0xC];                                     // 0x02DC(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MovementSpeed;                                             // 0x02E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TimeSinceAnimChanged;                                      // 0x02EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TurnSpeed;                                                 // 0x02F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxAnimatedRunSpeed;                                       // 0x02F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RunToStopEaseTime;                                         // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SkillTurningBlendAlpha;                                    // 0x02FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxAnimatedTurnSpeed;                                      // 0x0300(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinAnimatedTurnSpeed;                                      // 0x0304(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TurnSmoothingAlpha;                                        // 0x0308(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RotationTolerance;                                         // 0x030C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRotateToTarget;                                           // 0x0310(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7PBW[0x3];                                     // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RotateFromTargetSpeed;                                     // 0x0314(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RotateToTargetBlendWeight;                                 // 0x0318(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       SlotNameCurrent;                                           // 0x031C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DDE8[0x4];                                     // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpaceBase*                             IdleMoveBlendSpace;                                        // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      IdleMoveBlendSpaceRef[0x28];                               // 0x0330(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UBlendSpaceBase*                             SkillTurningBlendSpace;                                    // 0x0358(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<Frontiers_ETLBlendSpaceTypes, struct FBlendSpaceList> BlendSpaceMap;                                             // 0x0360(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZISB[0x10];                                    // 0x03B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, struct FInventoryBasedAnimGroup> InventoryBasedAnimGroups;                                  // 0x03C0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FName>                               DefaultComboAnimationSlotNames;                            // 0x0410(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                              RandomBlendspaceStart;                                     // 0x0420(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YTEX[0x4];                                     // 0x0424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      IdleAnimations[0x10];                                      // 0x0424(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      TaggedAnimations[0x50];                                    // 0x0438(0x0050) UNKNOWN PROPERTY: MapProperty
	TArray<class UAnimSequenceBase*>                   LoadedTaggedAnimations;                                    // 0x0488(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              IdleTimeoutMin;                                            // 0x0498(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              IdleTimeoutMax;                                            // 0x049C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              IdleBlendInTime;                                           // 0x04A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              IdleBlendOutTime;                                          // 0x04A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              IdleBlendOutTriggerTime;                                   // 0x04A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_548O[0x14];                                    // 0x04AC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                IdleMontage;                                               // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEaseToStop;                                               // 0x04C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X75S[0x133];                                   // 0x04C9(0x0133) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UTLInventoryComboData>        ComboData;                                                 // 0x05FC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                                AnimInstanceTag;                                           // 0x0604(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PT0J[0x4];                                     // 0x060C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLAnimInstance");
		return ptr;
	}



	void OnWeaponsUpdated(TArray<struct FWeaponSlotData> TraitModes);
	void OnWardrobeItemsChange(TArray<struct FItemReplicatedData> Items);
	void OnMontageStarted_Implementation(class UAnimMontage* Montage);
	void OnIdleAnimationLoaded();
	bool IsMontageInSection(class UAnimMontage* Montage, Frontiers_EMontageSection Section);
	void EndLoopingAnimationImmediately();
	void EndLoopingAnimation();
	void AnimNotify_ShowWeapons();
	void AnimNotify_ShowActor();
	void AnimNotify_ResourceLoop();
	void AnimNotify_HideWeapons();
	void AnimNotify_HideActor();
	void AnimNotify_GetHitFinish();
	void AnimNotify_Footstep();
	void AnimNotify_ChannelLoop();
};

// Class Frontiers.TLAnimInstanceAttached
// 0x0060 (FullSize[0x0670] - InheritedSize[0x0610])
class UTLAnimInstanceAttached : public UTLAnimInstance
{
public:
	TMap<class UClass*, class UAnimSequenceBase*>      SkillAnims;                                                // 0x0610(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UTLAnimInstance*                             PrimaryAnimInstance;                                       // 0x0660(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5ZLM[0x8];                                     // 0x0668(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLAnimInstanceAttached");
		return ptr;
	}



};

// Class Frontiers.TLBreakable
// 0x00A8 (FullSize[0x0430] - InheritedSize[0x0388])
class ATLBreakable : public ATLActor
{
public:
	unsigned char                                      UnknownData_KVFT[0x8];                                     // 0x0388(0x0008) Fix Super Size
	struct FItemSpawnTableRowHandle                    ItemSpawnRow;                                              // 0x0390(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              HitpointPercent;                                           // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HWSG[0x4];                                     // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x03A8(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              DestructionImpulse;                                        // 0x03C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ChunkTimeout;                                              // 0x03C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FadeTime;                                                  // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RJT6[0x4];                                     // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         ShatterEvent;                                              // 0x03D0(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          FadeMaterial;                                              // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bShowNameInHUD;                                            // 0x03F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M6SS[0xC];                                     // 0x03F1(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsAlive;                                                  // 0x03FD(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5O9L[0x1];                                     // 0x03FE(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bInstanceHasBeenDisabled;                                  // 0x03FF(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     SpawnLocation;                                             // 0x0400(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_21T7[0x4];                                     // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                          // 0x0410(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>                  OpaqueMaterialInterfaces;                                  // 0x0420(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLBreakable");
		return ptr;
	}



	bool SpawnItemsForEachNearbyPlayer(class AActor* Source);
	bool SpawnItems(class AActor* Source, class APawn* TargetPlayer);
	void OnBreakableDestroyed(class APawn* Dying, class AActor* Attacker);
	void OnBreak(class AActor* Attacker);
	void IsAliveUpdated();
	class UDestructibleComponent* GetDestructibleComponent();
};

// Class Frontiers.TLCharacterMovementComponent
// 0x0030 (FullSize[0x0B30] - InheritedSize[0x0B00])
class UTLCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	bool                                               bIsMovementEnabled;                                        // 0x0B00(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XEUV[0x13];                                    // 0x0B01(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDistanceOffNavmesh;                                     // 0x0B14(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              NavmeshWallIntersectionTolerance;                          // 0x0B18(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AD1R[0x14];                                    // 0x0B1C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLCharacterMovementComponent");
		return ptr;
	}



	void EnableEaseToStop(float BrakingDistance, float BrakingDeceleration);
	void DisableEaseToStop();
};

// Class Frontiers.TLCheatManager
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UTLCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData_PXL7[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATLCheatRunner*                              CheatRunner;                                               // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLCheatManager");
		return ptr;
	}



	void ZoneInstanceEnableClientDebug();
	void XboxLiveS2S();
	void XboxLiveRecentPlayers();
	void XboxLiveActivitySet();
	void XboxLiveActivityDelete();
	void WaypointsUnlockAll();
	void WaypointsClear();
	void WarpsUnlock(bool bUnlocked);
	void WakeUpArea(const struct FString& AreaName);
	void UnloadArea(const struct FString& AreaName);
	void TransmogUnlockAll();
	void Traits(const struct FString& TraitString);
	void ToggleWidget(FrontiersUI_ETLWidget Widget);
	void ToggleNameplates();
	void TimeDilation(float Value);
	void TermsOfServiceReset();
	void TeleportPlayerAbsolute(float X, float Y, float Z);
	void TeleportPlayer(float X, float Y, float Z);
	void Stuck();
	void SteamDataSuiteReset();
	void StatusEffect(const struct FString& RowName, float Duration, int Count, bool bUseSelectedActor);
	void Speed(float MetersPerSecond);
	void SpawnerDeactivate();
	void SpawnerActivate();
	void SoundStopAll();
	void SoundPlayEvent(const struct FString& EventName);
	void SocialPreview(const struct FString& PreviewPlatformAccountName);
	void SleepArea(const struct FString& AreaName);
	void SkinDye(const struct FString& DyeRowName);
	void SkillsRespecTest();
	void SkillsRespec();
	void SkillsForceRespec(const struct FString& TimestampUTC);
	void SkillSetLevel(const struct FString& SkillName, int Level);
	void SkillsClear();
	void SkillsByRPCMode(bool bEnabled);
	void SkillsAll(const struct FString& Params);
	void ShutdownServer();
	void ShowBlockedUGC();
	void ShowBlockedCommunication();
	void SetTimeOfDay(float TimeOfDayPercent);
	void SetLinkCode(const struct FString& TestLinkCode);
	void SetLegacyFractions(bool bUseLegacyFractions, const struct FString& Token);
	void SetEnvironment(const struct FString& InEnvironment);
	void SetBuild(const struct FString& InBuild);
	void SetActiveTrait(const struct FName& TraitName, float Value);
	void SessionJoinTest();
	void ServerSetLogLevel(const struct FString& LogName, const struct FString& Verbosity);
	void ServerProfileSnapshot(uint32_t Duration);
	void ServerProfileEnd();
	void ServerProfileBegin();
	void ServerNote(const struct FString& NoteText);
	void ServerNetProfileEnd();
	void ServerNetProfileBegin();
	void ServerMemoryReport();
	void ServerFakeNetworkingFailureChance(Frontiers_EServiceType Service, float FailureChance);
	void ServerFakeNetworkingDelay(Frontiers_EServiceType Service, int Delay);
	void ServerExec(const struct FString& ExecString);
	void ServerEnableBotCommands(bool bEnabled);
	void ServerConfigSetEntry(const struct FString& Section, const struct FString& Key, const struct FString& Value, const struct FString& Filename);
	void ServerConfigGetEntry(const struct FString& Section, const struct FString& Key, const struct FString& Filename);
	void ServerAreaManagerList();
	void SendHeartbeat();
	void RunScript(const struct FString& ScriptName);
	void ResetAreaInstances();
	void RepGraphLog();
	void ReloadRecipes();
	void RefillEnergy();
	void RecipeUnitGrant(const struct FString& RecipeUnit);
	void QuestStop(const struct FString& QuestId);
	void QuestStartOnAll(const struct FString& QuestId);
	void QuestStart(const struct FString& QuestId);
	void QuestsReload();
	void QuestsListCompleted();
	void QuestsListAvailable();
	void QuestsListAll();
	void QuestsListActiveDailiesWeeklies();
	void QuestsListActive();
	void QuestsClearCompleted();
	void QuestsClearAll();
	void QuestsClearActive();
	void QuestSchedule(const struct FString& QuestId);
	void QuestOffer(const struct FString& QuestId, const struct FString& TaskId);
	void QuestCompleteTask(const struct FString& QuestId, const struct FString& TaskId);
	void QuestComplete(const struct FString& QuestId);
	void PvPEnabled();
	void PurchaseMenu();
	void PortalSetReturn(const struct FString& AccountId, const struct FString& AreaDataName, const struct FString& SpawnLocationName);
	void PortalDataLog();
	void PlayTestHere();
	void PlayTest(const struct FString& AreaName);
	void PlayerSave();
	void PlayerLoad(const struct FString& PlayerName);
	void PlayerInfo();
	void PlayerCount(unsigned char Count);
	void Player(const struct FString& PlayerClass, bool bShouldSave);
	void PlatformProfile();
	void PickUpAllItems();
	void PetStoreList();
	void PetSkill(const struct FString& PetSkillRow);
	void PetShoppingListClear();
	void PetShoppingListAdd(const struct FString& CatalogRow);
	void PetSendToTown();
	void PetReturn();
	void PetRemoveAll();
	void PetRemove(const struct FString& OptionalPetName);
	void PetInfo();
	void Pet(const struct FString& MinionTableRow);
	void PartyWith(const struct FString& CharName);
	void PartyInfo();
	void PartyForceFailJoin(bool bFailJoin);
	void PartyFindAndJoin(const struct FString& AccountId);
	void PartyCancelOverride();
	void OSSSimulateNetworkConnectionStatusChanged(unsigned char OldStatus, unsigned char NewStatus);
	void OcclusionShader(bool bEnable);
	void Note(const struct FString& NoteText);
	void NoMonsters();
	void NoCritters();
	void NoCooldown();
	void NameSpawnLog(const struct FString& NameSpawnRow, int Count, const struct FString& PackName, int PackCount);
	void MusicOverrideIntensity(Frontiers_EMusicIntensity Intensity);
	void MonsterSpawnLog(const struct FString& MonsterSpawnRow, int Count);
	void MonsterSpawn(const struct FString& MonsterSpawnRow);
	void MonsterMovementCapsuleScale(float Scale);
	void MonsterInvulnerable();
	void Monster(const struct FString& MonsterSpawnParams, int Count, bool bAtCursor);
	void MapWorks(const struct FString& MapWorksRow, float Level, int Seed);
	void LoreLogPlay(const struct FString& DialogRow);
	void LogTickingSlateWidgets();
	void LogNavigationComponents();
	void LoginSessionInfo();
	void Login(const struct FString& Token, const struct FString& AuthCode, const struct FString& UserHash, const struct FString& PlatformAccountId, const struct FString& Region);
	void LoadingScreenShowForArea(const struct FName& AreaName);
	void LoadingScreenShow(const struct FName& Background, const struct FName& Foreground, const struct FName& Text);
	void LoadingScreenClear();
	void ListTraits();
	void LevelSet(float LevelToSet);
	void LevelAddExperience(float AmountToAdd);
	void LegendaryCollectionUnlockAll(bool bUnlock);
	void KillPet();
	void KillMe();
	void KillAll();
	void ItemWithEnchants(const struct FString& AffixString, const struct FString& ItemClass, float Level);
	void ItemWithAffixes(const struct FString& AffixString, const struct FString& ItemClass, float Level);
	void ItemSpawnLog(const struct FString& ItemClass, const struct FString& Parameter1, const struct FString& Parameter2, const struct FString& Parameter3);
	void ItemSpawn(const struct FString& ItemSpawnRowName, const struct FString& Parameter1, const struct FString& Parameter2, const struct FString& Parameter3);
	void ItemGive(const struct FString& ItemClass, const struct FString& Parameter1, const struct FString& Parameter2, const struct FString& Parameter3);
	void ItemDropsDisable();
	void Item(const struct FString& ItemClass, const struct FString& Parameter1, const struct FString& Parameter2, const struct FString& Parameter3);
	void InventoryRemove(int InventoryId);
	void InventoryList();
	void InventoryClearItems();
	void InboxSyncLedger(const struct FString& SinceUUIDTimestamp);
	void InboxReset();
	void InboxPostLedgerGold(int AmountGold, const struct FString& MessageSubject);
	void InboxLog();
	void Inbox();
	void HUDToggle();
	void HttpTest(const struct FString& URL, const struct FString& Verb);
	void Head(const struct FString& ItemRowName);
	void HairDye(const struct FString& DyeRowName);
	void Hair(const struct FString& ItemRowName);
	void GSomberg(const struct FString& Params);
	void GrantDLCItems(int DLCId);
	void GotoUrl(const struct FString& URL);
	void GodMode();
	void GetBalance();
	void FriendsRefresh();
	void FriendsList();
	void FriendsDummyName(int NumFriends, const struct FString& DummyName);
	void FriendsDummy(int NumFriends);
	void FriendsDelete();
	void FortUnlockAll();
	void FortSaveDefault();
	void FortReset();
	void FortProp(const struct FString& PropRowName, int Count);
	void FortDelete();
	void FortChangeOwner(const struct FString& AccountId);
	void FogOfWarToggleCheatFlag();
	void EnsureServer();
	void Enchant(const struct FString& RecipeName, int ItemId);
	void EmberWeaponSetDrain(float PercentOfMax);
	void EmberWeaponSetCharge(float PercentOfMax);
	void EmberWeaponClear();
	void EmberWeapon(const struct FName& EmberWeaponName);
	void DungeonStateLog();
	void DungeonSetSeed(int Seed);
	void DungeonSetRandomSeed();
	void DungeonSetHighestChallengeLevel(int ChallengeLevel);
	void DungeonOpenMenu();
	void DungeonFailed();
	void DungeonClustersAll();
	void DungeonClusterLookup(int ChallengeLevel);
	void DungeonCleared();
	void DungeonChallengeRare(int ChallengeLevel, int Seed);
	void DungeonChallengeNormal(int ChallengeLevel, int Seed);
	void DungeonChallengeMagic(int ChallengeLevel, int Seed);
	void Disenchant(int ItemId);
	void DisconnectClient();
	void DifficultySet(const struct FString& Difficulty);
	void DebugPanelToggle();
	void DamageActor(const struct FString& ActorName);
	void CutscenesEnabled();
	void CurrencySetEnabled(const struct FString& Currency, bool bEnabled);
	void CurrencyAddToAll(int Amount);
	void CultureReset();
	void CrashServer();
	void Crash();
	void CraftingSetTime(int SecondsLeft);
	void CraftingQueueClear();
	void CraftingNoCosts(bool bNoCostsEnabled);
	void ContractReset();
	void ContractMakeActive(const struct FString& Contract);
	void ContractLevelSet(float LevelToSet);
	void ContractLevelAddFame(float AmountToAdd);
	void ConfigSetEntry(const struct FString& Section, const struct FString& Key, const struct FString& Value, const struct FString& Filename);
	void ConfigGetEntry(const struct FString& Section, const struct FString& Key, const struct FString& Filename);
	void ClientSideRootMotion(bool bEnable);
	void ClientFakeNetworkingDelay(int Delay);
	void ClientBotMode(const struct FString& Behavior);
	void ClearWaypointBinding();
	void ClearNavigationComponents();
	void CinematicPlay(const struct FString& CinematicTableRowName);
	void ChatSetUsingMicrophone(bool bUsingMicrophone);
	void ChatSessionInfo();
	void ChatPartyMemberThreshold(int MinimumMembers);
	void ChatHandleInfo();
	void ChatAreaEchoOn();
	void ChatAreaEchoOff();
	void Character(const struct FString& CharID, const struct FString& CharName);
	void BotMode();
	void Bot_OperateWarp();
	void Boss(const struct FString& BossSpawnParams);
	void BlockedUserCheck(const struct FString& Identifier);
	void AudioSetDebugPlayActor();
	void AudioSetDebugDisplayActor();
	void AudioInputInfo();
	void AudioClearDebugPlayActor();
	void AudioClearDebugDisplayActor();
	void AreaSeed(const struct FString& AreaName, int RandomSeed);
	void AreaNext(const struct FString& ExitName);
	void AreaMapReveal();
	void AreaManagerList();
	void AreaLogProxies(const struct FString& AreaName, const struct FString& ProxySearch);
	void AreaLogLevels(const struct FString& AreaName);
	void Area(const struct FString& AreaName);
	void ArcLogin(const struct FString& ArcAccount);
	void AlwaysKill();
	void AINoTarget();
	void AIFreeze();
	void AffixSpawnLog(const struct FString& ItemClass, const struct FString& Parameter1, const struct FString& Parameter2, const struct FString& Parameter3);
	void AchievementsReset();
	void AchievementProgressAdd(const struct FString& AchievementIdString);
	void AchievementComplete(const struct FString& AchievementIdString);
};

// Class Frontiers.TLCheatPlayTest
// 0x0080 (FullSize[0x0130] - InheritedSize[0x00B0])
class UTLCheatPlayTest : public UActorComponent
{
public:
	unsigned char                                      UnknownData_B5ZV[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAreaTableRowHandle                         AreaToTest;                                                // 0x00B8(0x0010) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FAreaTableRowHandle                         AreaToWarpTo;                                              // 0x00C8(0x0010) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                              ItemLevelBias;                                             // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GO99[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ItemContainersToClear;                                     // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FItemSpawnTableRowHandle                    ItemSpawnRow;                                              // 0x00F0(0x0010) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<struct FName>                               QuestsToAdd;                                               // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FName>                               QuestsToComplete;                                          // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTraitInitializer>                   Traits;                                                    // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLCheatPlayTest");
		return ptr;
	}



	void STATIC_AllocateSkills(class APawn* Player, int BaseSkillWeight, int SkillWeightPerLevel, int RegretPoints);
	void STATIC_AddPet(class APawn* Player);
	void STATIC_AddItemsForArea(class APawn* Player, const struct FAreaTableRowHandle& AreaRow, const struct FItemSpawnTableRowHandle& ItemSpawnRow, float InItemLevelBias);
};

// Class Frontiers.TLCheatRunner
// 0x0070 (FullSize[0x0290] - InheritedSize[0x0220])
class ATLCheatRunner : public AActor
{
public:
	float                                              ZoomTimeOfDayLength;                                       // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PlayTestItemLevelBias;                                     // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FItemSpawnTableRowHandle                    PlayTestItemSpawnRow;                                      // 0x0228(0x0010) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LM0J[0x58];                                    // 0x0238(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLCheatRunner");
		return ptr;
	}



	void XboxLiveS2S(Frontiers_EHttpVerb Verb, const struct FString& Domain, const struct FString& URI, const struct FString& Body);
	void ServerZoomTimeOfDay(bool bForward);
	void ServerZoneInstanceEnableClientDebug();
	void ServerWaypointsUnlockOrClear(bool bUnlocked);
	void ServerWarpsUnlock(bool bUnlocked);
	void ServerWakeUpArea(const struct FString& AreaName);
	void ServerUnloadArea(const struct FString& AreaName);
	void ServerTransmogUnlockAll();
	void ServerTraits(const struct FString& TraitString);
	void ServerToggleNoMonsters();
	void ServerToggleLevelSequencesEnabled();
	void ServerTimeDilation(float Value);
	void ServerTeleportPlayerAbsolute(float X, float Y, float Z);
	void ServerTeleportPlayer(float X, float Y, float Z);
	void ServerStuck();
	void ServerStatusEffect(class AActor* TargetActor, const struct FString& EffectRowName, float Duration, int Count);
	void ServerSpeed(float MetersPerSecond);
	void ServerSpawnerDeactivate();
	void ServerSpawnerActivate();
	void ServerSocialPreview(const struct FString& PreviewPlatformAccountName);
	void ServerSleepArea(const struct FString& AreaName);
	void ServerSkinDye(const struct FString& RowName);
	void ServerSkillsRespecTest();
	void ServerSkillsRespec();
	void ServerSkillsForceRespec(const struct FString& TimestampUTC);
	void ServerSkillSetLevel(const struct FString& SkillName, int Level);
	void ServerSkillsClear();
	void ServerSkillsByRPC(bool bEnabled);
	void ServerSkillsAll(const struct FString& Params);
	void ServerShutdown();
	void ServerSetTimeOfDay(float TimeOfDayPercent);
	void ServerSetPortalToPartyMemberAreaDataName(const struct FString& AreaGroup);
	void ServerSetOcclusionShader(bool bEnabled);
	void ServerSetLogLevel(const struct FString& LogName, const struct FString& Verbosity);
	void ServerSetLegacyFractions(bool bUseLegacyFractions, const struct FString& Token);
	void ServerSetCharacter(const struct FString& CharID, const struct FString& CharName);
	void ServerSetActiveTrait(const struct FName& ActiveTraitName, float Value);
	void ServerSendHeartbeat();
	void ServerResumeTimeOfDay();
	void ServerResetInstances();
	void ServerResetFort();
	void ServerRepGraphLog();
	void ServerReloadRecipes();
	void ServerRefillEnergy();
	void ServerRecipeUnitGrant(const struct FString& RecipeUnit);
	void ServerQuestStop(const struct FString& QuestId);
	void ServerQuestStartOnAll(const struct FString& QuestId);
	void ServerQuestStart(const struct FString& QuestId);
	void ServerQuestsReload();
	void ServerQuestsClearCompleted();
	void ServerQuestsClearAll();
	void ServerQuestsClearActive();
	void ServerQuestSchedule(const struct FString& QuestId);
	void ServerQuestCompleteTask(const struct FString& QuestId, const struct FString& TaskId);
	void ServerQuestComplete(const struct FString& QuestId);
	void ServerPvPEnabled();
	void ServerProfileSnapshot(uint32_t Duration);
	void ServerProfileEnd();
	void ServerProfileBegin();
	void ServerPortalSetReturn(const struct FString& AccountId, const struct FString& AreaName, const struct FString& SpawnLocation);
	void ServerPlayTestHere();
	void ServerPlayTest(const struct FString& AreaName);
	void ServerPlayerLoad(const struct FString& PlayerName);
	void ServerPlayerCount(unsigned char PlayerCount);
	void ServerPlayer(const struct FString& PlayerClass, bool bShouldSave);
	void ServerPickUpAllItems();
	void ServerPetSkill(const struct FString& PetSkillTableRow);
	void ServerPetReturn();
	void ServerPetRemoveAll();
	void ServerPetRemove(const struct FString& MinionName);
	void ServerPet(const struct FString& MinionTableRow);
	void ServerPartyWith(const struct FString& CharName);
	void ServerPartyForceFailJoin(bool bFailJoin);
	void ServerPartyCancelOverride();
	void ServerNote(const struct FString& NoteText);
	void ServerNoCooldown();
	void ServerNetProfileEnd();
	void ServerNetProfileBegin();
	void ServerNameSpawnLog(const struct FString& NameRowName, int Count, const struct FString& PackName, int PackCount);
	void ServerMonsterSpawnLog(const struct FString& MonsterClass, int Count);
	void ServerMonsterSpawn(const struct FString& MonsterClass);
	void ServerMonsterMovementCapsuleScale(float Scale);
	void ServerMonsterInvulnerable();
	void ServerMonster(const struct FString& MonsterSpawnParams, int Count, const struct FVector& SpawnPosition);
	void ServerMemoryReport();
	void ServerMapWorks(const struct FString& MapWorksRow, float Level, int RandomSeed);
	void ServerLogNavigationComponents();
	void ServerLevelSet(float LevelToSet);
	void ServerLevelAddExperience(float AmountToAdd);
	void ServerLegendaryCollectionUnlockAll(bool bUnlock);
	void ServerKillPet();
	void ServerKillMe();
	void ServerKillAll();
	void ServerItemWithAffixes(const struct FString& AffixString, const struct FString& ItemClassString, float Level, Frontiers_EAffixSource Source);
	void ServerItemDropsDisable();
	void ServerInventoryRemove(int InventoryId);
	void ServerInventoryClearItems();
	void ServerInboxSync(const struct FString& SinceTimestamp);
	void ServerInboxReset();
	void ServerInboxPostGold(int GoldAmount, const struct FString& MessageSubject);
	void ServerHead(const struct FString& RowName);
	void ServerHairDye(const struct FString& RowName);
	void ServerHair(const struct FString& RowName);
	void ServerGSomberg(const struct FString& Params);
	void ServerGodMode();
	void ServerFortUnlockAll();
	void ServerFortSaveDefault();
	void ServerFortProp(const struct FString& PropRow, int Count);
	void ServerFortChangeOwner(const struct FString& AccountId);
	void ServerFakeNetworkingFailureChance(Frontiers_EServiceType Service, float FailureChance);
	void ServerFakeNetworkingDelay(Frontiers_EServiceType Service, int Delay);
	void ServerExec(const struct FString& ExecString);
	void ServerEnsure();
	void ServerEnchant(const struct FString& RecipeName, int ItemId);
	void ServerEnableBotCommands(bool bEnabled);
	void ServerEmberWeaponSetDrain(float PercentOfMax);
	void ServerEmberWeaponSetCharge(float PercentOfMax);
	void ServerEmberWeaponClear();
	void ServerEmberWeapon(const struct FName& EmberWeaponName);
	void ServerDungeonSetSeed(int Seed);
	void ServerDungeonSetHighestChallengeLevel(int HighestClearedChallengeLevel);
	void ServerDungeonFailed();
	void ServerDungeonCleared();
	void ServerDungeonChallengeRare(int ChallengeLevel, int RandomSeed);
	void ServerDungeonChallengeNormal(int ChallengeLevel, int RandomSeed);
	void ServerDungeonChallengeMagic(int ChallengeLevel, int RandomSeed);
	void ServerDisenchant(int ItemId);
	void ServerDifficultySet(const struct FString& Difficulty);
	void ServerDeleteFort();
	void ServerDamageActor(float Amount, const struct FString& ActorName);
	void ServerCurrencySetEnabled(const struct FString& Currency, bool bEnabled);
	void ServerCurrencyAddToAll(int Amount);
	void ServerCreateItems(Frontiers_ECreateItemMode Mode, const struct FString& ItemClassString, const struct FString& Parameter1, const struct FString& Parameter2, const struct FString& Parameter3);
	void ServerCrash();
	void ServerCraftingSetTime(float SecondsLeft);
	void ServerCraftingQueueClear();
	void ServerCraftingNoCosts(bool bNoCostsEnabled);
	void ServerContractReset();
	void ServerContractMakeActive(const struct FString& Contract);
	void ServerContractLevelSet(float LevelToSet);
	void ServerContractLevelAddFame(float AmountToAdd);
	void ServerConfigSetEntry(const struct FString& Section, const struct FString& Key, const struct FString& Value, const struct FString& Filename);
	void ServerConfigGetEntry(const struct FString& Section, const struct FString& Key, const struct FString& Filename);
	void ServerClientSideRootMotion(bool bEnable);
	void ServerClearWaypointBinding();
	void ServerClearNavigationComponentHistory();
	void ServerChatPartyMemberThreshold(int MinimumMembers);
	void ServerBotMode();
	void ServerBot_OperateWarp();
	void ServerBoss(const struct FString& BossSpawnParams);
	void ServerAreaNext(const struct FString& ExitName);
	void ServerAreaMapReveal();
	void ServerAreaManagerList();
	void ServerAreaLogProxies(const struct FString& AreaName, const struct FString& ProxySearch);
	void ServerAreaLogLevels(const struct FString& AreaName);
	void ServerAreaChatEchoOn();
	void ServerAreaChatEchoOff();
	void ServerArea(const struct FString& AreaName, bool bUseRandomSeed, int RandomSeed);
	void ServerAlwaysKill();
	void ServerAINoTarget();
	void ServerAIFreeze();
	void ServerAffixSpawnLog(const struct FString& ItemClassString, const struct FString& Parameter1, const struct FString& Parameter2, const struct FString& Parameter3);
	void ServerAchievementsReset();
};

// Class Frontiers.TLCombat
// 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
class UTLCombat : public UActorComponent
{
public:
	float                                              ExperiencePerKill;                                         // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverkillPercentage;                                        // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverkillDoTPercentage;                                     // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverkillChance;                                            // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverkillDoTChance;                                         // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxCriticalChance;                                         // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MonsterAllyLastDamageRadius;                               // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerCountRange;                                          // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinDamagePercentForKillCredit;                             // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinDamagePercentForSkillQuestCredit;                       // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JNEN[0x4];                                     // 0x00D8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PvPDamageMultiplier;                                       // 0x00DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WH7N[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLCombat");
		return ptr;
	}



	void STATIC_Resurrect(class AActor* Source, class AActor* Target);
	float STATIC_GetTotalDamage(class UObject* Source, class AActor* Target, class USkill* Skill, bool bIgnoreDefense, float DamageFactorOverride);
	TArray<class APawn*> STATIC_GetNearbyPlayers(class AActor* DamageTarget, float RangeOverride);
	float STATIC_GetCriticalChance(class AActor* Source, class AActor* Target, class USkill* Skill);
	float STATIC_GetBaseDamage(class UObject* Source, Frontiers_EWeaponSlot WeaponSlot);
	TArray<class AActor*> STATIC_GetAllAttackableInRadius(class AActor* Source, float Radius, const struct FVector& TargetLocation);
	TArray<class AActor*> STATIC_GetAffectAreaTargets(class AActor* Source, float Radius, const struct FInteractionFilter& Filter, const struct FVector& TargetLocation, bool bTargetWorldLocation);
	TArray<class ATLCharacter*> STATIC_GetActorsWithKillCredit(class AActor* Victim, class AActor* Killer);
	void STATIC_DoHealingByPercent(class AActor* Source, class AActor* Target, float Percent);
	void STATIC_DoHealing(class AActor* Source, class AActor* Target, float Amount);
	void STATIC_DoDamage(class AActor* Source, class AActor* Target, class USkill* SourceSkill, float Fraction, bool bIgnoreAttackDefense, int SkillInstanceId);
	void STATIC_ApplyStun(class AActor* Source, class AActor* Target, class UClass* StatusEffectClass, float StunDuration);
	void STATIC_ApplyKnockback(class AActor* Source, class AActor* Target, float KnockbackFactor);
	bool STATIC_ApplyDamage(class AActor* Source, class AActor* Target, float Amount, class USkill* SourceSkill, bool bCritical, int SkillInstanceId);
	TArray<class AActor*> STATIC_AffectArea(class AActor* Source, float Radius, const struct FInteractionFilter& Filter, class USkill* SourceSkill, int SkillInstanceId, const struct FVector& TargetLocation, bool bTargetWorldLocation);
};

// Class Frontiers.AnimNotify_Attack
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UAnimNotify_Attack : public USkillAnimNotify_ConfigurableActivationCost
{
public:
	bool                                               bPlayMeleeHitSound;                                        // 0x0060(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IKQC[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_Attack");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_AreaDamage
// 0x0110 (FullSize[0x0170] - InheritedSize[0x0060])
class UAnimNotify_AreaDamage : public USkillAnimNotify_ConfigurableActivationCost
{
public:
	struct FVector                                     Offset;                                                    // 0x0060(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x006C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideSkillTargetFilter;                                // 0x0070(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XYGQ[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInteractionFilter                          TargetFilter;                                              // 0x0078(0x00F0) (Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bPlayMeleeHitSound;                                        // 0x0168(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAtSkillTargetLocation;                                    // 0x0169(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EFSY[0x6];                                     // 0x016A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_AreaDamage");
		return ptr;
	}



};

// Class Frontiers.MeshBoundsOverrideEditorComponent
// 0x0000 (FullSize[0x0470] - InheritedSize[0x0470])
class UMeshBoundsOverrideEditorComponent : public UBoxComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MeshBoundsOverrideEditorComponent");
		return ptr;
	}



};

// Class Frontiers.TLCombatActorComponent
// 0x02B0 (FullSize[0x0360] - InheritedSize[0x00B0])
class UTLCombatActorComponent : public UActorComponent
{
public:
	bool                                               bMonsterHitFlashEnable;                                    // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_58H1[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FlashIntensity;                                            // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlashTimeToFade;                                           // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FlashColor;                                                // 0x00BC(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EWeaponSlot                              DefenderTraitMode;                                         // 0x00CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YLVW[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BlockNotifyWidgetComponent;                                // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         BlockEventReference;                                       // 0x00D8(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      InvulnerableNotifyWidgetComponent;                         // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         InvulnerableEventReference;                                // 0x00F8(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      EvadeNotifyWidgetComponent;                                // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         EvadeEventReference;                                       // 0x0118(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      CriticalNotifyWidgetComponent;                             // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CriticalDamageNotifyWidgetComponent;                       // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageNotifyWidgetComponent;                               // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CriticalCameraShake;                                       // 0x0148(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         CriticalEventReference;                                    // 0x0150(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FEffectCollection                           GetHitEffects;                                             // 0x0168(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FEffectCollection                           GetHitCriticalEffects;                                     // 0x0180(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bPlayBloodEffectOnLethalHit;                               // 0x0198(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GAIN[0x7];                                     // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectCollection                           DeathEffects;                                              // 0x01A0(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FEffectCollection                           CriticalDeathEffects;                                      // 0x01B8(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FEffectCollection                           CriticalDeathCensoredEffects;                              // 0x01D0(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              GetHitBloodEffectCooldown;                                 // 0x01E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6CXS[0x8];                                     // 0x01EC(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GetHitElementalEffectCooldown;                             // 0x01F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SQ7V[0x8];                                     // 0x01F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectCollection                           ElementalEffectInfo;                                       // 0x0200(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FEffectCollection                           ElementalCriticalEffectInfo;                               // 0x0218(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FEffectDefinition                           RecoverHealthEffect;                                       // 0x0230(0x00D0) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              RecoverHealthEffectCooldown;                               // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XMIP[0x8];                                     // 0x0304(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LegacyFXScale;                                             // 0x030C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FXScaleV2;                                                 // 0x0310(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseMeshBoundsOverride;                                    // 0x0314(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QQSA[0x3];                                     // 0x0315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     MeshBoundsOverrideExtents;                                 // 0x0318(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MeshBoundsOverrideOffset;                                  // 0x0324(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      PreviewColor;                                              // 0x0330(0x0004) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeshBoundsOverrideScaleFactor;                             // 0x0334(0x0004) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeshBoundsOverrideMeasure;                                 // 0x0338(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NPVO[0x4];                                     // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshBoundsOverrideEditorComponent*          MeshBoundsOverrideBox;                                     // 0x0340(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                          // 0x0348(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FMRQ[0x8];                                     // 0x0358(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLCombatActorComponent");
		return ptr;
	}



	void ClientDidNoDamage(class AActor* OriginalAttacker, class AActor* Defender, class USkill* Skill);
};

// Class Frontiers.CombatCallbacksInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCombatCallbacksInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.CombatCallbacksInterface");
		return ptr;
	}



};

// Class Frontiers.TLConsole
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UTLConsole : public UConsole
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLConsole");
		return ptr;
	}



};

// Class Frontiers.TLDecalComponent
// 0x01C4 (FullSize[0x0400] - InheritedSize[0x023C])
class UTLDecalComponent : public UDecalComponent
{
public:
	struct FVector                                     RandomOffsetMin;                                           // 0x023C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RandomOffsetMax;                                           // 0x0248(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    TLDecalRotation;                                           // 0x0254(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRandomizeRotation;                                        // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoOrient;                                               // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyParentRotation;                                      // 0x0262(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJBS[0x5];                                     // 0x0263(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDecalCurveFloat                            RotationCurve;                                             // 0x0268(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector                                     TLDecalScale;                                              // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P2W6[0x4];                                     // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDecalCurveFloat                            ScaleCurve;                                                // 0x0310(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          TLDecalMaterial;                                           // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDecalTextureEntry>                  TextureEntries;                                            // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FDecalCurveFloatEntry>               FloatCurveEntries;                                         // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FDecalCurveColorEntry>               ColorCurveEntries;                                         // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	Frontiers_EShowBloodOptions                        BloodOptions;                                              // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U8OB[0x17];                                    // 0x03E1(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x03F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLDecalComponent");
		return ptr;
	}



};

// Class Frontiers.TLEffect
// 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
class ATLEffect : public AActor
{
public:
	unsigned char                                      UnknownData_RWG7[0x20];                                    // 0x0220(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLooping;                                                  // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YSCT[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UParticleSystemComponent*>            TrackedParticleSystemComponents;                           // 0x0248(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZBNX[0x8];                                     // 0x0258(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLEffect");
		return ptr;
	}



	void ParticleSystemFinished(class UParticleSystemComponent* System);
};

// Class Frontiers.TLFile
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTLFile : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLFile");
		return ptr;
	}



	void STATIC_MakeObjectFullFileName(const struct FName& Folder, const struct FName& Filename, struct FString* FullFileName);
	void STATIC_MakeIconPathFromClassName(const struct FName& ClassName, struct FString* OutPath);
	void STATIC_MakeIconPackagePathFromClassName(const struct FName& ClassName, struct FString* OutPath);
	void STATIC_MakeGeneratedIconNameFromClassName(const struct FName& ClassName, struct FString* OutName);
	void STATIC_MakeClassFullFileNameFromPackageName(const struct FName& PackageName, struct FString* FullFileName);
	void STATIC_MakeClassFullFileName(const struct FName& Folder, const struct FName& Filename, struct FString* FullFileName);
	struct FName STATIC_GetUEFileNameFromAssetPath(const struct FName& InPath);
	struct FName STATIC_GetStaticSpreadsheetsFolder();
	struct FName STATIC_GetStaticDataVersionFolder();
	struct FName STATIC_GetStaticCurvesFolder();
	struct FName STATIC_GetStaticContentFolder();
	struct FName STATIC_GetMiniMapPathForLevel(const struct FString& LevelName);
	struct FName STATIC_GetFolderVFXTest();
	struct FName STATIC_GetFolderVFX();
	struct FName STATIC_GetFolderUITest();
	struct FName STATIC_GetFolderThumbnailStyles(bool bIncludeContentFolder);
	struct FName STATIC_GetFolderSkillsTest();
	struct FName STATIC_GetFolderRecipes();
	struct FName STATIC_GetFolderQuestsTest();
	struct FName STATIC_GetFolderQuests();
	struct FName STATIC_GetFolderPlayerTest();
	struct FName STATIC_GetFolderPlayer();
	struct FName STATIC_GetFolderNPC();
	struct FName STATIC_GetFolderMonsters();
	struct FName STATIC_GetFolderMonsterBlueprints(const struct FName& SubFolder);
	struct FName STATIC_GetFolderMonster(const struct FName& MonsterName);
	struct FName STATIC_GetFolderLevels();
	struct FName STATIC_GetFolderLevel(const struct FName& LevelName);
	struct FName STATIC_GetFolderItemsWeapons();
	struct FName STATIC_GetFolderItemsDyes();
	struct FName STATIC_GetFolderItemsDyeGradients();
	struct FName STATIC_GetFolderItemsDyeExports();
	struct FName STATIC_GetFolderItemsArmour();
	struct FName STATIC_GetFolderItems();
	struct FName STATIC_GetFolderGeneratedIconTools();
	struct FName STATIC_GetFolderGeneratedIcons();
	struct FName STATIC_GetFolderFortProps();
	struct FName STATIC_GetFolderEnvironmentTest();
	struct FName STATIC_GetFolderEnvironments();
	struct FName STATIC_GetFolderDRLGElements();
	struct FName STATIC_GetFolderDefaultForts();
	void STATIC_GetAllFilesInDirectory(TArray<struct FName>* OutFiles, const struct FString& RootDirectory, TArray<struct FString> NameContains, TArray<struct FString> ExtensionIncludes, bool bFileNamesOnly, bool bRecursive, bool bAbsolute);
};

// Class Frontiers.TLGameInstance
// 0x0388 (FullSize[0x0530] - InheritedSize[0x01A8])
class UTLGameInstance : public UGameInstance
{
public:
	struct FText                                       StatusText;                                                // 0x01A8(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y9XO[0x8];                                     // 0x01C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USwitchboardClient*                          Switchboard;                                               // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MVTM[0xE8];                                    // 0x01D0(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOfflineStaticContentSave*                   InProgressOfflineStaticContent;                            // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOfflineStaticContentSave*                   BuildStaticContent;                                        // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CharacterSelectLevel[0x28];                                // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      TitleScreenLevel[0x28];                                    // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UClass*                                      ClientSpreadsheetLoader;                                   // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ServerSpreadsheetLoader;                                   // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WidgetConstantsClass;                                      // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      IconConstantsClass;                                        // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      UITextConstantsClass;                                      // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TermsManagerClass;                                         // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpreadsheetLoader*                          SpreadsheetLoader;                                         // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTermsManager*                               TermsManager;                                              // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_23SU[0x10];                                    // 0x0358(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLHUD*                                      PersistentGameHUD;                                         // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAccountLocalPersistence*                    EditorOnlineAccountLocalPersistence;                       // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_03XT[0x48];                                    // 0x0378(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBulkAssetPreloader*                         Preloader;                                                 // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5OLH[0x8];                                     // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      DestinationLevelAsset[0x28];                               // 0x03C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      UnknownData_H9QH[0xB8];                                    // 0x03F8(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStoreManager*                               StoreManager;                                              // 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFogsOfWar*                                  FogsOfWar;                                                 // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGeneratedIconCache*                         GeneratedIconCache;                                        // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FString, class UClass*>                BotBehaviors;                                              // 0x04C8(0x0050) (Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UClass*                                      MapProxyBPClass;                                           // 0x0518(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_61XG[0x10];                                    // 0x0520(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLGameInstance");
		return ptr;
	}



	void TryToOpenLevel();
	void ToggleVisualLogger();
	bool STATIC_MissingEnvironment();
	bool IsVisualLoggerRecording();
	bool STATIC_IsOfflineMode();
	bool STATIC_IsLocalEnvironment();
	bool STATIC_IsEditorGameMode();
	struct FString STATIC_GetReleaseTag();
	struct FString STATIC_GetEnvironment();
	struct FString STATIC_GetConnectionState(class APlayerController* Controller);
	struct FString STATIC_GetBuild();
};

// Class Frontiers.TLGameMode
// 0x00A0 (FullSize[0x03A8] - InheritedSize[0x0308])
class ATLGameMode : public AGameMode
{
public:
	class UClass*                                      ItemSpawnerClass;                                          // 0x0308(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SpreadsheetsRequiredToStartPlay;                           // 0x0310(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N8KV[0x8F];                                    // 0x0311(0x008F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStandaloneFunctionDeferrer*                 StandaloneFunctionDeferrer;                                // 0x03A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLGameMode");
		return ptr;
	}



};

// Class Frontiers.TLGameSettings
// 0x0100 (FullSize[0x0138] - InheritedSize[0x0038])
class UTLGameSettings : public UDeveloperSettings
{
public:
	struct FFMODEventReference                         DefaultAnimPreviewFootstep;                                // 0x0038(0x0018) (Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         VoiceChatDucking;                                          // 0x0050(0x0018) (Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODBusReference                           MasterBus;                                                 // 0x0068(0x0018) (Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODBusReference                           MusicBus;                                                  // 0x0080(0x0018) (Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MasterBusDynamicRangeDecibels;                             // 0x0098(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MusicBusDynamicRangeDecibels;                              // 0x009C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DebugContentBuildVersionOverride;                          // 0x00A0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          ConsoleDPICurve;                                           // 0x00B0(0x0088) (Edit, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLGameSettings");
		return ptr;
	}



};

// Class Frontiers.TLGameState
// 0x0090 (FullSize[0x0320] - InheritedSize[0x0290])
class ATLGameState : public AGameState
{
public:
	float                                              DayLengthInSeconds;                                        // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WWHM[0x4];                                     // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialParameterCollection*                MaterialGlobals;                                           // 0x0298(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JGEY[0x48];                                    // 0x02A0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Difficulty;                                                // 0x02E8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPvPEnabled;                                               // 0x02EC(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8M6Z[0x3];                                     // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeOfDayPercent;                                          // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WPPA[0x8];                                     // 0x02F4(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bClientSideRootMotionEnabled;                              // 0x02FC(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_88G7[0x23];                                    // 0x02FD(0x0023) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLGameState");
		return ptr;
	}



	void OnTimeOfDayUpdated();
	void OnDifficultyUpdated();
	Frontiers_ETimeOfDayPeriod GetTimeOfDayPeriod();
	float GetTimeOfDayPercent();
};

// Class Frontiers.TLGameViewportClient
// 0x0038 (FullSize[0x0398] - InheritedSize[0x0360])
class UTLGameViewportClient : public UGameViewportClient
{
public:
	class ULoadingScreen*                              LoadingScreen;                                             // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVoiceChatOverlay*                           VoiceChatOverlay;                                          // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      LoadingScreenClass;                                        // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      VoiceChatOverlayClass;                                     // 0x0378(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GamepadModeDeadzone;                                       // 0x0380(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E0T9[0x14];                                    // 0x0384(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLGameViewportClient");
		return ptr;
	}



	void AddVoiceChatOverlay();
	void AddLoadingScreen();
};

// Class Frontiers.TLInventory
// 0x0300 (FullSize[0x03B0] - InheritedSize[0x00B0])
class UTLInventory : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_4DU2[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bInitWithoutController;                                    // 0x00B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5338[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                ShadowAssetSourceOverride;                                 // 0x00BC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VGG7[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnWardrobeItemsChange;                                     // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWeaponsUpdated;                                          // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QYWL[0x10];                                    // 0x00E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CurrentErrorMessage;                                       // 0x00F8(0x0018) (NativeAccessSpecifierPublic)
	TArray<class UClass*>                              CachedItemClasses;                                         // 0x0110(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      AccountItemsContainerClass;                                // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LFAP[0x38];                                    // 0x0128(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         InventoryFullSound;                                        // 0x0160(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UWardrobe*                                   Wardrobe;                                                  // 0x0178(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C6VY[0xC8];                                    // 0x0180(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FItemReplicatedData>                 ServerActorsToAttach;                                      // 0x0248(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QKIT[0x20];                                    // 0x0258(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FItemReplicatedData>                 WardrobeItems;                                             // 0x0278(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct FWeaponSlotData>                     EquippedWeapons;                                           // 0x0288(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WFU0[0x10];                                    // 0x0298(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      StartingItems;                                             // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      BaseWardrobeItems;                                         // 0x02B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWardrobeUsesBaseMeshMaterial;                             // 0x02B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CE15[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ContainerClasses;                                          // 0x02C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UTLInventoryContainer*>               Containers;                                                // 0x02D0(0x0010) (ExportObject, Net, ZeroConstructor, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UTLInventoryContainerStatusEffects*          CachedStatusEffectsContainer;                              // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTLInventoryContainerWardrobe*               CachedWardrobeContainer;                                   // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTLInventoryContainerPotions*                CachedPotionsContainer;                                    // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WRO1[0xB8];                                    // 0x02F8(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventory");
		return ptr;
	}



	void STATIC_SwapToWeaponSuite(class AActor* Actor, Frontiers_EWeaponSuite WeaponSuite);
	void ServerUseItem(const struct FInventoryItemEntry& Item, int TargetItemId);
	void ServerUnequipLegendaryAffix(int SlotIndex);
	void ServerSwapToWeaponSuite(Frontiers_EWeaponSuite NextSuite);
	void ServerSwapToWardrobeProp(class UTLInventory* OtherInventory, Frontiers_ESwapWardrobeOption SwapWardrobeOption);
	void ServerSortContainer(class UClass* ContainerClass, Frontiers_EInventorySortOptions SortOptions);
	void ServerSellItem(int InventoryEntryId);
	void ServerSellAllPetItemsInTown();
	void ServerOpenAccountStashTab(Frontiers_EAccountStashType StashType, int TabIndex);
	void ServerMoveItem(class UTLInventory* SourceInventory, class UTLInventory* TargetInventory, int TargetContainerId, int InventoryEntryId, int MoveToIndex);
	void ServerMarkAllLegendaryAffixesSeen();
	void ServerEquipLegendaryAffix(const struct FItemTableRowHandle& Item, int SlotIndex);
	void ServerDyeItem(int TargetItemEntryId, int DyeSetEntryId);
	void ServerDestroyItem(int InventoryEntryId);
	void ServerBuybackItem(int InventoryEntryId);
	void ServerBreakDownItem(int InventoryEntryId);
	bool STATIC_RemoveItemById(class AActor* Owner, int ItemId, int Count);
	bool Remove(int InventoryItemId, int Count, bool bSaveCharacter);
	int PickUpAndDestroy(class AActor* ItemOnGround);
	void OnRep_WardrobeItems();
	void OnRep_EquippedWeapons();
	void OnRep_Containers();
	void OnPlayerWarped(class AActor* Actor, const struct FVector& Location);
	void OnPlayerDied(class APawn* Player, class AActor* Killer);
	void OnAreaChanged(const struct FGuid& NewAreaId, const struct FName& NewAreaName);
	int STATIC_NumPotions(class AActor* Owner);
	bool STATIC_HasAppliedAffix(class AActor* Owner, int InventoryId, const struct FName& AffixRowName);
	struct FString STATIC_GetDetailedString(class AActor* Actor);
	void EmptyItems();
	void Empty();
	bool STATIC_DyeItem(class AActor* Owner, int TargetItemEntryId, int DyeSetEntryId);
	Frontiers_EUseItemResult STATIC_CraftItemContents(class AActor* Owner, int InventoryId, TArray<int> ReagentInventoryIds);
	void ClientPickupItem(const struct FName& ItemDataRow, int InventoryId);
	void ClientOnItemUsed(bool bResult);
	void ClientInventoryOperationCompleted(bool bSuccess);
	void ClientInventoryFull(class AActor* ItemOnGround, const struct FText& ErrorMessage);
	void ClientAccountStashFailedToLoad(int Index, const struct FDateTime& NextRetryTime);
	bool STATIC_CanBeIdentified(class AActor* Owner, int InventoryId);
	bool STATIC_CanBeDyed(class AActor* Owner, int InventoryId);
	int AddItem(const struct FName& RowName, float ItemLevel, const struct FString& Context, bool bSaveCharacter, bool bShowCelebration);
};

// Class Frontiers.TLInventoryContainer
// 0x0118 (FullSize[0x01C8] - InheritedSize[0x00B0])
class UTLInventoryContainer : public UActorComponent
{
public:
	struct FGameplayTagContainer                       GameplayTagsAny;                                           // 0x00B0(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       GameplayTagsAll;                                           // 0x00D0(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       GameplayTagsExclude;                                       // 0x00F0(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bAffectsTraits;                                            // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJLQ[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0118(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FText                                       InventoryFullMessage;                                      // 0x0130(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UTLInventory*                                ParentInventory;                                           // 0x0148(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WQ4L[0x20];                                    // 0x0150(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagQuery                           Query;                                                     // 0x0170(0x0048) (Net, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsLocked;                                                 // 0x01B8(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_71SH[0xF];                                     // 0x01B9(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainer");
		return ptr;
	}



	void MarkEntriesChanged();
	bool IsLocked();
};

// Class Frontiers.TLInventoryContainerItems
// 0x0028 (FullSize[0x01F0] - InheritedSize[0x01C8])
class UTLInventoryContainerItems : public UTLInventoryContainer
{
public:
	unsigned char                                      UnknownData_RV8E[0x8];                                     // 0x01C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FInventoryItemEntry>                 Items;                                                     // 0x01D0(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      FallbackContainerClass;                                    // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ContainerId;                                               // 0x01E8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_13O6[0x4];                                     // 0x01EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerItems");
		return ptr;
	}



	void OnItemsReplicated();
};

// Class Frontiers.TLInventoryContainerUnequippedBase
// 0x0000 (FullSize[0x01F0] - InheritedSize[0x01F0])
class UTLInventoryContainerUnequippedBase : public UTLInventoryContainerItems
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerUnequippedBase");
		return ptr;
	}



};

// Class Frontiers.TLInventoryContainerUnequippedItems
// 0x0008 (FullSize[0x01F8] - InheritedSize[0x01F0])
class UTLInventoryContainerUnequippedItems : public UTLInventoryContainerUnequippedBase
{
public:
	int                                                MaxNumItems;                                               // 0x01F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1IIM[0x4];                                     // 0x01F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerUnequippedItems");
		return ptr;
	}



	bool STATIC_IsFull(class AActor* Owner);
};

// Class Frontiers.TLInventoryContainerAccountItems
// 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
class UTLInventoryContainerAccountItems : public UTLInventoryContainerUnequippedItems
{
public:
	int                                                StashIndex;                                                // 0x01F8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_EAccountStashType                        StashType;                                                 // 0x01FC(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHasLoaded;                                                // 0x01FD(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_F8FL[0x2];                                     // 0x01FE(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerAccountItems");
		return ptr;
	}



};

// Class Frontiers.TLInventoryContainerBuybackItems
// 0x0008 (FullSize[0x01F8] - InheritedSize[0x01F0])
class UTLInventoryContainerBuybackItems : public UTLInventoryContainerItems
{
public:
	int                                                MaxNumItems;                                               // 0x01F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OFSM[0x4];                                     // 0x01F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerBuybackItems");
		return ptr;
	}



};

// Class Frontiers.TLInventoryContainerEquippedLegendaryAffixes
// 0x0018 (FullSize[0x0208] - InheritedSize[0x01F0])
class UTLInventoryContainerEquippedLegendaryAffixes : public UTLInventoryContainerItems
{
public:
	unsigned char                                      UnknownData_ZPWU[0x8];                                     // 0x01F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        SlotUnlockLevels;                                          // 0x01F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerEquippedLegendaryAffixes");
		return ptr;
	}



	bool STATIC_HasNewSlots(class AActor* Player);
};

// Class Frontiers.TLInventoryContainerFort
// 0x0038 (FullSize[0x0200] - InheritedSize[0x01C8])
class UTLInventoryContainerFort : public UTLInventoryContainer
{
public:
	unsigned char                                      UnknownData_XV2Y[0x10];                                    // 0x01C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FInventoryEntryFortProp>             Props;                                                     // 0x01D8(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KDYB[0x10];                                    // 0x01E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxAllowedFortComplexity;                                  // 0x01F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9O9A[0x4];                                     // 0x01FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerFort");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_TLEffect
// 0x00D8 (FullSize[0x0130] - InheritedSize[0x0058])
class UAnimNotify_TLEffect : public USkillAnimNotify_Cosmetic
{
public:
	bool                                               bStopSoundWhenSkillStops;                                  // 0x0058(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayAtTarget;                                             // 0x0059(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequireSkillToExecute;                                    // 0x005A(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T937[0x5];                                     // 0x005B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectDefinition                           Effects;                                                   // 0x0060(0x00D0) (Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_TLEffect");
		return ptr;
	}



};

// Class Frontiers.AnimNotifyState_DisableOcclusion
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAnimNotifyState_DisableOcclusion : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotifyState_DisableOcclusion");
		return ptr;
	}



};

// Class Frontiers.AnimNotifyState_HideAttachments
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAnimNotifyState_HideAttachments : public UAnimNotifyState
{
public:
	bool                                               bAllSlots;                                                 // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EWardrobeAttachmentSlot                  AttachmentSlot;                                            // 0x0031(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1OJN[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotifyState_HideAttachments");
		return ptr;
	}



};

// Class Frontiers.AnimNotifyState_LockTarget
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAnimNotifyState_LockTarget : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotifyState_LockTarget");
		return ptr;
	}



};

// Class Frontiers.AnimNotifyState_NoRootMotion
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAnimNotifyState_NoRootMotion : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotifyState_NoRootMotion");
		return ptr;
	}



};

// Class Frontiers.AnimNotifyState_PlayFMODEvent
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UAnimNotifyState_PlayFMODEvent : public UAnimNotifyState
{
public:
	struct FAnimNotifyFMODEventContextData             Context;                                                   // 0x0030(0x0038) (Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotifyState_PlayFMODEvent");
		return ptr;
	}



};

// Class Frontiers.AnimNotifyFMODEventContext
// 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
class UAnimNotifyFMODEventContext : public UActorComponent
{
public:
	struct FAnimNotifyFMODEventContextData             Context;                                                   // 0x00B0(0x0038) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class UFMODAudioComponent*                         AttachedComponent;                                         // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventInstance                          UnattachedEventInstance;                                   // 0x00F0(0x0004) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NQEK[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotifyFMODEventContext");
		return ptr;
	}



};

// Class Frontiers.AnimNotifyState_SkillCooldown
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAnimNotifyState_SkillCooldown : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotifyState_SkillCooldown");
		return ptr;
	}



};

// Class Frontiers.AnimNotifyState_StatusEffect
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UAnimNotifyState_StatusEffect : public USkillAnimNotifyState
{
public:
	class UClass*                                      StatusEffectClass;                                         // 0x0050(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCallSkillStart;                                           // 0x0058(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HFHC[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotifyState_StatusEffect");
		return ptr;
	}



};

// Class Frontiers.AnimNotifyStatusEffectContext
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UAnimNotifyStatusEffectContext : public UActorComponent
{
public:
	class UClass*                                      StatusEffectClass;                                         // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UStatusEffect>                StatusEffect;                                              // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotifyStatusEffectContext");
		return ptr;
	}



};

// Class Frontiers.AnimNotifyState_SkillChannelCost
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UAnimNotifyState_SkillChannelCost : public UAnimNotifyState_StatusEffect
{
public:
	bool                                               bCheckChanneling;                                          // 0x0060(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckResources;                                           // 0x0061(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HQV8[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ResourceThreshold;                                         // 0x0064(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotifyState_SkillChannelCost");
		return ptr;
	}



};

// Class Frontiers.AnimNotifyState_SwapAttachments
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAnimNotifyState_SwapAttachments : public UAnimNotifyState
{
public:
	struct FName                                       ToAttachRight;                                             // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ToAttachLeft;                                              // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotifyState_SwapAttachments");
		return ptr;
	}



};

// Class Frontiers.AnimNotifyState_TLEffect
// 0x00E0 (FullSize[0x0130] - InheritedSize[0x0050])
class UAnimNotifyState_TLEffect : public USkillAnimNotifyState
{
public:
	struct FEffectDefinition                           EffectDefinition;                                          // 0x0050(0x00D0) (Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bStopSoundWhenSkillStops;                                  // 0x0120(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequireSkillToExecute;                                    // 0x0121(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayAtTarget;                                             // 0x0122(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDestroyAtEnd;                                             // 0x0123(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDetachOnDeactivate;                                       // 0x0124(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QG8L[0xB];                                     // 0x0125(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotifyState_TLEffect");
		return ptr;
	}



};

// Class Frontiers.AppSettings
// 0x0008 (FullSize[0x0140] - InheritedSize[0x0138])
class UAppSettings : public UGameUserSettings
{
public:
	int                                                DefaultFullscreenMode;                                     // 0x0138(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDefaultUseVSync;                                          // 0x013C(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AZWK[0x3];                                     // 0x013D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AppSettings");
		return ptr;
	}



};

// Class Frontiers.AreaLoader
// 0x0108 (FullSize[0x0328] - InheritedSize[0x0220])
class AAreaLoader : public AInfo
{
public:
	bool                                               bIsDefault;                                                // 0x0220(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggerOnBeginPlay;                                       // 0x0221(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bQueryZoneControllerForArea;                               // 0x0222(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WVPJ[0x1];                                     // 0x0223(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RetryTimeoutSeconds;                                       // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         AreaDataRow;                                               // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsMapworks;                                               // 0x0238(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4XZU[0x2B];                                    // 0x0239(0x002B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       AreaGuid;                                                  // 0x0264(0x0010) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KIK5[0x8];                                     // 0x0274(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBox2D                                      AreaBounds;                                                // 0x027C(0x0014) (Net, ZeroConstructor, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              CameraYawForArea;                                          // 0x0290(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                RandomSeed;                                                // 0x0294(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IU2V[0x10];                                    // 0x0298(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTLLevelInstance>                    LevelsToPreload;                                           // 0x02A8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      AreaClass;                                                 // 0x02B8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortInventoriesResponse                    Forts;                                                     // 0x02C0(0x0020) (Net, Protected, NativeAccessSpecifierProtected)
	class UActorLimiter*                               ActorLimiter;                                              // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAreaQuestComponent*                         AreaQuest;                                                 // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UObject*>                             MonsterClasses;                                            // 0x02F0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ATLCharacter*>                        CachedMonsters;                                            // 0x0300(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BHHC[0x10];                                    // 0x0310(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBulkAssetPreloader*                         AssetLoader;                                               // 0x0320(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AreaLoader");
		return ptr;
	}



	void SetupAreaLevels();
	Frontiers_EAreaLoadError BeginLoad();
};

// Class Frontiers.AreaManagerComponent
// 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
class UAreaManagerComponent : public UActorComponent
{
public:
	float                                              AreaPadding;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QJH3[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      WarpBackFallbackClass[0x28];                               // 0x00B4(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	TArray<struct FAreaRecord>                         Areas;                                                     // 0x00E0(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TD14[0x10];                                    // 0x00F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AreaManagerComponent");
		return ptr;
	}



	bool STATIC_ShouldShowClock(class AController* Controller);
	void OnRep_Areas();
	struct FGameplayTag STATIC_GetSpokeTagByLocation(class UObject* WorldContextObject, const struct FVector& Location);
	struct FText STATIC_GetAreaName(class AController* Controller);
};

// Class Frontiers.QuestUpdater
// 0x0138 (FullSize[0x01E8] - InheritedSize[0x00B0])
class UQuestUpdater : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_97BL[0xC0];                                    // 0x00B0(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UQuestUpdater*                               ParentQuestComponent;                                      // 0x0170(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NR7V[0x70];                                    // 0x0178(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.QuestUpdater");
		return ptr;
	}



	void OnTimeOfDayPeriod(Frontiers_ETimeOfDayPeriod Period);
	void OnParentQuestComponentReplicated();
	void OnEquippedItemsChanged(TArray<struct FItemReplicatedData> Items);
	void OnAreaChanged(const struct FGuid& NewAreaId, const struct FName& NewAreaName);
	void ClientRemoveQuest(const struct FName& QuestId);
	void ClientClearCompletedQuests(Frontiers_EQuestType Filter);
	void ClientClearActiveQuests(Frontiers_EQuestType Filter);
};

// Class Frontiers.AreaQuestComponent
// 0x0018 (FullSize[0x0200] - InheritedSize[0x01E8])
class UAreaQuestComponent : public UQuestUpdater
{
public:
	TArray<class UPlayerQuestComponent*>               PlayerQuestComponents;                                     // 0x01E8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AP4T[0x8];                                     // 0x01F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AreaQuestComponent");
		return ptr;
	}



};

// Class Frontiers.BulkAssetPreloader
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UBulkAssetPreloader : public UObject
{
public:
	unsigned char                                      UnknownData_62YY[0x60];                                    // 0x0028(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObject*>                             ObjectPreloads;                                            // 0x0088(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.BulkAssetPreloader");
		return ptr;
	}



};

// Class Frontiers.PostProcessInfo
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UPostProcessInfo : public UObject
{
public:
	TArray<struct FTextureRules>                       TextureImportRules;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	TArray<struct FFBXRules>                           FBXImportRules;                                            // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, AssetRegistrySearchable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PostProcessInfo");
		return ptr;
	}



};

// Class Frontiers.AudioAmbianceHandler
// 0x00B0 (FullSize[0x0170] - InheritedSize[0x00C0])
class UAudioAmbianceHandler : public UConductorHandler
{
public:
	struct FFMODEventReference                         MusicEvent;                                                // 0x00C0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         AmbienceEvent;                                             // 0x00D8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         BeginDayEvent;                                             // 0x00F0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         BeginNightEvent;                                           // 0x0108(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TimeChangeTriggerDelay;                                    // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BALN[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODBanks                                  Banks;                                                     // 0x0128(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YCV1[0x8];                                     // 0x0168(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AudioAmbianceHandler");
		return ptr;
	}



};

// Class Frontiers.AudioAreaAmbianceComponent
// 0x0170 (FullSize[0x0220] - InheritedSize[0x00B0])
class UAudioAreaAmbianceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_HC8C[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         AmbienceEvent;                                             // 0x00B8(0x0018) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         MusicEvent;                                                // 0x00D0(0x0018) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         BeginDayEvent;                                             // 0x00E8(0x0018) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         BeginNightEvent;                                           // 0x0100(0x0018) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         MusicMuteEvent;                                            // 0x0118(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MusicPlayTimeMinSeconds;                                   // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MusicPlayTimeMaxSeconds;                                   // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MusicOffTimeMinSeconds;                                    // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MusicOffTimeMaxSeconds;                                    // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MusicMuteLowIntensityTime;                                 // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MonsterRadius;                                             // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAudioAmbianceMonsterValues                 MediumIntensity;                                           // 0x0148(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAudioAmbianceMonsterValues                 HighIntensity;                                             // 0x0154(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinTimeAtLowIntensity;                                     // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinTimeAtMediumIntensity;                                  // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HoldTimeAtMediumIntensity;                                 // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinTimeAtHighIntensity;                                    // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxTimeAtHighIntensity;                                    // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X9L0[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         PreviousAmbienceEvent;                                     // 0x0178(0x0018) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         PreviousMusicEvent;                                        // 0x0190(0x0018) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VICB[0x78];                                    // 0x01A8(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AudioAreaAmbianceComponent");
		return ptr;
	}



};

// Class Frontiers.AudioEffectMap
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UAudioEffectMap : public UActorComponent
{
public:
	TArray<struct FAudioEventEntry>                    EffectReferenceArray;                                      // 0x00B0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FFMODEventReference>     CachedEffectReferences;                                    // 0x00C0(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AudioEffectMap");
		return ptr;
	}



	struct FFMODEventReference STATIC_GetFmodEventReferenceForEventName(class AActor* Actor, const struct FName& Event);
};

// Class Frontiers.AudioInputSubsystem
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UAudioInputSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_DXQW[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AudioInputSubsystem");
		return ptr;
	}



};

// Class Frontiers.AudioFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAudioFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AudioFunctionLibrary");
		return ptr;
	}



	float STATIC_VolumePercentToControl(float VolumePercent, float DynamicRange);
	float STATIC_ControlToVolumePercent(float ControlPercent, float DynamicRange);
};

// Class Frontiers.AutoOperateSphereComponent
// 0x0010 (FullSize[0x0470] - InheritedSize[0x0460])
class UAutoOperateSphereComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData_1K93[0x10];                                    // 0x0460(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AutoOperateSphereComponent");
		return ptr;
	}



	void OnAutoOperateEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnAutoOperateBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class Frontiers.AutoOperateTriggerSphere
// 0x0000 (FullSize[0x0460] - InheritedSize[0x0460])
class UAutoOperateTriggerSphere : public USphereComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AutoOperateTriggerSphere");
		return ptr;
	}



};

// Class Frontiers.BlobShadowComponent
// 0x0020 (FullSize[0x04F0] - InheritedSize[0x04D0])
class UBlobShadowComponent : public UStaticMeshComponent
{
public:
	struct FName                                       SocketName;                                                // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceFallbackRadius;                                       // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VAWB[0x3];                                     // 0x04D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FallbackRadius;                                            // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleFactor;                                               // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreMaxSizeLimit;                                        // 0x04E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q78Y[0xB];                                     // 0x04E5(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.BlobShadowComponent");
		return ptr;
	}



};

// Class Frontiers.BossFightComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UBossFightComponent : public UPlayerComponent
{
public:
	int                                                ShowBossUICount;                                           // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G3UG[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      BossMonster;                                               // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.BossFightComponent");
		return ptr;
	}



};

// Class Frontiers.BossFightObserverComponent
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UBossFightObserverComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBossFightStateChanged;                                   // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K52Q[0x1];                                     // 0x00C0(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_EBossFightState                          BossFightState;                                            // 0x00C1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4BON[0x6];                                     // 0x00C2(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.BossFightObserverComponent");
		return ptr;
	}



	bool GetBossFightSpawnsWarpBack();
};

// Class Frontiers.BossMonsterComponent
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class UBossMonsterComponent : public UActorComponent
{
public:
	class UClass*                                      BossStatusEffectClass;                                     // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBossTableRowHandle                         RowHandle;                                                 // 0x00B8(0x0010) (Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	class UStatusEffect*                               BossDataStatusEffect;                                      // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.BossMonsterComponent");
		return ptr;
	}



	void OnRowHandleChanged();
	void OnBossDied(class APawn* Dying, class AActor* Killer);
};

// Class Frontiers.BossMonsterInfoVolume
// 0x0000 (FullSize[0x0460] - InheritedSize[0x0460])
class UBossMonsterInfoVolume : public USphereComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.BossMonsterInfoVolume");
		return ptr;
	}



	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class Frontiers.BossFightManager
// 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
class UBossFightManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData_UJ5S[0x48];                                    // 0x00B0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BossMapMarker;                                             // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      BossComponentClass;                                        // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZXKN[0x10];                                    // 0x0108(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.BossFightManager");
		return ptr;
	}



	void STATIC_ShowBossNameUI(class UObject* WorldContextObject, float Duration);
	void STATIC_ShowBossHP(class AActor* Player);
	bool STATIC_ShouldShowSelectedTarget(class UObject* WorldContextObject);
	bool STATIC_ShouldShowBossHP(class UObject* WorldContextObject);
	bool STATIC_IsBossMonster(class AActor* Monster);
	void STATIC_HideBossHP(class AActor* Player);
	class AActor* GetBossMonster(class AActor* Player);
	class UBossFightManager* STATIC_GetBossFightManager(class UObject* WorldContextObject);
};

// Class Frontiers.BossFightShape
// 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
class ABossFightShape : public AActor
{
public:
	Frontiers_EBossFightState                          BossFightState;                                            // 0x0220(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MTZW[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              LivingPlayers;                                             // 0x0228(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class AActor*>                              DeadPlayers;                                               // 0x0238(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class ATLCharacter*>                        Monsters;                                                  // 0x0248(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsBossArena;                                              // 0x0258(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I8DL[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.BossFightShape");
		return ptr;
	}



	void OnRep_BossFightState();
	void OnPlayerRevived(class APawn* Player);
	void OnPlayerDied(class APawn* Player, class AActor* Killer);
	void OnBossDied(class APawn* Dying, class AActor* Killer);
};

// Class Frontiers.CameraDistanceVolume
// 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
class ACameraDistanceVolume : public ATriggerBox
{
public:
	float                                              CameraDistance;                                            // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CameraPitch;                                               // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_64NX[0x10];                                    // 0x0230(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.CameraDistanceVolume");
		return ptr;
	}



};

// Class Frontiers.CameraTriggerBox
// 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
class ACameraTriggerBox : public ATriggerBox
{
public:
	struct FViewTargetTransitionParams                 TransitionParams;                                          // 0x0228(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.CameraTriggerBox");
		return ptr;
	}



};

// Class Frontiers.TLCharacterCreateBaseActor
// 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
class ATLCharacterCreateBaseActor : public AActor
{
public:
	unsigned char                                      UnknownData_T1YU[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     PlayerPortrait;                                            // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PhotoboothClass;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8ZTU[0x8];                                     // 0x0238(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Frontiers_ECharacterCreateAnimState, class UClass*> AnimStateStatusEffects;                                    // 0x0240(0x0050) (Edit, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UClass*                                      CharacterSelectAnimClass;                                  // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CurrentStatusEffect;                                       // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLCharacterCreateBaseActor");
		return ptr;
	}



	void SetNameplateVisible(bool bNameplateVisible);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* OutTagContainer);
	struct FText GetDisplayName();
	TArray<class USkeletalMeshComponent*> GetComponentsToHide();
	class USkeletalMeshComponent* GetBaseMesh();
};

// Class Frontiers.TLCharacterCreateActor
// 0x0018 (FullSize[0x02B8] - InheritedSize[0x02A0])
class ATLCharacterCreateActor : public ATLCharacterCreateBaseActor
{
public:
	unsigned char                                      UnknownData_OI7E[0x8];                                     // 0x02A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerTableRowHandle                       PlayerData;                                                // 0x02A8(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLCharacterCreateActor");
		return ptr;
	}



};

// Class Frontiers.TLCharacterCreatePetActor
// 0x0010 (FullSize[0x02B0] - InheritedSize[0x02A0])
class ATLCharacterCreatePetActor : public ATLCharacterCreateBaseActor
{
public:
	struct FMinionTableRowHandle                       MinionData;                                                // 0x02A0(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLCharacterCreatePetActor");
		return ptr;
	}



};

// Class Frontiers.CharacterCustomizationComponent
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UCharacterCustomizationComponent : public UActorComponent
{
public:
	struct FCharacterCustomization                     CharacterCustomization;                                    // 0x00B0(0x0020) (Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDyeTableRowHandle                          SkinDyeRow;                                                // 0x00D0(0x0010) (Protected, NativeAccessSpecifierProtected)
	struct FDyeTableRowHandle                          HairDyeRow;                                                // 0x00E0(0x0010) (Protected, NativeAccessSpecifierProtected)
	struct FItemTableRowHandle                         HeadItemRow;                                               // 0x00F0(0x0010) (Protected, NativeAccessSpecifierProtected)
	struct FItemTableRowHandle                         HairItemRow;                                               // 0x0100(0x0010) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.CharacterCustomizationComponent");
		return ptr;
	}



	void OnRep_CharacterCustomization();
};

// Class Frontiers.TLCharacterSelectAnimInstance
// 0x00A8 (FullSize[0x0360] - InheritedSize[0x02B8])
class UTLCharacterSelectAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_PLOV[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	TMap<Frontiers_ECharacterCreateAnimState, struct FCharacterSelectAnimations> Animations;                                                // 0x02C0(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              SequencerBlend;                                            // 0x0310(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SequencerBlendTime;                                        // 0x0314(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SequencerPoseSnapshotName;                                 // 0x0318(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               EmptyAnimation;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DEE5[0x38];                                    // 0x0328(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLCharacterSelectAnimInstance");
		return ptr;
	}



	class UAnimSequenceBase* GetAnimation(Frontiers_ECharacterCreateAnimState From, Frontiers_ECharacterCreateAnimState To, bool* bShouldLoop);
};

// Class Frontiers.ChatChannel
// 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
class UChatChannel : public UObject
{
public:
	unsigned char                                      UnknownData_012X[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChatSession*                                session;                                                   // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LGH2[0xD0];                                    // 0x0060(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ChatChannel");
		return ptr;
	}



};

// Class Frontiers.ChatComponent
// 0x0098 (FullSize[0x0148] - InheritedSize[0x00B0])
class UChatComponent : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_JE9Y[0x98];                                    // 0x00B0(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ChatComponent");
		return ptr;
	}



	void ServerSetUsingMicrophone(bool bInUsingMicrophone);
	void ServerRejoinAllChannels();
	void ServerOnClientLoggedIn(bool bInUsingMicrophone);
	void OnLoggedIntoChatSession();
	void ClientReceiveSystemMessage(TArray<struct FSwitchboardEventMessageBody> Message, FrontiersUI_EUIMessageType MessageType, bool bShowInChat, float DurationSeconds);
	void ClientLogin(const struct FChatHandle& ChatHandle, const struct FString& LoginToken);
	void ClientLeaveChannel(Frontiers_EChatChannelType ChannelType);
	void ClientJoinOrUpdateChannel(const struct FString& ChannelName, Frontiers_EChatChannelType ChannelType, Frontiers_EChatChannelSpace ChannelSpace, const struct FString& ChannelToken, Frontiers_EChatChannelMediaType ChannelMediaTypes);
};

// Class Frontiers.ChatSession
// 0x0138 (FullSize[0x0160] - InheritedSize[0x0028])
class UChatSession : public UObject
{
public:
	TArray<class UChatChannel*>                        ChatChannels;                                              // 0x0028(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ELKP[0x60];                                    // 0x0038(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLLocalPlayer*                              OwningLocalPlayer;                                         // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZU1C[0x60];                                    // 0x00A0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLGameSettings*                             GameSettings;                                              // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JQ6U[0x58];                                    // 0x0108(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ChatSession");
		return ptr;
	}



};

// Class Frontiers.CinematicActor
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class ACinematicActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.CinematicActor");
		return ptr;
	}



};

// Class Frontiers.ColorRange
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UColorRange : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ColorRange");
		return ptr;
	}



	struct FColor STATIC_GetColorFromTextureStrip(class UTexture2D* Texture, float Percent, int TextureRow, bool bWrap);
	struct FColor STATIC_ColorLerp(const struct FColor& First, const struct FColor& Second, float Alpha);
};

// Class Frontiers.CombatConductorHandler
// 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
class UCombatConductorHandler : public UConductorHandler
{
public:
	TArray<struct FCombatDamageSetting>                DamageSettings;                                            // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.CombatConductorHandler");
		return ptr;
	}



};

// Class Frontiers.TLWidgetComponent
// 0x0020 (FullSize[0x05B0] - InheritedSize[0x0590])
class UTLWidgetComponent : public UWidgetComponent
{
public:
	unsigned char                                      UnknownData_8UBK[0x20];                                    // 0x0590(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLWidgetComponent");
		return ptr;
	}



};

// Class Frontiers.CombatNotifyWidgetComponent
// 0x00C0 (FullSize[0x0670] - InheritedSize[0x05B0])
class UCombatNotifyWidgetComponent : public UTLWidgetComponent
{
public:
	unsigned char                                      UnknownData_WDRU[0x18];                                    // 0x05B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          AnimationCurve;                                            // 0x05C8(0x0088) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              RandomSpacingFactor;                                       // 0x0650(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDuration;                                               // 0x0654(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VEMW[0x18];                                    // 0x0658(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.CombatNotifyWidgetComponent");
		return ptr;
	}



};

// Class Frontiers.CombatNotifyComponentPool
// 0x00A0 (FullSize[0x0150] - InheritedSize[0x00B0])
class UCombatNotifyComponentPool : public UActorComponent
{
public:
	TMap<struct FString, struct FCombatNotifyWidgetComponentArray> AvailableComponents;                                       // 0x00B0(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<struct FString, struct FCombatNotifyWidgetComponentArray> UsedComponents;                                            // 0x0100(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.CombatNotifyComponentPool");
		return ptr;
	}



};

// Class Frontiers.Conductor
// 0x0048 (FullSize[0x0268] - InheritedSize[0x0220])
class AConductor : public AActor
{
public:
	class ASkyLight*                                   SkyLight;                                                  // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AExponentialHeightFog*                       AreaHeightFog;                                             // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADirectionalLight*                           DirectionalLight;                                          // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                             ObjectsToHandle;                                           // 0x0238(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UConductorHandler*                           DefaultHandler;                                            // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MapProxyReference;                                         // 0x0250(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMapProxy*                                   MapProxy;                                                  // 0x0258(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsGameConductor;                                          // 0x0260(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_67Y9[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Conductor");
		return ptr;
	}



};

// Class Frontiers.ConductorComponent
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class UConductorComponent : public UPlayerComponent
{
public:
	TArray<class UConductorHandler*>                   Handlers;                                                  // 0x00B0(0x0010) (ExportObject, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EQK7[0x18];                                    // 0x00C0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ConductorComponent");
		return ptr;
	}



	void OnAreaChanged(const struct FGuid& NewAreaId, const struct FName& NewAreaName);
};

// Class Frontiers.ConsoleUtility
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UConsoleUtility : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ConsoleUtility");
		return ptr;
	}



	struct FString STATIC_GetCvarStringValue(const struct FString& Name);
	int STATIC_GetCvarIntValue(const struct FString& Name);
	float STATIC_GetCvarFloatValue(const struct FString& Name);
};

// Class Frontiers.ContractComponent
// 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
class UContractComponent : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_MRO4[0x38];                                    // 0x00B0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPersistenceContractEntryData>       ContractStates;                                            // 0x00E8(0x0010) (Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FContractTableRowHandle                     CurrentContract;                                           // 0x00F8(0x0010) (Net, RepNotify, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ContractComponent");
		return ptr;
	}



	void ServerUpdateLastSeenContractLevel();
	void ServerSwitchContract(const struct FName& NewContractName);
	void ServerClaimNext();
	void OnRep_CurrentContract();
	bool STATIC_IsContractUIEnabled(class UObject* WorldContextObject);
	void ClientOnRewardClaimed(Frontiers_ECraftingResult Result, const struct FContractTableRowHandle& Contract, int LevelClaimed, bool bPaid, int NumUnclaimedRewards);
};

// Class Frontiers.CraftingIndicatorComponent
// 0x0020 (FullSize[0x04F0] - InheritedSize[0x04D0])
class UCraftingIndicatorComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_MMP0[0x20];                                    // 0x04D0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.CraftingIndicatorComponent");
		return ptr;
	}



};

// Class Frontiers.Critter
// 0x0018 (FullSize[0x04D0] - InheritedSize[0x04B8])
class ACritter : public ACharacter
{
public:
	class UBehaviorTree*                               BehaviorTree;                                              // 0x04B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U7FP[0x8];                                     // 0x04C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLCombatActorComponent*                     CombatFX;                                                  // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Critter");
		return ptr;
	}



};

// Class Frontiers.CritterSpawnerComponent
// 0x00B0 (FullSize[0x0160] - InheritedSize[0x00B0])
class UCritterSpawnerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_J5KR[0xA8];                                    // 0x00B0(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LevelSearchRadius;                                         // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_39KR[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.CritterSpawnerComponent");
		return ptr;
	}



};

// Class Frontiers.DeathOptionsComponent
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class UDeathOptionsComponent : public UActorComponent
{
public:
	class UClass*                                      PostResurrectStatusEffectClass;                            // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PostResurrectSafetyDurationSeconds;                        // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VPF2[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDeathOptionCost>                    GoldCosts;                                                 // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.DeathOptionsComponent");
		return ptr;
	}



};

// Class Frontiers.Decorator_ActorsInRange
// 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
class UDecorator_ActorsInRange : public UBTDecorator
{
public:
	float                                              Radius;                                                    // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PRBQ[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagQuery                           GameplayTagQuery;                                          // 0x0070(0x0048) (Edit, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_ECollisionChannel>              CollisionChannel;                                          // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseMinActors;                                             // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1QS8[0x2];                                     // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinActorCount;                                             // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseMaxActors;                                             // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D6IP[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxActorCount;                                             // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Decorator_ActorsInRange");
		return ptr;
	}



};

// Class Frontiers.Decorator_HasLOS
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UDecorator_HasLOS : public UBTDecorator
{
public:
	struct FName                                       BlackboardKeyTargetObject;                                 // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Decorator_HasLOS");
		return ptr;
	}



};

// Class Frontiers.Decorator_HasStatusEffect
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UDecorator_HasStatusEffect : public UBTDecorator
{
public:
	class UClass*                                      StatusEffect;                                              // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Decorator_HasStatusEffect");
		return ptr;
	}



};

// Class Frontiers.Decorator_RandomSuccess
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UDecorator_RandomSuccess : public UBTDecorator
{
public:
	float                                              SuccessProbability;                                        // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A1Z5[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Decorator_RandomSuccess");
		return ptr;
	}



};

// Class Frontiers.Decorator_StatusEffect
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UDecorator_StatusEffect : public UBTDecorator
{
public:
	class UClass*                                      StatusEffectToApply;                                       // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Decorator_StatusEffect");
		return ptr;
	}



};

// Class Frontiers.Decorator_TargetInRange
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UDecorator_TargetInRange : public UBTDecorator
{
public:
	struct FName                                       BlackboardTargetKey;                                       // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseMinRange;                                              // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NFHS[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinRange;                                                  // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseMaxRange;                                              // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BVPE[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxRange;                                                  // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Decorator_TargetInRange");
		return ptr;
	}



};

// Class Frontiers.Decorator_TraitValue
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class UDecorator_TraitValue : public UBTDecorator
{
public:
	bool                                               bActiveTrait;                                              // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FQA8[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTraitsTableRowHandle                       Trait;                                                     // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveTraitsTableRowHandle                 ActiveTrait;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bUseActiveTraitPercent;                                    // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9558[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ComparisonValue;                                           // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ETraitDecoratorComparison                ComparisonType;                                            // 0x0098(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BUCO[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Decorator_TraitValue");
		return ptr;
	}



};

// Class Frontiers.DifficultyDataHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDifficultyDataHelpers : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.DifficultyDataHelpers");
		return ptr;
	}



	TArray<struct FTraitPair> STATIC_GetDifficultyTraitArray(class UObject* WorldContextObject, const struct FDifficultyTableRowHandle& DifficultyRow);
};

// Class Frontiers.DiminishingReturnsComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UDiminishingReturnsComponent : public UPlayerComponent
{
public:
	TArray<struct FResistanceEffect>                   Resistances;                                               // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.DiminishingReturnsComponent");
		return ptr;
	}



};

// Class Frontiers.DisplayNameInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDisplayNameInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.DisplayNameInterface");
		return ptr;
	}



};

// Class Frontiers.DLCSubsystem
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDLCSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_6K4Z[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.DLCSubsystem");
		return ptr;
	}



};

// Class Frontiers.DRLGLevelProxy
// 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
class ADRLGLevelProxy : public AActor
{
public:
	TArray<struct FDRLGLevelProxyEntry>                LevelEntries;                                              // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      SubLevelAssetPtr[0x28];                                    // 0x0230(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bAnyRotation;                                              // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomlyRotateAfterGeneration;                            // 0x0259(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomlyFlipAfterGeneration;                              // 0x025A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanRotate0;                                               // 0x025B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanRotate90;                                              // 0x025C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanRotate180;                                             // 0x025D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanRotate270;                                             // 0x025E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BKNP[0x1];                                     // 0x025F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<Frontiers_EWarpToIndex>                     WarpTo;                                                    // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.DRLGLevelProxy");
		return ptr;
	}



	struct FString GetLevelProxyName();
};

// Class Frontiers.DRLGRuleSet
// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
class ADRLGRuleSet : public AInfo
{
public:
	struct FName                                       RuleSetName;                                               // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDRLGRules                                  RuleSet;                                                   // 0x0228(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.DRLGRuleSet");
		return ptr;
	}



};

// Class Frontiers.DRLGTemplate
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class ADRLGTemplate : public AInfo
{
public:
	TArray<struct FDRLGSubLevelData>                   Levels;                                                    // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.DRLGTemplate");
		return ptr;
	}



};

// Class Frontiers.DungeonAssembler
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UDungeonAssembler : public UActorComponent
{
public:
	struct FDungeonSpawnTableRowHandle                 DungeonSpawnEntryRow;                                      // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.DungeonAssembler");
		return ptr;
	}



};

// Class Frontiers.DungeonMaster
// 0x00C0 (FullSize[0x0170] - InheritedSize[0x00B0])
class UDungeonMaster : public UActorComponent
{
public:
	unsigned char                                      UnknownData_Q5NB[0xC0];                                    // 0x00B0(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.DungeonMaster");
		return ptr;
	}



	void STATIC_SetDungeonFailed(class UObject* WorldContextObject);
	void STATIC_SetDungeonCleared(class UObject* WorldContextObject);
	void OnParticipantDiedInDungeon(class APawn* PlayerPawn, class AActor* Attacker);
	bool STATIC_IsActorInEndlessDungeon(class AActor* Actor);
};

// Class Frontiers.DungeonPlayerComponent
// 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
class UDungeonPlayerComponent : public UPlayerComponent
{
public:
	int                                                DungeonSeed;                                               // 0x00B0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PlayingDungeonChallengeLevel;                              // 0x00B4(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPlayingDungeonChangedProgress;                            // 0x00B8(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MTCD[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       PlayingDungeonQuality;                                     // 0x00BC(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_EDungeonPlayingStatus                    PlayingDungeonStatus;                                      // 0x00C4(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6RSM[0x3];                                     // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           PlayingDungeonAccountIdHash;                               // 0x00C8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      PortalLocationComponentClass;                              // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DungeonMenuClass;                                          // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D9Y0[0x20];                                    // 0x00E0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.DungeonPlayerComponent");
		return ptr;
	}



	void ServerRequestDungeonPortal(int RequestedChallengeLevel, const struct FName& RequestedQuality, class AActor* PortalSourceActor);
	void ServerAcknowledgeChallengeResult();
	void ClientFailedDungeon(bool bProgressReset, int NewHighestClearedLevel);
};

// Class Frontiers.SpawnDataEntryGotoDungeonSpawnRow
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryGotoDungeonSpawnRow : public USpawnDataEntryGotoSpawnRowBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGotoDungeonSpawnRow");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGotoDungeonSpawnRowByQuality
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class USpawnDataEntryGotoDungeonSpawnRowByQuality : public USpawnDataEntryGotoDungeonSpawnRow
{
public:
	unsigned char                                      UnknownData_425L[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGotoDungeonSpawnRowByQuality");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGotoDungeonSpawnRowByChallengeLevel
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class USpawnDataEntryGotoDungeonSpawnRowByChallengeLevel : public USpawnDataEntryGotoDungeonSpawnRow
{
public:
	unsigned char                                      UnknownData_0O8D[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGotoDungeonSpawnRowByChallengeLevel");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGotoDungeonSpawnRowIfEndOfCluster
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class USpawnDataEntryGotoDungeonSpawnRowIfEndOfCluster : public USpawnDataEntryGotoDungeonSpawnRow
{
public:
	unsigned char                                      UnknownData_OCME[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGotoDungeonSpawnRowIfEndOfCluster");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddUniqueMapworksRowByName
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USpawnDataEntryAddUniqueMapworksRowByName : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_S9SO[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddUniqueMapworksRowByName");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddUniqueMapworksRowByFilter
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class USpawnDataEntryAddUniqueMapworksRowByFilter : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_QDMO[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddUniqueMapworksRowByFilter");
		return ptr;
	}



};

// Class Frontiers.Dye
// 0x03D0 (FullSize[0x03F8] - InheritedSize[0x0028])
class UDye : public UObject
{
public:
	class UTexture2D*                                  TextureMatrix;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGradientData                               MatrixRowA;                                                // 0x0030(0x0078) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGradientData                               MatrixRowB;                                                // 0x00A8(0x0078) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGradientData                               MatrixRowC;                                                // 0x0120(0x0078) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGradientData                               MatrixRowD;                                                // 0x0198(0x0078) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGradientData                               MatrixRowE;                                                // 0x0210(0x0078) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGradientData                               MatrixRowF;                                                // 0x0288(0x0078) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGradientData                               MatrixRowG;                                                // 0x0300(0x0078) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGradientData                               MatrixRowH;                                                // 0x0378(0x0078) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                                  GeneratedTexture;                                          // 0x03F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Dye");
		return ptr;
	}



	void ApplyToSkeletalMesh(class USkeletalMeshComponent* MeshComponent, const struct FCharacterCustomization& Customization);
};

// Class Frontiers.DyeSetEditor
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class ADyeSetEditor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.DyeSetEditor");
		return ptr;
	}



};

// Class Frontiers.ElementalEffectComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UElementalEffectComponent : public UActorComponent
{
public:
	TArray<struct FWeaponAffixEffect>                  WeaponAffixEffectsArray;                                   // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ElementalEffectComponent");
		return ptr;
	}



};

// Class Frontiers.EmberWeaponBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEmberWeaponBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.EmberWeaponBlueprintLibrary");
		return ptr;
	}



	float STATIC_GetEmberWeaponDrainValueFromTime(class AActor* Owner, float TimeSeconds);
	float STATIC_GetEmberWeaponChargeValueFromTime(class AActor* Owner, float TimeSeconds);
};

// Class Frontiers.EntitlementManager
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class UEntitlementManager : public UActorComponent
{
public:
	TArray<struct FCatalogArray>                       AccountExclusives;                                         // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCatalogArray>                       CharacterExclusives;                                       // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.EntitlementManager");
		return ptr;
	}



};

// Class Frontiers.EnvironmentVariableComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UEnvironmentVariableComponent : public UActorComponent
{
public:
	struct FName                                       EnvironmentVariable;                                       // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       EnvironmentValue;                                          // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.EnvironmentVariableComponent");
		return ptr;
	}



};

// Class Frontiers.FadeMaterialSwapComponent
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class UFadeMaterialSwapComponent : public UActorComponent
{
public:
	class UMaterialInterface*                          FadeMaterial;                                              // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StaticMeshComponentFilter;                                 // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipUnlitMeshes;                                          // 0x00C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K0GD[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHideableObjectMaterials>            MaterialInstances;                                         // 0x00C8(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.FadeMaterialSwapComponent");
		return ptr;
	}



};

// Class Frontiers.FMODBankSet
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UFMODBankSet : public UObject
{
public:
	struct FFMODBanks                                  BankSet;                                                   // 0x0028(0x0040) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.FMODBankSet");
		return ptr;
	}



};

// Class Frontiers.FoliageSoundInteractorComponent
// 0x0088 (FullSize[0x0280] - InheritedSize[0x01F8])
class UFoliageSoundInteractorComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_T0UD[0x4];                                     // 0x01F8(0x0004) Fix Super Size
	float                                              TickRate;                                                  // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VelocityDeadzone;                                          // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SDJT[0x7C];                                    // 0x0204(0x007C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.FoliageSoundInteractorComponent");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_PlayerFootstep
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnimNotify_PlayerFootstep : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_PlayerFootstep");
		return ptr;
	}



};

// Class Frontiers.PlayerFootstepAssetUserData
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UPlayerFootstepAssetUserData : public UAssetUserData
{
public:
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          SurfaceType;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HHQV[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerFootstepAssetUserData");
		return ptr;
	}



};

// Class Frontiers.PlayerFootstepComponent
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class UPlayerFootstepComponent : public UPlayerComponent
{
public:
	TArray<struct FFootstepEntry>                      Footsteps;                                                 // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         DefaultFootstep;                                           // 0x00C0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerFootstepComponent");
		return ptr;
	}



};

// Class Frontiers.FortEditComponent
// 0x00E8 (FullSize[0x0198] - InheritedSize[0x00B0])
class UFortEditComponent : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_V94I[0x18];                                    // 0x00B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FortEditModePawnClass;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FadeMaterialSwapClass;                                     // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CraftingWidgetClass;                                       // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       BaseSkillBuildingTags;                                     // 0x00E0(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	Frontiers_EFortEditMode                            FortEditMode;                                              // 0x0100(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PORR[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFortPropToPlaceData                        PropToPlace;                                               // 0x0108(0x0028) (Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	class AFortEditPawn*                               FortEditPawn;                                              // 0x0130(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      PropToPlaceActor;                                          // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z05P[0x14];                                    // 0x0140(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bPropToPlaceWasPickedUp;                                   // 0x0154(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U9XS[0x3];                                     // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PropRotationDegrees;                                       // 0x0158(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MAVT[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AFortVolume*                                 CachedFortVolume;                                          // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsInOwnFortArea;                                          // 0x0168(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsBlockedFort;                                            // 0x0169(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W3B2[0x2E];                                    // 0x016A(0x002E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.FortEditComponent");
		return ptr;
	}



	void ShowPetDisplayUIForProp(class AActor* Prop);
	void ShowCraftingUIForProp(int PropInventoryEntryId, class AActor* Prop);
	void ServerUpgradeProp(int InventoryEntryId);
	void ServerTogglePropGender(class AActor* WardrobeProp);
	void ServerToggleEditMode();
	void ServerStoreAll();
	void ServerSelectProp(const struct FFortPropTableRowHandle& Prop);
	void ServerRotateProp(Frontiers_EPropRotationMode RotateMode);
	void ServerPlaceProp(const struct FVector& Location);
	void ServerPickupProp(class AActor* Prop);
	void ServerEndEditMode();
	void ServerEjectPlayerFromFort();
	void ServerCraftProp(const struct FFortPropTableRowHandle& Prop);
	void ServerCancelPlace(bool bSendToStorage);
	void ServerAssignPetToProp(class UFortPropComponent* Prop, const struct FGuid& PetGuid);
	void OnRep_PropToPlace();
	void OnRep_PropRotationDegrees();
	void OnRep_IsInOwnFortArea();
	void OnRep_IsBlockedFort();
	void OnRep_FortEditMode();
	class UFortEditComponent* STATIC_Get(class AActor* Player);
	int CraftProp(const struct FFortPropTableRowHandle& Prop, bool bSave);
	void ClientShowPetDisplayUIForProp(int PropInventoryEntryId, class AActor* Prop);
	void ClientShowCraftingUIForProp(int PropInventoryEntryId, class AActor* Prop);
};

// Class Frontiers.FortEditPawn
// 0x0040 (FullSize[0x02C0] - InheritedSize[0x0280])
class AFortEditPawn : public APawn
{
public:
	struct FDepthOfFieldOverrideRequest                DepthOfFieldSettings;                                      // 0x0280(0x000C) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ViewTransitionTime;                                        // 0x028C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortEditPawnMovement*                       MovementComponent;                                         // 0x0290(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortEditWidget*                             FortEditWidget;                                            // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7K9D[0x8];                                     // 0x02A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpringArmComponent*                         CameraArm;                                                 // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputComponent*                             FortInputComponent;                                        // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BZEI[0x8];                                     // 0x02B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.FortEditPawn");
		return ptr;
	}



};

// Class Frontiers.FortEditPawnMovement
// 0x0008 (FullSize[0x0158] - InheritedSize[0x0150])
class UFortEditPawnMovement : public UFloatingPawnMovement
{
public:
	class AFortVolume*                                 FortVolume;                                                // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.FortEditPawnMovement");
		return ptr;
	}



};

// Class Frontiers.FortPropComponent
// 0x0430 (FullSize[0x04E0] - InheritedSize[0x00B0])
class UFortPropComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_990T[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectDefinition                           CraftingEffect;                                            // 0x00C0(0x00D0) (Edit, NativeAccessSpecifierPublic)
	struct FEffectDefinition                           PlaceEffect;                                               // 0x0190(0x00D0) (Edit, NativeAccessSpecifierPublic)
	struct FEffectDefinition                           UpgradeEffect;                                             // 0x0260(0x00D0) (Edit, NativeAccessSpecifierPublic)
	struct FEffectDefinition                           SacrificeEffect;                                           // 0x0330(0x00D0) (Edit, NativeAccessSpecifierPublic)
	int                                                InventoryId;                                               // 0x0400(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QGSA[0x4];                                     // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      InventoryOwner;                                            // 0x0408(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Vendor;                                                    // 0x0410(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              AttachedActors;                                            // 0x0418(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortPropTableRowHandle                     VendorPosingAsProp;                                        // 0x0428(0x0010) (Edit, NativeAccessSpecifierPublic)
	bool                                               bSupportsAssignedPet;                                      // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsForFlyingPets;                                          // 0x0439(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G18Q[0x6];                                     // 0x043A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             PetAttachComponent;                                        // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortVolume*                                 FortVolume;                                                // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JEF6[0x20];                                    // 0x0450(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATLCharacter*                                AssignedPetActor;                                          // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortPropTableRowHandle                     FortPropTableRowHandle;                                    // 0x0478(0x0010) (Net, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                       AssignedPetInventoryGuid;                                  // 0x0488(0x0010) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMinionTableRowHandle                       AssignedPetRow;                                            // 0x0498(0x0010) (Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	class UFortPropComponent*                          ParentProp;                                                // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         OpenUIAudioEvent;                                          // 0x04B0(0x0018) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         CloseUIAudioEvent;                                         // 0x04C8(0x0018) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.FortPropComponent");
		return ptr;
	}



	class AActor* SpawnAttachedActor(class UClass* ActorClass, class USceneComponent* AttachTo);
	void PlayClosedAudio();
	void OnRep_AssignedPetRow();
	void OnRep_AssignedPetInventoryGuid();
	bool IsOwner(class AActor* Actor);
	int GetInventoryIdForActor(class AActor* Actor);
	void ClientOnUpgraded(int InventoryEntryId, class UFortEditComponent* FortEditComponent);
};

// Class Frontiers.SpawnDataEntryAddFortPropByName
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USpawnDataEntryAddFortPropByName : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_LJBU[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddFortPropByName");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddFortPropByFilter
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USpawnDataEntryAddFortPropByFilter : public USpawnDataEntryGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddFortPropByFilter");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGotoFortPropSpawnRow
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryGotoFortPropSpawnRow : public USpawnDataEntryGotoSpawnRowBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGotoFortPropSpawnRow");
		return ptr;
	}



};

// Class Frontiers.FortDataManager
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UFortDataManager : public UActorComponent
{
public:
	TArray<struct FDefaultFortData>                    CachedDefaultForts;                                        // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.FortDataManager");
		return ptr;
	}



};

// Class Frontiers.PlaceNameTriggerBox
// 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
class APlaceNameTriggerBox : public ATriggerBox
{
public:
	struct FText                                       PlaceName;                                                 // 0x0228(0x0018) (Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlaceNameTriggerBox");
		return ptr;
	}



};

// Class Frontiers.FortVolume
// 0x0058 (FullSize[0x0298] - InheritedSize[0x0240])
class AFortVolume : public APlaceNameTriggerBox
{
public:
	struct FTLUserAccount                              FortOwner;                                                 // 0x0240(0x0030) (Edit, Net, EditConst, RepNotify, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z0UW[0x8];                                     // 0x0270(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AUserGeneratedContentBlocker*                UserGeneratedContentBlocker;                               // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RO4N[0x18];                                    // 0x0280(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.FortVolume");
		return ptr;
	}



	void OnRepFortOwner();
};

// Class Frontiers.FriendsComponent
// 0x0098 (FullSize[0x0148] - InheritedSize[0x00B0])
class UFriendsComponent : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_9HS4[0x98];                                    // 0x00B0(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.FriendsComponent");
		return ptr;
	}



	void ServerSetNumFriendsInParty(unsigned char NumFriends);
};

// Class Frontiers.AnimNotify_GadgetOperateHit
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAnimNotify_GadgetOperateHit : public UAnimNotify
{
public:
	int                                                HitIndex;                                                  // 0x0038(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z45D[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_GadgetOperateHit");
		return ptr;
	}



};

// Class Frontiers.PlayerGadgetComponent
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UPlayerGadgetComponent : public UPlayerComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerGadgetComponent");
		return ptr;
	}



	void ServerRequestGadgetStatus(class AGadget* Gadget);
	void ClientPlayAudioForGadget(class AGadget* Gadget, Frontiers_EGadgetOperateSuccess GadgetOperateSuccess);
};

// Class Frontiers.GamePadComponent
// 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
class UGamePadComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_2KSE[0x20];                                    // 0x00B0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ControllerButtonConstantsClass;                            // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NE7M[0x28];                                    // 0x00D8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.GamePadComponent");
		return ptr;
	}



	bool STATIC_IsInGamepadMode(class APlayerController* Player);
};

// Class Frontiers.GeneratedIconCache
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UGeneratedIconCache : public UObject
{
public:
	TMap<struct FName, struct FGeneratedIcon>          CachedItemIcons;                                           // 0x0028(0x0050) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.GeneratedIconCache");
		return ptr;
	}



};

// Class Frontiers.GeneratedIconManager
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UGeneratedIconManager : public UActorComponent
{
public:
	TArray<struct FPendingGeneratedIcon>               PendingGeneratedIcons;                                     // 0x00B0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.GeneratedIconManager");
		return ptr;
	}



};

// Class Frontiers.StatusEffect
// 0x0258 (FullSize[0x0280] - InheritedSize[0x0028])
class UStatusEffect : public UObject
{
public:
	unsigned char                                      UnknownData_PH2O[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name;                                                      // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       AffixTextArea;                                             // 0x0048(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       AffixTextActor;                                            // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0078(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                                  Icon;                                                      // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowInUI;                                                 // 0x0098(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowCountdown;                                            // 0x0099(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClientTimer;                                              // 0x009A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRefreshOnReapply;                                         // 0x009B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRefreshAllStacks;                                         // 0x009C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_99X3[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxInstancesPerActor;                                      // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLimitEffectiveInstances;                                  // 0x00A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7ONC[0x3];                                     // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxEffectiveInstancesPerActor;                             // 0x00A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AGDZ[0x24];                                    // 0x00AC(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Owner;                                                     // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      Inflictor;                                                 // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       SkillTraitTags;                                            // 0x00E0(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTraitInitializer>                   InitialTraits;                                             // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class AActor*                                      InstigatorCharacter;                                       // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FTraitKey, float>                      InstigatorTraitSnapshot;                                   // 0x0118(0x0050) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N5Q9[0x8];                                     // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FTraitKey, float>                      BlueprintRelevantInstigatorTraits;                         // 0x0170(0x0050) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x01C0(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                                ActionGroupTag;                                            // 0x01E0(0x0008) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UObject*>                             AssetsLoaded;                                              // 0x01E8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              ExpireTime;                                                // 0x01F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StartTime;                                                 // 0x01FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LastDamageOverTimeEvent;                                   // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                                PrimaryDamageElement;                                      // 0x0204(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ParticlePriority;                                          // 0x020C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FEffectCollection                           Effects;                                                   // 0x0210(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class USkill*                                      Skill;                                                     // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SkillInstanceId;                                           // 0x0230(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SkillLevel;                                                // 0x0234(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRemoveOnDeath;                                            // 0x0238(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsDamageSource;                                           // 0x0239(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCanCauseGetHit;                                           // 0x023A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bShouldEventTimerTick;                                     // 0x023B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EventTimerFrequency;                                       // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       DisallowedTags;                                            // 0x0240(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               bWantsInstigatorTraitSnapshot;                             // 0x0260(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BPQB[0x17];                                    // 0x0261(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bApplied;                                                  // 0x0278(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7HZG[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.StatusEffect");
		return ptr;
	}



	void TauntMinions(class AActor* Taunter, class AActor* MinionOwner, const struct FGameplayTagContainer& RequiredMinionTags);
	void Taunt(class AActor* Taunter);
	void SwapAttachment(const struct FName& ToAttachRight, const struct FName& ToAttachLeft);
	void SpawnSkillBeam(const struct FFireSkillBeamData& FireBeamData);
	void SpawnParticles(TArray<struct FEffectDefinition> ParticleInfo, int Priority);
	void SpawnActorToAttach(class UClass* ActorClass, const struct FName& AttachPoint);
	void ShowVignette(class UTexture* Texture);
	void ShowUI(FrontiersUI_ETLWidget Widget, bool bCloseWidgetWhenDone, bool bCloseOtherOpenWindows);
	void ShowMessage(const struct FSlateColor& InColor);
	void ShowLoadingScreen();
	void ShowHudPanel(FrontiersUI_ECharacterMenuTab Tab);
	void SetTimer(float Duration);
	void SetSkillSlotForTrainCar(const struct FGameplayTagContainer& InGameplayTags, Frontiers_ESkillSlot InSkillSlot);
	void SetNotTargetable();
	void SetMusicOverrideForArea(const struct FFMODEventReference& Event);
	void SetMusicIntensityOverrideForArea(Frontiers_EMusicIntensity Intensity);
	void SetMonsterManagerStateOverride(Frontiers_EMonsterManagerState State);
	void SetMinionForTrainCar(const struct FGameplayTagContainer& InGameplayTags, const struct FMinionTableRowHandle& MinionRowHandle);
	void SetMaterialInstance(class UMaterialInstance* Material, int Priority, bool bApplyToAttachedActors, bool bSwapParentMaterial, bool bSkipUnlitMeshes);
	void SetMaterial(class UMaterial* Material, int Priority);
	void SetIdleMoveBlendspace(Frontiers_ETLBlendSpaceTypes Type);
	void SetFallbackSelectedActor(class AActor* Actor);
	void SetAnimInstanceClass(class UClass* AnimInstanceClass);
	void SetAmbienceOverrideForArea(const struct FFMODEventReference& Event);
	void ScheduleTrigger(float DelaySeconds);
	void RunBehaviorTree(class UBehaviorTree* BehaviorTree, bool bStopActiveSkill);
	void STATIC_RemoveStatusEffect(class AActor* Target, class UClass* StatusEffectClass, int Count);
	void PreventSkillUse();
	void PlayWidgetAnim(class UUserWidget* InWidget, const struct FString& WidgetAnimName, int NumLoops);
	void PlaySequenceOnRemove(class UClass* TriggerClass, class UClass* SequenceActorClass);
	void PlayLoopedSoundEventReference(const struct FFMODEventReference& Event, int Priority, bool bUsePriority);
	void PlayClientSequenceOnRemove(class UClass* SequenceActorClass);
	void PauseSoundsFromAnimations();
	void OverrideSkillSet(Frontiers_ESkillSet SkillSet, int Priority);
	void OverrideDisplayName(const struct FText& DisplayNameOverride, const struct FText& DescriptionOverride);
	void OverrideAnimationForSkill(class UClass* SkillClass, class UAnimSequenceBase* Animation);
	void OnWarped(const struct FVector& Location);
	void OnTriggered();
	void OnSkillStart(const struct FSkillEventData& SkillEventData);
	void OnPreDeath();
	void OnPreApply();
	void OnPostDeath();
	void OnPostApply();
	void OnExpired();
	void OnEventTimerTick();
	void OnCleared();
	void OnAreaChanged();
	void MoveCamera(float CameraDistance, float CameraPitch);
	void ManageComponentLifetime(class UActorComponent* Component);
	void ManageActorLifetime(class AActor* Actor, float GracePeriod);
	void LockTargetWidget(class AActor* LockedTarget);
	void LockSkillCooldownsByTags(const struct FGameplayTagContainer& Tags);
	void LockInventoryContainer(class AActor* Target, class UClass* ContainerClass);
	void LockIncreaseActiveTrait(const struct FActiveTraitsTableRowHandle& ActiveTraitRowName);
	void LockDecreaseActiveTrait(const struct FActiveTraitsTableRowHandle& ActiveTraitRowName);
	void LockActiveTrait(const struct FActiveTraitsTableRowHandle& ActiveTraitRowName);
	void IncreasePeakDrama(float Drama);
	void HideInGame();
	bool STATIC_HasStatusEffectWithTags(class AActor* Target, const struct FGameplayTagContainer& Tags);
	bool STATIC_HasStatusEffect(class AActor* Target, class UClass* StatusEffectClass);
	TArray<struct FText> STATIC_GetStatusEffectTraits(class UObject* WorldContextObject, class UClass* StatusEffectClass, int InSkillLevel);
	TArray<class UStatusEffect*> STATIC_GetStatusEffectsWithTags(class AActor* Actor, const struct FGameplayTagContainer& Tags);
	TArray<class UStatusEffect*> STATIC_GetStatusEffectsOfType(class AActor* Actor, class UClass* StatusEffectClass);
	class AActor* GetOwner();
	int GetMaxInstancesPerActor(class AActor* TargetActor);
	class AActor* GetInflictor();
	struct FText GetDescription(class AActor* ActorOwner);
	TArray<struct FTraitKey> GetBlueprintRelevantInstigatorTraitKeys();
	void ForceHoldPosition();
	void Expire();
	void EnableComponentTick(class UActorComponent* Component, bool bEnable);
	void DisableSkillsByTag(const struct FGameplayTagContainer& Tags);
	void DisableSkillsBySlot(Frontiers_ESkillSlot Slot);
	void DisableRootMotion();
	void DisableOperate();
	void DisableOcclusionShader();
	void DisableLootDrop();
	void DisableHoverClick();
	void DisableCharacterCollision();
	void CreateMeshShell(const struct FMeshShellParameters& Params);
	class UActorComponent* CreateComponent(class UClass* ComponentClass);
	void STATIC_ClearStatusEffectFromInflictor(class AActor* Target, class UClass* StatusEffectClass, class AActor* Inflictor);
	void STATIC_ClearStatusEffectByGameplayTag(class AActor* Target, const struct FGameplayTag& Tag);
	void STATIC_ClearStatusEffect(class AActor* Target, class UClass* StatusEffectClass);
	void ChangeTeam(Frontiers_ETLTeam NewTeam);
	void ChangeHealthBarColor(const struct FSlateColor& Color);
	void ChainBeam(class AActor* SourceActor, class AActor* ChainStartActor, const struct FName& ChainStartSocket, const struct FName& ChainHitSocket, class USkill* Skill, class UClass* SkillBeamClass, int BounceCount, float ChainRadius, class UClass* InStatusEffectClass, float StatusDuration, float DamageFraction);
	void AudioSetGlobalParameter(const struct FString& ParameterName, float ParameterValue);
	void AttachHazardToOwner(class AActor* SourceActor, class UClass* HazardClass);
	void AsyncLoadAndHoldAsset(const struct FSoftObjectPath& ObjectPath);
	void ApplyTraits(TArray<struct FTraitInitializer> TraitList);
	void ApplyTraitPairs(TArray<struct FTraitPair> TraitList);
	class UStatusEffect* STATIC_ApplyStatusEffectByProximity(class AActor* Target, class UClass* StatusEffectClass, class AActor* Inflictor, class ASkillShape* Source);
	class UStatusEffect* STATIC_ApplyStatusEffect(class AActor* Target, class UClass* StatusEffectClass, class AActor* Inflictor, class USkill* Skill, float Duration, int SkillInstanceId);
	class UStatusEffect* STATIC_ApplyProcStatusEffect(class AActor* Inflictor, class AActor* Target, class USkill* Skill, class UClass* StatusEffectClass, const struct FGameplayTag& ProcTag, const struct FName& ParameterRowName);
	class UStatusEffect* STATIC_ApplyAssetStatusEffect(class AActor* Target, class AActor* Inflictor, class USkill* Skill, float Duration);
	void AdjustMonsterAwarenessRadiusInArea(float Centimeters);
	void AddSkill(const struct FName& SkillRowName, int SkillLevel);
	void AddProc(const struct FProcTableRowHandle& ProcRow, int InRequiredSkillInstanceId);
	void AddPlayerEnergyRegen(float SecondsToRefillEnergy);
	void AddItemNameplate();
	void AddInventoryContainer(class UClass* ContainerClass);
	void ActivateHazard(class AHazard* Hazard, bool bShouldBeActive);
};

// Class Frontiers.GenericBeamStatusEffect
// 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
class UGenericBeamStatusEffect : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.GenericBeamStatusEffect");
		return ptr;
	}



};

// Class Frontiers.GradientColorComponent
// 0x0280 (FullSize[0x0330] - InheritedSize[0x00B0])
class UGradientColorComponent : public UActorComponent
{
public:
	class UClass*                                      ImportDyeBase;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      TextureMatrixPreview;                                      // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          GradientMatrixBuilderMaterial;                             // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          QuickPassThruMaterial;                                     // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          GradientMatrixBuilderMatInst;                              // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          ColorGradientBuiderMaterial;                               // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      GradientRowA[0x50];                                        // 0x00E0(0x0050) UNKNOWN PROPERTY: MapProperty
	unsigned char                                      GradientRowB[0x50];                                        // 0x0130(0x0050) UNKNOWN PROPERTY: MapProperty
	unsigned char                                      GradientRowC[0x50];                                        // 0x0180(0x0050) UNKNOWN PROPERTY: MapProperty
	unsigned char                                      GradientRowD[0x50];                                        // 0x01D0(0x0050) UNKNOWN PROPERTY: MapProperty
	unsigned char                                      GradientRowE[0x50];                                        // 0x0220(0x0050) UNKNOWN PROPERTY: MapProperty
	unsigned char                                      GradientRowF[0x50];                                        // 0x0270(0x0050) UNKNOWN PROPERTY: MapProperty
	unsigned char                                      GradientRowG[0x50];                                        // 0x02C0(0x0050) UNKNOWN PROPERTY: MapProperty
	struct FName                                       PropertyToChange;                                          // 0x0310(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      MyOwner;                                                   // 0x0318(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FName>                               PropertyToUpdate;                                          // 0x0320(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.GradientColorComponent");
		return ptr;
	}



	void UpdateMaterialFromSamplerMap(const struct FName& PropertyChangedName);
	void UpdateAllMaterials();
	void InitWardrobeComponents();
	void ImportDyeBaseForEdit();
	void GetGradientRowByName(const struct FName& RowName);
};

// Class Frontiers.HandledComponentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHandledComponentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.HandledComponentInterface");
		return ptr;
	}



	void PreHandleComponent();
	void PostHandleComponent();
};

// Class Frontiers.HarvestGadget
// 0x00F0 (FullSize[0x0590] - InheritedSize[0x04A0])
class AHarvestGadget : public AGadget
{
public:
	float                                              HarvestPointsNeeded;                                       // 0x04A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointsHarvested;                                           // 0x04A4(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             HarvestedParent;                                           // 0x04A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             UnharvestedParent;                                         // 0x04B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7V07[0x8];                                     // 0x04B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectDefinition                           FinishedHarvestingEffect;                                  // 0x04C0(0x00D0) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.HarvestGadget");
		return ptr;
	}



	float GetHarvestPercent(class APawn* Pawn);
};

// Class Frontiers.GenericHazardStatusEffect
// 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
class UGenericHazardStatusEffect : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.GenericHazardStatusEffect");
		return ptr;
	}



};

// Class Frontiers.Hazard
// 0x01B8 (FullSize[0x0440] - InheritedSize[0x0288])
class AHazard : public ASkillShape
{
public:
	unsigned char                                      UnknownData_C8EV[0x18];                                    // 0x0288(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUseInsigatorDamage;                                       // 0x02A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GL34[0x7];                                     // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x02A8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                               bStartActive;                                              // 0x02C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bActivateOnTouch;                                          // 0x02C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ETLTeam                                  Team;                                                      // 0x02CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HUU3[0x5];                                     // 0x02CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInteractionFilter                          TargetFilter;                                              // 0x02D0(0x00F0) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                                DamageTypeTag;                                             // 0x03C0(0x0008) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bScaleDamageByArea;                                        // 0x03C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bScaleDamageByMonsterDamage;                               // 0x03C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FD89[0x2];                                     // 0x03CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TouchDamageMin;                                            // 0x03CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TouchDamageMax;                                            // 0x03D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MotionDamage;                                              // 0x03D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MotionDamageTriggerDistance;                               // 0x03D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DamagePerSecond;                                           // 0x03DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ActivationDelay;                                           // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PulseInterval;                                             // 0x03E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PulsesPerActivation;                                       // 0x03E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PulseCount;                                                // 0x03EC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxActivations;                                            // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ActivationCount;                                           // 0x03F4(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V0IN[0x8];                                     // 0x03F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTraits*                                     Traits;                                                    // 0x0400(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      StatusEffectClass;                                         // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bApplyLingeringDuration;                                   // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_20OX[0x3];                                     // 0x0411(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StatusEffectDuration;                                      // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsActive;                                                 // 0x0418(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsPendingActivation;                                      // 0x0419(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q551[0x26];                                    // 0x041A(0x0026) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Hazard");
		return ptr;
	}



	class AHazard* STATIC_SpawnHazard(class USkill* Skill, class AActor* Actor, class UClass* HazardClass, const struct FVector& Location, float HazardDuration, bool bAttached, class AActor* AttachActor, bool bActiveOnSpawn, bool bSpawnOnClient, bool bSpawnOnGround, int SkillInstanceId);
	void OnPulse();
	void OnHitTarget(class AActor* ActorInContact);
	TArray<class AActor*> GetFilteredOverlappingActors();
	void Deactivate();
	void STATIC_ActivateHazard(class AActor* HazardActor, bool bShouldActivate);
};

// Class Frontiers.HideableStaticMeshComponent
// 0x0000 (FullSize[0x04D0] - InheritedSize[0x04D0])
class UHideableStaticMeshComponent : public UStaticMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.HideableStaticMeshComponent");
		return ptr;
	}



};

// Class Frontiers.HideableActor
// 0x0028 (FullSize[0x03B0] - InheritedSize[0x0388])
class AHideableActor : public ATLActor
{
public:
	class UMaterial*                                   FadeMaterial;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeSpeed;                                                 // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HideAtEnd;                                                 // 0x0394(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M0KB[0x3];                                     // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFadeMaterialSwapComponent*                  FadeSwapComponent;                                         // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DKRT[0x10];                                    // 0x03A0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.HideableActor");
		return ptr;
	}



};

// Class Frontiers.HighlightMaterialComponent
// 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
class UHighlightMaterialComponent : public UActorComponent
{
public:
	class UMaterialInterface*                          HighlightMaterial;                                         // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideHighlightColor;                                   // 0x00B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XVSD[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                HighlightColor;                                            // 0x00BC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZWQK[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          DeactivateMaterial;                                        // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int, struct FMeshMaterials>                   MeshMaterialTracker;                                       // 0x00D8(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.HighlightMaterialComponent");
		return ptr;
	}



	void SetVectorParameterValueOnMaterial(const struct FName& ParameterName, const struct FLinearColor& VectorVal);
	void SetupMaterials(bool bUseHighlightMat);
	void SetScalarParameterOnMaterial(const struct FName& ParameterName, float ScalarVal);
	void SetDeactivateMaterial(const struct FName& ParameterName, float ScalarVal);
};

// Class Frontiers.IconCaptureComponent
// 0x0004 (FullSize[0x0460] - InheritedSize[0x045C])
class UIconCaptureComponent : public UArrowComponent
{
public:
	unsigned char                                      UnknownData_W0E0[0x4];                                     // 0x045C(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.IconCaptureComponent");
		return ptr;
	}



};

// Class Frontiers.ItemActor
// 0x0008 (FullSize[0x0390] - InheritedSize[0x0388])
class AItemActor : public ATLActor
{
public:
	class UClass*                                      CameraRigReference;                                        // 0x0388(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ItemActor");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGotoItemModifySpawnRow
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryGotoItemModifySpawnRow : public USpawnDataEntryGotoSpawnRowBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGotoItemModifySpawnRow");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryItemModifyAddAffixByName
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USpawnDataEntryItemModifyAddAffixByName : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_VDKE[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryItemModifyAddAffixByName");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryItemModifyRemoveAffix
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USpawnDataEntryItemModifyRemoveAffix : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_SJ1N[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryItemModifyRemoveAffix");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryItemModifySetDye
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USpawnDataEntryItemModifySetDye : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_0CID[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryItemModifySetDye");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryItemModifySetDyeFromReagent
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USpawnDataEntryItemModifySetDyeFromReagent : public USpawnEntryBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryItemModifySetDyeFromReagent");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryItemModifyTransmogFromReagent
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USpawnDataEntryItemModifyTransmogFromReagent : public USpawnEntryBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryItemModifyTransmogFromReagent");
		return ptr;
	}



};

// Class Frontiers.ItemOnGround
// 0x03D0 (FullSize[0x0480] - InheritedSize[0x00B0])
class UItemOnGround : public UActorComponent
{
public:
	unsigned char                                      UnknownData_T7J7[0x14];                                    // 0x00B0(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bPickUpOnOperate;                                          // 0x00C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JEYY[0x1B];                                    // 0x00C5(0x001B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ItemDataRow;                                               // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPlayFlippy;                                               // 0x00E8(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHasFlippyAnim;                                            // 0x00E9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IP8J[0x2];                                     // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DropDelay;                                                 // 0x00EC(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FName>                               ExtraAffixes;                                              // 0x00F0(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnDoFlippy;                                                // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnDoPickedUp;                                              // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnServerDoPickedUp;                                        // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnBeginMoving;                                             // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnEndMoving;                                               // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	bool                                               bAttachQualityFX;                                          // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ENTD[0x3];                                     // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FlippyScale;                                               // 0x0154(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAnimateToDropPosition;                                    // 0x0158(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZUID[0x7];                                     // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          DropAnimationCurve;                                        // 0x0160(0x0088) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FRuntimeFloatCurve                          PickupLerpSpeedCurve;                                      // 0x01E8(0x0088) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector_NetQuantize                         SpawnOrigin;                                               // 0x0270(0x000C) (Net, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FlippyTime;                                                // 0x027C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9JCV[0x30];                                    // 0x0280(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         PickupEvent;                                               // 0x02B0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NPIC[0x8];                                     // 0x02C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectDefinition                           CraftingStartEffects;                                      // 0x02D0(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FEffectDefinition                           CraftingClaimEffects;                                      // 0x03A0(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*                    QualityEffectsComponent;                                   // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7L0I[0x8];                                     // 0x0478(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ItemOnGround");
		return ptr;
	}



	void OnRep_SpawnOrigin();
	void OnRep_ItemDataRow();
	void OnRep_ExtraAffixes();
	void ClientItemPickedUp(class AActor* Actor);
	void AutoPickup(class AActor* Activator, float Delay);
};

// Class Frontiers.CachedItemsOnGroundComponent
// 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
class UCachedItemsOnGroundComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_OW6D[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TWeakObjectPtr<class AActor>>               ItemActors;                                                // 0x00B8(0x0010) (Edit, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LS1K[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.CachedItemsOnGroundComponent");
		return ptr;
	}



};

// Class Frontiers.ItemQualityFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UItemQualityFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ItemQualityFunctionLibrary");
		return ptr;
	}



	struct FName STATIC_GetItemQuality(class UObject* WorldContextObject, const struct FInventoryItemEntry& InventoryEntry);
	class UParticleSystem* STATIC_GetItemOnGroundSelectedParticleSystem(class AActor* Actor);
	class UParticleSystem* STATIC_GetItemOnGroundParticleSystem(class AActor* Actor);
	class UClass* STATIC_GetItemOnGroundMapMarkerComponentClass(class AActor* Actor);
	struct FLinearColor STATIC_GetItemOnGroundDisplayNameColor(class AActor* Actor, const struct FLinearColor& DefaultColor);
	Frontiers_ETLPostProcessFlag STATIC_GetItemOcclusionColorIndex(class AActor* Actor);
	struct FLinearColor STATIC_GetItemDisplayNameColor(class UObject* WorldContextObject, const struct FItemData& ItemData);
};

// Class Frontiers.SpawnDataEntryGotoItemSpawnRow
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryGotoItemSpawnRow : public USpawnDataEntryGotoSpawnRowBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGotoItemSpawnRow");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddItemByName
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USpawnDataEntryAddItemByName : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_YO48[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddItemByName");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddItemByFilter
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USpawnDataEntryAddItemByFilter : public USpawnDataEntryGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddItemByFilter");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryItemAddCurrency
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USpawnDataEntryItemAddCurrency : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_YF1R[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryItemAddCurrency");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryItemAddAffix
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USpawnDataEntryItemAddAffix : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_S1GB[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryItemAddAffix");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryItemRemoveAffix
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USpawnDataEntryItemRemoveAffix : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_Q17K[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryItemRemoveAffix");
		return ptr;
	}



};

// Class Frontiers.ItemSpawner
// 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
class AItemSpawner : public AInfo
{
public:
	float                                              LootContainerDefaultLevel;                                 // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9141[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAffixTableRowHandle                        LifeBoundAffix;                                            // 0x0228(0x0010) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                              LootDropRadius;                                            // 0x0238(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       LootDropRadiusCurve;                                       // 0x023C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       SpawnDelayCurve;                                           // 0x0244(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BossItemDropDelay;                                         // 0x024C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4I9Q[0x4];                                     // 0x0250(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ItemsPerFrameLimit;                                        // 0x0254(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8CFT[0x18];                                    // 0x0258(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FItemRequest>                        QueuedRequestedItems;                                      // 0x0270(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ItemSpawner");
		return ptr;
	}



	void STATIC_SpawnItemOnGround(struct FItemRequest* ItemRequest);
	void STATIC_SetSourceActor(struct FItemRequest* ItemRequest, class AActor* SourceActor, const struct FVector& OffsetToRotate, float Radius);
	bool STATIC_GiveRandomItem(class AActor* Target, const struct FName& RowName, const struct FGameplayTagContainer& ItemTags, float ItemLevel, const struct FString& ContextString);
};

// Class Frontiers.KeyablePlayerMaterial
// 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
class UKeyablePlayerMaterial : public UActorComponent
{
public:
	TMap<struct FString, struct FDynamicMaterials>     MaterialParameterMap;                                      // 0x00B0(0x0050) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.KeyablePlayerMaterial");
		return ptr;
	}



	void SetScalarParameterOnMaterial(float Val, const struct FName& ParameterName);
};

// Class Frontiers.TLLevelStreamingDynamic
// 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
class UTLLevelStreamingDynamic : public ULevelStreamingDynamic
{
public:
	unsigned char                                      UnknownData_N46Z[0x10];                                    // 0x0150(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLLevelStreamingDynamic");
		return ptr;
	}



};

// Class Frontiers.LevelManager
// 0x0070 (FullSize[0x0120] - InheritedSize[0x00B0])
class ULevelManager : public UActorComponent
{
public:
	TMap<int, struct FTLStreamingLevelWrapper>         StreamingLevels;                                           // 0x00B0(0x0050) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7U2Z[0x20];                                    // 0x0100(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LevelManager");
		return ptr;
	}



	void OnNavigationGenerationFinished(class ANavigationData* NavData);
	void OnLevelRemoved(class ULevel* InLevel, class UWorld* InWorld);
	void OnLevelAdded(class ULevel* InLevel, class UWorld* InWorld);
};

// Class Frontiers.LevelPropActor
// 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
class ALevelPropActor : public AActor
{
public:
	bool                                               bShouldBlendWithGround;                                    // 0x0220(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MB9J[0x3];                                     // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendRange;                                                // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendBias;                                                 // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendContrast;                                             // 0x022C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   ParentBlendMaterial;                                       // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBlendTexture>                       CachedTextureParameters;                                   // 0x0238(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LevelPropActor");
		return ptr;
	}



};

// Class Frontiers.LightTintComponent
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class ULightTintComponent : public UActorComponent
{
public:
	Frontiers_ELightAccentTint                         LightTintType;                                             // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DNXY[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                LightColorOverride;                                        // 0x00B4(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V4BO[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ULightComponent*>                     LightComponents;                                           // 0x00C8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LightTintComponent");
		return ptr;
	}



};

// Class Frontiers.LightPropActor
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class ALightPropActor : public AActor
{
public:
	Frontiers_ELightAccentTint                         LightTintType;                                             // 0x0220(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X3YM[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LightPropActor");
		return ptr;
	}



};

// Class Frontiers.LevelSequenceWrapper
// 0x00B8 (FullSize[0x0168] - InheritedSize[0x00B0])
class ULevelSequenceWrapper : public UActorComponent
{
public:
	class ALevelSequenceActor*                         LevelSequence;                                             // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      VideoSequence[0x28];                                       // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TMap<struct FString, class AActor*>                SequencePossessables;                                      // 0x00E0(0x0050) (Edit, NativeAccessSpecifierPublic)
	class UClass*                                      StatusEffectClass;                                         // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                CinematicGameplayTag;                                      // 0x0138(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OverrideTimeOfDay;                                         // 0x0140(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOneTimePerPlayer;                                         // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOneTimePerCharacter;                                      // 0x0151(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOneTimeEver;                                              // 0x0152(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForAllPlayers;                                            // 0x0153(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggerOnTravel;                                          // 0x0154(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BSG6[0x3];                                     // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              ActorsThatPlayed;                                          // 0x0158(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LevelSequenceWrapper");
		return ptr;
	}



};

// Class Frontiers.PlayerLevelSequenceWrapper
// 0x0150 (FullSize[0x0200] - InheritedSize[0x00B0])
class UPlayerLevelSequenceWrapper : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_BD4J[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ALevelSequenceActor*                         ServerLevelSequence;                                       // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                         ClientLevelSequence;                                       // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      ServerVideoSequence[0x28];                                 // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      ClientVideoSequence[0x28];                                 // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UClass*                                      StatusEffectClass;                                         // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KKV1[0x10];                                    // 0x0120(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FClientLevelSequenceRequest                 PendingClientLevelSequence;                                // 0x0130(0x0040) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FServerLevelSequenceRequest                 PendingServerLevelSequence;                                // 0x0170(0x0058) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BIB9[0x38];                                    // 0x01C8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerLevelSequenceWrapper");
		return ptr;
	}



	void ServerSequenceStop();
	class ALevelSequenceActor* STATIC_PlayClientOnlyLevelSequence(class UObject* WorldContextObject, class UClass* SequenceActorClass, const struct FVector& Location, class AActor* AttachToActor);
	void ClientSequenceStop();
	void ClientSequenceStart(const struct FClientLevelSequenceRequest& Request);
};

// Class Frontiers.TLLevelSequencePlayer
// 0x0008 (FullSize[0x07A0] - InheritedSize[0x0798])
class UTLLevelSequencePlayer : public ULevelSequencePlayer
{
public:
	class AActor*                                      CharacterPlayingSequence;                                  // 0x0798(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLLevelSequencePlayer");
		return ptr;
	}



};

// Class Frontiers.CameraAnimTriggerBox
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class ACameraAnimTriggerBox : public ATriggerBox
{
public:
	class ULevelSequenceWrapper*                       LevelSequenceWrapper;                                      // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.CameraAnimTriggerBox");
		return ptr;
	}



};

// Class Frontiers.LifespanCallbacksInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULifespanCallbacksInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LifespanCallbacksInterface");
		return ptr;
	}



};

// Class Frontiers.LifetimeEventsComponent
// 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
class ULifetimeEventsComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnNearLifetimeEnd;                                         // 0x00B0(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLifespanUpdated;                                         // 0x00C0(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bUseNearLifetimeEnd;                                       // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RKFO[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NearLifetimeEndTime;                                       // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLifetimeEventsInfo                         ServerLifetimeInfo;                                        // 0x00D8(0x0008) (Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W48S[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LifetimeEventsComponent");
		return ptr;
	}



	void TimerNearLifetimeEnd();
	void OnRep_ServerLifetimeInfo();
};

// Class Frontiers.LocalPersistenceData
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class ULocalPersistenceData : public UObject
{
public:
	unsigned char                                      UnknownData_HTTN[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LocalPersistenceData");
		return ptr;
	}



};

// Class Frontiers.LocalPersistenceAccountwideData
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class ULocalPersistenceAccountwideData : public ULocalPersistenceData
{
public:
	unsigned char                                      UnknownData_AMVV[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LocalPersistenceAccountwideData");
		return ptr;
	}



};

// Class Frontiers.LocalPersistenceFortInventoryResponse
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class ULocalPersistenceFortInventoryResponse : public ULocalPersistenceData
{
public:
	unsigned char                                      UnknownData_A2TG[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LocalPersistenceFortInventoryResponse");
		return ptr;
	}



};

// Class Frontiers.LocalPersistenceInventory
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class ULocalPersistenceInventory : public ULocalPersistenceData
{
public:
	unsigned char                                      UnknownData_J0VA[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LocalPersistenceInventory");
		return ptr;
	}



};

// Class Frontiers.LocalPersistenceServerRequest
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class ULocalPersistenceServerRequest : public ULocalPersistenceData
{
public:
	unsigned char                                      UnknownData_LL3P[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LocalPersistenceServerRequest");
		return ptr;
	}



};

// Class Frontiers.LocalPersistenceQuestFile
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class ULocalPersistenceQuestFile : public ULocalPersistenceData
{
public:
	unsigned char                                      UnknownData_1QYC[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LocalPersistenceQuestFile");
		return ptr;
	}



};

// Class Frontiers.LocalPersistenceEditorOnlyAchievementData
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class ULocalPersistenceEditorOnlyAchievementData : public ULocalPersistenceData
{
public:
	unsigned char                                      UnknownData_3ZCL[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LocalPersistenceEditorOnlyAchievementData");
		return ptr;
	}



};

// Class Frontiers.TLSaveGame
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UTLSaveGame : public USaveGame
{
public:
	uint32_t                                           Version;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OZIA[0xB4];                                    // 0x002C(0x00B4) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLSaveGame");
		return ptr;
	}



};

// Class Frontiers.AccountLocalPersistence
// 0x0188 (FullSize[0x0268] - InheritedSize[0x00E0])
class UAccountLocalPersistence : public UTLSaveGame
{
public:
	unsigned char                                      UnknownData_AO5D[0x68];                                    // 0x00E0(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Accountwide;                                               // 0x0148(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AccountQuests;                                             // 0x0158(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FortInventory;                                             // 0x0168(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FortStash;                                                 // 0x0178(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SharedStashBase;                                           // 0x0188(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditorOnlyAchievements;                                    // 0x0198(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SaveGameEnvironment;                                       // 0x01A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOfflineStaticContentSave*                   StaticContent;                                             // 0x01B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FString, class ULocalPersistence*>     SaveGames;                                                 // 0x01C0(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FString, struct FCharacterSave>        CharactersById;                                            // 0x0210(0x0050) (Protected, NativeAccessSpecifierProtected)
	uint32_t                                           IdAllocator;                                               // 0x0260(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QXZH[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AccountLocalPersistence");
		return ptr;
	}



};

// Class Frontiers.LocalPersistence
// 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
class ULocalPersistence : public UTLSaveGame
{
public:
	struct FString                                     JsonString;                                                // 0x00E0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H7PV[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           LoadMarker;                                                // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           LoadCount;                                                 // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalPersistenceData*                       PendingData;                                               // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Sequence;                                                  // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EGYU[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LocalPersistence");
		return ptr;
	}



};

// Class Frontiers.LoreLineComponent
// 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
class ULoreLineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_ESHB[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bOverrideLoreLine;                                         // 0x00B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DYXA[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDialogueTableRowHandle                     LoreLine;                                                  // 0x00C0(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bOverrideThemeTags;                                        // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L586[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       OverrideThemeTags;                                         // 0x00D8(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FQuestObjectTableRowHandle>          ValidSpeakers;                                             // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              CooldownSeconds;                                           // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IH97[0x1C];                                    // 0x010C(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LoreLineComponent");
		return ptr;
	}



	void PlayLoreLine(class AActor* Actor);
	void OnOwnerOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};

// Class Frontiers.LorePlayerComponent
// 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
class ULorePlayerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_WRJA[0x38];                                    // 0x00B0(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LorePlayerComponent");
		return ptr;
	}



	void STATIC_StopPlayingLoreLine(class AActor* Actor);
	void STATIC_PlayLoreLine(class AActor* Actor, const struct FDialogueTableRowHandle& LoreLine);
};

// Class Frontiers.MainMenuEmberWeaponHolder
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class AMainMenuEmberWeaponHolder : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuEmberWeaponHolder");
		return ptr;
	}



	class USceneComponent* GetAttachComponent();
};

// Class Frontiers.MainMenuActorCoordinator
// 0x0308 (FullSize[0x0528] - InheritedSize[0x0220])
class AMainMenuActorCoordinator : public AActor
{
public:
	float                                              FadeToBlackInterruptThreshold;                             // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JHXT[0x1C];                                    // 0x0224(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FGameplayTag, class AActor*>           CharacterCreateActorLocations;                             // 0x0240(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	class AMainMenuEmberWeaponHolder*                  RelicWeaponLeft;                                           // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMainMenuEmberWeaponHolder*                  RelicWeaponRight;                                          // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMainMenuEmberWeaponHolder*                  RelicWeaponSingle;                                         // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACameraActor*                                CharacterCreateCamera;                                     // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACameraActor*                                CharacterSelectCamera;                                     // 0x02B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      CharacterLocationActor;                                    // 0x02B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      MinionLocationActor;                                       // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      FlyingMinionLocationActor;                                 // 0x02C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      FlyingMinionPerchActor;                                    // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      OffStageLocationActor;                                     // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                         IntroLevelSequenceActor;                                   // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                FramesToPlayWhenSkippingSequence;                          // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GI4V[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Frontiers_EMainMenuState, class ACameraActor*> StateCameras;                                              // 0x02F0(0x0050) (Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, class AActor*>           SequenceOverrideActors;                                    // 0x0340(0x0050) (Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      HardcoreStatus;                                            // 0x0390(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      HardcoreDeadStatus;                                        // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x03A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FName, struct FMainMenuPlayerData>     ActorMap;                                                  // 0x03A8(0x0050) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WM8G[0x110];                                   // 0x03F8(0x0110) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULevelSequencePlayer*                        CurrentlyPlayingSequence;                                  // 0x0508(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      Minion;                                                    // 0x0510(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                              EmberWeapons;                                              // 0x0518(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuActorCoordinator");
		return ptr;
	}



	void SequenceFinished();
};

// Class Frontiers.MainMenuPawn
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class AMainMenuPawn : public APawn
{
public:
	unsigned char                                      UnknownData_NV6Q[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuPawn");
		return ptr;
	}



};

// Class Frontiers.TLBasePlayerController
// 0x0050 (FullSize[0x05C0] - InheritedSize[0x0570])
class ATLBasePlayerController : public APlayerController
{
public:
	class ATLCheatRunner*                              CheatRunner;                                               // 0x0570(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XDLW[0x20];                                    // 0x0578(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CheatRunnerClass;                                          // 0x0598(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTLBaseHUD*                                  HUDWidget;                                                 // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      BotBehaviorClass;                                          // 0x05A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_64D3[0x10];                                    // 0x05B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLBasePlayerController");
		return ptr;
	}



	void ServerSpawnCheats();
	void OnRep_CheatRunner();
};

// Class Frontiers.MainMenuPlayerController
// 0x0128 (FullSize[0x06E8] - InheritedSize[0x05C0])
class AMainMenuPlayerController : public ATLBasePlayerController
{
public:
	struct FLoadingScreenRowHandle                     LoadingScreenBackground;                                   // 0x05C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UMainMenuState*                              CurrentState;                                              // 0x05D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGamePadComponent*                           GamePadComponent;                                          // 0x05D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMainMenuHUD*                                MainMenuWidget;                                            // 0x05E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      MainMenuHUDClass;                                          // 0x05E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      MainMenuStates[0x50];                                      // 0x05F0(0x0050) UNKNOWN PROPERTY: MapProperty
	Frontiers_EMainMenuState                           StartingState;                                             // 0x0640(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_EMainMenuLevel                           HostLevel;                                                 // 0x0641(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KG6J[0x6];                                     // 0x0642(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UConductorHandler*>                   ConductorHandlers;                                         // 0x0648(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                               bRequireActorCoordinator;                                  // 0x0658(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCinematicAvailable;                                       // 0x0659(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KB9D[0x6];                                     // 0x065A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      StartingAreaForTutorial[0x28];                             // 0x065A(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      StartingAreaAfterTutorial[0x28];                           // 0x0688(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      UnknownData_19VT[0x20];                                    // 0x06B0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PendingMenuStateClass;                                     // 0x06D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C1Q6[0x8];                                     // 0x06D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBulkAssetPreloader*                         Preloader;                                                 // 0x06E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuPlayerController");
		return ptr;
	}



	void ServerTravel(const struct FString& URL);
	void ClickHoveredActor();
};

// Class Frontiers.MainMenuState
// 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
class UMainMenuState : public UObject
{
public:
	struct FText                                       DisplayName;                                               // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bShowBreadcrumbs;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowMenuButton;                                           // 0x0041(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowLetterbox;                                            // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCarryOverPreviousStateWidget;                             // 0x0043(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateConductorHandles;                                   // 0x0044(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F90V[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ConductorHandlers;                                         // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bUpdateAmbience;                                           // 0x0058(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_08QA[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         AmbienceEvent;                                             // 0x0060(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUpdateMusic;                                              // 0x0078(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QHF4[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         MusicEvent;                                                // 0x0080(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUpdateBankSet;                                            // 0x0098(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NP1X[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODBanks                                  BanksToLoad;                                               // 0x00A0(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UMainMenuWidgetBase*                         Widget;                                                    // 0x00E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WidgetClass;                                               // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<Frontiers_EMainMenuState, struct FMainMenuLevelSequenceMap> IntroSequencesByPreviousState;                             // 0x00F0(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class AMainMenuPlayerController*                   PlayerController;                                          // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMainMenuActorCoordinator*                   ActorCoordinator;                                          // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZLPE[0x2];                                     // 0x0150(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_EMainMenuState                           NextStateEnum;                                             // 0x0152(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1ZRB[0x5];                                     // 0x0153(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuState");
		return ptr;
	}



	void GoBack();
};

// Class Frontiers.MainMenuStateCharacterCreate
// 0x0198 (FullSize[0x02F0] - InheritedSize[0x0158])
class UMainMenuStateCharacterCreate : public UMainMenuState
{
public:
	bool                                               bShowDeselectedPlayers;                                    // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L3TA[0x11F];                                   // 0x0159(0x011F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SkillIconsLoaded[0x50];                                    // 0x0159(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UnknownData_XHJ7[0x20];                                    // 0x02C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBulkAssetPreloader*                         Preloader;                                                 // 0x02E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateCharacterCreate");
		return ptr;
	}



	void ConfirmPet();
	void ConfirmCustomization();
	void ConfirmClass();
	bool CanChangeSkinHairColor();
	bool CanChangeGender();
};

// Class Frontiers.MainMenuStateCharacterCreatePickPet
// 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
class UMainMenuStateCharacterCreatePickPet : public UMainMenuStateCharacterCreate
{
public:
	unsigned char                                      UnknownData_O1ND[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateCharacterCreatePickPet");
		return ptr;
	}



	void SelectHighlightedPet();
};

// Class Frontiers.MainMenuStateCharacterCreateCustomizePet
// 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
class UMainMenuStateCharacterCreateCustomizePet : public UMainMenuStateCharacterCreatePickPet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateCharacterCreateCustomizePet");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateCharacterCustomizeClassSelection
// 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
class UMainMenuStateCharacterCustomizeClassSelection : public UMainMenuStateCharacterCreate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateCharacterCustomizeClassSelection");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateCharacterCreateCustomizePlayer
// 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
class UMainMenuStateCharacterCreateCustomizePlayer : public UMainMenuStateCharacterCustomizeClassSelection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateCharacterCreateCustomizePlayer");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateCharacterCreateDeploy
// 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
class UMainMenuStateCharacterCreateDeploy : public UMainMenuStateCharacterCreate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateCharacterCreateDeploy");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateCharacterCreateEmberWeapon
// 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
class UMainMenuStateCharacterCreateEmberWeapon : public UMainMenuStateCharacterCustomizeClassSelection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateCharacterCreateEmberWeapon");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateCharacterCreateLoading
// 0x0000 (FullSize[0x0158] - InheritedSize[0x0158])
class UMainMenuStateCharacterCreateLoading : public UMainMenuState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateCharacterCreateLoading");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateCharacterCreatePickClass
// 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
class UMainMenuStateCharacterCreatePickClass : public UMainMenuStateCharacterCreate
{
public:
	TArray<struct FPlayerTableRowHandle>               DefaultPlayerClasses;                                      // 0x02F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FMinionTableRowHandle>               DefaultPetClasses;                                         // 0x0300(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A5GJ[0x10];                                    // 0x0310(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateCharacterCreatePickClass");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateCharacterCreateReadyToDeploy
// 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
class UMainMenuStateCharacterCreateReadyToDeploy : public UMainMenuStateCharacterCreate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateCharacterCreateReadyToDeploy");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateCharacterCreateShowSkillTrees
// 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
class UMainMenuStateCharacterCreateShowSkillTrees : public UMainMenuStateCharacterCustomizeClassSelection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateCharacterCreateShowSkillTrees");
		return ptr;
	}



	void ContinueToNextState();
};

// Class Frontiers.MainMenuStateCharacterSelect
// 0x0048 (FullSize[0x01A0] - InheritedSize[0x0158])
class UMainMenuStateCharacterSelect : public UMainMenuState
{
public:
	unsigned char                                      UnknownData_J7TQ[0x40];                                    // 0x0158(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBulkAssetPreloader*                         Preloader;                                                 // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateCharacterSelect");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateCinematic
// 0x0028 (FullSize[0x0180] - InheritedSize[0x0158])
class UMainMenuStateCinematic : public UMainMenuState
{
public:
	unsigned char                                      IntroVideo[0x28];                                          // 0x0158(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateCinematic");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateFetchContent
// 0x0000 (FullSize[0x0158] - InheritedSize[0x0158])
class UMainMenuStateFetchContent : public UMainMenuState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateFetchContent");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateLogin
// 0x0020 (FullSize[0x0178] - InheritedSize[0x0158])
class UMainMenuStateLogin : public UMainMenuState
{
public:
	unsigned char                                      UnknownData_SYJ7[0x20];                                    // 0x0158(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateLogin");
		return ptr;
	}



	void Login();
	void Cancel();
};

// Class Frontiers.MainMenuStatePlatformSignOn
// 0x2178 (FullSize[0x22D0] - InheritedSize[0x0158])
class UMainMenuStatePlatformSignOn : public UMainMenuState
{
public:
	unsigned char                                      UnknownData_JDR5[0x8];                                     // 0x0158(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       MessageWelcome;                                            // 0x0160(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      IncorrectPlatformModalDefinition;                          // 0x0178(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      OfflineMetricsModalDefinition;                             // 0x03D8(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      CorruptSaveModalDefinition;                                // 0x0638(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoPlayUserNotFoundModalDef;                                // 0x0898(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoPlayUserNotLoggedInModalDef;                             // 0x0AF8(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoPlayAccountTypeModalDef;                                 // 0x0D58(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoPlayOnlinePlayRestrictedModalDef;                        // 0x0FB8(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoPlayAgeRestrictedModalDef;                               // 0x1218(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoPlayRequiredPatchModalDef;                               // 0x1478(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoPlayRequiredSystemUpdateModalDef;                        // 0x16D8(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoPlayChatRestrictedModalDef;                              // 0x1938(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoPlayUGCRestrictedModalDef;                               // 0x1B98(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoPlayNoNetworkModalDef;                                   // 0x1DF8(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      NoPlayGenericModalDef;                                     // 0x2058(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E0S8[0x18];                                    // 0x22B8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStatePlatformSignOn");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateTerms
// 0x0280 (FullSize[0x03D8] - InheritedSize[0x0158])
class UMainMenuStateTerms : public UMainMenuState
{
public:
	class UClass*                                      TermsOfServiceWidgetClass;                                 // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ETLTermsType                             PresentedTermsType;                                        // 0x0160(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BXSW[0x7];                                     // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FModalWidgetDefinition                      ConsoleOfflineTermsRejectedModal;                          // 0x0168(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_55XL[0x10];                                    // 0x03C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateTerms");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateTitleScreenStart
// 0x0BE0 (FullSize[0x0D38] - InheritedSize[0x0158])
class UMainMenuStateTitleScreenStart : public UMainMenuState
{
public:
	struct FModalWidgetDefinition                      ErrorModalDefinition;                                      // 0x0158(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      ConnectionLostModalDefinition;                             // 0x03B8(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      LoggedOutInactiveModalDefinition;                          // 0x0618(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      PlatformLoggedOutModalDefinition;                          // 0x0878(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      FailedSaveModalDefinition;                                 // 0x0AD8(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateTitleScreenStart");
		return ptr;
	}



};

// Class Frontiers.MainMenuStateWelcome
// 0x0060 (FullSize[0x01B8] - InheritedSize[0x0158])
class UMainMenuStateWelcome : public UMainMenuState
{
public:
	TMap<Frontiers_ETLPlatform, class UClass*>         WelcomeModalByPlatform;                                    // 0x0158(0x0050) (Edit, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I16M[0x10];                                    // 0x01A8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MainMenuStateWelcome");
		return ptr;
	}



	void ContinueToNextState();
};

// Class Frontiers.MapMarkerComponent
// 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
class UMapMarkerComponent : public UActorComponent
{
public:
	struct FMapMarker                                  MarkerData;                                                // 0x00B0(0x0048) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WTKS[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapMarkerComponent");
		return ptr;
	}



};

// Class Frontiers.MapProxy
// 0x01E0 (FullSize[0x0400] - InheritedSize[0x0220])
class AMapProxy : public AActor
{
public:
	float                                              ZoomStepSize;                                              // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinZoomFactor;                                             // 0x0224(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxZoomFactor;                                             // 0x0228(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FOVAngle;                                                  // 0x022C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                OrthoWidth;                                                // 0x0230(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MinimapOrthoWidth;                                         // 0x0234(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BorderWidth;                                               // 0x0238(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OrthoCameraDepthOffset;                                    // 0x023C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PerspCameraDepthOffset;                                    // 0x0240(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     OrthoCameraOffset;                                         // 0x0244(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     OrthoCameraRotation;                                       // 0x0250(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     PerspCameraOffset;                                         // 0x025C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     PerspCameraRotation;                                       // 0x0268(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q6JM[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextureRenderTarget2D*                      MiniMapRenderTarget;                                       // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      LargeMapRenderTarget;                                      // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      FogOfWarRenderTarget;                                      // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  FogStampCircle;                                            // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      StampColor;                                                // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StampRadius;                                               // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   MiniMapMeshMaterial;                                       // 0x02A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   AreaMapMarkerMaterial;                                     // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 AreaMapMarkerMesh;                                         // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AreaMarkerScale;                                           // 0x02B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6775[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneCaptureComponent2D*                    MinimapCaptureComp;                                        // 0x02C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneCaptureComponent2D*                    LargeMapCaptureComp;                                       // 0x02C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       OverridePawn;                                              // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LargeMapScaleFactor;                                       // 0x02D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LB2N[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  DisabledFogOfWarTexture;                                   // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMaterialInstanceDynamic*>            MapImageMaterials;                                         // 0x02E8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<int, class UStaticMeshComponent*>             MiniMapMeshComponents;                                     // 0x02F8(0x0050) (ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMapMarkerRecord>                    MapMarkers;                                                // 0x0348(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_691G[0x88];                                    // 0x0358(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    MiniMapMeshMaterialInstance;                               // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X5PJ[0x18];                                    // 0x03E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapProxy");
		return ptr;
	}



	void OnMapTilesLoaded();
};

// Class Frontiers.FogsOfWar
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UFogsOfWar : public UObject
{
public:
	class UTextureRenderTarget2D*                      FOWRenderTarget;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                                  FogStamp;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              FogStampRadius;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9VXB[0x84];                                    // 0x003C(0x0084) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.FogsOfWar");
		return ptr;
	}



};

// Class Frontiers.MapWorksEntryBase
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMapWorksEntryBase : public UObject
{
public:
	unsigned char                                      UnknownData_BKP3[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksEntryBase");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryGotoRow
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UMapWorksDataEntryGotoRow : public UMapWorksEntryBase
{
public:
	unsigned char                                      UnknownData_J7ES[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryGotoRow");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryAdjustLevel
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UMapWorksDataEntryAdjustLevel : public UMapWorksEntryBase
{
public:
	unsigned char                                      UnknownData_ALWT[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryAdjustLevel");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntrySetPropertyBase
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UMapWorksDataEntrySetPropertyBase : public UMapWorksEntryBase
{
public:
	unsigned char                                      UnknownData_Z745[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntrySetPropertyBase");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntrySetProperty
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UMapWorksDataEntrySetProperty : public UMapWorksDataEntrySetPropertyBase
{
public:
	unsigned char                                      UnknownData_E5FV[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntrySetProperty");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryAppendProperty
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UMapWorksDataEntryAppendProperty : public UMapWorksDataEntrySetProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryAppendProperty");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryGameplayTagBase
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UMapWorksDataEntryGameplayTagBase : public UMapWorksDataEntrySetPropertyBase
{
public:
	unsigned char                                      UnknownData_9PWE[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryGameplayTagBase");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntrySetGameplayTag
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UMapWorksDataEntrySetGameplayTag : public UMapWorksDataEntryGameplayTagBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntrySetGameplayTag");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntrySetGameplayTagContainer
// 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
class UMapWorksDataEntrySetGameplayTagContainer : public UMapWorksDataEntrySetPropertyBase
{
public:
	unsigned char                                      UnknownData_U86Z[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntrySetGameplayTagContainer");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryAddGameplayTag
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UMapWorksDataEntryAddGameplayTag : public UMapWorksDataEntrySetGameplayTagContainer
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryAddGameplayTag");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryRemoveGameplayTag
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UMapWorksDataEntryRemoveGameplayTag : public UMapWorksDataEntryGameplayTagBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryRemoveGameplayTag");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryRemoveStemGameplayTags
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UMapWorksDataEntryRemoveStemGameplayTags : public UMapWorksDataEntrySetGameplayTagContainer
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryRemoveStemGameplayTags");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntrySetProbabilisticGameplayTag
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UMapWorksDataEntrySetProbabilisticGameplayTag : public UMapWorksDataEntrySetPropertyBase
{
public:
	unsigned char                                      UnknownData_06IL[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntrySetProbabilisticGameplayTag");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryAddAreaChain
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UMapWorksDataEntryAddAreaChain : public UMapWorksEntryBase
{
public:
	unsigned char                                      UnknownData_MEKD[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryAddAreaChain");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryAddAreaChainByFilter
// 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
class UMapWorksDataEntryAddAreaChainByFilter : public UMapWorksEntryBase
{
public:
	unsigned char                                      UnknownData_QBVA[0x20];                                    // 0x0040(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryAddAreaChainByFilter");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryAddAffixByNameBase
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UMapWorksDataEntryAddAffixByNameBase : public UMapWorksEntryBase
{
public:
	unsigned char                                      UnknownData_LARW[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryAddAffixByNameBase");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryAddAffixByTagsBase
// 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
class UMapWorksDataEntryAddAffixByTagsBase : public UMapWorksEntryBase
{
public:
	unsigned char                                      UnknownData_YJLF[0x20];                                    // 0x0040(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryAddAffixByTagsBase");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryAddMonsterAffixByName
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UMapWorksDataEntryAddMonsterAffixByName : public UMapWorksDataEntryAddAffixByNameBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryAddMonsterAffixByName");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryAddMonsterAffixByTags
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMapWorksDataEntryAddMonsterAffixByTags : public UMapWorksDataEntryAddAffixByTagsBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryAddMonsterAffixByTags");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryAddPlayerAffixByName
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UMapWorksDataEntryAddPlayerAffixByName : public UMapWorksDataEntryAddAffixByNameBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryAddPlayerAffixByName");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryAddPlayerAffixByTags
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMapWorksDataEntryAddPlayerAffixByTags : public UMapWorksDataEntryAddAffixByTagsBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryAddPlayerAffixByTags");
		return ptr;
	}



};

// Class Frontiers.MapWorksDataEntryDebugLogProperty
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UMapWorksDataEntryDebugLogProperty : public UMapWorksEntryBase
{
public:
	unsigned char                                      UnknownData_2ONU[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksDataEntryDebugLogProperty");
		return ptr;
	}



};

// Class Frontiers.MapWorksManager
// 0x00A0 (FullSize[0x0150] - InheritedSize[0x00B0])
class UMapWorksManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData_D7KT[0x30];                                    // 0x00B0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMapWorksParams>                     AllMapWorksParams;                                         // 0x00E0(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	float                                              MaxLevel;                                                  // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LevelsPerChallengeLevel;                                   // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinChallengeLevel;                                         // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RPTM[0x54];                                    // 0x00FC(0x0054) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksManager");
		return ptr;
	}



	void OnRepMapWorksParams();
};

// Class Frontiers.MapWorksObjectComponent
// 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
class UMapWorksObjectComponent : public UActorComponent
{
public:
	TArray<struct FMapWorksSpawnEntry>                 MapWorksSpawnEntries;                                      // 0x00B0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SpokeTag;                                                  // 0x00C0(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       MapWorksObjectTags;                                        // 0x00C8(0x0020) (Edit, NativeAccessSpecifierPublic)
	bool                                               bRandomizeSpoke;                                           // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2R45[0x3];                                     // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       MapItemRowName;                                            // 0x00EC(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HJNV[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksObjectComponent");
		return ptr;
	}



	bool STATIC_QueryReplaceMapworksPortal(class AActor* Operator, const struct FInventoryItemEntry& Item);
	bool STATIC_MakePortalFromMapworksRowsAtLocation(TArray<class AActor*> Operators, TArray<struct FMapWorksTableRowHandle> MapworksRowNames, Frontiers_EPlayerPortalDestinationType DestinationType, const struct FGameplayTag& SpokeTag, const struct FVector& SpawnLocation);
	bool STATIC_MakePortalFromMapworksRows(TArray<class AActor*> Operators, TArray<struct FMapWorksTableRowHandle> MapworksRowNames, Frontiers_EPlayerPortalDestinationType DestinationType, const struct FGameplayTag& SpokeTag);
	bool STATIC_MakePortal(TArray<class AActor*> Operators, class AActor* MapWorksObjectOwner, Frontiers_EPlayerPortalDestinationType DestinationType);
	bool STATIC_MakeItemPortal(class AActor* Operator, const struct FInventoryItemEntry& Item);
};

// Class Frontiers.MapWorksGadgetComponent
// 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
class UMapWorksGadgetComponent : public UMapWorksObjectComponent
{
public:
	unsigned char                                      UnknownData_RPZA[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MapWorksGadgetComponent");
		return ptr;
	}



};

// Class Frontiers.MeshAttachmentComponent
// 0x0010 (FullSize[0x04E0] - InheritedSize[0x04D0])
class UMeshAttachmentComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_EQYM[0x10];                                    // 0x04D0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MeshAttachmentComponent");
		return ptr;
	}



	void STATIC_AttachToTarget(class AActor* Target, const struct FAttachMeshInfo& AttachmentInfo, const struct FVector& Location, const struct FRotator& Rotation);
};

// Class Frontiers.LODAutomationTargets
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class ULODAutomationTargets : public UObject
{
public:
	TArray<struct FLODAutomationTargetSetting>         Settings;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.LODAutomationTargets");
		return ptr;
	}



};

// Class Frontiers.FXSkeletalMeshComponent
// 0x0000 (FullSize[0x0ED0] - InheritedSize[0x0ED0])
class UFXSkeletalMeshComponent : public USkeletalMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.FXSkeletalMeshComponent");
		return ptr;
	}



};

// Class Frontiers.MeshShellComponent
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UMeshShellComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_9WCV[0x40];                                    // 0x00B0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USkeletalMeshComponent*>              ShellComponents;                                           // 0x00F0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UPoseableMeshComponent*>              PosableShellComponents;                                    // 0x0100(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MeshShellComponent");
		return ptr;
	}



	void SpawnShellUsingParams(const struct FMeshShellParameters& InParams);
	class UMeshShellComponent* STATIC_CreateShellOnTarget(class AActor* TargetActor);
};

// Class Frontiers.MetricsLoggerComponent
// 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
class UMetricsLoggerComponent : public UPlayerComponent
{
public:
	bool                                               bDamageClearedAfterTime;                                   // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q78K[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageRecordHistoryTime;                                   // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NearbyMonstersWhenDiedRadius;                              // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I56E[0x34];                                    // 0x00BC(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MetricsLoggerComponent");
		return ptr;
	}



	bool STATIC_HasTakenDamageSinceTime(class AActor* Owner, float SinceSecondsAgo, float AtLeastDamage);
};

// Class Frontiers.SpawnDataEntryAddMinionByName
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USpawnDataEntryAddMinionByName : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_LE5N[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddMinionByName");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddMinionByFilter
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USpawnDataEntryAddMinionByFilter : public USpawnDataEntryGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddMinionByFilter");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGotoMinionSpawnRow
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryGotoMinionSpawnRow : public USpawnDataEntryGotoSpawnRowBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGotoMinionSpawnRow");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddMinionSkillByName
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class USpawnDataEntryAddMinionSkillByName : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_24I0[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddMinionSkillByName");
		return ptr;
	}



};

// Class Frontiers.Missile
// 0x0460 (FullSize[0x0680] - InheritedSize[0x0220])
class AMissile : public AActor
{
public:
	unsigned char                                      UnknownData_MDUZ[0x18];                                    // 0x0220(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLProjectileMovementComponent*              ProjectileMovement;                                        // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleSystemComponent*>            ParticleSystems;                                           // 0x0240(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UFMODAudioComponent*>                 AudioComponents;                                           // 0x0250(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              ProjectileSpeed;                                           // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectileGravity;                                         // 0x0264(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectileLift;                                            // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectileArcHeight;                                       // 0x026C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTrajectoryUsesRotation;                                   // 0x0270(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoesAreaOfEffect;                                         // 0x0271(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RKRF[0x2];                                     // 0x0272(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageRadius;                                              // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitActors;                                                // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAreaDamageOnExpire;                                       // 0x0279(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPierceActors;                                             // 0x027A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAreaDamageOnHit;                                          // 0x027B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPierceEnvironment;                                        // 0x027C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAreaDamageOnHitEnvironment;                               // 0x027D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartSeekingOnTargetFound;                                // 0x027E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAdjustSpeedToLifeSpan;                                    // 0x027F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInteractionFilter                          InteractionFilter;                                         // 0x0280(0x00F0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsToIgnore;                                            // 0x0370(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              WorldCollisionRadius;                                      // 0x0380(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ActorCollisionRadius;                                      // 0x0384(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                            WorldCollision;                                            // 0x0388(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCapsuleComponent*                           ActorCollision;                                            // 0x0390(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YSH9[0x8];                                     // 0x0398(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectDefinition                           HitImpactEffects;                                          // 0x03A0(0x00D0) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FEffectDefinition                           AreaDamageImpactEffects;                                   // 0x0470(0x00D0) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FEffectDefinition                           ExpireImpactEffects;                                       // 0x0540(0x00D0) (Edit, Protected, NativeAccessSpecifierProtected)
	bool                                               bUseMissileOrientationForImpact;                           // 0x0610(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPlayMeleeHitOnTarget;                                     // 0x0611(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ULUO[0x6];                                     // 0x0612(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTraits*                                     Traits;                                                    // 0x0618(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkillDelegate*                              SkillDelegate;                                             // 0x0620(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2BXM[0x1];                                     // 0x0628(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_EMissileImpactMode                       ImpactMode;                                                // 0x0629(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C0GM[0x6];                                     // 0x062A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIgnoreSyncId;                                             // 0x0630(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bStickInTarget;                                            // 0x0631(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P4G6[0x6];                                     // 0x0632(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAttachMeshInfo                             AttachmentInfo;                                            // 0x0638(0x0030) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZLUT[0x18];                                    // 0x0668(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Missile");
		return ptr;
	}



	TArray<class AMissile*> STATIC_SpawnProjectiles(class USkill* Skill, class AActor* Pawn, class AActor* TargetActor, const struct FVector& TargetLocation, const struct FFireMissilesData& FireMissileData, int RandomSeed);
	void SimulateComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, bool bBlockingHit);
	void SetCollisionProfile(const struct FName& CollisionProfileName);
	void OnMissileLaunched();
	void OnMissileExploded(const struct FVector& ExplodeLocation);
	void OnMissileDidDamage(class AActor* Target);
	void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnClientMissileHit(class AActor* MissileInstigator, TArray<class AActor*> HitActors, const struct FVector& Location, const struct FRotator& Rotator, bool bAffectedArea);
	void MissileStopped();
	int GetSkillInstanceId();
	void DoHit(class AActor* Actor, bool bBlockingHit);
};

// Class Frontiers.AnimNotify_Missile
// 0x0070 (FullSize[0x00D0] - InheritedSize[0x0060])
class UAnimNotify_Missile : public USkillAnimNotify_ConfigurableActivationCost
{
public:
	struct FFireMissilesData                           FiringData;                                                // 0x0060(0x0070) (Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_Missile");
		return ptr;
	}



};

// Class Frontiers.ModalWidgetComponent
// 0x0268 (FullSize[0x0318] - InheritedSize[0x00B0])
class UModalWidgetComponent : public UActorComponent
{
public:
	struct FModalWidgetDefinition                      ConfirmationModal;                                         // 0x00B0(0x0260) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                               bOperateOnAccept;                                          // 0x0310(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K5EJ[0x7];                                     // 0x0311(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ModalWidgetComponent");
		return ptr;
	}



	void WidgetReject(class AActor* Operator);
	void WidgetAccept(class AActor* Operator);
	void ShowWidget(class AActor* Operator);
};

// Class Frontiers.ModularWeaponTemplate
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class AModularWeaponTemplate : public AActor
{
public:
	class UMaterial*                                   SourceMaterial;                                            // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TemplateParent;                                            // 0x0228(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ModularWeaponTemplate");
		return ptr;
	}



};

// Class Frontiers.MonsterChampionComponent
// 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
class UMonsterChampionComponent : public UActorComponent
{
public:
	bool                                               bShouldPlayChampionSpawnEffects;                           // 0x00B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldPlayChampionDeathEffects;                           // 0x00B1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IP1B[0x16];                                    // 0x00B2(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TWeakObjectPtr<class AActor>>               PackMembers;                                               // 0x00C8(0x0010) (Net, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	int                                                PendingCount;                                              // 0x00D8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_EMonsterSpawnType                        MonsterSpawnType;                                          // 0x00DC(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JWKU[0x3];                                     // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ChampionNameString;                                        // 0x00E0(0x0010) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     ChampionPackNameString;                                    // 0x00F0(0x0010) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9K9H[0x18];                                    // 0x0100(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterChampionComponent");
		return ptr;
	}



	void STATIC_RemoveMonsterFromChampionPack(class AActor* Monster);
	void OnOwnerDied(class APawn* Dying, class AActor* Attacker);
	void STATIC_MakeIntoChampionWithAffixes(class AActor* Monster, Frontiers_EMonsterSpawnType MonsterSpawnType, TArray<struct FMonsterAffixTableRowHandle> Affixes, bool bPlaySpawnEffects, bool bPlayDeathEffects);
	TArray<struct FMonsterAffixTableRowHandle> GetSelectedAffixes();
	int GetPackSize();
	int GetNumAliveInPack(bool bSameSpawnType);
	Frontiers_EMonsterSpawnType STATIC_GetMonsterType(class AActor* Monster);
	class UMonsterChampionComponent* STATIC_GetMonsterChampionComponent(class AActor* Actor);
	TArray<class AActor*> GetLivingPackMembers();
	void AddNewMonsterToPack(class AActor* Monster, Frontiers_EMonsterSpawnType MonsterSpawnType, TArray<struct FMonsterAffixTableRowHandle> IgnoredAffixes, bool bReplace, bool bPlaySpawnEffects, bool bPlayDeathEffects);
};

// Class Frontiers.MonsterManagerPlayerComponent
// 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
class UMonsterManagerPlayerComponent : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_I9S6[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Drama;                                                     // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMonsterManagerState                     State;                                                     // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WS05[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeStateStarted;                                          // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PeakDrama;                                                 // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6ESX[0xC];                                     // 0x00C8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StateLengthsInSeconds[0x4];                                // 0x00D4(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2NMZ[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterManagerPlayerComponent");
		return ptr;
	}



	void PreHandleComponent();
	void PostHandleComponent();
};

// Class Frontiers.MonsterManagerComponent
// 0x0128 (FullSize[0x01D8] - InheritedSize[0x00B0])
class UMonsterManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_QYNT[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ChampionComponentClass;                                    // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnerActiveChance;                                       // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultMonsterLevel;                                       // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerCountRange;                                          // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChampionSpawnerSearchRadiusCm;                             // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChampionSpawnerCooldown;                                   // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YA4J[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMonsterSpawnTypeTuning>             MonsterSpawnTypeTuningGroups;                              // 0x00D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int                                                RelaxAfterDramaIsBelow;                                    // 0x00E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MonsterSpawnerMaxDistance;                                 // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MonsterSpawnerMinDistance;                                 // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DespawnDistance;                                           // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MonsterOffscreenDistance;                                  // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MonsterDramaDistance;                                      // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefaultMonsterDrama;                                       // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefaultMonsterAudioDrama;                                  // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DeadMonsterDramaMultiplier;                                // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ChampionMonsterDramaMultiplier;                            // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SpawnerRefillDelayInSeconds;                               // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MonstersPerFrameLimit;                                     // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G3U0[0xC0];                                    // 0x0118(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterManagerComponent");
		return ptr;
	}



	void STATIC_TriggerNearbySpawners(class AActor* ReferenceActor, class UClass* MonsterSpawnerClass, float Radius, bool bAllSpawnersInArea);
	void STATIC_ForceActivateNearbySpawners(class AActor* ReferenceActor, class UClass* MonsterSpawnerClass, float Radius, bool bAllSpawnersInArea);
	void STATIC_EmptyPendingMonstersNearby(class AActor* ReferenceActor, class UClass* MonsterSpawnerClass, float Radius, bool bAllSpawnersInArea);
};

// Class Frontiers.MonsterSpawnComponentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMonsterSpawnComponentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterSpawnComponentInterface");
		return ptr;
	}



};

// Class Frontiers.MonsterSpawnSkillTargetComponent
// 0x0014 (FullSize[0x0470] - InheritedSize[0x045C])
class UMonsterSpawnSkillTargetComponent : public UArrowComponent
{
public:
	int                                                MaxUses;                                                   // 0x045C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_13KW[0x4];                                     // 0x0460(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Weight;                                                    // 0x0464(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SHXR[0x8];                                     // 0x0468(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterSpawnSkillTargetComponent");
		return ptr;
	}



};

// Class Frontiers.MonsterSpawnSphere
// 0x0030 (FullSize[0x0490] - InheritedSize[0x0460])
class UMonsterSpawnSphere : public USphereComponent
{
public:
	unsigned char                                      UnknownData_MW5O[0x10];                                    // 0x0460(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMonsterSpawnComponentData                  Data;                                                      // 0x0470(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M2FS[0x8];                                     // 0x0488(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterSpawnSphere");
		return ptr;
	}



};

// Class Frontiers.MonsterSpawnBox
// 0x0020 (FullSize[0x0490] - InheritedSize[0x0470])
class UMonsterSpawnBox : public UBoxComponent
{
public:
	unsigned char                                      UnknownData_6WWZ[0x8];                                     // 0x0470(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMonsterSpawnComponentData                  Data;                                                      // 0x0478(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterSpawnBox");
		return ptr;
	}



};

// Class Frontiers.MonsterSpawnPosition
// 0x0024 (FullSize[0x0480] - InheritedSize[0x045C])
class UMonsterSpawnPosition : public UArrowComponent
{
public:
	unsigned char                                      UnknownData_ED95[0x4];                                     // 0x045C(0x0004) Fix Super Size
	unsigned char                                      UnknownData_60YD[0x8];                                     // 0x0460(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMonsterSpawnComponentData                  Data;                                                      // 0x0468(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterSpawnPosition");
		return ptr;
	}



};

// Class Frontiers.GotoMonsterSpawnRow
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UGotoMonsterSpawnRow : public USpawnDataEntryGotoSpawnRowBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.GotoMonsterSpawnRow");
		return ptr;
	}



};

// Class Frontiers.SetMonsterPackSize
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USetMonsterPackSize : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_QGRU[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SetMonsterPackSize");
		return ptr;
	}



};

// Class Frontiers.SetMonsterPackSizeDirect
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USetMonsterPackSizeDirect : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_CDFB[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SetMonsterPackSizeDirect");
		return ptr;
	}



};

// Class Frontiers.SetMonsterChampions
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USetMonsterChampions : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_QW6E[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SetMonsterChampions");
		return ptr;
	}



};

// Class Frontiers.AddMonsterByFilter
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UAddMonsterByFilter : public USpawnDataEntryGameplayTags
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AddMonsterByFilter");
		return ptr;
	}



};

// Class Frontiers.AddMonsterByName
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAddMonsterByName : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_76K0[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AddMonsterByName");
		return ptr;
	}



};

// Class Frontiers.AddChampionMonsterByName
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UAddChampionMonsterByName : public UAddMonsterByName
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AddChampionMonsterByName");
		return ptr;
	}



};

// Class Frontiers.IncrementMonsterPackSize
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UIncrementMonsterPackSize : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_UVRA[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.IncrementMonsterPackSize");
		return ptr;
	}



};

// Class Frontiers.MonsterSpawner
// 0x00F0 (FullSize[0x0310] - InheritedSize[0x0220])
class AMonsterSpawner : public AActor
{
public:
	unsigned char                                      UnknownData_Q8BL[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bSpawnEnabled;                                             // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysRollAsActive;                                       // 0x0229(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HR9Q[0x2];                                     // 0x022A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ActiveChance;                                              // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideMinDistance;                                      // 0x0230(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VFDT[0x3];                                     // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDistanceOverride;                                       // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMonsterSpawnEntry>                  MonsterSpawnEntries;                                       // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bUseFallbackSpawnSkills;                                   // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVerifyNavMeshBeforeSpawning;                              // 0x0249(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreSpawnCollision;                                     // 0x024A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QZ9W[0x1];                                     // 0x024B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RespawnAtLivingMonsterPercent;                             // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMonsterSpawned;                                          // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0260(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                               bUnlimitedRespawns;                                        // 0x0280(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VBD7[0x3];                                     // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Respawns;                                                  // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I3J6[0x4];                                     // 0x0288(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinSpawnInterval;                                          // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxSpawnInterval;                                          // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MinBatchSize;                                              // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxBatchSize;                                              // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PacksPerSpawnRequest;                                      // 0x029C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAllowChampions;                                           // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8GJQ[0x7];                                     // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTagContainerAll;                                   // 0x02A8(0x0020) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              StatusEffectsToApply;                                      // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LNDS[0x38];                                    // 0x02D8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterSpawner");
		return ptr;
	}



	class AActor* STATIC_SpawnMonsterNear(class AActor* Pawn, const struct FMonstersTableRowHandle& TableRow, const struct FVector& LocationIn, float AcceptanceRadius, float Level, bool bChampion, bool bPawnIsOwner, Frontiers_ESkillSlot SpawnSkillSlot, bool bInIgnoreSpawnCollision);
	void STATIC_SpawnMonster(class AActor* Pawn, const struct FMonsterSpawnRequest& Request, const struct FMonstersTableRowHandle& TableRow);
	void OnMonsterCountChanged(int Count);
	void OnAllMonstersKilled();
};

// Class Frontiers.MonsterSpawnerDeactivator
// 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
class AMonsterSpawnerDeactivator : public ATriggerBox
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterSpawnerDeactivator");
		return ptr;
	}



};

// Class Frontiers.MonsterSpawnerActivator
// 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
class AMonsterSpawnerActivator : public ATriggerBox
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterSpawnerActivator");
		return ptr;
	}



};

// Class Frontiers.MonsterSpawnerBoss
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class UMonsterSpawnerBoss : public UActorComponent
{
public:
	class UClass*                                      WarpBackStatusEffect;                                      // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseBossRowHandle;                                         // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VM3A[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBossTableRowHandle                         BossRowHandle;                                             // 0x00C0(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	int                                                BossIndexInAreaTable;                                      // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RENP[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterSpawnerBoss");
		return ptr;
	}



	void OnMonsterSpawned(class AActor* Actor);
};

// Class Frontiers.MonsterSpawnerTrigger
// 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
class UMonsterSpawnerTrigger : public USceneComponent
{
public:
	unsigned char                                      UnknownData_SXW0[0x4];                                     // 0x01F8(0x0004) Fix Super Size
	float                                              DelayToReset;                                              // 0x01FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5DCN[0x10];                                    // 0x0200(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterSpawnerTrigger");
		return ptr;
	}



	void ResetTrigger();
	void OnOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class Frontiers.MonsterSpawnerTriggerByOperate
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UMonsterSpawnerTriggerByOperate : public UActorComponent
{
public:
	unsigned char                                      UnknownData_HDSP[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AMonsterSpawner*>                     MonsterSpawners;                                           // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MonsterSpawnerTriggerByOperate");
		return ptr;
	}



};

// Class Frontiers.MulticastFunctionComponent
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMulticastFunctionComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MulticastFunctionComponent");
		return ptr;
	}



	void UpdateGadgetState(class AGadget* Gadget, uint64_t ObserverId, bool bInCanBeOperated, int InOperationalStatus);
	void UpdateAreaQuestStatus(class UAreaQuestComponent* Component, const struct FQuestInstanceDataMsg& Msg);
	void UpdateAreaQuestCompleteStatus(class UAreaQuestComponent* Component, const struct FQuestInstanceDataCompletedMsg& Msg);
	void TrapTriggered(class UTrapComponent* TrapComponent, class AActor* TriggeredBy, float Delay);
	void StartSkill(class USkillManager* SkillManager, const struct FSkillReplicationData& SkillActiveData);
	void StartSecondarySkill(class USkillManager* SkillManager, class UClass* SkillClass, class AActor* TargetActor, const struct FVector_NetQuantize10& TargetLocation, Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set, int SkillInstanceId);
	void RootMotionEndedOnServer(class AActor* Actor);
	void PlayTLEffectAttached(class AActor* EffectOwner, class UClass* EffectTemplate, const struct FName& AttachPoint, TEnumAsByte<Engine_EAttachLocation> AttachLocationType, const struct FVector_NetQuantize10& Offset, float LifeSpan, float ScaleMultiplier, Frontiers_EVFXScaleMethod ScaleMethod, bool bUseLegacyScale);
	void PlayTLEffectAtLocation(class AActor* EffectOwner, class UClass* EffectTemplate, const struct FVector_NetQuantize10& Location, float LifeSpan, float ScaleMultiplier, Frontiers_EVFXScaleMethod ScaleMethod, bool bUseLegacyScale);
	void PlaySkillDamageEffectWithNumbers(class UTLCombatActorComponent* CombatFX, class APawn* Instigator, const struct FVector2D_NetQuantizeDirection& DirectionOfAttackNormalized, Frontiers_ECombatFxElementType Element, class USkill* Skill, bool bIsCritical, bool bIsLethal, bool bIsOverkill, int Damage);
	void PlaySkillDamageEffect(class UTLCombatActorComponent* CombatFX, class APawn* Instigator, const struct FVector2D_NetQuantizeDirection& DirectionOfAttackNormalized, Frontiers_ECombatFxElementType Element, class USkill* Skill, bool bIsCritical, bool bIsLethal, bool bIsOverkill);
	void PlayRecoverHealthEffect(class UTLCombatActorComponent* CombatFX, class AActor* Instigator, class AActor* Target);
	void PlayEffectAttached(class AActor* EffectOwner, class AActor* Instigator, class UParticleSystem* EffectTemplate, const struct FFMODEventReference& EventReference, const struct FName& AttachPoint, TEnumAsByte<Engine_EAttachLocation> AttachLocationType, const struct FVector_NetQuantize10& Offset, float ScaleMultiplier, Frontiers_EVFXScaleMethod ScaleMethod, bool bUseLegacyScale);
	void PlayEffectAtLocation(class AActor* EffectOwner, class AActor* Instigator, class UParticleSystem* EffectTemplate, const struct FFMODEventReference& EventReference, const struct FVector_NetQuantize10& Location, const struct FRotator_NetQuantizeByte& Rotation, float ScaleMultiplier, Frontiers_EVFXScaleMethod ScaleMethod, bool bUseLegacyScale);
	void PlayDamageEffectWithNumbers(class UTLCombatActorComponent* CombatFX, class APawn* Instigator, const struct FVector2D_NetQuantizeDirection& DirectionOfAttackNormalized, Frontiers_ECombatFxElementType Element, bool bIsCritical, bool bIsLethal, bool bIsOverkill, int Damage);
	void PlayDamageEffect(class UTLCombatActorComponent* CombatFX, class APawn* Instigator, const struct FVector2D_NetQuantizeDirection& DirectionOfAttackNormalized, Frontiers_ECombatFxElementType Element, bool bIsCritical, bool bIsLethal, bool bIsOverkill);
	void PlayDamageAvoidedEffect(class UTLCombatActorComponent* CombatFX, class AActor* Instigator, const struct FVector2D_NetQuantizeDirection& DirectionOfAttackNormalized, Frontiers_ECombatWidgetNotifyType NotifyType);
	void MissileStoppedOnServer(class AActor* Actor, class AActor* MissileInstigator, class UClass* MissileClass, const struct FVector_NetQuantize& Location, const struct FRotator_NetQuantizeByte& Rotator, uint32_t SyncId, bool bExpired, bool bHitSomething, class AActor* HitActor);
	void MissileHitOnServer(class AActor* Actor, class AActor* MissileInstigator, class UClass* MissileClass, TArray<class AActor*> HitActors, const struct FVector_NetQuantize& Location, const struct FRotator_NetQuantizeByte& Rotator, bool bExploded);
	void MissileFoundTargetOnServer(class AActor* Actor, uint32_t SyncId, class AActor* Target);
	void EndRootMotionForce(class AActor* Actor, class USkill* Skill);
	void EndPortalSkillAnimation(class AActor* Actor);
	void ApplyRadialRootMotionForce(class AActor* Pawn, class USkill* Skill, const struct FVector_NetQuantize& Origin, float Radius, float Speed, float Duration, bool bIsPush);
};

// Class Frontiers.SpawnDataEntryGotoNameSpawnRow
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryGotoNameSpawnRow : public USpawnDataEntryGotoSpawnRowBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGotoNameSpawnRow");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGotoNameSpawnRowByPackSize
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class USpawnDataEntryGotoNameSpawnRowByPackSize : public USpawnDataEntryGotoNameSpawnRow
{
public:
	unsigned char                                      UnknownData_OU75[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGotoNameSpawnRowByPackSize");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntrySetNameParameter
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class USpawnDataEntrySetNameParameter : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_15KV[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntrySetNameParameter");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryInitializeName
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USpawnDataEntryInitializeName : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_NJ8H[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryInitializeName");
		return ptr;
	}



};

// Class Frontiers.NarratorComponent
// 0x00A0 (FullSize[0x0150] - InheritedSize[0x00B0])
class UNarratorComponent : public UActorComponent
{
public:
	TArray<struct FNarratorQuipGroup>                  QuipGroups;                                                // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                              QuipTriggerDelaySeconds;                                   // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7D5G[0x8C];                                    // 0x00C4(0x008C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.NarratorComponent");
		return ptr;
	}



	void STATIC_TriggerQuip(class AActor* Actor, Frontiers_ENarratorQuip Quip);
	Frontiers_ENarratorQuip STATIC_ParseNarratorQuip(const struct FName& QuipName);
};

// Class Frontiers.ActorPoolComponent
// 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
class UActorPoolComponent : public UActorComponent
{
public:
	TMap<struct FName, struct FActorPool>              ActorPoolsByClass;                                         // 0x00B0(0x0050) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_92OM[0x28];                                    // 0x0100(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ActorPoolComponent");
		return ptr;
	}



};

// Class Frontiers.OfflineStaticContentSave
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UOfflineStaticContentSave : public USaveGame
{
public:
	int                                                ContentVersion;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WL5U[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               DownloadedContent;                                         // 0x0030(0x0050) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8DPP[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.OfflineStaticContentSave");
		return ptr;
	}



};

// Class Frontiers.OperableComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UOperableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_GAYG[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsEnabled;                                                // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsAutoOperateEnabled;                                     // 0x00B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0RED[0x6];                                     // 0x00BA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.OperableComponent");
		return ptr;
	}



	void OnOperateClient(class AActor* Operator);
	void OnOperate(class AActor* Operator);
	bool IsActorOperable(class AActor* Operator);
	void Enable();
	void Disable();
	void ClientOperate(class AActor* Operator);
};

// Class Frontiers.PartyComponent
// 0x0140 (FullSize[0x01F0] - InheritedSize[0x00B0])
class UPartyComponent : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_R56K[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PartyInviteToastClass;                                     // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      NearbyPartyMemberStatusClass;                              // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      PartyInstanceResetToastClass;                              // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FParty                                      Party;                                                     // 0x00D8(0x0030) (Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint64_t                                           PartyIdHash;                                               // 0x0108(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O2VO[0x18];                                    // 0x0110(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPartyInvite>                        PendingInvites;                                            // 0x0128(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SS59[0xB8];                                    // 0x0138(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PartyComponent");
		return ptr;
	}



	void ServerUpdateBlockedPartyMemberTLAccountIds(TArray<struct FString> InBlockedPartyMemberTLAccountIds);
	void ServerSendInstanceResetRequest();
	void ServerSendInstanceResetNotification(TArray<struct FPartyMember> KickedPartyMembers);
	void ServerRespondToInvite(const struct FString& InviterId, Frontiers_EPartyStatusUpdate Status);
	void ServerKickPartyMember(const struct FString& MemberId);
	void ServerJoinSession(const struct FString& ToJoinPlatformAccountId, const struct FString& ToJoinPlatformAccountName);
	void ServerInvitePartyMember(const struct FString& ToInvitePlatformAccountId, const struct FString& ToInvitePlatformAccountName);
	void ServerDoPartyInstanceReset();
	void ServerCanAcceptJoiningPlayerResponse(bool bCanAccept, const struct FJoinSessionEvent& JoinSessionEvent, int RequestID);
	void ServerAcceptInstanceResetRequest(const struct FString& TravelToArea);
	void OnRep_PendingInvites(TArray<struct FPartyInvite> OldPendingInvites);
	void OnRep_Party(const struct FParty& OldParty);
	void ClientShowInstanceResetNotification(TArray<struct FString> KickedMemberNames);
	void ClientReceiveMemberStatusUpdate(const struct FString& MemberPlatformAccountName, const struct FString& MemberTLAccountId, Frontiers_EPartyStatusUpdate Status);
	void ClientReceiveInstanceResetRequest(const struct FPartyInstanceResetRequest& PartyInstanceResetRequest);
	void ClientLeavingPartyInstance();
	void ClientJoinSessionProcessResult(const struct FJoinSessionResultEvent& JoinSessionResultEvent);
	void ClientCanAcceptJoiningPlayer(const struct FJoinSessionEvent& JoinSessionEvent, int RequestID);
};

// Class Frontiers.PBRSwatch
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UPBRSwatch : public UObject
{
public:
	class UTexture2D*                                  MaterialSwatch;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PBRSwatch");
		return ptr;
	}



};

// Class Frontiers.PerPlayerActorNode
// 0x0048 (FullSize[0x0268] - InheritedSize[0x0220])
class APerPlayerActorNode : public AActor
{
public:
	unsigned char                                      UnknownData_IGWA[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              PerPlayerActors;                                           // 0x0228(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              ActorClassEntries;                                         // 0x0238(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       OwnedGameplayTags;                                         // 0x0248(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PerPlayerActorNode");
		return ptr;
	}



};

// Class Frontiers.PersistenceServerComm
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPersistenceServerComm : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PersistenceServerComm");
		return ptr;
	}



	void STATIC_DisableCharacterPersistence();
};

// Class Frontiers.PersistentEffectsActor
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class APersistentEffectsActor : public AActor
{
public:
	unsigned char                                      UnknownData_ISL2[0x10];                                    // 0x0220(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PersistentEffectsActor");
		return ptr;
	}



	void OnSystemFinished(class UParticleSystemComponent* PSComponent);
	void OnAttachParentDestroyed(class AActor* Parent);
	class APersistentEffectsActor* STATIC_CreatePersistentParticles(class UParticleSystem* EmitterTemplate, class AActor* AttachToActor, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bAutoDestroy, const struct FVector& Scale3D);
};

// Class Frontiers.PetSpawnOperableComponent
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UPetSpawnOperableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_CZSC[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMinionSpawnEntry                           PetSpawnEntry;                                             // 0x00B8(0x0038) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       SpawnTags;                                                 // 0x00F0(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PetSpawnOperableComponent");
		return ptr;
	}



};

// Class Frontiers.Photobooth
// 0x0010 (FullSize[0x03A0] - InheritedSize[0x0390])
class APhotobooth : public AItemActor
{
public:
	class UTextureRenderTarget2D*                      PortraitRenderTarget;                                      // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   PortraitRenderMaterial;                                    // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Photobooth");
		return ptr;
	}



	class USkeletalMeshComponent* GetMesh();
	class UArrowComponent* GetIconCaptureLocator();
};

// Class Frontiers.PlatformComponent
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UPlatformComponent : public UPlayerComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlatformComponent");
		return ptr;
	}



};

// Class Frontiers.PlayerAffixComponent
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UPlayerAffixComponent : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_8I0W[0x18];                                    // 0x00B0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerAffixComponent");
		return ptr;
	}



	void OnPlayerRevived_Delegate(class APawn* Revived);
};

// Class Frontiers.PlayerBotBehaviorComponent
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class UPlayerBotBehaviorComponent : public UPlayerComponent
{
public:
	TWeakObjectPtr<class AAIController>                BotController;                                             // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ServerBotController;                                       // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ClientBotController;                                       // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                               ServerBotBehavior;                                         // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBehaviorTree*                               ClientBotBehavior;                                         // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerBotBehaviorComponent");
		return ptr;
	}



	class UBehaviorTree* STATIC_GetServerBotBehavior(class APlayerController* PlayerController);
	class UBehaviorTree* STATIC_GetClientBotBehavior(class APlayerController* PlayerController);
};

// Class Frontiers.NameDataComponent
// 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
class UNameDataComponent : public UActorComponent
{
public:
	struct FText                                       DisplayName;                                               // 0x00B0(0x0018) (Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	struct FText                                       Description;                                               // 0x00C8(0x0018) (Net, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_540M[0x18];                                    // 0x00E0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.NameDataComponent");
		return ptr;
	}



	void OnRep_DisplayName();
};

// Class Frontiers.PlayerCharacterDataComponent
// 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
class UPlayerCharacterDataComponent : public UNameDataComponent
{
public:
	struct FText                                       AccountName;                                               // 0x00F8(0x0018) (Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6Y9O[0x18];                                    // 0x0110(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerCharacterDataComponent");
		return ptr;
	}



	void OnRep_AccountName();
};

// Class Frontiers.PlayerCraftingComponent
// 0x0550 (FullSize[0x0600] - InheritedSize[0x00B0])
class UPlayerCraftingComponent : public UPlayerComponent
{
public:
	struct FModalWidgetDefinition                      CraftingResultsModalDefinition;                            // 0x00B0(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModalWidgetDefinition                      CraftingResultsToastDefinition;                            // 0x0310(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FCraftingQueue>          CraftingQueues;                                            // 0x0570(0x0050) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ATIS[0x30];                                    // 0x05C0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        SeenUnlockableRecipeIndices;                               // 0x05F0(0x0010) (Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerCraftingComponent");
		return ptr;
	}



	void ServerSacrificeItem(const struct FCraftingRequest& Request);
	void ServerMarkRecipeSeen(int RecipeIndex);
	void ServerDisenchantItem(const struct FCraftingRequest& Request);
	void ServerCraftingRequest(const struct FCraftingRequest& Request);
	void ServerClaim(const struct FName& QueueName, const struct FString& JobId);
	void ClientStartCraftingEntry(const struct FName& QueueName, const struct FCraftingQueueEntry& InEntry);
	void ClientCraftingCompleted(Frontiers_ECraftingResult Result, const struct FCraftingRequest& Request);
	void ClientClaimCraftingEntry(const struct FName& QueueName, const struct FString& JobId);
};

// Class Frontiers.PlayerDialogueComponent
// 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
class UPlayerDialogueComponent : public UPlayerComponent
{
public:
	class UClass*                                      BubbleDialogueClass;                                       // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ModalDialogueWidgetClass;                                  // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      QuestOfferedDialogueWidgetClass;                           // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9SRK[0x60];                                    // 0x00C8(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerDialogueComponent");
		return ptr;
	}



	void ClientStartQuestDialogue(const struct FName& QuestId, const struct FName& TaskId, class AActor* SpeakerActor);
	void ClientStartModalDialogue(const struct FName& DialogueRowName, class AActor* SpeakerActor);
	void ClientStartBubbleDialogue(class AActor* SpeakerActor);
};

// Class Frontiers.PlayerLevelComponent
// 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
class UPlayerLevelComponent : public UPlayerComponent
{
public:
	struct FString                                     SkillRegretLevels;                                         // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      LevelUpSkill[0x28];                                        // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftClassProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerLevelComponent");
		return ptr;
	}



};

// Class Frontiers.PlayerLevelManagerComponent
// 0x00D0 (FullSize[0x0180] - InheritedSize[0x00B0])
class UPlayerLevelManagerComponent : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_VOR4[0xA0];                                    // 0x00B0(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InnerLoadRadius;                                           // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LoadRadius;                                                // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              UnloadRadius;                                              // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NOOK[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       AreaGuid;                                                  // 0x0160(0x0010) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SPTR[0x10];                                    // 0x0170(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerLevelManagerComponent");
		return ptr;
	}



	void ClientLearnLevels(const struct FGuid& NewAreaGuid, TArray<struct FDRLGLevelInstance> NewLevels);
	void ClientForgetLevels(const struct FGuid& OldAreaGuid, TArray<struct FDRLGLevelInstance> OldLevels);
};

// Class Frontiers.PlayerLight
// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
class APlayerLight : public AActor
{
public:
	float                                              TODPlayerLightIntensity;                                   // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    StaticLightDirection;                                      // 0x0224(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              GroundLightDistance;                                       // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeOfDayPercent;                                          // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerLight");
		return ptr;
	}



};

// Class Frontiers.PlayerPortalComponent
// 0x0168 (FullSize[0x0218] - InheritedSize[0x00B0])
class UPlayerPortalComponent : public UPlayerComponent
{
public:
	struct FName                                       OwnPortalAreaDataName;                                     // 0x00B0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       OwnPortalSpawnLocationName;                                // 0x00B8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     OwnPortalZoneId;                                           // 0x00C0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     OwnPortalZoneSessionId;                                    // 0x00D0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       PortalReturnAreaDataName;                                  // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       PortalReturnSpawnLocationName;                             // 0x00E8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     PortalReturnOwnerName;                                     // 0x00F0(0x0010) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FName>                               WaypointAreaDataNames;                                     // 0x0100(0x0010) (Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bHasMapWorksPortal;                                        // 0x0110(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DH11[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMapWorksParams                             SavedMapworksParams;                                       // 0x0118(0x00A8) (Net, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      PortalClass;                                               // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      MapWorksPortalClass;                                       // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      EndlessDungeonPortalClass;                                 // 0x01D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      WaypointActorClass;                                        // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPlayerPortalDestination>            Destinations;                                              // 0x01E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P3F7[0x18];                                    // 0x01F0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PortalSpawnDistance;                                       // 0x0208(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxWaypointDistance;                                       // 0x020C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PortalToPartyMemberMinDistance;                            // 0x0210(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_URPC[0x4];                                     // 0x0214(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerPortalComponent");
		return ptr;
	}



	class APortalProxy* SpawnPortal();
	void ServerSetPortalDestination(Frontiers_EPlayerPortalDestinationType Destination, int BindIndex, const struct FString& OtherPlayerAccountId);
	void ServerRequestReplaceMapworksPortalProxyFromItem(int InventoryEntryId);
	void ServerRequestImmediateTravelTo(Frontiers_EPlayerPortalDestinationType Destination, int BindIndex, class AActor* GadgetInUse);
	void ServerCancelPortalSkill();
	bool STATIC_IsWaypointUnlocked(class AActor* Waypoint, class AActor* Player);
	bool IsWaypointBoundToCurrentArea();
	bool IsWaypointBoundToArea(const struct FName& AreaName);
	bool IsWaypointBound();
	bool STATIC_HasMapWorksPortal(class AActor* Actor);
	bool HasAvailableDestinationFromList(TArray<Frontiers_EPlayerPortalDestinationType> InDestinations);
	class UPlayerPortalComponent* STATIC_GetPlayerPortalComponent(class AActor* Actor);
	TArray<struct FPlayerPortalDestination> GetDestinations();
	void BindWaypointToCurrentArea();
	void BindWaypointToArea(const struct FName& AreaName);
	void AttemptTravel(class APawn* Pawn, class AActor* GadgetInUse);
};

// Class Frontiers.PlayerQuestComponent
// 0x00D0 (FullSize[0x02B8] - InheritedSize[0x01E8])
class UPlayerQuestComponent : public UQuestUpdater
{
public:
	unsigned char                                      UnknownData_EWET[0x10];                                    // 0x01E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      MapMarkerClass;                                            // 0x01F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RateLimitDelay;                                            // 0x0200(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QG5B[0x4];                                     // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      QuestRewardsChestClass;                                    // 0x0208(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       ForcedPlayerRespecNotifyQuest;                             // 0x0210(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AOVO[0xA0];                                    // 0x0218(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerQuestComponent");
		return ptr;
	}



	void SpawnQuestRewards(class AActor* SourceActor, const struct FName& QuestId);
	void ServerSetPinned(const struct FName& QuestId, bool bIsPinned);
	void ServerSeeBoss(class AActor* Boss);
	void ServerConfirmQuestRewardChoice(const struct FName& QuestId, const struct FName& TaskId, int RewardIndex, class AActor* Target);
	void ServerConfirmQuestDialogue(const struct FName& QuestId, const struct FName& TaskId, class AActor* Target);
	void ServerAcceptQuestOffer(const struct FName& QuestId);
	void ClientUpdateQuestStatusToPlayer(const struct FQuestInstanceDataMsg& Msg);
	void ClientUpdateQuestCompletedToPlayer(const struct FQuestInstanceDataCompletedMsg& Msg);
	void ClientUpdateAchievementProgressToPlayer(const struct FAchievementQuestProgressMsg& Msg);
	void ClientUpdateAchievementCompletedToPlayer(const struct FAchievementQuestCompletedMsg& Msg);
	void ClientPlayRandomLoreLine(const struct FGameplayTagContainer& GameplayTags);
	void ClientPlayLoreLine(const struct FDialogueTableRowHandle& DialogueRowHandle);
	void ClientOnQuestAdded(const struct FName& QuestId);
	void ClientAddWidgetToHUDFullscreen(class UClass* Widget);
};

// Class Frontiers.PlayerSaveComponent
// 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
class UPlayerSaveComponent : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_FVL2[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SaveTimeSeconds;                                           // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A9CN[0x34];                                    // 0x00C4(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.PlayerSaveComponent");
		return ptr;
	}



	void NextTickSaveTimer();
	void NextConvenientSaveTimer();
};

// Class Frontiers.QuestManager
// 0x0188 (FullSize[0x0238] - InheritedSize[0x00B0])
class UQuestManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData_6OCW[0x178];                                   // 0x00B0(0x0178) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FQuestDefinition>                    QuestDefArray;                                             // 0x0228(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.QuestManager");
		return ptr;
	}



};

// Class Frontiers.QuestIndicatorComponent
// 0x0020 (FullSize[0x04F0] - InheritedSize[0x04D0])
class UQuestIndicatorComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_UFZP[0x10];                                    // 0x04D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bCheckHasRelevantTaskForActor;                             // 0x04E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FBMR[0xF];                                     // 0x04E1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.QuestIndicatorComponent");
		return ptr;
	}



};

// Class Frontiers.QuestObjectComponent
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class UQuestObjectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_GPSW[0x18];                                    // 0x00B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestObjectTableRowHandle                  QuestObjectRow;                                            // 0x00C8(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.QuestObjectComponent");
		return ptr;
	}



	bool OnInteract(class AActor* Other);
	bool OffersQuestForPlayer(class AActor* Player);
	bool HasRelevantTaskForActor(class AActor* Other);
};

// Class Frontiers.TLRandomFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTLRandomFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLRandomFunctionLibrary");
		return ptr;
	}



	TArray<struct FVector> STATIC_RandPointsInBox(const struct FBox& Box, const struct FRandomStream& RandomStream, int NumPoints, float MinDistBetween);
	struct FVector STATIC_RandPointInBox(const struct FBox& Box, const struct FRandomStream& RandomStream);
	float STATIC_RandFloatFromGlobalStream(float Min, float Max);
	struct FRandomStream STATIC_GetGlobalRandomStream();
};

// Class Frontiers.RecipeManager
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class URecipeManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData_3LFX[0x18];                                    // 0x00B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCraftingRecipe>                     Recipes;                                                   // 0x00C8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.RecipeManager");
		return ptr;
	}



};

// Class Frontiers.SplineFollowerComponent
// 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
class USplineFollowerComponent : public UActorComponent
{
public:
	int                                                NumComponentsPerSegment;                                   // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OD2Z[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<uint64_t, struct FObjectArrayHolder>          FollowerObjects;                                           // 0x00B8(0x0050) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SplineFollowerComponent");
		return ptr;
	}



};

// Class Frontiers.SplineColliderFollowerComponent
// 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
class USplineColliderFollowerComponent : public USplineFollowerComponent
{
public:
	struct FVector                                     CollisionExtents;                                          // 0x0108(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U26N[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SplineColliderFollowerComponent");
		return ptr;
	}



};

// Class Frontiers.SplineEmitterFollowerComponent
// 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
class USplineEmitterFollowerComponent : public USplineFollowerComponent
{
public:
	class UParticleSystem*                             ParticleSystem;                                            // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBeam;                                                   // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IEYW[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SplineEmitterFollowerComponent");
		return ptr;
	}



	class UParticleSystem* GetParticleSystem();
};

// Class Frontiers.SplineDynamicMeshFollowerComponent
// 0x0048 (FullSize[0x0150] - InheritedSize[0x0108])
class USplineDynamicMeshFollowerComponent : public USplineFollowerComponent
{
public:
	class UStaticMesh*                                 Mesh;                                                      // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          SplineDropMaterialBase;                                    // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeOffset;                                                // 0x0118(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UYG9[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInterface*>                  Materials;                                                 // 0x0120(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector2D                                   MeshScale;                                                 // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Offset;                                                    // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReceivesDecals;                                           // 0x0140(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B4AV[0x7];                                     // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          OriginalMaterial;                                          // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SplineDynamicMeshFollowerComponent");
		return ptr;
	}



};

// Class Frontiers.SplineStaticMeshFollowerComponent
// 0x0060 (FullSize[0x0168] - InheritedSize[0x0108])
class USplineStaticMeshFollowerComponent : public USplineFollowerComponent
{
public:
	class UStaticMesh*                                 Mesh;                                                      // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DropMaterialBase;                                          // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              timeDelayNext;                                             // 0x0118(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KWH6[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInterface*>                  Materials;                                                 // 0x0120(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector                                     MeshScale;                                                 // 0x0130(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceBetweenMeshes;                                     // 0x013C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReceivesDecals;                                           // 0x0140(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GO8V[0xF];                                     // 0x0141(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          OriginalMaterial;                                          // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSplineMeshData>                     SplineMeshData;                                            // 0x0158(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SplineStaticMeshFollowerComponent");
		return ptr;
	}



};

// Class Frontiers.SplineActorFollowerComponent
// 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
class USplineActorFollowerComponent : public USplineFollowerComponent
{
public:
	class UClass*                                      ActorClass;                                                // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SplineActorFollowerComponent");
		return ptr;
	}



	class UClass* GetActorClass();
};

// Class Frontiers.SplineFollowerAudioComponent
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class USplineFollowerAudioComponent : public UActorComponent
{
public:
	class USplineFollowerComponent*                    SplineFollower;                                            // 0x00B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         EventToPlay;                                               // 0x00B8(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2M9Z[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SplineFollowerAudioComponent");
		return ptr;
	}



	void SetSplineFollowerToTrack(class USplineFollowerComponent* InSplineFollower);
};

// Class Frontiers.ReplicatedSplineComponent
// 0x0094 (FullSize[0x05D0] - InheritedSize[0x053C])
class UReplicatedSplineComponent : public USplineComponent
{
public:
	float                                              PointDuration;                                             // 0x053C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSegments;                                               // 0x0540(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLength;                                                 // 0x0544(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSegmentLength;                                          // 0x0548(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TickInterval;                                              // 0x054C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDestroyWhenFinished;                                      // 0x0550(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C4M0[0x3];                                     // 0x0551(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DestroyDelay;                                              // 0x0554(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bProjectInterpolatedPointsToNav;                           // 0x0558(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1LSN[0x27];                                    // 0x0559(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      FollowActor;                                               // 0x0580(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FReplicatedSplinePoint>              ReplicatedSplinePoints;                                    // 0x0588(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2FLZ[0x20];                                    // 0x0598(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USplineFollowerComponent*>            SplineFollowers;                                           // 0x05B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_92BE[0x8];                                     // 0x05C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ReplicatedSplineComponent");
		return ptr;
	}



	void SetFollowActor(class AActor* InFollowActor, Frontiers_ELocationType InLocationType);
	void OnRep_SplinePoints();
	void AddReplicatedPoint(const struct FVector& WorldLocation);
};

// Class Frontiers.SelectableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USelectableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SelectableInterface");
		return ptr;
	}



	bool ShouldDisplayName(class AActor* Other);
	void Operate(class AActor* Operator);
	void MarkUnselected();
	void MarkSelected();
	bool IsSelected();
	bool IsOperable();
	bool IsHoverable(class AActor* Other);
	Frontiers_ESkillSlot GetOperateSkillSlot();
	void ClientOperate(class AActor* Operator);
	bool CanOperate(class AActor* Operator);
	bool CanBeSelected(class AActor* Other);
};

// Class Frontiers.ServerMemoryProfiler
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class AServerMemoryProfiler : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ServerMemoryProfiler");
		return ptr;
	}



};

// Class Frontiers.ServerPerformanceMonitorComponent
// 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
class UServerPerformanceMonitorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_KNCF[0x58];                                    // 0x00B0(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ServerPerformanceMonitorComponent");
		return ptr;
	}



};

// Class Frontiers.Service_FindTarget
// 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
class UService_FindTarget : public UBTService
{
public:
	struct FName                                       BlackboardKeyTargetActor;                                  // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       BlackboardKeyTargetLocation;                               // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ESkillSlot                               SkillSlot;                                                 // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bTargetNearest;                                            // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZVGY[0x2];                                     // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SwitchTargetFrequencySeconds;                              // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOnlyTargetsInRange;                                       // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4K9T[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Service_FindTarget");
		return ptr;
	}



};

// Class Frontiers.Service_TargetInstigator
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UService_TargetInstigator : public UBTService
{
public:
	struct FName                                       BlackboardKeyTargetActor;                                  // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Service_TargetInstigator");
		return ptr;
	}



};

// Class Frontiers.Service_GetUnstuck
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UService_GetUnstuck : public UBTService
{
public:
	float                                              StuckRadius;                                               // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StuckTimeout;                                              // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TeleportRangeMin;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TeleportRangeMax;                                          // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Service_GetUnstuck");
		return ptr;
	}



};

// Class Frontiers.Service_PetFindTarget
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UService_PetFindTarget : public UBTService
{
public:
	struct FName                                       BlackboardKeyTargetActor;                                  // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       BlackboardKeyTargetLocation;                               // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ESkillSlot                               SkillSlot;                                                 // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9MB0[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AggroRadius;                                               // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Service_PetFindTarget");
		return ptr;
	}



};

// Class Frontiers.Shrine
// 0x0030 (FullSize[0x04D0] - InheritedSize[0x04A0])
class AShrine : public AGadget
{
public:
	bool                                               bIsMovable;                                                // 0x04A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CNR5[0x7];                                     // 0x04A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             ActiveVFX;                                                 // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              AvailableSkills;                                           // 0x04B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UClass*                                      Skill;                                                     // 0x04C0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5V2W[0x8];                                     // 0x04C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Shrine");
		return ptr;
	}



};

// Class Frontiers.Skill
// 0x0518 (FullSize[0x0540] - InheritedSize[0x0028])
class USkill : public UObject
{
public:
	struct FText                                       Name;                                                      // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	Frontiers_ESkillType                               Type;                                                      // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EWeaponAnimationHandedness               AnimationHandedness;                                       // 0x0041(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y0GL[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ValidWeaponTypes[0x50];                                    // 0x0042(0x0050) UNKNOWN PROPERTY: SetProperty
	struct FString                                     AnimationSlotNameBase;                                     // 0x0098(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsesIndividualClassMontage;                               // 0x00A8(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z7YD[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                Montage;                                                   // 0x00B0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UAnimMontage*>     ClassMontages;                                             // 0x00B8(0x0050) (Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTag                                AnimInstanceTag;                                           // 0x0108(0x0008) (Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ComboAnimSlotProgression;                                  // 0x0110(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              ComboWindowTime;                                           // 0x0120(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9L7E[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpaceBase*                             TurningBlendSpace;                                         // 0x0128(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValidateTarget;                                           // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreTargetPosition;                                     // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRangeDesired;                                          // 0x0132(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0E1F[0x1];                                     // 0x0133(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RangeDesired;                                              // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAngularRange;                                          // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M1EU[0x3];                                     // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AngularRangeDegrees;                                       // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRange;                                                  // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseMinRange;                                              // 0x0144(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFindFallbackTarget;                                       // 0x0145(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnforceZTolerance;                                        // 0x0146(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SXP6[0x1];                                     // 0x0147(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ZTolerance;                                                // 0x0148(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GamepadTargetRange;                                        // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GamepadWallPushoffRange;                                   // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGamepadTargetIgnoreTerrain;                               // 0x0154(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WN6Q[0x3];                                     // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Duration;                                                  // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumDuration;                                           // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClickSlopRange;                                            // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EarlyClickThresholdSeconds;                                // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LateClickThresholdSeconds;                                 // 0x0168(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BITL[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSoftObjectPath>                     AssetsToLoad;                                              // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       EnergyCostText;                                            // 0x0180(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bForceEnergyRequirement;                                   // 0x0198(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckPetEnergyCost;                                       // 0x0199(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KOV7[0x6];                                     // 0x019A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FActiveTraitsTableRowHandle                 EnergyPool;                                                // 0x01A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bIsChargeSkill;                                            // 0x01B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayEnergyAsCooldown;                                  // 0x01B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_272Q[0x6];                                     // 0x01B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemTableRowHandle                         ConsumableItem;                                            // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequiredEquippedGameplayTags;                              // 0x01C8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                NumRequiredEmptySlots;                                     // 0x01E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y3PF[0x4];                                     // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      InventoryContainerClass;                                   // 0x01F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<Frontiers_EAreaGroupType>                   AllowedAreaGroupTypes;                                     // 0x01F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<Frontiers_EAreaGroupType>                   DisallowedAreaGroupTypes;                                  // 0x0208(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FQuestObjectTableRowHandle                  QuestObjectFilter;                                         // 0x0218(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	Frontiers_ESkillAnimationCancelMode                AnimationCancelMode;                                       // 0x0228(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeInterrupted;                                         // 0x0229(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPriority;                                               // 0x022A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceClientToStart;                                       // 0x022B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsChanneling;                                             // 0x022C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRotateToFaceTarget;                                       // 0x022D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRotateInstantly;                                          // 0x022E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockToInitialTarget;                                      // 0x022F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMoveWhileCasting;                                         // 0x0230(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowRepeat;                                              // 0x0231(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPersistAnimSlot;                                          // 0x0232(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWantsTick;                                                // 0x0233(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSendMetrics;                                              // 0x0234(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bServerOnlySecondary;                                      // 0x0235(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGamepadButtonPrompt;                                  // 0x0236(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CPFD[0x1];                                     // 0x0237(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageFactor;                                              // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VNDJ[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSkillsBalanceTableRowHandle>        DamageFactorBalanceRows;                                   // 0x0240(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bUseProcRateFactor;                                        // 0x0250(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DKLB[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProcRateFactor;                                            // 0x0254(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseProcRateOverride;                                      // 0x0258(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LJZL[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProcRateOverride;                                          // 0x025C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseProcParamFactor;                                       // 0x0260(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AHC1[0x3];                                     // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProcParamFactor;                                           // 0x0264(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseProcParamOverride;                                     // 0x0268(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1V3M[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProcParamOverride;                                         // 0x026C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EWeaponSlot                              WeaponSlot;                                                // 0x0270(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T3MP[0x3];                                     // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                DamageTypeOverride;                                        // 0x0274(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9Y5Y[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       SkillTags;                                                 // 0x0280(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              MaxQueueTime;                                              // 0x02A0(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HJ4G[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FProcTableRowHandle                         ProcRowHandle;                                             // 0x02A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I35X[0x8];                                     // 0x02B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectDefinition                           TargetDamageEffects;                                       // 0x02C0(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // 0x0390(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParticleAttachPoint;                                       // 0x039C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EKIA[0x4];                                     // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSkillEffectEntry>                   CastEffects;                                               // 0x03A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	Frontiers_ESkillTarget                             TargetType;                                                // 0x03B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequireReachableLocation;                                 // 0x03B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DUWS[0x6];                                     // 0x03BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInteractionFilter                          TargetFilter;                                              // 0x03C0(0x00F0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bRangeCheckFollowsActorChains;                             // 0x04B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HQPR[0x7];                                     // 0x04B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Description;                                               // 0x04B8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                              Cooldown;                                                  // 0x04D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseSoftEnergyCost;                                        // 0x04D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1XOQ[0x3];                                     // 0x04D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EnergyCost;                                                // 0x04D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EnergyRequirement;                                         // 0x04DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSkillCostEntry>                     SecondaryCosts;                                            // 0x04E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      Icon[0x28];                                                // 0x04F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      UnknownData_V3T1[0x28];                                    // 0x0518(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Skill");
		return ptr;
	}



	class ASkillShape* STATIC_SpawnSkillShape(class USkill* Skill, class AActor* Pawn, class UClass* ShapeClass, const struct FVector& Location, float ShapeDuration, bool bAttached, float RandomRange, bool bSpawnOnClient, bool bSpawnAtTarget, const struct FRotator& CustomRotation, bool bAllowSecondaryOverlaps, int SecondaryOverlapsMax, const struct FVector& SpawnOffset, const struct FVector& ScaleMultiplier, int SkillInstanceId);
	void STATIC_SkillStart(class UClass* SkillClass, class AActor* Pawn, class AActor* SkillTarget, const struct FVector& Location, float Param);
	class UWidget* STATIC_SetUIVisible(class APawn* Pawn, class UClass* UIClass, bool bIsVisible);
	void Operate(class AActor* Attacker, class AActor* Target);
	void OnSkillUnequipped(class AActor* Actor);
	void OnSkillTick(float DeltaSeconds, class AActor* Actor, class AActor* TargetActor, const struct FVector& TargetLocation);
	void OnSkillStop(class AActor* Actor);
	void OnSkillStart(class AActor* Actor, class AActor* SkillTarget, const struct FVector& Location, float Param, int SkillInstanceId);
	void OnSkillRemoved(class AActor* Actor);
	void OnSkillLevelUpdated(class AActor* Actor, int SkillLevel);
	bool OnSkillEventHit02(class AActor* Actor, class AActor* TargetActor, const struct FVector& TargetLocation, int SkillInstanceId);
	bool OnSkillEventHit01(class AActor* Actor, class AActor* TargetActor, const struct FVector& TargetLocation, int SkillInstanceId);
	void OnSkillEventAnimStart(class AActor* Actor);
	void OnSkillEventAnimEnd(class AActor* Actor, int SkillInstanceId);
	void OnSkillEquipped(class AActor* Actor);
	void OnSkillDidDamage(class AActor* Actor, class AActor* DeliveryActor, class AActor* TargetActor, float Amount, bool bKilledTarget, bool bCritical, int SkillInstanceId);
	void OnSkillBeamPulse(class AActor* Instigator, const struct FVector& BeamEnd, bool bHitTerrain);
	void OnSkillActorOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape, bool bIsPrimaryTarget, int SkillInstanceId);
	void OnSkillActorEndOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape);
	void OnActorRevived(class AActor* Actor);
	void OnActorDeath(class AActor* Actor, class AActor* Attacker);
	float STATIC_GetSkillPerLevelBonus(class UObject* WorldContextObject, const struct FTLCurveTableRowHandle& CurveRow, float Multiplier, float Level);
	struct FText GetSkillDescription(class AActor* Actor, int SkillLevel);
	float GetSkillDamageFactor(class AActor* Source, class AActor* Target, float DamageFactorOverride);
	bool GetOverrideSkill(Frontiers_ESkillSlot InSkillSlot, Frontiers_ESkillSet InSkillSet, Frontiers_ESkillSlot* OutSkillSlot, Frontiers_ESkillSet* OutSkillSet, class APawn* Pawn);
	class AActor* GetOriginActor(class AActor* Actor);
	float GetDurationPercent(class AActor* Actor);
	float GetCooldown(class AActor* Actor);
	struct FGameplayTagContainer GetAllTags();
	bool FindAITargetLocation(class AActor* Pawn, class AActor* InOptionalTarget, struct FVector* OutTargetLocation);
	class AActor* DetachSkillActor(class AActor* Actor, class UClass* AttachedActorClass, bool bLogErrorIfNotFound);
	bool BlueprintCanSkillStart(class AActor* SourceActor, class AActor* TargetActor, const struct FVector& TargetLocation);
	class AActor* STATIC_Attack(class USkill* Skill, class AActor* Attacker, class AActor* Victim, const struct FVector& TargetLocation, bool bFindTarget, bool bPlayMeleeHitSound, float Fraction);
	class AActor* STATIC_AttachSkillActor(class AActor* Actor, class UClass* AttachedActorClass, const struct FName& SocketName);
};

// Class Frontiers.AnimNotify_PayActivationCost
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UAnimNotify_PayActivationCost : public USkillAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_PayActivationCost");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_SkillHit01
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UAnimNotify_SkillHit01 : public USkillAnimNotify_ConfigurableActivationCost
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_SkillHit01");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_SkillHit02
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UAnimNotify_SkillHit02 : public USkillAnimNotify_ConfigurableActivationCost
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_SkillHit02");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_OffRootAnimation
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnimNotify_OffRootAnimation : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_OffRootAnimation");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_SkillInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimNotify_SkillInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_SkillInterface");
		return ptr;
	}



};

// Class Frontiers.SkillBeam
// 0x0590 (FullSize[0x07B0] - InheritedSize[0x0220])
class ASkillBeam : public AActor
{
public:
	unsigned char                                      UnknownData_0JGC[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Radius;                                                    // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7X7I[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      StatusEffectClass;                                         // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1FRU[0x8];                                     // 0x0238(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectDefinition                           BeamEffectDefinition;                                      // 0x0240(0x00D0) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FEffectDefinition                           CastEffectDefinition;                                      // 0x0310(0x00D0) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FEffectDefinition                           ImpactEffectDefinition;                                    // 0x03E0(0x00D0) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FEffectDefinition                           TerrainImpactEffectDefinition;                             // 0x04B0(0x00D0) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FEffectDefinition                           FizzleEffectDefinition;                                    // 0x0580(0x00D0) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         ImpactSoundEvent;                                          // 0x0650(0x0018) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         TerrainImpactSoundEvent;                                   // 0x0668(0x0018) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         FizzleSoundEvent;                                          // 0x0680(0x0018) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class USkillDelegate*                              SkillDelegate;                                             // 0x0698(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UParticleSystemComponent*>            ActiveBeamEffects;                                         // 0x06A0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FBeamImpactEffectRecord>             ActiveBeamImpactEffects;                                   // 0x06B0(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      MeshComp;                                                  // 0x06C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      HitActors[0x50];                                           // 0x06C8(0x0050) UNKNOWN PROPERTY: SetProperty
	struct FFireSkillBeamData                          InstanceParams;                                            // 0x0718(0x0058) (Transient, NoDestructor, NativeAccessSpecifierPrivate)
	class APersistentEffectsActor*                     PersistentEffects;                                         // 0x0770(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0SF9[0x38];                                    // 0x0778(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillBeam");
		return ptr;
	}



	class ASkillBeam* STATIC_SpawnBeam(class USkill* Skill, class AActor* SourceActor, const struct FFireSkillBeamData& BeamData);
};

// Class Frontiers.SkillDelegate
// 0x0110 (FullSize[0x01C0] - InheritedSize[0x00B0])
class USkillDelegate : public UActorComponent
{
public:
	unsigned char                                      UnknownData_K25Y[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bInheritFilterFromSkill;                                   // 0x00B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SPAI[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInteractionFilter                          InteractionFilter;                                         // 0x00C0(0x00F0) (Edit, Protected, NativeAccessSpecifierProtected)
	class USkill*                                      Skill;                                                     // 0x01B0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VUZS[0x8];                                     // 0x01B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillDelegate");
		return ptr;
	}



	bool CanInteractWith(class AActor* Target, bool bIgnoreMortality);
};

// Class Frontiers.SkillDelegateInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USkillDelegateInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillDelegateInterface");
		return ptr;
	}



	bool CanInteractWith(class AActor* Target, bool bIgnoreMortality);
};

// Class Frontiers.SkillEffects
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USkillEffects : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillEffects");
		return ptr;
	}



	void STATIC_PlayEffectsOnActor(class AActor* EffectOwner, class AActor* Instigator, const struct FVector2D& DirectionOfAttack, const struct FEffectDefinition& Effects);
	void STATIC_PlayEffectsAtLocation(const struct FVector& Location, const struct FRotator& Rotation, class AActor* EffectOwner, class AActor* Instigator, const struct FVector2D& DirectionOfAttack, const struct FEffectDefinition& Effects);
	void STATIC_PlayAudioEffectOnBone(class AActor* Target, const struct FName& AudioEffect, class AActor* Instigator);
	void STATIC_NetPlayTLEffectAttached(class AActor* Owner, class UClass* EffectTemplate, const struct FVector& LocationOffset, float LifeSpan, const struct FName& AttachPoint, TEnumAsByte<Engine_EAttachLocation> AttachLocationType, float ScaleMultiplier, Frontiers_EVFXScaleMethod ScaleMethod, bool bUseLegacyScale);
	void STATIC_NetPlayTLEffectAtLocation(class AActor* Owner, class UClass* EffectTemplate, const struct FVector& Location, float LifeSpan, float ScaleMultiplier, Frontiers_EVFXScaleMethod ScaleMethod, bool bUseLegacyScale);
	void STATIC_NetPlayEffectAttached(class AActor* Owner, class AActor* Instigator, class UParticleSystem* EffectTemplate, const struct FFMODEventReference& EventReference, const struct FVector& LocationOffset, const struct FName& AttachPoint, TEnumAsByte<Engine_EAttachLocation> AttachLocationType, float ScaleMultiplier, Frontiers_EVFXScaleMethod ScaleMethod, bool bUseLegacyScale);
	void STATIC_NetPlayEffectAtLocation(class AActor* Owner, class AActor* Instigator, class UParticleSystem* EffectTemplate, const struct FFMODEventReference& EventReference, const struct FVector& Location, const struct FRotator& Rotation, float ScaleMultiplier, Frontiers_EVFXScaleMethod ScaleMethod, bool bUseLegacyScale);
	void STATIC_DeactivateParticles(class AActor* ActorWithParticles, bool bDetachParticles);
};

// Class Frontiers.SkillList
// 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
class USkillList : public UActorComponent
{
public:
	Frontiers_ESkillSet                                SkillSet;                                                  // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0QYN[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSkillListEntry>                     SkillEntries;                                              // 0x00B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8XT1[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x00D0(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bIgnoreFilter;                                             // 0x00F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyAddIfSlotEmpty;                                       // 0x00F1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IELT[0x6];                                     // 0x00F2(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillList");
		return ptr;
	}



};

// Class Frontiers.SkillManager
// 0x0528 (FullSize[0x05D8] - InheritedSize[0x00B0])
class USkillManager : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_KZSI[0x58];                                    // 0x00B0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Frontiers_ESkillSet, struct FUnlockSlotLevelContainer> SkillSlotUnlockLevels;                                     // 0x0108(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSkillOverride                              Dummy;                                                     // 0x0158(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZJE9[0x8];                                     // 0x0170(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, struct FSkillOverride>         Overrides;                                                 // 0x0178(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAnimMontage*                                GenericSkillAnimation;                                     // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<Frontiers_ESkillSet, struct FActivationParamsMap> Skills;                                                    // 0x01D0(0x0050) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KCW5[0x30];                                    // 0x0220(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      CachedPreviousTarget;                                      // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReplicateTargetAcquisition;                               // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HTFJ[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      CachedNewTarget;                                           // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoCooldown;                                               // 0x0268(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2THJ[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStatusEffectCounter                        DisableAllSkillsCounter;                                   // 0x0270(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ODIG[0x20];                                    // 0x0290(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSkillReplicationData                       ServerSkillActiveData;                                     // 0x02B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSkillReplicationData                       ServerInitialSkillActiveData;                              // 0x02D0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSkillEventData                             ServerSkillToRetry;                                        // 0x02F0(0x0068) (NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WOJI[0x80];                                    // 0x0358(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bCanVerboseLog;                                            // 0x03D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SHPK[0x3];                                     // 0x03D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaximumSkillPoints;                                        // 0x03DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSkillEventData                             SkillActiveData;                                           // 0x03E0(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	Frontiers_ESkillSet                                ActiveSkillSet;                                            // 0x0448(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ESkillSet                                OverrideSkillSet;                                          // 0x0449(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RH1K[0x2];                                     // 0x044A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ActiveSkillInstanceId;                                     // 0x044C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5HLM[0x4];                                     // 0x0450(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_ESkillSlot                               SkillSlotPressed;                                          // 0x0454(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7D81[0x3];                                     // 0x0455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector_NetQuantize10                       ServerSkillTargetLocation;                                 // 0x0458(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3BI0[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSkillCooldownEntry>                 CooldownsBySkill;                                          // 0x0468(0x0010) (Edit, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSkillCooldownEntry>                 ClientCooldownsBySkill;                                    // 0x0478(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)
	float                                              GlobalCooldownEndTime;                                     // 0x0488(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TJQF[0x4];                                     // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       DisabledSkillTags;                                         // 0x0490(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B4V3[0x50];                                    // 0x04B0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDisabledSkillSlotEntry>             DisabledSkillSlotCounters;                                 // 0x0500(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)
	TMap<struct FName, struct FSkillAssetsToLoad>      AssetsLoadedPerSkill;                                      // 0x0510(0x0050) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NMNX[0x1];                                     // 0x0560(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_EWeaponSlot                              NextBasicWeaponSlot;                                       // 0x0561(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4RGC[0x26];                                    // 0x0562(0x0026) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   LastSkillRespecTime;                                       // 0x0588(0x0008) (Net, ZeroConstructor, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UParticleSystemComponent*>            ActiveCastEffects;                                         // 0x0590(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XMNA[0x38];                                    // 0x05A0(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillManager");
		return ptr;
	}



	void WeaponEquipped(Frontiers_EWeaponSlot TraitMode);
	void UnlockCooldownsByTags(const struct FGameplayTagContainer& Tags);
	void SwitchBasicAttackHands();
	void StopActiveSkill();
	bool SkillSlotHasSkill(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set);
	void SetCooldownBySkill(class USkill* Skill, float Duration);
	void SetCooldown(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set, float Duration);
	void ServerUpdateInputState(const struct FVector_NetQuantize10& Location, Frontiers_ESkillSlot Pressed);
	void ServerStopCurrentSkill();
	void ServerSkillTryToStart(class AActor* SkillTarget, const struct FVector_NetQuantize10& Location, Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set, float Timestamp, const struct FSkillStartParams& SkillStartParams);
	void ServerSetSkill(Frontiers_ESkillSet Set, Frontiers_ESkillSlot Slot, const struct FName& RowName);
	void ServerRespecSkills();
	void ServerRejectRespecSkills();
	void ServerRegretSkillLevel(const struct FName& RowName);
	void ServerBuySkillLevel(const struct FName& RowName);
	void ResumeSkills();
	void ResetCooldownBySkill(class USkill* Skill);
	void ReduceCooldownBySkill(class USkill* Skill, float DurationReduced);
	void PauseSkills();
	void STATIC_OnSkillEvent(class AActor* Actor, Frontiers_ESkillEvent SkillEvent, int SkillInstanceId);
	void OnRevive(class APawn* Revived);
	void OnRep_SkillCooldowns();
	void OnRep_ServerSkillTargetLocation();
	void OnRep_ServerSkillActiveData();
	void OnRep_ServerInitialSkillActiveData();
	void OnRep_LastSkillRespecTime();
	void OnEquippedItemsChanged(TArray<struct FItemReplicatedData> ItemSlotData);
	void OnDeath(class APawn* Dying, class AActor* Attacker);
	void MulticastSkillListUpdated(TArray<struct FSkillRepArrayEntry> SkillList);
	void LockCooldownsByTags(const struct FGameplayTagContainer& Tags);
	Frontiers_ESkillResult K2_SkillTryToStart(class AActor* SkillTarget, const struct FVector& Location, Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set, bool bAsSecondarySkill, bool bNoRootMotion, float Param, bool bPriority);
	void K2_SkillStart(class AActor* SkillTarget, const struct FVector& Location, Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set, int SkillInstance, float Param);
	bool IsValidTarget(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set, class AActor* Victim);
	bool IsThisSkillUnlocked(class USkill* Skill);
	bool IsThisSkillActive(class USkill* Skill);
	bool IsTargetInRange(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set, class AActor* TargetActor, const struct FVector& TargetLocation);
	bool IsSkillUnlocked(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set);
	bool IsSkillSlotUnlocked(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set);
	bool IsSkillActive(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set);
	bool IsLockedInAction();
	bool STATIC_IsEmberWeaponAffixUnlocked(class AActor* Actor, const struct FName& AffixRowName);
	bool STATIC_HasSkillInAssignableSlot(class AActor* Actor, class USkill* Skill);
	bool STATIC_HasSkillAssigned(class AActor* Actor, const struct FName& SkillDataRowName);
	TEnumAsByte<Engine_ECollisionChannel> GetTargetTraceType(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set);
	int GetSlotUnlockLevel(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set);
	int STATIC_GetSkillPointsAvailable(class AActor* Actor);
	struct FText GetSkillNameFromSlot(Frontiers_ESkillSlot Slot);
	float GetSkillMoveToRangeFromSlot(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set, class AActor* Source, class AActor* Target);
	int STATIC_GetSkillLevel(class AActor* Actor, const struct FName& SkillRowName);
	void GetSkillIconFromSlot(Frontiers_ESkillSlot Slot);
	float GetSkillGamepadTargetRange(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set);
	Frontiers_EWeaponSlot GetNextBasicWeaponSlot();
	struct FString STATIC_GetDebugSkillString(class AActor* DebugActor);
	float GetCooldownRemainingFromSlot(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set);
	float GetCooldownPercentFromSlot(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set);
	float GetCooldownPercentForSkill(class USkill* Skill);
	float GetCooldownEndTimeFromSkill(class USkill* Skill);
	float GetCooldownDurationFromSlot(Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set);
	int STATIC_GetBaseSkillLevel(class AActor* Actor, const struct FName& SkillRowName);
	Frontiers_EWeaponSlot GetActiveSkillWeaponSlot();
	void STATIC_EnableSkillsByTags(class AActor* Actor, const struct FGameplayTagContainer& Tags);
	void STATIC_DisableSkillsByTags(class AActor* Actor, const struct FGameplayTagContainer& Tags);
	void ClientStopActiveSkill();
	void ClientSkillPurchaseCompleted(bool bSuccess, const struct FName& RowName, int NewLevel);
	void ClientSetSkill(Frontiers_ESkillSet Set, Frontiers_ESkillSlot Slot, const struct FName& RowName);
	void ClientResetCooldownBySkill(class USkill* Skill);
	void ClientRequestedSkillFailedToStart(int ClientActiveSkillInstanceId, Frontiers_ESkillSet ServerSet, Frontiers_ESkillSlot ServerSlot, int ServerInstanceId, float ServerTimestamp);
	void ClientReduceCooldownBySkill(class USkill* Skill, float DurationReduced);
	bool STATIC_CanSpendSkillPoints(class AActor* Player);
	Frontiers_ESkillResult CanSkillStart(class AActor* SkillTarget, const struct FVector& TargetLocation, Frontiers_ESkillSlot Slot, Frontiers_ESkillSet Set, bool bPriority, bool bValidateTargetAndRange, bool bValidateCooldown);
};

// Class Frontiers.SkillMinions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USkillMinions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillMinions");
		return ptr;
	}



	class AActor* STATIC_ReplaceMonster(class AActor* Actor, class AActor* Instigator, class AActor* SpawnFacingActor, const struct FMonstersTableRowHandle& MonsterRow, Frontiers_ESkillSlot SpawnSkillSlot);
	void STATIC_RemoveMinions(class AActor* Owner, class UClass* InventoryContainerClass);
	class ATrackBuffer* STATIC_FindNearestTrackBufferWithinRadius(class AActor* Owner, float Radius, class UClass* InventoryContainerClass, Frontiers_EFindMinionResult* OutExecPin);
	class ATrackBuffer* STATIC_FindNearestTrackBufferFromLocation(class AActor* Owner, const struct FVector& Location, float Radius, class UClass* InventoryContainerClass, Frontiers_EFindMinionResult* OutExecPin);
	TArray<class AActor*> STATIC_FindMinionsWithinRadius(class AActor* Owner, float Radius, class UClass* InventoryContainerClass, class UClass* PetClass, Frontiers_EFindMinionResult* OutExecPin);
	class UTLInventoryContainer* STATIC_FindInventoryContainerForMinion(class AActor* Source, const struct FMinionTableRowHandle& MinionRow, const struct FName& TraitTag);
	void STATIC_BlueprintSpawnMinionOnNextFrames(class AActor* Source, const struct FMinionTableRowHandle& MinionRow, const struct FVector& Target, const struct FRotator& TargetRotation, const struct FSpawnMinionParams& Params);
	class AActor* STATIC_BlueprintSpawnMinion(class AActor* Source, const struct FMinionTableRowHandle& MinionRow, const struct FVector& Target, const struct FSpawnMinionParams& Params);
};

// Class Frontiers.SkillMovement
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USkillMovement : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillMovement");
		return ptr;
	}



	void STATIC_StopMoving(class USkill* Skill, class AActor* Pawn);
	void STATIC_StartMoving(class USkill* Skill, class APawn* Pawn, class AActor* MoveTargetActor, const struct FVector& MoveTargetLocation);
	void STATIC_MulticastEndRootMotionForce(class AActor* Pawn, class USkill* Skill);
	bool STATIC_HasRootMotionForceFinished(class AActor* Pawn, class USkill* Skill);
	void STATIC_FaceTarget(class APawn* Pawn, class AActor* Target, const struct FVector& Location, bool bForceInstant);
	void STATIC_EndRootMotionForce(class AActor* Pawn, class USkill* Skill);
	void STATIC_EndAnimationIfRootMotionFinished(class AActor* Pawn, class USkill* Skill);
	void STATIC_ApplyRadialRootMotionForce(class AActor* Pawn, class USkill* Skill, const struct FVector& Origin, float Radius, float Speed, float Duration, bool bIsPush);
	void STATIC_ApplyMoveToRootMotionForceWithDuration(class AActor* Pawn, class USkill* Skill, const struct FVector& TargetLocation, float Duration);
	void STATIC_ApplyMoveToRootMotionForce(class AActor* Pawn, class USkill* Skill, const struct FVector& TargetLocation, float Speed);
	void STATIC_ApplyKnockbackRootMotionForce(class AActor* Pawn, class USkill* Skill, class AActor* Inflictor, float BaseVelocity, float Duration, float VelocityMultiplier, bool bIsPush);
	void STATIC_ApplyConstantRootMotionForce(class AActor* Pawn, class USkill* Skill, const struct FVector& Direction, float Speed, float Duration);
};

// Class Frontiers.SkillPulseComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class USkillPulseComponent : public UActorComponent
{
public:
	Frontiers_ESkillSlot                               SkillSlot;                                                 // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_ESkillSet                                SkillSet;                                                  // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4XSP[0x2];                                     // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PulseInterval;                                             // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_66ER[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SkillPulseComponent");
		return ptr;
	}



};

// Class Frontiers.TLInventoryContainerFortStash
// 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
class UTLInventoryContainerFortStash : public UTLInventoryContainerFort
{
public:
	TArray<struct FClientFortStashEntry>               ClientStashEntries;                                        // 0x0200(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerFortStash");
		return ptr;
	}



	void OnRep_ClientStashEntries();
};

// Class Frontiers.TLInventoryContainerInbox
// 0x0048 (FullSize[0x0210] - InheritedSize[0x01C8])
class UTLInventoryContainerInbox : public UTLInventoryContainer
{
public:
	unsigned char                                      UnknownData_5H6F[0x8];                                     // 0x01C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FInventoryEntryInbox>                Entries;                                                   // 0x01D0(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	struct FUnixNanoTime                               LastSyncedEntryTime;                                       // 0x01E0(0x0008) (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_THUD[0x28];                                    // 0x01E8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerInbox");
		return ptr;
	}



	void ServerClaim(const struct FGuid& MessageId);
	void OnRep_Entries();
	void ClientOnReceivedNewMail(TArray<int> NewInventoryIdEntries);
};

// Class Frontiers.TLInventoryContainerInboxOffline
// 0x0000 (FullSize[0x0210] - InheritedSize[0x0210])
class UTLInventoryContainerInboxOffline : public UTLInventoryContainerInbox
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerInboxOffline");
		return ptr;
	}



};

// Class Frontiers.TLInventoryContainerQuestItems
// 0x0000 (FullSize[0x01F0] - InheritedSize[0x01F0])
class UTLInventoryContainerQuestItems : public UTLInventoryContainerItems
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerQuestItems");
		return ptr;
	}



};

// Class Frontiers.TLInventoryContainerMinions
// 0x0030 (FullSize[0x01F8] - InheritedSize[0x01C8])
class UTLInventoryContainerMinions : public UTLInventoryContainer
{
public:
	Frontiers_EMinionInventoryFullBehavior             InventoryFullBehavior;                                     // 0x01C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMinionDeadOrDestroyedBehavior           MinionActorDeadBehavior;                                   // 0x01C9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DAI1[0x2];                                     // 0x01CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                BonusMaxMinionsTag;                                        // 0x01CC(0x0008) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G5R2[0x4];                                     // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxNumberOfMinions;                                        // 0x01D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_STHI[0x4];                                     // 0x01DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FInventoryEntryMinion>               Minions;                                                   // 0x01E0(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8AMO[0x8];                                     // 0x01F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerMinions");
		return ptr;
	}



	TArray<class AActor*> STATIC_RemoveMinionsOfType(class AActor* Owner, class UClass* ContainerClass, class UClass* MinionClass, bool bAllowRemovePlayerPet);
	void OnRep_Minions();
	TArray<class AActor*> STATIC_GetMinionsFromCharacterByTag(class AActor* Owner, const struct FGameplayTagContainer& Tags);
	TArray<class AActor*> STATIC_GetMinionsFromCharacter(class AActor* Owner, class UClass* ContainerClass, class UClass* MinionClass);
	class AActor* STATIC_GetMinionFromCharacter(class AActor* Owner, class UClass* ContainerClass, class UClass* MinionClass);
	int STATIC_GetMaxMinions(class AActor* Actor, class UClass* MinionClass);
};

// Class Frontiers.TLInventoryContainerPet
// 0x0090 (FullSize[0x0288] - InheritedSize[0x01F8])
class UTLInventoryContainerPet : public UTLInventoryContainerMinions
{
public:
	unsigned char                                      UnknownData_9YHS[0x10];                                    // 0x01F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bPetWasSentVoluntarily;                                    // 0x0208(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4G54[0x3];                                     // 0x0209(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PetGoingToTownDuration;                                    // 0x020C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PetGoingToTownStatusEffectClass;                           // 0x0210(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I3WT[0x38];                                    // 0x0218(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ServerPetReturnTimestamp;                                  // 0x0250(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_42L8[0x34];                                    // 0x0254(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerPet");
		return ptr;
	}



	void Recall();
	void OnRep_PetReturnTimestamp();
	void OnOwnerRevived(class APawn* Revived);
	void OnOwnerDied(class APawn* Dying, class AActor* Attacker);
	void ClientPetReturned();
	bool CanSendAway();
	bool CanRecall();
	void STATIC_BlueprintSendPetAway(class AActor* Pet, bool bVoluntary);
};

// Class Frontiers.TLInventoryContainerPetsStored
// 0x00D0 (FullSize[0x0298] - InheritedSize[0x01C8])
class UTLInventoryContainerPetsStored : public UTLInventoryContainer
{
public:
	unsigned char                                      UnknownData_H1L4[0x8];                                     // 0x01C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxNumberOfPets;                                           // 0x01D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WNCP[0x4];                                     // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInventoryEntryPetStored                    OverflowPet;                                               // 0x01D8(0x00A8) (Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct FInventoryEntryPetStored>            pets;                                                      // 0x0280(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      PetBaseClass;                                              // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerPetsStored");
		return ptr;
	}



	void ServerTryToAddOverflowPet();
	void ServerSwapToPet(int InventoryEntryId, class AActor* Owner);
	void ServerSetOverflowPet(const struct FInventoryEntryPetStored& InOverflowPet);
	void ServerReleasePet(int InventoryEntryId);
	void ServerChangePetName(int InventoryEntryId, const struct FString& NewName);
	void OnRep_Pets();
	void OnRep_OverflowPet();
	void ClientPetAcquired(const struct FGuid& Guid, bool bNewPetSkillUnlocked);
};

// Class Frontiers.TLInventoryContainerStatusEffects
// 0x0170 (FullSize[0x0338] - InheritedSize[0x01C8])
class UTLInventoryContainerStatusEffects : public UTLInventoryContainer
{
public:
	TMap<int, class UStatusEffect*>                    StatusEffects;                                             // 0x01C8(0x0050) (Protected, NativeAccessSpecifierProtected)
	float                                              OnRemoveTimeRemainingToExpire;                             // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RNGL[0x4];                                     // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRepStatusEffectArray                       StatusEffectDatas;                                         // 0x0220(0x0118) (Net, RepNotify, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerStatusEffects");
		return ptr;
	}



	void OnStatusEffectsReplicated();
	void OnPreDeath(class APawn* Dying, class AActor* Attacker);
	void OnPostDeath(class APawn* Dying);
	void OnPlayerWarped(class AActor* Player, const struct FVector& Location);
	void OnAreaChanged(const struct FGuid& NewAreaId, const struct FName& NewAreaName);
};

// Class Frontiers.TLInventoryContainerPetItems
// 0x0008 (FullSize[0x01F8] - InheritedSize[0x01F0])
class UTLInventoryContainerPetItems : public UTLInventoryContainerUnequippedBase
{
public:
	int                                                MaxNumItems;                                               // 0x01F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EU7I[0x4];                                     // 0x01F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerPetItems");
		return ptr;
	}



};

// Class Frontiers.TLInventoryContainerConsumableItems
// 0x0008 (FullSize[0x01F8] - InheritedSize[0x01F0])
class UTLInventoryContainerConsumableItems : public UTLInventoryContainerUnequippedBase
{
public:
	int                                                MaxNumItems;                                               // 0x01F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZHI7[0x4];                                     // 0x01F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerConsumableItems");
		return ptr;
	}



};

// Class Frontiers.TLInventoryContainerPotions
// 0x0020 (FullSize[0x0218] - InheritedSize[0x01F8])
class UTLInventoryContainerPotions : public UTLInventoryContainerConsumableItems
{
public:
	unsigned char                                      UnknownData_UYQD[0x20];                                    // 0x01F8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerPotions");
		return ptr;
	}



};

// Class Frontiers.TLInventoryContainerLifeBoundRemoved
// 0x0000 (FullSize[0x01F0] - InheritedSize[0x01F0])
class UTLInventoryContainerLifeBoundRemoved : public UTLInventoryContainerUnequippedBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerLifeBoundRemoved");
		return ptr;
	}



};

// Class Frontiers.Traits
// 0x0430 (FullSize[0x04E0] - InheritedSize[0x00B0])
class UTraits : public UActorComponent
{
public:
	unsigned char                                      UnknownData_PDGV[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTraitInitializer>                   InitialTraits;                                             // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FName, class UActiveTrait*>            ActiveTraits;                                              // 0x00C8(0x0050) (ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AT3M[0x188];                                   // 0x0118(0x0188) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRepTraitPairArray                          TraitReplicate;                                            // 0x02A0(0x0118) (Edit, Net, DisableEditOnTemplate, EditConst, RepNotify, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C256[0x128];                                   // 0x03B8(0x0128) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Traits");
		return ptr;
	}



	int STATIC_SkillPointsAvailable(class AActor* Actor);
	void OnTraitUpdated();
	struct FString STATIC_GetDetailedTraitString(class AActor* Actor);
	void ClientTraitPickup(const struct FTraitKey& TraitKey, float Amount);
};

// Class Frontiers.NonAuthoritativeClientTraits
// 0x0000 (FullSize[0x04E0] - InheritedSize[0x04E0])
class UNonAuthoritativeClientTraits : public UTraits
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.NonAuthoritativeClientTraits");
		return ptr;
	}



};

// Class Frontiers.TraitsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTraitsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TraitsInterface");
		return ptr;
	}



	void SetTrait(const struct FTraitKey& Key, float Value);
	TArray<struct FTraitKey> GetTraitKeys();
	float GetTraitFromKey(const struct FTraitKey& Key);
	float GetTrait(const struct FName& RowName);
	void ExecuteTraitCallback(const struct FTraitKey& Key);
	float AddToTrait(const struct FTraitKey& Key, float Value);
};

// Class Frontiers.TraitReplicateInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTraitReplicateInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TraitReplicateInterface");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddTrapMonsterSpawner
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class USpawnDataEntryAddTrapMonsterSpawner : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_CJXB[0x38];                                    // 0x0030(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddTrapMonsterSpawner");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryAddTrapHazard
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class USpawnDataEntryAddTrapHazard : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_TTYI[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryAddTrapHazard");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryGotoTrapSpawnRow
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USpawnDataEntryGotoTrapSpawnRow : public USpawnDataEntryGotoSpawnRowBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryGotoTrapSpawnRow");
		return ptr;
	}



};

// Class Frontiers.SpawnDataEntryTrapSetDelay
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USpawnDataEntryTrapSetDelay : public USpawnEntryBase
{
public:
	unsigned char                                      UnknownData_Y77I[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnDataEntryTrapSetDelay");
		return ptr;
	}



};

// Class Frontiers.UsableItemInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUsableItemInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.UsableItemInterface");
		return ptr;
	}



	bool RequiresTargetItem();
	void OnActivationConfirmedClient(class AActor* Owner);
	Frontiers_EUseItemResult OnActivatedServer(class AActor* Owner, const struct FInventoryItemEntry& Item, int TargetItemId);
	void OnActivatedClient(class AActor* Owner, const struct FInventoryItemEntry& Item, int TargetItemId);
	bool IsValidTarget(class AActor* Owner, const struct FInventoryItemEntry& Target);
	struct FText GetDescription();
	Frontiers_ECanUseItemResult CanUse(class AActor* Owner);
};

// Class Frontiers.UserGeneratedContentBlocker
// 0x0058 (FullSize[0x0278] - InheritedSize[0x0220])
class AUserGeneratedContentBlocker : public AActor
{
public:
	TMap<Frontiers_EFortBlockedStatus, struct FText>   ErrorMessages;                                             // 0x0220(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	Frontiers_EFortBlockedStatus                       BlockedStatus;                                             // 0x0270(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ONGS[0x3];                                     // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ErrorMessageDuration;                                      // 0x0274(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.UserGeneratedContentBlocker");
		return ptr;
	}



	void OnOverlapInnerBlocker(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	class UPrimitiveComponent* GetInnerBlocker();
};

// Class Frontiers.UserPrivileges
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UUserPrivileges : public UObject
{
public:
	unsigned char                                      UnknownData_1W0G[0x80];                                    // 0x0028(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.UserPrivileges");
		return ptr;
	}



};

// Class Frontiers.UserSettings
// 0x00F8 (FullSize[0x01D8] - InheritedSize[0x00E0])
class UUserSettings : public UTLSaveGame
{
public:
	uint32_t                                           TermsOfServiceVersion;                                     // 0x00E0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32_t                                           PrivacyPolicyVersion;                                      // 0x00E4(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCinematicSeen;                                            // 0x00E8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHelpDisabled;                                             // 0x00E9(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSteamDataSuiteTokenSent;                                  // 0x00EA(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PNPY[0x5];                                     // 0x00EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Culture;                                                   // 0x00F0(0x0010) (Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     LinkedArcUserId;                                           // 0x0100(0x0010) (Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     shadowArcUserId;                                           // 0x0110(0x0010) (Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     email;                                                     // 0x0120(0x0010) (Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     UserAccountId;                                             // 0x0130(0x0010) (Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEmailValidated;                                           // 0x0140(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AIVV[0x3];                                     // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           Sequence;                                                  // 0x0144(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDateTime                                   NextLoginTime;                                             // 0x0148(0x0008) (Edit, ZeroConstructor, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      LoginAttemptRepeatCount;                                   // 0x0150(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_60WG[0x7];                                     // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   LinkAccountStarted;                                        // 0x0158(0x0008) (Edit, ZeroConstructor, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMasterMute;                                               // 0x0160(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMusicMute;                                                // 0x0161(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MFWH[0x2];                                     // 0x0162(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MasterVolumePercent;                                       // 0x0164(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MusicVolumePercent;                                        // 0x0168(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AudioInputVolumePercent;                                   // 0x016C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     AudioInputDeviceId;                                        // 0x0170(0x0010) (Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_EVoiceChatRole                           VoiceChatRole;                                             // 0x0180(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5FR6[0x7];                                     // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FInputActionKeyMapping>              CustomInputActionMappings;                                 // 0x0188(0x0010) (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<struct FInputActionKeyMapping>              RemovedInputActionMappings;                                // 0x0198(0x0010) (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	float                                              UIScalePercent;                                            // 0x01A8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SafeZonePercent;                                           // 0x01AC(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ColorSeverityPercent;                                      // 0x01B0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	SlateCore_EColorVisionDeficiency                   ColorMode;                                                 // 0x01B4(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDisableCameraShake;                                       // 0x01B5(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBloodEnabled;                                             // 0x01B6(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDamageNumbersEnabled;                                     // 0x01B7(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOverheadAccountNames;                                     // 0x01B8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMouseMovementDisabled;                                    // 0x01B9(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSkillRetargetingEnabled;                                  // 0x01BA(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRevertToMovementDisabled;                                 // 0x01BB(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAlwaysShowItemNameplates;                                 // 0x01BC(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bTextChatUIEnabled;                                        // 0x01BD(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPrivacyPolicySeen;                                        // 0x01BE(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M75R[0x1];                                     // 0x01BF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   LastAskedSinglePlayer;                                     // 0x01C0(0x0008) (Edit, ZeroConstructor, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAcceptedSinglePlayerMetrics;                              // 0x01C8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X4I0[0x7];                                     // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLLocalPlayer*                              MyLocalPlayer;                                             // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.UserSettings");
		return ptr;
	}



	bool STATIC_IsBloodEnabled(class UObject* Context);
};

// Class Frontiers.VendorComponent
// 0x0080 (FullSize[0x0130] - InheritedSize[0x00B0])
class UVendorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_251R[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCatalogTableRowHandle>              CatalogList;                                               // 0x00B8(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         HelloAudioEvent;                                           // 0x00C8(0x0018) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODLocalizedEventAudioTableEntry          HelloAudioTableEntry;                                      // 0x00E0(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FFMODEventReference                         GoodbyeAudioEvent;                                         // 0x00F0(0x0018) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFMODLocalizedEventAudioTableEntry          GoodbyeAudioTableEntry;                                    // 0x0108(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ShopTabName;                                               // 0x0118(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.VendorComponent");
		return ptr;
	}



	void ShowShopWidget(class APawn* Player, class AActor* Vendor);
};

// Class Frontiers.VirtualAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UVirtualAsset : public UObject
{
public:
	unsigned char                                      UnknownData_KJDI[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.VirtualAsset");
		return ptr;
	}



};

// Class Frontiers.WaitForPlayerComponentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaitForPlayerComponentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.WaitForPlayerComponentInterface");
		return ptr;
	}



};

// Class Frontiers.TLInventoryContainerWardrobe
// 0x0120 (FullSize[0x0310] - InheritedSize[0x01F0])
class UTLInventoryContainerWardrobe : public UTLInventoryContainerItems
{
public:
	float                                              LevelRequirementDelta;                                     // 0x01F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YXA6[0x4];                                     // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         EmberWeaponSwapSFX;                                        // 0x01F8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         NormalWeaponSwapSFX;                                       // 0x0210(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2LLU[0x78];                                    // 0x0228(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FInventorySlotData>                  SlotData;                                                  // 0x02A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       RemoveFromItemDrops;                                       // 0x02B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       AvailableFromItemDrops;                                    // 0x02D0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                               bAttachToController;                                       // 0x02F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y2YC[0x3];                                     // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_EWeaponSuite                             WeaponSuiteCurrent;                                        // 0x02F4(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YYQC[0x1B];                                    // 0x02F5(0x001B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLInventoryContainerWardrobe");
		return ptr;
	}



	void OnRep_WeaponSuiteCurrent();
};

// Class Frontiers.TLItemSet
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UTLItemSet : public UObject
{
public:
	struct FCharacterCustomization                     Customization;                                             // 0x0028(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FItemReplicatedData>                 ActorsToAttach;                                            // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FItemTableRowHandle>                 ItemRowHandles;                                            // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ExtraActors;                                               // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLItemSet");
		return ptr;
	}



};

// Class Frontiers.TLLocalPlayer
// 0x0360 (FullSize[0x05B8] - InheritedSize[0x0258])
class UTLLocalPlayer : public ULocalPlayer
{
public:
	unsigned char                                      UnknownData_5ETS[0x48];                                    // 0x0258(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserSettings*                               UserSettings;                                              // 0x02A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAccountLocalPersistence*                    LocalPersistence;                                          // 0x02A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R7YY[0x278];                                   // 0x02B0(0x0278) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChatSession*                                ChatSession;                                               // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TLPN[0x38];                                    // 0x0530(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserPrivileges*                             privileges;                                                // 0x0568(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LFL0[0x28];                                    // 0x0570(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLRemoteSession*                            RemoteSession;                                             // 0x0598(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IG6J[0x18];                                    // 0x05A0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLLocalPlayer");
		return ptr;
	}



};

// Class Frontiers.TLOnline
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTLOnline : public UGameInstanceSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLOnline");
		return ptr;
	}



};

// Class Frontiers.TLParticleDecalBridgeComponent
// 0x0080 (FullSize[0x0130] - InheritedSize[0x00B0])
class UTLParticleDecalBridgeComponent : public UActorComponent
{
public:
	class UMaterialInterface*                          DecalMaterialMaster;                                       // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDecalTextureEntry>                  TextureParameterArray;                                     // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FName                                       EmitterName;                                               // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             EffectTemplate;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    SpawnedEmitter;                                            // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<int, class UTLDecalComponent*>                ParticleIDToDecalMap;                                      // 0x00E0(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLParticleDecalBridgeComponent");
		return ptr;
	}



};

// Class Frontiers.TLParticleSystemComponent
// 0x0030 (FullSize[0x06D0] - InheritedSize[0x06A0])
class UTLParticleSystemComponent : public UParticleSystemComponent
{
public:
	bool                                               bDeactivateWhenOwnerDestroyed;                             // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDeactivateOnOwnerDeath;                                   // 0x06A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseAbsoluteRotation;                                      // 0x06A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8N11[0x5];                                     // 0x06A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x06A8(0x0020) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	Frontiers_EShowBloodOptions                        BloodOptions;                                              // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KPKW[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLParticleSystemComponent");
		return ptr;
	}



	void OnRevive(class APawn* Revived);
	void OnDeath(class APawn* Dying, class AActor* Attacker);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
};

// Class Frontiers.TLPathFollowing
// 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
class UTLPathFollowing : public UPathFollowingComponent
{
public:
	class UClass*                                      NavFilter;                                                 // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ReachTargetRadius;                                         // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R2AY[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLPathFollowing");
		return ptr;
	}



};

// Class Frontiers.TLPlayerCameraManager
// 0x0020 (FullSize[0x27D0] - InheritedSize[0x27B0])
class ATLPlayerCameraManager : public APlayerCameraManager
{
public:
	struct FLinearColor                                WarpTransitionFadeColor;                                   // 0x27B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WarpTransitionFadeFromAlpha;                               // 0x27C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WarpTransitionFadeToAlpha;                                 // 0x27C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WarpTransitionFadeDuration;                                // 0x27C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D9SM[0x4];                                     // 0x27CC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLPlayerCameraManager");
		return ptr;
	}



};

// Class Frontiers.TLPlayerController
// 0x0988 (FullSize[0x0F48] - InheritedSize[0x05C0])
class ATLPlayerController : public ATLBasePlayerController
{
public:
	unsigned char                                      UnknownData_1WY3[0x10];                                    // 0x05C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GamepadTargetEffectClass;                                  // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStatusEffect*                               GamepadTargetEffect;                                       // 0x05D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterName;                                             // 0x05E0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterID;                                               // 0x05F0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // 0x0600(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AccountNickname;                                           // 0x0610(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ZoneId;                                                    // 0x0620(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ZoneRegion;                                                // 0x0630(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerBuild;                                               // 0x0640(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1KW9[0x2D0];                                   // 0x0650(0x02D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Frontiers_ESkillSlot, Frontiers_ESkillSlot>   GamepadSkillSlotGroupMapping;                              // 0x0920(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K9M2[0x50];                                    // 0x0970(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMulticastFunctionComponent*                 MulticastComponent;                                        // 0x09C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGamePadComponent*                           GamePadComponent;                                          // 0x09C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCachedItemsOnGroundComponent*               CachedItemsOnGround;                                       // 0x09D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAchievementManager*                         AchievementManager;                                        // 0x09D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRepTraitPairArray                          TraitReplicate;                                            // 0x09E0(0x0118) (Edit, Net, DisableEditOnTemplate, EditConst, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VS2R[0x1E0];                                   // 0x0AF8(0x01E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Frontiers_ESkillSlot                               LastPressedSkill;                                          // 0x0CD8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N93B[0x6F];                                    // 0x0CD9(0x006F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GamePadMoveStepPercent;                                    // 0x0D48(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GamepadEnemySelectRange;                                   // 0x0D4C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GamepadEnemySelectRadius;                                  // 0x0D50(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GamepadCamZoomFactor;                                      // 0x0D54(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<Frontiers_EActorTargetType, float>            TargetPriority;                                            // 0x0D58(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                              CollisionBuffer;                                           // 0x0DA8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LookAheadDistance;                                         // 0x0DAC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FActivateSkillRequest                       CurrentSkillRequest;                                       // 0x0DB0(0x0028) (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FActivateSkillRequest                       PendingSkillRequest;                                       // 0x0DD8(0x0028) (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                                     ClickedLocation;                                           // 0x0E00(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BDH9[0x4];                                     // 0x0E0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      ClickedActor;                                              // 0x0E10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                             GroundClickParticleSystem;                                 // 0x0E18(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      FallbackSelectedActor;                                     // 0x0E20(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C49R[0x10];                                    // 0x0E28(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      HoveredActor;                                              // 0x0E38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      LastHoveredActor;                                          // 0x0E40(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T87H[0x10];                                    // 0x0E48(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GamepadInteractButtonWidgetClass;                          // 0x0E58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      GameHUDClass;                                              // 0x0E60(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GameplayErrorDuration;                                     // 0x0E68(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4A2I[0x4];                                     // 0x0E6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGamepadInteractButtonWidget*                GamepadInteractButtonWidget;                               // 0x0E70(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6KYW[0x8];                                     // 0x0E78(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLUserWidget*                               ModalMapCanvasWidget;                                      // 0x0E80(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                                 ModalMapWidget;                                            // 0x0E88(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     AccountId;                                                 // 0x0E90(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint64_t                                           AccountIdHash;                                             // 0x0EA0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsAdmin;                                                  // 0x0EA8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZLPI[0xB];                                     // 0x0EA9(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RotationFrequencyDampingThreshold;                         // 0x0EB4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C455[0x90];                                    // 0x0EB8(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLPlayerController");
		return ptr;
	}



	void ZoomCam(float Zoom);
	void ToggleVanityCam();
	void ToggleMap();
	void ToggleInterface();
	void ToggleFortEditMenu();
	void ToggleAreaMap();
	void TLClientTravel(const struct FString& URL, const struct FString& MuxerToken);
	void ServerUpdateSession(const struct FString& ChangedSessionId);
	void ServerUpdateMovementStatus(bool bRequestingMove);
	void ServerSetDifficulty(int Difficulty);
	void ServerSetCharacterCheat(const struct FString& CharID, const struct FString& CharName);
	void ServerSendPetToTown(TArray<struct FCatalogTableRowHandle> ShoppingList);
	void ServerResurrect(Frontiers_EDeathReviveOption ReviveOption);
	void ServerRequestCharacterSkillList(class ATLCharacter* TargetCharacter);
	void ServerReportUser(const struct FTLUserAccount& ReportedPlayer, FrontiersUI_EUserReportCategory ReportCategory, const struct FString& ClientLanguage, const struct FString& UserText, const struct FString& ChatMessage, const struct FString& DebugInfo);
	void ServerOperate(class AActor* Actor);
	void ServerKeepAlive();
	void ServerHandleSavedMovesOverflow(uint32_t EventId);
	void ServerDebugKillPlayer();
	void OnTraitUpdated();
	bool STATIC_IsCorrectNetMode(class APlayerController* Controller);
	struct FText STATIC_GetWardrobeListing(class APawn* InPawn);
	class ATLCharacter* GetTLCharacter();
	class USkillManager* GetSkillManagerFromController();
	class AActor* GetSelectedActor();
	class ATLPlayerController* STATIC_GetLocalTLPlayerController(class UObject* WorldContextObject);
	class ATLCharacter* STATIC_GetLocalTLCharacter(class UObject* WorldContextObject);
	struct FString STATIC_GetDebugInteractionString(class AActor* Actor);
	Frontiers_ESkillSet GetActiveSkillSet();
	void DebugServerSetAndLoadPlayer(const struct FString& AccountName, const struct FString& CharID, const struct FString& CharName, bool bCanAppendDevIndex, int DebugAccountSuffix, const struct FFrontiersSession& DebugSession);
	void ClientSetDebugAccountSuffix(int Suffix);
	void ClientSendInactivityWarning(float SecondsTilDisconnect);
	void ClientSendDisconnect(FrontiersUI_EDisconnectReason reason);
	void ClientReceiveCharacterSkillList(class ATLCharacter* TargetCharacter, TArray<struct FSkillRepArrayEntry> SkillList);
	void ClientPlayQuip(Frontiers_ENarratorQuip Quip);
	void ClientJoinLiveSession(const struct FName& SessionName);
	void CheckPlayerActivity();
};

// Class Frontiers.TLPlayerState
// 0x00B0 (FullSize[0x03D0] - InheritedSize[0x0320])
class ATLPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData_NIW5[0x30];                                    // 0x0320(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerTableRowHandle                       PlayerRowHandle;                                           // 0x0350(0x0010) (Net, Protected, NativeAccessSpecifierProtected)
	struct FString                                     AccountNickname;                                           // 0x0360(0x0010) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     AccountId;                                                 // 0x0370(0x0010) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ETLPlatform                              HostPlatform;                                              // 0x0380(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C2XR[0x7];                                     // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlatformAccountId;                                         // 0x0388(0x0010) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAreaTableRowHandle                         CurrentAreaRowHandle;                                      // 0x0398(0x0010) (Net, Protected, NativeAccessSpecifierProtected)
	struct FVector_NetQuantize                         CurrentAreaRelativeLocation;                               // 0x03A8(0x000C) (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Difficulty;                                                // 0x03B4(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHardcore;                                                 // 0x03B8(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GFMP[0x17];                                    // 0x03B9(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLPlayerState");
		return ptr;
	}



	void OnDeath(class APawn* Dying, class AActor* Attacker);
	void MulticastPlayerPickedUpItem(const struct FName& ItemRowName);
	void MulticastPlayerDied(const struct FText& KillerName);
};

// Class Frontiers.TLPostProcessManager
// 0x00C0 (FullSize[0x0170] - InheritedSize[0x00B0])
class UTLPostProcessManager : public UActorComponent
{
public:
	class UMaterial*                                   VignetteMaterial;                                          // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    VignetteMaterialInstance;                                  // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CustomVignetteFadeTime;                                    // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ACQV[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          OutlineHighMaterial;                                       // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          OutlineLowMaterial;                                        // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTexture*>                            CustomVignettes;                                           // 0x00D8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UP3P[0x9];                                     // 0x00E8(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsOcclusionShaderEnabled;                                 // 0x00F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HPRN[0x6];                                     // 0x00F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialParameterCollection*                PPMaterialGlobals;                                         // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  ColorGradingLUT;                                           // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WQZC[0x4];                                     // 0x0108(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDepthOfFieldOverrideRequest                DOFOriginalSettings;                                       // 0x010C(0x000C) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VQX5[0x4];                                     // 0x0118(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDepthOfFieldOverrideRequest                DOFTransitionTo;                                           // 0x011C(0x000C) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDepthOfFieldOverrideRequest                DOFTransitionFrom;                                         // 0x0128(0x000C) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y27G[0x3C];                                    // 0x0134(0x003C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLPostProcessManager");
		return ptr;
	}



};

// Class Frontiers.TLPresenceSubsystem
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTLPresenceSubsystem : public UGameInstanceSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLPresenceSubsystem");
		return ptr;
	}



};

// Class Frontiers.TLProjectileMovementComponent
// 0x01C0 (FullSize[0x0390] - InheritedSize[0x01D0])
class UTLProjectileMovementComponent : public UProjectileMovementComponent
{
public:
	Frontiers_EMissileMovementType                     MovementType;                                              // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FJF2[0x3];                                     // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SideAccelerationAmplitude;                                 // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SideAccelerationFrequency;                                 // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SideAccelerationTimeOffset;                                // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSideAccelerationRandomTimeOffset;                         // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCrawlAlongGround;                                         // 0x01E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChaoticPath;                                              // 0x01E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CJOK[0x1];                                     // 0x01E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChaoticPathTimerMax;                                       // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChaoticPathMaxArc;                                         // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAbsZ;                                                     // 0x01EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2E1C[0x3];                                     // 0x01ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GroundOffset;                                              // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MagnitudeVariationMax;                                     // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrequencyVariationMax;                                     // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              XAxisAmplitude;                                            // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              XAxisFrequency;                                            // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZAxisAmplitude;                                            // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZAxisFrequency;                                            // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              XAxisTimeOffset;                                           // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              XAxisRampDuration;                                         // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZAxisRampDuration;                                         // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Frontiers_EMissileMovementTransitionType           MissileAmplitudeTransitionType;                            // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IF8C[0x177];                                   // 0x0219(0x0177) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLProjectileMovementComponent");
		return ptr;
	}



};

// Class Frontiers.TLRecastNavMesh
// 0x0000 (FullSize[0x04D8] - InheritedSize[0x04D8])
class ATLRecastNavMesh : public ARecastNavMesh
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLRecastNavMesh");
		return ptr;
	}



};

// Class Frontiers.TLRemoteSession
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UTLRemoteSession : public UObject
{
public:
	unsigned char                                      UnknownData_WUB7[0x38];                                    // 0x0028(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLLocalPlayer*                              OwnerLocalPlayer;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLRemoteSession");
		return ptr;
	}



};

// Class Frontiers.MaterialManagerComponent
// 0x00B8 (FullSize[0x0168] - InheritedSize[0x00B0])
class UMaterialManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_88VL[0x4];                                     // 0x00B0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       ActiveRequestID;                                           // 0x00B4(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_93B5[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FGuid, struct FMaterialOverrideRequest> MaterialOverrideRequests;                                  // 0x00C8(0x0050) (NativeAccessSpecifierPrivate)
	TMap<class UMeshComponent*, struct FCachedMaterialArray> CachedMaterials;                                           // 0x0118(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.MaterialManagerComponent");
		return ptr;
	}



	void RestoreMaterials();
	void ResolveOverrideRequest(const struct FGuid& RequestID);
	void OverrideParentMaterials(class UMaterialInterface* OverrideParent, int Priority, const struct FGuid& RequestID);
};

// Class Frontiers.TLMaterialUtils
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTLMaterialUtils : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLMaterialUtils");
		return ptr;
	}



	void STATIC_SetScalarParameterValueOnAllMeshes(class AActor* Actor, const struct FName& ParameterName, float ParameterValue);
	class UMaterialInstanceDynamic* STATIC_CreateDynamicMaterialOfType(class UMaterialInterface* InOriginalMaterial, class UMaterialInterface* InNewParent, class UObject* ObjectOuter);
};

// Class Frontiers.TLReplicationGraph
// 0x00D8 (FullSize[0x0570] - InheritedSize[0x0498])
class UTLReplicationGraph : public UReplicationGraph
{
public:
	unsigned char                                      UnknownData_0CUH[0x8];                                     // 0x0498(0x0008) Fix Super Size
	unsigned char                                      UnknownData_QM4T[0x90];                                    // 0x04A0(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UReplicationGraphNode_GridSpatialization2D*  GridNode;                                                  // 0x0530(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReplicationGraphNode_ActorList*             AlwaysRelevantNode;                                        // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTLConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;                           // 0x0540(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsWithoutNetConnection;                                // 0x0550(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              PendingActors;                                             // 0x0560(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLReplicationGraph");
		return ptr;
	}



};

// Class Frontiers.TLServerPublisher
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UTLServerPublisher : public UActorComponent
{
public:
	unsigned char                                      UnknownData_9TTL[0x60];                                    // 0x00B0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLServerPublisher");
		return ptr;
	}



};

// Class Frontiers.TLSpringArmComponent
// 0x0110 (FullSize[0x0390] - InheritedSize[0x0280])
class UTLSpringArmComponent : public USpringArmComponent
{
public:
	unsigned char                                      UnknownData_E4PZ[0x10];                                    // 0x0280(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDepthOfFieldOverrideRequest                NearFieldDOFSettings;                                      // 0x0290(0x000C) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DOFTransitionInDuration;                                   // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DOFTransitionCancelDuration;                               // 0x02A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SecondActorBias;                                           // 0x02A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SecondActorZoomOut;                                        // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultZoomRate;                                           // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinZoomLength;                                             // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ZoomAngleAdjust;                                           // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<FrontiersUI_ECameraType, struct FCameraRequest> CameraTypeMap;                                             // 0x02B8(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCameraRequest>                      CameraRequestTypes;                                        // 0x0308(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FCameraRequest                              CurrentCustomRequest;                                      // 0x0318(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              BaseCameraYaw;                                             // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J2ZT[0x4C];                                    // 0x0344(0x004C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLSpringArmComponent");
		return ptr;
	}



	int RequestArmMove(float NewLength, float NewPitch);
	void ClearArmMoveRequest(int Key);
};

// Class Frontiers.TLTransmogDye
// 0x0350 (FullSize[0x0400] - InheritedSize[0x00B0])
class UTLTransmogDye : public UPlayerComponent
{
public:
	struct FEffectDefinition                           TransmogPreviewVFX;                                        // 0x00B0(0x00D0) (Edit, NativeAccessSpecifierPublic)
	struct FEffectDefinition                           TransmogVFX;                                               // 0x0180(0x00D0) (Edit, NativeAccessSpecifierPublic)
	struct FEffectDefinition                           DyePreviewVFX;                                             // 0x0250(0x00D0) (Edit, NativeAccessSpecifierPublic)
	struct FEffectDefinition                           DyeVFX;                                                    // 0x0320(0x00D0) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K42T[0x10];                                    // 0x03F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLTransmogDye");
		return ptr;
	}



	void ServerTransmog(int InventoryEntryId, const struct FName& NewItemRowName, const struct FName& NewDyeRowName);
	void ServerMarkAllTransmogDyesSeen();
	void ClientTransmogCompleted(int InventoryEntryId, Frontiers_ETransmogOperation Operation);
};

// Class Frontiers.TrapComponent
// 0x0088 (FullSize[0x0138] - InheritedSize[0x00B0])
class UTrapComponent : public UActorComponent
{
public:
	struct FTrapSpawnTableRowHandle                    TrapOverride;                                              // 0x00B0(0x0010) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      OverrideMonsterSpawner[0x28];                              // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FMonsterSpawnTableRowHandle                 OverrideMonsterSpawnRow;                                   // 0x00E8(0x0010) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      OverrideHazard[0x28];                                      // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	bool                                               bOverrideHazardDuration;                                   // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4P1P[0x3];                                     // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OverrideHazardDuration;                                    // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideTrapDelay;                                        // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6WPE[0x3];                                     // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OverrideTrapDelay;                                         // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownSeconds;                                           // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E4CE[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TrapComponent");
		return ptr;
	}



	void TrapTriggeredOnClient(class AActor* TriggeredBy, float Delay);
	void BlueprintTriggerTrap(class AActor* TriggeredBy);
};

// Class Frontiers.CanTriggerTrapInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCanTriggerTrapInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.CanTriggerTrapInterface");
		return ptr;
	}



};

// Class Frontiers.AnimNotify_TriggerTrap
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnimNotify_TriggerTrap : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.AnimNotify_TriggerTrap");
		return ptr;
	}



};

// Class Frontiers.TLTravelComponent
// 0x0648 (FullSize[0x06F8] - InheritedSize[0x00B0])
class UTLTravelComponent : public UPlayerComponent
{
public:
	Frontiers_EServerTravelDebugMessage                ServerTravelDebugMessage;                                  // 0x00B0(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0LX2[0xB];                                     // 0x00B1(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUnlockAllWarps;                                           // 0x00BC(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ETravelState                             ServerTravelState;                                         // 0x00BD(0x0001) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_ETravelState                             ClientTravelState;                                         // 0x00BE(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z5Z1[0x1];                                     // 0x00BF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     SpawnLocation;                                             // 0x00C0(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bClientHasLoadedLevels;                                    // 0x00CC(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bClientHasFinishedWarp;                                    // 0x00CD(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bClientHasLoadedActors;                                    // 0x00CE(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLevelsAreLoaded;                                          // 0x00CF(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                       AreaGuid;                                                  // 0x00D0(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       DesiredSpawnLocationName;                                  // 0x00E0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      LimboStatusEffect;                                         // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      MapworksTravelConfirmationWidget;                          // 0x00F0(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FModalWidgetDefinition                      DungeonLeaveConfirmationWidget;                            // 0x0350(0x0260) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FName>                               SeenAreaNames;                                             // 0x05B0(0x0010) (Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5TK8[0xE8];                                    // 0x05C0(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      WarpedStatusEffect;                                        // 0x06A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RequiredActorLoadPercent;                                  // 0x06B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RequiredActorLoadRadius;                                   // 0x06B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxActorLoadWaitTimeSeconds;                               // 0x06B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WarpedStatusEffectDuration;                                // 0x06BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PetTeleportToMaxRadiusAfterTravelFirstAttempt;             // 0x06C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PetTeleportToMaxRadiusAfterTravelSecondAttempt;            // 0x06C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PetTeleportToMinDistanceAfterTravel;                       // 0x06C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PetTeleportMaxAttemptsAfterTravel;                         // 0x06CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PetPositioningDelaySeconds;                                // 0x06D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PetPositioningMaxDelayedAttempts;                          // 0x06D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W5ER[0x20];                                    // 0x06D8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLTravelComponent");
		return ptr;
	}



	void STATIC_SetStartingAreaName(class AActor* Actor, const struct FName& InStartingAreaName);
	void ServerInformWarpComplete();
	void ServerInformLoadComplete();
	void ServerInformClientTravelStateChanged(Frontiers_ETravelState InClientTravelState);
	void ServerInformActorCountReached();
	void ServerExecuteBotTravel();
	void ServerConfirmWarp();
	void ServerCancelWarp();
	void OnRep_UnlockAllWarps();
	void ClientTravelRequested(const struct FName& AreaRowName);
	void ClientTravelCanceled();
	void ClientShowWarpError(Frontiers_ECanUseWarp WarpResult);
	void ClientSetToPlaying();
	void ClientSetSpawnLocation(const struct FVector& InSpawnLocation);
	void ClientSetPendingContentVersion(int InPendingContentVersion);
	void ClientSetAreaGuid(const struct FGuid& InAreaGuid);
	void ClientSetActorLoadInfo(int InExpectedActorCount, const struct FGuid& InConductorHandlerGuid, int InConductorHandlerCount);
	void ClientOnWarpConfirmationRequested(class AWarpGadget* DesiredWarpGadget, Frontiers_ETravelConfirmationType ConfirmationType);
	void ClientLevelLoadSucceeded(const struct FVector& InActualSpawnLocation);
	void ClientActorLoadTimedOut();
};

// Class Frontiers.FrontiersFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFrontiersFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.FrontiersFunctionLibrary");
		return ptr;
	}



	bool STATIC_IsEditor();
	Frontiers_ETLPlatform STATIC_GetHostPlatform();
};

// Class Frontiers.WidgetInComponentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWidgetInComponentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.WidgetInComponentInterface");
		return ptr;
	}



};

// Class Frontiers.TLWorldSettings
// 0x0038 (FullSize[0x03D8] - InheritedSize[0x03A0])
class ATLWorldSettings : public AWorldSettings
{
public:
	class UClass*                                      ConductorClass;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      EditorConductorHandler;                                    // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAreaTableRowHandle                         EditorPreviewArea;                                         // 0x03B0(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bRunWithoutServer;                                         // 0x03C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFetchSpreadsheetContentInEditor;                          // 0x03C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L3B0[0x6];                                     // 0x03C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AConductor*                                  ActiveConductor;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorPoolComponent*                         ActorPool;                                                 // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TLWorldSettings");
		return ptr;
	}



};

// Class Frontiers.ToggleMeshMaterial
// 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
class UToggleMeshMaterial : public UToggleSceneComponent
{
public:
	struct FName                                       MaterialParameterName;                                     // 0x0200(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaterialParameterOffValue;                                 // 0x0208(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaterialParameterOnValue;                                  // 0x020C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ToggleMeshMaterial");
		return ptr;
	}



};

// Class Frontiers.ToggleSceneComponentParentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UToggleSceneComponentParentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ToggleSceneComponentParentInterface");
		return ptr;
	}



};

// Class Frontiers.TrackFollowingComponent
// 0x0060 (FullSize[0x0B90] - InheritedSize[0x0B30])
class UTrackFollowingComponent : public UTLCharacterMovementComponent
{
public:
	float                                              MaxSpeed;                                                  // 0x0B30(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPatrol;                                                   // 0x0B34(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HJPE[0x3];                                     // 0x0B35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TrackAcceleration;                                         // 0x0B38(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BEBR[0x4];                                     // 0x0B3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATrackNode*                                  CurrentNode;                                               // 0x0B40(0x0008) (Edit, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTrackFollowingData                         TrackFollowingData;                                        // 0x0B48(0x0010) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint32_t                                           ControlPointId;                                            // 0x0B58(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ControlPointParameter;                                     // 0x0B5C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentSpeed;                                              // 0x0B60(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IWRM[0x4];                                     // 0x0B64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTrackFollowingComponent*                    NextInChain;                                               // 0x0B68(0x0008) (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTrackFollowingComponent*                    PreviousInChain;                                           // 0x0B70(0x0008) (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMoveWhileBusy;                                            // 0x0B78(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GFWT[0x3];                                     // 0x0B79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LengthOnTrack;                                             // 0x0B7C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BTPN[0x4];                                     // 0x0B80(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ClientSpeedAdjustmentPercent;                              // 0x0B84(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QVVW[0x8];                                     // 0x0B88(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TrackFollowingComponent");
		return ptr;
	}



	void OnRep_TrackFollowingData();
	void OnRep_CurrentNode();
	class ATrackNode* STATIC_GetAttachedTrackFromActor(class AActor* Actor);
	void STATIC_AttachActorToTrack(class AActor* Actor, class ATrackNode* Target);
};

// Class Frontiers.TrackNode
// 0x0038 (FullSize[0x0478] - InheritedSize[0x0440])
class ATrackNode : public AHazard
{
public:
	class UClass*                                      HazardVisualSplineFollowerClass;                           // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USplineFollowerComponent*                    HazardVisualSplineFollower;                                // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UReplicatedSplineComponent*                  Spline;                                                    // 0x0450(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bTrackHazardActive;                                        // 0x0458(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZYBW[0x7];                                     // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATrackBuffer*                                EndBufferActor;                                            // 0x0460(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      RequiredStatusToExtend;                                    // 0x0468(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinDistanceToExtend;                                       // 0x0470(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxDistanceToExtend;                                       // 0x0474(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TrackNode");
		return ptr;
	}



	class ATrackNode* STATIC_SpawnTrackNode(class AActor* Source, const struct FVector& Start, const struct FVector& End, class UClass* TrackNodeClass);
	void SetEndBufferActor(class ATrackBuffer* Actor);
	void RequestExtendTrack(class AActor* Source, float LookAheadSeconds, bool bExtendIfStationary);
	void OnRep_TrackHazardActive(bool bTrackHazardWasActive);
	struct FVector GetStartTangent();
	struct FVector GetStartPoint();
	struct FVector GetEndTangent();
	struct FVector GetEndPoint();
	void ExtendTrack(class AActor* Source, const struct FVector& NewLocation);
};

// Class Frontiers.TrackBuffer
// 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
class ATrackBuffer : public AActor
{
public:
	unsigned char                                      UnknownData_YMWI[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATrackNode*                                  TrackNode;                                                 // 0x0228(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0230(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TrackBuffer");
		return ptr;
	}



	void ShowTurretHighlight();
	void ShowTrackHighlight();
	void STATIC_RemoveTracks(class APawn* BufferOwner, class UClass* BufferContainerClass, class UClass* TurretContainerClass);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
	void ClearHighlights();
};

// Class Frontiers.TurretActor
// 0x0000 (FullSize[0x0730] - InheritedSize[0x0730])
class ATurretActor : public ATLCharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TurretActor");
		return ptr;
	}



};

// Class Frontiers.TrainLeadComponent
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class UTrainLeadComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_1E22[0x20];                                    // 0x00B0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TrainLeadComponent");
		return ptr;
	}



};

// Class Frontiers.TrainCarDataComponent
// 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
class UTrainCarDataComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_AV8H[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMinionTableRowHandle                       MinionRowHandle;                                           // 0x00B8(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	Frontiers_ESkillSlot                               TrainCarSkillSlot;                                         // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CP2E[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CarOrder;                                                  // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VWT2[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x00D8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.TrainCarDataComponent");
		return ptr;
	}



	class ATurretActor* STATIC_SpawnTrainCar(class AActor* Actor, const struct FGameplayTagContainer& InGameplayTags, const struct FVector& Location);
	Frontiers_ESkillSlot STATIC_GetTrainCarSkillSlot(class AActor* Actor, const struct FGameplayTagContainer& InGameplayTags);
	class ATurretActor* STATIC_GetTrainCarMatchingGameplayTag(class AActor* Actor, const struct FGameplayTagContainer& InGameplayTags);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
	struct FMinionTableRowHandle STATIC_GetFirstTrainCarRowHandle(class AActor* Actor);
};

// Class Frontiers.WardrobeComponent
// 0x00F0 (FullSize[0x01A0] - InheritedSize[0x00B0])
class UWardrobeComponent : public UActorComponent
{
public:
	struct FWardrobePart                               Part;                                                      // 0x00B0(0x00C0) (Edit, Net, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      PreviewDyeMatrix;                                          // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DefaultSkinTone;                                           // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DefaultHair;                                               // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DefaultEye;                                                // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7PW9[0x8];                                     // 0x0190(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWardrobe*                                   Wardrobe;                                                  // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.WardrobeComponent");
		return ptr;
	}



	void OnRep_WardrobePart();
};

// Class Frontiers.WardrobeChildSkeletalMeshComponent
// 0x0000 (FullSize[0x0ED0] - InheritedSize[0x0ED0])
class UWardrobeChildSkeletalMeshComponent : public USkeletalMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.WardrobeChildSkeletalMeshComponent");
		return ptr;
	}



};

// Class Frontiers.Wardrobe
// 0x03D8 (FullSize[0x0400] - InheritedSize[0x0028])
class UWardrobe : public UObject
{
public:
	unsigned char                                      UnknownData_953A[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWardrobePart>                       Parts;                                                     // 0x0040(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FCharacterCustomization                     CharacterCustomization;                                    // 0x0050(0x0020) (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UParticleSystemComponent*>            CopiedParticleSystems;                                     // 0x0070(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<struct FName, class UParticleSystem*>         MergedMeshParticleSystems;                                 // 0x0080(0x0050) (Protected, NativeAccessSpecifierProtected)
	TArray<class USkeletalMeshComponent*>              PartSkeletalMeshComponents;                                // 0x00D0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FItemAppearanceData>                 ActorsToAttach;                                            // 0x00E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8E5D[0x28];                                    // 0x00F0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FItemReplicatedData>                 ReplicatedWardrobeItems;                                   // 0x0118(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FItemReplicatedData>                 ReplicatedAttachmentItems;                                 // 0x0128(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BOGR[0x8];                                     // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FItemAppearanceData>                 CurrentWardrobeItems;                                      // 0x0140(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FItemAppearanceData>                 CurrentAttachmentItems;                                    // 0x0150(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FWardrobePart                               WardrobeOverride[0x2];                                     // 0x0160(0x0180) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<struct FName, class UParticleSystem*>         WardrobeOverrideParticles;                                 // 0x02E0(0x0050) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N84I[0x8];                                     // 0x0330(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      ParentMeshComponent;                                       // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XAYD[0x18];                                    // 0x0340(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FGameplayTag, bool>                    VisibilityOverride;                                        // 0x0358(0x0050) (Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, struct FVector>          AttachOffsetOverride;                                      // 0x03A8(0x0050) (Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          ParentBaseMaterial;                                        // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.Wardrobe");
		return ptr;
	}



	void OnAssetLoadFinished(int InAsyncIndex);
};

// Class Frontiers.WardrobeItemPropertyInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWardrobeItemPropertyInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.WardrobeItemPropertyInterface");
		return ptr;
	}



};

// Class Frontiers.WardrobePropComponent
// 0x0140 (FullSize[0x0200] - InheritedSize[0x00C0])
class UWardrobePropComponent : public UOperableComponent
{
public:
	unsigned char                                      UnknownData_J82N[0x20];                                    // 0x00C0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       RequiredOperatorTags;                                      // 0x00E0(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	bool                                               bHardcoreOnly;                                             // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Frontiers_EPlayerGender                            Gender;                                                    // 0x0101(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J1CE[0x2];                                     // 0x0102(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                FemaleWardrobeItemGameplayTag;                             // 0x0104(0x0008) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                                MaleWardrobeItemGameplayTag;                               // 0x010C(0x0008) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       MaleWardrobeItemPropertyName;                              // 0x0114(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       FemaleWardrobeItemPropertyName;                            // 0x011C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YWZD[0xC];                                     // 0x0124(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectDefinition                           GenderChangeEffect;                                        // 0x0130(0x00D0) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.WardrobePropComponent");
		return ptr;
	}



	void OnRep_Gender();
};

// Class Frontiers.WarpBack
// 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
class AWarpBack : public AWarpGadget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.WarpBack");
		return ptr;
	}



	class AWarpBack* STATIC_SpawnWarpBack(class AActor* Actor, class UClass* WarpClass);
	class AWarpBack* STATIC_SpawnDefaultWarpBack(class AActor* Actor);
};

// Class Frontiers.WarpBackLocation
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class AWarpBackLocation : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.WarpBackLocation");
		return ptr;
	}



};

// Class Frontiers.SpawnLocationDestination
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class USpawnLocationDestination : public UActorComponent
{
public:
	Frontiers_EWarpToIndex                             DestinationWarpToIndex;                                    // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MVTG[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.SpawnLocationDestination");
		return ptr;
	}



};

// Class Frontiers.WarpLocal
// 0x0010 (FullSize[0x04B0] - InheritedSize[0x04A0])
class AWarpLocal : public AGadget
{
public:
	class AActor*                                      LocalDestination;                                          // 0x04A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bNoCameraLag;                                              // 0x04A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPlayWarpCameraFade;                                       // 0x04A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LK5Y[0x6];                                     // 0x04AA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.WarpLocal");
		return ptr;
	}



};

// Class Frontiers.WaypointGadget
// 0x0020 (FullSize[0x04C0] - InheritedSize[0x04A0])
class AWaypointGadget : public AGadget
{
public:
	bool                                               bAlwaysEnabled;                                            // 0x04A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YRIT[0x7];                                     // 0x04A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoxComponent*                               ClickVolume;                                               // 0x04A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpawnLocationDestination*                   Destination;                                               // 0x04B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMapMarkerComponent*                         MapMarker;                                                 // 0x04B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.WaypointGadget");
		return ptr;
	}



	void UpdateStatus(bool bIsUnlocked);
	void PlayUnlockEvent(class AActor* Operator);
};

// Class Frontiers.XboxMultiplayerActivity
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UXboxMultiplayerActivity : public UPlayerComponent
{
public:
	unsigned char                                      UnknownData_IEWQ[0x60];                                    // 0x00B0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.XboxMultiplayerActivity");
		return ptr;
	}



};

// Class Frontiers.ZoneInstanceManager
// 0x00A8 (FullSize[0x0158] - InheritedSize[0x00B0])
class UZoneInstanceManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData_LM4S[0x28];                                    // 0x00B0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ZoneId;                                                    // 0x00D8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<uint64_t, TWeakObjectPtr<class APlayerController>> CurrentPlayers;                                            // 0x00E8(0x0050) (Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<uint64_t>                                   CurrentPortalProxies;                                      // 0x0138(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FString                                     PartyIdForZone;                                            // 0x0148(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Frontiers.ZoneInstanceManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
