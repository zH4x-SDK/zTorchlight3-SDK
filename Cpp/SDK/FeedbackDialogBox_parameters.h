#pragma once

// Name: Torchlight3, Version: 4.26.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function FeedbackDialogBox.FeedbackDialogBox_C.GetListWidget
struct UFeedbackDialogBox_C_GetListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FeedbackDialogBox.FeedbackDialogBox_C.GetScreenshotImage
struct UFeedbackDialogBox_C_GetScreenshotImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FeedbackDialogBox.FeedbackDialogBox_C.GetFeedbackBox
struct UFeedbackDialogBox_C_GetFeedbackBox_Params
{
	class UMultiLineEditableText*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FeedbackDialogBox.FeedbackDialogBox_C.GetShowAnimation
struct UFeedbackDialogBox_C_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FeedbackDialogBox.FeedbackDialogBox_C.SetTitleText
struct UFeedbackDialogBox_C_SetTitleText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FeedbackDialogBox.FeedbackDialogBox_C.GetBodyTextBlock
struct UFeedbackDialogBox_C_GetBodyTextBlock_Params
{
	class UTextLayoutWidget*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FeedbackDialogBox.FeedbackDialogBox_C.GetTitleTextBlock
struct UFeedbackDialogBox_C_GetTitleTextBlock_Params
{
	class UTextLayoutWidget*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FeedbackDialogBox.FeedbackDialogBox_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature
struct UFeedbackDialogBox_C_BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FeedbackDialogBox.FeedbackDialogBox_C.BndEvt__RejectButton2_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature
struct UFeedbackDialogBox_C_BndEvt__RejectButton2_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FeedbackDialogBox.FeedbackDialogBox_C.PreConstruct
struct UFeedbackDialogBox_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FeedbackDialogBox.FeedbackDialogBox_C.BlueprintOnHidden
struct UFeedbackDialogBox_C_BlueprintOnHidden_Params
{
};

// Function FeedbackDialogBox.FeedbackDialogBox_C.BlueprintUpdateScreenshot
struct UFeedbackDialogBox_C_BlueprintUpdateScreenshot_Params
{
	bool                                               bShouldSendScreenshot;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FeedbackDialogBox.FeedbackDialogBox_C.BlueprintUpdateCharCount
struct UFeedbackDialogBox_C_BlueprintUpdateCharCount_Params
{
	bool                                               bOverCharCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FeedbackDialogBox.FeedbackDialogBox_C.ExecuteUbergraph_FeedbackDialogBox
struct UFeedbackDialogBox_C_ExecuteUbergraph_FeedbackDialogBox_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
