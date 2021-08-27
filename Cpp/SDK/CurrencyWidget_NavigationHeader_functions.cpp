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

// Function CurrencyWidget_NavigationHeader.CurrencyWidget_NavigationHeader_C.GetTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UCurrencyWidget_NavigationHeader_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyWidget_NavigationHeader.CurrencyWidget_NavigationHeader_C.GetTextBlock");

	UCurrencyWidget_NavigationHeader_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CurrencyWidget_NavigationHeader.CurrencyWidget_NavigationHeader_C.GetIconImage
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UCurrencyWidget_NavigationHeader_C::GetIconImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyWidget_NavigationHeader.CurrencyWidget_NavigationHeader_C.GetIconImage");

	UCurrencyWidget_NavigationHeader_C_GetIconImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CurrencyWidget_NavigationHeader.CurrencyWidget_NavigationHeader_C.GetTraitTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTraitTextBlock*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTraitTextBlock* UCurrencyWidget_NavigationHeader_C::GetTraitTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyWidget_NavigationHeader.CurrencyWidget_NavigationHeader_C.GetTraitTextBlock");

	UCurrencyWidget_NavigationHeader_C_GetTraitTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
