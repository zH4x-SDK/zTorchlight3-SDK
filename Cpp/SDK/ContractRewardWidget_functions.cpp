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

// Function ContractRewardWidget.ContractRewardWidget_C.GetRewardNameTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UContractRewardWidget_C::GetRewardNameTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractRewardWidget.ContractRewardWidget_C.GetRewardNameTextBlock");

	UContractRewardWidget_C_GetRewardNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractRewardWidget.ContractRewardWidget_C.GetCraftingProductWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCraftingProductWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCraftingProductWidget* UContractRewardWidget_C::GetCraftingProductWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractRewardWidget.ContractRewardWidget_C.GetCraftingProductWidget");

	UContractRewardWidget_C_GetCraftingProductWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractRewardWidget.ContractRewardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UContractRewardWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractRewardWidget.ContractRewardWidget_C.Construct");

	UContractRewardWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ContractRewardWidget.ContractRewardWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UContractRewardWidget_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractRewardWidget.ContractRewardWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UContractRewardWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ContractRewardWidget.ContractRewardWidget_C.PlayClaimAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UContractRewardWidget_C::PlayClaimAnimation(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractRewardWidget.ContractRewardWidget_C.PlayClaimAnimation");

	UContractRewardWidget_C_PlayClaimAnimation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ContractRewardWidget.ContractRewardWidget_C.ResetAnimation
// (Event, Public, BlueprintEvent)
void UContractRewardWidget_C::ResetAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractRewardWidget.ContractRewardWidget_C.ResetAnimation");

	UContractRewardWidget_C_ResetAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ContractRewardWidget.ContractRewardWidget_C.ExecuteUbergraph_ContractRewardWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UContractRewardWidget_C::ExecuteUbergraph_ContractRewardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractRewardWidget.ContractRewardWidget_C.ExecuteUbergraph_ContractRewardWidget");

	UContractRewardWidget_C_ExecuteUbergraph_ContractRewardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
