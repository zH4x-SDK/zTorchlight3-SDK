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

// Function SkillShape_Consecration.SkillShape_Consecration_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASkillShape_Consecration_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_Consecration.SkillShape_Consecration_C.UserConstructionScript");

	ASkillShape_Consecration_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillShape_Consecration.SkillShape_Consecration_C.BndEvt__LifetimeEvents_K2Node_ComponentBoundEvent_0_NearLifetimeEndSignature__DelegateSignature
// (BlueprintEvent)
void ASkillShape_Consecration_C::BndEvt__LifetimeEvents_K2Node_ComponentBoundEvent_0_NearLifetimeEndSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_Consecration.SkillShape_Consecration_C.BndEvt__LifetimeEvents_K2Node_ComponentBoundEvent_0_NearLifetimeEndSignature__DelegateSignature");

	ASkillShape_Consecration_C_BndEvt__LifetimeEvents_K2Node_ComponentBoundEvent_0_NearLifetimeEndSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillShape_Consecration.SkillShape_Consecration_C.ExecuteUbergraph_SkillShape_Consecration
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkillShape_Consecration_C::ExecuteUbergraph_SkillShape_Consecration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_Consecration.SkillShape_Consecration_C.ExecuteUbergraph_SkillShape_Consecration");

	ASkillShape_Consecration_C_ExecuteUbergraph_SkillShape_Consecration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
