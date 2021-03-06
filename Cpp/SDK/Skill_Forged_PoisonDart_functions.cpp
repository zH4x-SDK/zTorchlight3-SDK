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

// Function Skill_Forged_PoisonDart.Skill_Forged_PoisonDart_C.GetDuration
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USkill_Forged_PoisonDart_C::GetDuration(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_Forged_PoisonDart.Skill_Forged_PoisonDart_C.GetDuration");

	USkill_Forged_PoisonDart_C_GetDuration_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Skill_Forged_PoisonDart.Skill_Forged_PoisonDart_C.OnSkillEventHit01
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SkillInstanceId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USkill_Forged_PoisonDart_C::OnSkillEventHit01(class AActor* Actor, class AActor* TargetActor, const struct FVector& TargetLocation, int SkillInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_Forged_PoisonDart.Skill_Forged_PoisonDart_C.OnSkillEventHit01");

	USkill_Forged_PoisonDart_C_OnSkillEventHit01_Params params;
	params.Actor = Actor;
	params.TargetActor = TargetActor;
	params.TargetLocation = TargetLocation;
	params.SkillInstanceId = SkillInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Skill_Forged_PoisonDart.Skill_Forged_PoisonDart_C.GetSkillDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SkillLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText USkill_Forged_PoisonDart_C::GetSkillDescription(class AActor* Actor, int SkillLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_Forged_PoisonDart.Skill_Forged_PoisonDart_C.GetSkillDescription");

	USkill_Forged_PoisonDart_C_GetSkillDescription_Params params;
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
