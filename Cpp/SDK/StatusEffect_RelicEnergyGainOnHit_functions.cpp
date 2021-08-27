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

// Function StatusEffect_RelicEnergyGainOnHit.StatusEffect_RelicEnergyGainOnHit_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_RelicEnergyGainOnHit_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_RelicEnergyGainOnHit.StatusEffect_RelicEnergyGainOnHit_C.OnPreApply");

	UStatusEffect_RelicEnergyGainOnHit_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_RelicEnergyGainOnHit.StatusEffect_RelicEnergyGainOnHit_C.ExecuteUbergraph_StatusEffect_RelicEnergyGainOnHit
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_RelicEnergyGainOnHit_C::ExecuteUbergraph_StatusEffect_RelicEnergyGainOnHit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_RelicEnergyGainOnHit.StatusEffect_RelicEnergyGainOnHit_C.ExecuteUbergraph_StatusEffect_RelicEnergyGainOnHit");

	UStatusEffect_RelicEnergyGainOnHit_C_ExecuteUbergraph_StatusEffect_RelicEnergyGainOnHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
