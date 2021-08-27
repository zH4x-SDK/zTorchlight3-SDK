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

// Function StatusEffect_PetEaseToStop.StatusEffect_PetEaseToStop_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_PetEaseToStop_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetEaseToStop.StatusEffect_PetEaseToStop_C.OnPreApply");

	UStatusEffect_PetEaseToStop_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_PetEaseToStop.StatusEffect_PetEaseToStop_C.OnCleared
// (Event, Public, BlueprintEvent)
void UStatusEffect_PetEaseToStop_C::OnCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetEaseToStop.StatusEffect_PetEaseToStop_C.OnCleared");

	UStatusEffect_PetEaseToStop_C_OnCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_PetEaseToStop.StatusEffect_PetEaseToStop_C.ExecuteUbergraph_StatusEffect_PetEaseToStop
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_PetEaseToStop_C::ExecuteUbergraph_StatusEffect_PetEaseToStop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetEaseToStop.StatusEffect_PetEaseToStop_C.ExecuteUbergraph_StatusEffect_PetEaseToStop");

	UStatusEffect_PetEaseToStop_C_ExecuteUbergraph_StatusEffect_PetEaseToStop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
