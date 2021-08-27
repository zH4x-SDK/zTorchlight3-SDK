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

// Function BaseMonster.BaseMonster_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseMonster_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMonster.BaseMonster_C.UserConstructionScript");

	ABaseMonster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseMonster.BaseMonster_C.DissolveTimeline__FinishedFunc
// (BlueprintEvent)
void ABaseMonster_C::DissolveTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMonster.BaseMonster_C.DissolveTimeline__FinishedFunc");

	ABaseMonster_C_DissolveTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseMonster.BaseMonster_C.DissolveTimeline__UpdateFunc
// (BlueprintEvent)
void ABaseMonster_C::DissolveTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMonster.BaseMonster_C.DissolveTimeline__UpdateFunc");

	ABaseMonster_C_DissolveTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseMonster.BaseMonster_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABaseMonster_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMonster.BaseMonster_C.Timeline_0__FinishedFunc");

	ABaseMonster_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseMonster.BaseMonster_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABaseMonster_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMonster.BaseMonster_C.Timeline_0__UpdateFunc");

	ABaseMonster_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseMonster.BaseMonster_C.DissolveStatus__FinishedFunc
// (BlueprintEvent)
void ABaseMonster_C::DissolveStatus__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMonster.BaseMonster_C.DissolveStatus__FinishedFunc");

	ABaseMonster_C_DissolveStatus__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseMonster.BaseMonster_C.DissolveStatus__UpdateFunc
// (BlueprintEvent)
void ABaseMonster_C::DissolveStatus__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMonster.BaseMonster_C.DissolveStatus__UpdateFunc");

	ABaseMonster_C_DissolveStatus__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseMonster.BaseMonster_C.OnClientDeadCharacterDestroyed
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseMonster_C::OnClientDeadCharacterDestroyed(class AActor* SelfActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMonster.BaseMonster_C.OnClientDeadCharacterDestroyed");

	ABaseMonster_C_OnClientDeadCharacterDestroyed_Params params;
	params.SelfActor = SelfActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseMonster.BaseMonster_C.PlayDissolveStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bReverse                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseMonster_C::PlayDissolveStatus(bool bReverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMonster.BaseMonster_C.PlayDissolveStatus");

	ABaseMonster_C_PlayDissolveStatus_Params params;
	params.bReverse = bReverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseMonster.BaseMonster_C.ExecuteUbergraph_BaseMonster
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseMonster_C::ExecuteUbergraph_BaseMonster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMonster.BaseMonster_C.ExecuteUbergraph_BaseMonster");

	ABaseMonster_C_ExecuteUbergraph_BaseMonster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
