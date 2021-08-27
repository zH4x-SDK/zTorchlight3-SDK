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

// Function PetDisplayInventory.PetDisplayInventory_C.GetSortedAnimation
struct UPetDisplayInventory_C_GetSortedAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetDisplayInventory.PetDisplayInventory_C.GetSortText
struct UPetDisplayInventory_C_GetSortText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetDisplayInventory.PetDisplayInventory_C.GetShowAnimation
struct UPetDisplayInventory_C_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetDisplayInventory.PetDisplayInventory_C.GetActivePetScrollBox
struct UPetDisplayInventory_C_GetActivePetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetDisplayInventory.PetDisplayInventory_C.GetStoredPetScrollBox
struct UPetDisplayInventory_C_GetStoredPetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetDisplayInventory.PetDisplayInventory_C.On_StoredPets_GetNextListBinding_1
struct UPetDisplayInventory_C_On_StoredPets_GetNextListBinding_1_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetDisplayInventory.PetDisplayInventory_C.On_ActivePetList_GetNextListBinding_1
struct UPetDisplayInventory_C_On_ActivePetList_GetNextListBinding_1_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetDisplayInventory.PetDisplayInventory_C.GetListedPets
struct UPetDisplayInventory_C_GetListedPets_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetDisplayInventory.PetDisplayInventory_C.GetActivePetStoredListWidget
struct UPetDisplayInventory_C_GetActivePetStoredListWidget_Params
{
	class UPetStoredListWidget*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetDisplayInventory.PetDisplayInventory_C.GetDetailsWidget
struct UPetDisplayInventory_C_GetDetailsWidget_Params
{
	class UPetDetailsWidget*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetDisplayInventory.PetDisplayInventory_C.GetSwitcher
struct UPetDisplayInventory_C_GetSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetDisplayInventory.PetDisplayInventory_C.GetPetStoredListWidget
struct UPetDisplayInventory_C_GetPetStoredListWidget_Params
{
	class UPetStoredListWidget*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetDisplayInventory.PetDisplayInventory_C.UpdateSectionVisibility
struct UPetDisplayInventory_C_UpdateSectionVisibility_Params
{
	bool                                               bHasActivePets;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bHasInactivePets;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PetDisplayInventory.PetDisplayInventory_C.BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UPetDisplayInventory_C_BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PetDisplayInventory.PetDisplayInventory_C.ExecuteUbergraph_PetDisplayInventory
struct UPetDisplayInventory_C_ExecuteUbergraph_PetDisplayInventory_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
