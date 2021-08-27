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

// Function MapSidebar.MapSidebar_C.GetResetInstanceWidgetList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UMapSidebar_C::GetResetInstanceWidgetList()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapSidebar.MapSidebar_C.GetResetInstanceWidgetList");

	UMapSidebar_C_GetResetInstanceWidgetList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MapSidebar.MapSidebar_C.On_ResetInstancesList_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UMapSidebar_C::On_ResetInstancesList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapSidebar.MapSidebar_C.On_ResetInstancesList_GetNextListBinding_1");

	UMapSidebar_C_On_ResetInstancesList_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MapSidebar.MapSidebar_C.UpdateCompassSwitcher
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
void UMapSidebar_C::UpdateCompassSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapSidebar.MapSidebar_C.UpdateCompassSwitcher");

	UMapSidebar_C_UpdateCompassSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapSidebar.MapSidebar_C.GetAreaWidgetList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UMapSidebar_C::GetAreaWidgetList()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapSidebar.MapSidebar_C.GetAreaWidgetList");

	UMapSidebar_C_GetAreaWidgetList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MapSidebar.MapSidebar_C.On_ButtonList_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UMapSidebar_C::On_ButtonList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapSidebar.MapSidebar_C.On_ButtonList_GetNextListBinding_1");

	UMapSidebar_C_On_ButtonList_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MapSidebar.MapSidebar_C.OnGetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UMapSidebar_C::OnGetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapSidebar.MapSidebar_C.OnGetNextListBinding_1");

	UMapSidebar_C_OnGetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MapSidebar.MapSidebar_C.GetFortWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAreaInSpokeWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAreaInSpokeWidget* UMapSidebar_C::GetFortWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapSidebar.MapSidebar_C.GetFortWidget");

	UMapSidebar_C_GetFortWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MapSidebar.MapSidebar_C.GetPortalWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAreaInSpokeWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAreaInSpokeWidget* UMapSidebar_C::GetPortalWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapSidebar.MapSidebar_C.GetPortalWidget");

	UMapSidebar_C_GetPortalWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MapSidebar.MapSidebar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMapSidebar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapSidebar.MapSidebar_C.PreConstruct");

	UMapSidebar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapSidebar.MapSidebar_C.BndEvt__ResetInstanceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UMapSidebar_C::BndEvt__ResetInstanceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapSidebar.MapSidebar_C.BndEvt__ResetInstanceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMapSidebar_C_BndEvt__ResetInstanceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapSidebar.MapSidebar_C.ExecuteUbergraph_MapSidebar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMapSidebar_C::ExecuteUbergraph_MapSidebar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapSidebar.MapSidebar_C.ExecuteUbergraph_MapSidebar");

	UMapSidebar_C_ExecuteUbergraph_MapSidebar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
