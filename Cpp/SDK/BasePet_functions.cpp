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

// Function BasePet.BasePet_C.PlayBlinkEffect
// (Public, BlueprintCallable, BlueprintEvent)
void ABasePet_C::PlayBlinkEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePet.BasePet_C.PlayBlinkEffect");

	ABasePet_C_PlayBlinkEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BasePet.BasePet_C.OnHitpointsHitZero
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActiveTrait*            Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePet_C::OnHitpointsHitZero(class UActiveTrait* Trait)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePet.BasePet_C.OnHitpointsHitZero");

	ABasePet_C_OnHitpointsHitZero_Params params;
	params.Trait = Trait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BasePet.BasePet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABasePet_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePet.BasePet_C.ReceiveBeginPlay");

	ABasePet_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BasePet.BasePet_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABasePet_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePet.BasePet_C.ReceiveDestroyed");

	ABasePet_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BasePet.BasePet_C.ExecuteUbergraph_BasePet
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePet_C::ExecuteUbergraph_BasePet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePet.BasePet_C.ExecuteUbergraph_BasePet");

	ABasePet_C_ExecuteUbergraph_BasePet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
