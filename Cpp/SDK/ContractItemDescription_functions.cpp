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

// Function ContractItemDescription.ContractItemDescription_C.GetTitleWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UContractItemDescription_C::GetTitleWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractItemDescription.ContractItemDescription_C.GetTitleWidget");

	UContractItemDescription_C_GetTitleWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractItemDescription.ContractItemDescription_C.GetItemRarityTextWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UContractItemDescription_C::GetItemRarityTextWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractItemDescription.ContractItemDescription_C.GetItemRarityTextWidget");

	UContractItemDescription_C_GetItemRarityTextWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractItemDescription.ContractItemDescription_C.GetItemTypeTextWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UContractItemDescription_C::GetItemTypeTextWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractItemDescription.ContractItemDescription_C.GetItemTypeTextWidget");

	UContractItemDescription_C_GetItemTypeTextWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractItemDescription.ContractItemDescription_C.GetLongDescriptionWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UContractItemDescription_C::GetLongDescriptionWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractItemDescription.ContractItemDescription_C.GetLongDescriptionWidget");

	UContractItemDescription_C_GetLongDescriptionWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
