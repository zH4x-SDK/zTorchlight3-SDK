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

// Function SharpshooterTrinketSpinner.SharpshooterTrinketSpinner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USharpshooterTrinketSpinner_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SharpshooterTrinketSpinner.SharpshooterTrinketSpinner_C.Construct");

	USharpshooterTrinketSpinner_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SharpshooterTrinketSpinner.SharpshooterTrinketSpinner_C.ExecuteUbergraph_SharpshooterTrinketSpinner
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USharpshooterTrinketSpinner_C::ExecuteUbergraph_SharpshooterTrinketSpinner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SharpshooterTrinketSpinner.SharpshooterTrinketSpinner_C.ExecuteUbergraph_SharpshooterTrinketSpinner");

	USharpshooterTrinketSpinner_C_ExecuteUbergraph_SharpshooterTrinketSpinner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
