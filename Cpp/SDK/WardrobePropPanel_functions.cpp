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

// Function WardrobePropPanel.WardrobePropPanel_C.PetItemsGetNextList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UWardrobePropPanel_C::PetItemsGetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.PetItemsGetNextList");

	UWardrobePropPanel_C_PetItemsGetNextList_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.GetPlayerInfoWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPlayerInfoWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPlayerInfoWidget* UWardrobePropPanel_C::GetPlayerInfoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.GetPlayerInfoWidget");

	UWardrobePropPanel_C_GetPlayerInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.GetPetItemsWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemEquippedListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemEquippedListWidget* UWardrobePropPanel_C::GetPetItemsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.GetPetItemsWidget");

	UWardrobePropPanel_C_GetPetItemsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.GetWardrobePropName
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UWardrobePropPanel_C::GetWardrobePropName()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.GetWardrobePropName");

	UWardrobePropPanel_C_GetWardrobePropName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.OnGetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UWardrobePropPanel_C::OnGetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.OnGetNextListBinding_1");

	UWardrobePropPanel_C_OnGetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.GetInventoryGridList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UWardrobePropPanel_C::GetInventoryGridList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.GetInventoryGridList");

	UWardrobePropPanel_C_GetInventoryGridList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.GetInventoryGridWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryGridWithTabsWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryGridWithTabsWidget* UWardrobePropPanel_C::GetInventoryGridWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.GetInventoryGridWidget");

	UWardrobePropPanel_C_GetInventoryGridWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.ResourcesGetNextList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UWardrobePropPanel_C::ResourcesGetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.ResourcesGetNextList");

	UWardrobePropPanel_C_ResourcesGetNextList_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.WeaponsGetNextList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UWardrobePropPanel_C::WeaponsGetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.WeaponsGetNextList");

	UWardrobePropPanel_C_WeaponsGetNextList_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.GearGetNextList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UWardrobePropPanel_C::GearGetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.GearGetNextList");

	UWardrobePropPanel_C_GearGetNextList_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.GetStatsPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLUserWidget*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLUserWidget* UWardrobePropPanel_C::GetStatsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.GetStatsPanel");

	UWardrobePropPanel_C_GetStatsPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.GetEquippedGearWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemEquippedListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemEquippedListWidget* UWardrobePropPanel_C::GetEquippedGearWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.GetEquippedGearWidget");

	UWardrobePropPanel_C_GetEquippedGearWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.GetEquippedWeaponsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemEquippedListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemEquippedListWidget* UWardrobePropPanel_C::GetEquippedWeaponsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.GetEquippedWeaponsWidget");

	UWardrobePropPanel_C_GetEquippedWeaponsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UWardrobePropPanel_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.GetShowAnimation");

	UWardrobePropPanel_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WardrobePropPanel.WardrobePropPanel_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWardrobePropPanel_C::BndEvt__TLButton_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	UWardrobePropPanel_C_BndEvt__TLButton_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WardrobePropPanel.WardrobePropPanel_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWardrobePropPanel_C::BndEvt__MaleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWardrobePropPanel_C_BndEvt__MaleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WardrobePropPanel.WardrobePropPanel_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWardrobePropPanel_C::BndEvt__FemaleButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UWardrobePropPanel_C_BndEvt__FemaleButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WardrobePropPanel.WardrobePropPanel_C.BndEvt__SwapArmorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWardrobePropPanel_C::BndEvt__SwapArmorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.BndEvt__SwapArmorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWardrobePropPanel_C_BndEvt__SwapArmorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WardrobePropPanel.WardrobePropPanel_C.BndEvt__SwapWeaponsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWardrobePropPanel_C::BndEvt__SwapWeaponsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.BndEvt__SwapWeaponsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWardrobePropPanel_C_BndEvt__SwapWeaponsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WardrobePropPanel.WardrobePropPanel_C.ExecuteUbergraph_WardrobePropPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWardrobePropPanel_C::ExecuteUbergraph_WardrobePropPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WardrobePropPanel.WardrobePropPanel_C.ExecuteUbergraph_WardrobePropPanel");

	UWardrobePropPanel_C_ExecuteUbergraph_WardrobePropPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
