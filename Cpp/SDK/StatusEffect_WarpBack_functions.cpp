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

// Function StatusEffect_WarpBack.StatusEffect_WarpBack_C.OnPostDeath
// (Event, Public, BlueprintEvent)
void UStatusEffect_WarpBack_C::OnPostDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_WarpBack.StatusEffect_WarpBack_C.OnPostDeath");

	UStatusEffect_WarpBack_C_OnPostDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_WarpBack.StatusEffect_WarpBack_C.ExecuteUbergraph_StatusEffect_WarpBack
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_WarpBack_C::ExecuteUbergraph_StatusEffect_WarpBack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_WarpBack.StatusEffect_WarpBack_C.ExecuteUbergraph_StatusEffect_WarpBack");

	UStatusEffect_WarpBack_C_ExecuteUbergraph_StatusEffect_WarpBack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
