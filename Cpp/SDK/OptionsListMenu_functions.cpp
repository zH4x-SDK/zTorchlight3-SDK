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

// Function OptionsListMenu.OptionsListMenu_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UOptionsListMenu_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsListMenu.OptionsListMenu_C.GetShowAnimation");

	UOptionsListMenu_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OptionsListMenu.OptionsListMenu_C.GetOptionListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UOptionListWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UOptionListWidget* UOptionsListMenu_C::GetOptionListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsListMenu.OptionsListMenu_C.GetOptionListWidget");

	UOptionsListMenu_C_GetOptionListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OptionsListMenu.OptionsListMenu_C.BndEvt__KeybindingsButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UOptionsListMenu_C::BndEvt__KeybindingsButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsListMenu.OptionsListMenu_C.BndEvt__KeybindingsButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature");

	UOptionsListMenu_C_BndEvt__KeybindingsButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionsListMenu.OptionsListMenu_C.BndEvt__VideoSettingsButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UOptionsListMenu_C::BndEvt__VideoSettingsButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsListMenu.OptionsListMenu_C.BndEvt__VideoSettingsButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UOptionsListMenu_C_BndEvt__VideoSettingsButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionsListMenu.OptionsListMenu_C.BndEvt__Style_CloseButtonSmall_C_0_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)
void UOptionsListMenu_C::BndEvt__Style_CloseButtonSmall_C_0_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsListMenu.OptionsListMenu_C.BndEvt__Style_CloseButtonSmall_C_0_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UOptionsListMenu_C_BndEvt__Style_CloseButtonSmall_C_0_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionsListMenu.OptionsListMenu_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UOptionsListMenu_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsListMenu.OptionsListMenu_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UOptionsListMenu_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionsListMenu.OptionsListMenu_C.BndEvt__OptionListWidget_1_K2Node_ComponentBoundEvent_2_WidgetFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bHasFocus                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionsListMenu_C::BndEvt__OptionListWidget_1_K2Node_ComponentBoundEvent_2_WidgetFocusEvent__DelegateSignature(class UWidget* Widget, bool bHasFocus, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsListMenu.OptionsListMenu_C.BndEvt__OptionListWidget_1_K2Node_ComponentBoundEvent_2_WidgetFocusEvent__DelegateSignature");

	UOptionsListMenu_C_BndEvt__OptionListWidget_1_K2Node_ComponentBoundEvent_2_WidgetFocusEvent__DelegateSignature_Params params;
	params.Widget = Widget;
	params.bHasFocus = bHasFocus;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionsListMenu.OptionsListMenu_C.ExecuteUbergraph_OptionsListMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionsListMenu_C::ExecuteUbergraph_OptionsListMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsListMenu.OptionsListMenu_C.ExecuteUbergraph_OptionsListMenu");

	UOptionsListMenu_C_ExecuteUbergraph_OptionsListMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
