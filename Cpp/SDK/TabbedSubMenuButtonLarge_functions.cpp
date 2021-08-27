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

// Function TabbedSubMenuButtonLarge.TabbedSubMenuButtonLarge_C.BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UTabbedSubMenuButtonLarge_C::BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSubMenuButtonLarge.TabbedSubMenuButtonLarge_C.BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UTabbedSubMenuButtonLarge_C_BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TabbedSubMenuButtonLarge.TabbedSubMenuButtonLarge_C.ExecuteUbergraph_TabbedSubMenuButtonLarge
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTabbedSubMenuButtonLarge_C::ExecuteUbergraph_TabbedSubMenuButtonLarge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSubMenuButtonLarge.TabbedSubMenuButtonLarge_C.ExecuteUbergraph_TabbedSubMenuButtonLarge");

	UTabbedSubMenuButtonLarge_C_ExecuteUbergraph_TabbedSubMenuButtonLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
