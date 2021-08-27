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

// Function CraftingResultsModal.CraftingResultsModal_C.GetCraftingProductList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCraftingProductListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCraftingProductListWidget* UCraftingResultsModal_C::GetCraftingProductList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingResultsModal.CraftingResultsModal_C.GetCraftingProductList");

	UCraftingResultsModal_C_GetCraftingProductList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingResultsModal.CraftingResultsModal_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UCraftingResultsModal_C::BndEvt__ClaimButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingResultsModal.CraftingResultsModal_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UCraftingResultsModal_C_BndEvt__ClaimButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraftingResultsModal.CraftingResultsModal_C.ExecuteUbergraph_CraftingResultsModal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCraftingResultsModal_C::ExecuteUbergraph_CraftingResultsModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingResultsModal.CraftingResultsModal_C.ExecuteUbergraph_CraftingResultsModal");

	UCraftingResultsModal_C_ExecuteUbergraph_CraftingResultsModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
