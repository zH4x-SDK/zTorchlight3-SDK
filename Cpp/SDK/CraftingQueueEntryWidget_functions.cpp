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

// Function CraftingQueueEntryWidget.CraftingQueueEntryWidget_C.GetProductWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGenericResourceWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGenericResourceWidget* UCraftingQueueEntryWidget_C::GetProductWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingQueueEntryWidget.CraftingQueueEntryWidget_C.GetProductWidget");

	UCraftingQueueEntryWidget_C_GetProductWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingQueueEntryWidget.CraftingQueueEntryWidget_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UCraftingQueueEntryWidget_C::BndEvt__ClaimButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingQueueEntryWidget.CraftingQueueEntryWidget_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UCraftingQueueEntryWidget_C_BndEvt__ClaimButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraftingQueueEntryWidget.CraftingQueueEntryWidget_C.ExecuteUbergraph_CraftingQueueEntryWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCraftingQueueEntryWidget_C::ExecuteUbergraph_CraftingQueueEntryWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingQueueEntryWidget.CraftingQueueEntryWidget_C.ExecuteUbergraph_CraftingQueueEntryWidget");

	UCraftingQueueEntryWidget_C_ExecuteUbergraph_CraftingQueueEntryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
