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

// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.SetNewBaseSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewBaseSpeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_PetFollow_C::SetNewBaseSpeed(float NewBaseSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.SetNewBaseSpeed");

	UStatusEffect_PetFollow_C_SetNewBaseSpeed_Params params;
	params.NewBaseSpeed = NewBaseSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.MatchesBaseSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStatusEffect_PetFollow_C::MatchesBaseSpeed(float Speed, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.MatchesBaseSpeed");

	UStatusEffect_PetFollow_C_MatchesBaseSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.IsBehindActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStatusEffect_PetFollow_C::IsBehindActor(class AActor* Actor, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.IsBehindActor");

	UStatusEffect_PetFollow_C_IsBehindActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.OnEventTimerTick
// (Event, Public, BlueprintEvent)
void UStatusEffect_PetFollow_C::OnEventTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.OnEventTimerTick");

	UStatusEffect_PetFollow_C_OnEventTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_PetFollow_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.OnPreApply");

	UStatusEffect_PetFollow_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.OnCleared
// (Event, Public, BlueprintEvent)
void UStatusEffect_PetFollow_C::OnCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.OnCleared");

	UStatusEffect_PetFollow_C_OnCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.ExecuteUbergraph_StatusEffect_PetFollow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_PetFollow_C::ExecuteUbergraph_StatusEffect_PetFollow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.ExecuteUbergraph_StatusEffect_PetFollow");

	UStatusEffect_PetFollow_C_ExecuteUbergraph_StatusEffect_PetFollow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
