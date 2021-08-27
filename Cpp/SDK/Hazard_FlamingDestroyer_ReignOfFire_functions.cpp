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

// Function Hazard_FlamingDestroyer_ReignOfFire.Hazard_FlamingDestroyer_ReignOfFire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHazard_FlamingDestroyer_ReignOfFire_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_FlamingDestroyer_ReignOfFire.Hazard_FlamingDestroyer_ReignOfFire_C.ReceiveBeginPlay");

	AHazard_FlamingDestroyer_ReignOfFire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hazard_FlamingDestroyer_ReignOfFire.Hazard_FlamingDestroyer_ReignOfFire_C.ExecuteUbergraph_Hazard_FlamingDestroyer_ReignOfFire
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHazard_FlamingDestroyer_ReignOfFire_C::ExecuteUbergraph_Hazard_FlamingDestroyer_ReignOfFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_FlamingDestroyer_ReignOfFire.Hazard_FlamingDestroyer_ReignOfFire_C.ExecuteUbergraph_Hazard_FlamingDestroyer_ReignOfFire");

	AHazard_FlamingDestroyer_ReignOfFire_C_ExecuteUbergraph_Hazard_FlamingDestroyer_ReignOfFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
