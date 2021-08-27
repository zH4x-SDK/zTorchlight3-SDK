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

// Function FrontiersTests.TestActiveTrait.HitMinCallback
// (Final, Native, Public)
// Parameters:
// class UActiveTrait*            Trait                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTestActiveTrait::HitMinCallback(class UActiveTrait* Trait)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontiersTests.TestActiveTrait.HitMinCallback");

	UTestActiveTrait_HitMinCallback_Params params;
	params.Trait = Trait;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontiersTests.TestActiveTrait.HitMaxCallback
// (Final, Native, Public)
// Parameters:
// class UActiveTrait*            Trait                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTestActiveTrait::HitMaxCallback(class UActiveTrait* Trait)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontiersTests.TestActiveTrait.HitMaxCallback");

	UTestActiveTrait_HitMaxCallback_Params params;
	params.Trait = Trait;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontiersTests.TestTrigger.TriggerExit
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InStartTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InEndTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTestTrigger::TriggerExit(float InStartTime, float InEndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontiersTests.TestTrigger.TriggerExit");

	UTestTrigger_TriggerExit_Params params;
	params.InStartTime = InStartTime;
	params.InEndTime = InEndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FrontiersTests.TestTrigger.Trigger
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InStartTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InEndTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTestTrigger::Trigger(float InStartTime, float InEndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontiersTests.TestTrigger.Trigger");

	UTestTrigger_Trigger_Params params;
	params.InStartTime = InStartTime;
	params.InEndTime = InEndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
