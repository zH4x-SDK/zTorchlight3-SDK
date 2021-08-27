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

// Function BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C.Swap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSwapped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseClickableWithAnimsSwap_C::Swap(bool bIsSwapped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C.Swap");

	ABaseClickableWithAnimsSwap_C_Swap_Params params;
	params.bIsSwapped = bIsSwapped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABaseClickableWithAnimsSwap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C.ReceiveBeginPlay");

	ABaseClickableWithAnimsSwap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C.OnAnimationHitEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            HitIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseClickableWithAnimsSwap_C::OnAnimationHitEvent(int HitIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C.OnAnimationHitEvent");

	ABaseClickableWithAnimsSwap_C_OnAnimationHitEvent_Params params;
	params.HitIndex = HitIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C.OnOperated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Operator                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseClickableWithAnimsSwap_C::OnOperated(class AActor* Operator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C.OnOperated");

	ABaseClickableWithAnimsSwap_C_OnOperated_Params params;
	params.Operator = Operator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C.OnStatusChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ABaseClickableWithAnimsSwap_C::OnStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C.OnStatusChanged");

	ABaseClickableWithAnimsSwap_C_OnStatusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C.ExecuteUbergraph_BaseClickableWithAnimsSwap
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseClickableWithAnimsSwap_C::ExecuteUbergraph_BaseClickableWithAnimsSwap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C.ExecuteUbergraph_BaseClickableWithAnimsSwap");

	ABaseClickableWithAnimsSwap_C_ExecuteUbergraph_BaseClickableWithAnimsSwap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
