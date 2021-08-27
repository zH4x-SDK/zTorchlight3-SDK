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

// Function SkillShape_AllyRevive.SkillShape_AllyRevive_C.GetRevivingDecal
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLDecalComponent*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLDecalComponent* ASkillShape_AllyRevive_C::GetRevivingDecal()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_AllyRevive.SkillShape_AllyRevive_C.GetRevivingDecal");

	ASkillShape_AllyRevive_C_GetRevivingDecal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillShape_AllyRevive.SkillShape_AllyRevive_C.GetReviveExpireDecal
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLDecalComponent*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLDecalComponent* ASkillShape_AllyRevive_C::GetReviveExpireDecal()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_AllyRevive.SkillShape_AllyRevive_C.GetReviveExpireDecal");

	ASkillShape_AllyRevive_C_GetReviveExpireDecal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillShape_AllyRevive.SkillShape_AllyRevive_C.GetReviveRangeDecal
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLDecalComponent*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLDecalComponent* ASkillShape_AllyRevive_C::GetReviveRangeDecal()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_AllyRevive.SkillShape_AllyRevive_C.GetReviveRangeDecal");

	ASkillShape_AllyRevive_C_GetReviveRangeDecal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
