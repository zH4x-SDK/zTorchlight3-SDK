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

// Function BaseAreaHazard.BaseAreaHazard_C.CleanupAndDestroy
// (BlueprintCallable, BlueprintEvent)
void ABaseAreaHazard_C::CleanupAndDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAreaHazard.BaseAreaHazard_C.CleanupAndDestroy");

	ABaseAreaHazard_C_CleanupAndDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseAreaHazard.BaseAreaHazard_C.ExecuteUbergraph_BaseAreaHazard
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseAreaHazard_C::ExecuteUbergraph_BaseAreaHazard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAreaHazard.BaseAreaHazard_C.ExecuteUbergraph_BaseAreaHazard");

	ABaseAreaHazard_C_ExecuteUbergraph_BaseAreaHazard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
