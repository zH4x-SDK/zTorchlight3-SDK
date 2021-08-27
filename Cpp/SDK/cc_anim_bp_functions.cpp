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

// Function cc_anim_bp.cc_anim_bp_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void Ucc_anim_bp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function cc_anim_bp.cc_anim_bp_C.AnimGraph");

	Ucc_anim_bp_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function cc_anim_bp.cc_anim_bp_C.SetCapeOverride
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CapeBlendAmount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UseCurve                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          blendValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Ucc_anim_bp_C::SetCapeOverride(float CapeBlendAmount, bool UseCurve, float* blendValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function cc_anim_bp.cc_anim_bp_C.SetCapeOverride");

	Ucc_anim_bp_C_SetCapeOverride_Params params;
	params.CapeBlendAmount = CapeBlendAmount;
	params.UseCurve = UseCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (blendValue != nullptr)
		*blendValue = params.blendValue;

}


// Function cc_anim_bp.cc_anim_bp_C.ExecuteUbergraph_cc_anim_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Ucc_anim_bp_C::ExecuteUbergraph_cc_anim_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cc_anim_bp.cc_anim_bp_C.ExecuteUbergraph_cc_anim_bp");

	Ucc_anim_bp_C_ExecuteUbergraph_cc_anim_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
