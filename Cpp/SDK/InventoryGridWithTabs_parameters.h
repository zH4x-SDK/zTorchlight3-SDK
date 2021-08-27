#pragma once

// Name: Torchlight3, Version: 4.26.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetSortedAnimation
struct UInventoryGridWithTabs_C_GetSortedAnimation_Params
{
	FrontiersUI_EUIInventoryCategory                   Category;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetSortText
struct UInventoryGridWithTabs_C_GetSortText_Params
{
	FrontiersUI_EUIInventoryCategory                   Category;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTLTextBlock*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetOpenPetShoppingListButton
struct UInventoryGridWithTabs_C_GetOpenPetShoppingListButton_Params
{
	class UTLButton*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedPotionsListWidget
struct UInventoryGridWithTabs_C_GetEquippedPotionsListWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_EquippedPotionList_GetNextListBinding_1
struct UInventoryGridWithTabs_C_On_EquippedPotionList_GetNextListBinding_1_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.Get_SendToTownText_Text_1
struct UInventoryGridWithTabs_C_Get_SendToTownText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetSendToTownButton
struct UInventoryGridWithTabs_C_GetSendToTownButton_Params
{
	class UTLButton*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetPetButtonVisibility
struct UInventoryGridWithTabs_C_GetPetButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedPetItemWidget
struct UInventoryGridWithTabs_C_GetEquippedPetItemWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_PetItemList_GetNextListBinding_1
struct UInventoryGridWithTabs_C_On_PetItemList_GetNextListBinding_1_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_Items2_GetNextListBinding_1
struct UInventoryGridWithTabs_C_On_Items2_GetNextListBinding_1_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetCurrencyWidget
struct UInventoryGridWithTabs_C_GetCurrencyWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryItem2ListWidget
struct UInventoryGridWithTabs_C_GetInventoryItem2ListWidget_Params
{
	class UInventoryItemListWidget*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetItemWidget
struct UInventoryGridWithTabs_C_GetItemWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_GearList_GetNextListBinding_1
struct UInventoryGridWithTabs_C_On_GearList_GetNextListBinding_1_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_WeaponList_GetNextListBinding_1
struct UInventoryGridWithTabs_C_On_WeaponList_GetNextListBinding_1_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedGearWidget
struct UInventoryGridWithTabs_C_GetEquippedGearWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedWeaponsWidget
struct UInventoryGridWithTabs_C_GetEquippedWeaponsWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedWidget
struct UInventoryGridWithTabs_C_GetEquippedWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetEquippedListWidget
struct UInventoryGridWithTabs_C_GetEquippedListWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetCurrencyListWidget
struct UInventoryGridWithTabs_C_GetCurrencyListWidget_Params
{
	class UCurrencyListWidget*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.On_Items_GetNextListBinding_1
struct UInventoryGridWithTabs_C_On_Items_GetNextListBinding_1_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryItemListWidget
struct UInventoryGridWithTabs_C_GetInventoryItemListWidget_Params
{
	class UInventoryItemListWidget*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryCategoryTabbedMenu
struct UInventoryGridWithTabs_C_GetInventoryCategoryTabbedMenu_Params
{
	class UTabbedMenuWidget*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryItemGridWidget
struct UInventoryGridWithTabs_C_GetInventoryItemGridWidget_Params
{
	class UInventoryItemListWidget*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.GetInventoryWidgetSwitcher
struct UInventoryGridWithTabs_C_GetInventoryWidgetSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__SentPettoTown_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UInventoryGridWithTabs_C_BndEvt__SentPettoTown_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.SetItemHeader
struct UInventoryGridWithTabs_C_SetItemHeader_Params
{
	struct FText                                       Name;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UUserWidget*                                 Header;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__SellAllButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UInventoryGridWithTabs_C_BndEvt__SellAllButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__PetShoppingListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UInventoryGridWithTabs_C_BndEvt__PetShoppingListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__TLButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UInventoryGridWithTabs_C_BndEvt__TLButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__TLButton_538_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UInventoryGridWithTabs_C_BndEvt__TLButton_538_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UInventoryGridWithTabs_C_BndEvt__TLButton_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InventoryGridWithTabs.InventoryGridWithTabs_C.ExecuteUbergraph_InventoryGridWithTabs
struct UInventoryGridWithTabs_C_ExecuteUbergraph_InventoryGridWithTabs_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
