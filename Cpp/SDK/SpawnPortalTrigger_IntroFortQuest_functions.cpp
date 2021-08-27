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

// Function SpawnPortalTrigger_IntroFortQuest.SpawnPortalTrigger_IntroFortQuest_C.OnOperated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Operator                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnPortalTrigger_IntroFortQuest_C::OnOperated(class AActor* Operator)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPortalTrigger_IntroFortQuest.SpawnPortalTrigger_IntroFortQuest_C.OnOperated");

	ASpawnPortalTrigger_IntroFortQuest_C_OnOperated_Params params;
	params.Operator = Operator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPortalTrigger_IntroFortQuest.SpawnPortalTrigger_IntroFortQuest_C.ExecuteUbergraph_SpawnPortalTrigger_IntroFortQuest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnPortalTrigger_IntroFortQuest_C::ExecuteUbergraph_SpawnPortalTrigger_IntroFortQuest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPortalTrigger_IntroFortQuest.SpawnPortalTrigger_IntroFortQuest_C.ExecuteUbergraph_SpawnPortalTrigger_IntroFortQuest");

	ASpawnPortalTrigger_IntroFortQuest_C_ExecuteUbergraph_SpawnPortalTrigger_IntroFortQuest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
