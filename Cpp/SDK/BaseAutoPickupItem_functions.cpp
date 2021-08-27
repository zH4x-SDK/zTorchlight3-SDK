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

// Function BaseAutoPickupItem.BaseAutoPickupItem_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoFlippyDelegate__DelegateSignature
// (BlueprintEvent)
void ABaseAutoPickupItem_C::BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoFlippyDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAutoPickupItem.BaseAutoPickupItem_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoFlippyDelegate__DelegateSignature");

	ABaseAutoPickupItem_C_BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoFlippyDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseAutoPickupItem.BaseAutoPickupItem_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoPickedUpDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseAutoPickupItem_C::BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoPickedUpDelegate__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAutoPickupItem.BaseAutoPickupItem_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoPickedUpDelegate__DelegateSignature");

	ABaseAutoPickupItem_C_BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoPickedUpDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseAutoPickupItem.BaseAutoPickupItem_C.ExecuteUbergraph_BaseAutoPickupItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseAutoPickupItem_C::ExecuteUbergraph_BaseAutoPickupItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAutoPickupItem.BaseAutoPickupItem_C.ExecuteUbergraph_BaseAutoPickupItem");

	ABaseAutoPickupItem_C_ExecuteUbergraph_BaseAutoPickupItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
