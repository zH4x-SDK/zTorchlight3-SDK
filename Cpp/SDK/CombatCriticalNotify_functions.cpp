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

// Function CombatCriticalNotify.CombatCriticalNotify_C.GetTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UCombatCriticalNotify_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatCriticalNotify.CombatCriticalNotify_C.GetTextBlock");

	UCombatCriticalNotify_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CombatCriticalNotify.CombatCriticalNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCombatCriticalNotify_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatCriticalNotify.CombatCriticalNotify_C.Construct");

	UCombatCriticalNotify_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CombatCriticalNotify.CombatCriticalNotify_C.ExecuteUbergraph_CombatCriticalNotify
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCombatCriticalNotify_C::ExecuteUbergraph_CombatCriticalNotify(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatCriticalNotify.CombatCriticalNotify_C.ExecuteUbergraph_CombatCriticalNotify");

	UCombatCriticalNotify_C_ExecuteUbergraph_CombatCriticalNotify_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
