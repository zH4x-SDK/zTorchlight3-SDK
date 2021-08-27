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

// Function StatusEffect_Frozen.StatusEffect_Frozen_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Frozen_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Frozen.StatusEffect_Frozen_C.OnPreApply");

	UStatusEffect_Frozen_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Frozen.StatusEffect_Frozen_C.OnCleared
// (Event, Public, BlueprintEvent)
void UStatusEffect_Frozen_C::OnCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Frozen.StatusEffect_Frozen_C.OnCleared");

	UStatusEffect_Frozen_C_OnCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Frozen.StatusEffect_Frozen_C.OnPostDeath
// (Event, Public, BlueprintEvent)
void UStatusEffect_Frozen_C::OnPostDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Frozen.StatusEffect_Frozen_C.OnPostDeath");

	UStatusEffect_Frozen_C_OnPostDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Frozen.StatusEffect_Frozen_C.OnPreDeath
// (Event, Public, BlueprintEvent)
void UStatusEffect_Frozen_C::OnPreDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Frozen.StatusEffect_Frozen_C.OnPreDeath");

	UStatusEffect_Frozen_C_OnPreDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Frozen.StatusEffect_Frozen_C.ExecuteUbergraph_StatusEffect_Frozen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Frozen_C::ExecuteUbergraph_StatusEffect_Frozen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Frozen.StatusEffect_Frozen_C.ExecuteUbergraph_StatusEffect_Frozen");

	UStatusEffect_Frozen_C_ExecuteUbergraph_StatusEffect_Frozen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
