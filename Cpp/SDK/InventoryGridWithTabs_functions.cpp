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

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetSortedAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// FrontiersUI_EUIInventoryCategory Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UInventoryGridWithTabs_C::GetSortedAnimation(FrontiersUI_EUIInventoryCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetSortedAnimation");

	UInventoryGridWithTabs_C_GetSortedAnimation_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetSortText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// FrontiersUI_EUIInventoryCategory Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UInventoryGridWithTabs_C::GetSortText(FrontiersUI_EUIInventoryCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetSortText");

	UInventoryGridWithTabs_C_GetSortText_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetOpenPetShoppingListButton
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLButton*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLButton* UInventoryGridWithTabs_C::GetOpenPetShoppingListButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetOpenPetShoppingListButton");

	UInventoryGridWithTabs_C_GetOpenPetShoppingListButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedPotionsListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemEquippedListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemEquippedListWidget* UInventoryGridWithTabs_C::GetEquippedPotionsListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedPotionsListWidget");

	UInventoryGridWithTabs_C_GetEquippedPotionsListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_EquippedPotionList_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UInventoryGridWithTabs_C::On_EquippedPotionList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_EquippedPotionList_GetNextListBinding_1");

	UInventoryGridWithTabs_C_On_EquippedPotionList_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.Get_SendToTownText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UInventoryGridWithTabs_C::Get_SendToTownText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.Get_SendToTownText_Text_1");

	UInventoryGridWithTabs_C_Get_SendToTownText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetSendToTownButton
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLButton*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLButton* UInventoryGridWithTabs_C::GetSendToTownButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetSendToTownButton");

	UInventoryGridWithTabs_C_GetSendToTownButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetPetButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UInventoryGridWithTabs_C::GetPetButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetPetButtonVisibility");

	UInventoryGridWithTabs_C_GetPetButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedPetItemWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemEquippedListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemEquippedListWidget* UInventoryGridWithTabs_C::GetEquippedPetItemWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedPetItemWidget");

	UInventoryGridWithTabs_C_GetEquippedPetItemWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_PetItemList_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UInventoryGridWithTabs_C::On_PetItemList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_PetItemList_GetNextListBinding_1");

	UInventoryGridWithTabs_C_On_PetItemList_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_Items2_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UInventoryGridWithTabs_C::On_Items2_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_Items2_GetNextListBinding_1");

	UInventoryGridWithTabs_C_On_Items2_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetCurrencyWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UInventoryGridWithTabs_C::GetCurrencyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetCurrencyWidget");

	UInventoryGridWithTabs_C_GetCurrencyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryItem2ListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemListWidget* UInventoryGridWithTabs_C::GetInventoryItem2ListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryItem2ListWidget");

	UInventoryGridWithTabs_C_GetInventoryItem2ListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetItemWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UInventoryGridWithTabs_C::GetItemWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetItemWidget");

	UInventoryGridWithTabs_C_GetItemWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_GearList_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UInventoryGridWithTabs_C::On_GearList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_GearList_GetNextListBinding_1");

	UInventoryGridWithTabs_C_On_GearList_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_WeaponList_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UInventoryGridWithTabs_C::On_WeaponList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_WeaponList_GetNextListBinding_1");

	UInventoryGridWithTabs_C_On_WeaponList_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedGearWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemEquippedListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemEquippedListWidget* UInventoryGridWithTabs_C::GetEquippedGearWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedGearWidget");

	UInventoryGridWithTabs_C_GetEquippedGearWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedWeaponsWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemEquippedListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemEquippedListWidget* UInventoryGridWithTabs_C::GetEquippedWeaponsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedWeaponsWidget");

	UInventoryGridWithTabs_C_GetEquippedWeaponsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UInventoryGridWithTabs_C::GetEquippedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedWidget");

	UInventoryGridWithTabs_C_GetEquippedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedListWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemEquippedListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemEquippedListWidget* UInventoryGridWithTabs_C::GetEquippedListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedListWidget");

	UInventoryGridWithTabs_C_GetEquippedListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetCurrencyListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCurrencyListWidget*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCurrencyListWidget* UInventoryGridWithTabs_C::GetCurrencyListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetCurrencyListWidget");

	UInventoryGridWithTabs_C_GetCurrencyListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_Items_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UInventoryGridWithTabs_C::On_Items_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_Items_GetNextListBinding_1");

	UInventoryGridWithTabs_C_On_Items_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryItemListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemListWidget* UInventoryGridWithTabs_C::GetInventoryItemListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryItemListWidget");

	UInventoryGridWithTabs_C_GetInventoryItemListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryCategoryTabbedMenu
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuWidget* UInventoryGridWithTabs_C::GetInventoryCategoryTabbedMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryCategoryTabbedMenu");

	UInventoryGridWithTabs_C_GetInventoryCategoryTabbedMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryItemGridWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemListWidget* UInventoryGridWithTabs_C::GetInventoryItemGridWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryItemGridWidget");

	UInventoryGridWithTabs_C_GetInventoryItemGridWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryWidgetSwitcher
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetSwitcher*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetSwitcher* UInventoryGridWithTabs_C::GetInventoryWidgetSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryWidgetSwitcher");

	UInventoryGridWithTabs_C_GetInventoryWidgetSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__SentPettoTown_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInventoryGridWithTabs_C::BndEvt__SentPettoTown_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__SentPettoTown_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UInventoryGridWithTabs_C_BndEvt__SentPettoTown_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.SetItemHeader
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UUserWidget*             Header                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryGridWithTabs_C::SetItemHeader(const struct FText& Name, class UUserWidget* Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.SetItemHeader");

	UInventoryGridWithTabs_C_SetItemHeader_Params params;
	params.Name = Name;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__SellAllButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInventoryGridWithTabs_C::BndEvt__SellAllButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__SellAllButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UInventoryGridWithTabs_C_BndEvt__SellAllButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__PetShoppingListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInventoryGridWithTabs_C::BndEvt__PetShoppingListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__PetShoppingListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UInventoryGridWithTabs_C_BndEvt__PetShoppingListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__TLButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInventoryGridWithTabs_C::BndEvt__TLButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__TLButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UInventoryGridWithTabs_C_BndEvt__TLButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__TLButton_538_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInventoryGridWithTabs_C::BndEvt__TLButton_538_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__TLButton_538_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UInventoryGridWithTabs_C_BndEvt__TLButton_538_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInventoryGridWithTabs_C::BndEvt__TLButton_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UInventoryGridWithTabs_C_BndEvt__TLButton_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryGridWithTabs.InventoryGridWithTabs_C.ExecuteUbergraph_InventoryGridWithTabs
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryGridWithTabs_C::ExecuteUbergraph_InventoryGridWithTabs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryGridWithTabs.InventoryGridWithTabs_C.ExecuteUbergraph_InventoryGridWithTabs");

	UInventoryGridWithTabs_C_ExecuteUbergraph_InventoryGridWithTabs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
