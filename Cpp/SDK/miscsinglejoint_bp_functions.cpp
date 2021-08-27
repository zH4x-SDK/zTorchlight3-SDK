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

// Function miscsinglejoint_bp.miscsinglejoint_bp_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void Umiscsinglejoint_bp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function miscsinglejoint_bp.miscsinglejoint_bp_C.AnimGraph");

	Umiscsinglejoint_bp_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function miscsinglejoint_bp.miscsinglejoint_bp_C.ExecuteUbergraph_miscsinglejoint_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Umiscsinglejoint_bp_C::ExecuteUbergraph_miscsinglejoint_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function miscsinglejoint_bp.miscsinglejoint_bp_C.ExecuteUbergraph_miscsinglejoint_bp");

	Umiscsinglejoint_bp_C_ExecuteUbergraph_miscsinglejoint_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
