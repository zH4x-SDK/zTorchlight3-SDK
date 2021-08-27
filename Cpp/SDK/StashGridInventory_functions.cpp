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

// Function StashGridInventory.StashGridInventory_C.GetNextList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UStashGridInventory_C::GetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function StashGridInventory.StashGridInventory_C.GetNextList");

	UStashGridInventory_C_GetNextList_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StashGridInventory.StashGridInventory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStashGridInventory_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StashGridInventory.StashGridInventory_C.PreConstruct");

	UStashGridInventory_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StashGridInventory.StashGridInventory_C.ExecuteUbergraph_StashGridInventory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStashGridInventory_C::ExecuteUbergraph_StashGridInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StashGridInventory.StashGridInventory_C.ExecuteUbergraph_StashGridInventory");

	UStashGridInventory_C_ExecuteUbergraph_StashGridInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
