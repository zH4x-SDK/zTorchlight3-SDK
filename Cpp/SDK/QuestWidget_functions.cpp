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

// Function QuestWidget.QuestWidget_C.GetSpokeIcon
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UQuestWidget_C::GetSpokeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestWidget.QuestWidget_C.GetSpokeIcon");

	UQuestWidget_C_GetSpokeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestWidget.QuestWidget_C.GetTooltipAnchor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UQuestWidget_C::GetTooltipAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestWidget.QuestWidget_C.GetTooltipAnchor");

	UQuestWidget_C_GetTooltipAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestWidget.QuestWidget_C.GetQuestTitleBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* UQuestWidget_C::GetQuestTitleBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestWidget.QuestWidget_C.GetQuestTitleBlock");

	UQuestWidget_C_GetQuestTitleBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestWidget.QuestWidget_C.GetFailedAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UQuestWidget_C::GetFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestWidget.QuestWidget_C.GetFailedAnimation");

	UQuestWidget_C_GetFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestWidget.QuestWidget_C.GetCompletionAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UQuestWidget_C::GetCompletionAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestWidget.QuestWidget_C.GetCompletionAnimation");

	UQuestWidget_C_GetCompletionAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestWidget.QuestWidget_C.GetQuestTaskList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQuestTaskListWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UQuestTaskListWidget* UQuestWidget_C::GetQuestTaskList()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestWidget.QuestWidget_C.GetQuestTaskList");

	UQuestWidget_C_GetQuestTaskList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
