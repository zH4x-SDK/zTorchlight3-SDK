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

// Function DungeonSingleRuleBenefit.DungeonSingleRuleBenefit_C.GetAffixTextDescriptionBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* UDungeonSingleRuleBenefit_C::GetAffixTextDescriptionBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonSingleRuleBenefit.DungeonSingleRuleBenefit_C.GetAffixTextDescriptionBlock");

	UDungeonSingleRuleBenefit_C_GetAffixTextDescriptionBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonSingleRuleBenefit.DungeonSingleRuleBenefit_C.GetAffixTitleTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* UDungeonSingleRuleBenefit_C::GetAffixTitleTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonSingleRuleBenefit.DungeonSingleRuleBenefit_C.GetAffixTitleTextBlock");

	UDungeonSingleRuleBenefit_C_GetAffixTitleTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
