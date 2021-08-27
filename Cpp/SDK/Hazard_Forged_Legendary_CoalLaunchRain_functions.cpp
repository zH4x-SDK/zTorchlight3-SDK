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

// Function Hazard_Forged_Legendary_CoalLaunchRain.Hazard_Forged_Legendary_CoalLaunchRain_C.OnPulse
// (Event, Protected, BlueprintEvent)
void AHazard_Forged_Legendary_CoalLaunchRain_C::OnPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Forged_Legendary_CoalLaunchRain.Hazard_Forged_Legendary_CoalLaunchRain_C.OnPulse");

	AHazard_Forged_Legendary_CoalLaunchRain_C_OnPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hazard_Forged_Legendary_CoalLaunchRain.Hazard_Forged_Legendary_CoalLaunchRain_C.ExecuteUbergraph_Hazard_Forged_Legendary_CoalLaunchRain
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHazard_Forged_Legendary_CoalLaunchRain_C::ExecuteUbergraph_Hazard_Forged_Legendary_CoalLaunchRain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Forged_Legendary_CoalLaunchRain.Hazard_Forged_Legendary_CoalLaunchRain_C.ExecuteUbergraph_Hazard_Forged_Legendary_CoalLaunchRain");

	AHazard_Forged_Legendary_CoalLaunchRain_C_ExecuteUbergraph_Hazard_Forged_Legendary_CoalLaunchRain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
