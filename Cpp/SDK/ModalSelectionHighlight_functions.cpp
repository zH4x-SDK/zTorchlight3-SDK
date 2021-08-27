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

// Function ModalSelectionHighlight.ModalSelectionHighlight_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UModalSelectionHighlight_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalSelectionHighlight.ModalSelectionHighlight_C.PreConstruct");

	UModalSelectionHighlight_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModalSelectionHighlight.ModalSelectionHighlight_C.ExecuteUbergraph_ModalSelectionHighlight
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModalSelectionHighlight_C::ExecuteUbergraph_ModalSelectionHighlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalSelectionHighlight.ModalSelectionHighlight_C.ExecuteUbergraph_ModalSelectionHighlight");

	UModalSelectionHighlight_C_ExecuteUbergraph_ModalSelectionHighlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
