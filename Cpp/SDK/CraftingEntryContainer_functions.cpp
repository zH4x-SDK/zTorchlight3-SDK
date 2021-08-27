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

// Function CraftingEntryContainer.CraftingEntryContainer_C.GetCraftingQueueEntryWidget_Blueprint
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCraftingQueueEntryWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCraftingQueueEntryWidget* UCraftingEntryContainer_C::GetCraftingQueueEntryWidget_Blueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingEntryContainer.CraftingEntryContainer_C.GetCraftingQueueEntryWidget_Blueprint");

	UCraftingEntryContainer_C_GetCraftingQueueEntryWidget_Blueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingEntryContainer.CraftingEntryContainer_C.GetCraftingRecipeWidget_Blueprint
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCraftingRecipeWidget*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCraftingRecipeWidget* UCraftingEntryContainer_C::GetCraftingRecipeWidget_Blueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingEntryContainer.CraftingEntryContainer_C.GetCraftingRecipeWidget_Blueprint");

	UCraftingEntryContainer_C_GetCraftingRecipeWidget_Blueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingEntryContainer.CraftingEntryContainer_C.GetWidgetSwitcher
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetSwitcher*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetSwitcher* UCraftingEntryContainer_C::GetWidgetSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingEntryContainer.CraftingEntryContainer_C.GetWidgetSwitcher");

	UCraftingEntryContainer_C_GetWidgetSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingEntryContainer.CraftingEntryContainer_C.BlueprintSetRecipeEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCraftingEntryContainer_C::BlueprintSetRecipeEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingEntryContainer.CraftingEntryContainer_C.BlueprintSetRecipeEnabled");

	UCraftingEntryContainer_C_BlueprintSetRecipeEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraftingEntryContainer.CraftingEntryContainer_C.ExecuteUbergraph_CraftingEntryContainer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCraftingEntryContainer_C::ExecuteUbergraph_CraftingEntryContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingEntryContainer.CraftingEntryContainer_C.ExecuteUbergraph_CraftingEntryContainer");

	UCraftingEntryContainer_C_ExecuteUbergraph_CraftingEntryContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
