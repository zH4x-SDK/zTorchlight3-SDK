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

// Function MIssile_Absolver.MIssile_Absolver_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)
void AMIssile_Absolver_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MIssile_Absolver.MIssile_Absolver_C.NewFunction_1");

	AMIssile_Absolver_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MIssile_Absolver.MIssile_Absolver_C.OnMissileDidDamage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMIssile_Absolver_C::OnMissileDidDamage(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIssile_Absolver.MIssile_Absolver_C.OnMissileDidDamage");

	AMIssile_Absolver_C_OnMissileDidDamage_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MIssile_Absolver.MIssile_Absolver_C.ExecuteUbergraph_MIssile_Absolver
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMIssile_Absolver_C::ExecuteUbergraph_MIssile_Absolver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIssile_Absolver.MIssile_Absolver_C.ExecuteUbergraph_MIssile_Absolver");

	AMIssile_Absolver_C_ExecuteUbergraph_MIssile_Absolver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
