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

// Function GamepadButtonAction.GamepadButtonAction_C.GetHoldProgressBar
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UProgressBar*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UProgressBar* UGamepadButtonAction_C::GetHoldProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadButtonAction.GamepadButtonAction_C.GetHoldProgressBar");

	UGamepadButtonAction_C_GetHoldProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GamepadButtonAction.GamepadButtonAction_C.GetTextBlock
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UGamepadButtonAction_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadButtonAction.GamepadButtonAction_C.GetTextBlock");

	UGamepadButtonAction_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GamepadButtonAction.GamepadButtonAction_C.GetButtonImage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UHotkeyWidget*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UHotkeyWidget* UGamepadButtonAction_C::GetButtonImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadButtonAction.GamepadButtonAction_C.GetButtonImage");

	UGamepadButtonAction_C_GetButtonImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
