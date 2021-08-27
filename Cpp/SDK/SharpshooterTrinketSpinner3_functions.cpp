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

// Function SharpshooterTrinketSpinner3.SharpshooterTrinketSpinner3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USharpshooterTrinketSpinner3_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SharpshooterTrinketSpinner3.SharpshooterTrinketSpinner3_C.Construct");

	USharpshooterTrinketSpinner3_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SharpshooterTrinketSpinner3.SharpshooterTrinketSpinner3_C.ExecuteUbergraph_SharpshooterTrinketSpinner3
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USharpshooterTrinketSpinner3_C::ExecuteUbergraph_SharpshooterTrinketSpinner3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SharpshooterTrinketSpinner3.SharpshooterTrinketSpinner3_C.ExecuteUbergraph_SharpshooterTrinketSpinner3");

	USharpshooterTrinketSpinner3_C_ExecuteUbergraph_SharpshooterTrinketSpinner3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
