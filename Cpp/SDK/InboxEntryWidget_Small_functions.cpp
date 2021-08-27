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

// Function InboxEntryWidget_Small.InboxEntryWidget_Small_C.GetAttachmentListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInboxAttachmentListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInboxAttachmentListWidget* UInboxEntryWidget_Small_C::GetAttachmentListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InboxEntryWidget_Small.InboxEntryWidget_Small_C.GetAttachmentListWidget");

	UInboxEntryWidget_Small_C_GetAttachmentListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InboxEntryWidget_Small.InboxEntryWidget_Small_C.BndEvt__Claim_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UInboxEntryWidget_Small_C::BndEvt__Claim_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InboxEntryWidget_Small.InboxEntryWidget_Small_C.BndEvt__Claim_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UInboxEntryWidget_Small_C_BndEvt__Claim_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InboxEntryWidget_Small.InboxEntryWidget_Small_C.ExecuteUbergraph_InboxEntryWidget_Small
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInboxEntryWidget_Small_C::ExecuteUbergraph_InboxEntryWidget_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InboxEntryWidget_Small.InboxEntryWidget_Small_C.ExecuteUbergraph_InboxEntryWidget_Small");

	UInboxEntryWidget_Small_C_ExecuteUbergraph_InboxEntryWidget_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
