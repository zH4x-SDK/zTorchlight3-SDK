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

// Function BaseDRLGDummy.BaseDRLGDummy_C.SetLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABaseDRLGDummy_C::SetLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseDRLGDummy.BaseDRLGDummy_C.SetLabel");

	ABaseDRLGDummy_C_SetLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseDRLGDummy.BaseDRLGDummy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseDRLGDummy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseDRLGDummy.BaseDRLGDummy_C.UserConstructionScript");

	ABaseDRLGDummy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseDRLGDummy.BaseDRLGDummy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseDRLGDummy_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseDRLGDummy.BaseDRLGDummy_C.ReceiveTick");

	ABaseDRLGDummy_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseDRLGDummy.BaseDRLGDummy_C.ExecuteUbergraph_BaseDRLGDummy
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseDRLGDummy_C::ExecuteUbergraph_BaseDRLGDummy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseDRLGDummy.BaseDRLGDummy_C.ExecuteUbergraph_BaseDRLGDummy");

	ABaseDRLGDummy_C_ExecuteUbergraph_BaseDRLGDummy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
