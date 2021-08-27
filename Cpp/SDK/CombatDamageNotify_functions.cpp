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

// Function CombatDamageNotify.CombatDamageNotify_C.GetTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UCombatDamageNotify_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatDamageNotify.CombatDamageNotify_C.GetTextBlock");

	UCombatDamageNotify_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CombatDamageNotify.CombatDamageNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCombatDamageNotify_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatDamageNotify.CombatDamageNotify_C.Construct");

	UCombatDamageNotify_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CombatDamageNotify.CombatDamageNotify_C.ExecuteUbergraph_CombatDamageNotify
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCombatDamageNotify_C::ExecuteUbergraph_CombatDamageNotify(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatDamageNotify.CombatDamageNotify_C.ExecuteUbergraph_CombatDamageNotify");

	UCombatDamageNotify_C_ExecuteUbergraph_CombatDamageNotify_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
