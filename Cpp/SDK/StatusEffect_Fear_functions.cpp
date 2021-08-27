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

// Function StatusEffect_Fear.StatusEffect_Fear_C.OnCleared
// (Event, Public, BlueprintEvent)
void UStatusEffect_Fear_C::OnCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Fear.StatusEffect_Fear_C.OnCleared");

	UStatusEffect_Fear_C_OnCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Fear.StatusEffect_Fear_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Fear_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Fear.StatusEffect_Fear_C.OnPreApply");

	UStatusEffect_Fear_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Fear.StatusEffect_Fear_C.OnPostApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Fear_C::OnPostApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Fear.StatusEffect_Fear_C.OnPostApply");

	UStatusEffect_Fear_C_OnPostApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Fear.StatusEffect_Fear_C.ExecuteUbergraph_StatusEffect_Fear
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Fear_C::ExecuteUbergraph_StatusEffect_Fear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Fear.StatusEffect_Fear_C.ExecuteUbergraph_StatusEffect_Fear");

	UStatusEffect_Fear_C_ExecuteUbergraph_StatusEffect_Fear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
