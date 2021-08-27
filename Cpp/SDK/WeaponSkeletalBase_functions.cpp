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

// Function WeaponSkeletalBase.WeaponSkeletalBase_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoFlippyDelegate__DelegateSignature
// (BlueprintEvent)
void AWeaponSkeletalBase_C::BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoFlippyDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSkeletalBase.WeaponSkeletalBase_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoFlippyDelegate__DelegateSignature");

	AWeaponSkeletalBase_C_BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoFlippyDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WeaponSkeletalBase.WeaponSkeletalBase_C.ExecuteUbergraph_WeaponSkeletalBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeaponSkeletalBase_C::ExecuteUbergraph_WeaponSkeletalBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSkeletalBase.WeaponSkeletalBase_C.ExecuteUbergraph_WeaponSkeletalBase");

	AWeaponSkeletalBase_C_ExecuteUbergraph_WeaponSkeletalBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
