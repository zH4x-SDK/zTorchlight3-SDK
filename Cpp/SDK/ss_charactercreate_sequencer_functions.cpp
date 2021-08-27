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

// Function ss_charactercreate_sequencer.ss_charactercreate_sequencer_C.Set Mesh 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           SkelMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Ass_charactercreate_sequencer_C::Set_Mesh_(class USkeletalMesh* SkelMesh, class USkeletalMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ss_charactercreate_sequencer.ss_charactercreate_sequencer_C.Set Mesh ");

	Ass_charactercreate_sequencer_C_Set_Mesh__Params params;
	params.SkelMesh = SkelMesh;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ss_charactercreate_sequencer.ss_charactercreate_sequencer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Ass_charactercreate_sequencer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ss_charactercreate_sequencer.ss_charactercreate_sequencer_C.UserConstructionScript");

	Ass_charactercreate_sequencer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ss_charactercreate_sequencer.ss_charactercreate_sequencer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void Ass_charactercreate_sequencer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ss_charactercreate_sequencer.ss_charactercreate_sequencer_C.ReceiveBeginPlay");

	Ass_charactercreate_sequencer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ss_charactercreate_sequencer.ss_charactercreate_sequencer_C.ExecuteUbergraph_ss_charactercreate_sequencer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Ass_charactercreate_sequencer_C::ExecuteUbergraph_ss_charactercreate_sequencer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ss_charactercreate_sequencer.ss_charactercreate_sequencer_C.ExecuteUbergraph_ss_charactercreate_sequencer");

	Ass_charactercreate_sequencer_C_ExecuteUbergraph_ss_charactercreate_sequencer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
