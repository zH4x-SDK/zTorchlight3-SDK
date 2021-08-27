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

// Function StatusEffect_Consecration_Bonus.StatusEffect_Consecration_Bonus_C.GetDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  ActorOwner                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UStatusEffect_Consecration_Bonus_C::GetDescription(class AActor* ActorOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Consecration_Bonus.StatusEffect_Consecration_Bonus_C.GetDescription");

	UStatusEffect_Consecration_Bonus_C_GetDescription_Params params;
	params.ActorOwner = ActorOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatusEffect_Consecration_Bonus.StatusEffect_Consecration_Bonus_C.OnCleared
// (Event, Public, BlueprintEvent)
void UStatusEffect_Consecration_Bonus_C::OnCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Consecration_Bonus.StatusEffect_Consecration_Bonus_C.OnCleared");

	UStatusEffect_Consecration_Bonus_C_OnCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Consecration_Bonus.StatusEffect_Consecration_Bonus_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Consecration_Bonus_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Consecration_Bonus.StatusEffect_Consecration_Bonus_C.OnPreApply");

	UStatusEffect_Consecration_Bonus_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Consecration_Bonus.StatusEffect_Consecration_Bonus_C.ExecuteUbergraph_StatusEffect_Consecration_Bonus
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Consecration_Bonus_C::ExecuteUbergraph_StatusEffect_Consecration_Bonus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Consecration_Bonus.StatusEffect_Consecration_Bonus_C.ExecuteUbergraph_StatusEffect_Consecration_Bonus");

	UStatusEffect_Consecration_Bonus_C_ExecuteUbergraph_StatusEffect_Consecration_Bonus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
