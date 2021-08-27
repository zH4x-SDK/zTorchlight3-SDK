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

// Function fort_prop_mapworks_a_anim.fort_prop_mapworks_a_anim_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void Ufort_prop_mapworks_a_anim_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function fort_prop_mapworks_a_anim.fort_prop_mapworks_a_anim_C.AnimGraph");

	Ufort_prop_mapworks_a_anim_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function fort_prop_mapworks_a_anim.fort_prop_mapworks_a_anim_C.ExecuteUbergraph_fort_prop_mapworks_a_anim
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Ufort_prop_mapworks_a_anim_C::ExecuteUbergraph_fort_prop_mapworks_a_anim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function fort_prop_mapworks_a_anim.fort_prop_mapworks_a_anim_C.ExecuteUbergraph_fort_prop_mapworks_a_anim");

	Ufort_prop_mapworks_a_anim_C_ExecuteUbergraph_fort_prop_mapworks_a_anim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
