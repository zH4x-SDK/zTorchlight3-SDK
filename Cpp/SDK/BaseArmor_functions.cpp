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

// Function BaseArmor.BaseArmor_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_1_DoFlippyDelegate__DelegateSignature
// (BlueprintEvent)
void ABaseArmor_C::BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_1_DoFlippyDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseArmor.BaseArmor_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_1_DoFlippyDelegate__DelegateSignature");

	ABaseArmor_C_BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_1_DoFlippyDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseArmor.BaseArmor_C.ExecuteUbergraph_BaseArmor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseArmor_C::ExecuteUbergraph_BaseArmor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseArmor.BaseArmor_C.ExecuteUbergraph_BaseArmor");

	ABaseArmor_C_ExecuteUbergraph_BaseArmor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
