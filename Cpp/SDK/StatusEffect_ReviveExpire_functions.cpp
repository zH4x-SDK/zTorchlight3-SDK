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

// Function StatusEffect_ReviveExpire.StatusEffect_ReviveExpire_C.OnExpired
// (Event, Public, BlueprintEvent)
void UStatusEffect_ReviveExpire_C::OnExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ReviveExpire.StatusEffect_ReviveExpire_C.OnExpired");

	UStatusEffect_ReviveExpire_C_OnExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_ReviveExpire.StatusEffect_ReviveExpire_C.ExecuteUbergraph_StatusEffect_ReviveExpire
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_ReviveExpire_C::ExecuteUbergraph_StatusEffect_ReviveExpire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ReviveExpire.StatusEffect_ReviveExpire_C.ExecuteUbergraph_StatusEffect_ReviveExpire");

	UStatusEffect_ReviveExpire_C_ExecuteUbergraph_StatusEffect_ReviveExpire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
