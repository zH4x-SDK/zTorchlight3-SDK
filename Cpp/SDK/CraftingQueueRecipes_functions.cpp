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

// Function CraftingQueueRecipes.CraftingQueueRecipes_C.On_CategoryList_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UCraftingQueueRecipes_C::On_CategoryList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingQueueRecipes.CraftingQueueRecipes_C.On_CategoryList_GetNextListBinding_1");

	UCraftingQueueRecipes_C_On_CategoryList_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingQueueRecipes.CraftingQueueRecipes_C.GetCraftingCategoriesList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCraftingCategoryListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCraftingCategoryListWidget* UCraftingQueueRecipes_C::GetCraftingCategoriesList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingQueueRecipes.CraftingQueueRecipes_C.GetCraftingCategoriesList");

	UCraftingQueueRecipes_C_GetCraftingCategoriesList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingQueueRecipes.CraftingQueueRecipes_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UCraftingQueueRecipes_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingQueueRecipes.CraftingQueueRecipes_C.GetShowAnimation");

	UCraftingQueueRecipes_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingQueueRecipes.CraftingQueueRecipes_C.BlueprintSetLoadingSpinnerEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCraftingQueueRecipes_C::BlueprintSetLoadingSpinnerEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingQueueRecipes.CraftingQueueRecipes_C.BlueprintSetLoadingSpinnerEnabled");

	UCraftingQueueRecipes_C_BlueprintSetLoadingSpinnerEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraftingQueueRecipes.CraftingQueueRecipes_C.ExecuteUbergraph_CraftingQueueRecipes
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCraftingQueueRecipes_C::ExecuteUbergraph_CraftingQueueRecipes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingQueueRecipes.CraftingQueueRecipes_C.ExecuteUbergraph_CraftingQueueRecipes");

	UCraftingQueueRecipes_C_ExecuteUbergraph_CraftingQueueRecipes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
