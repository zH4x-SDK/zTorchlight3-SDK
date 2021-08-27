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

// Function QuestRewardChoice.QuestRewardChoice_C.GetGenericResourceWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGenericResourceWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGenericResourceWidget* UQuestRewardChoice_C::GetGenericResourceWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.GetGenericResourceWidget");

	UQuestRewardChoice_C_GetGenericResourceWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestRewardChoice.QuestRewardChoice_C.UnfocusedCheckbox
// (Public, BlueprintCallable, BlueprintEvent)
void UQuestRewardChoice_C::UnfocusedCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.UnfocusedCheckbox");

	UQuestRewardChoice_C_UnfocusedCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardChoice.QuestRewardChoice_C.FocusedCheckbox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UQuestRewardChoice_C::FocusedCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.FocusedCheckbox");

	UQuestRewardChoice_C_FocusedCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardChoice.QuestRewardChoice_C.Unfocused
// (Public, BlueprintCallable, BlueprintEvent)
void UQuestRewardChoice_C::Unfocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.Unfocused");

	UQuestRewardChoice_C_Unfocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardChoice.QuestRewardChoice_C.Focused
// (Public, BlueprintCallable, BlueprintEvent)
void UQuestRewardChoice_C::Focused()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.Focused");

	UQuestRewardChoice_C_Focused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardChoice.QuestRewardChoice_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UQuestRewardChoice_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.OnFocusReceived");

	UQuestRewardChoice_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestRewardChoice.QuestRewardChoice_C.UpdateSelectedUI
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bCanSelect                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UQuestRewardChoice_C::UpdateSelectedUI(bool bCanSelect, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.UpdateSelectedUI");

	UQuestRewardChoice_C_UpdateSelectedUI_Params params;
	params.bCanSelect = bCanSelect;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardChoice.QuestRewardChoice_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UQuestRewardChoice_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.Construct");

	UQuestRewardChoice_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardChoice.QuestRewardChoice_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UQuestRewardChoice_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UQuestRewardChoice_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardChoice.QuestRewardChoice_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UQuestRewardChoice_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.OnFocusLost");

	UQuestRewardChoice_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardChoice.QuestRewardChoice_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UQuestRewardChoice_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UQuestRewardChoice_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardChoice.QuestRewardChoice_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UQuestRewardChoice_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UQuestRewardChoice_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardChoice.QuestRewardChoice_C.BndEvt__TLCheckBox_484_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UQuestRewardChoice_C::BndEvt__TLCheckBox_484_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.BndEvt__TLCheckBox_484_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	UQuestRewardChoice_C_BndEvt__TLCheckBox_484_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardChoice.QuestRewardChoice_C.ExecuteUbergraph_QuestRewardChoice
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestRewardChoice_C::ExecuteUbergraph_QuestRewardChoice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardChoice.QuestRewardChoice_C.ExecuteUbergraph_QuestRewardChoice");

	UQuestRewardChoice_C_ExecuteUbergraph_QuestRewardChoice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
