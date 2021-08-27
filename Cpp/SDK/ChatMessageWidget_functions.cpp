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

// Function ChatMessageWidget.ChatMessageWidget_C.GetSocialMenuAnchor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UChatMessageWidget_C::GetSocialMenuAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatMessageWidget.ChatMessageWidget_C.GetSocialMenuAnchor");

	UChatMessageWidget_C_GetSocialMenuAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChatMessageWidget.ChatMessageWidget_C.GetTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* UChatMessageWidget_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatMessageWidget.ChatMessageWidget_C.GetTextBlock");

	UChatMessageWidget_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChatMessageWidget.ChatMessageWidget_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UChatMessageWidget_C::BndEvt__TLButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatMessageWidget.ChatMessageWidget_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UChatMessageWidget_C_BndEvt__TLButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatMessageWidget.ChatMessageWidget_C.ExecuteUbergraph_ChatMessageWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatMessageWidget_C::ExecuteUbergraph_ChatMessageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatMessageWidget.ChatMessageWidget_C.ExecuteUbergraph_ChatMessageWidget");

	UChatMessageWidget_C_ExecuteUbergraph_ChatMessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
