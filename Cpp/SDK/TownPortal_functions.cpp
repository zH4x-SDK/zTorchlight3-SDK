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

// Function TownPortal.TownPortal_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ATownPortal_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TownPortal.TownPortal_C.Timeline_0__FinishedFunc");

	ATownPortal_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TownPortal.TownPortal_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ATownPortal_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TownPortal.TownPortal_C.Timeline_0__UpdateFunc");

	ATownPortal_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TownPortal.TownPortal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATownPortal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TownPortal.TownPortal_C.ReceiveBeginPlay");

	ATownPortal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TownPortal.TownPortal_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATownPortal_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TownPortal.TownPortal_C.ReceiveTick");

	ATownPortal_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TownPortal.TownPortal_C.ExecuteUbergraph_TownPortal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATownPortal_C::ExecuteUbergraph_TownPortal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TownPortal.TownPortal_C.ExecuteUbergraph_TownPortal");

	ATownPortal_C_ExecuteUbergraph_TownPortal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
