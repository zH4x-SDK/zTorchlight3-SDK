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

// Function HelpOnHUD.HelpOnHUD_C.GetHeaderText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* UHelpOnHUD_C::GetHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD.HelpOnHUD_C.GetHeaderText");

	UHelpOnHUD_C_GetHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HelpOnHUD.HelpOnHUD_C.SetPlatformId
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 PlatformId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UHelpOnHUD_C::SetPlatformId(const struct FString& PlatformId)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD.HelpOnHUD_C.SetPlatformId");

	UHelpOnHUD_C_SetPlatformId_Params params;
	params.PlatformId = PlatformId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HelpOnHUD.HelpOnHUD_C.GetCanvasPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCanvasPanel* UHelpOnHUD_C::GetCanvasPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD.HelpOnHUD_C.GetCanvasPanel");

	UHelpOnHUD_C_GetCanvasPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HelpOnHUD.HelpOnHUD_C.GetMenuButtonList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuButtonList*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuButtonList* UHelpOnHUD_C::GetMenuButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD.HelpOnHUD_C.GetMenuButtonList");

	UHelpOnHUD_C_GetMenuButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HelpOnHUD.HelpOnHUD_C.BndEvt__TLCheckBox_0_K2Node_ComponentBoundEvent_24_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHelpOnHUD_C::BndEvt__TLCheckBox_0_K2Node_ComponentBoundEvent_24_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD.HelpOnHUD_C.BndEvt__TLCheckBox_0_K2Node_ComponentBoundEvent_24_OnCheckBoxComponentStateChanged__DelegateSignature");

	UHelpOnHUD_C_BndEvt__TLCheckBox_0_K2Node_ComponentBoundEvent_24_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HelpOnHUD.HelpOnHUD_C.BlueprintOnOptionSelected
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTabbedMenuOption       Option                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UHelpOnHUD_C::BlueprintOnOptionSelected(const struct FTabbedMenuOption& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD.HelpOnHUD_C.BlueprintOnOptionSelected");

	UHelpOnHUD_C_BlueprintOnOptionSelected_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HelpOnHUD.HelpOnHUD_C.OnSkipHelpChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bSkipHelp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHelpOnHUD_C::OnSkipHelpChanged(bool bSkipHelp)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD.HelpOnHUD_C.OnSkipHelpChanged");

	UHelpOnHUD_C_OnSkipHelpChanged_Params params;
	params.bSkipHelp = bSkipHelp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HelpOnHUD.HelpOnHUD_C.BndEvt__Style_CloseButtonSmall_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
// (BlueprintEvent)
void UHelpOnHUD_C::BndEvt__Style_CloseButtonSmall_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD.HelpOnHUD_C.BndEvt__Style_CloseButtonSmall_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");

	UHelpOnHUD_C_BndEvt__Style_CloseButtonSmall_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HelpOnHUD.HelpOnHUD_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UHelpOnHUD_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD.HelpOnHUD_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UHelpOnHUD_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HelpOnHUD.HelpOnHUD_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UHelpOnHUD_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD.HelpOnHUD_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UHelpOnHUD_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HelpOnHUD.HelpOnHUD_C.ExecuteUbergraph_HelpOnHUD
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHelpOnHUD_C::ExecuteUbergraph_HelpOnHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD.HelpOnHUD_C.ExecuteUbergraph_HelpOnHUD");

	UHelpOnHUD_C_ExecuteUbergraph_HelpOnHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
