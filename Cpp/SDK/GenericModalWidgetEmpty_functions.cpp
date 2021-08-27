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

// Function GenericModalWidgetEmpty.GenericModalWidgetEmpty_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UGenericModalWidgetEmpty_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericModalWidgetEmpty.GenericModalWidgetEmpty_C.GetShowAnimation");

	UGenericModalWidgetEmpty_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GenericModalWidgetEmpty.GenericModalWidgetEmpty_C.GetContentPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* UGenericModalWidgetEmpty_C::GetContentPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericModalWidgetEmpty.GenericModalWidgetEmpty_C.GetContentPanel");

	UGenericModalWidgetEmpty_C_GetContentPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GenericModalWidgetEmpty.GenericModalWidgetEmpty_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGenericModalWidgetEmpty_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericModalWidgetEmpty.GenericModalWidgetEmpty_C.PreConstruct");

	UGenericModalWidgetEmpty_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GenericModalWidgetEmpty.GenericModalWidgetEmpty_C.SetCloseButtonVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGenericModalWidgetEmpty_C::SetCloseButtonVisibility(UMG_ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericModalWidgetEmpty.GenericModalWidgetEmpty_C.SetCloseButtonVisibility");

	UGenericModalWidgetEmpty_C_SetCloseButtonVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GenericModalWidgetEmpty.GenericModalWidgetEmpty_C.BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)
void UGenericModalWidgetEmpty_C::BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericModalWidgetEmpty.GenericModalWidgetEmpty_C.BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UGenericModalWidgetEmpty_C_BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GenericModalWidgetEmpty.GenericModalWidgetEmpty_C.ExecuteUbergraph_GenericModalWidgetEmpty
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGenericModalWidgetEmpty_C::ExecuteUbergraph_GenericModalWidgetEmpty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericModalWidgetEmpty.GenericModalWidgetEmpty_C.ExecuteUbergraph_GenericModalWidgetEmpty");

	UGenericModalWidgetEmpty_C_ExecuteUbergraph_GenericModalWidgetEmpty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
