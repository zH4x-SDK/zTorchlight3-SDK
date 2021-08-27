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

// Function CraftingRecipeWidget.CraftingRecipeWidget_C.GetNewFlagWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UCraftingRecipeWidget_C::GetNewFlagWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingRecipeWidget.CraftingRecipeWidget_C.GetNewFlagWidget");

	UCraftingRecipeWidget_C_GetNewFlagWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingRecipeWidget.CraftingRecipeWidget_C.GetCraftingAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UCraftingRecipeWidget_C::GetCraftingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingRecipeWidget.CraftingRecipeWidget_C.GetCraftingAnimation");

	UCraftingRecipeWidget_C_GetCraftingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingRecipeWidget.CraftingRecipeWidget_C.GetProductWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGenericResourceWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGenericResourceWidget* UCraftingRecipeWidget_C::GetProductWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingRecipeWidget.CraftingRecipeWidget_C.GetProductWidget");

	UCraftingRecipeWidget_C_GetProductWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingRecipeWidget.CraftingRecipeWidget_C.GetCostsLabelColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UCraftingRecipeWidget_C::GetCostsLabelColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingRecipeWidget.CraftingRecipeWidget_C.GetCostsLabelColor");

	UCraftingRecipeWidget_C_GetCostsLabelColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingRecipeWidget.CraftingRecipeWidget_C.BndEvt__DecorationButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UCraftingRecipeWidget_C::BndEvt__DecorationButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingRecipeWidget.CraftingRecipeWidget_C.BndEvt__DecorationButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");

	UCraftingRecipeWidget_C_BndEvt__DecorationButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraftingRecipeWidget.CraftingRecipeWidget_C.ExecuteUbergraph_CraftingRecipeWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCraftingRecipeWidget_C::ExecuteUbergraph_CraftingRecipeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingRecipeWidget.CraftingRecipeWidget_C.ExecuteUbergraph_CraftingRecipeWidget");

	UCraftingRecipeWidget_C_ExecuteUbergraph_CraftingRecipeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
