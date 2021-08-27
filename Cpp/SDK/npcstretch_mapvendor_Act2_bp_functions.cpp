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

// Function npcstretch_mapvendor_Act2_bp.npcstretch_mapvendor_Act2_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Anpcstretch_mapvendor_Act2_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function npcstretch_mapvendor_Act2_bp.npcstretch_mapvendor_Act2_bp_C.UserConstructionScript");

	Anpcstretch_mapvendor_Act2_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
