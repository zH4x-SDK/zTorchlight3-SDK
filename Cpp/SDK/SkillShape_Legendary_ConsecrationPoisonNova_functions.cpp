﻿// Name: Torchlight3, Version: 4.26.1

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

// Function SkillShape_Legendary_ConsecrationPoisonNova.SkillShape_Legendary_ConsecrationPoisonNova_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASkillShape_Legendary_ConsecrationPoisonNova_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_Legendary_ConsecrationPoisonNova.SkillShape_Legendary_ConsecrationPoisonNova_C.UserConstructionScript");

	ASkillShape_Legendary_ConsecrationPoisonNova_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
