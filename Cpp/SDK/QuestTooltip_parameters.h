#pragma once

// Name: Torchlight3, Version: 1.0.0


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

// Function QuestTooltip.QuestTooltip_C.GetQuestTitleBlock
struct UQuestTooltip_C_GetQuestTitleBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestTooltip.QuestTooltip_C.GetQuestTaskList
struct UQuestTooltip_C_GetQuestTaskList_Params
{
	class UQuestTaskListWidget*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestTooltip.QuestTooltip_C.GetRewardListWidget
struct UQuestTooltip_C_GetRewardListWidget_Params
{
	class UQuestRewardListWidget*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestTooltip.QuestTooltip_C.GetRewardPrefixWidget
struct UQuestTooltip_C_GetRewardPrefixWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestTooltip.QuestTooltip_C.GetSpokeIcon
struct UQuestTooltip_C_GetSpokeIcon_Params
{
	class UTLImage*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
