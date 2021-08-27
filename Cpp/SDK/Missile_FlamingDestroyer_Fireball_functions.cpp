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

// Function Missile_FlamingDestroyer_Fireball.Missile_FlamingDestroyer_Fireball_C.DoHit
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bBlockingHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMissile_FlamingDestroyer_Fireball_C::DoHit(class AActor* Actor, bool bBlockingHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_FlamingDestroyer_Fireball.Missile_FlamingDestroyer_Fireball_C.DoHit");

	AMissile_FlamingDestroyer_Fireball_C_DoHit_Params params;
	params.Actor = Actor;
	params.bBlockingHit = bBlockingHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Missile_FlamingDestroyer_Fireball.Missile_FlamingDestroyer_Fireball_C.ExecuteUbergraph_Missile_FlamingDestroyer_Fireball
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMissile_FlamingDestroyer_Fireball_C::ExecuteUbergraph_Missile_FlamingDestroyer_Fireball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_FlamingDestroyer_Fireball.Missile_FlamingDestroyer_Fireball_C.ExecuteUbergraph_Missile_FlamingDestroyer_Fireball");

	AMissile_FlamingDestroyer_Fireball_C_ExecuteUbergraph_Missile_FlamingDestroyer_Fireball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
