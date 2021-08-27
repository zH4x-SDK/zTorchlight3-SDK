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

// Function SharpshooterTrinketSpinner2.SharpshooterTrinketSpinner2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USharpshooterTrinketSpinner2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SharpshooterTrinketSpinner2.SharpshooterTrinketSpinner2_C.Construct");

	USharpshooterTrinketSpinner2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SharpshooterTrinketSpinner2.SharpshooterTrinketSpinner2_C.ExecuteUbergraph_SharpshooterTrinketSpinner2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USharpshooterTrinketSpinner2_C::ExecuteUbergraph_SharpshooterTrinketSpinner2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SharpshooterTrinketSpinner2.SharpshooterTrinketSpinner2_C.ExecuteUbergraph_SharpshooterTrinketSpinner2");

	USharpshooterTrinketSpinner2_C_ExecuteUbergraph_SharpshooterTrinketSpinner2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
