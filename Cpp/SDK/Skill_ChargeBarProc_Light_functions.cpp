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

// Function Skill_ChargeBarProc_Light.Skill_ChargeBarProc_Light_C.GetChargeBonusPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BonusPercent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkill_ChargeBarProc_Light_C::GetChargeBonusPercent(class AActor* Actor, float* BonusPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_ChargeBarProc_Light.Skill_ChargeBarProc_Light_C.GetChargeBonusPercent");

	USkill_ChargeBarProc_Light_C_GetChargeBonusPercent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BonusPercent != nullptr)
		*BonusPercent = params.BonusPercent;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
