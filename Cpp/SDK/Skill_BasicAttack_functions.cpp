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

// Function Skill_BasicAttack.Skill_BasicAttack_C.GetOverrideSkill
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// Frontiers_ESkillSlot           InSkillSlot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// Frontiers_ESkillSet            InSkillSet                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// Frontiers_ESkillSlot           OutSkillSlot                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// Frontiers_ESkillSet            OutSkillSet                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USkill_BasicAttack_C::GetOverrideSkill(Frontiers_ESkillSlot InSkillSlot, Frontiers_ESkillSet InSkillSet, Frontiers_ESkillSlot* OutSkillSlot, Frontiers_ESkillSet* OutSkillSet, class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_BasicAttack.Skill_BasicAttack_C.GetOverrideSkill");

	USkill_BasicAttack_C_GetOverrideSkill_Params params;
	params.InSkillSlot = InSkillSlot;
	params.InSkillSet = InSkillSet;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutSkillSlot != nullptr)
		*OutSkillSlot = params.OutSkillSlot;
	if (OutSkillSet != nullptr)
		*OutSkillSet = params.OutSkillSet;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
