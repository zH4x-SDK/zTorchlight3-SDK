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

// Function BigBossLevelSequenceActor1.BigBossLevelSequenceActor1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABigBossLevelSequenceActor1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigBossLevelSequenceActor1.BigBossLevelSequenceActor1_C.ReceiveBeginPlay");

	ABigBossLevelSequenceActor1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BigBossLevelSequenceActor1.BigBossLevelSequenceActor1_C.ExecuteUbergraph_BigBossLevelSequenceActor1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABigBossLevelSequenceActor1_C::ExecuteUbergraph_BigBossLevelSequenceActor1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigBossLevelSequenceActor1.BigBossLevelSequenceActor1_C.ExecuteUbergraph_BigBossLevelSequenceActor1");

	ABigBossLevelSequenceActor1_C_ExecuteUbergraph_BigBossLevelSequenceActor1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
