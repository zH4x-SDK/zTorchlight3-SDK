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

// Function PoliciesWidget.PoliciesWidget_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UPoliciesWidget_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliciesWidget.PoliciesWidget_C.GetShowAnimation");

	UPoliciesWidget_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PoliciesWidget.PoliciesWidget_C.SetBodyText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UPoliciesWidget_C::SetBodyText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliciesWidget.PoliciesWidget_C.SetBodyText");

	UPoliciesWidget_C_SetBodyText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoliciesWidget.PoliciesWidget_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UPoliciesWidget_C::SetTitleText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliciesWidget.PoliciesWidget_C.SetTitleText");

	UPoliciesWidget_C_SetTitleText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoliciesWidget.PoliciesWidget_C.GetContentPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* UPoliciesWidget_C::GetContentPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliciesWidget.PoliciesWidget_C.GetContentPanel");

	UPoliciesWidget_C_GetContentPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PoliciesWidget.PoliciesWidget_C.GetBodyTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextLayoutWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextLayoutWidget* UPoliciesWidget_C::GetBodyTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliciesWidget.PoliciesWidget_C.GetBodyTextBlock");

	UPoliciesWidget_C_GetBodyTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PoliciesWidget.PoliciesWidget_C.GetTitleTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextLayoutWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextLayoutWidget* UPoliciesWidget_C::GetTitleTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliciesWidget.PoliciesWidget_C.GetTitleTextBlock");

	UPoliciesWidget_C_GetTitleTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PoliciesWidget.PoliciesWidget_C.BndEvt__BaseModalWidget_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature
// (BlueprintEvent)
void UPoliciesWidget_C::BndEvt__BaseModalWidget_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliciesWidget.PoliciesWidget_C.BndEvt__BaseModalWidget_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature");

	UPoliciesWidget_C_BndEvt__BaseModalWidget_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoliciesWidget.PoliciesWidget_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UPoliciesWidget_C::BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliciesWidget.PoliciesWidget_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature");

	UPoliciesWidget_C_BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoliciesWidget.PoliciesWidget_C.ExecuteUbergraph_PoliciesWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPoliciesWidget_C::ExecuteUbergraph_PoliciesWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliciesWidget.PoliciesWidget_C.ExecuteUbergraph_PoliciesWidget");

	UPoliciesWidget_C_ExecuteUbergraph_PoliciesWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
