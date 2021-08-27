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

// Function EnchantingAffixPip.EnchantingAffixPip_C.GetSlotFilledIcon
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UEnchantingAffixPip_C::GetSlotFilledIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnchantingAffixPip.EnchantingAffixPip_C.GetSlotFilledIcon");

	UEnchantingAffixPip_C_GetSlotFilledIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EnchantingAffixPip.EnchantingAffixPip_C.BlueprintSetIsHighlighted
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsHighlighted                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEnchantingAffixPip_C::BlueprintSetIsHighlighted(bool bIsHighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnchantingAffixPip.EnchantingAffixPip_C.BlueprintSetIsHighlighted");

	UEnchantingAffixPip_C_BlueprintSetIsHighlighted_Params params;
	params.bIsHighlighted = bIsHighlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EnchantingAffixPip.EnchantingAffixPip_C.ExecuteUbergraph_EnchantingAffixPip
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEnchantingAffixPip_C::ExecuteUbergraph_EnchantingAffixPip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnchantingAffixPip.EnchantingAffixPip_C.ExecuteUbergraph_EnchantingAffixPip");

	UEnchantingAffixPip_C_ExecuteUbergraph_EnchantingAffixPip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
