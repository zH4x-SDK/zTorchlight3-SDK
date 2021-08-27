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

// Function Missile_Forged_ShootCannon.Missile_Forged_ShootCannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMissile_Forged_ShootCannon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_Forged_ShootCannon.Missile_Forged_ShootCannon_C.ReceiveBeginPlay");

	AMissile_Forged_ShootCannon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Missile_Forged_ShootCannon.Missile_Forged_ShootCannon_C.OnMissileLaunched
// (Event, Protected, BlueprintEvent)
void AMissile_Forged_ShootCannon_C::OnMissileLaunched()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_Forged_ShootCannon.Missile_Forged_ShootCannon_C.OnMissileLaunched");

	AMissile_Forged_ShootCannon_C_OnMissileLaunched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Missile_Forged_ShootCannon.Missile_Forged_ShootCannon_C.ExecuteUbergraph_Missile_Forged_ShootCannon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMissile_Forged_ShootCannon_C::ExecuteUbergraph_Missile_Forged_ShootCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_Forged_ShootCannon.Missile_Forged_ShootCannon_C.ExecuteUbergraph_Missile_Forged_ShootCannon");

	AMissile_Forged_ShootCannon_C_ExecuteUbergraph_Missile_Forged_ShootCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
