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

// Function gbl_lootable_corpse_imperial_01_bp.gbl_lootable_corpse_imperial_01_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void Agbl_lootable_corpse_imperial_01_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function gbl_lootable_corpse_imperial_01_bp.gbl_lootable_corpse_imperial_01_bp_C.ReceiveBeginPlay");

	Agbl_lootable_corpse_imperial_01_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function gbl_lootable_corpse_imperial_01_bp.gbl_lootable_corpse_imperial_01_bp_C.ExecuteUbergraph_gbl_lootable_corpse_imperial_01_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Agbl_lootable_corpse_imperial_01_bp_C::ExecuteUbergraph_gbl_lootable_corpse_imperial_01_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gbl_lootable_corpse_imperial_01_bp.gbl_lootable_corpse_imperial_01_bp_C.ExecuteUbergraph_gbl_lootable_corpse_imperial_01_bp");

	Agbl_lootable_corpse_imperial_01_bp_C_ExecuteUbergraph_gbl_lootable_corpse_imperial_01_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
