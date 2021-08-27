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

// Function QuestWidget.QuestWidget_C.GetSpokeIcon
struct UQuestWidget_C_GetSpokeIcon_Params
{
	class UTLImage*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestWidget.QuestWidget_C.GetTooltipAnchor
struct UQuestWidget_C_GetTooltipAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestWidget.QuestWidget_C.GetQuestTitleBlock
struct UQuestWidget_C_GetQuestTitleBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestWidget.QuestWidget_C.GetFailedAnimation
struct UQuestWidget_C_GetFailedAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestWidget.QuestWidget_C.GetCompletionAnimation
struct UQuestWidget_C_GetCompletionAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestWidget.QuestWidget_C.GetQuestTaskList
struct UQuestWidget_C_GetQuestTaskList_Params
{
	class UQuestTaskListWidget*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
