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

// Function cc_anim_charactercreate_bp.cc_anim_charactercreate_bp_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void Ucc_anim_charactercreate_bp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function cc_anim_charactercreate_bp.cc_anim_charactercreate_bp_C.AnimGraph");

	Ucc_anim_charactercreate_bp_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function cc_anim_charactercreate_bp.cc_anim_charactercreate_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_cc_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_9B5B3D474207A69108402A952792F3E6
// (BlueprintEvent)
void Ucc_anim_charactercreate_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_cc_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_9B5B3D474207A69108402A952792F3E6()
{
	static auto fn = UObject::FindObject<UFunction>("Function cc_anim_charactercreate_bp.cc_anim_charactercreate_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_cc_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_9B5B3D474207A69108402A952792F3E6");

	Ucc_anim_charactercreate_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_cc_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_9B5B3D474207A69108402A952792F3E6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function cc_anim_charactercreate_bp.cc_anim_charactercreate_bp_C.ExecuteUbergraph_cc_anim_charactercreate_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Ucc_anim_charactercreate_bp_C::ExecuteUbergraph_cc_anim_charactercreate_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cc_anim_charactercreate_bp.cc_anim_charactercreate_bp_C.ExecuteUbergraph_cc_anim_charactercreate_bp");

	Ucc_anim_charactercreate_bp_C_ExecuteUbergraph_cc_anim_charactercreate_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
