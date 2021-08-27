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

// Function LogQuestWidget.LogQuestWidget_C.GetSpokeIcon
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* ULogQuestWidget_C::GetSpokeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function LogQuestWidget.LogQuestWidget_C.GetSpokeIcon");

	ULogQuestWidget_C_GetSpokeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LogQuestWidget.LogQuestWidget_C.GetFocusAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* ULogQuestWidget_C::GetFocusAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LogQuestWidget.LogQuestWidget_C.GetFocusAnimation");

	ULogQuestWidget_C_GetFocusAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LogQuestWidget.LogQuestWidget_C.GetTooltipAnchor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* ULogQuestWidget_C::GetTooltipAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function LogQuestWidget.LogQuestWidget_C.GetTooltipAnchor");

	ULogQuestWidget_C_GetTooltipAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LogQuestWidget.LogQuestWidget_C.GetQuestTitleBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* ULogQuestWidget_C::GetQuestTitleBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function LogQuestWidget.LogQuestWidget_C.GetQuestTitleBlock");

	ULogQuestWidget_C_GetQuestTitleBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LogQuestWidget.LogQuestWidget_C.Get_QuestName_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor ULogQuestWidget_C::Get_QuestName_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LogQuestWidget.LogQuestWidget_C.Get_QuestName_ColorAndOpacity_1");

	ULogQuestWidget_C_Get_QuestName_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LogQuestWidget.LogQuestWidget_C.GetQuestTaskList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQuestTaskListWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UQuestTaskListWidget* ULogQuestWidget_C::GetQuestTaskList()
{
	static auto fn = UObject::FindObject<UFunction>("Function LogQuestWidget.LogQuestWidget_C.GetQuestTaskList");

	ULogQuestWidget_C_GetQuestTaskList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LogQuestWidget.LogQuestWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ULogQuestWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LogQuestWidget.LogQuestWidget_C.Construct");

	ULogQuestWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogQuestWidget.LogQuestWidget_C.BndEvt__togglePin_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void ULogQuestWidget_C::BndEvt__togglePin_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LogQuestWidget.LogQuestWidget_C.BndEvt__togglePin_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	ULogQuestWidget_C_BndEvt__togglePin_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogQuestWidget.LogQuestWidget_C.SetPinnedTint
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsPinned                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULogQuestWidget_C::SetPinnedTint(bool bIsPinned)
{
	static auto fn = UObject::FindObject<UFunction>("Function LogQuestWidget.LogQuestWidget_C.SetPinnedTint");

	ULogQuestWidget_C_SetPinnedTint_Params params;
	params.bIsPinned = bIsPinned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogQuestWidget.LogQuestWidget_C.PlayPinnedAnimation
// (Event, Protected, BlueprintEvent)
void ULogQuestWidget_C::PlayPinnedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LogQuestWidget.LogQuestWidget_C.PlayPinnedAnimation");

	ULogQuestWidget_C_PlayPinnedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogQuestWidget.LogQuestWidget_C.BndEvt__FlagButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void ULogQuestWidget_C::BndEvt__FlagButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LogQuestWidget.LogQuestWidget_C.BndEvt__FlagButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	ULogQuestWidget_C_BndEvt__FlagButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogQuestWidget.LogQuestWidget_C.ExecuteUbergraph_LogQuestWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULogQuestWidget_C::ExecuteUbergraph_LogQuestWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LogQuestWidget.LogQuestWidget_C.ExecuteUbergraph_LogQuestWidget");

	ULogQuestWidget_C_ExecuteUbergraph_LogQuestWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
