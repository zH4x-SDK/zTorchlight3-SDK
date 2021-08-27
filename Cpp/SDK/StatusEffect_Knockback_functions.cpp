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

// Function StatusEffect_Knockback.StatusEffect_Knockback_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Knockback_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Knockback.StatusEffect_Knockback_C.OnPreApply");

	UStatusEffect_Knockback_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Knockback.StatusEffect_Knockback_C.ExecuteUbergraph_StatusEffect_Knockback
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Knockback_C::ExecuteUbergraph_StatusEffect_Knockback(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Knockback.StatusEffect_Knockback_C.ExecuteUbergraph_StatusEffect_Knockback");

	UStatusEffect_Knockback_C_ExecuteUbergraph_StatusEffect_Knockback_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
