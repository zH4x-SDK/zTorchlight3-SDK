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

// Function StatusEffect_Charged.StatusEffect_Charged_C.GetDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  ActorOwner                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UStatusEffect_Charged_C::GetDescription(class AActor* ActorOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Charged.StatusEffect_Charged_C.GetDescription");

	UStatusEffect_Charged_C_GetDescription_Params params;
	params.ActorOwner = ActorOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatusEffect_Charged.StatusEffect_Charged_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Charged_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Charged.StatusEffect_Charged_C.OnPreApply");

	UStatusEffect_Charged_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Charged.StatusEffect_Charged_C.OnEventTimerTick
// (Event, Public, BlueprintEvent)
void UStatusEffect_Charged_C::OnEventTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Charged.StatusEffect_Charged_C.OnEventTimerTick");

	UStatusEffect_Charged_C_OnEventTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Charged.StatusEffect_Charged_C.OnCleared
// (Event, Public, BlueprintEvent)
void UStatusEffect_Charged_C::OnCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Charged.StatusEffect_Charged_C.OnCleared");

	UStatusEffect_Charged_C_OnCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Charged.StatusEffect_Charged_C.OnExpired
// (Event, Public, BlueprintEvent)
void UStatusEffect_Charged_C::OnExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Charged.StatusEffect_Charged_C.OnExpired");

	UStatusEffect_Charged_C_OnExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Charged.StatusEffect_Charged_C.ExecuteUbergraph_StatusEffect_Charged
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Charged_C::ExecuteUbergraph_StatusEffect_Charged(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Charged.StatusEffect_Charged_C.ExecuteUbergraph_StatusEffect_Charged");

	UStatusEffect_Charged_C_ExecuteUbergraph_StatusEffect_Charged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
