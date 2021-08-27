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

// Function TravelMapWidget.TravelMapWidget_C.GetDefaultDestinationsListWidget
struct UTravelMapWidget_C_GetDefaultDestinationsListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelMapWidget.TravelMapWidget_C.GetOptionsBackgroundWidgetSwitcher
struct UTravelMapWidget_C_GetOptionsBackgroundWidgetSwitcher_Params
{
	class UTLWidgetSwitcher*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelMapWidget.TravelMapWidget_C.GetPartyMemberListWidget
struct UTravelMapWidget_C_GetPartyMemberListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelMapWidget.TravelMapWidget_C.GetDefaultGamepadListWidget
struct UTravelMapWidget_C_GetDefaultGamepadListWidget_Params
{
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelMapWidget.TravelMapWidget_C.On_PartyMembersList_GetNextListBinding
struct UTravelMapWidget_C_On_PartyMembersList_GetNextListBinding_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelMapWidget.TravelMapWidget_C.On_ThisPlayerList_GetNextListBinding
struct UTravelMapWidget_C_On_ThisPlayerList_GetNextListBinding_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelMapWidget.TravelMapWidget_C.GetPartyWidgetContainer
struct UTravelMapWidget_C_GetPartyWidgetContainer_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelMapWidget.TravelMapWidget_C.GetPartyTravelWidgets
struct UTravelMapWidget_C_GetPartyTravelWidgets_Params
{
	TArray<class UTravelToPartyMemberWidget*>          ReturnValue;                                               // (Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// Function TravelMapWidget.TravelMapWidget_C.GetTravelToFortWidget
struct UTravelMapWidget_C_GetTravelToFortWidget_Params
{
	class UTravelToKnownDestinationWidget*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelMapWidget.TravelMapWidget_C.GetTravelToTownWidget
struct UTravelMapWidget_C_GetTravelToTownWidget_Params
{
	class UTravelToKnownDestinationWidget*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelMapWidget.TravelMapWidget_C.GetHideAnimation
struct UTravelMapWidget_C_GetHideAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelMapWidget.TravelMapWidget_C.GetShowAnimation
struct UTravelMapWidget_C_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelMapWidget.TravelMapWidget_C.BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
struct UTravelMapWidget_C_BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
{
};

// Function TravelMapWidget.TravelMapWidget_C.ExecuteUbergraph_TravelMapWidget
struct UTravelMapWidget_C_ExecuteUbergraph_TravelMapWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
