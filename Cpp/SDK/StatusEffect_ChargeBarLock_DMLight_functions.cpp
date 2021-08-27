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

// Function StatusEffect_ChargeBarLock_DMLight.StatusEffect_ChargeBarLock_DMLight_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_ChargeBarLock_DMLight_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ChargeBarLock_DMLight.StatusEffect_ChargeBarLock_DMLight_C.OnPreApply");

	UStatusEffect_ChargeBarLock_DMLight_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_ChargeBarLock_DMLight.StatusEffect_ChargeBarLock_DMLight_C.OnEventTimerTick
// (Event, Public, BlueprintEvent)
void UStatusEffect_ChargeBarLock_DMLight_C::OnEventTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ChargeBarLock_DMLight.StatusEffect_ChargeBarLock_DMLight_C.OnEventTimerTick");

	UStatusEffect_ChargeBarLock_DMLight_C_OnEventTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_ChargeBarLock_DMLight.StatusEffect_ChargeBarLock_DMLight_C.ExecuteUbergraph_StatusEffect_ChargeBarLock_DMLight
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_ChargeBarLock_DMLight_C::ExecuteUbergraph_StatusEffect_ChargeBarLock_DMLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ChargeBarLock_DMLight.StatusEffect_ChargeBarLock_DMLight_C.ExecuteUbergraph_StatusEffect_ChargeBarLock_DMLight");

	UStatusEffect_ChargeBarLock_DMLight_C_ExecuteUbergraph_StatusEffect_ChargeBarLock_DMLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
