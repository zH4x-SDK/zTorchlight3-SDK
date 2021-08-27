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

// Function StatusEffect_BloodDrinker_Bleed.StatusEffect_BloodDrinker_Bleed_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_BloodDrinker_Bleed_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_BloodDrinker_Bleed.StatusEffect_BloodDrinker_Bleed_C.OnPreApply");

	UStatusEffect_BloodDrinker_Bleed_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_BloodDrinker_Bleed.StatusEffect_BloodDrinker_Bleed_C.ExecuteUbergraph_StatusEffect_BloodDrinker_Bleed
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_BloodDrinker_Bleed_C::ExecuteUbergraph_StatusEffect_BloodDrinker_Bleed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_BloodDrinker_Bleed.StatusEffect_BloodDrinker_Bleed_C.ExecuteUbergraph_StatusEffect_BloodDrinker_Bleed");

	UStatusEffect_BloodDrinker_Bleed_C_ExecuteUbergraph_StatusEffect_BloodDrinker_Bleed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
