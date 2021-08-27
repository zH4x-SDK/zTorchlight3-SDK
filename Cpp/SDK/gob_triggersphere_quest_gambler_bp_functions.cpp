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

// Function gob_triggersphere_quest_gambler_bp.gob_triggersphere_quest_gambler_bp_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Agob_triggersphere_quest_gambler_bp_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function gob_triggersphere_quest_gambler_bp.gob_triggersphere_quest_gambler_bp_C.ReceiveActorBeginOverlap");

	Agob_triggersphere_quest_gambler_bp_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function gob_triggersphere_quest_gambler_bp.gob_triggersphere_quest_gambler_bp_C.ExecuteUbergraph_gob_triggersphere_quest_gambler_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Agob_triggersphere_quest_gambler_bp_C::ExecuteUbergraph_gob_triggersphere_quest_gambler_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gob_triggersphere_quest_gambler_bp.gob_triggersphere_quest_gambler_bp_C.ExecuteUbergraph_gob_triggersphere_quest_gambler_bp");

	Agob_triggersphere_quest_gambler_bp_C_ExecuteUbergraph_gob_triggersphere_quest_gambler_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
