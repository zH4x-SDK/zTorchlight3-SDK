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

// Function PlayerTravelLimbo.PlayerTravelLimbo_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UPlayerTravelLimbo_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerTravelLimbo.PlayerTravelLimbo_C.OnPreApply");

	UPlayerTravelLimbo_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerTravelLimbo.PlayerTravelLimbo_C.ExecuteUbergraph_PlayerTravelLimbo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerTravelLimbo_C::ExecuteUbergraph_PlayerTravelLimbo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerTravelLimbo.PlayerTravelLimbo_C.ExecuteUbergraph_PlayerTravelLimbo");

	UPlayerTravelLimbo_C_ExecuteUbergraph_PlayerTravelLimbo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
