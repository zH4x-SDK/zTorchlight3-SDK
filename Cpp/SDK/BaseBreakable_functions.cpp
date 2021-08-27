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

// Function BaseBreakable.BaseBreakable_C.GetDestructibleComponent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDestructibleComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UDestructibleComponent* ABaseBreakable_C::GetDestructibleComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseBreakable.BaseBreakable_C.GetDestructibleComponent");

	ABaseBreakable_C_GetDestructibleComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BaseBreakable.BaseBreakable_C.OnBreak
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseBreakable_C::OnBreak(class AActor* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseBreakable.BaseBreakable_C.OnBreak");

	ABaseBreakable_C_OnBreak_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseBreakable.BaseBreakable_C.ExecuteUbergraph_BaseBreakable
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseBreakable_C::ExecuteUbergraph_BaseBreakable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseBreakable.BaseBreakable_C.ExecuteUbergraph_BaseBreakable");

	ABaseBreakable_C_ExecuteUbergraph_BaseBreakable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
