﻿// Name: Torchlight3, Version: 1.0.0

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

// Function InstanceResetPartyMember.InstanceResetPartyMember_C.GetAllyInfoWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAllyInfoWidget*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAllyInfoWidget* UInstanceResetPartyMember_C::GetAllyInfoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstanceResetPartyMember.InstanceResetPartyMember_C.GetAllyInfoWidget");

	UInstanceResetPartyMember_C_GetAllyInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
