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

// Function StatusEffect_BaseElementalDOT.StatusEffect_BaseElementalDOT_C.GetBlueprintRelevantInstigatorTraitKeys
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FTraitKey>       ReturnValue                    (Parm, OutParm, ReturnParm)
TArray<struct FTraitKey> UStatusEffect_BaseElementalDOT_C::GetBlueprintRelevantInstigatorTraitKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_BaseElementalDOT.StatusEffect_BaseElementalDOT_C.GetBlueprintRelevantInstigatorTraitKeys");

	UStatusEffect_BaseElementalDOT_C_GetBlueprintRelevantInstigatorTraitKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatusEffect_BaseElementalDOT.StatusEffect_BaseElementalDOT_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_BaseElementalDOT_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_BaseElementalDOT.StatusEffect_BaseElementalDOT_C.OnPreApply");

	UStatusEffect_BaseElementalDOT_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_BaseElementalDOT.StatusEffect_BaseElementalDOT_C.ExecuteUbergraph_StatusEffect_BaseElementalDOT
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_BaseElementalDOT_C::ExecuteUbergraph_StatusEffect_BaseElementalDOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_BaseElementalDOT.StatusEffect_BaseElementalDOT_C.ExecuteUbergraph_StatusEffect_BaseElementalDOT");

	UStatusEffect_BaseElementalDOT_C_ExecuteUbergraph_StatusEffect_BaseElementalDOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
