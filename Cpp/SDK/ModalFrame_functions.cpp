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

// Function ModalFrame.ModalFrame_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UModalFrame_C::SetTitleText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalFrame.ModalFrame_C.SetTitleText");

	UModalFrame_C_SetTitleText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModalFrame.ModalFrame_C.GetTitleTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTLTextBlock*            TextBlock                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModalFrame_C::GetTitleTextBlock(class UTLTextBlock** TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalFrame.ModalFrame_C.GetTitleTextBlock");

	UModalFrame_C_GetTitleTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextBlock != nullptr)
		*TextBlock = params.TextBlock;

}


// Function ModalFrame.ModalFrame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UModalFrame_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalFrame.ModalFrame_C.PreConstruct");

	UModalFrame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModalFrame.ModalFrame_C.BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)
void UModalFrame_C::BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalFrame.ModalFrame_C.BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UModalFrame_C_BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModalFrame.ModalFrame_C.ExecuteUbergraph_ModalFrame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModalFrame_C::ExecuteUbergraph_ModalFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalFrame.ModalFrame_C.ExecuteUbergraph_ModalFrame");

	UModalFrame_C_ExecuteUbergraph_ModalFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModalFrame.ModalFrame_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UModalFrame_C::OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalFrame.ModalFrame_C.OnClosed__DelegateSignature");

	UModalFrame_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
