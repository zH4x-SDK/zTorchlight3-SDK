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

// Function CurrencyCost_Small.CurrencyCost_Small_C.GetTooltipAnchor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UCurrencyCost_Small_C::GetTooltipAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyCost_Small.CurrencyCost_Small_C.GetTooltipAnchor");

	UCurrencyCost_Small_C_GetTooltipAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CurrencyCost_Small.CurrencyCost_Small_C.GetResourceRequiredTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UCurrencyCost_Small_C::GetResourceRequiredTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyCost_Small.CurrencyCost_Small_C.GetResourceRequiredTextBlock");

	UCurrencyCost_Small_C_GetResourceRequiredTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CurrencyCost_Small.CurrencyCost_Small_C.GetResourceIcon
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAsyncImage*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAsyncImage* UCurrencyCost_Small_C::GetResourceIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyCost_Small.CurrencyCost_Small_C.GetResourceIcon");

	UCurrencyCost_Small_C_GetResourceIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
