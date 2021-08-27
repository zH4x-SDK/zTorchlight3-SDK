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

// Function Skill_BloodDrinker_SpinningBlade.Skill_BloodDrinker_SpinningBlade_C.OnSkillEventHit01
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SkillInstanceId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USkill_BloodDrinker_SpinningBlade_C::OnSkillEventHit01(class AActor* Actor, class AActor* TargetActor, const struct FVector& TargetLocation, int SkillInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_BloodDrinker_SpinningBlade.Skill_BloodDrinker_SpinningBlade_C.OnSkillEventHit01");

	USkill_BloodDrinker_SpinningBlade_C_OnSkillEventHit01_Params params;
	params.Actor = Actor;
	params.TargetActor = TargetActor;
	params.TargetLocation = TargetLocation;
	params.SkillInstanceId = SkillInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Skill_BloodDrinker_SpinningBlade.Skill_BloodDrinker_SpinningBlade_C.GetSkillDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SkillLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText USkill_BloodDrinker_SpinningBlade_C::GetSkillDescription(class AActor* Actor, int SkillLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_BloodDrinker_SpinningBlade.Skill_BloodDrinker_SpinningBlade_C.GetSkillDescription");

	USkill_BloodDrinker_SpinningBlade_C_GetSkillDescription_Params params;
	params.Actor = Actor;
	params.SkillLevel = SkillLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Skill_BloodDrinker_SpinningBlade.Skill_BloodDrinker_SpinningBlade_C.OnSkillStart
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  SkillTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Param                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SkillInstanceId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkill_BloodDrinker_SpinningBlade_C::OnSkillStart(class AActor* Actor, class AActor* SkillTarget, const struct FVector& Location, float Param, int SkillInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_BloodDrinker_SpinningBlade.Skill_BloodDrinker_SpinningBlade_C.OnSkillStart");

	USkill_BloodDrinker_SpinningBlade_C_OnSkillStart_Params params;
	params.Actor = Actor;
	params.SkillTarget = SkillTarget;
	params.Location = Location;
	params.Param = Param;
	params.SkillInstanceId = SkillInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skill_BloodDrinker_SpinningBlade.Skill_BloodDrinker_SpinningBlade_C.OnSkillActorEndOverlap
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASkillShape*             Shape                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkill_BloodDrinker_SpinningBlade_C::OnSkillActorEndOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_BloodDrinker_SpinningBlade.Skill_BloodDrinker_SpinningBlade_C.OnSkillActorEndOverlap");

	USkill_BloodDrinker_SpinningBlade_C_OnSkillActorEndOverlap_Params params;
	params.Instigator = Instigator;
	params.Actor = Actor;
	params.Shape = Shape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skill_BloodDrinker_SpinningBlade.Skill_BloodDrinker_SpinningBlade_C.OnSkillActorOverlap
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASkillShape*             Shape                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsPrimaryTarget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            SkillInstanceId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkill_BloodDrinker_SpinningBlade_C::OnSkillActorOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape, bool bIsPrimaryTarget, int SkillInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_BloodDrinker_SpinningBlade.Skill_BloodDrinker_SpinningBlade_C.OnSkillActorOverlap");

	USkill_BloodDrinker_SpinningBlade_C_OnSkillActorOverlap_Params params;
	params.Instigator = Instigator;
	params.Actor = Actor;
	params.Shape = Shape;
	params.bIsPrimaryTarget = bIsPrimaryTarget;
	params.SkillInstanceId = SkillInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
