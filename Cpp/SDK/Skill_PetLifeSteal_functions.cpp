﻿// Name: Torchlight3, Version: 4.26.1

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

// Function Skill_PetLifeSteal.Skill_PetLifeSteal_C.OnSkillEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkill_PetLifeSteal_C::OnSkillEquipped(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_PetLifeSteal.Skill_PetLifeSteal_C.OnSkillEquipped");

	USkill_PetLifeSteal_C_OnSkillEquipped_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skill_PetLifeSteal.Skill_PetLifeSteal_C.OnSkillUnequipped
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkill_PetLifeSteal_C::OnSkillUnequipped(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_PetLifeSteal.Skill_PetLifeSteal_C.OnSkillUnequipped");

	USkill_PetLifeSteal_C_OnSkillUnequipped_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skill_PetLifeSteal.Skill_PetLifeSteal_C.GetSkillDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SkillLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText USkill_PetLifeSteal_C::GetSkillDescription(class AActor* Actor, int SkillLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_PetLifeSteal.Skill_PetLifeSteal_C.GetSkillDescription");

	USkill_PetLifeSteal_C_GetSkillDescription_Params params;
	params.Actor = Actor;
	params.SkillLevel = SkillLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
