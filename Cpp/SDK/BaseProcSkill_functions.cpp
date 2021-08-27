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

// Function BaseProcSkill.BaseProcSkill_C.ShouldDoProc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Skill_Target                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Param                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Skill_Instance_Id              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShouldProc                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBaseProcSkill_C::ShouldDoProc(class AActor* Actor, class AActor* Skill_Target, const struct FVector& Location, float Param, int Skill_Instance_Id, bool* ShouldProc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProcSkill.BaseProcSkill_C.ShouldDoProc");

	UBaseProcSkill_C_ShouldDoProc_Params params;
	params.Actor = Actor;
	params.Skill_Target = Skill_Target;
	params.Location = Location;
	params.Param = Param;
	params.Skill_Instance_Id = Skill_Instance_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldProc != nullptr)
		*ShouldProc = params.ShouldProc;

}


// Function BaseProcSkill.BaseProcSkill_C.OnSkillStart
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  SkillTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Param                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SkillInstanceId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseProcSkill_C::OnSkillStart(class AActor* Actor, class AActor* SkillTarget, const struct FVector& Location, float Param, int SkillInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProcSkill.BaseProcSkill_C.OnSkillStart");

	UBaseProcSkill_C_OnSkillStart_Params params;
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
