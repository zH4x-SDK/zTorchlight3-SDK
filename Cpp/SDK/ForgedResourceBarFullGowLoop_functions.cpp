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

// Function ForgedResourceBarFullGowLoop.ForgedResourceBarFullGowLoop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UForgedResourceBarFullGowLoop_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgedResourceBarFullGowLoop.ForgedResourceBarFullGowLoop_C.PreConstruct");

	UForgedResourceBarFullGowLoop_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ForgedResourceBarFullGowLoop.ForgedResourceBarFullGowLoop_C.ExecuteUbergraph_ForgedResourceBarFullGowLoop
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UForgedResourceBarFullGowLoop_C::ExecuteUbergraph_ForgedResourceBarFullGowLoop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgedResourceBarFullGowLoop.ForgedResourceBarFullGowLoop_C.ExecuteUbergraph_ForgedResourceBarFullGowLoop");

	UForgedResourceBarFullGowLoop_C_ExecuteUbergraph_ForgedResourceBarFullGowLoop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
