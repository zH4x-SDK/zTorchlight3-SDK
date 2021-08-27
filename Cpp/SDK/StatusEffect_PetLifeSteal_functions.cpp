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

// Function StatusEffect_PetLifeSteal.StatusEffect_PetLifeSteal_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_PetLifeSteal_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetLifeSteal.StatusEffect_PetLifeSteal_C.OnPreApply");

	UStatusEffect_PetLifeSteal_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_PetLifeSteal.StatusEffect_PetLifeSteal_C.ExecuteUbergraph_StatusEffect_PetLifeSteal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_PetLifeSteal_C::ExecuteUbergraph_StatusEffect_PetLifeSteal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetLifeSteal.StatusEffect_PetLifeSteal_C.ExecuteUbergraph_StatusEffect_PetLifeSteal");

	UStatusEffect_PetLifeSteal_C_ExecuteUbergraph_StatusEffect_PetLifeSteal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
