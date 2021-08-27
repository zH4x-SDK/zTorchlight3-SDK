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

// Function ss_anim_charactercreate_bp.ss_anim_charactercreate_bp_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void Uss_anim_charactercreate_bp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ss_anim_charactercreate_bp.ss_anim_charactercreate_bp_C.AnimGraph");

	Uss_anim_charactercreate_bp_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function ss_anim_charactercreate_bp.ss_anim_charactercreate_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ss_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_B1375C3647ED42ED767CDCAE1062657D
// (BlueprintEvent)
void Uss_anim_charactercreate_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ss_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_B1375C3647ED42ED767CDCAE1062657D()
{
	static auto fn = UObject::FindObject<UFunction>("Function ss_anim_charactercreate_bp.ss_anim_charactercreate_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ss_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_B1375C3647ED42ED767CDCAE1062657D");

	Uss_anim_charactercreate_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ss_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_B1375C3647ED42ED767CDCAE1062657D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ss_anim_charactercreate_bp.ss_anim_charactercreate_bp_C.ExecuteUbergraph_ss_anim_charactercreate_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Uss_anim_charactercreate_bp_C::ExecuteUbergraph_ss_anim_charactercreate_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ss_anim_charactercreate_bp.ss_anim_charactercreate_bp_C.ExecuteUbergraph_ss_anim_charactercreate_bp");

	Uss_anim_charactercreate_bp_C_ExecuteUbergraph_ss_anim_charactercreate_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
