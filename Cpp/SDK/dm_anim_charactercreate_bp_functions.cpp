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

// Function dm_anim_charactercreate_bp.dm_anim_charactercreate_bp_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void Udm_anim_charactercreate_bp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function dm_anim_charactercreate_bp.dm_anim_charactercreate_bp_C.AnimGraph");

	Udm_anim_charactercreate_bp_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function dm_anim_charactercreate_bp.dm_anim_charactercreate_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_dm_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_BF29CBD5452A7A54626E6DB8CC1FDA1F
// (BlueprintEvent)
void Udm_anim_charactercreate_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_dm_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_BF29CBD5452A7A54626E6DB8CC1FDA1F()
{
	static auto fn = UObject::FindObject<UFunction>("Function dm_anim_charactercreate_bp.dm_anim_charactercreate_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_dm_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_BF29CBD5452A7A54626E6DB8CC1FDA1F");

	Udm_anim_charactercreate_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_dm_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_BF29CBD5452A7A54626E6DB8CC1FDA1F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function dm_anim_charactercreate_bp.dm_anim_charactercreate_bp_C.ExecuteUbergraph_dm_anim_charactercreate_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Udm_anim_charactercreate_bp_C::ExecuteUbergraph_dm_anim_charactercreate_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dm_anim_charactercreate_bp.dm_anim_charactercreate_bp_C.ExecuteUbergraph_dm_anim_charactercreate_bp");

	Udm_anim_charactercreate_bp_C_ExecuteUbergraph_dm_anim_charactercreate_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
