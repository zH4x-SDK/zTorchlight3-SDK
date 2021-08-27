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

// Function CraftingConfirmationWidget.CraftingConfirmationWidget_C.GetCurrencyCostWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGenericResourceWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGenericResourceWidget* UCraftingConfirmationWidget_C::GetCurrencyCostWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingConfirmationWidget.CraftingConfirmationWidget_C.GetCurrencyCostWidget");

	UCraftingConfirmationWidget_C_GetCurrencyCostWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingConfirmationWidget.CraftingConfirmationWidget_C.GetCostListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCraftingCostListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCraftingCostListWidget* UCraftingConfirmationWidget_C::GetCostListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingConfirmationWidget.CraftingConfirmationWidget_C.GetCostListWidget");

	UCraftingConfirmationWidget_C_GetCostListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingConfirmationWidget.CraftingConfirmationWidget_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UCraftingConfirmationWidget_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingConfirmationWidget.CraftingConfirmationWidget_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UCraftingConfirmationWidget_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraftingConfirmationWidget.CraftingConfirmationWidget_C.BndEvt__RejectButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UCraftingConfirmationWidget_C::BndEvt__RejectButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingConfirmationWidget.CraftingConfirmationWidget_C.BndEvt__RejectButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UCraftingConfirmationWidget_C_BndEvt__RejectButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraftingConfirmationWidget.CraftingConfirmationWidget_C.BlueprintCustomizeText
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   Body                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UCraftingConfirmationWidget_C::BlueprintCustomizeText(const struct FText& Header, const struct FText& Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingConfirmationWidget.CraftingConfirmationWidget_C.BlueprintCustomizeText");

	UCraftingConfirmationWidget_C_BlueprintCustomizeText_Params params;
	params.Header = Header;
	params.Body = Body;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraftingConfirmationWidget.CraftingConfirmationWidget_C.ExecuteUbergraph_CraftingConfirmationWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCraftingConfirmationWidget_C::ExecuteUbergraph_CraftingConfirmationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingConfirmationWidget.CraftingConfirmationWidget_C.ExecuteUbergraph_CraftingConfirmationWidget");

	UCraftingConfirmationWidget_C_ExecuteUbergraph_CraftingConfirmationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
