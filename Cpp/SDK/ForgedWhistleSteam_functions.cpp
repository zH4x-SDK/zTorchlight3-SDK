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

// Function ForgedWhistleSteam.ForgedWhistleSteam_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UForgedWhistleSteam_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgedWhistleSteam.ForgedWhistleSteam_C.PreConstruct");

	UForgedWhistleSteam_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ForgedWhistleSteam.ForgedWhistleSteam_C.ExecuteUbergraph_ForgedWhistleSteam
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UForgedWhistleSteam_C::ExecuteUbergraph_ForgedWhistleSteam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgedWhistleSteam.ForgedWhistleSteam_C.ExecuteUbergraph_ForgedWhistleSteam");

	UForgedWhistleSteam_C_ExecuteUbergraph_ForgedWhistleSteam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
