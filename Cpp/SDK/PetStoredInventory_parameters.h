#pragma once

// Name: Torchlight3, Version: 1.0.0


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

// Function PetStoredInventory.PetStoredInventory_C.GetSortedAnimation
struct UPetStoredInventory_C_GetSortedAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetStoredInventory.PetStoredInventory_C.GetSortText
struct UPetStoredInventory_C_GetSortText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetStoredInventory.PetStoredInventory_C.GetShowAnimation
struct UPetStoredInventory_C_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetStoredInventory.PetStoredInventory_C.GetActivePetScrollBox
struct UPetStoredInventory_C_GetActivePetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetStoredInventory.PetStoredInventory_C.GetStoredPetScrollBox
struct UPetStoredInventory_C_GetStoredPetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetStoredInventory.PetStoredInventory_C.On_StoredPets_GetNextListBinding_1
struct UPetStoredInventory_C_On_StoredPets_GetNextListBinding_1_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetStoredInventory.PetStoredInventory_C.On_ActivePetList_GetNextListBinding_1
struct UPetStoredInventory_C_On_ActivePetList_GetNextListBinding_1_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetStoredInventory.PetStoredInventory_C.GetListedPets
struct UPetStoredInventory_C_GetListedPets_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetStoredInventory.PetStoredInventory_C.GetActivePetStoredListWidget
struct UPetStoredInventory_C_GetActivePetStoredListWidget_Params
{
	class UPetStoredListWidget*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetStoredInventory.PetStoredInventory_C.GetDetailsWidget
struct UPetStoredInventory_C_GetDetailsWidget_Params
{
	class UPetDetailsWidget*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetStoredInventory.PetStoredInventory_C.GetSwitcher
struct UPetStoredInventory_C_GetSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetStoredInventory.PetStoredInventory_C.GetPetStoredListWidget
struct UPetStoredInventory_C_GetPetStoredListWidget_Params
{
	class UPetStoredListWidget*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetStoredInventory.PetStoredInventory_C.BlueprintSetIsFull
struct UPetStoredInventory_C_BlueprintSetIsFull_Params
{
	bool                                               bIsFull;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PetStoredInventory.PetStoredInventory_C.UpdateSectionVisibility
struct UPetStoredInventory_C_UpdateSectionVisibility_Params
{
	bool                                               bHasActivePets;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bHasInactivePets;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PetStoredInventory.PetStoredInventory_C.BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UPetStoredInventory_C_BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PetStoredInventory.PetStoredInventory_C.ExecuteUbergraph_PetStoredInventory
struct UPetStoredInventory_C_ExecuteUbergraph_PetStoredInventory_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
