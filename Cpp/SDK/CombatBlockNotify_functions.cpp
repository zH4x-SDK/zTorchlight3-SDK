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

// Function CombatBlockNotify.CombatBlockNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCombatBlockNotify_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatBlockNotify.CombatBlockNotify_C.Construct");

	UCombatBlockNotify_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CombatBlockNotify.CombatBlockNotify_C.ExecuteUbergraph_CombatBlockNotify
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCombatBlockNotify_C::ExecuteUbergraph_CombatBlockNotify(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatBlockNotify.CombatBlockNotify_C.ExecuteUbergraph_CombatBlockNotify");

	UCombatBlockNotify_C_ExecuteUbergraph_CombatBlockNotify_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
