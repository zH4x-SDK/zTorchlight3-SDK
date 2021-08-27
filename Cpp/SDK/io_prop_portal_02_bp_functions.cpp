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

// Function io_prop_portal_02_bp.io_prop_portal_02_bp_C.UpdateStatus
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsUnlocked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Aio_prop_portal_02_bp_C::UpdateStatus(bool bIsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function io_prop_portal_02_bp.io_prop_portal_02_bp_C.UpdateStatus");

	Aio_prop_portal_02_bp_C_UpdateStatus_Params params;
	params.bIsUnlocked = bIsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function io_prop_portal_02_bp.io_prop_portal_02_bp_C.PlayUnlockEvent
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Operator                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Aio_prop_portal_02_bp_C::PlayUnlockEvent(class AActor* Operator)
{
	static auto fn = UObject::FindObject<UFunction>("Function io_prop_portal_02_bp.io_prop_portal_02_bp_C.PlayUnlockEvent");

	Aio_prop_portal_02_bp_C_PlayUnlockEvent_Params params;
	params.Operator = Operator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function io_prop_portal_02_bp.io_prop_portal_02_bp_C.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)
void Aio_prop_portal_02_bp_C::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function io_prop_portal_02_bp.io_prop_portal_02_bp_C.ReceiveActorBeginCursorOver");

	Aio_prop_portal_02_bp_C_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function io_prop_portal_02_bp.io_prop_portal_02_bp_C.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)
void Aio_prop_portal_02_bp_C::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function io_prop_portal_02_bp.io_prop_portal_02_bp_C.ReceiveActorEndCursorOver");

	Aio_prop_portal_02_bp_C_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function io_prop_portal_02_bp.io_prop_portal_02_bp_C.ExecuteUbergraph_io_prop_portal_02_bp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Aio_prop_portal_02_bp_C::ExecuteUbergraph_io_prop_portal_02_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function io_prop_portal_02_bp.io_prop_portal_02_bp_C.ExecuteUbergraph_io_prop_portal_02_bp");

	Aio_prop_portal_02_bp_C_ExecuteUbergraph_io_prop_portal_02_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
