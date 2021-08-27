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

// Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetSortedAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UPetStoredSmallInventory_C::GetSortedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetSortedAnimation");

	UPetStoredSmallInventory_C_GetSortedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetSortText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPetStoredSmallInventory_C::GetSortText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetSortText");

	UPetStoredSmallInventory_C_GetSortText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetActivePetScrollBox
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UScrollBox*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UScrollBox* UPetStoredSmallInventory_C::GetActivePetScrollBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetActivePetScrollBox");

	UPetStoredSmallInventory_C_GetActivePetScrollBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetStoredPetScrollBox
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UScrollBox*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UScrollBox* UPetStoredSmallInventory_C::GetStoredPetScrollBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetStoredPetScrollBox");

	UPetStoredSmallInventory_C_GetStoredPetScrollBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.On_StoredPets_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UPetStoredSmallInventory_C::On_StoredPets_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.On_StoredPets_GetNextListBinding_1");

	UPetStoredSmallInventory_C_On_StoredPets_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.On_ActivePetList_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UPetStoredSmallInventory_C::On_ActivePetList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.On_ActivePetList_GetNextListBinding_1");

	UPetStoredSmallInventory_C_On_ActivePetList_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetListedPets
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UPetStoredSmallInventory_C::GetListedPets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetListedPets");

	UPetStoredSmallInventory_C_GetListedPets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetActivePetStoredListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetStoredListWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetStoredListWidget* UPetStoredSmallInventory_C::GetActivePetStoredListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetActivePetStoredListWidget");

	UPetStoredSmallInventory_C_GetActivePetStoredListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetDetailsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetDetailsWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetDetailsWidget* UPetStoredSmallInventory_C::GetDetailsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetDetailsWidget");

	UPetStoredSmallInventory_C_GetDetailsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetSwitcher
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLWidgetSwitcher*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLWidgetSwitcher* UPetStoredSmallInventory_C::GetSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetSwitcher");

	UPetStoredSmallInventory_C_GetSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetPetStoredListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetStoredListWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetStoredListWidget* UPetStoredSmallInventory_C::GetPetStoredListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.GetPetStoredListWidget");

	UPetStoredSmallInventory_C_GetPetStoredListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.BlueprintSetIsFull
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsFull                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPetStoredSmallInventory_C::BlueprintSetIsFull(bool bIsFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.BlueprintSetIsFull");

	UPetStoredSmallInventory_C_BlueprintSetIsFull_Params params;
	params.bIsFull = bIsFull;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.UpdateSectionVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bHasActivePets                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bHasInactivePets               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPetStoredSmallInventory_C::UpdateSectionVisibility(bool bHasActivePets, bool bHasInactivePets)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.UpdateSectionVisibility");

	UPetStoredSmallInventory_C_UpdateSectionVisibility_Params params;
	params.bHasActivePets = bHasActivePets;
	params.bHasInactivePets = bHasInactivePets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UPetStoredSmallInventory_C::BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UPetStoredSmallInventory_C_BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetStoredSmallInventory.PetStoredSmallInventory_C.ExecuteUbergraph_PetStoredSmallInventory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPetStoredSmallInventory_C::ExecuteUbergraph_PetStoredSmallInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredSmallInventory.PetStoredSmallInventory_C.ExecuteUbergraph_PetStoredSmallInventory");

	UPetStoredSmallInventory_C_ExecuteUbergraph_PetStoredSmallInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
