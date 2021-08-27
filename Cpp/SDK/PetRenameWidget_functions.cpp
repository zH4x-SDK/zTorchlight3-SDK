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

// Function PetRenameWidget.PetRenameWidget_C.GetPetIconWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetIconWidget*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetIconWidget* UPetRenameWidget_C::GetPetIconWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetRenameWidget.PetRenameWidget_C.GetPetIconWidget");

	UPetRenameWidget_C_GetPetIconWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetRenameWidget.PetRenameWidget_C.GetPetNameField
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLEditableTextBox*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLEditableTextBox* UPetRenameWidget_C::GetPetNameField()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetRenameWidget.PetRenameWidget_C.GetPetNameField");

	UPetRenameWidget_C_GetPetNameField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetRenameWidget.PetRenameWidget_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UPetRenameWidget_C::BndEvt__TLButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetRenameWidget.PetRenameWidget_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UPetRenameWidget_C_BndEvt__TLButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetRenameWidget.PetRenameWidget_C.ExecuteUbergraph_PetRenameWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPetRenameWidget_C::ExecuteUbergraph_PetRenameWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetRenameWidget.PetRenameWidget_C.ExecuteUbergraph_PetRenameWidget");

	UPetRenameWidget_C_ExecuteUbergraph_PetRenameWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
