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

// Function FeedbackDialogBox.FeedbackDialogBox_C.GetListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UFeedbackDialogBox_C::GetListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.GetListWidget");

	UFeedbackDialogBox_C_GetListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FeedbackDialogBox.FeedbackDialogBox_C.GetScreenshotImage
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UFeedbackDialogBox_C::GetScreenshotImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.GetScreenshotImage");

	UFeedbackDialogBox_C_GetScreenshotImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FeedbackDialogBox.FeedbackDialogBox_C.GetFeedbackBox
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMultiLineEditableText*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMultiLineEditableText* UFeedbackDialogBox_C::GetFeedbackBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.GetFeedbackBox");

	UFeedbackDialogBox_C_GetFeedbackBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FeedbackDialogBox.FeedbackDialogBox_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UFeedbackDialogBox_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.GetShowAnimation");

	UFeedbackDialogBox_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FeedbackDialogBox.FeedbackDialogBox_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UFeedbackDialogBox_C::SetTitleText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.SetTitleText");

	UFeedbackDialogBox_C_SetTitleText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FeedbackDialogBox.FeedbackDialogBox_C.GetBodyTextBlock
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextLayoutWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextLayoutWidget* UFeedbackDialogBox_C::GetBodyTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.GetBodyTextBlock");

	UFeedbackDialogBox_C_GetBodyTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FeedbackDialogBox.FeedbackDialogBox_C.GetTitleTextBlock
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextLayoutWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextLayoutWidget* UFeedbackDialogBox_C::GetTitleTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.GetTitleTextBlock");

	UFeedbackDialogBox_C_GetTitleTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FeedbackDialogBox.FeedbackDialogBox_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UFeedbackDialogBox_C::BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature");

	UFeedbackDialogBox_C_BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FeedbackDialogBox.FeedbackDialogBox_C.BndEvt__RejectButton2_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UFeedbackDialogBox_C::BndEvt__RejectButton2_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.BndEvt__RejectButton2_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature");

	UFeedbackDialogBox_C_BndEvt__RejectButton2_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FeedbackDialogBox.FeedbackDialogBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UFeedbackDialogBox_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.PreConstruct");

	UFeedbackDialogBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FeedbackDialogBox.FeedbackDialogBox_C.BlueprintOnHidden
// (Event, Protected, BlueprintEvent)
void UFeedbackDialogBox_C::BlueprintOnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.BlueprintOnHidden");

	UFeedbackDialogBox_C_BlueprintOnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FeedbackDialogBox.FeedbackDialogBox_C.BlueprintUpdateScreenshot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bShouldSendScreenshot          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UFeedbackDialogBox_C::BlueprintUpdateScreenshot(bool bShouldSendScreenshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.BlueprintUpdateScreenshot");

	UFeedbackDialogBox_C_BlueprintUpdateScreenshot_Params params;
	params.bShouldSendScreenshot = bShouldSendScreenshot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FeedbackDialogBox.FeedbackDialogBox_C.BlueprintUpdateCharCount
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bOverCharCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UFeedbackDialogBox_C::BlueprintUpdateCharCount(bool bOverCharCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.BlueprintUpdateCharCount");

	UFeedbackDialogBox_C_BlueprintUpdateCharCount_Params params;
	params.bOverCharCount = bOverCharCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FeedbackDialogBox.FeedbackDialogBox_C.ExecuteUbergraph_FeedbackDialogBox
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFeedbackDialogBox_C::ExecuteUbergraph_FeedbackDialogBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackDialogBox.FeedbackDialogBox_C.ExecuteUbergraph_FeedbackDialogBox");

	UFeedbackDialogBox_C_ExecuteUbergraph_FeedbackDialogBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
