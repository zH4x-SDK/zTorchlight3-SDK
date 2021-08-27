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

// Function SkillHotkeyWidget.SkillHotkeyWidget_C.GetBGButton
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UButton* USkillHotkeyWidget_C::GetBGButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillHotkeyWidget.SkillHotkeyWidget_C.GetBGButton");

	USkillHotkeyWidget_C_GetBGButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillHotkeyWidget.SkillHotkeyWidget_C.GetTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* USkillHotkeyWidget_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillHotkeyWidget.SkillHotkeyWidget_C.GetTextBlock");

	USkillHotkeyWidget_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillHotkeyWidget.SkillHotkeyWidget_C.PlayCooldownPulseAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
void USkillHotkeyWidget_C::PlayCooldownPulseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillHotkeyWidget.SkillHotkeyWidget_C.PlayCooldownPulseAnimation");

	USkillHotkeyWidget_C_PlayCooldownPulseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillHotkeyWidget.SkillHotkeyWidget_C.HideCooldownPulseIndicator
// (Event, Public, BlueprintCallable, BlueprintEvent)
void USkillHotkeyWidget_C::HideCooldownPulseIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillHotkeyWidget.SkillHotkeyWidget_C.HideCooldownPulseIndicator");

	USkillHotkeyWidget_C_HideCooldownPulseIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillHotkeyWidget.SkillHotkeyWidget_C.ExecuteUbergraph_SkillHotkeyWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillHotkeyWidget_C::ExecuteUbergraph_SkillHotkeyWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillHotkeyWidget.SkillHotkeyWidget_C.ExecuteUbergraph_SkillHotkeyWidget");

	USkillHotkeyWidget_C_ExecuteUbergraph_SkillHotkeyWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
