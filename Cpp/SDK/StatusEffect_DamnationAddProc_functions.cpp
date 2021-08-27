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

// Function StatusEffect_DamnationAddProc.StatusEffect_DamnationAddProc_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_DamnationAddProc_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_DamnationAddProc.StatusEffect_DamnationAddProc_C.OnPreApply");

	UStatusEffect_DamnationAddProc_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_DamnationAddProc.StatusEffect_DamnationAddProc_C.ExecuteUbergraph_StatusEffect_DamnationAddProc
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_DamnationAddProc_C::ExecuteUbergraph_StatusEffect_DamnationAddProc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_DamnationAddProc.StatusEffect_DamnationAddProc_C.ExecuteUbergraph_StatusEffect_DamnationAddProc");

	UStatusEffect_DamnationAddProc_C_ExecuteUbergraph_StatusEffect_DamnationAddProc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
