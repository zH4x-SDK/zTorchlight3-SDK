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

// Function StatusEffect_Stun.StatusEffect_Stun_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Stun_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Stun.StatusEffect_Stun_C.OnPreApply");

	UStatusEffect_Stun_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Stun.StatusEffect_Stun_C.OnPostApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Stun_C::OnPostApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Stun.StatusEffect_Stun_C.OnPostApply");

	UStatusEffect_Stun_C_OnPostApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Stun.StatusEffect_Stun_C.ExecuteUbergraph_StatusEffect_Stun
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Stun_C::ExecuteUbergraph_StatusEffect_Stun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Stun.StatusEffect_Stun_C.ExecuteUbergraph_StatusEffect_Stun");

	UStatusEffect_Stun_C_ExecuteUbergraph_StatusEffect_Stun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
