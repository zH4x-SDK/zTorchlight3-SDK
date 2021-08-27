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

// Function GenericBossLevelSequenceActor.GenericBossLevelSequenceActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AGenericBossLevelSequenceActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericBossLevelSequenceActor.GenericBossLevelSequenceActor_C.ReceiveBeginPlay");

	AGenericBossLevelSequenceActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GenericBossLevelSequenceActor.GenericBossLevelSequenceActor_C.ExecuteUbergraph_GenericBossLevelSequenceActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGenericBossLevelSequenceActor_C::ExecuteUbergraph_GenericBossLevelSequenceActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericBossLevelSequenceActor.GenericBossLevelSequenceActor_C.ExecuteUbergraph_GenericBossLevelSequenceActor");

	AGenericBossLevelSequenceActor_C_ExecuteUbergraph_GenericBossLevelSequenceActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
