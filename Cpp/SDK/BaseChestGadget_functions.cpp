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

// Function BaseChestGadget.BaseChestGadget_C.DoubloonSpawner__FinishedFunc
// (BlueprintEvent)
void ABaseChestGadget_C::DoubloonSpawner__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseChestGadget.BaseChestGadget_C.DoubloonSpawner__FinishedFunc");

	ABaseChestGadget_C_DoubloonSpawner__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseChestGadget.BaseChestGadget_C.DoubloonSpawner__UpdateFunc
// (BlueprintEvent)
void ABaseChestGadget_C::DoubloonSpawner__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseChestGadget.BaseChestGadget_C.DoubloonSpawner__UpdateFunc");

	ABaseChestGadget_C_DoubloonSpawner__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseChestGadget.BaseChestGadget_C.OnOperated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Operator                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseChestGadget_C::OnOperated(class AActor* Operator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseChestGadget.BaseChestGadget_C.OnOperated");

	ABaseChestGadget_C_OnOperated_Params params;
	params.Operator = Operator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseChestGadget.BaseChestGadget_C.ExecuteUbergraph_BaseChestGadget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseChestGadget_C::ExecuteUbergraph_BaseChestGadget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseChestGadget.BaseChestGadget_C.ExecuteUbergraph_BaseChestGadget");

	ABaseChestGadget_C_ExecuteUbergraph_BaseChestGadget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
