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

// Function PlayerNameplate.PlayerNameplate_C.GetDungeonDecorativeWidgets
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UWidget*>         ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<class UWidget*> UPlayerNameplate_C::GetDungeonDecorativeWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameplate.PlayerNameplate_C.GetDungeonDecorativeWidgets");

	UPlayerNameplate_C_GetDungeonDecorativeWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerNameplate.PlayerNameplate_C.GetDifficultyIcon
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UPlayerNameplate_C::GetDifficultyIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameplate.PlayerNameplate_C.GetDifficultyIcon");

	UPlayerNameplate_C_GetDifficultyIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerNameplate.PlayerNameplate_C.GetLevelText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPlayerNameplate_C::GetLevelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameplate.PlayerNameplate_C.GetLevelText");

	UPlayerNameplate_C_GetLevelText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerNameplate.PlayerNameplate_C.GetHardcoreWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UPlayerNameplate_C::GetHardcoreWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameplate.PlayerNameplate_C.GetHardcoreWidget");

	UPlayerNameplate_C_GetHardcoreWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerNameplate.PlayerNameplate_C.GetAccountNameText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPlayerNameplate_C::GetAccountNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameplate.PlayerNameplate_C.GetAccountNameText");

	UPlayerNameplate_C_GetAccountNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerNameplate.PlayerNameplate_C.GetDisplayNameText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPlayerNameplate_C::GetDisplayNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameplate.PlayerNameplate_C.GetDisplayNameText");

	UPlayerNameplate_C_GetDisplayNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
