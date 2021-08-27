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

// Function QuestTracker.QuestTracker_C.GetNothingPinnedWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UQuestTracker_C::GetNothingPinnedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTracker.QuestTracker_C.GetNothingPinnedWidget");

	UQuestTracker_C_GetNothingPinnedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestTracker.QuestTracker_C.GetQuestCompletedAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UQuestTracker_C::GetQuestCompletedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTracker.QuestTracker_C.GetQuestCompletedAnimation");

	UQuestTracker_C_GetQuestCompletedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestTracker.QuestTracker_C.GetQuestFailedAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UQuestTracker_C::GetQuestFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTracker.QuestTracker_C.GetQuestFailedAnimation");

	UQuestTracker_C_GetQuestFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestTracker.QuestTracker_C.GetAdventureQuestsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQuestListWidget*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UQuestListWidget* UQuestTracker_C::GetAdventureQuestsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTracker.QuestTracker_C.GetAdventureQuestsWidget");

	UQuestTracker_C_GetAdventureQuestsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestTracker.QuestTracker_C.GetHideAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UQuestTracker_C::GetHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTracker.QuestTracker_C.GetHideAnimation");

	UQuestTracker_C_GetHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestTracker.QuestTracker_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UQuestTracker_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTracker.QuestTracker_C.GetShowAnimation");

	UQuestTracker_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function QuestTracker.QuestTracker_C.BlueprintSetupQuestsOverMaxLabel
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            MaxQuests                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumOverMax                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestTracker_C::BlueprintSetupQuestsOverMaxLabel(int MaxQuests, int NumOverMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTracker.QuestTracker_C.BlueprintSetupQuestsOverMaxLabel");

	UQuestTracker_C_BlueprintSetupQuestsOverMaxLabel_Params params;
	params.MaxQuests = MaxQuests;
	params.NumOverMax = NumOverMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestTracker.QuestTracker_C.ExecuteUbergraph_QuestTracker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestTracker_C::ExecuteUbergraph_QuestTracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTracker.QuestTracker_C.ExecuteUbergraph_QuestTracker");

	UQuestTracker_C_ExecuteUbergraph_QuestTracker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
