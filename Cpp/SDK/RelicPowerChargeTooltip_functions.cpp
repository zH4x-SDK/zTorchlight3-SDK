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

// Function RelicPowerChargeTooltip.RelicPowerChargeTooltip_C.GetTraitNameBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* URelicPowerChargeTooltip_C::GetTraitNameBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicPowerChargeTooltip.RelicPowerChargeTooltip_C.GetTraitNameBlock");

	URelicPowerChargeTooltip_C_GetTraitNameBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RelicPowerChargeTooltip.RelicPowerChargeTooltip_C.GetCurrentTraitText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UActiveTraitTextBlock*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UActiveTraitTextBlock* URelicPowerChargeTooltip_C::GetCurrentTraitText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicPowerChargeTooltip.RelicPowerChargeTooltip_C.GetCurrentTraitText");

	URelicPowerChargeTooltip_C_GetCurrentTraitText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RelicPowerChargeTooltip.RelicPowerChargeTooltip_C.GetMaxTraitText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTraitTextBlock*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTraitTextBlock* URelicPowerChargeTooltip_C::GetMaxTraitText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicPowerChargeTooltip.RelicPowerChargeTooltip_C.GetMaxTraitText");

	URelicPowerChargeTooltip_C_GetMaxTraitText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
