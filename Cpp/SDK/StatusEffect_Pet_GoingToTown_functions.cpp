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

// Function StatusEffect_Pet_GoingToTown.StatusEffect_Pet_GoingToTown_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Pet_GoingToTown_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Pet_GoingToTown.StatusEffect_Pet_GoingToTown_C.OnPreApply");

	UStatusEffect_Pet_GoingToTown_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Pet_GoingToTown.StatusEffect_Pet_GoingToTown_C.ExecuteUbergraph_StatusEffect_Pet_GoingToTown
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Pet_GoingToTown_C::ExecuteUbergraph_StatusEffect_Pet_GoingToTown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Pet_GoingToTown.StatusEffect_Pet_GoingToTown_C.ExecuteUbergraph_StatusEffect_Pet_GoingToTown");

	UStatusEffect_Pet_GoingToTown_C_ExecuteUbergraph_StatusEffect_Pet_GoingToTown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
