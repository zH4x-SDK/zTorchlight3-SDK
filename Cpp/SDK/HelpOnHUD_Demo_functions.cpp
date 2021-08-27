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

// Function HelpOnHUD_Demo.HelpOnHUD_Demo_C.GetCanvasPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCanvasPanel* UHelpOnHUD_Demo_C::GetCanvasPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD_Demo.HelpOnHUD_Demo_C.GetCanvasPanel");

	UHelpOnHUD_Demo_C_GetCanvasPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HelpOnHUD_Demo.HelpOnHUD_Demo_C.GetMenuButtonList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuButtonList*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuButtonList* UHelpOnHUD_Demo_C::GetMenuButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD_Demo.HelpOnHUD_Demo_C.GetMenuButtonList");

	UHelpOnHUD_Demo_C_GetMenuButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HelpOnHUD_Demo.HelpOnHUD_Demo_C.BlueprintOnOptionSelected
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTabbedMenuOption       Option                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UHelpOnHUD_Demo_C::BlueprintOnOptionSelected(const struct FTabbedMenuOption& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD_Demo.HelpOnHUD_Demo_C.BlueprintOnOptionSelected");

	UHelpOnHUD_Demo_C_BlueprintOnOptionSelected_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HelpOnHUD_Demo.HelpOnHUD_Demo_C.BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)
void UHelpOnHUD_Demo_C::BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD_Demo.HelpOnHUD_Demo_C.BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UHelpOnHUD_Demo_C_BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HelpOnHUD_Demo.HelpOnHUD_Demo_C.ExecuteUbergraph_HelpOnHUD_Demo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHelpOnHUD_Demo_C::ExecuteUbergraph_HelpOnHUD_Demo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpOnHUD_Demo.HelpOnHUD_Demo_C.ExecuteUbergraph_HelpOnHUD_Demo");

	UHelpOnHUD_Demo_C_ExecuteUbergraph_HelpOnHUD_Demo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
