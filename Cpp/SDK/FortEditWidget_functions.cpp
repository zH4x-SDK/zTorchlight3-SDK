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

// Function FortEditWidget.FortEditWidget_C.GetPlaceableAreaWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UFortEditWidget_C::GetPlaceableAreaWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortEditWidget.FortEditWidget_C.GetPlaceableAreaWidget");

	UFortEditWidget_C_GetPlaceableAreaWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortEditWidget.FortEditWidget_C.GetFortInventoryWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortInventoryWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UFortInventoryWidget* UFortEditWidget_C::GetFortInventoryWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortEditWidget.FortEditWidget_C.GetFortInventoryWidget");

	UFortEditWidget_C_GetFortInventoryWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortEditWidget.FortEditWidget_C.GetPropToPlaceWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortPropWidget*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UFortPropWidget* UFortEditWidget_C::GetPropToPlaceWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortEditWidget.FortEditWidget_C.GetPropToPlaceWidget");

	UFortEditWidget_C_GetPropToPlaceWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortEditWidget.FortEditWidget_C.GetHoveredPropTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UFortEditWidget_C::GetHoveredPropTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortEditWidget.FortEditWidget_C.GetHoveredPropTextBlock");

	UFortEditWidget_C_GetHoveredPropTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortEditWidget.FortEditWidget_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UFortEditWidget_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortEditWidget.FortEditWidget_C.GetShowAnimation");

	UFortEditWidget_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortEditWidget.FortEditWidget_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UFortEditWidget_C::BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortEditWidget.FortEditWidget_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UFortEditWidget_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortEditWidget.FortEditWidget_C.ExecuteUbergraph_FortEditWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFortEditWidget_C::ExecuteUbergraph_FortEditWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortEditWidget.FortEditWidget_C.ExecuteUbergraph_FortEditWidget");

	UFortEditWidget_C_ExecuteUbergraph_FortEditWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
