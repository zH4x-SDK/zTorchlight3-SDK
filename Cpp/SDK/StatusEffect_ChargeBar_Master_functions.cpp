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

// Function StatusEffect_ChargeBar_Master.StatusEffect_ChargeBar_Master_C.GetChargeBonusPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BonusPct                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_ChargeBar_Master_C::GetChargeBonusPercent(float* BonusPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ChargeBar_Master.StatusEffect_ChargeBar_Master_C.GetChargeBonusPercent");

	UStatusEffect_ChargeBar_Master_C_GetChargeBonusPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BonusPct != nullptr)
		*BonusPct = params.BonusPct;

}


// Function StatusEffect_ChargeBar_Master.StatusEffect_ChargeBar_Master_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_ChargeBar_Master_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ChargeBar_Master.StatusEffect_ChargeBar_Master_C.OnPreApply");

	UStatusEffect_ChargeBar_Master_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_ChargeBar_Master.StatusEffect_ChargeBar_Master_C.ExecuteUbergraph_StatusEffect_ChargeBar_Master
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_ChargeBar_Master_C::ExecuteUbergraph_StatusEffect_ChargeBar_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ChargeBar_Master.StatusEffect_ChargeBar_Master_C.ExecuteUbergraph_StatusEffect_ChargeBar_Master");

	UStatusEffect_ChargeBar_Master_C_ExecuteUbergraph_StatusEffect_ChargeBar_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
