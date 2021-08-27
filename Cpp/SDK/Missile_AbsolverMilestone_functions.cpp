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

// Function Missile_AbsolverMilestone.Missile_AbsolverMilestone_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)
void AMissile_AbsolverMilestone_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_AbsolverMilestone.Missile_AbsolverMilestone_C.NewFunction_1");

	AMissile_AbsolverMilestone_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Missile_AbsolverMilestone.Missile_AbsolverMilestone_C.OnMissileDidDamage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMissile_AbsolverMilestone_C::OnMissileDidDamage(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_AbsolverMilestone.Missile_AbsolverMilestone_C.OnMissileDidDamage");

	AMissile_AbsolverMilestone_C_OnMissileDidDamage_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Missile_AbsolverMilestone.Missile_AbsolverMilestone_C.ExecuteUbergraph_Missile_AbsolverMilestone
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMissile_AbsolverMilestone_C::ExecuteUbergraph_Missile_AbsolverMilestone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_AbsolverMilestone.Missile_AbsolverMilestone_C.ExecuteUbergraph_Missile_AbsolverMilestone");

	AMissile_AbsolverMilestone_C_ExecuteUbergraph_Missile_AbsolverMilestone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
