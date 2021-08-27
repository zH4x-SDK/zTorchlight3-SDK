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

// Function LoadingScreen.LoadingScreen_C.GetFrontPlate
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* ULoadingScreen_C::GetFrontPlate()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.GetFrontPlate");

	ULoadingScreen_C_GetFrontPlate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LoadingScreen.LoadingScreen_C.GetFrontPlateFadeAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* ULoadingScreen_C::GetFrontPlateFadeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.GetFrontPlateFadeAnimation");

	ULoadingScreen_C_GetFrontPlateFadeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LoadingScreen.LoadingScreen_C.GetFadeToGameAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* ULoadingScreen_C::GetFadeToGameAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.GetFadeToGameAnimation");

	ULoadingScreen_C_GetFadeToGameAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LoadingScreen.LoadingScreen_C.GetCanvasPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCanvasPanel* ULoadingScreen_C::GetCanvasPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.GetCanvasPanel");

	ULoadingScreen_C_GetCanvasPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LoadingScreen.LoadingScreen_C.GetTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* ULoadingScreen_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.GetTextBlock");

	ULoadingScreen_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LoadingScreen.LoadingScreen_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText ULoadingScreen_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.GetText_1");

	ULoadingScreen_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LoadingScreen.LoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ULoadingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.Construct");

	ULoadingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoadingScreen.LoadingScreen_C.ExecuteUbergraph_LoadingScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoadingScreen_C::ExecuteUbergraph_LoadingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.ExecuteUbergraph_LoadingScreen");

	ULoadingScreen_C_ExecuteUbergraph_LoadingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
