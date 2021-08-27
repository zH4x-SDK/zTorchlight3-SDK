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

// Function vfx_tleffect_minionring.vfx_tleffect_minionring_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Avfx_tleffect_minionring_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function vfx_tleffect_minionring.vfx_tleffect_minionring_C.UserConstructionScript");

	Avfx_tleffect_minionring_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function vfx_tleffect_minionring.vfx_tleffect_minionring_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void Avfx_tleffect_minionring_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function vfx_tleffect_minionring.vfx_tleffect_minionring_C.Timeline_0__FinishedFunc");

	Avfx_tleffect_minionring_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function vfx_tleffect_minionring.vfx_tleffect_minionring_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void Avfx_tleffect_minionring_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function vfx_tleffect_minionring.vfx_tleffect_minionring_C.Timeline_0__UpdateFunc");

	Avfx_tleffect_minionring_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function vfx_tleffect_minionring.vfx_tleffect_minionring_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void Avfx_tleffect_minionring_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function vfx_tleffect_minionring.vfx_tleffect_minionring_C.ReceiveBeginPlay");

	Avfx_tleffect_minionring_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function vfx_tleffect_minionring.vfx_tleffect_minionring_C.ExecuteUbergraph_vfx_tleffect_minionring
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Avfx_tleffect_minionring_C::ExecuteUbergraph_vfx_tleffect_minionring(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function vfx_tleffect_minionring.vfx_tleffect_minionring_C.ExecuteUbergraph_vfx_tleffect_minionring");

	Avfx_tleffect_minionring_C_ExecuteUbergraph_vfx_tleffect_minionring_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
