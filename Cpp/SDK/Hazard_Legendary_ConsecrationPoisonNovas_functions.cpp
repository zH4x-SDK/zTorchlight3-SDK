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

// Function Hazard_Legendary_ConsecrationPoisonNovas.Hazard_Legendary_ConsecrationPoisonNovas_C.OnPulse
// (Event, Protected, BlueprintEvent)
void AHazard_Legendary_ConsecrationPoisonNovas_C::OnPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Legendary_ConsecrationPoisonNovas.Hazard_Legendary_ConsecrationPoisonNovas_C.OnPulse");

	AHazard_Legendary_ConsecrationPoisonNovas_C_OnPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hazard_Legendary_ConsecrationPoisonNovas.Hazard_Legendary_ConsecrationPoisonNovas_C.ExecuteUbergraph_Hazard_Legendary_ConsecrationPoisonNovas
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHazard_Legendary_ConsecrationPoisonNovas_C::ExecuteUbergraph_Hazard_Legendary_ConsecrationPoisonNovas(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Legendary_ConsecrationPoisonNovas.Hazard_Legendary_ConsecrationPoisonNovas_C.ExecuteUbergraph_Hazard_Legendary_ConsecrationPoisonNovas");

	AHazard_Legendary_ConsecrationPoisonNovas_C_ExecuteUbergraph_Hazard_Legendary_ConsecrationPoisonNovas_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
