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

// Function Area_ImperialOutpost_Intro.Area_ImperialOutpost_Intro_C.CompileRules
// (Event, Public, BlueprintEvent)
void UArea_ImperialOutpost_Intro_C::CompileRules()
{
	static auto fn = UObject::FindObject<UFunction>("Function Area_ImperialOutpost_Intro.Area_ImperialOutpost_Intro_C.CompileRules");

	UArea_ImperialOutpost_Intro_C_CompileRules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Area_ImperialOutpost_Intro.Area_ImperialOutpost_Intro_C.ExecuteUbergraph_Area_ImperialOutpost_Intro
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArea_ImperialOutpost_Intro_C::ExecuteUbergraph_Area_ImperialOutpost_Intro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Area_ImperialOutpost_Intro.Area_ImperialOutpost_Intro_C.ExecuteUbergraph_Area_ImperialOutpost_Intro");

	UArea_ImperialOutpost_Intro_C_ExecuteUbergraph_Area_ImperialOutpost_Intro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
