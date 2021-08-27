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

// Function RelicBarTooltip.RelicBarTooltip_C.GetTraitNameBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* URelicBarTooltip_C::GetTraitNameBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicBarTooltip.RelicBarTooltip_C.GetTraitNameBlock");

	URelicBarTooltip_C_GetTraitNameBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RelicBarTooltip.RelicBarTooltip_C.GetCurrentTraitText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UActiveTraitTextBlock*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UActiveTraitTextBlock* URelicBarTooltip_C::GetCurrentTraitText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicBarTooltip.RelicBarTooltip_C.GetCurrentTraitText");

	URelicBarTooltip_C_GetCurrentTraitText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RelicBarTooltip.RelicBarTooltip_C.GetMaxTraitText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTraitTextBlock*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTraitTextBlock* URelicBarTooltip_C::GetMaxTraitText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicBarTooltip.RelicBarTooltip_C.GetMaxTraitText");

	URelicBarTooltip_C_GetMaxTraitText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
