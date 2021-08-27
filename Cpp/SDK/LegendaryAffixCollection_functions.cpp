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

// Function LegendaryAffixCollection.LegendaryAffixCollection_C.GetAffixSubCategoryListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULegendaryAffixCollectionItemCategoryListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ULegendaryAffixCollectionItemCategoryListWidget* ULegendaryAffixCollection_C::GetAffixSubCategoryListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollection.LegendaryAffixCollection_C.GetAffixSubCategoryListWidget");

	ULegendaryAffixCollection_C_GetAffixSubCategoryListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LegendaryAffixCollection.LegendaryAffixCollection_C.GetAllAffixListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* ULegendaryAffixCollection_C::GetAllAffixListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollection.LegendaryAffixCollection_C.GetAllAffixListWidget");

	ULegendaryAffixCollection_C_GetAllAffixListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LegendaryAffixCollection.LegendaryAffixCollection_C.GetMenuButtonList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuButtonList*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuButtonList* ULegendaryAffixCollection_C::GetMenuButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollection.LegendaryAffixCollection_C.GetMenuButtonList");

	ULegendaryAffixCollection_C_GetMenuButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LegendaryAffixCollection.LegendaryAffixCollection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ULegendaryAffixCollection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollection.LegendaryAffixCollection_C.Construct");

	ULegendaryAffixCollection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LegendaryAffixCollection.LegendaryAffixCollection_C.BlueprintRefresh
// (Event, Protected, BlueprintEvent)
void ULegendaryAffixCollection_C::BlueprintRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollection.LegendaryAffixCollection_C.BlueprintRefresh");

	ULegendaryAffixCollection_C_BlueprintRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LegendaryAffixCollection.LegendaryAffixCollection_C.ExecuteUbergraph_LegendaryAffixCollection
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULegendaryAffixCollection_C::ExecuteUbergraph_LegendaryAffixCollection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollection.LegendaryAffixCollection_C.ExecuteUbergraph_LegendaryAffixCollection");

	ULegendaryAffixCollection_C_ExecuteUbergraph_LegendaryAffixCollection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
