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

// Function ss_f_charactercreate.ss_f_charactercreate_C.GetComponentsToHide
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class USkeletalMeshComponent*> ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<class USkeletalMeshComponent*> Ass_f_charactercreate_C::GetComponentsToHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function ss_f_charactercreate.ss_f_charactercreate_C.GetComponentsToHide");

	Ass_f_charactercreate_C_GetComponentsToHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ss_f_charactercreate.ss_f_charactercreate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Ass_f_charactercreate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ss_f_charactercreate.ss_f_charactercreate_C.UserConstructionScript");

	Ass_f_charactercreate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ss_f_charactercreate.ss_f_charactercreate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void Ass_f_charactercreate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ss_f_charactercreate.ss_f_charactercreate_C.ReceiveBeginPlay");

	Ass_f_charactercreate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ss_f_charactercreate.ss_f_charactercreate_C.ExecuteUbergraph_ss_f_charactercreate
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Ass_f_charactercreate_C::ExecuteUbergraph_ss_f_charactercreate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ss_f_charactercreate.ss_f_charactercreate_C.ExecuteUbergraph_ss_f_charactercreate");

	Ass_f_charactercreate_C_ExecuteUbergraph_ss_f_charactercreate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
