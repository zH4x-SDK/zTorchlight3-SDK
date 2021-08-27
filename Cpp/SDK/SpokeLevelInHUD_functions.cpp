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

// Function SpokeLevelInHUD.SpokeLevelInHUD_C.GetLevelProgressTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* USpokeLevelInHUD_C::GetLevelProgressTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpokeLevelInHUD.SpokeLevelInHUD_C.GetLevelProgressTextBlock");

	USpokeLevelInHUD_C_GetLevelProgressTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SpokeLevelInHUD.SpokeLevelInHUD_C.GetXPBar
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UProgressBar*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UProgressBar* USpokeLevelInHUD_C::GetXPBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpokeLevelInHUD.SpokeLevelInHUD_C.GetXPBar");

	USpokeLevelInHUD_C_GetXPBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SpokeLevelInHUD.SpokeLevelInHUD_C.GetLevelUpAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* USpokeLevelInHUD_C::GetLevelUpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpokeLevelInHUD.SpokeLevelInHUD_C.GetLevelUpAnimation");

	USpokeLevelInHUD_C_GetLevelUpAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SpokeLevelInHUD.SpokeLevelInHUD_C.GetLevelText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* USpokeLevelInHUD_C::GetLevelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpokeLevelInHUD.SpokeLevelInHUD_C.GetLevelText");

	USpokeLevelInHUD_C_GetLevelText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SpokeLevelInHUD.SpokeLevelInHUD_C.GetIconImage
// (BlueprintCallable, BlueprintEvent, Const)
void USpokeLevelInHUD_C::GetIconImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpokeLevelInHUD.SpokeLevelInHUD_C.GetIconImage");

	USpokeLevelInHUD_C_GetIconImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
