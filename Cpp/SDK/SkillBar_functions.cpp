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

// Function SkillBar.SkillBar_C.GetPortalSkillContainerWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* USkillBar_C::GetPortalSkillContainerWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillBar.SkillBar_C.GetPortalSkillContainerWidget");

	USkillBar_C_GetPortalSkillContainerWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillBar.SkillBar_C.GetPortalSkillWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillWidget* USkillBar_C::GetPortalSkillWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillBar.SkillBar_C.GetPortalSkillWidget");

	USkillBar_C_GetPortalSkillWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillBar.SkillBar_C.GetAllSkillWidgets
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class USkillWidget*>    ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<class USkillWidget*> USkillBar_C::GetAllSkillWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillBar.SkillBar_C.GetAllSkillWidgets");

	USkillBar_C_GetAllSkillWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillBar.SkillBar_C.GetEmberWeaponWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUserWidget* USkillBar_C::GetEmberWeaponWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillBar.SkillBar_C.GetEmberWeaponWidget");

	USkillBar_C_GetEmberWeaponWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillBar.SkillBar_C.GetEmberWeaponPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* USkillBar_C::GetEmberWeaponPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillBar.SkillBar_C.GetEmberWeaponPanel");

	USkillBar_C_GetEmberWeaponPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillBar.SkillBar_C.GetPotionWidgetPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* USkillBar_C::GetPotionWidgetPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillBar.SkillBar_C.GetPotionWidgetPanel");

	USkillBar_C_GetPotionWidgetPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillBar.SkillBar_C.GetPotionWidgetClass
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UClass*                  InPotion                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* USkillBar_C::GetPotionWidgetClass(class UClass* InPotion)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillBar.SkillBar_C.GetPotionWidgetClass");

	USkillBar_C_GetPotionWidgetClass_Params params;
	params.InPotion = InPotion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillBar.SkillBar_C.GetResourceBarPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* USkillBar_C::GetResourceBarPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillBar.SkillBar_C.GetResourceBarPanel");

	USkillBar_C_GetResourceBarPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillBar.SkillBar_C.GetStatusEffectMessage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMessageWidget*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMessageWidget* USkillBar_C::GetStatusEffectMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillBar.SkillBar_C.GetStatusEffectMessage");

	USkillBar_C_GetStatusEffectMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillBar.SkillBar_C.GetHealthBar
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UActiveTraitBarWidget*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UActiveTraitBarWidget* USkillBar_C::GetHealthBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillBar.SkillBar_C.GetHealthBar");

	USkillBar_C_GetHealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
