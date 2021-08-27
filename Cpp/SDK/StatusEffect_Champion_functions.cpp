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

// Function StatusEffect_Champion.StatusEffect_Champion_C.ShouldPlayDeathEffects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldPlay                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStatusEffect_Champion_C::ShouldPlayDeathEffects(bool* ShouldPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Champion.StatusEffect_Champion_C.ShouldPlayDeathEffects");

	UStatusEffect_Champion_C_ShouldPlayDeathEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldPlay != nullptr)
		*ShouldPlay = params.ShouldPlay;

}


// Function StatusEffect_Champion.StatusEffect_Champion_C.ShouldPlaySpawnEffects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ShouldPlay                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStatusEffect_Champion_C::ShouldPlaySpawnEffects(bool* ShouldPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Champion.StatusEffect_Champion_C.ShouldPlaySpawnEffects");

	UStatusEffect_Champion_C_ShouldPlaySpawnEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldPlay != nullptr)
		*ShouldPlay = params.ShouldPlay;

}


// Function StatusEffect_Champion.StatusEffect_Champion_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Champion_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Champion.StatusEffect_Champion_C.OnPreApply");

	UStatusEffect_Champion_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Champion.StatusEffect_Champion_C.ExecuteUbergraph_StatusEffect_Champion
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Champion_C::ExecuteUbergraph_StatusEffect_Champion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Champion.StatusEffect_Champion_C.ExecuteUbergraph_StatusEffect_Champion");

	UStatusEffect_Champion_C_ExecuteUbergraph_StatusEffect_Champion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
