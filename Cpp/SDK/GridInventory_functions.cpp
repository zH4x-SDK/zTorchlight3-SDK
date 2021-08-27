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

// Function GridInventory.GridInventory_C.GetPlayerInfoWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPlayerInfoWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPlayerInfoWidget* UGridInventory_C::GetPlayerInfoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.GetPlayerInfoWidget");

	UGridInventory_C_GetPlayerInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GridInventory.GridInventory_C.PetItemsGetNextList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UGridInventory_C::PetItemsGetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.PetItemsGetNextList");

	UGridInventory_C_PetItemsGetNextList_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GridInventory.GridInventory_C.GetPetItemsWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemEquippedListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemEquippedListWidget* UGridInventory_C::GetPetItemsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.GetPetItemsWidget");

	UGridInventory_C_GetPetItemsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GridInventory.GridInventory_C.OnGetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UGridInventory_C::OnGetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.OnGetNextListBinding_1");

	UGridInventory_C_OnGetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GridInventory.GridInventory_C.GetInventoryGridList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UGridInventory_C::GetInventoryGridList()
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.GetInventoryGridList");

	UGridInventory_C_GetInventoryGridList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GridInventory.GridInventory_C.GetInventoryGridWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryGridWithTabsWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryGridWithTabsWidget* UGridInventory_C::GetInventoryGridWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.GetInventoryGridWidget");

	UGridInventory_C_GetInventoryGridWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GridInventory.GridInventory_C.ResourcesGetNextList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UGridInventory_C::ResourcesGetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.ResourcesGetNextList");

	UGridInventory_C_ResourcesGetNextList_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GridInventory.GridInventory_C.WeaponsGetNextList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UGridInventory_C::WeaponsGetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.WeaponsGetNextList");

	UGridInventory_C_WeaponsGetNextList_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GridInventory.GridInventory_C.GearGetNextList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UGridInventory_C::GearGetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.GearGetNextList");

	UGridInventory_C_GearGetNextList_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GridInventory.GridInventory_C.GetStatsPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLUserWidget*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLUserWidget* UGridInventory_C::GetStatsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.GetStatsPanel");

	UGridInventory_C_GetStatsPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GridInventory.GridInventory_C.GetEquippedGearWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemEquippedListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemEquippedListWidget* UGridInventory_C::GetEquippedGearWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.GetEquippedGearWidget");

	UGridInventory_C_GetEquippedGearWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GridInventory.GridInventory_C.GetEquippedWeaponsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemEquippedListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemEquippedListWidget* UGridInventory_C::GetEquippedWeaponsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.GetEquippedWeaponsWidget");

	UGridInventory_C_GetEquippedWeaponsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GridInventory.GridInventory_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UGridInventory_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.GetShowAnimation");

	UGridInventory_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GridInventory.GridInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGridInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.Construct");

	UGridInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GridInventory.GridInventory_C.BndEvt__StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UGridInventory_C::BndEvt__StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.BndEvt__StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UGridInventory_C_BndEvt__StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GridInventory.GridInventory_C.BlueprintSetSelectMode
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           SelectMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGridInventory_C::BlueprintSetSelectMode(bool SelectMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.BlueprintSetSelectMode");

	UGridInventory_C_BlueprintSetSelectMode_Params params;
	params.SelectMode = SelectMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GridInventory.GridInventory_C.ExecuteUbergraph_GridInventory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGridInventory_C::ExecuteUbergraph_GridInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GridInventory.GridInventory_C.ExecuteUbergraph_GridInventory");

	UGridInventory_C_ExecuteUbergraph_GridInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
