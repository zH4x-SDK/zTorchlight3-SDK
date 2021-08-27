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

// Function MapPanelWidget.MapPanelWidget_C.GetSpokeWrapper
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMapSpokeWrapper*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMapSpokeWrapper* UMapPanelWidget_C::GetSpokeWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapPanelWidget.MapPanelWidget_C.GetSpokeWrapper");

	UMapPanelWidget_C_GetSpokeWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MapPanelWidget.MapPanelWidget_C.GetQuestLog
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQuestLogWidget*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UQuestLogWidget* UMapPanelWidget_C::GetQuestLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapPanelWidget.MapPanelWidget_C.GetQuestLog");

	UMapPanelWidget_C_GetQuestLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MapPanelWidget.MapPanelWidget_C.GetHideAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UMapPanelWidget_C::GetHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapPanelWidget.MapPanelWidget_C.GetHideAnimation");

	UMapPanelWidget_C_GetHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MapPanelWidget.MapPanelWidget_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UMapPanelWidget_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapPanelWidget.MapPanelWidget_C.GetShowAnimation");

	UMapPanelWidget_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
