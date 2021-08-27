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

// Function InGameMenu.InGameMenu_C.GetDebugTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* UInGameMenu_C::GetDebugTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.GetDebugTextBlock");

	UInGameMenu_C_GetDebugTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InGameMenu.InGameMenu_C.GetFortReportButtonContainer
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UInGameMenu_C::GetFortReportButtonContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.GetFortReportButtonContainer");

	UInGameMenu_C_GetFortReportButtonContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InGameMenu.InGameMenu_C.GetHideAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UInGameMenu_C::GetHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.GetHideAnimation");

	UInGameMenu_C_GetHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InGameMenu.InGameMenu_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UInGameMenu_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.GetShowAnimation");

	UInGameMenu_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InGameMenu.InGameMenu_C.ResetMenuState
// (Public, BlueprintCallable, BlueprintEvent)
void UInGameMenu_C::ResetMenuState()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.ResetMenuState");

	UInGameMenu_C_ResetMenuState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.GetButtonList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UInGameMenu_C::GetButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.GetButtonList");

	UInGameMenu_C_GetButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InGameMenu.InGameMenu_C.GetCharacterSelectButtonEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInGameMenu_C::GetCharacterSelectButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.GetCharacterSelectButtonEnabled");

	UInGameMenu_C_GetCharacterSelectButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InGameMenu.InGameMenu_C.BndEvt__TLButton_33_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInGameMenu_C::BndEvt__TLButton_33_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.BndEvt__TLButton_33_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature");

	UInGameMenu_C_BndEvt__TLButton_33_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.BndEvt__ExitrGameButton_K2Node_ComponentBoundEvent_153_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInGameMenu_C::BndEvt__ExitrGameButton_K2Node_ComponentBoundEvent_153_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.BndEvt__ExitrGameButton_K2Node_ComponentBoundEvent_153_OnButtonClickedEvent__DelegateSignature");

	UInGameMenu_C_BndEvt__ExitrGameButton_K2Node_ComponentBoundEvent_153_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.BlueprintOnShown
// (Event, Protected, BlueprintEvent)
void UInGameMenu_C::BlueprintOnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.BlueprintOnShown");

	UInGameMenu_C_BlueprintOnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.AcceptMainMenu
// (BlueprintCallable, BlueprintEvent)
void UInGameMenu_C::AcceptMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.AcceptMainMenu");

	UInGameMenu_C_AcceptMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.BndEvt__MainMenubutton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInGameMenu_C::BndEvt__MainMenubutton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.BndEvt__MainMenubutton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature");

	UInGameMenu_C_BndEvt__MainMenubutton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.BndEvt__Help_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInGameMenu_C::BndEvt__Help_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.BndEvt__Help_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature");

	UInGameMenu_C_BndEvt__Help_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.BndEvt__MailboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInGameMenu_C::BndEvt__MailboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.BndEvt__MailboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UInGameMenu_C_BndEvt__MailboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.BndEvt__CloseMenuButton_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
// (BlueprintEvent)
void UInGameMenu_C::BndEvt__CloseMenuButton_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.BndEvt__CloseMenuButton_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");

	UInGameMenu_C_BndEvt__CloseMenuButton_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInGameMenu_C::BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UInGameMenu_C_BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.BndEvt__LegalButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInGameMenu_C::BndEvt__LegalButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.BndEvt__LegalButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UInGameMenu_C_BndEvt__LegalButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInGameMenu_C::BndEvt__TLButton_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UInGameMenu_C_BndEvt__TLButton_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.BndEvt__ReportFortButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInGameMenu_C::BndEvt__ReportFortButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.BndEvt__ReportFortButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UInGameMenu_C_BndEvt__ReportFortButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.BndEvt__FeedbackButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInGameMenu_C::BndEvt__FeedbackButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.BndEvt__FeedbackButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UInGameMenu_C_BndEvt__FeedbackButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenu.InGameMenu_C.ExecuteUbergraph_InGameMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInGameMenu_C::ExecuteUbergraph_InGameMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenu.InGameMenu_C.ExecuteUbergraph_InGameMenu");

	UInGameMenu_C_ExecuteUbergraph_InGameMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
