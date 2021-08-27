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

// Function TravelMapWidget.TravelMapWidget_C.GetDefaultDestinationsListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UTravelMapWidget_C::GetDefaultDestinationsListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.GetDefaultDestinationsListWidget");

	UTravelMapWidget_C_GetDefaultDestinationsListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelMapWidget.TravelMapWidget_C.GetOptionsBackgroundWidgetSwitcher
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLWidgetSwitcher*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLWidgetSwitcher* UTravelMapWidget_C::GetOptionsBackgroundWidgetSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.GetOptionsBackgroundWidgetSwitcher");

	UTravelMapWidget_C_GetOptionsBackgroundWidgetSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelMapWidget.TravelMapWidget_C.GetPartyMemberListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UTravelMapWidget_C::GetPartyMemberListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.GetPartyMemberListWidget");

	UTravelMapWidget_C_GetPartyMemberListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelMapWidget.TravelMapWidget_C.GetDefaultGamepadListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UTravelMapWidget_C::GetDefaultGamepadListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.GetDefaultGamepadListWidget");

	UTravelMapWidget_C_GetDefaultGamepadListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelMapWidget.TravelMapWidget_C.On_PartyMembersList_GetNextListBinding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UTravelMapWidget_C::On_PartyMembersList_GetNextListBinding(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.On_PartyMembersList_GetNextListBinding");

	UTravelMapWidget_C_On_PartyMembersList_GetNextListBinding_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelMapWidget.TravelMapWidget_C.On_ThisPlayerList_GetNextListBinding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UTravelMapWidget_C::On_ThisPlayerList_GetNextListBinding(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.On_ThisPlayerList_GetNextListBinding");

	UTravelMapWidget_C_On_ThisPlayerList_GetNextListBinding_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelMapWidget.TravelMapWidget_C.GetPartyWidgetContainer
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UTravelMapWidget_C::GetPartyWidgetContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.GetPartyWidgetContainer");

	UTravelMapWidget_C_GetPartyWidgetContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelMapWidget.TravelMapWidget_C.GetPartyTravelWidgets
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UTravelToPartyMemberWidget*> ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<class UTravelToPartyMemberWidget*> UTravelMapWidget_C::GetPartyTravelWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.GetPartyTravelWidgets");

	UTravelMapWidget_C_GetPartyTravelWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelMapWidget.TravelMapWidget_C.GetTravelToFortWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTravelToKnownDestinationWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTravelToKnownDestinationWidget* UTravelMapWidget_C::GetTravelToFortWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.GetTravelToFortWidget");

	UTravelMapWidget_C_GetTravelToFortWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelMapWidget.TravelMapWidget_C.GetTravelToTownWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTravelToKnownDestinationWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTravelToKnownDestinationWidget* UTravelMapWidget_C::GetTravelToTownWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.GetTravelToTownWidget");

	UTravelMapWidget_C_GetTravelToTownWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelMapWidget.TravelMapWidget_C.GetHideAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UTravelMapWidget_C::GetHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.GetHideAnimation");

	UTravelMapWidget_C_GetHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelMapWidget.TravelMapWidget_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UTravelMapWidget_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.GetShowAnimation");

	UTravelMapWidget_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelMapWidget.TravelMapWidget_C.BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)
void UTravelMapWidget_C::BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UTravelMapWidget_C_BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TravelMapWidget.TravelMapWidget_C.ExecuteUbergraph_TravelMapWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTravelMapWidget_C::ExecuteUbergraph_TravelMapWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelMapWidget.TravelMapWidget_C.ExecuteUbergraph_TravelMapWidget");

	UTravelMapWidget_C_ExecuteUbergraph_TravelMapWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
