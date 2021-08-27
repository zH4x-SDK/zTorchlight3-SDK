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

// Function SkillBar.SkillBar_C.GetPortalSkillContainerWidget
struct USkillBar_C_GetPortalSkillContainerWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillBar.SkillBar_C.GetPortalSkillWidget
struct USkillBar_C_GetPortalSkillWidget_Params
{
	class USkillWidget*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillBar.SkillBar_C.GetAllSkillWidgets
struct USkillBar_C_GetAllSkillWidgets_Params
{
	TArray<class USkillWidget*>                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// Function SkillBar.SkillBar_C.GetEmberWeaponWidget
struct USkillBar_C_GetEmberWeaponWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillBar.SkillBar_C.GetEmberWeaponPanel
struct USkillBar_C_GetEmberWeaponPanel_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillBar.SkillBar_C.GetPotionWidgetPanel
struct USkillBar_C_GetPotionWidgetPanel_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillBar.SkillBar_C.GetPotionWidgetClass
struct USkillBar_C_GetPotionWidgetClass_Params
{
	class UClass*                                      InPotion;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function SkillBar.SkillBar_C.GetResourceBarPanel
struct USkillBar_C_GetResourceBarPanel_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillBar.SkillBar_C.GetStatusEffectMessage
struct USkillBar_C_GetStatusEffectMessage_Params
{
	class UMessageWidget*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillBar.SkillBar_C.GetHealthBar
struct USkillBar_C_GetHealthBar_Params
{
	class UActiveTraitBarWidget*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
