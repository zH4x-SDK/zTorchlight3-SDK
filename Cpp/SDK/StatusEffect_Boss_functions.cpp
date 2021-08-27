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

// Function StatusEffect_Boss.StatusEffect_Boss_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Boss_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Boss.StatusEffect_Boss_C.OnPreApply");

	UStatusEffect_Boss_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Boss.StatusEffect_Boss_C.OnPostDeath
// (Event, Public, BlueprintEvent)
void UStatusEffect_Boss_C::OnPostDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Boss.StatusEffect_Boss_C.OnPostDeath");

	UStatusEffect_Boss_C_OnPostDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Boss.StatusEffect_Boss_C.ExecuteUbergraph_StatusEffect_Boss
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Boss_C::ExecuteUbergraph_StatusEffect_Boss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Boss.StatusEffect_Boss_C.ExecuteUbergraph_StatusEffect_Boss");

	UStatusEffect_Boss_C_ExecuteUbergraph_StatusEffect_Boss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
