// Name: Torchlight3, Version: 1.0.0

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

// Function GenericItemBase.GenericItemBase_C.SetTickPoseOptimization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGenericItemBase_C::SetTickPoseOptimization(class USkeletalMeshComponent* SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericItemBase.GenericItemBase_C.SetTickPoseOptimization");

	AGenericItemBase_C_SetTickPoseOptimization_Params params;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GenericItemBase.GenericItemBase_C.DoFlippy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  SkeletalMesh2                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*       FlippyAnimation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGenericItemBase_C::DoFlippy(class USkeletalMeshComponent* SkeletalMesh, class USkeletalMeshComponent* SkeletalMesh2, class UAnimSequenceBase* FlippyAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericItemBase.GenericItemBase_C.DoFlippy");

	AGenericItemBase_C_DoFlippy_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.SkeletalMesh2 = SkeletalMesh2;
	params.FlippyAnimation = FlippyAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GenericItemBase.GenericItemBase_C.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)
void AGenericItemBase_C::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericItemBase.GenericItemBase_C.ReceiveActorBeginCursorOver");

	AGenericItemBase_C_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GenericItemBase.GenericItemBase_C.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)
void AGenericItemBase_C::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericItemBase.GenericItemBase_C.ReceiveActorEndCursorOver");

	AGenericItemBase_C_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GenericItemBase.GenericItemBase_C.ExecuteUbergraph_GenericItemBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGenericItemBase_C::ExecuteUbergraph_GenericItemBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericItemBase.GenericItemBase_C.ExecuteUbergraph_GenericItemBase");

	AGenericItemBase_C_ExecuteUbergraph_GenericItemBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
