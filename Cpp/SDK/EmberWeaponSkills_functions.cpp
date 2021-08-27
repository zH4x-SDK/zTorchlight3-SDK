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

// Function EmberWeaponSkills.EmberWeaponSkills_C.GetDefaultEmberWeaponWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UEmberWeaponSkills_C::GetDefaultEmberWeaponWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmberWeaponSkills.EmberWeaponSkills_C.GetDefaultEmberWeaponWidget");

	UEmberWeaponSkills_C_GetDefaultEmberWeaponWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EmberWeaponSkills.EmberWeaponSkills_C.GetSkillsInTabList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillInTabListWidget*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillInTabListWidget* UEmberWeaponSkills_C::GetSkillsInTabList()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmberWeaponSkills.EmberWeaponSkills_C.GetSkillsInTabList");

	UEmberWeaponSkills_C_GetSkillsInTabList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EmberWeaponSkills.EmberWeaponSkills_C.GetSkillTabBackground
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UEmberWeaponSkills_C::GetSkillTabBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmberWeaponSkills.EmberWeaponSkills_C.GetSkillTabBackground");

	UEmberWeaponSkills_C_GetSkillTabBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
