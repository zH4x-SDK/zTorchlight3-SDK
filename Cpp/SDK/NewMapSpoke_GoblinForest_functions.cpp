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

// Function NewMapSpoke_GoblinForest.NewMapSpoke_GoblinForest_C.On_AreaList_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             CurrentList1                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNewMapSpoke_GoblinForest_C::On_AreaList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection, class UListWidget** CurrentList1)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMapSpoke_GoblinForest.NewMapSpoke_GoblinForest_C.On_AreaList_GetNextListBinding_1");

	UNewMapSpoke_GoblinForest_C_On_AreaList_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentList1 != nullptr)
		*CurrentList1 = params.CurrentList1;

}


// Function NewMapSpoke_GoblinForest.NewMapSpoke_GoblinForest_C.GetAreaWidgetList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UNewMapSpoke_GoblinForest_C::GetAreaWidgetList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMapSpoke_GoblinForest.NewMapSpoke_GoblinForest_C.GetAreaWidgetList");

	UNewMapSpoke_GoblinForest_C_GetAreaWidgetList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NewMapSpoke_GoblinForest.NewMapSpoke_GoblinForest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UNewMapSpoke_GoblinForest_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMapSpoke_GoblinForest.NewMapSpoke_GoblinForest_C.Construct");

	UNewMapSpoke_GoblinForest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NewMapSpoke_GoblinForest.NewMapSpoke_GoblinForest_C.ExecuteUbergraph_NewMapSpoke_GoblinForest
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNewMapSpoke_GoblinForest_C::ExecuteUbergraph_NewMapSpoke_GoblinForest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMapSpoke_GoblinForest.NewMapSpoke_GoblinForest_C.ExecuteUbergraph_NewMapSpoke_GoblinForest");

	UNewMapSpoke_GoblinForest_C_ExecuteUbergraph_NewMapSpoke_GoblinForest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
