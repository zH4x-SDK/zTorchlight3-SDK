#pragma once

// Name: Torchlight3, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function GamepadButtonAction.GamepadButtonAction_C.GetHoldProgressBar
struct UGamepadButtonAction_C_GetHoldProgressBar_Params
{
	class UProgressBar*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GamepadButtonAction.GamepadButtonAction_C.GetTextBlock
struct UGamepadButtonAction_C_GetTextBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GamepadButtonAction.GamepadButtonAction_C.GetButtonImage
struct UGamepadButtonAction_C_GetButtonImage_Params
{
	class UHotkeyWidget*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
