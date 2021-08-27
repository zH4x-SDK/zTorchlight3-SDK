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

// Function Missile_Scout.Missile_Scout_C.OnMissileDidDamage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMissile_Scout_C::OnMissileDidDamage(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_Scout.Missile_Scout_C.OnMissileDidDamage");

	AMissile_Scout_C_OnMissileDidDamage_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Missile_Scout.Missile_Scout_C.OnMissileLaunched
// (Event, Protected, BlueprintEvent)
void AMissile_Scout_C::OnMissileLaunched()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_Scout.Missile_Scout_C.OnMissileLaunched");

	AMissile_Scout_C_OnMissileLaunched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Missile_Scout.Missile_Scout_C.ExecuteUbergraph_Missile_Scout
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMissile_Scout_C::ExecuteUbergraph_Missile_Scout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_Scout.Missile_Scout_C.ExecuteUbergraph_Missile_Scout");

	AMissile_Scout_C_ExecuteUbergraph_Missile_Scout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
