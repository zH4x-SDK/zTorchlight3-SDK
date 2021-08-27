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

// Function Hazard_Constant_Fire_Status.Hazard_Constant_Fire_Status_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UHazard_Constant_Fire_Status_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Constant_Fire_Status.Hazard_Constant_Fire_Status_C.OnPreApply");

	UHazard_Constant_Fire_Status_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hazard_Constant_Fire_Status.Hazard_Constant_Fire_Status_C.ExecuteUbergraph_Hazard_Constant_Fire_Status
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHazard_Constant_Fire_Status_C::ExecuteUbergraph_Hazard_Constant_Fire_Status(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Constant_Fire_Status.Hazard_Constant_Fire_Status_C.ExecuteUbergraph_Hazard_Constant_Fire_Status");

	UHazard_Constant_Fire_Status_C_ExecuteUbergraph_Hazard_Constant_Fire_Status_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
