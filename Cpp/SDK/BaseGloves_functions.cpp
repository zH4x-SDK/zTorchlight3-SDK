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

// Function BaseGloves.BaseGloves_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_1_DoFlippyDelegate__DelegateSignature
// (BlueprintEvent)
void ABaseGloves_C::BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_1_DoFlippyDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGloves.BaseGloves_C.BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_1_DoFlippyDelegate__DelegateSignature");

	ABaseGloves_C_BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_1_DoFlippyDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseGloves.BaseGloves_C.ExecuteUbergraph_BaseGloves
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseGloves_C::ExecuteUbergraph_BaseGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGloves.BaseGloves_C.ExecuteUbergraph_BaseGloves");

	ABaseGloves_C_ExecuteUbergraph_BaseGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
