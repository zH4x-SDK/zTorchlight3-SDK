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

// Function GenericResourceWidgetSmall.GenericResourceWidgetSmall_C.GetItemCostWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemCostWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemCostWidget* UGenericResourceWidgetSmall_C::GetItemCostWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericResourceWidgetSmall.GenericResourceWidgetSmall_C.GetItemCostWidget");

	UGenericResourceWidgetSmall_C_GetItemCostWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GenericResourceWidgetSmall.GenericResourceWidgetSmall_C.GetCurrencyCostWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCurrencyCostWidget*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCurrencyCostWidget* UGenericResourceWidgetSmall_C::GetCurrencyCostWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericResourceWidgetSmall.GenericResourceWidgetSmall_C.GetCurrencyCostWidget");

	UGenericResourceWidgetSmall_C_GetCurrencyCostWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GenericResourceWidgetSmall.GenericResourceWidgetSmall_C.GetCurrencyWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCurrencyWidget*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCurrencyWidget* UGenericResourceWidgetSmall_C::GetCurrencyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericResourceWidgetSmall.GenericResourceWidgetSmall_C.GetCurrencyWidget");

	UGenericResourceWidgetSmall_C_GetCurrencyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GenericResourceWidgetSmall.GenericResourceWidgetSmall_C.GetItemWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemBaseWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemBaseWidget* UGenericResourceWidgetSmall_C::GetItemWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericResourceWidgetSmall.GenericResourceWidgetSmall_C.GetItemWidget");

	UGenericResourceWidgetSmall_C_GetItemWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GenericResourceWidgetSmall.GenericResourceWidgetSmall_C.GetSwitcher
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetSwitcher*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetSwitcher* UGenericResourceWidgetSmall_C::GetSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericResourceWidgetSmall.GenericResourceWidgetSmall_C.GetSwitcher");

	UGenericResourceWidgetSmall_C_GetSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
