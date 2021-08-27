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

// Function CurrencyPickUpWidget.CurrencyPickUpWidget_C.GetCurrencyIcon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCurrencyWidget*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCurrencyWidget* UCurrencyPickUpWidget_C::GetCurrencyIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyPickUpWidget.CurrencyPickUpWidget_C.GetCurrencyIcon");

	UCurrencyPickUpWidget_C_GetCurrencyIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CurrencyPickUpWidget.CurrencyPickUpWidget_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UCurrencyPickUpWidget_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyPickUpWidget.CurrencyPickUpWidget_C.GetShowAnimation");

	UCurrencyPickUpWidget_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CurrencyPickUpWidget.CurrencyPickUpWidget_C.GetHideAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UCurrencyPickUpWidget_C::GetHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrencyPickUpWidget.CurrencyPickUpWidget_C.GetHideAnimation");

	UCurrencyPickUpWidget_C_GetHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
