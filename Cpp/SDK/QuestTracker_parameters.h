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

// Function QuestTracker.QuestTracker_C.GetNothingPinnedWidget
struct UQuestTracker_C_GetNothingPinnedWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestTracker.QuestTracker_C.GetQuestCompletedAnimation
struct UQuestTracker_C_GetQuestCompletedAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestTracker.QuestTracker_C.GetQuestFailedAnimation
struct UQuestTracker_C_GetQuestFailedAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestTracker.QuestTracker_C.GetAdventureQuestsWidget
struct UQuestTracker_C_GetAdventureQuestsWidget_Params
{
	class UQuestListWidget*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestTracker.QuestTracker_C.GetHideAnimation
struct UQuestTracker_C_GetHideAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestTracker.QuestTracker_C.GetShowAnimation
struct UQuestTracker_C_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestTracker.QuestTracker_C.BlueprintSetupQuestsOverMaxLabel
struct UQuestTracker_C_BlueprintSetupQuestsOverMaxLabel_Params
{
	int                                                MaxQuests;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumOverMax;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestTracker.QuestTracker_C.ExecuteUbergraph_QuestTracker
struct UQuestTracker_C_ExecuteUbergraph_QuestTracker_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
