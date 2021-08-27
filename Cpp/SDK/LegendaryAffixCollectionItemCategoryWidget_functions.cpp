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

// Function LegendaryAffixCollectionItemCategoryWidget.LegendaryAffixCollectionItemCategoryWidget_C.GetItemListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULegendaryAffixCollectionItemListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ULegendaryAffixCollectionItemListWidget* ULegendaryAffixCollectionItemCategoryWidget_C::GetItemListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollectionItemCategoryWidget.LegendaryAffixCollectionItemCategoryWidget_C.GetItemListWidget");

	ULegendaryAffixCollectionItemCategoryWidget_C_GetItemListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LegendaryAffixCollectionItemCategoryWidget.LegendaryAffixCollectionItemCategoryWidget_C.BlueprintRefresh
// (Event, Protected, BlueprintEvent)
void ULegendaryAffixCollectionItemCategoryWidget_C::BlueprintRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollectionItemCategoryWidget.LegendaryAffixCollectionItemCategoryWidget_C.BlueprintRefresh");

	ULegendaryAffixCollectionItemCategoryWidget_C_BlueprintRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LegendaryAffixCollectionItemCategoryWidget.LegendaryAffixCollectionItemCategoryWidget_C.ExecuteUbergraph_LegendaryAffixCollectionItemCategoryWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULegendaryAffixCollectionItemCategoryWidget_C::ExecuteUbergraph_LegendaryAffixCollectionItemCategoryWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollectionItemCategoryWidget.LegendaryAffixCollectionItemCategoryWidget_C.ExecuteUbergraph_LegendaryAffixCollectionItemCategoryWidget");

	ULegendaryAffixCollectionItemCategoryWidget_C_ExecuteUbergraph_LegendaryAffixCollectionItemCategoryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
