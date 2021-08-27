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

// Function CombatCriticalDamageNotify.CombatCriticalDamageNotify_C.GetTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UCombatCriticalDamageNotify_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatCriticalDamageNotify.CombatCriticalDamageNotify_C.GetTextBlock");

	UCombatCriticalDamageNotify_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CombatCriticalDamageNotify.CombatCriticalDamageNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCombatCriticalDamageNotify_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatCriticalDamageNotify.CombatCriticalDamageNotify_C.Construct");

	UCombatCriticalDamageNotify_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CombatCriticalDamageNotify.CombatCriticalDamageNotify_C.ExecuteUbergraph_CombatCriticalDamageNotify
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCombatCriticalDamageNotify_C::ExecuteUbergraph_CombatCriticalDamageNotify(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatCriticalDamageNotify.CombatCriticalDamageNotify_C.ExecuteUbergraph_CombatCriticalDamageNotify");

	UCombatCriticalDamageNotify_C_ExecuteUbergraph_CombatCriticalDamageNotify_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
