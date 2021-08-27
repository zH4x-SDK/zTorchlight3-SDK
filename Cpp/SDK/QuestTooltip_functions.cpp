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

// Function QuestTooltip.QuestTooltip_C.GetQuestTitleBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* UQuestTooltip_C::GetQuestTitleBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTooltip.QuestTooltip_C.GetQuestTitleBlock");

	UQuestTooltip_C_GetQuestTitleBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestTooltip.QuestTooltip_C.GetQuestTaskList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQuestTaskListWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UQuestTaskListWidget* UQuestTooltip_C::GetQuestTaskList()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTooltip.QuestTooltip_C.GetQuestTaskList");

	UQuestTooltip_C_GetQuestTaskList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestTooltip.QuestTooltip_C.GetRewardListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQuestRewardListWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UQuestRewardListWidget* UQuestTooltip_C::GetRewardListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTooltip.QuestTooltip_C.GetRewardListWidget");

	UQuestTooltip_C_GetRewardListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestTooltip.QuestTooltip_C.GetRewardPrefixWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UQuestTooltip_C::GetRewardPrefixWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTooltip.QuestTooltip_C.GetRewardPrefixWidget");

	UQuestTooltip_C_GetRewardPrefixWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestTooltip.QuestTooltip_C.GetSpokeIcon
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UQuestTooltip_C::GetSpokeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTooltip.QuestTooltip_C.GetSpokeIcon");

	UQuestTooltip_C_GetSpokeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
