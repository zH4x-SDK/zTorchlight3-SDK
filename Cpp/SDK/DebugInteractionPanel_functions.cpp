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

// Function DebugInteractionPanel.DebugInteractionPanel_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UDebugInteractionPanel_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugInteractionPanel.DebugInteractionPanel_C.GetText_2");

	UDebugInteractionPanel_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DebugInteractionPanel.DebugInteractionPanel_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UDebugInteractionPanel_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugInteractionPanel.DebugInteractionPanel_C.GetText_1");

	UDebugInteractionPanel_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DebugInteractionPanel.DebugInteractionPanel_C.BndEvt__TLButton_312_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UDebugInteractionPanel_C::BndEvt__TLButton_312_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugInteractionPanel.DebugInteractionPanel_C.BndEvt__TLButton_312_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UDebugInteractionPanel_C_BndEvt__TLButton_312_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugInteractionPanel.DebugInteractionPanel_C.ExecuteUbergraph_DebugInteractionPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugInteractionPanel_C::ExecuteUbergraph_DebugInteractionPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugInteractionPanel.DebugInteractionPanel_C.ExecuteUbergraph_DebugInteractionPanel");

	UDebugInteractionPanel_C_ExecuteUbergraph_DebugInteractionPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
