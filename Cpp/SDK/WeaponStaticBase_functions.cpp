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

// Function WeaponStaticBase.WeaponStaticBase_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoFlippyDelegate__DelegateSignature
// (BlueprintEvent)
void AWeaponStaticBase_C::BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoFlippyDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStaticBase.WeaponStaticBase_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoFlippyDelegate__DelegateSignature");

	AWeaponStaticBase_C_BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoFlippyDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WeaponStaticBase.WeaponStaticBase_C.ExecuteUbergraph_WeaponStaticBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeaponStaticBase_C::ExecuteUbergraph_WeaponStaticBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStaticBase.WeaponStaticBase_C.ExecuteUbergraph_WeaponStaticBase");

	AWeaponStaticBase_C_ExecuteUbergraph_WeaponStaticBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
