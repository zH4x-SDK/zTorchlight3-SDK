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

// Function StatusEffect_Shocked.StatusEffect_Shocked_C.GetBlueprintRelevantInstigatorTraitKeys
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FTraitKey>       ReturnValue                    (Parm, OutParm, ReturnParm)
TArray<struct FTraitKey> UStatusEffect_Shocked_C::GetBlueprintRelevantInstigatorTraitKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Shocked.StatusEffect_Shocked_C.GetBlueprintRelevantInstigatorTraitKeys");

	UStatusEffect_Shocked_C_GetBlueprintRelevantInstigatorTraitKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatusEffect_Shocked.StatusEffect_Shocked_C.FireMissiles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UStatusEffect_Shocked_C::FireMissiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Shocked.StatusEffect_Shocked_C.FireMissiles");

	UStatusEffect_Shocked_C_FireMissiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Shocked.StatusEffect_Shocked_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Shocked_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Shocked.StatusEffect_Shocked_C.OnPreApply");

	UStatusEffect_Shocked_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Shocked.StatusEffect_Shocked_C.FireMissilesEvent_Event
// (BlueprintCallable, BlueprintEvent)
void UStatusEffect_Shocked_C::FireMissilesEvent_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Shocked.StatusEffect_Shocked_C.FireMissilesEvent_Event");

	UStatusEffect_Shocked_C_FireMissilesEvent_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Shocked.StatusEffect_Shocked_C.OnPostDeath
// (Event, Public, BlueprintEvent)
void UStatusEffect_Shocked_C::OnPostDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Shocked.StatusEffect_Shocked_C.OnPostDeath");

	UStatusEffect_Shocked_C_OnPostDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Shocked.StatusEffect_Shocked_C.ExecuteUbergraph_StatusEffect_Shocked
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Shocked_C::ExecuteUbergraph_StatusEffect_Shocked(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Shocked.StatusEffect_Shocked_C.ExecuteUbergraph_StatusEffect_Shocked");

	UStatusEffect_Shocked_C_ExecuteUbergraph_StatusEffect_Shocked_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Shocked.StatusEffect_Shocked_C.FireMissilesEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UStatusEffect_Shocked_C::FireMissilesEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Shocked.StatusEffect_Shocked_C.FireMissilesEvent__DelegateSignature");

	UStatusEffect_Shocked_C_FireMissilesEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
