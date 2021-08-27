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

// Function Style_CloseButton.Style_CloseButton_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UStyle_CloseButton_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Style_CloseButton.Style_CloseButton_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature");

	UStyle_CloseButton_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Style_CloseButton.Style_CloseButton_C.ExecuteUbergraph_Style_CloseButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStyle_CloseButton_C::ExecuteUbergraph_Style_CloseButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Style_CloseButton.Style_CloseButton_C.ExecuteUbergraph_Style_CloseButton");

	UStyle_CloseButton_C_ExecuteUbergraph_Style_CloseButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Style_CloseButton.Style_CloseButton_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UStyle_CloseButton_C::OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Style_CloseButton.Style_CloseButton_C.OnClosed__DelegateSignature");

	UStyle_CloseButton_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
