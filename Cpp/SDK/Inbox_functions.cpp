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

// Function Inbox.Inbox_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UInbox_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Inbox.Inbox_C.GetShowAnimation");

	UInbox_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Inbox.Inbox_C.GetInboxEntryList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInboxEntryListWidget*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInboxEntryListWidget* UInbox_C::GetInboxEntryList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Inbox.Inbox_C.GetInboxEntryList");

	UInbox_C_GetInboxEntryList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Inbox.Inbox_C.BndEvt__CloseMenuButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)
void UInbox_C::BndEvt__CloseMenuButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Inbox.Inbox_C.BndEvt__CloseMenuButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UInbox_C_BndEvt__CloseMenuButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inbox.Inbox_C.ExecuteUbergraph_Inbox
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInbox_C::ExecuteUbergraph_Inbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inbox.Inbox_C.ExecuteUbergraph_Inbox");

	UInbox_C_ExecuteUbergraph_Inbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
