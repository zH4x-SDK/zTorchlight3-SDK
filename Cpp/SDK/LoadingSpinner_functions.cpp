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

// Function LoadingSpinner.LoadingSpinner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ULoadingSpinner_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingSpinner.LoadingSpinner_C.Construct");

	ULoadingSpinner_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoadingSpinner.LoadingSpinner_C.ExecuteUbergraph_LoadingSpinner
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoadingSpinner_C::ExecuteUbergraph_LoadingSpinner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingSpinner.LoadingSpinner_C.ExecuteUbergraph_LoadingSpinner");

	ULoadingSpinner_C_ExecuteUbergraph_LoadingSpinner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
