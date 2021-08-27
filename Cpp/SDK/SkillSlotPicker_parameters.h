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

// Function SkillSlotPicker.SkillSlotPicker_C.GetIconImage
struct USkillSlotPicker_C_GetIconImage_Params
{
	class UAsyncImage*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillSlotPicker.SkillSlotPicker_C.Get_LockNumber_Text_1
struct USkillSlotPicker_C_Get_LockNumber_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SkillSlotPicker.SkillSlotPicker_C.Get_Lock_Visibility_1
struct USkillSlotPicker_C_Get_Lock_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillSlotPicker.SkillSlotPicker_C.GetDescriptionAnchor
struct USkillSlotPicker_C_GetDescriptionAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillSlotPicker.SkillSlotPicker_C.OnMouseButtonDown
struct USkillSlotPicker_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SkillSlotPicker.SkillSlotPicker_C.GetSkillHotkey
struct USkillSlotPicker_C_GetSkillHotkey_Params
{
	class USkillHotkey*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
