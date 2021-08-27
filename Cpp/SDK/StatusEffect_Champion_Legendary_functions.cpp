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

// Function StatusEffect_Champion_Legendary.StatusEffect_Champion_Legendary_C.OnCleared
// (Event, Public, BlueprintEvent)
void UStatusEffect_Champion_Legendary_C::OnCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Champion_Legendary.StatusEffect_Champion_Legendary_C.OnCleared");

	UStatusEffect_Champion_Legendary_C_OnCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Champion_Legendary.StatusEffect_Champion_Legendary_C.ExecuteUbergraph_StatusEffect_Champion_Legendary
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Champion_Legendary_C::ExecuteUbergraph_StatusEffect_Champion_Legendary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Champion_Legendary.StatusEffect_Champion_Legendary_C.ExecuteUbergraph_StatusEffect_Champion_Legendary");

	UStatusEffect_Champion_Legendary_C_ExecuteUbergraph_StatusEffect_Champion_Legendary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
