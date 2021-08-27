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

// Function SkillPointCTA.SkillPointCTA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USkillPointCTA_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillPointCTA.SkillPointCTA_C.Construct");

	USkillPointCTA_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillPointCTA.SkillPointCTA_C.ExecuteUbergraph_SkillPointCTA
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillPointCTA_C::ExecuteUbergraph_SkillPointCTA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillPointCTA.SkillPointCTA_C.ExecuteUbergraph_SkillPointCTA");

	USkillPointCTA_C_ExecuteUbergraph_SkillPointCTA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
