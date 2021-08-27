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

// Function CraftingCategoryWidget.CraftingCategoryWidget_C.GetCategoryText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UCraftingCategoryWidget_C::GetCategoryText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingCategoryWidget.CraftingCategoryWidget_C.GetCategoryText");

	UCraftingCategoryWidget_C_GetCategoryText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingCategoryWidget.CraftingCategoryWidget_C.GetCraftingEntriesList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCraftingEntryContainerListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCraftingEntryContainerListWidget* UCraftingCategoryWidget_C::GetCraftingEntriesList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingCategoryWidget.CraftingCategoryWidget_C.GetCraftingEntriesList");

	UCraftingCategoryWidget_C_GetCraftingEntriesList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
