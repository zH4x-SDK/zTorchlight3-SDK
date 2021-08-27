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

// Function CharacterMenuButton.CharacterMenuButton_C.GetAlertPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* UCharacterMenuButton_C::GetAlertPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuButton.CharacterMenuButton_C.GetAlertPanel");

	UCharacterMenuButton_C_GetAlertPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CharacterMenuButton.CharacterMenuButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCharacterMenuButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuButton.CharacterMenuButton_C.Construct");

	UCharacterMenuButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMenuButton.CharacterMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UCharacterMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuButton.CharacterMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UCharacterMenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMenuButton.CharacterMenuButton_C.BndEvt__ButtonSelected_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UCharacterMenuButton_C::BndEvt__ButtonSelected_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuButton.CharacterMenuButton_C.BndEvt__ButtonSelected_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UCharacterMenuButton_C_BndEvt__ButtonSelected_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMenuButton.CharacterMenuButton_C.ExecuteUbergraph_CharacterMenuButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterMenuButton_C::ExecuteUbergraph_CharacterMenuButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuButton.CharacterMenuButton_C.ExecuteUbergraph_CharacterMenuButton");

	UCharacterMenuButton_C_ExecuteUbergraph_CharacterMenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
