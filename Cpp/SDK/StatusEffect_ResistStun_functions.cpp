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

// Function StatusEffect_ResistStun.StatusEffect_ResistStun_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_ResistStun_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ResistStun.StatusEffect_ResistStun_C.OnPreApply");

	UStatusEffect_ResistStun_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_ResistStun.StatusEffect_ResistStun_C.OnEventTimerTick
// (Event, Public, BlueprintEvent)
void UStatusEffect_ResistStun_C::OnEventTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ResistStun.StatusEffect_ResistStun_C.OnEventTimerTick");

	UStatusEffect_ResistStun_C_OnEventTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_ResistStun.StatusEffect_ResistStun_C.ExecuteUbergraph_StatusEffect_ResistStun
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_ResistStun_C::ExecuteUbergraph_StatusEffect_ResistStun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ResistStun.StatusEffect_ResistStun_C.ExecuteUbergraph_StatusEffect_ResistStun");

	UStatusEffect_ResistStun_C_ExecuteUbergraph_StatusEffect_ResistStun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
