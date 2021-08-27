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

// Function FloatingGamepadButtonAction.FloatingGamepadButtonAction_C.GetTextBlock
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UFloatingGamepadButtonAction_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloatingGamepadButtonAction.FloatingGamepadButtonAction_C.GetTextBlock");

	UFloatingGamepadButtonAction_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FloatingGamepadButtonAction.FloatingGamepadButtonAction_C.GetButtonImage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UHotkeyWidget*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UHotkeyWidget* UFloatingGamepadButtonAction_C::GetButtonImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloatingGamepadButtonAction.FloatingGamepadButtonAction_C.GetButtonImage");

	UFloatingGamepadButtonAction_C_GetButtonImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
