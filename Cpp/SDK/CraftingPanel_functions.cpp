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

// Function CraftingPanel.CraftingPanel_C.GetCurrencyWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCurrencyWidget*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCurrencyWidget* UCraftingPanel_C::GetCurrencyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingPanel.CraftingPanel_C.GetCurrencyWidget");

	UCraftingPanel_C_GetCurrencyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingPanel.CraftingPanel_C.GetMenuButtonList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuButtonList*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuButtonList* UCraftingPanel_C::GetMenuButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingPanel.CraftingPanel_C.GetMenuButtonList");

	UCraftingPanel_C_GetMenuButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingPanel.CraftingPanel_C.GetCanvasPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCanvasPanel* UCraftingPanel_C::GetCanvasPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingPanel.CraftingPanel_C.GetCanvasPanel");

	UCraftingPanel_C_GetCanvasPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingPanel.CraftingPanel_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UCraftingPanel_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingPanel.CraftingPanel_C.GetShowAnimation");

	UCraftingPanel_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingPanel.CraftingPanel_C.BlueprintOnShown
// (Event, Protected, BlueprintEvent)
void UCraftingPanel_C::BlueprintOnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingPanel.CraftingPanel_C.BlueprintOnShown");

	UCraftingPanel_C_BlueprintOnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraftingPanel.CraftingPanel_C.ExecuteUbergraph_CraftingPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCraftingPanel_C::ExecuteUbergraph_CraftingPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingPanel.CraftingPanel_C.ExecuteUbergraph_CraftingPanel");

	UCraftingPanel_C_ExecuteUbergraph_CraftingPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
