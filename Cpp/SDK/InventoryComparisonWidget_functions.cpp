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

// Function InventoryComparisonWidget.InventoryComparisonWidget_C.GetComparisonSwitcher
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLWidgetSwitcher*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLWidgetSwitcher* UInventoryComparisonWidget_C::GetComparisonSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComparisonWidget.InventoryComparisonWidget_C.GetComparisonSwitcher");

	UInventoryComparisonWidget_C_GetComparisonSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryComparisonWidget.InventoryComparisonWidget_C.GetEquippedPetDetailsWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetDetailsWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetDetailsWidget* UInventoryComparisonWidget_C::GetEquippedPetDetailsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComparisonWidget.InventoryComparisonWidget_C.GetEquippedPetDetailsWidget");

	UInventoryComparisonWidget_C_GetEquippedPetDetailsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryComparisonWidget.InventoryComparisonWidget_C.GetSelectedPetDetailsWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetDetailsWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetDetailsWidget* UInventoryComparisonWidget_C::GetSelectedPetDetailsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComparisonWidget.InventoryComparisonWidget_C.GetSelectedPetDetailsWidget");

	UInventoryComparisonWidget_C_GetSelectedPetDetailsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryComparisonWidget.InventoryComparisonWidget_C.GetEquippedItemDetailsWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemDetailsWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemDetailsWidget* UInventoryComparisonWidget_C::GetEquippedItemDetailsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComparisonWidget.InventoryComparisonWidget_C.GetEquippedItemDetailsWidget");

	UInventoryComparisonWidget_C_GetEquippedItemDetailsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryComparisonWidget.InventoryComparisonWidget_C.GetSelectedItemDetailsWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemDetailsWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemDetailsWidget* UInventoryComparisonWidget_C::GetSelectedItemDetailsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComparisonWidget.InventoryComparisonWidget_C.GetSelectedItemDetailsWidget");

	UInventoryComparisonWidget_C_GetSelectedItemDetailsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
