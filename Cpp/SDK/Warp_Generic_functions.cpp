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

// Function Warp_Generic.Warp_Generic_C.GetMapMarkerComponent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapMarkerComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMapMarkerComponent* AWarp_Generic_C::GetMapMarkerComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Warp_Generic.Warp_Generic_C.GetMapMarkerComponent");

	AWarp_Generic_C_GetMapMarkerComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Warp_Generic.Warp_Generic_C.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)
void AWarp_Generic_C::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Warp_Generic.Warp_Generic_C.ReceiveActorEndCursorOver");

	AWarp_Generic_C_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Warp_Generic.Warp_Generic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWarp_Generic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Warp_Generic.Warp_Generic_C.ReceiveBeginPlay");

	AWarp_Generic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Warp_Generic.Warp_Generic_C.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)
void AWarp_Generic_C::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Warp_Generic.Warp_Generic_C.ReceiveActorBeginCursorOver");

	AWarp_Generic_C_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Warp_Generic.Warp_Generic_C.ActivateWarpGadgetVFX
// (Event, Public, BlueprintEvent)
void AWarp_Generic_C::ActivateWarpGadgetVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Warp_Generic.Warp_Generic_C.ActivateWarpGadgetVFX");

	AWarp_Generic_C_ActivateWarpGadgetVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Warp_Generic.Warp_Generic_C.ExecuteUbergraph_Warp_Generic
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWarp_Generic_C::ExecuteUbergraph_Warp_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Warp_Generic.Warp_Generic_C.ExecuteUbergraph_Warp_Generic");

	AWarp_Generic_C_ExecuteUbergraph_Warp_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
