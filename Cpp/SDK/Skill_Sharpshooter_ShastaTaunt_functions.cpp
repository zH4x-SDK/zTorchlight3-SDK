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

// Function Skill_Sharpshooter_ShastaTaunt.Skill_Sharpshooter_ShastaTaunt_C.OnSkillStart
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  SkillTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Param                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SkillInstanceId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkill_Sharpshooter_ShastaTaunt_C::OnSkillStart(class AActor* Actor, class AActor* SkillTarget, const struct FVector& Location, float Param, int SkillInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_Sharpshooter_ShastaTaunt.Skill_Sharpshooter_ShastaTaunt_C.OnSkillStart");

	USkill_Sharpshooter_ShastaTaunt_C_OnSkillStart_Params params;
	params.Actor = Actor;
	params.SkillTarget = SkillTarget;
	params.Location = Location;
	params.Param = Param;
	params.SkillInstanceId = SkillInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skill_Sharpshooter_ShastaTaunt.Skill_Sharpshooter_ShastaTaunt_C.OnSkillActorOverlap
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASkillShape*             Shape                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsPrimaryTarget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            SkillInstanceId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkill_Sharpshooter_ShastaTaunt_C::OnSkillActorOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape, bool bIsPrimaryTarget, int SkillInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_Sharpshooter_ShastaTaunt.Skill_Sharpshooter_ShastaTaunt_C.OnSkillActorOverlap");

	USkill_Sharpshooter_ShastaTaunt_C_OnSkillActorOverlap_Params params;
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
