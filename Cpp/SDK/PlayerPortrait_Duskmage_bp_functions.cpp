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

// Function PlayerPortrait_Duskmage_bp.PlayerPortrait_Duskmage_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APlayerPortrait_Duskmage_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPortrait_Duskmage_bp.PlayerPortrait_Duskmage_bp_C.ReceiveBeginPlay");

	APlayerPortrait_Duskmage_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPortrait_Duskmage_bp.PlayerPortrait_Duskmage_bp_C.ExecuteUbergraph_PlayerPortrait_Duskmage_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayerPortrait_Duskmage_bp_C::ExecuteUbergraph_PlayerPortrait_Duskmage_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPortrait_Duskmage_bp.PlayerPortrait_Duskmage_bp_C.ExecuteUbergraph_PlayerPortrait_Duskmage_bp");

	APlayerPortrait_Duskmage_bp_C_ExecuteUbergraph_PlayerPortrait_Duskmage_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif