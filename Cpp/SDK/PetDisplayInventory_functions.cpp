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

// Function PetDisplayInventory.PetDisplayInventory_C.GetSortedAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UPetDisplayInventory_C::GetSortedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.GetSortedAnimation");

	UPetDisplayInventory_C_GetSortedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayInventory.PetDisplayInventory_C.GetSortText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPetDisplayInventory_C::GetSortText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.GetSortText");

	UPetDisplayInventory_C_GetSortText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayInventory.PetDisplayInventory_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UPetDisplayInventory_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.GetShowAnimation");

	UPetDisplayInventory_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayInventory.PetDisplayInventory_C.GetActivePetScrollBox
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UScrollBox*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UScrollBox* UPetDisplayInventory_C::GetActivePetScrollBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.GetActivePetScrollBox");

	UPetDisplayInventory_C_GetActivePetScrollBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayInventory.PetDisplayInventory_C.GetStoredPetScrollBox
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UScrollBox*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UScrollBox* UPetDisplayInventory_C::GetStoredPetScrollBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.GetStoredPetScrollBox");

	UPetDisplayInventory_C_GetStoredPetScrollBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayInventory.PetDisplayInventory_C.On_StoredPets_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UPetDisplayInventory_C::On_StoredPets_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.On_StoredPets_GetNextListBinding_1");

	UPetDisplayInventory_C_On_StoredPets_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayInventory.PetDisplayInventory_C.On_ActivePetList_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UPetDisplayInventory_C::On_ActivePetList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.On_ActivePetList_GetNextListBinding_1");

	UPetDisplayInventory_C_On_ActivePetList_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayInventory.PetDisplayInventory_C.GetListedPets
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UPetDisplayInventory_C::GetListedPets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.GetListedPets");

	UPetDisplayInventory_C_GetListedPets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayInventory.PetDisplayInventory_C.GetActivePetStoredListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetStoredListWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetStoredListWidget* UPetDisplayInventory_C::GetActivePetStoredListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.GetActivePetStoredListWidget");

	UPetDisplayInventory_C_GetActivePetStoredListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayInventory.PetDisplayInventory_C.GetDetailsWidget
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPetDetailsWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetDetailsWidget* UPetDisplayInventory_C::GetDetailsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.GetDetailsWidget");

	UPetDisplayInventory_C_GetDetailsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayInventory.PetDisplayInventory_C.GetSwitcher
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLWidgetSwitcher*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLWidgetSwitcher* UPetDisplayInventory_C::GetSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.GetSwitcher");

	UPetDisplayInventory_C_GetSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayInventory.PetDisplayInventory_C.GetPetStoredListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetStoredListWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetStoredListWidget* UPetDisplayInventory_C::GetPetStoredListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.GetPetStoredListWidget");

	UPetDisplayInventory_C_GetPetStoredListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayInventory.PetDisplayInventory_C.UpdateSectionVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bHasActivePets                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bHasInactivePets               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPetDisplayInventory_C::UpdateSectionVisibility(bool bHasActivePets, bool bHasInactivePets)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.UpdateSectionVisibility");

	UPetDisplayInventory_C_UpdateSectionVisibility_Params params;
	params.bHasActivePets = bHasActivePets;
	params.bHasInactivePets = bHasInactivePets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetDisplayInventory.PetDisplayInventory_C.BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UPetDisplayInventory_C::BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UPetDisplayInventory_C_BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetDisplayInventory.PetDisplayInventory_C.ExecuteUbergraph_PetDisplayInventory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPetDisplayInventory_C::ExecuteUbergraph_PetDisplayInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayInventory.PetDisplayInventory_C.ExecuteUbergraph_PetDisplayInventory");

	UPetDisplayInventory_C_ExecuteUbergraph_PetDisplayInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
