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

// Function gobgeneric_anim_bp.gobgeneric_anim_bp_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void Ugobgeneric_anim_bp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function gobgeneric_anim_bp.gobgeneric_anim_bp_C.AnimGraph");

	Ugobgeneric_anim_bp_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function gobgeneric_anim_bp.gobgeneric_anim_bp_C.ExecuteUbergraph_gobgeneric_anim_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Ugobgeneric_anim_bp_C::ExecuteUbergraph_gobgeneric_anim_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gobgeneric_anim_bp.gobgeneric_anim_bp_C.ExecuteUbergraph_gobgeneric_anim_bp");

	Ugobgeneric_anim_bp_C_ExecuteUbergraph_gobgeneric_anim_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
