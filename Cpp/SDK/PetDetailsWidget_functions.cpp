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

// Function PetDetailsWidget.PetDetailsWidget_C.GetPetSkillSimpleList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillDisplayListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillDisplayListWidget* UPetDetailsWidget_C::GetPetSkillSimpleList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDetailsWidget.PetDetailsWidget_C.GetPetSkillSimpleList");

	UPetDetailsWidget_C_GetPetSkillSimpleList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDetailsWidget.PetDetailsWidget_C.GetSkillDetailsSwitcher
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLWidgetSwitcher*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLWidgetSwitcher* UPetDetailsWidget_C::GetSkillDetailsSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDetailsWidget.PetDetailsWidget_C.GetSkillDetailsSwitcher");

	UPetDetailsWidget_C_GetSkillDetailsSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDetailsWidget.PetDetailsWidget_C.GetPetSkillDescriptionList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillDescriptionListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillDescriptionListWidget* UPetDetailsWidget_C::GetPetSkillDescriptionList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDetailsWidget.PetDetailsWidget_C.GetPetSkillDescriptionList");

	UPetDetailsWidget_C_GetPetSkillDescriptionList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDetailsWidget.PetDetailsWidget_C.CommitNameChange
// (Public, BlueprintCallable, BlueprintEvent)
void UPetDetailsWidget_C::CommitNameChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDetailsWidget.PetDetailsWidget_C.CommitNameChange");

	UPetDetailsWidget_C_CommitNameChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetDetailsWidget.PetDetailsWidget_C.GetPetIconWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetIconWidget*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetIconWidget* UPetDetailsWidget_C::GetPetIconWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDetailsWidget.PetDetailsWidget_C.GetPetIconWidget");

	UPetDetailsWidget_C_GetPetIconWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDetailsWidget.PetDetailsWidget_C.GetPetNameField
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLEditableTextBox*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLEditableTextBox* UPetDetailsWidget_C::GetPetNameField()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDetailsWidget.PetDetailsWidget_C.GetPetNameField");

	UPetDetailsWidget_C_GetPetNameField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDetailsWidget.PetDetailsWidget_C.BndEvt__NameField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UPetDetailsWidget_C::BndEvt__NameField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDetailsWidget.PetDetailsWidget_C.BndEvt__NameField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	UPetDetailsWidget_C_BndEvt__NameField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetDetailsWidget.PetDetailsWidget_C.BndEvt__Swap_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UPetDetailsWidget_C::BndEvt__Swap_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDetailsWidget.PetDetailsWidget_C.BndEvt__Swap_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UPetDetailsWidget_C_BndEvt__Swap_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetDetailsWidget.PetDetailsWidget_C.BndEvt__Release_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UPetDetailsWidget_C::BndEvt__Release_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDetailsWidget.PetDetailsWidget_C.BndEvt__Release_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UPetDetailsWidget_C_BndEvt__Release_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetDetailsWidget.PetDetailsWidget_C.BndEvt__RandomButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UPetDetailsWidget_C::BndEvt__RandomButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDetailsWidget.PetDetailsWidget_C.BndEvt__RandomButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UPetDetailsWidget_C_BndEvt__RandomButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetDetailsWidget.PetDetailsWidget_C.ExecuteUbergraph_PetDetailsWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPetDetailsWidget_C::ExecuteUbergraph_PetDetailsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDetailsWidget.PetDetailsWidget_C.ExecuteUbergraph_PetDetailsWidget");

	UPetDetailsWidget_C_ExecuteUbergraph_PetDetailsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
