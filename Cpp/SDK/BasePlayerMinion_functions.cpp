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

// Function BasePlayerMinion.BasePlayerMinion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABasePlayerMinion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerMinion.BasePlayerMinion_C.ReceiveBeginPlay");

	ABasePlayerMinion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BasePlayerMinion.BasePlayerMinion_C.BndEvt__LifetimeEvents_K2Node_ComponentBoundEvent_0_NearLifetimeEndSignature__DelegateSignature
// (BlueprintEvent)
void ABasePlayerMinion_C::BndEvt__LifetimeEvents_K2Node_ComponentBoundEvent_0_NearLifetimeEndSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerMinion.BasePlayerMinion_C.BndEvt__LifetimeEvents_K2Node_ComponentBoundEvent_0_NearLifetimeEndSignature__DelegateSignature");

	ABasePlayerMinion_C_BndEvt__LifetimeEvents_K2Node_ComponentBoundEvent_0_NearLifetimeEndSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BasePlayerMinion.BasePlayerMinion_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePlayerMinion_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerMinion.BasePlayerMinion_C.ReceiveEndPlay");

	ABasePlayerMinion_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BasePlayerMinion.BasePlayerMinion_C.ExecuteUbergraph_BasePlayerMinion
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePlayerMinion_C::ExecuteUbergraph_BasePlayerMinion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePlayerMinion.BasePlayerMinion_C.ExecuteUbergraph_BasePlayerMinion");

	ABasePlayerMinion_C_ExecuteUbergraph_BasePlayerMinion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
