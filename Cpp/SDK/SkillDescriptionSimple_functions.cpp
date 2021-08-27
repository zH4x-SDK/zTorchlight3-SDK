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

// Function SkillDescriptionSimple.SkillDescriptionSimple_C.GetSkillDisplayWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillDisplayWidget*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillDisplayWidget* USkillDescriptionSimple_C::GetSkillDisplayWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescriptionSimple.SkillDescriptionSimple_C.GetSkillDisplayWidget");

	USkillDescriptionSimple_C_GetSkillDisplayWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillDescriptionSimple.SkillDescriptionSimple_C.GetLevelBonusListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillLevelBonusListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillLevelBonusListWidget* USkillDescriptionSimple_C::GetLevelBonusListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescriptionSimple.SkillDescriptionSimple_C.GetLevelBonusListWidget");

	USkillDescriptionSimple_C_GetLevelBonusListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillDescriptionSimple.SkillDescriptionSimple_C.GetCooldownText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* USkillDescriptionSimple_C::GetCooldownText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescriptionSimple.SkillDescriptionSimple_C.GetCooldownText");

	USkillDescriptionSimple_C_GetCooldownText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillDescriptionSimple.SkillDescriptionSimple_C.GetEnergyCostText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* USkillDescriptionSimple_C::GetEnergyCostText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescriptionSimple.SkillDescriptionSimple_C.GetEnergyCostText");

	USkillDescriptionSimple_C_GetEnergyCostText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
