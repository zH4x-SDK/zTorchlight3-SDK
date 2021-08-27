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

// Function StatusEfect_Sharpshooter_ScoutPoison.StatusEfect_Sharpshooter_ScoutPoison_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEfect_Sharpshooter_ScoutPoison_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEfect_Sharpshooter_ScoutPoison.StatusEfect_Sharpshooter_ScoutPoison_C.OnPreApply");

	UStatusEfect_Sharpshooter_ScoutPoison_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEfect_Sharpshooter_ScoutPoison.StatusEfect_Sharpshooter_ScoutPoison_C.ExecuteUbergraph_StatusEfect_Sharpshooter_ScoutPoison
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEfect_Sharpshooter_ScoutPoison_C::ExecuteUbergraph_StatusEfect_Sharpshooter_ScoutPoison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEfect_Sharpshooter_ScoutPoison.StatusEfect_Sharpshooter_ScoutPoison_C.ExecuteUbergraph_StatusEfect_Sharpshooter_ScoutPoison");

	UStatusEfect_Sharpshooter_ScoutPoison_C_ExecuteUbergraph_StatusEfect_Sharpshooter_ScoutPoison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
