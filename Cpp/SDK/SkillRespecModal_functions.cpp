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

// Function SkillRespecModal.SkillRespecModal_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* USkillRespecModal_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.GetShowAnimation");

	USkillRespecModal_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillRespecModal.SkillRespecModal_C.SetBodyText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void USkillRespecModal_C::SetBodyText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.SetBodyText");

	USkillRespecModal_C_SetBodyText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillRespecModal.SkillRespecModal_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void USkillRespecModal_C::SetTitleText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.SetTitleText");

	USkillRespecModal_C_SetTitleText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillRespecModal.SkillRespecModal_C.GetContentPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* USkillRespecModal_C::GetContentPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.GetContentPanel");

	USkillRespecModal_C_GetContentPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillRespecModal.SkillRespecModal_C.GetAcceptButtonTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* USkillRespecModal_C::GetAcceptButtonTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.GetAcceptButtonTextBlock");

	USkillRespecModal_C_GetAcceptButtonTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillRespecModal.SkillRespecModal_C.GetRejectButtonTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* USkillRespecModal_C::GetRejectButtonTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.GetRejectButtonTextBlock");

	USkillRespecModal_C_GetRejectButtonTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillRespecModal.SkillRespecModal_C.GetBodyTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextLayoutWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextLayoutWidget* USkillRespecModal_C::GetBodyTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.GetBodyTextBlock");

	USkillRespecModal_C_GetBodyTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillRespecModal.SkillRespecModal_C.GetTitleTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextLayoutWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextLayoutWidget* USkillRespecModal_C::GetTitleTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.GetTitleTextBlock");

	USkillRespecModal_C_GetTitleTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillRespecModal.SkillRespecModal_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void USkillRespecModal_C::BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature");

	USkillRespecModal_C_BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillRespecModal.SkillRespecModal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USkillRespecModal_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.PreConstruct");

	USkillRespecModal_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillRespecModal.SkillRespecModal_C.SetCloseButtonVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillRespecModal_C::SetCloseButtonVisibility(UMG_ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.SetCloseButtonVisibility");

	USkillRespecModal_C_SetCloseButtonVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillRespecModal.SkillRespecModal_C.BndEvt__WaitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void USkillRespecModal_C::BndEvt__WaitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.BndEvt__WaitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	USkillRespecModal_C_BndEvt__WaitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillRespecModal.SkillRespecModal_C.BndEvt__RejectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void USkillRespecModal_C::BndEvt__RejectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.BndEvt__RejectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	USkillRespecModal_C_BndEvt__RejectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillRespecModal.SkillRespecModal_C.ExecuteUbergraph_SkillRespecModal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillRespecModal_C::ExecuteUbergraph_SkillRespecModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillRespecModal.SkillRespecModal_C.ExecuteUbergraph_SkillRespecModal");

	USkillRespecModal_C_ExecuteUbergraph_SkillRespecModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
