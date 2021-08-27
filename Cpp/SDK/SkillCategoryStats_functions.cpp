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

// Function SkillCategoryStats.SkillCategoryStats_C.Get_CategoryHeader_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility USkillCategoryStats_C::Get_CategoryHeader_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCategoryStats.SkillCategoryStats_C.Get_CategoryHeader_Visibility_1");

	USkillCategoryStats_C_Get_CategoryHeader_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillCategoryStats.SkillCategoryStats_C.GetStatRowList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatRowListWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatRowListWidget* USkillCategoryStats_C::GetStatRowList()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCategoryStats.SkillCategoryStats_C.GetStatRowList");

	USkillCategoryStats_C_GetStatRowList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
