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

// Function PlayerPortrait_Base_bp.PlayerPortrait_Base_bp_C.GetMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkeletalMeshComponent* APlayerPortrait_Base_bp_C::GetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPortrait_Base_bp.PlayerPortrait_Base_bp_C.GetMesh");

	APlayerPortrait_Base_bp_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerPortrait_Base_bp.PlayerPortrait_Base_bp_C.GetIconCaptureLocator
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UArrowComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UArrowComponent* APlayerPortrait_Base_bp_C::GetIconCaptureLocator()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPortrait_Base_bp.PlayerPortrait_Base_bp_C.GetIconCaptureLocator");

	APlayerPortrait_Base_bp_C_GetIconCaptureLocator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerPortrait_Base_bp.PlayerPortrait_Base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APlayerPortrait_Base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPortrait_Base_bp.PlayerPortrait_Base_bp_C.UserConstructionScript");

	APlayerPortrait_Base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPortrait_Base_bp.PlayerPortrait_Base_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APlayerPortrait_Base_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPortrait_Base_bp.PlayerPortrait_Base_bp_C.ReceiveBeginPlay");

	APlayerPortrait_Base_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPortrait_Base_bp.PlayerPortrait_Base_bp_C.ExecuteUbergraph_PlayerPortrait_Base_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayerPortrait_Base_bp_C::ExecuteUbergraph_PlayerPortrait_Base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPortrait_Base_bp.PlayerPortrait_Base_bp_C.ExecuteUbergraph_PlayerPortrait_Base_bp");

	APlayerPortrait_Base_bp_C_ExecuteUbergraph_PlayerPortrait_Base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
