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

// Function LegendaryAffixCollectionEquippedWidget.LegendaryAffixCollectionEquippedWidget_C.SetAffixesUnlockedText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLTextBlock*            InText                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULegendaryAffixCollectionEquippedWidget_C::SetAffixesUnlockedText(class UTLTextBlock* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollectionEquippedWidget.LegendaryAffixCollectionEquippedWidget_C.SetAffixesUnlockedText");

	ULegendaryAffixCollectionEquippedWidget_C_SetAffixesUnlockedText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LegendaryAffixCollectionEquippedWidget.LegendaryAffixCollectionEquippedWidget_C.GetSlotListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULegendaryAffixSlotListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ULegendaryAffixSlotListWidget* ULegendaryAffixCollectionEquippedWidget_C::GetSlotListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollectionEquippedWidget.LegendaryAffixCollectionEquippedWidget_C.GetSlotListWidget");

	ULegendaryAffixCollectionEquippedWidget_C_GetSlotListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LegendaryAffixCollectionEquippedWidget.LegendaryAffixCollectionEquippedWidget_C.BlueprintRefresh
// (Event, Protected, BlueprintEvent)
void ULegendaryAffixCollectionEquippedWidget_C::BlueprintRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollectionEquippedWidget.LegendaryAffixCollectionEquippedWidget_C.BlueprintRefresh");

	ULegendaryAffixCollectionEquippedWidget_C_BlueprintRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LegendaryAffixCollectionEquippedWidget.LegendaryAffixCollectionEquippedWidget_C.ExecuteUbergraph_LegendaryAffixCollectionEquippedWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULegendaryAffixCollectionEquippedWidget_C::ExecuteUbergraph_LegendaryAffixCollectionEquippedWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollectionEquippedWidget.LegendaryAffixCollectionEquippedWidget_C.ExecuteUbergraph_LegendaryAffixCollectionEquippedWidget");

	ULegendaryAffixCollectionEquippedWidget_C_ExecuteUbergraph_LegendaryAffixCollectionEquippedWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
