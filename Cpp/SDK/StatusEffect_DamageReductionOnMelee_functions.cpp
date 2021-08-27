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

// Function StatusEffect_DamageReductionOnMelee.StatusEffect_DamageReductionOnMelee_C.GetDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  ActorOwner                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UStatusEffect_DamageReductionOnMelee_C::GetDescription(class AActor* ActorOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_DamageReductionOnMelee.StatusEffect_DamageReductionOnMelee_C.GetDescription");

	UStatusEffect_DamageReductionOnMelee_C_GetDescription_Params params;
	params.ActorOwner = ActorOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatusEffect_DamageReductionOnMelee.StatusEffect_DamageReductionOnMelee_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_DamageReductionOnMelee_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_DamageReductionOnMelee.StatusEffect_DamageReductionOnMelee_C.OnPreApply");

	UStatusEffect_DamageReductionOnMelee_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_DamageReductionOnMelee.StatusEffect_DamageReductionOnMelee_C.ExecuteUbergraph_StatusEffect_DamageReductionOnMelee
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_DamageReductionOnMelee_C::ExecuteUbergraph_StatusEffect_DamageReductionOnMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_DamageReductionOnMelee.StatusEffect_DamageReductionOnMelee_C.ExecuteUbergraph_StatusEffect_DamageReductionOnMelee");

	UStatusEffect_DamageReductionOnMelee_C_ExecuteUbergraph_StatusEffect_DamageReductionOnMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
