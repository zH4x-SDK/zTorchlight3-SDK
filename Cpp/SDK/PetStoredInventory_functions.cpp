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

// Function PetStoredInventory.PetStoredInventory_C.GetSortedAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UPetStoredInventory_C::GetSortedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.GetSortedAnimation");

	UPetStoredInventory_C_GetSortedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredInventory.PetStoredInventory_C.GetSortText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPetStoredInventory_C::GetSortText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.GetSortText");

	UPetStoredInventory_C_GetSortText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredInventory.PetStoredInventory_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UPetStoredInventory_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.GetShowAnimation");

	UPetStoredInventory_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredInventory.PetStoredInventory_C.GetActivePetScrollBox
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UScrollBox*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UScrollBox* UPetStoredInventory_C::GetActivePetScrollBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.GetActivePetScrollBox");

	UPetStoredInventory_C_GetActivePetScrollBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredInventory.PetStoredInventory_C.GetStoredPetScrollBox
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UScrollBox*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UScrollBox* UPetStoredInventory_C::GetStoredPetScrollBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.GetStoredPetScrollBox");

	UPetStoredInventory_C_GetStoredPetScrollBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredInventory.PetStoredInventory_C.On_StoredPets_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UPetStoredInventory_C::On_StoredPets_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.On_StoredPets_GetNextListBinding_1");

	UPetStoredInventory_C_On_StoredPets_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredInventory.PetStoredInventory_C.On_ActivePetList_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UPetStoredInventory_C::On_ActivePetList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.On_ActivePetList_GetNextListBinding_1");

	UPetStoredInventory_C_On_ActivePetList_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredInventory.PetStoredInventory_C.GetListedPets
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UPetStoredInventory_C::GetListedPets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.GetListedPets");

	UPetStoredInventory_C_GetListedPets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredInventory.PetStoredInventory_C.GetActivePetStoredListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetStoredListWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetStoredListWidget* UPetStoredInventory_C::GetActivePetStoredListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.GetActivePetStoredListWidget");

	UPetStoredInventory_C_GetActivePetStoredListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredInventory.PetStoredInventory_C.GetDetailsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetDetailsWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetDetailsWidget* UPetStoredInventory_C::GetDetailsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.GetDetailsWidget");

	UPetStoredInventory_C_GetDetailsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredInventory.PetStoredInventory_C.GetSwitcher
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLWidgetSwitcher*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLWidgetSwitcher* UPetStoredInventory_C::GetSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.GetSwitcher");

	UPetStoredInventory_C_GetSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredInventory.PetStoredInventory_C.GetPetStoredListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetStoredListWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetStoredListWidget* UPetStoredInventory_C::GetPetStoredListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.GetPetStoredListWidget");

	UPetStoredInventory_C_GetPetStoredListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredInventory.PetStoredInventory_C.BlueprintSetIsFull
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsFull                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPetStoredInventory_C::BlueprintSetIsFull(bool bIsFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.BlueprintSetIsFull");

	UPetStoredInventory_C_BlueprintSetIsFull_Params params;
	params.bIsFull = bIsFull;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetStoredInventory.PetStoredInventory_C.UpdateSectionVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bHasActivePets                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bHasInactivePets               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPetStoredInventory_C::UpdateSectionVisibility(bool bHasActivePets, bool bHasInactivePets)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.UpdateSectionVisibility");

	UPetStoredInventory_C_UpdateSectionVisibility_Params params;
	params.bHasActivePets = bHasActivePets;
	params.bHasInactivePets = bHasInactivePets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetStoredInventory.PetStoredInventory_C.BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UPetStoredInventory_C::BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UPetStoredInventory_C_BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetStoredInventory.PetStoredInventory_C.ExecuteUbergraph_PetStoredInventory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPetStoredInventory_C::ExecuteUbergraph_PetStoredInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredInventory.PetStoredInventory_C.ExecuteUbergraph_PetStoredInventory");

	UPetStoredInventory_C_ExecuteUbergraph_PetStoredInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
