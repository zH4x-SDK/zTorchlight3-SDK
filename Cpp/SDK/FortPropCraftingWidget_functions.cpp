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

// Function FortPropCraftingWidget.FortPropCraftingWidget_C.GetCostListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCraftingCostListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCraftingCostListWidget* UFortPropCraftingWidget_C::GetCostListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortPropCraftingWidget.FortPropCraftingWidget_C.GetCostListWidget");

	UFortPropCraftingWidget_C_GetCostListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortPropCraftingWidget.FortPropCraftingWidget_C.GetFortPropWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPropWidget*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UFortPropWidget* UFortPropCraftingWidget_C::GetFortPropWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortPropCraftingWidget.FortPropCraftingWidget_C.GetFortPropWidget");

	UFortPropCraftingWidget_C_GetFortPropWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortPropCraftingWidget.FortPropCraftingWidget_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UFortPropCraftingWidget_C::BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortPropCraftingWidget.FortPropCraftingWidget_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UFortPropCraftingWidget_C_BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortPropCraftingWidget.FortPropCraftingWidget_C.BndEvt__PlaceButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UFortPropCraftingWidget_C::BndEvt__PlaceButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortPropCraftingWidget.FortPropCraftingWidget_C.BndEvt__PlaceButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UFortPropCraftingWidget_C_BndEvt__PlaceButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortPropCraftingWidget.FortPropCraftingWidget_C.ExecuteUbergraph_FortPropCraftingWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFortPropCraftingWidget_C::ExecuteUbergraph_FortPropCraftingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortPropCraftingWidget.FortPropCraftingWidget_C.ExecuteUbergraph_FortPropCraftingWidget");

	UFortPropCraftingWidget_C_ExecuteUbergraph_FortPropCraftingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
