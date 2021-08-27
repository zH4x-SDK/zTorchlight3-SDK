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

// Function RelicActiveWidget.RelicActiveWidget_C.GetOnCooldownWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* URelicActiveWidget_C::GetOnCooldownWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicActiveWidget.RelicActiveWidget_C.GetOnCooldownWidget");

	URelicActiveWidget_C_GetOnCooldownWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RelicActiveWidget.RelicActiveWidget_C.GetCooldownProgress
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UProgressBar*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UProgressBar* URelicActiveWidget_C::GetCooldownProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicActiveWidget.RelicActiveWidget_C.GetCooldownProgress");

	URelicActiveWidget_C_GetCooldownProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RelicActiveWidget.RelicActiveWidget_C.GetCooldownTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* URelicActiveWidget_C::GetCooldownTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicActiveWidget.RelicActiveWidget_C.GetCooldownTextBlock");

	URelicActiveWidget_C_GetCooldownTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RelicActiveWidget.RelicActiveWidget_C.GetOffCooldownWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* URelicActiveWidget_C::GetOffCooldownWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicActiveWidget.RelicActiveWidget_C.GetOffCooldownWidget");

	URelicActiveWidget_C_GetOffCooldownWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RelicActiveWidget.RelicActiveWidget_C.GetOffCooldownAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* URelicActiveWidget_C::GetOffCooldownAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicActiveWidget.RelicActiveWidget_C.GetOffCooldownAnimation");

	URelicActiveWidget_C_GetOffCooldownAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RelicActiveWidget.RelicActiveWidget_C.GetSkillDisplay
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkillDisplayWidget*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillDisplayWidget* URelicActiveWidget_C::GetSkillDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicActiveWidget.RelicActiveWidget_C.GetSkillDisplay");

	URelicActiveWidget_C_GetSkillDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RelicActiveWidget.RelicActiveWidget_C.GetTooltipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* URelicActiveWidget_C::GetTooltipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicActiveWidget.RelicActiveWidget_C.GetTooltipWidget_1");

	URelicActiveWidget_C_GetTooltipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RelicActiveWidget.RelicActiveWidget_C.GetSkillHotkey
// (HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillHotkey*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillHotkey* URelicActiveWidget_C::GetSkillHotkey()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicActiveWidget.RelicActiveWidget_C.GetSkillHotkey");

	URelicActiveWidget_C_GetSkillHotkey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
