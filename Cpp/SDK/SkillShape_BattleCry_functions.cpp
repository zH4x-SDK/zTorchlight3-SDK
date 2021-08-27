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

// Function SkillShape_BattleCry.SkillShape_BattleCry_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASkillShape_BattleCry_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_BattleCry.SkillShape_BattleCry_C.UserConstructionScript");

	ASkillShape_BattleCry_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillShape_BattleCry.SkillShape_BattleCry_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ASkillShape_BattleCry_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_BattleCry.SkillShape_BattleCry_C.ReceiveDestroyed");

	ASkillShape_BattleCry_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillShape_BattleCry.SkillShape_BattleCry_C.ExecuteUbergraph_SkillShape_BattleCry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkillShape_BattleCry_C::ExecuteUbergraph_SkillShape_BattleCry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_BattleCry.SkillShape_BattleCry_C.ExecuteUbergraph_SkillShape_BattleCry");

	ASkillShape_BattleCry_C_ExecuteUbergraph_SkillShape_BattleCry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
