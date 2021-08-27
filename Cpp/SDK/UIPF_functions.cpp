// Name: Torchlight3, Version: 4.26.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UIPF.UIPFActor.UpdateTransition
// (Native, Protected)
void AUIPFActor::UpdateTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPF.UIPFActor.UpdateTransition");

	AUIPFActor_UpdateTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIPF.UIPFActor.TrySleep
// (Final, Native, Public)
void AUIPFActor::TrySleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPF.UIPFActor.TrySleep");

	AUIPFActor_TrySleep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIPF.UIPFActor.SkeletonSleep
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*     Comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Bone                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AUIPFActor::SkeletonSleep(class UPrimitiveComponent* Comp, const struct FName& Bone)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPF.UIPFActor.SkeletonSleep");

	AUIPFActor_SkeletonSleep_Params params;
	params.Comp = Comp;
	params.Bone = Bone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIPF.UIPFActor.Init
// (Final, Native, Public)
void AUIPFActor::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPF.UIPFActor.Init");

	AUIPFActor_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIPF.UIPFActor.DelayPhysEnabled
// (Final, Native, Public)
void AUIPFActor::DelayPhysEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPF.UIPFActor.DelayPhysEnabled");

	AUIPFActor_DelayPhysEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIPF.UIPFImpulse.InitializeImpulse
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ImpulseRadius                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UsingTruePhys                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UsingShaderInt                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ImpulseStrength                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AUIPFImpulse::InitializeImpulse(float ImpulseRadius, bool UsingTruePhys, bool UsingShaderInt, float ImpulseStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPF.UIPFImpulse.InitializeImpulse");

	AUIPFImpulse_InitializeImpulse_Params params;
	params.ImpulseRadius = ImpulseRadius;
	params.UsingTruePhys = UsingTruePhys;
	params.UsingShaderInt = UsingShaderInt;
	params.ImpulseStrength = ImpulseStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIPF.UIPFInteractor.PhysCheck
// (Native, Protected)
void UUIPFInteractor::PhysCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPF.UIPFInteractor.PhysCheck");

	UUIPFInteractor_PhysCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIPF.UIPFInteractor.OnDeactivationEndOverlap
// (Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIPFInteractor::OnDeactivationEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPF.UIPFInteractor.OnDeactivationEndOverlap");

	UUIPFInteractor_OnDeactivationEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIPF.UIPFInteractor.ManuallyActivateFoliage
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           WithImpulse                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ImpulseStrength                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              Hit                            (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UUIPFInteractor::ManuallyActivateFoliage(bool WithImpulse, float ImpulseStrength, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPF.UIPFInteractor.ManuallyActivateFoliage");

	UUIPFInteractor_ManuallyActivateFoliage_Params params;
	params.WithImpulse = WithImpulse;
	params.ImpulseStrength = ImpulseStrength;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIPF.UIPFManager.ImpulseAtLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ImpulseDiameter                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ImpulseStrength                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AUIPFManager::ImpulseAtLocation(const struct FVector& Location, float ImpulseDiameter, float ImpulseStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPF.UIPFManager.ImpulseAtLocation");

	AUIPFManager_ImpulseAtLocation_Params params;
	params.Location = Location;
	params.ImpulseDiameter = ImpulseDiameter;
	params.ImpulseStrength = ImpulseStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIPF.UIPFManager.ForceAppliedAtLocation
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Strength                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AUIPFManager::ForceAppliedAtLocation(const struct FVector& Loc, float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPF.UIPFManager.ForceAppliedAtLocation");

	AUIPFManager_ForceAppliedAtLocation_Params params;
	params.Loc = Loc;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIPF.UIPFManager.FoliageForceAtLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          fStrength                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          fSizePercent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsImpulse                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AUIPFManager::FoliageForceAtLocation(float fStrength, float fSizePercent, const struct FVector& HitLocation, bool bIsImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPF.UIPFManager.FoliageForceAtLocation");

	AUIPFManager_FoliageForceAtLocation_Params params;
	params.fStrength = fStrength;
	params.fSizePercent = fSizePercent;
	params.HitLocation = HitLocation;
	params.bIsImpulse = bIsImpulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
