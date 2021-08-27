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

// Function CraftingRecipes.CraftingRecipes_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UCraftingRecipes_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingRecipes.CraftingRecipes_C.GetShowAnimation");

	UCraftingRecipes_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingRecipes.CraftingRecipes_C.GetCraftingQueueWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCraftingQueueWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCraftingQueueWidget* UCraftingRecipes_C::GetCraftingQueueWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingRecipes.CraftingRecipes_C.GetCraftingQueueWidget");

	UCraftingRecipes_C_GetCraftingQueueWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingRecipes.CraftingRecipes_C.GetDetailsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCraftingRecipeDetailWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCraftingRecipeDetailWidget* UCraftingRecipes_C::GetDetailsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingRecipes.CraftingRecipes_C.GetDetailsWidget");

	UCraftingRecipes_C_GetDetailsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
