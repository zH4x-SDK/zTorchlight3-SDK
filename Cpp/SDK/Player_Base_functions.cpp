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

// Function Player_Base.Player_Base_C.BlueprintGetHitboxCapsuleComponent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCapsuleComponent*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCapsuleComponent* APlayer_Base_C::BlueprintGetHitboxCapsuleComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Base.Player_Base_C.BlueprintGetHitboxCapsuleComponent");

	APlayer_Base_C_BlueprintGetHitboxCapsuleComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Player_Base.Player_Base_C.GetItemTargetComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ItemTarget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayer_Base_C::GetItemTargetComponent(class USceneComponent** ItemTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Base.Player_Base_C.GetItemTargetComponent");

	APlayer_Base_C_GetItemTargetComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemTarget != nullptr)
		*ItemTarget = params.ItemTarget;

}


// Function Player_Base.Player_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APlayer_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Base.Player_Base_C.ReceiveBeginPlay");

	APlayer_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Player_Base.Player_Base_C.ExecuteUbergraph_Player_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayer_Base_C::ExecuteUbergraph_Player_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Base.Player_Base_C.ExecuteUbergraph_Player_Base");

	APlayer_Base_C_ExecuteUbergraph_Player_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
