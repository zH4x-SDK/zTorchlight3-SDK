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

// Function QuestLog.QuestLog_C.GetAdventureQuestsWrapper
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UQuestLog_C::GetAdventureQuestsWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestLog.QuestLog_C.GetAdventureQuestsWrapper");

	UQuestLog_C_GetAdventureQuestsWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestLog.QuestLog_C.GetStoryQuestsWrapper
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UQuestLog_C::GetStoryQuestsWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestLog.QuestLog_C.GetStoryQuestsWrapper");

	UQuestLog_C_GetStoryQuestsWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestLog.QuestLog_C.GetTutorialQuestsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQuestListWidget*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UQuestListWidget* UQuestLog_C::GetTutorialQuestsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestLog.QuestLog_C.GetTutorialQuestsWidget");

	UQuestLog_C_GetTutorialQuestsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestLog.QuestLog_C.GetTutorialQuestsWrapper
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UQuestLog_C::GetTutorialQuestsWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestLog.QuestLog_C.GetTutorialQuestsWrapper");

	UQuestLog_C_GetTutorialQuestsWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestLog.QuestLog_C.GetNextListBinding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UQuestLog_C::GetNextListBinding(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestLog.QuestLog_C.GetNextListBinding");

	UQuestLog_C_GetNextListBinding_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestLog.QuestLog_C.GetQuestScrollBox
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UScrollBox*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UScrollBox* UQuestLog_C::GetQuestScrollBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestLog.QuestLog_C.GetQuestScrollBox");

	UQuestLog_C_GetQuestScrollBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestLog.QuestLog_C.GetAdventureQuestsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQuestListWidget*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UQuestListWidget* UQuestLog_C::GetAdventureQuestsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestLog.QuestLog_C.GetAdventureQuestsWidget");

	UQuestLog_C_GetAdventureQuestsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestLog.QuestLog_C.GetStoryQuestsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQuestListWidget*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UQuestListWidget* UQuestLog_C::GetStoryQuestsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestLog.QuestLog_C.GetStoryQuestsWidget");

	UQuestLog_C_GetStoryQuestsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
