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

// Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.GetCooldownProgress
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UProgressBar*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UProgressBar* USkillActiveWidgetBlueprint_C::GetCooldownProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.GetCooldownProgress");

	USkillActiveWidgetBlueprint_C_GetCooldownProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.GetCooldownTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* USkillActiveWidgetBlueprint_C::GetCooldownTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.GetCooldownTextBlock");

	USkillActiveWidgetBlueprint_C_GetCooldownTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.GetChargesWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* USkillActiveWidgetBlueprint_C::GetChargesWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.GetChargesWidget");

	USkillActiveWidgetBlueprint_C_GetChargesWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.GetSkillDisplay
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkillDisplayWidget*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillDisplayWidget* USkillActiveWidgetBlueprint_C::GetSkillDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.GetSkillDisplay");

	USkillActiveWidgetBlueprint_C_GetSkillDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.GetTooltipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* USkillActiveWidgetBlueprint_C::GetTooltipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.GetTooltipWidget_1");

	USkillActiveWidgetBlueprint_C_GetTooltipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.GetSkillHotkey
// (HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillHotkey*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillHotkey* USkillActiveWidgetBlueprint_C::GetSkillHotkey()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.GetSkillHotkey");

	USkillActiveWidgetBlueprint_C_GetSkillHotkey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USkillActiveWidgetBlueprint_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.PreConstruct");

	USkillActiveWidgetBlueprint_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.ExecuteUbergraph_SkillActiveWidgetBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillActiveWidgetBlueprint_C::ExecuteUbergraph_SkillActiveWidgetBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C.ExecuteUbergraph_SkillActiveWidgetBlueprint");

	USkillActiveWidgetBlueprint_C_ExecuteUbergraph_SkillActiveWidgetBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
