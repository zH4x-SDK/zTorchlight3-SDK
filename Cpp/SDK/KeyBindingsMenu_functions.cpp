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

// Function KeyBindingsMenu.KeyBindingsMenu_C.GetKeyBindingList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UKeyBindingListWidget*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UKeyBindingListWidget* UKeyBindingsMenu_C::GetKeyBindingList()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyBindingsMenu.KeyBindingsMenu_C.GetKeyBindingList");

	UKeyBindingsMenu_C_GetKeyBindingList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function KeyBindingsMenu.KeyBindingsMenu_C.BndEvt__ModalFrame_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)
void UKeyBindingsMenu_C::BndEvt__ModalFrame_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyBindingsMenu.KeyBindingsMenu_C.BndEvt__ModalFrame_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UKeyBindingsMenu_C_BndEvt__ModalFrame_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function KeyBindingsMenu.KeyBindingsMenu_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UKeyBindingsMenu_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyBindingsMenu.KeyBindingsMenu_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature");

	UKeyBindingsMenu_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function KeyBindingsMenu.KeyBindingsMenu_C.ExecuteUbergraph_KeyBindingsMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKeyBindingsMenu_C::ExecuteUbergraph_KeyBindingsMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyBindingsMenu.KeyBindingsMenu_C.ExecuteUbergraph_KeyBindingsMenu");

	UKeyBindingsMenu_C_ExecuteUbergraph_KeyBindingsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
