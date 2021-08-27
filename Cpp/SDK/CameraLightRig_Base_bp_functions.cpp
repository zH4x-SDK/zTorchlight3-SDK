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

// Function CameraLightRig_Base_bp.CameraLightRig_Base_bp_C.GetFillLight
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ULightComponent* ACameraLightRig_Base_bp_C::GetFillLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraLightRig_Base_bp.CameraLightRig_Base_bp_C.GetFillLight");

	ACameraLightRig_Base_bp_C_GetFillLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CameraLightRig_Base_bp.CameraLightRig_Base_bp_C.GetKeyLight
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ULightComponent* ACameraLightRig_Base_bp_C::GetKeyLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraLightRig_Base_bp.CameraLightRig_Base_bp_C.GetKeyLight");

	ACameraLightRig_Base_bp_C_GetKeyLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
