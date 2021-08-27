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

// Function StatusEffect_Forged_VentBase.StatusEffect_Forged_VentBase_C.OnHazardCreated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHazard*                 Hazard                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Forged_VentBase_C::OnHazardCreated(class AHazard* Hazard)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Forged_VentBase.StatusEffect_Forged_VentBase_C.OnHazardCreated");

	UStatusEffect_Forged_VentBase_C_OnHazardCreated_Params params;
	params.Hazard = Hazard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Forged_VentBase.StatusEffect_Forged_VentBase_C.OnPostApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Forged_VentBase_C::OnPostApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Forged_VentBase.StatusEffect_Forged_VentBase_C.OnPostApply");

	UStatusEffect_Forged_VentBase_C_OnPostApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Forged_VentBase.StatusEffect_Forged_VentBase_C.OnCleared
// (Event, Public, BlueprintEvent)
void UStatusEffect_Forged_VentBase_C::OnCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Forged_VentBase.StatusEffect_Forged_VentBase_C.OnCleared");

	UStatusEffect_Forged_VentBase_C_OnCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Forged_VentBase.StatusEffect_Forged_VentBase_C.OnHitMin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActiveTrait*            ActiveTrait                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Forged_VentBase_C::OnHitMin(class UActiveTrait* ActiveTrait)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Forged_VentBase.StatusEffect_Forged_VentBase_C.OnHitMin");

	UStatusEffect_Forged_VentBase_C_OnHitMin_Params params;
	params.ActiveTrait = ActiveTrait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Forged_VentBase.StatusEffect_Forged_VentBase_C.ExecuteUbergraph_StatusEffect_Forged_VentBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Forged_VentBase_C::ExecuteUbergraph_StatusEffect_Forged_VentBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Forged_VentBase.StatusEffect_Forged_VentBase_C.ExecuteUbergraph_StatusEffect_Forged_VentBase");

	UStatusEffect_Forged_VentBase_C_ExecuteUbergraph_StatusEffect_Forged_VentBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
