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

// Function StatusEffect_Charged_DMDark.StatusEffect_Charged_DMDark_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Charged_DMDark_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Charged_DMDark.StatusEffect_Charged_DMDark_C.OnPreApply");

	UStatusEffect_Charged_DMDark_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Charged_DMDark.StatusEffect_Charged_DMDark_C.OnExpired
// (Event, Public, BlueprintEvent)
void UStatusEffect_Charged_DMDark_C::OnExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Charged_DMDark.StatusEffect_Charged_DMDark_C.OnExpired");

	UStatusEffect_Charged_DMDark_C_OnExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Charged_DMDark.StatusEffect_Charged_DMDark_C.ExecuteUbergraph_StatusEffect_Charged_DMDark
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Charged_DMDark_C::ExecuteUbergraph_StatusEffect_Charged_DMDark(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Charged_DMDark.StatusEffect_Charged_DMDark_C.ExecuteUbergraph_StatusEffect_Charged_DMDark");

	UStatusEffect_Charged_DMDark_C_ExecuteUbergraph_StatusEffect_Charged_DMDark_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
