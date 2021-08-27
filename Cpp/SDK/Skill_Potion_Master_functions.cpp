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

// Function Skill_Potion_Master.Skill_Potion_Master_C.ActivateOnPotionEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkill_Potion_Master_C::ActivateOnPotionEffects(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_Potion_Master.Skill_Potion_Master_C.ActivateOnPotionEffects");

	USkill_Potion_Master_C_ActivateOnPotionEffects_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skill_Potion_Master.Skill_Potion_Master_C.ActivateEffectsOnMinions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Inflictor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkill_Potion_Master_C::ActivateEffectsOnMinions(class AActor* Owner, class AActor* Inflictor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_Potion_Master.Skill_Potion_Master_C.ActivateEffectsOnMinions");

	USkill_Potion_Master_C_ActivateEffectsOnMinions_Params params;
	params.Owner = Owner;
	params.Inflictor = Inflictor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skill_Potion_Master.Skill_Potion_Master_C.ActivateEffectsOnSelf
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Inflictor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkill_Potion_Master_C::ActivateEffectsOnSelf(class AActor* Target, class AActor* Inflictor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_Potion_Master.Skill_Potion_Master_C.ActivateEffectsOnSelf");

	USkill_Potion_Master_C_ActivateEffectsOnSelf_Params params;
	params.Target = Target;
	params.Inflictor = Inflictor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skill_Potion_Master.Skill_Potion_Master_C.ActivateNearbyPotionObjects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Operator                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkill_Potion_Master_C::ActivateNearbyPotionObjects(class AActor* Operator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_Potion_Master.Skill_Potion_Master_C.ActivateNearbyPotionObjects");

	USkill_Potion_Master_C_ActivateNearbyPotionObjects_Params params;
	params.Operator = Operator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skill_Potion_Master.Skill_Potion_Master_C.GetSkillDescription
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SkillLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText USkill_Potion_Master_C::GetSkillDescription(class AActor* Actor, int SkillLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_Potion_Master.Skill_Potion_Master_C.GetSkillDescription");

	USkill_Potion_Master_C_GetSkillDescription_Params params;
	params.Actor = Actor;
	params.SkillLevel = SkillLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Skill_Potion_Master.Skill_Potion_Master_C.OnSkillStart
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  SkillTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Param                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SkillInstanceId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkill_Potion_Master_C::OnSkillStart(class AActor* Actor, class AActor* SkillTarget, const struct FVector& Location, float Param, int SkillInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_Potion_Master.Skill_Potion_Master_C.OnSkillStart");

	USkill_Potion_Master_C_OnSkillStart_Params params;
	params.Actor = Actor;
	params.SkillTarget = SkillTarget;
	params.Location = Location;
	params.Param = Param;
	params.SkillInstanceId = SkillInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
