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

// Function SkillTierBonusDescription.SkillTierBonusDescription_C.GetDescriptionTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* USkillTierBonusDescription_C::GetDescriptionTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTierBonusDescription.SkillTierBonusDescription_C.GetDescriptionTextBlock");

	USkillTierBonusDescription_C_GetDescriptionTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillTierBonusDescription.SkillTierBonusDescription_C.GetPointsRemainingTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* USkillTierBonusDescription_C::GetPointsRemainingTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTierBonusDescription.SkillTierBonusDescription_C.GetPointsRemainingTextBlock");

	USkillTierBonusDescription_C_GetPointsRemainingTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillTierBonusDescription.SkillTierBonusDescription_C.GetTitleTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* USkillTierBonusDescription_C::GetTitleTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTierBonusDescription.SkillTierBonusDescription_C.GetTitleTextBlock");

	USkillTierBonusDescription_C_GetTitleTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
