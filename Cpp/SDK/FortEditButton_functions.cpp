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

// Function FortEditButton.FortEditButton_C.GetOtherOwnerTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UFortEditButton_C::GetOtherOwnerTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortEditButton.FortEditButton_C.GetOtherOwnerTextBlock");

	UFortEditButton_C_GetOtherOwnerTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortEditButton.FortEditButton_C.GetCustomizeWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UFortEditButton_C::GetCustomizeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortEditButton.FortEditButton_C.GetCustomizeWidget");

	UFortEditButton_C_GetCustomizeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortEditButton.FortEditButton_C.GetOtherOwnerWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UFortEditButton_C::GetOtherOwnerWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortEditButton.FortEditButton_C.GetOtherOwnerWidget");

	UFortEditButton_C_GetOtherOwnerWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortEditButton.FortEditButton_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UFortEditButton_C::BndEvt__TLButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortEditButton.FortEditButton_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UFortEditButton_C_BndEvt__TLButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortEditButton.FortEditButton_C.BndEvt__OtherOwnerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UFortEditButton_C::BndEvt__OtherOwnerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortEditButton.FortEditButton_C.BndEvt__OtherOwnerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UFortEditButton_C_BndEvt__OtherOwnerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortEditButton.FortEditButton_C.ExecuteUbergraph_FortEditButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFortEditButton_C::ExecuteUbergraph_FortEditButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortEditButton.FortEditButton_C.ExecuteUbergraph_FortEditButton");

	UFortEditButton_C_ExecuteUbergraph_FortEditButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
