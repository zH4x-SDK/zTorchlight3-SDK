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

// Function DifficultyStatusEffectBase.DifficultyStatusEffectBase_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UDifficultyStatusEffectBase_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyStatusEffectBase.DifficultyStatusEffectBase_C.OnPreApply");

	UDifficultyStatusEffectBase_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DifficultyStatusEffectBase.DifficultyStatusEffectBase_C.ExecuteUbergraph_DifficultyStatusEffectBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDifficultyStatusEffectBase_C::ExecuteUbergraph_DifficultyStatusEffectBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyStatusEffectBase.DifficultyStatusEffectBase_C.ExecuteUbergraph_DifficultyStatusEffectBase");

	UDifficultyStatusEffectBase_C_ExecuteUbergraph_DifficultyStatusEffectBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
