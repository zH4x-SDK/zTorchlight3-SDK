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

// Function FortPropLimitWidget.FortPropLimitWidget_C.BlueprintRefreshLimit
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            CurrentComplexity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxComplexity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFortPropLimitWidget_C::BlueprintRefreshLimit(int CurrentComplexity, int MaxComplexity)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortPropLimitWidget.FortPropLimitWidget_C.BlueprintRefreshLimit");

	UFortPropLimitWidget_C_BlueprintRefreshLimit_Params params;
	params.CurrentComplexity = CurrentComplexity;
	params.MaxComplexity = MaxComplexity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortPropLimitWidget.FortPropLimitWidget_C.ExecuteUbergraph_FortPropLimitWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFortPropLimitWidget_C::ExecuteUbergraph_FortPropLimitWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortPropLimitWidget.FortPropLimitWidget_C.ExecuteUbergraph_FortPropLimitWidget");

	UFortPropLimitWidget_C_ExecuteUbergraph_FortPropLimitWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
