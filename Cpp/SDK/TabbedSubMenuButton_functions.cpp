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

// Function TabbedSubMenuButton.TabbedSubMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UTabbedSubMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSubMenuButton.TabbedSubMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UTabbedSubMenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TabbedSubMenuButton.TabbedSubMenuButton_C.ExecuteUbergraph_TabbedSubMenuButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTabbedSubMenuButton_C::ExecuteUbergraph_TabbedSubMenuButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSubMenuButton.TabbedSubMenuButton_C.ExecuteUbergraph_TabbedSubMenuButton");

	UTabbedSubMenuButton_C_ExecuteUbergraph_TabbedSubMenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
