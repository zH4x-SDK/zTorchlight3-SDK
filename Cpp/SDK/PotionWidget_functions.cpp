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

// Function PotionWidget.PotionWidget_C.GetNumPotionsText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* UPotionWidget_C::GetNumPotionsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotionWidget.PotionWidget_C.GetNumPotionsText");

	UPotionWidget_C_GetNumPotionsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PotionWidget.PotionWidget_C.GetDescriptionAnchor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UPotionWidget_C::GetDescriptionAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotionWidget.PotionWidget_C.GetDescriptionAnchor");

	UPotionWidget_C_GetDescriptionAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PotionWidget.PotionWidget_C.GetUseLastPotionAnimation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UPotionWidget_C::GetUseLastPotionAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotionWidget.PotionWidget_C.GetUseLastPotionAnimation");

	UPotionWidget_C_GetUseLastPotionAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PotionWidget.PotionWidget_C.GetUsePotionAnimation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UPotionWidget_C::GetUsePotionAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotionWidget.PotionWidget_C.GetUsePotionAnimation");

	UPotionWidget_C_GetUsePotionAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PotionWidget.PotionWidget_C.GetSkillHotkey
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillHotkey*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillHotkey* UPotionWidget_C::GetSkillHotkey()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotionWidget.PotionWidget_C.GetSkillHotkey");

	UPotionWidget_C_GetSkillHotkey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PotionWidget.PotionWidget_C.GetCannotUseSkillOverlay
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UPotionWidget_C::GetCannotUseSkillOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotionWidget.PotionWidget_C.GetCannotUseSkillOverlay");

	UPotionWidget_C_GetCannotUseSkillOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PotionWidget.PotionWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPotionWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PotionWidget.PotionWidget_C.PreConstruct");

	UPotionWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PotionWidget.PotionWidget_C.SetProgressBarColor
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass*                  Potion                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPotionWidget_C::SetProgressBarColor(class UClass* Potion)
{
	static auto fn = UObject::FindObject<UFunction>("Function PotionWidget.PotionWidget_C.SetProgressBarColor");

	UPotionWidget_C_SetProgressBarColor_Params params;
	params.Potion = Potion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PotionWidget.PotionWidget_C.ExecuteUbergraph_PotionWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPotionWidget_C::ExecuteUbergraph_PotionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PotionWidget.PotionWidget_C.ExecuteUbergraph_PotionWidget");

	UPotionWidget_C_ExecuteUbergraph_PotionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
