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

// Function DungeonSingleRuleDetriment.DungeonSingleRuleDetriment_C.GetAffixTextDescriptionBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* UDungeonSingleRuleDetriment_C::GetAffixTextDescriptionBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonSingleRuleDetriment.DungeonSingleRuleDetriment_C.GetAffixTextDescriptionBlock");

	UDungeonSingleRuleDetriment_C_GetAffixTextDescriptionBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonSingleRuleDetriment.DungeonSingleRuleDetriment_C.GetAffixTitleTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* UDungeonSingleRuleDetriment_C::GetAffixTitleTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonSingleRuleDetriment.DungeonSingleRuleDetriment_C.GetAffixTitleTextBlock");

	UDungeonSingleRuleDetriment_C_GetAffixTitleTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
