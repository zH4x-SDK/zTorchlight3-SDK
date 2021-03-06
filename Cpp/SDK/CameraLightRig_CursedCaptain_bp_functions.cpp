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

// Function CameraLightRig_CursedCaptain_bp.CameraLightRig_CursedCaptain_bp_C.GetCamera
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneCaptureComponent2D* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneCaptureComponent2D* ACameraLightRig_CursedCaptain_bp_C::GetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraLightRig_CursedCaptain_bp.CameraLightRig_CursedCaptain_bp_C.GetCamera");

	ACameraLightRig_CursedCaptain_bp_C_GetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CameraLightRig_CursedCaptain_bp.CameraLightRig_CursedCaptain_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ACameraLightRig_CursedCaptain_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraLightRig_CursedCaptain_bp.CameraLightRig_CursedCaptain_bp_C.UserConstructionScript");

	ACameraLightRig_CursedCaptain_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
