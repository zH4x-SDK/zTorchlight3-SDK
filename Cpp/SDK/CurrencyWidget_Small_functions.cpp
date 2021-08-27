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

// Function CurrencyWidget_Small.CurrencyWidget_Small_C.GetTooltipAnchor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UCurrencyWidget_Small_C::GetTooltipAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyWidget_Small.CurrencyWidget_Small_C.GetTooltipAnchor");

	UCurrencyWidget_Small_C_GetTooltipAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CurrencyWidget_Small.CurrencyWidget_Small_C.GetTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UCurrencyWidget_Small_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyWidget_Small.CurrencyWidget_Small_C.GetTextBlock");

	UCurrencyWidget_Small_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CurrencyWidget_Small.CurrencyWidget_Small_C.GetIconImage
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UCurrencyWidget_Small_C::GetIconImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyWidget_Small.CurrencyWidget_Small_C.GetIconImage");

	UCurrencyWidget_Small_C_GetIconImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CurrencyWidget_Small.CurrencyWidget_Small_C.GetTraitTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTraitTextBlock*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTraitTextBlock* UCurrencyWidget_Small_C::GetTraitTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyWidget_Small.CurrencyWidget_Small_C.GetTraitTextBlock");

	UCurrencyWidget_Small_C_GetTraitTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
