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

// Function MapWorksPortal.MapWorksPortal_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void AMapWorksPortal_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapWorksPortal.MapWorksPortal_C.Timeline_0__FinishedFunc");

	AMapWorksPortal_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapWorksPortal.MapWorksPortal_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void AMapWorksPortal_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapWorksPortal.MapWorksPortal_C.Timeline_0__UpdateFunc");

	AMapWorksPortal_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapWorksPortal.MapWorksPortal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMapWorksPortal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapWorksPortal.MapWorksPortal_C.ReceiveBeginPlay");

	AMapWorksPortal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapWorksPortal.MapWorksPortal_C.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)
void AMapWorksPortal_C::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapWorksPortal.MapWorksPortal_C.ReceiveActorBeginCursorOver");

	AMapWorksPortal_C_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapWorksPortal.MapWorksPortal_C.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)
void AMapWorksPortal_C::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapWorksPortal.MapWorksPortal_C.ReceiveActorEndCursorOver");

	AMapWorksPortal_C_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapWorksPortal.MapWorksPortal_C.ExecuteUbergraph_MapWorksPortal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMapWorksPortal_C::ExecuteUbergraph_MapWorksPortal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapWorksPortal.MapWorksPortal_C.ExecuteUbergraph_MapWorksPortal");

	AMapWorksPortal_C_ExecuteUbergraph_MapWorksPortal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
