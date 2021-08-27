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

// Function CurrencyCostWidget.CurrencyCostWidget_C.GetCurrencyWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCurrencyWidget*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCurrencyWidget* UCurrencyCostWidget_C::GetCurrencyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyCostWidget.CurrencyCostWidget_C.GetCurrencyWidget");

	UCurrencyCostWidget_C_GetCurrencyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CurrencyCostWidget.CurrencyCostWidget_C.GetResourceTraitTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTraitTextBlock*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTraitTextBlock* UCurrencyCostWidget_C::GetResourceTraitTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyCostWidget.CurrencyCostWidget_C.GetResourceTraitTextBlock");

	UCurrencyCostWidget_C_GetResourceTraitTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
