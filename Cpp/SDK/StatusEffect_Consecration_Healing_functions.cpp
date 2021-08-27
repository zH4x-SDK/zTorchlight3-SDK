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

// Function StatusEffect_Consecration_Healing.StatusEffect_Consecration_Healing_C.OnEventTimerTick
// (Event, Public, BlueprintEvent)
void UStatusEffect_Consecration_Healing_C::OnEventTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Consecration_Healing.StatusEffect_Consecration_Healing_C.OnEventTimerTick");

	UStatusEffect_Consecration_Healing_C_OnEventTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Consecration_Healing.StatusEffect_Consecration_Healing_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Consecration_Healing_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Consecration_Healing.StatusEffect_Consecration_Healing_C.OnPreApply");

	UStatusEffect_Consecration_Healing_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Consecration_Healing.StatusEffect_Consecration_Healing_C.ExecuteUbergraph_StatusEffect_Consecration_Healing
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Consecration_Healing_C::ExecuteUbergraph_StatusEffect_Consecration_Healing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Consecration_Healing.StatusEffect_Consecration_Healing_C.ExecuteUbergraph_StatusEffect_Consecration_Healing");

	UStatusEffect_Consecration_Healing_C_ExecuteUbergraph_StatusEffect_Consecration_Healing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
