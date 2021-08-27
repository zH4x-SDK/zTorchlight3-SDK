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

// Function InventoryComparisonOnlyOne.InventoryComparisonOnlyOne_C.GetComparisonSwitcher
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLWidgetSwitcher*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLWidgetSwitcher* UInventoryComparisonOnlyOne_C::GetComparisonSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComparisonOnlyOne.InventoryComparisonOnlyOne_C.GetComparisonSwitcher");

	UInventoryComparisonOnlyOne_C_GetComparisonSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryComparisonOnlyOne.InventoryComparisonOnlyOne_C.GetSelectedPetDetailsWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetDetailsWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetDetailsWidget* UInventoryComparisonOnlyOne_C::GetSelectedPetDetailsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComparisonOnlyOne.InventoryComparisonOnlyOne_C.GetSelectedPetDetailsWidget");

	UInventoryComparisonOnlyOne_C_GetSelectedPetDetailsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryComparisonOnlyOne.InventoryComparisonOnlyOne_C.GetSelectedItemDetailsWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemDetailsWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemDetailsWidget* UInventoryComparisonOnlyOne_C::GetSelectedItemDetailsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComparisonOnlyOne.InventoryComparisonOnlyOne_C.GetSelectedItemDetailsWidget");

	UInventoryComparisonOnlyOne_C_GetSelectedItemDetailsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
