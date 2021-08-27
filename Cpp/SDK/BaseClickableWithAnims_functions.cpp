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

// Function BaseClickableWithAnims.BaseClickableWithAnims_C.OnOperated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Operator                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseClickableWithAnims_C::OnOperated(class AActor* Operator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseClickableWithAnims.BaseClickableWithAnims_C.OnOperated");

	ABaseClickableWithAnims_C_OnOperated_Params params;
	params.Operator = Operator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseClickableWithAnims.BaseClickableWithAnims_C.OnAnimationHitEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            HitIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseClickableWithAnims_C::OnAnimationHitEvent(int HitIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseClickableWithAnims.BaseClickableWithAnims_C.OnAnimationHitEvent");

	ABaseClickableWithAnims_C_OnAnimationHitEvent_Params params;
	params.HitIndex = HitIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseClickableWithAnims.BaseClickableWithAnims_C.ExecuteUbergraph_BaseClickableWithAnims
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseClickableWithAnims_C::ExecuteUbergraph_BaseClickableWithAnims(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseClickableWithAnims.BaseClickableWithAnims_C.ExecuteUbergraph_BaseClickableWithAnims");

	ABaseClickableWithAnims_C_ExecuteUbergraph_BaseClickableWithAnims_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
