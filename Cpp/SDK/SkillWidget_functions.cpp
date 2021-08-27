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

// Function SkillWidget.SkillWidget_C.GetDisabledByHotkeyOverlay
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* USkillWidget_C::GetDisabledByHotkeyOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillWidget.SkillWidget_C.GetDisabledByHotkeyOverlay");

	USkillWidget_C_GetDisabledByHotkeyOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillWidget.SkillWidget_C.GetSkillActiveWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillActiveWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillActiveWidget* USkillWidget_C::GetSkillActiveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillWidget.SkillWidget_C.GetSkillActiveWidget");

	USkillWidget_C_GetSkillActiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillWidget.SkillWidget_C.GetDescriptionAnchor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* USkillWidget_C::GetDescriptionAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillWidget.SkillWidget_C.GetDescriptionAnchor");

	USkillWidget_C_GetDescriptionAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillWidget.SkillWidget_C.GetCooldownText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText USkillWidget_C::GetCooldownText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillWidget.SkillWidget_C.GetCooldownText");

	USkillWidget_C_GetCooldownText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillWidget.SkillWidget_C.GetSkillHotkey
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillHotkey*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillHotkey* USkillWidget_C::GetSkillHotkey()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillWidget.SkillWidget_C.GetSkillHotkey");

	USkillWidget_C_GetSkillHotkey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillWidget.SkillWidget_C.GetCannotUseSkillOverlay
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* USkillWidget_C::GetCannotUseSkillOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillWidget.SkillWidget_C.GetCannotUseSkillOverlay");

	USkillWidget_C_GetCannotUseSkillOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillWidget.SkillWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USkillWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillWidget.SkillWidget_C.PreConstruct");

	USkillWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillWidget.SkillWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillWidget.SkillWidget_C.OnAnimationFinished");

	USkillWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillWidget.SkillWidget_C.ExecuteUbergraph_SkillWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillWidget_C::ExecuteUbergraph_SkillWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillWidget.SkillWidget_C.ExecuteUbergraph_SkillWidget");

	USkillWidget_C_ExecuteUbergraph_SkillWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
