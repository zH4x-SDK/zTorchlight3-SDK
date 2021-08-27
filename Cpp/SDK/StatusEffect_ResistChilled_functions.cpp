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

// Function StatusEffect_ResistChilled.StatusEffect_ResistChilled_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_ResistChilled_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ResistChilled.StatusEffect_ResistChilled_C.OnPreApply");

	UStatusEffect_ResistChilled_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_ResistChilled.StatusEffect_ResistChilled_C.OnEventTimerTick
// (Event, Public, BlueprintEvent)
void UStatusEffect_ResistChilled_C::OnEventTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ResistChilled.StatusEffect_ResistChilled_C.OnEventTimerTick");

	UStatusEffect_ResistChilled_C_OnEventTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_ResistChilled.StatusEffect_ResistChilled_C.ExecuteUbergraph_StatusEffect_ResistChilled
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_ResistChilled_C::ExecuteUbergraph_StatusEffect_ResistChilled(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_ResistChilled.StatusEffect_ResistChilled_C.ExecuteUbergraph_StatusEffect_ResistChilled");

	UStatusEffect_ResistChilled_C_ExecuteUbergraph_StatusEffect_ResistChilled_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
