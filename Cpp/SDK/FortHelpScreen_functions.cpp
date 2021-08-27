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

// Function FortHelpScreen.FortHelpScreen_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UFortHelpScreen_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHelpScreen.FortHelpScreen_C.GetShowAnimation");

	UFortHelpScreen_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortHelpScreen.FortHelpScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UFortHelpScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHelpScreen.FortHelpScreen_C.Construct");

	UFortHelpScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortHelpScreen.FortHelpScreen_C.ExecuteUbergraph_FortHelpScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFortHelpScreen_C::ExecuteUbergraph_FortHelpScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHelpScreen.FortHelpScreen_C.ExecuteUbergraph_FortHelpScreen");

	UFortHelpScreen_C_ExecuteUbergraph_FortHelpScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
