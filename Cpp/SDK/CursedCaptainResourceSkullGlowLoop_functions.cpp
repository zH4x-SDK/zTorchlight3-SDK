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

// Function CursedCaptainResourceSkullGlowLoop.CursedCaptainResourceSkullGlowLoop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCursedCaptainResourceSkullGlowLoop_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CursedCaptainResourceSkullGlowLoop.CursedCaptainResourceSkullGlowLoop_C.PreConstruct");

	UCursedCaptainResourceSkullGlowLoop_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CursedCaptainResourceSkullGlowLoop.CursedCaptainResourceSkullGlowLoop_C.ExecuteUbergraph_CursedCaptainResourceSkullGlowLoop
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCursedCaptainResourceSkullGlowLoop_C::ExecuteUbergraph_CursedCaptainResourceSkullGlowLoop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CursedCaptainResourceSkullGlowLoop.CursedCaptainResourceSkullGlowLoop_C.ExecuteUbergraph_CursedCaptainResourceSkullGlowLoop");

	UCursedCaptainResourceSkullGlowLoop_C_ExecuteUbergraph_CursedCaptainResourceSkullGlowLoop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
