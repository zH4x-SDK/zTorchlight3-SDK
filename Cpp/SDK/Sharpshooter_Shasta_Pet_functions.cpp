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

// Function Sharpshooter_Shasta_Pet.Sharpshooter_Shasta_Pet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASharpshooter_Shasta_Pet_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sharpshooter_Shasta_Pet.Sharpshooter_Shasta_Pet_C.ReceiveBeginPlay");

	ASharpshooter_Shasta_Pet_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sharpshooter_Shasta_Pet.Sharpshooter_Shasta_Pet_C.ExecuteUbergraph_Sharpshooter_Shasta_Pet
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASharpshooter_Shasta_Pet_C::ExecuteUbergraph_Sharpshooter_Shasta_Pet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sharpshooter_Shasta_Pet.Sharpshooter_Shasta_Pet_C.ExecuteUbergraph_Sharpshooter_Shasta_Pet");

	ASharpshooter_Shasta_Pet_C_ExecuteUbergraph_Sharpshooter_Shasta_Pet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
