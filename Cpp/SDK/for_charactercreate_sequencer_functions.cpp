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

// Function for_charactercreate_sequencer.for_charactercreate_sequencer_C.Set Mesh 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           SkelMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Afor_charactercreate_sequencer_C::Set_Mesh_(class USkeletalMesh* SkelMesh, class USkeletalMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function for_charactercreate_sequencer.for_charactercreate_sequencer_C.Set Mesh ");

	Afor_charactercreate_sequencer_C_Set_Mesh__Params params;
	params.SkelMesh = SkelMesh;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function for_charactercreate_sequencer.for_charactercreate_sequencer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Afor_charactercreate_sequencer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function for_charactercreate_sequencer.for_charactercreate_sequencer_C.UserConstructionScript");

	Afor_charactercreate_sequencer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
