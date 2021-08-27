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

// Function WeaponBowBase.WeaponBowBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWeaponBowBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBowBase.WeaponBowBase_C.ReceiveBeginPlay");

	AWeaponBowBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WeaponBowBase.WeaponBowBase_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_ItemOnGroundEvent__DelegateSignature
// (BlueprintEvent)
void AWeaponBowBase_C::BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_ItemOnGroundEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBowBase.WeaponBowBase_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_ItemOnGroundEvent__DelegateSignature");

	AWeaponBowBase_C_BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_ItemOnGroundEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WeaponBowBase.WeaponBowBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeaponBowBase_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBowBase.WeaponBowBase_C.ReceiveEndPlay");

	AWeaponBowBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WeaponBowBase.WeaponBowBase_C.ExecuteUbergraph_WeaponBowBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeaponBowBase_C::ExecuteUbergraph_WeaponBowBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBowBase.WeaponBowBase_C.ExecuteUbergraph_WeaponBowBase");

	AWeaponBowBase_C_ExecuteUbergraph_WeaponBowBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
