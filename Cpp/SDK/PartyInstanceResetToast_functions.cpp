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

// Function PartyInstanceResetToast.PartyInstanceResetToast_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UPartyInstanceResetToast_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyInstanceResetToast.PartyInstanceResetToast_C.GetShowAnimation");

	UPartyInstanceResetToast_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PartyInstanceResetToast.PartyInstanceResetToast_C.GetBodyTextBlock
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextLayoutWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextLayoutWidget* UPartyInstanceResetToast_C::GetBodyTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyInstanceResetToast.PartyInstanceResetToast_C.GetBodyTextBlock");

	UPartyInstanceResetToast_C_GetBodyTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PartyInstanceResetToast.PartyInstanceResetToast_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UPartyInstanceResetToast_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyInstanceResetToast.PartyInstanceResetToast_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UPartyInstanceResetToast_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PartyInstanceResetToast.PartyInstanceResetToast_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UPartyInstanceResetToast_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyInstanceResetToast.PartyInstanceResetToast_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature");

	UPartyInstanceResetToast_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PartyInstanceResetToast.PartyInstanceResetToast_C.ExecuteUbergraph_PartyInstanceResetToast
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPartyInstanceResetToast_C::ExecuteUbergraph_PartyInstanceResetToast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyInstanceResetToast.PartyInstanceResetToast_C.ExecuteUbergraph_PartyInstanceResetToast");

	UPartyInstanceResetToast_C_ExecuteUbergraph_PartyInstanceResetToast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
