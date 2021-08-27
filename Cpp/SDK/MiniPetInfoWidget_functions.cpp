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

// Function MiniPetInfoWidget.MiniPetInfoWidget_C.GetContainerWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UMiniPetInfoWidget_C::GetContainerWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPetInfoWidget.MiniPetInfoWidget_C.GetContainerWidget");

	UMiniPetInfoWidget_C_GetContainerWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MiniPetInfoWidget.MiniPetInfoWidget_C.GetHealthProgressBar
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UProgressBar*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UProgressBar* UMiniPetInfoWidget_C::GetHealthProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPetInfoWidget.MiniPetInfoWidget_C.GetHealthProgressBar");

	UMiniPetInfoWidget_C_GetHealthProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MiniPetInfoWidget.MiniPetInfoWidget_C.GetBorderWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLBorder*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLBorder* UMiniPetInfoWidget_C::GetBorderWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPetInfoWidget.MiniPetInfoWidget_C.GetBorderWidget");

	UMiniPetInfoWidget_C_GetBorderWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MiniPetInfoWidget.MiniPetInfoWidget_C.GetPortraitImage
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UMiniPetInfoWidget_C::GetPortraitImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPetInfoWidget.MiniPetInfoWidget_C.GetPortraitImage");

	UMiniPetInfoWidget_C_GetPortraitImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
