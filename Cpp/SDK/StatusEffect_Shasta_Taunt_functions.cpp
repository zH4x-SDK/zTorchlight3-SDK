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

// Function StatusEffect_Shasta_Taunt.StatusEffect_Shasta_Taunt_C.GetDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  ActorOwner                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UStatusEffect_Shasta_Taunt_C::GetDescription(class AActor* ActorOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Shasta_Taunt.StatusEffect_Shasta_Taunt_C.GetDescription");

	UStatusEffect_Shasta_Taunt_C_GetDescription_Params params;
	params.ActorOwner = ActorOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatusEffect_Shasta_Taunt.StatusEffect_Shasta_Taunt_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Shasta_Taunt_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Shasta_Taunt.StatusEffect_Shasta_Taunt_C.OnPreApply");

	UStatusEffect_Shasta_Taunt_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Shasta_Taunt.StatusEffect_Shasta_Taunt_C.ExecuteUbergraph_StatusEffect_Shasta_Taunt
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Shasta_Taunt_C::ExecuteUbergraph_StatusEffect_Shasta_Taunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Shasta_Taunt.StatusEffect_Shasta_Taunt_C.ExecuteUbergraph_StatusEffect_Shasta_Taunt");

	UStatusEffect_Shasta_Taunt_C_ExecuteUbergraph_StatusEffect_Shasta_Taunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
