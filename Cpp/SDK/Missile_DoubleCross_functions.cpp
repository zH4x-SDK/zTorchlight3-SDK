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

// Function Missile_DoubleCross.Missile_DoubleCross_C.OnMissileLaunched
// (Event, Protected, BlueprintEvent)
void AMissile_DoubleCross_C::OnMissileLaunched()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_DoubleCross.Missile_DoubleCross_C.OnMissileLaunched");

	AMissile_DoubleCross_C_OnMissileLaunched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Missile_DoubleCross.Missile_DoubleCross_C.ExecuteUbergraph_Missile_DoubleCross
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMissile_DoubleCross_C::ExecuteUbergraph_Missile_DoubleCross(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_DoubleCross.Missile_DoubleCross_C.ExecuteUbergraph_Missile_DoubleCross");

	AMissile_DoubleCross_C_ExecuteUbergraph_Missile_DoubleCross_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
