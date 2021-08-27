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

// Function AccountStash.AccountStash_C.GetRetryWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryStashLoadRetryWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryStashLoadRetryWidget* UAccountStash_C::GetRetryWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountStash.AccountStash_C.GetRetryWidget");

	UAccountStash_C_GetRetryWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AccountStash.AccountStash_C.GetStashSwitcher
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLWidgetSwitcher*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLWidgetSwitcher* UAccountStash_C::GetStashSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountStash.AccountStash_C.GetStashSwitcher");

	UAccountStash_C_GetStashSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AccountStash.AccountStash_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UAccountStash_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountStash.AccountStash_C.GetShowAnimation");

	UAccountStash_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AccountStash.AccountStash_C.GetInventoryGridWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryGridWithTabsWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryGridWithTabsWidget* UAccountStash_C::GetInventoryGridWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountStash.AccountStash_C.GetInventoryGridWidget");

	UAccountStash_C_GetInventoryGridWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AccountStash.AccountStash_C.GetInventoryCategoryTabbedMenu
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuWidget* UAccountStash_C::GetInventoryCategoryTabbedMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountStash.AccountStash_C.GetInventoryCategoryTabbedMenu");

	UAccountStash_C_GetInventoryCategoryTabbedMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AccountStash.AccountStash_C.GetInventoryItemListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemListWidget* UAccountStash_C::GetInventoryItemListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountStash.AccountStash_C.GetInventoryItemListWidget");

	UAccountStash_C_GetInventoryItemListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AccountStash.AccountStash_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UAccountStash_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountStash.AccountStash_C.Construct");

	UAccountStash_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AccountStash.AccountStash_C.ExecuteUbergraph_AccountStash
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAccountStash_C::ExecuteUbergraph_AccountStash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountStash.AccountStash_C.ExecuteUbergraph_AccountStash");

	UAccountStash_C_ExecuteUbergraph_AccountStash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
