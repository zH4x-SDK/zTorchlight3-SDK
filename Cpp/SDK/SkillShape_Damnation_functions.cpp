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

// Function SkillShape_Damnation.SkillShape_Damnation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASkillShape_Damnation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_Damnation.SkillShape_Damnation_C.UserConstructionScript");

	ASkillShape_Damnation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillShape_Damnation.SkillShape_Damnation_C.OnHitTarget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  ActorInContact                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkillShape_Damnation_C::OnHitTarget(class AActor* ActorInContact)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_Damnation.SkillShape_Damnation_C.OnHitTarget");

	ASkillShape_Damnation_C_OnHitTarget_Params params;
	params.ActorInContact = ActorInContact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillShape_Damnation.SkillShape_Damnation_C.ExecuteUbergraph_SkillShape_Damnation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkillShape_Damnation_C::ExecuteUbergraph_SkillShape_Damnation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_Damnation.SkillShape_Damnation_C.ExecuteUbergraph_SkillShape_Damnation");

	ASkillShape_Damnation_C_ExecuteUbergraph_SkillShape_Damnation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
