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

// Function StatusEffect_Forged_SteamBuff.StatusEffect_Forged_SteamBuff_C.OnEventTimerTick
// (Event, Public, BlueprintEvent)
void UStatusEffect_Forged_SteamBuff_C::OnEventTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Forged_SteamBuff.StatusEffect_Forged_SteamBuff_C.OnEventTimerTick");

	UStatusEffect_Forged_SteamBuff_C_OnEventTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Forged_SteamBuff.StatusEffect_Forged_SteamBuff_C.ExecuteUbergraph_StatusEffect_Forged_SteamBuff
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Forged_SteamBuff_C::ExecuteUbergraph_StatusEffect_Forged_SteamBuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Forged_SteamBuff.StatusEffect_Forged_SteamBuff_C.ExecuteUbergraph_StatusEffect_Forged_SteamBuff");

	UStatusEffect_Forged_SteamBuff_C_ExecuteUbergraph_StatusEffect_Forged_SteamBuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
