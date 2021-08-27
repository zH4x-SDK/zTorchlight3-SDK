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

// Function StatusEffect_PetWander.StatusEffect_PetWander_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_PetWander_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetWander.StatusEffect_PetWander_C.OnPreApply");

	UStatusEffect_PetWander_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_PetWander.StatusEffect_PetWander_C.OnCleared
// (Event, Public, BlueprintEvent)
void UStatusEffect_PetWander_C::OnCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetWander.StatusEffect_PetWander_C.OnCleared");

	UStatusEffect_PetWander_C_OnCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_PetWander.StatusEffect_PetWander_C.ExecuteUbergraph_StatusEffect_PetWander
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_PetWander_C::ExecuteUbergraph_StatusEffect_PetWander(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetWander.StatusEffect_PetWander_C.ExecuteUbergraph_StatusEffect_PetWander");

	UStatusEffect_PetWander_C_ExecuteUbergraph_StatusEffect_PetWander_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
