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

// Function io_prop_planksb_02b_bp.io_prop_planksb_02b_bp_C.OnOperatedClient
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Aio_prop_planksb_02b_bp_C::OnOperatedClient(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function io_prop_planksb_02b_bp.io_prop_planksb_02b_bp_C.OnOperatedClient");

	Aio_prop_planksb_02b_bp_C_OnOperatedClient_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function io_prop_planksb_02b_bp.io_prop_planksb_02b_bp_C.ExecuteUbergraph_io_prop_planksb_02b_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Aio_prop_planksb_02b_bp_C::ExecuteUbergraph_io_prop_planksb_02b_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function io_prop_planksb_02b_bp.io_prop_planksb_02b_bp_C.ExecuteUbergraph_io_prop_planksb_02b_bp");

	Aio_prop_planksb_02b_bp_C_ExecuteUbergraph_io_prop_planksb_02b_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
