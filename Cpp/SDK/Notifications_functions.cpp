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

// Function Notifications.Notifications_C.On_InventoryFull_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UNotifications_C::On_InventoryFull_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.On_InventoryFull_MouseButtonDown_1");

	UNotifications_C_On_InventoryFull_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Notifications.Notifications_C.UpdateLegendaryAffixText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UNotifications_C::UpdateLegendaryAffixText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.UpdateLegendaryAffixText");

	UNotifications_C_UpdateLegendaryAffixText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Notifications.Notifications_C.PlayAddSkillPointAnim
// (Public, BlueprintCallable, BlueprintEvent)
void UNotifications_C::PlayAddSkillPointAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.PlayAddSkillPointAnim");

	UNotifications_C_PlayAddSkillPointAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Notifications.Notifications_C.On_InboxMail_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UNotifications_C::On_InboxMail_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.On_InboxMail_MouseButtonDown_1");

	UNotifications_C_On_InboxMail_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Notifications.Notifications_C.GetSocialNotificationsTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UNotifications_C::GetSocialNotificationsTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.GetSocialNotificationsTooltipWidget");

	UNotifications_C_GetSocialNotificationsTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Notifications.Notifications_C.Get_EmberSkillAvailable_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UNotifications_C::Get_EmberSkillAvailable_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.Get_EmberSkillAvailable_ToolTipWidget_1");

	UNotifications_C_Get_EmberSkillAvailable_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Notifications.Notifications_C.GetNotificationWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FrontiersUI_EUINotification    Notification                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UNotifications_C::GetNotificationWidget(FrontiersUI_EUINotification Notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.GetNotificationWidget");

	UNotifications_C_GetNotificationWidget_Params params;
	params.Notification = Notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Notifications.Notifications_C.GetCraftingInProgressTooltipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UNotifications_C::GetCraftingInProgressTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.GetCraftingInProgressTooltipWidget");

	UNotifications_C_GetCraftingInProgressTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Notifications.Notifications_C.Get_UnreadMail_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UNotifications_C::Get_UnreadMail_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.Get_UnreadMail_ToolTipWidget_1");

	UNotifications_C_Get_UnreadMail_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Notifications.Notifications_C.Get_InventoryFull_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UNotifications_C::Get_InventoryFull_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.Get_InventoryFull_ToolTipWidget_1");

	UNotifications_C_Get_InventoryFull_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Notifications.Notifications_C.Get_SkillAvailable_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UNotifications_C::Get_SkillAvailable_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.Get_SkillAvailable_ToolTipWidget_1");

	UNotifications_C_Get_SkillAvailable_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Notifications.Notifications_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UNotifications_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.PreConstruct");

	UNotifications_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Notifications.Notifications_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UNotifications_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.Construct");

	UNotifications_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Notifications.Notifications_C.BndEvt__TLButton_136_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UNotifications_C::BndEvt__TLButton_136_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.BndEvt__TLButton_136_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UNotifications_C_BndEvt__TLButton_136_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Notifications.Notifications_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UNotifications_C::BndEvt__TLButton_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UNotifications_C_BndEvt__TLButton_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Notifications.Notifications_C.BndEvt__TLButton_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UNotifications_C::BndEvt__TLButton_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.BndEvt__TLButton_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UNotifications_C_BndEvt__TLButton_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Notifications.Notifications_C.OnNotificationMadeVisible
// (Event, Protected, BlueprintEvent)
// Parameters:
// FrontiersUI_EUINotification    Notification                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNotifications_C::OnNotificationMadeVisible(FrontiersUI_EUINotification Notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.OnNotificationMadeVisible");

	UNotifications_C_OnNotificationMadeVisible_Params params;
	params.Notification = Notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Notifications.Notifications_C.ExecuteUbergraph_Notifications
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNotifications_C::ExecuteUbergraph_Notifications(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Notifications.Notifications_C.ExecuteUbergraph_Notifications");

	UNotifications_C_ExecuteUbergraph_Notifications_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
