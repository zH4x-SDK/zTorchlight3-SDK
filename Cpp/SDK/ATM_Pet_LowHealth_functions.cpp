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

// Function ATM_Pet_LowHealth.ATM_Pet_LowHealth_C.OnRuleTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UATM_Pet_LowHealth_C::OnRuleTriggered(const struct FName& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATM_Pet_LowHealth.ATM_Pet_LowHealth_C.OnRuleTriggered");

	UATM_Pet_LowHealth_C_OnRuleTriggered_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ATM_Pet_LowHealth.ATM_Pet_LowHealth_C.ExecuteUbergraph_ATM_Pet_LowHealth
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UATM_Pet_LowHealth_C::ExecuteUbergraph_ATM_Pet_LowHealth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATM_Pet_LowHealth.ATM_Pet_LowHealth_C.ExecuteUbergraph_ATM_Pet_LowHealth");

	UATM_Pet_LowHealth_C_ExecuteUbergraph_ATM_Pet_LowHealth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
