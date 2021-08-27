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

// Function ContractClaimChest.ContractClaimChest_C.GetClaimAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UContractClaimChest_C::GetClaimAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractClaimChest.ContractClaimChest_C.GetClaimAnimation");

	UContractClaimChest_C_GetClaimAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractClaimChest.ContractClaimChest_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UContractClaimChest_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractClaimChest.ContractClaimChest_C.GetShowAnimation");

	UContractClaimChest_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractClaimChest.ContractClaimChest_C.GetRewardList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UContractRewardListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UContractRewardListWidget* UContractClaimChest_C::GetRewardList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractClaimChest.ContractClaimChest_C.GetRewardList");

	UContractClaimChest_C_GetRewardList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractClaimChest.ContractClaimChest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UContractClaimChest_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractClaimChest.ContractClaimChest_C.Construct");

	UContractClaimChest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ContractClaimChest.ContractClaimChest_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UContractClaimChest_C::BndEvt__ClaimButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractClaimChest.ContractClaimChest_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UContractClaimChest_C_BndEvt__ClaimButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ContractClaimChest.ContractClaimChest_C.ExecuteUbergraph_ContractClaimChest
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UContractClaimChest_C::ExecuteUbergraph_ContractClaimChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractClaimChest.ContractClaimChest_C.ExecuteUbergraph_ContractClaimChest");

	UContractClaimChest_C_ExecuteUbergraph_ContractClaimChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
