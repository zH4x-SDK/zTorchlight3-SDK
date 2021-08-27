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

// Function StatusEffect_HeatFull.StatusEffect_HeatFull_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_HeatFull_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_HeatFull.StatusEffect_HeatFull_C.OnPreApply");

	UStatusEffect_HeatFull_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_HeatFull.StatusEffect_HeatFull_C.ExecuteUbergraph_StatusEffect_HeatFull
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_HeatFull_C::ExecuteUbergraph_StatusEffect_HeatFull(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_HeatFull.StatusEffect_HeatFull_C.ExecuteUbergraph_StatusEffect_HeatFull");

	UStatusEffect_HeatFull_C_ExecuteUbergraph_StatusEffect_HeatFull_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
