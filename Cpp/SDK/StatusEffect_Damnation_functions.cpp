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

// Function StatusEffect_Damnation.StatusEffect_Damnation_C.OnCleared
// (Event, Public, BlueprintEvent)
void UStatusEffect_Damnation_C::OnCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Damnation.StatusEffect_Damnation_C.OnCleared");

	UStatusEffect_Damnation_C_OnCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Damnation.StatusEffect_Damnation_C.PlaceShapeOnDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Dying                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Damnation_C::PlaceShapeOnDied(class APawn* Dying, class AActor* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Damnation.StatusEffect_Damnation_C.PlaceShapeOnDied");

	UStatusEffect_Damnation_C_PlaceShapeOnDied_Params params;
	params.Dying = Dying;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Damnation.StatusEffect_Damnation_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_Damnation_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Damnation.StatusEffect_Damnation_C.OnPreApply");

	UStatusEffect_Damnation_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_Damnation.StatusEffect_Damnation_C.ExecuteUbergraph_StatusEffect_Damnation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_Damnation_C::ExecuteUbergraph_StatusEffect_Damnation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_Damnation.StatusEffect_Damnation_C.ExecuteUbergraph_StatusEffect_Damnation");

	UStatusEffect_Damnation_C_ExecuteUbergraph_StatusEffect_Damnation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
