#pragma once

// Name: Torchlight3, Version: 4.26.1


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

// Function SkillWidget.SkillWidget_C.GetDisabledByHotkeyOverlay
struct USkillWidget_C_GetDisabledByHotkeyOverlay_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillWidget.SkillWidget_C.GetSkillActiveWidget
struct USkillWidget_C_GetSkillActiveWidget_Params
{
	class USkillActiveWidget*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillWidget.SkillWidget_C.GetDescriptionAnchor
struct USkillWidget_C_GetDescriptionAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillWidget.SkillWidget_C.GetCooldownText
struct USkillWidget_C_GetCooldownText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SkillWidget.SkillWidget_C.GetSkillHotkey
struct USkillWidget_C_GetSkillHotkey_Params
{
	class USkillHotkey*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillWidget.SkillWidget_C.GetCannotUseSkillOverlay
struct USkillWidget_C_GetCannotUseSkillOverlay_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillWidget.SkillWidget_C.PreConstruct
struct USkillWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SkillWidget.SkillWidget_C.OnAnimationFinished
struct USkillWidget_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillWidget.SkillWidget_C.ExecuteUbergraph_SkillWidget
struct USkillWidget_C_ExecuteUbergraph_SkillWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
