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

// Function EnchantingAffixWidgetSmall.EnchantingAffixWidgetSmall_C.GetSlotFilledIcon
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UEnchantingAffixWidgetSmall_C::GetSlotFilledIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnchantingAffixWidgetSmall.EnchantingAffixWidgetSmall_C.GetSlotFilledIcon");

	UEnchantingAffixWidgetSmall_C_GetSlotFilledIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EnchantingAffixWidgetSmall.EnchantingAffixWidgetSmall_C.BlueprintPlayEnchantHighlightAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsDisenchant                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEnchantingAffixWidgetSmall_C::BlueprintPlayEnchantHighlightAnimation(bool bIsDisenchant)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnchantingAffixWidgetSmall.EnchantingAffixWidgetSmall_C.BlueprintPlayEnchantHighlightAnimation");

	UEnchantingAffixWidgetSmall_C_BlueprintPlayEnchantHighlightAnimation_Params params;
	params.bIsDisenchant = bIsDisenchant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EnchantingAffixWidgetSmall.EnchantingAffixWidgetSmall_C.BlueprintSetIsHighlighted
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsHighlighted                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEnchantingAffixWidgetSmall_C::BlueprintSetIsHighlighted(bool bIsHighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnchantingAffixWidgetSmall.EnchantingAffixWidgetSmall_C.BlueprintSetIsHighlighted");

	UEnchantingAffixWidgetSmall_C_BlueprintSetIsHighlighted_Params params;
	params.bIsHighlighted = bIsHighlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EnchantingAffixWidgetSmall.EnchantingAffixWidgetSmall_C.BlueprintRefresh
// (Event, Public, BlueprintEvent)
void UEnchantingAffixWidgetSmall_C::BlueprintRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnchantingAffixWidgetSmall.EnchantingAffixWidgetSmall_C.BlueprintRefresh");

	UEnchantingAffixWidgetSmall_C_BlueprintRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EnchantingAffixWidgetSmall.EnchantingAffixWidgetSmall_C.ExecuteUbergraph_EnchantingAffixWidgetSmall
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEnchantingAffixWidgetSmall_C::ExecuteUbergraph_EnchantingAffixWidgetSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnchantingAffixWidgetSmall.EnchantingAffixWidgetSmall_C.ExecuteUbergraph_EnchantingAffixWidgetSmall");

	UEnchantingAffixWidgetSmall_C_ExecuteUbergraph_EnchantingAffixWidgetSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
