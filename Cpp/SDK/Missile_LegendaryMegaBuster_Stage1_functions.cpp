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

// Function Missile_LegendaryMegaBuster_Stage1.Missile_LegendaryMegaBuster_Stage1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMissile_LegendaryMegaBuster_Stage1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_LegendaryMegaBuster_Stage1.Missile_LegendaryMegaBuster_Stage1_C.ReceiveBeginPlay");

	AMissile_LegendaryMegaBuster_Stage1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Missile_LegendaryMegaBuster_Stage1.Missile_LegendaryMegaBuster_Stage1_C.ExecuteUbergraph_Missile_LegendaryMegaBuster_Stage1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMissile_LegendaryMegaBuster_Stage1_C::ExecuteUbergraph_Missile_LegendaryMegaBuster_Stage1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Missile_LegendaryMegaBuster_Stage1.Missile_LegendaryMegaBuster_Stage1_C.ExecuteUbergraph_Missile_LegendaryMegaBuster_Stage1");

	AMissile_LegendaryMegaBuster_Stage1_C_ExecuteUbergraph_Missile_LegendaryMegaBuster_Stage1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
