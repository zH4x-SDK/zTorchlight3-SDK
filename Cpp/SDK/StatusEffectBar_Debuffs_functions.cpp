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

// Function StatusEffectBar_Debuffs.StatusEffectBar_Debuffs_C.GetStatusEffectListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatusEffectListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatusEffectListWidget* UStatusEffectBar_Debuffs_C::GetStatusEffectListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectBar_Debuffs.StatusEffectBar_Debuffs_C.GetStatusEffectListWidget");

	UStatusEffectBar_Debuffs_C_GetStatusEffectListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
