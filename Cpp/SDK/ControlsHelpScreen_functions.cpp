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

// Function ControlsHelpScreen.ControlsHelpScreen_C.BlueprintOnShown
// (Event, Protected, BlueprintEvent)
void UControlsHelpScreen_C::BlueprintOnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsHelpScreen.ControlsHelpScreen_C.BlueprintOnShown");

	UControlsHelpScreen_C_BlueprintOnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ControlsHelpScreen.ControlsHelpScreen_C.ExecuteUbergraph_ControlsHelpScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControlsHelpScreen_C::ExecuteUbergraph_ControlsHelpScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsHelpScreen.ControlsHelpScreen_C.ExecuteUbergraph_ControlsHelpScreen");

	UControlsHelpScreen_C_ExecuteUbergraph_ControlsHelpScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
