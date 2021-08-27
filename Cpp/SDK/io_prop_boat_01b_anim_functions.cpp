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

// Function io_prop_boat_01b_anim.io_prop_boat_01b_anim_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void Uio_prop_boat_01b_anim_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function io_prop_boat_01b_anim.io_prop_boat_01b_anim_C.AnimGraph");

	Uio_prop_boat_01b_anim_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function io_prop_boat_01b_anim.io_prop_boat_01b_anim_C.ExecuteUbergraph_io_prop_boat_01b_anim
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Uio_prop_boat_01b_anim_C::ExecuteUbergraph_io_prop_boat_01b_anim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function io_prop_boat_01b_anim.io_prop_boat_01b_anim_C.ExecuteUbergraph_io_prop_boat_01b_anim");

	Uio_prop_boat_01b_anim_C_ExecuteUbergraph_io_prop_boat_01b_anim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
