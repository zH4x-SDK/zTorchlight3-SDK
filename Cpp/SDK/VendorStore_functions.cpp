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

// Function VendorStore.VendorStore_C.GetCategoryHeaderText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UVendorStore_C::GetCategoryHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetCategoryHeaderText");

	UVendorStore_C_GetCategoryHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.GetCategoryTabbedMenuWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuWidget* UVendorStore_C::GetCategoryTabbedMenuWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetCategoryTabbedMenuWidget");

	UVendorStore_C_GetCategoryTabbedMenuWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.GetCategoryWidgetSwitcher
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetSwitcher*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetSwitcher* UVendorStore_C::GetCategoryWidgetSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetCategoryWidgetSwitcher");

	UVendorStore_C_GetCategoryWidgetSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.GetBuybackListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBuybackItemListWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UBuybackItemListWidget* UVendorStore_C::GetBuybackListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetBuybackListWidget");

	UVendorStore_C_GetBuybackListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UVendorStore_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetShowAnimation");

	UVendorStore_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.OnGetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UVendorStore_C::OnGetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.OnGetNextListBinding_1");

	UVendorStore_C_OnGetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.On_StoreGridList_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UVendorStore_C::On_StoreGridList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.On_StoreGridList_GetNextListBinding_1");

	UVendorStore_C_On_StoreGridList_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.GetStoreGridListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStoreGridListWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStoreGridListWidget* UVendorStore_C::GetStoreGridListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetStoreGridListWidget");

	UVendorStore_C_GetStoreGridListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.GetInventoryGridWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryGridWithTabsWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryGridWithTabsWidget* UVendorStore_C::GetInventoryGridWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetInventoryGridWidget");

	UVendorStore_C_GetInventoryGridWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.GetSellPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UVendorStore_C::GetSellPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetSellPanel");

	UVendorStore_C_GetSellPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.GetInventoryWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryGridWithTabsWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryGridWithTabsWidget* UVendorStore_C::GetInventoryWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetInventoryWidget");

	UVendorStore_C_GetInventoryWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.GetMainPanelSwitcher
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetSwitcher*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetSwitcher* UVendorStore_C::GetMainPanelSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetMainPanelSwitcher");

	UVendorStore_C_GetMainPanelSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.GetCurrencyWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCurrencyWidget*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCurrencyWidget* UVendorStore_C::GetCurrencyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetCurrencyWidget");

	UVendorStore_C_GetCurrencyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.GetNoItemsWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UVendorStore_C::GetNoItemsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetNoItemsWidget");

	UVendorStore_C_GetNoItemsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.GetItemDetailsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStoreDetailsWidget*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStoreDetailsWidget* UVendorStore_C::GetItemDetailsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetItemDetailsWidget");

	UVendorStore_C_GetItemDetailsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.GetSubMenu
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuWidget* UVendorStore_C::GetSubMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.GetSubMenu");

	UVendorStore_C_GetSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStore.VendorStore_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UVendorStore_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.Construct");

	UVendorStore_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VendorStore.VendorStore_C.SetStoreName
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   StoreName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UVendorStore_C::SetStoreName(const struct FText& StoreName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.SetStoreName");

	UVendorStore_C_SetStoreName_Params params;
	params.StoreName = StoreName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VendorStore.VendorStore_C.ExecuteUbergraph_VendorStore
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVendorStore_C::ExecuteUbergraph_VendorStore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStore.VendorStore_C.ExecuteUbergraph_VendorStore");

	UVendorStore_C_ExecuteUbergraph_VendorStore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
