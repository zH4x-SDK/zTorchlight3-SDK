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

// Function StatusEffect_Reviving.StatusEffect_Reviving_C.OnExpired
// (Event, Public, BlueprintEvent)
void UStatusEffect_Reviving_C::OnExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Reviving.StatusEffect_Reviving_C.OnExpired");

	UStatusEffect_Reviving_C_OnExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Reviving.StatusEffect_Reviving_C.ExecuteUbergraph_StatusEffect_Reviving
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Reviving_C::ExecuteUbergraph_StatusEffect_Reviving(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Reviving.StatusEffect_Reviving_C.ExecuteUbergraph_StatusEffect_Reviving");

	UStatusEffect_Reviving_C_ExecuteUbergraph_StatusEffect_Reviving_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
