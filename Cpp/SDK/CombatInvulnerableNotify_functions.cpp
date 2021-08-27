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

// Function CombatInvulnerableNotify.CombatInvulnerableNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCombatInvulnerableNotify_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatInvulnerableNotify.CombatInvulnerableNotify_C.Construct");

	UCombatInvulnerableNotify_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CombatInvulnerableNotify.CombatInvulnerableNotify_C.ExecuteUbergraph_CombatInvulnerableNotify
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCombatInvulnerableNotify_C::ExecuteUbergraph_CombatInvulnerableNotify(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatInvulnerableNotify.CombatInvulnerableNotify_C.ExecuteUbergraph_CombatInvulnerableNotify");

	UCombatInvulnerableNotify_C_ExecuteUbergraph_CombatInvulnerableNotify_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
