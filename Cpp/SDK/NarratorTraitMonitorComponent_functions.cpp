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

// Function NarratorTraitMonitorComponent.NarratorTraitMonitorComponent_C.OnRuleTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNarratorTraitMonitorComponent_C::OnRuleTriggered(const struct FName& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function NarratorTraitMonitorComponent.NarratorTraitMonitorComponent_C.OnRuleTriggered");

	UNarratorTraitMonitorComponent_C_OnRuleTriggered_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NarratorTraitMonitorComponent.NarratorTraitMonitorComponent_C.ExecuteUbergraph_NarratorTraitMonitorComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNarratorTraitMonitorComponent_C::ExecuteUbergraph_NarratorTraitMonitorComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NarratorTraitMonitorComponent.NarratorTraitMonitorComponent_C.ExecuteUbergraph_NarratorTraitMonitorComponent");

	UNarratorTraitMonitorComponent_C_ExecuteUbergraph_NarratorTraitMonitorComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
