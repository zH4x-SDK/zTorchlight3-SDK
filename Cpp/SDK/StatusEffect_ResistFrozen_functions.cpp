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

// Function StatusEffect_ResistFrozen.StatusEffect_ResistFrozen_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_ResistFrozen_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ResistFrozen.StatusEffect_ResistFrozen_C.OnPreApply");

	UStatusEffect_ResistFrozen_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_ResistFrozen.StatusEffect_ResistFrozen_C.OnEventTimerTick
// (Event, Public, BlueprintEvent)
void UStatusEffect_ResistFrozen_C::OnEventTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ResistFrozen.StatusEffect_ResistFrozen_C.OnEventTimerTick");

	UStatusEffect_ResistFrozen_C_OnEventTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_ResistFrozen.StatusEffect_ResistFrozen_C.ExecuteUbergraph_StatusEffect_ResistFrozen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_ResistFrozen_C::ExecuteUbergraph_StatusEffect_ResistFrozen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ResistFrozen.StatusEffect_ResistFrozen_C.ExecuteUbergraph_StatusEffect_ResistFrozen");

	UStatusEffect_ResistFrozen_C_ExecuteUbergraph_StatusEffect_ResistFrozen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
