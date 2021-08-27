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

// Function TabbedSubMenuButtonAttached.TabbedSubMenuButtonAttached_C.GetAlertPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* UTabbedSubMenuButtonAttached_C::GetAlertPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSubMenuButtonAttached.TabbedSubMenuButtonAttached_C.GetAlertPanel");

	UTabbedSubMenuButtonAttached_C_GetAlertPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TabbedSubMenuButtonAttached.TabbedSubMenuButtonAttached_C.BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UTabbedSubMenuButtonAttached_C::BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSubMenuButtonAttached.TabbedSubMenuButtonAttached_C.BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UTabbedSubMenuButtonAttached_C_BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TabbedSubMenuButtonAttached.TabbedSubMenuButtonAttached_C.OnDataSet
// (Event, Protected, BlueprintEvent)
void UTabbedSubMenuButtonAttached_C::OnDataSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSubMenuButtonAttached.TabbedSubMenuButtonAttached_C.OnDataSet");

	UTabbedSubMenuButtonAttached_C_OnDataSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TabbedSubMenuButtonAttached.TabbedSubMenuButtonAttached_C.ShowAlert
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           AlertVisibility                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   AlertText                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTabbedSubMenuButtonAttached_C::ShowAlert(UMG_ESlateVisibility AlertVisibility, const struct FText& AlertText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSubMenuButtonAttached.TabbedSubMenuButtonAttached_C.ShowAlert");

	UTabbedSubMenuButtonAttached_C_ShowAlert_Params params;
	params.AlertVisibility = AlertVisibility;
	params.AlertText = AlertText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TabbedSubMenuButtonAttached.TabbedSubMenuButtonAttached_C.ExecuteUbergraph_TabbedSubMenuButtonAttached
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTabbedSubMenuButtonAttached_C::ExecuteUbergraph_TabbedSubMenuButtonAttached(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSubMenuButtonAttached.TabbedSubMenuButtonAttached_C.ExecuteUbergraph_TabbedSubMenuButtonAttached");

	UTabbedSubMenuButtonAttached_C_ExecuteUbergraph_TabbedSubMenuButtonAttached_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
