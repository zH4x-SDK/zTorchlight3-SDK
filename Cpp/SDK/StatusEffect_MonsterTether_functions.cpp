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

// Function StatusEffect_MonsterTether.StatusEffect_MonsterTether_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_MonsterTether_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_MonsterTether.StatusEffect_MonsterTether_C.OnPreApply");

	UStatusEffect_MonsterTether_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_MonsterTether.StatusEffect_MonsterTether_C.ExecuteUbergraph_StatusEffect_MonsterTether
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_MonsterTether_C::ExecuteUbergraph_StatusEffect_MonsterTether(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_MonsterTether.StatusEffect_MonsterTether_C.ExecuteUbergraph_StatusEffect_MonsterTether");

	UStatusEffect_MonsterTether_C_ExecuteUbergraph_StatusEffect_MonsterTether_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
