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

// Function GridInventory.GridInventory_C.GetPlayerInfoWidget
struct UGridInventory_C_GetPlayerInfoWidget_Params
{
	class UPlayerInfoWidget*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GridInventory.GridInventory_C.PetItemsGetNextList
struct UGridInventory_C_PetItemsGetNextList_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GridInventory.GridInventory_C.GetPetItemsWidget
struct UGridInventory_C_GetPetItemsWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GridInventory.GridInventory_C.OnGetNextListBinding_1
struct UGridInventory_C_OnGetNextListBinding_1_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GridInventory.GridInventory_C.GetInventoryGridList
struct UGridInventory_C_GetInventoryGridList_Params
{
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GridInventory.GridInventory_C.GetInventoryGridWidget
struct UGridInventory_C_GetInventoryGridWidget_Params
{
	class UInventoryGridWithTabsWidget*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GridInventory.GridInventory_C.ResourcesGetNextList
struct UGridInventory_C_ResourcesGetNextList_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GridInventory.GridInventory_C.WeaponsGetNextList
struct UGridInventory_C_WeaponsGetNextList_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GridInventory.GridInventory_C.GearGetNextList
struct UGridInventory_C_GearGetNextList_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GridInventory.GridInventory_C.GetStatsPanel
struct UGridInventory_C_GetStatsPanel_Params
{
	class UTLUserWidget*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GridInventory.GridInventory_C.GetEquippedGearWidget
struct UGridInventory_C_GetEquippedGearWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GridInventory.GridInventory_C.GetEquippedWeaponsWidget
struct UGridInventory_C_GetEquippedWeaponsWidget_Params
{
	class UInventoryItemEquippedListWidget*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GridInventory.GridInventory_C.GetShowAnimation
struct UGridInventory_C_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GridInventory.GridInventory_C.Construct
struct UGridInventory_C_Construct_Params
{
};

// Function GridInventory.GridInventory_C.BndEvt__StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UGridInventory_C_BndEvt__StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GridInventory.GridInventory_C.BlueprintSetSelectMode
struct UGridInventory_C_BlueprintSetSelectMode_Params
{
	bool                                               SelectMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GridInventory.GridInventory_C.ExecuteUbergraph_GridInventory
struct UGridInventory_C_ExecuteUbergraph_GridInventory_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
