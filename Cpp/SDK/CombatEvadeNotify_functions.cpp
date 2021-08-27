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

// Function CombatEvadeNotify.CombatEvadeNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCombatEvadeNotify_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatEvadeNotify.CombatEvadeNotify_C.Construct");

	UCombatEvadeNotify_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CombatEvadeNotify.CombatEvadeNotify_C.ExecuteUbergraph_CombatEvadeNotify
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCombatEvadeNotify_C::ExecuteUbergraph_CombatEvadeNotify(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatEvadeNotify.CombatEvadeNotify_C.ExecuteUbergraph_CombatEvadeNotify");

	UCombatEvadeNotify_C_ExecuteUbergraph_CombatEvadeNotify_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
