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

// Function BasePotion.BasePotion_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoPickedUpDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePotion_C::BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoPickedUpDelegate__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePotion.BasePotion_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoPickedUpDelegate__DelegateSignature");

	ABasePotion_C_BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoPickedUpDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BasePotion.BasePotion_C.ExecuteUbergraph_BasePotion
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePotion_C::ExecuteUbergraph_BasePotion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasePotion.BasePotion_C.ExecuteUbergraph_BasePotion");

	ABasePotion_C_ExecuteUbergraph_BasePotion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
