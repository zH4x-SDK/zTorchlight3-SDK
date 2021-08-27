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

// Function SocialHUDNotifyBlueprint.SocialHUDNotifyBlueprint_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void USocialHUDNotifyBlueprint_C::BndEvt__TLButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialHUDNotifyBlueprint.SocialHUDNotifyBlueprint_C.BndEvt__TLButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	USocialHUDNotifyBlueprint_C_BndEvt__TLButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SocialHUDNotifyBlueprint.SocialHUDNotifyBlueprint_C.ExecuteUbergraph_SocialHUDNotifyBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USocialHUDNotifyBlueprint_C::ExecuteUbergraph_SocialHUDNotifyBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialHUDNotifyBlueprint.SocialHUDNotifyBlueprint_C.ExecuteUbergraph_SocialHUDNotifyBlueprint");

	USocialHUDNotifyBlueprint_C_ExecuteUbergraph_SocialHUDNotifyBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
