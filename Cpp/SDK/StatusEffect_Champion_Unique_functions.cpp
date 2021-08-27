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

// Function StatusEffect_Champion_Unique.StatusEffect_Champion_Unique_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Champion_Unique_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Champion_Unique.StatusEffect_Champion_Unique_C.OnPreApply");

	UStatusEffect_Champion_Unique_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Champion_Unique.StatusEffect_Champion_Unique_C.OnCleared
// (Event, Public, BlueprintEvent)
void UStatusEffect_Champion_Unique_C::OnCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Champion_Unique.StatusEffect_Champion_Unique_C.OnCleared");

	UStatusEffect_Champion_Unique_C_OnCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Champion_Unique.StatusEffect_Champion_Unique_C.ExecuteUbergraph_StatusEffect_Champion_Unique
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Champion_Unique_C::ExecuteUbergraph_StatusEffect_Champion_Unique(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Champion_Unique.StatusEffect_Champion_Unique_C.ExecuteUbergraph_StatusEffect_Champion_Unique");

	UStatusEffect_Champion_Unique_C_ExecuteUbergraph_StatusEffect_Champion_Unique_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
