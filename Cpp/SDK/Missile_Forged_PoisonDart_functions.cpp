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

// Function Missile_Forged_PoisonDart.Missile_Forged_PoisonDart_C.DoHit
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bBlockingHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMissile_Forged_PoisonDart_C::DoHit(class AActor* Actor, bool bBlockingHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_Forged_PoisonDart.Missile_Forged_PoisonDart_C.DoHit");

	AMissile_Forged_PoisonDart_C_DoHit_Params params;
	params.Actor = Actor;
	params.bBlockingHit = bBlockingHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Missile_Forged_PoisonDart.Missile_Forged_PoisonDart_C.ExecuteUbergraph_Missile_Forged_PoisonDart
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMissile_Forged_PoisonDart_C::ExecuteUbergraph_Missile_Forged_PoisonDart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_Forged_PoisonDart.Missile_Forged_PoisonDart_C.ExecuteUbergraph_Missile_Forged_PoisonDart");

	AMissile_Forged_PoisonDart_C_ExecuteUbergraph_Missile_Forged_PoisonDart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
