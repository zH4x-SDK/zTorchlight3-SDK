﻿// Name: Torchlight3, Version: 1.0.0

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

// Function StatusEffect_ResistShocked.StatusEffect_ResistShocked_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_ResistShocked_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ResistShocked.StatusEffect_ResistShocked_C.OnPreApply");

	UStatusEffect_ResistShocked_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_ResistShocked.StatusEffect_ResistShocked_C.OnEventTimerTick
// (Event, Public, BlueprintEvent)
void UStatusEffect_ResistShocked_C::OnEventTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ResistShocked.StatusEffect_ResistShocked_C.OnEventTimerTick");

	UStatusEffect_ResistShocked_C_OnEventTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_ResistShocked.StatusEffect_ResistShocked_C.ExecuteUbergraph_StatusEffect_ResistShocked
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_ResistShocked_C::ExecuteUbergraph_StatusEffect_ResistShocked(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ResistShocked.StatusEffect_ResistShocked_C.ExecuteUbergraph_StatusEffect_ResistShocked");

	UStatusEffect_ResistShocked_C_ExecuteUbergraph_StatusEffect_ResistShocked_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
